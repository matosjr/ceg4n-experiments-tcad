
#ifndef ORIGINAL_H
#define ORIGINAL_H
// This file is computer-generated by onnx2c 
// (TODO: add creating command line here)
// (TODO: print creation date here )

// ONNX model:
// produced by pytorch, version 1.11.0
// ONNX IR version: 9
// Model documentation: 
/*

*/

#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#define MAX(X,Y) ( X > Y ? X : Y)
#define MIN(X,Y) ( X < Y ? X : Y)
#define CLIP(X,L) ( MAX(MIN(X,L), -L) )

static const float tensor_Gemm_0_weight[10][4] = 
{
  {0.16649608314037322998f, 0.42547211050987243652f, -0.46455785632133483887f, 0.16510117053985595703f},
  {0.12407740205526351929f, 0.33262452483177185059f, -0.75938671827316284180f, -1.1172995567321777344f},
  {0.46663931012153625488f, -0.13679924607276916504f, -0.20998367667198181152f, 0.75487571954727172852f},
  {-0.031855501234531402588f, 0.29458346962928771973f, -0.088709682226181030273f, -0.79007929563522338867f},
  {0.19885979592800140381f, -0.23065181076526641846f, 1.0853974819183349609f, 1.5005348920822143555f},
  {0.49902820587158203125f, -0.39806076884269714355f, 0.62241339683532714844f, 1.1886281967163085938f},
  {-0.17601001262664794922f, -0.076551020145416259766f, -0.37412494421005249023f, -0.17246848344802856445f},
  {-0.19424217939376831055f, 0.58368033170700073242f, -0.42961931228637695312f, -0.61708348989486694336f},
  {-0.35455858707427978516f, -0.44971632957458496094f, -0.29892426729202270508f, -0.27380108833312988281f},
  {-0.059030354022979736328f, 0.21991294622421264648f, 0.43475252389907836914f, -0.15332841873168945312f}
};
static const float tensor_Gemm_0_bias[10] = 
{0.13792827725410461426f, 1.4080455303192138672f, -0.22212481498718261719f, 1.3389643430709838867f, -0.20090118050575256348f, 0.45731544494628906250f, -0.27667647600173950195f, 0.75212574005126953125f, 0.081034302711486816406f, -0.40155315399169921875f};
static const float tensor_Gemm_1_weight[10][10] = 
{
  {0.44682192802429199219f, 0.38079062104225158691f, 0.20618142187595367432f, 0.12941469252109527588f, -0.54408848285675048828f, -0.53862816095352172852f, -0.041788082569837570190f, 0.60432040691375732422f, -0.25967183709144592285f, -0.20074680447578430176f},
  {-0.13500992953777313232f, -0.18277001380920410156f, 0.056855425238609313965f, -0.19829733669757843018f, -0.026711732149124145508f, -0.17651306092739105225f, -0.14176860451698303223f, -0.098274111747741699219f, -0.044471036642789840698f, -0.28727397322654724121f},
  {0.048329409211874008179f, -0.40358203649520874023f, 0.29830875992774963379f, -0.020743260160088539124f, 1.1723310947418212891f, 0.98928970098495483398f, 0.25472754240036010742f, -0.49820902943611145020f, -0.25759220123291015625f, 0.046677913516759872437f},
  {0.14454606175422668457f, 1.4121385812759399414f, -0.59737008810043334961f, 1.3262184858322143555f, -1.0022163391113281250f, -0.059250213205814361572f, 0.22648985683917999268f, 0.63224935531616210938f, -0.082114040851593017578f, 0.24940845370292663574f},
  {-0.26265716552734375000f, 0.12492801994085311890f, -0.30233028531074523926f, -0.16186803579330444336f, 0.10736929625272750854f, -0.28892102837562561035f, -0.017816491425037384033f, 0.17236885428428649902f, 0.11660238355398178101f, -0.15252122282981872559f},
  {-0.24638067185878753662f, 0.61695474386215209961f, -0.0097826682031154632568f, 0.58642464876174926758f, -0.091900125145912170410f, -0.087491758167743682861f, -0.12728251516819000244f, 0.38834157586097717285f, -0.18380934000015258789f, 0.24835462868213653564f},
  {0.20006659626960754395f, -0.18815255165100097656f, -0.13412906229496002197f, -0.14971508085727691650f, -0.29478192329406738281f, 0.020589390769600868225f, 0.31338298320770263672f, -0.014935664832592010498f, 0.096949957311153411865f, -0.23429580032825469971f},
  {-0.25374567508697509766f, -0.080057315528392791748f, 0.20057067275047302246f, 0.10072353482246398926f, 0.35171321034431457520f, 0.48161384463310241699f, -0.28111499547958374023f, 0.089776434004306793213f, 0.30490553379058837891f, 0.065015114843845367432f},
  {-0.13727982342243194580f, -0.44809406995773315430f, 0.26483702659606933594f, 0.010373635217547416687f, 0.65913373231887817383f, 0.82663798332214355469f, 0.31251251697540283203f, -0.30572411417961120605f, -0.11225275695323944092f, -0.28693738579750061035f},
  {0.24443686008453369141f, 0.40247228741645812988f, 0.0095558110624551773071f, 0.20726342499256134033f, -0.33698901534080505371f, -0.40412425994873046875f, -0.052752979099750518799f, 0.42570716142654418945f, -0.27601045370101928711f, 0.070998765528202056885f}
};
static const float tensor_Gemm_1_bias[10] = 
{0.53792679309844970703f, -0.30121466517448425293f, 0.25782981514930725098f, 1.2284239530563354492f, -0.31573098897933959961f, 0.45815610885620117188f, -0.14732676744461059570f, -0.053114976733922958374f, 0.098880179226398468018f, 0.23851788043975830078f};
static const float tensor_Gemm_2_weight[3][10] = 
{
  {0.90687650442123413086f, -0.21382014453411102295f, -1.4520717859268188477f, 1.3226410150527954102f, -0.30134397745132446289f, 0.20899118483066558838f, 0.26562654972076416016f, -0.21211144328117370605f, -0.68121558427810668945f, 0.41915151476860046387f},
  {-0.62771874666213989258f, -0.086521871387958526611f, 0.0072595300152897834778f, 0.93168580532073974609f, -0.15909439325332641602f, 0.50895273685455322266f, -0.011778554879128932953f, 0.44873639941215515137f, 0.13392554223537445068f, -0.67664849758148193359f},
  {-0.12556372582912445068f, 0.29512566328048706055f, 0.95332938432693481445f, -1.9524672031402587891f, 0.20699651539325714111f, -0.71438407897949218750f, 0.13670419156551361084f, 0.48076292872428894043f, 0.93798357248306274414f, -0.37168666720390319824f}
};
static const float tensor_Gemm_2_bias[3] = 
{-0.14327666163444519043f, 0.25219836831092834473f, -0.46878695487976074219f};
float tensor_onnx__Gemm_7[1][4];
float tensor_onnx__Gemm_9[1][10];
float tensor_onnx__Gemm_11[1][10];

