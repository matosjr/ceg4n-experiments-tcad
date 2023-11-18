

#include <stdlib.h>
#include <stdio.h>

#include "original.h"
#include "quantized.h"

#ifndef EQUIVALENCE
#define EQUIVALENCE 0
#endif

#ifndef EPSILON
#define EPSILON -1
#endif

#define BATCH 1

#ifndef WIDTH
#define WIDTH 64
#endif

#ifndef OUTPUT_SIZE
#define OUTPUT_SIZE 10
#endif

float nondet_float();

const float lower_bounds[BATCH][WIDTH] = 
{{0, 0, 0, 0.001764706335961818695068359375, 0.001764706335961818695068359375, 0, 0, 0, 0, 0, 0.017450980842113494873046875, 0.3468627631664276123046875, 0.3625490367412567138671875, 0.013529412448406219482421875, 0, 0, 0, 0, 0.24882353842258453369140625, 0.3429411947727203369140625, 0.4566666781902313232421875, 0.3743137419223785400390625, 0.037058822810649871826171875, 0, 0, 0.088039219379425048828125, 0.3625490367412567138671875, 0.02529411949217319488525390625, 0.02529411949217319488525390625, 0.3194117844104766845703125, 0.2998039424419403076171875, 0, 0, 0.2252941131591796875, 0.150784313678741455078125, 0, 0, 0.2762745320796966552734375, 0.3390196263790130615234375, 0, 0, 0.2684313952922821044921875, 0.088039219379425048828125, 0.048823527991771697998046875, 0.3037255108356475830078125, 0.4370588362216949462890625, 0.068431377410888671875, 0, 0, 0.20176470279693603515625, 0.4174509942531585693359375, 0.4684313833713531494140625, 0.3272549211978912353515625, 0.048823527991771697998046875, 0, 0, 0, 0.001764706335961818695068359375, 0.048823527991771697998046875, 0.044901959598064422607421875, 0, 0, 0, 0}};

const float upper_bounds[BATCH][WIDTH] = 
{{0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.0217647068202495574951171875, 0.0217647068202495574951171875, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.0374509803950786590576171875, 0.3668627440929412841796875, 0.3825490176677703857421875, 0.0335294120013713836669921875, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.01392156817018985748291015625, 0.2688235342502593994140625, 0.3629411756992340087890625, 0.4766666591167449951171875, 0.3943137228488922119140625, 0.05705882608890533447265625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.10803921520709991455078125, 0.3825490176677703857421875, 0.04529412090778350830078125, 0.04529412090778350830078125, 0.3394117653369903564453125, 0.3198039233684539794921875, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.2452941238880157470703125, 0.1707843244075775146484375, 0.00999999977648258209228515625, 0.0178431384265422821044921875, 0.2962745130062103271484375, 0.3590196073055267333984375, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.2884313762187957763671875, 0.10803921520709991455078125, 0.06882353127002716064453125, 0.3237254917621612548828125, 0.4570588171482086181640625, 0.08843137323856353759765625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.2217647135257720947265625, 0.4374509751796722412109375, 0.4884313642978668212890625, 0.3472549021244049072265625, 0.06882353127002716064453125, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.0217647068202495574951171875, 0.06882353127002716064453125, 0.06490196287631988525390625, 0.0178431384265422821044921875, 0.00999999977648258209228515625, 0.00999999977648258209228515625, 0.00999999977648258209228515625}};

static inline void init_symbolic_input(float input[BATCH * WIDTH])
{
    for(size_t i = 0; i < BATCH * WIDTH; i++)
    {
        input[i] = nondet_float();            
    }
}

static inline void add_input_assumptions(float input[BATCH * WIDTH], float x[BATCH][WIDTH])
{
    size_t i = 0;
    for(size_t b = 0; b < BATCH; b++)
    {
	    for(size_t w = 0; w < WIDTH; w++)
        {
            x[b][w] = input[i];
		    __ESBMC_assume(lower_bounds[b][w] <= x[b][w] && x[b][w] <= upper_bounds[b][w]);   
            i++;
        }
    }
}

static inline int top1(const float output[BATCH][OUTPUT_SIZE])
{
    int top = 0;
    for(size_t b = 0; b < BATCH; b++)
    {
        for (size_t o = 0; o < OUTPUT_SIZE; o++)
        {
            if(output[b][o] <= output[b][top])
            {
                continue;
            }
            top = (int) o;
        }
    }
    return top;
}

static inline void epsilon(
    const float output_original[BATCH][OUTPUT_SIZE],
    const float output_quantized[BATCH][OUTPUT_SIZE],
    float output_diff[BATCH][OUTPUT_SIZE]
){
    for(size_t b = 0; b < BATCH; b++)
    {
        for (size_t O = 0; O < OUTPUT_SIZE; O++)
        {
            output_diff[b][O] = output_original[b][O] - output_quantized[b][O];
            if(output_diff[b][O] >= 0)
            {
                continue;
            }
            output_diff[b][O] *= -1.0; 
        }
    }
}

static inline void check_top(const float output_original[BATCH][OUTPUT_SIZE], const float output_quantized[BATCH][OUTPUT_SIZE])
{
    int original_prediction = top1(output_original);
	int quantized_prediction = top1(output_quantized);

    int property_holds = (original_prediction==quantized_prediction);
    __ESBMC_assert(property_holds, "Networks not equivalent.");
}

static inline void check_epsilon(const float output_original[BATCH][OUTPUT_SIZE], const float output_quantized[BATCH][OUTPUT_SIZE])
{
    float output_diff[BATCH][OUTPUT_SIZE];
    
    // Get output diff
    epsilon(output_original, output_quantized, output_diff);

    int property_holds = 1;
    for(size_t O = 0; O < OUTPUT_SIZE; O++)
    {
        if (output_diff[0][O] <= EPSILON)
        {
            continue;
        }

        property_holds = 0;
        break;
    }

    __ESBMC_assert(property_holds, "Networks not equivalent.");
}

int main()
{

    // Define input and output vectors
    float input[BATCH*WIDTH];
    float x[BATCH][WIDTH];
    float original_output[BATCH][OUTPUT_SIZE];
    float quantized_output[BATCH][OUTPUT_SIZE];


    // Init symbolic input vector
    init_symbolic_input(input);

    // Add input assumptions
    add_input_assumptions(input, x);

    // Call networks
    original(x, original_output);
    quantized(x, quantized_output);

    if(EQUIVALENCE == 0)
    {
        check_top(original_output, quantized_output);
    } else {
        check_epsilon(original_output, quantized_output);
    }
}