float tensor_input[1][10];
float tensor_input_3[1][10];


static inline void node_Flatten_0( const float tensor_onnx__Flatten_0[1][4], float tensor_onnx__Gemm_7[1][4] )
{
	/* Flatten*/
	float *input = (float*)tensor_onnx__Flatten_0;
	float *output = (float*)tensor_onnx__Gemm_7;
	for( uint32_t i=0; i<4; i++ )
		output[i] = input[i];

}

static inline void node_Gemm_1( const float tensor_onnx__Gemm_7[1][4], const float tensor_Gemm_0_weight[10][4], const float tensor_Gemm_0_bias[10], float tensor_input[1][10] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 4;
	const int N = 10;
	float (*A)[4]  = (float(*)[4])tensor_onnx__Gemm_7;
	float (*Y)[10]  = (float(*)[10])tensor_input;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[10]  = (float(*)[10])tensor_Gemm_0_bias;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor_Gemm_0_weight[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}

static inline void node_Relu_2( const float tensor_input[1][10], float tensor_onnx__Gemm_9[1][10] )
{
	/*Relu*/
	float *X = (float*)tensor_input;
	float *Y = (float*)tensor_onnx__Gemm_9;
	for( uint32_t i=0; i<10; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node_Gemm_3( const float tensor_onnx__Gemm_9[1][10], const float tensor_Gemm_1_weight[10][10], const float tensor_Gemm_1_bias[10], float tensor_input_3[1][10] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 10;
	const int N = 10;
	float (*A)[10]  = (float(*)[10])tensor_onnx__Gemm_9;
	float (*Y)[10]  = (float(*)[10])tensor_input_3;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[10]  = (float(*)[10])tensor_Gemm_1_bias;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor_Gemm_1_weight[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}

static inline void node_Relu_4( const float tensor_input_3[1][10], float tensor_onnx__Gemm_11[1][10] )
{
	/*Relu*/
	float *X = (float*)tensor_input_3;
	float *Y = (float*)tensor_onnx__Gemm_11;
	for( uint32_t i=0; i<10; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node_Gemm_5( const float tensor_onnx__Gemm_11[1][10], const float tensor_Gemm_2_weight[3][10], const float tensor_Gemm_2_bias[3], float tensor_12[1][3] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 10;
	const int N = 3;
	float (*A)[10]  = (float(*)[10])tensor_onnx__Gemm_11;
	float (*Y)[3]  = (float(*)[3])tensor_12;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[3]  = (float(*)[3])tensor_Gemm_2_bias;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor_Gemm_2_weight[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}


void original(const float tensor_onnx__Flatten_0[1][4], float tensor_12[1][3]) {
	node_Flatten_0( tensor_onnx__Flatten_0, tensor_onnx__Gemm_7);
	node_Gemm_1( tensor_onnx__Gemm_7, tensor_Gemm_0_weight, tensor_Gemm_0_bias, tensor_input);
	node_Relu_2( tensor_input, tensor_onnx__Gemm_9);
	node_Gemm_3( tensor_onnx__Gemm_9, tensor_Gemm_1_weight, tensor_Gemm_1_bias, tensor_input_3);
	node_Relu_4( tensor_input_3, tensor_onnx__Gemm_11);
	node_Gemm_5( tensor_onnx__Gemm_11, tensor_Gemm_2_weight, tensor_Gemm_2_bias, tensor_12);
}

#endif // ORIGINAL_H
