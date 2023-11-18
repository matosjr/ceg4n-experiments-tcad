
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

static const float tensor_Gemm_0_weight[10][64] = 
{
  {0.061318572610616683960f, 0.061014413833618164062f, -0.035801328718662261963f, 0.15728779137134552002f, 0.10648924857378005981f, -0.046907916665077209473f, -0.11621037870645523071f, -0.12576220929622650146f, 0.079977117478847503662f, 0.029263181611895561218f, 0.24395076930522918701f, 0.80092793703079223633f, 0.66090744733810424805f, 0.14026375114917755127f, -0.15529300272464752197f, -0.14348290860652923584f, -0.10547593981027603149f, 0.022425821051001548767f, 0.12425559759140014648f, -0.087062515318393707275f, 0.068954885005950927734f, 0.38051709532737731934f, 0.0096539650112390518188f, 0.037536993622779846191f, -0.048857685178518295288f, -0.096506990492343902588f, -0.62903839349746704102f, -0.86062932014465332031f, -0.17067480087280273438f, 0.39250355958938598633f, 0.22550894320011138916f, 0.00089173263404518365860f, -0.083031497895717620850f, 0.012049326673150062561f, -0.0073157907463610172272f, 0.14623178541660308838f, 0.018210157752037048340f, -0.13953049480915069580f, 0.17039375007152557373f, 0.014097825624048709869f, 0.049182761460542678833f, 0.53969097137451171875f, 0.79830241203308105469f, 0.50925946235656738281f, 0.11422494053840637207f, 0.45123827457427978516f, 0.35966572165489196777f, 0.21751537919044494629f, 0.034266561269760131836f, 0.088334634900093078613f, 0.40209445357322692871f, -0.15394529700279235840f, 0.051279932260513305664f, 0.16932077705860137939f, 0.16730855405330657959f, -0.071694023907184600830f, -0.016572033986449241638f, 0.066684119403362274170f, -0.21332830190658569336f, -0.19552534818649291992f, -0.095733374357223510742f, -0.081912510097026824951f, 0.025788171216845512390f, -0.077620148658752441406f},
  {-0.010511228814721107483f, -0.066428028047084808350f, -0.020772961899638175964f, 0.080107502639293670654f, 0.14683601260185241699f, -0.028453661128878593445f, -0.0020649407524615526199f, 0.027198800817131996155f, -0.0062864101491868495941f, 0.10081486403942108154f, 0.49902108311653137207f, 0.89368891716003417969f, 1.0770835876464843750f, 0.24128013849258422852f, -0.14848859608173370361f, 0.0034129892010241746902f, -0.022473622113466262817f, 0.0081326253712177276611f, -0.26330730319023132324f, -0.12469715625047683716f, 0.14369761943817138672f, -0.15637636184692382812f, 0.037309750914573669434f, -0.10011916607618331909f, -0.046729292720556259155f, -0.11599653959274291992f, -0.78806281089782714844f, 0.20503506064414978027f, 0.25661569833755493164f, -0.59805321693420410156f, 0.13461223244667053223f, -0.083238422870635986328f, -0.0084460955113172531128f, -0.063802063465118408203f, -0.31446477770805358887f, -0.025248723104596138000f, -0.63814353942871093750f, 0.068111762404441833496f, 0.36910814046859741211f, 0.15239173173904418945f, 0.12591744959354400635f, 0.40704169869422912598f, 0.63566976785659790039f, 0.38768509030342102051f, 0.0025921233464032411575f, 0.93822741508483886719f, 0.47488799691200256348f, -0.037254348397254943848f, -0.023130293935537338257f, 0.29100713133811950684f, 0.65566980838775634766f, 0.56167173385620117188f, 0.52784192562103271484f, 0.15562488138675689697f, 0.075810581445693969727f, -0.087788052856922149658f, -0.083461798727512359619f, 0.050899870693683624268f, -0.027487546205520629883f, -0.12322394549846649170f, -0.12653951346874237061f, -0.0085168620571494102478f, -0.13291133940219879150f, 0.088092193007469177246f},
  {0.12051493674516677856f, 0.024513771757483482361f, -0.095818959176540374756f, -0.13883090019226074219f, -0.048235159367322921753f, -0.034990377724170684814f, 0.049359865486621856689f, 0.12243496626615524292f, 0.12461695075035095215f, -0.092949479818344116211f, -0.11778867244720458984f, -0.36142742633819580078f, -0.27732133865356445312f, -0.16900581121444702148f, -0.058005098253488540649f, 0.022440927103161811829f, 0.014698609709739685059f, 0.13342478871345520020f, 0.52916032075881958008f, 0.83672833442687988281f, 0.62506467103958129883f, 0.73085540533065795898f, 0.23346085846424102783f, -0.13212439417839050293f, 0.064284391701221466064f, 0.33633175492286682129f, 0.46361127495765686035f, -0.12569533288478851318f, -0.23436626791954040527f, 0.80424714088439941406f, 0.25945362448692321777f, 0.092086307704448699951f, 0.085569165647029876709f, 0.086284756660461425781f, 0.021464025601744651794f, -0.77464765310287475586f, -0.22316470742225646973f, 0.48487666249275207520f, 0.19223412871360778809f, 0.078028708696365356445f, 0.064147286117076873779f, -0.070358112454414367676f, -0.28538697957992553711f, -0.47323596477508544922f, 0.12684091925621032715f, 0.035035841166973114014f, -0.13868987560272216797f, 0.023297362029552459717f, -0.0098457457497715950012f, 0.072305053472518920898f, -0.0068860533647239208221f, 0.073252029716968536377f, 0.095756568014621734619f, 0.054000243544578552246f, -0.054414950311183929443f, -0.024848880246281623840f, 0.081947304308414459229f, 0.0086231445893645286560f, 0.26268395781517028809f, 0.50081628561019897461f, 0.34344229102134704590f, 0.078186839818954467773f, -0.053860552608966827393f, -0.084511555731296539307f},
  {0.0098576042801141738892f, 0.032973721623420715332f, 0.090269081294536590576f, 0.15558066964149475098f, 0.30584111809730529785f, 0.15800441801548004150f, -0.039194870740175247192f, -0.074858158826828002930f, -0.11852308362722396851f, 0.036737959831953048706f, -0.13624918460845947266f, -0.16408559679985046387f, 0.29663398861885070801f, 0.28056162595748901367f, 0.13803745806217193604f, 0.0055619482882320880890f, -0.062085609883069992065f, -0.24165144562721252441f, -0.18906228244304656982f, 0.12145831435918807983f, -0.62768340110778808594f, -0.48248401284217834473f, 0.039187517017126083374f, -0.033588938415050506592f, -0.12516392767429351807f, -0.027342211455106735229f, 0.99616193771362304688f, 0.42328658699989318848f, -1.0961025953292846680f, -0.10358103364706039429f, 0.56905466318130493164f, -0.048299867659807205200f, 0.046526040881872177124f, 0.41149106621742248535f, 1.4493564367294311523f, 0.23534770309925079346f, -0.22474634647369384766f, 0.45559450984001159668f, 0.78850710391998291016f, 0.15534946322441101074f, -0.010196921415627002716f, 0.018850490450859069824f, 0.91580575704574584961f, 0.72273707389831542969f, 0.48520812392234802246f, 0.52171891927719116211f, 0.20705699920654296875f, 0.0012034318642690777779f, -0.060461394488811492920f, -0.27985537052154541016f, -0.24544876813888549805f, -0.042284373193979263306f, -0.028655631467700004578f, -0.15338934957981109619f, -0.10869894176721572876f, -0.038410175591707229614f, -0.046732608228921890259f, -0.0088248448446393013000f, -0.13088062405586242676f, -0.18358428776264190674f, -0.19121703505516052246f, -0.12269342690706253052f, -0.095136605203151702881f, -0.11673616617918014526f},
  {-0.11528611183166503906f, -0.099093914031982421875f, -0.0093456394970417022705f, -0.10580570995807647705f, 0.037143923342227935791f, -0.015286887064576148987f, -0.090516619384288787842f, 0.10846988856792449951f, -0.12276098877191543579f, -0.00042908667819574475288f, 0.071194767951965332031f, 0.027018958702683448792f, 0.00082840397953987121582f, -0.048510253429412841797f, -0.092276334762573242188f, -0.052183356136083602905f, -0.10381098091602325439f, 0.10857354104518890381f, -0.089955620467662811279f, -0.069744244217872619629f, 0.11311662942171096802f, -0.0074812807142734527588f, -0.033492814749479293823f, -0.083538547158241271973f, -0.0023386874236166477203f, 0.089409910142421722412f, 0.074965745210647583008f, -0.10674487054347991943f, -0.10862481594085693359f, -0.0024113245308399200439f, -0.037296697497367858887f, -0.046441022306680679321f, 0.017347846180200576782f, -0.055019680410623550415f, 0.055023446679115295410f, -0.10716365277767181396f, -0.029598578810691833496f, -0.11592748761177062988f, 0.0078040501102805137634f, -0.039741821587085723877f, 0.074537873268127441406f, 0.047313995659351348877f, -0.0078345621004700660706f, -0.081168301403522491455f, -0.0012608432443812489510f, 0.072043098509311676025f, 0.097062669694423675537f, -0.090563639998435974121f, 0.030108828097581863403f, -0.098461970686912536621f, -0.00010943430243059992790f, -0.11498968303203582764f, -0.064310327172279357910f, -0.089449718594551086426f, 0.064578920602798461914f, 0.047666430473327636719f, -0.073679983615875244141f, -0.059816207736730575562f, 0.081130668520927429199f, 0.12430468201637268066f, -0.041227050125598907471f, -0.092982843518257141113f, 0.055832680314779281616f, -0.11676885932683944702f},
  {0.033742398023605346680f, -0.11897175014019012451f, -0.0050961985252797603607f, -0.0087038651108741760254f, -0.027489110827445983887f, 0.031099151819944381714f, -0.059712365269660949707f, -0.11417680978775024414f, 0.031476892530918121338f, -0.071079753339290618896f, 0.040407601743936538696f, -0.14374636113643646240f, -0.060423165559768676758f, 0.12080476433038711548f, 0.050609078258275985718f, 0.036980856209993362427f, -0.10691985487937927246f, 0.030077815055847167969f, -0.12686750292778015137f, -0.18151137232780456543f, 0.14239244163036346436f, 0.018440501764416694641f, -0.10938027501106262207f, 0.091752476990222930908f, -0.10855981707572937012f, -0.019502276554703712463f, -0.011128478683531284332f, -0.10088450461626052856f, 0.20927052199840545654f, -0.10631061345338821411f, 0.036239482462406158447f, -0.051641907542943954468f, -0.032576769590377807617f, -0.038217499852180480957f, -0.14220161736011505127f, 0.20088885724544525146f, -0.028826896101236343384f, -0.19883921742439270020f, 0.070957049727439880371f, -0.11313529312610626221f, 0.051452729851007461548f, -0.15358518064022064209f, -0.062717571854591369629f, 0.15788979828357696533f, -0.083206310868263244629f, 0.044011425226926803589f, -0.050272934138774871826f, -0.097682639956474304199f, 0.10911062359809875488f, -0.0034534139558672904968f, 0.030082322657108306885f, 0.063733577728271484375f, 0.060934323817491531372f, 0.045048810541629791260f, 0.00068457087036222219467f, 0.081644967198371887207f, 0.086016207933425903320f, 0.020111953839659690857f, -0.15312665700912475586f, -0.10986913740634918213f, 0.016908498480916023254f, 0.050401400774717330933f, 0.010203238576650619507f, -0.078170806169509887695f},
  {-0.085816316306591033936f, -0.10020069032907485962f, -0.082987584173679351807f, 0.0083577949553728103638f, -0.075175829231739044189f, -0.048780761659145355225f, 0.012188880704343318939f, -0.0050015458837151527405f, -0.039526600390672683716f, 0.044067114591598510742f, 0.046176485717296600342f, 0.0085977613925933837891f, 0.012062436901032924652f, -0.11087225377559661865f, -0.0079067675396800041199f, 0.026122966781258583069f, -0.058497477322816848755f, -0.057440649718046188354f, -0.050395976752042770386f, -0.10757609456777572632f, -0.13283905386924743652f, 0.074579462409019470215f, 0.080496445298194885254f, -0.035682845860719680786f, 0.0064105978235602378845f, 0.00084026122931391000748f, 0.11601384729146957397f, -0.11823263019323348999f, 0.041105400770902633667f, -0.13149784505367279053f, -0.064423374831676483154f, -0.027397466823458671570f, -0.097142800688743591309f, 0.032998178154230117798f, -0.094834864139556884766f, 0.043950337916612625122f, 0.089685186743736267090f, -0.12431596219539642334f, -0.063979849219322204590f, 0.045433454215526580811f, -0.014299207367002964020f, -0.0011977161047980189323f, 0.088731639087200164795f, 0.0044004139490425586700f, 0.042068034410476684570f, -0.075754933059215545654f, -0.082499615848064422607f, 0.10818402469158172607f, -0.078465782105922698975f, 0.045335747301578521729f, -0.032828669995069503784f, -0.048605140298604965210f, -0.014650407247245311737f, 0.071411944925785064697f, -0.015772676095366477966f, 0.035875879228115081787f, -0.0062237274833023548126f, -0.11836753785610198975f, -0.030273782089352607727f, 0.046259313821792602539f, -0.082834430038928985596f, 0.075236849486827850342f, 0.094874754548072814941f, -0.055197831243276596069f},
  {-0.021767463535070419312f, 0.039667401462793350220f, 0.070068411529064178467f, 0.042356047779321670532f, -0.19018754363059997559f, -0.20175872743129730225f, -0.053653568029403686523f, 0.10357465595006942749f, 0.012933795340359210968f, 0.11167862266302108765f, 0.045164950191974639893f, 0.27379131317138671875f, 0.32768598198890686035f, 0.39607679843902587891f, 0.16086551547050476074f, 0.018891608342528343201f, 0.081051871180534362793f, -0.047741074115037918091f, 0.23882755637168884277f, 0.29365110397338867188f, 0.25461697578430175781f, 0.58971124887466430664f, 0.67574429512023925781f, 0.22232663631439208984f, -0.12834110856056213379f, -0.10197777301073074341f, 0.32507821917533874512f, 0.68225693702697753906f, -0.20583455264568328857f, -0.31047195196151733398f, 0.38121870160102844238f, -0.034265208989381790161f, -0.024760628119111061096f, -0.0026109470054507255554f, 0.020777041092514991760f, -0.37555965781211853027f, -0.79799908399581909180f, -0.096320599317550659180f, 0.21829491853713989258f, -0.055316533893346786499f, 0.092321366071701049805f, 0.26891312003135681152f, 0.29569119215011596680f, -0.53980052471160888672f, -0.29748043417930603027f, 0.22099821269512176514f, 0.013615910895168781281f, 0.084697499871253967285f, -0.031139114871621131897f, 0.15447887778282165527f, 0.89725482463836669922f, 0.73867934942245483398f, 0.65195167064666748047f, 0.34102997183799743652f, -0.037051919847726821899f, 0.031940806657075881958f, -0.044998176395893096924f, -0.11669704318046569824f, 0.022282695397734642029f, 0.15603783726692199707f, 0.0013873473508283495903f, 0.030866594985127449036f, -0.0082599408924579620361f, -0.023359682410955429077f},
  {-0.030554860830307006836f, 0.018364777788519859314f, -0.019035730510950088501f, -0.011968588456511497498f, 0.12493725866079330444f, 0.14627939462661743164f, -0.056309945881366729736f, 0.065504126250743865967f, 0.026415063068270683289f, -0.13705067336559295654f, -0.092774450778961181641f, 0.017721468582749366760f, -0.037988107651472091675f, 0.033559732139110565186f, 0.15391775965690612793f, 0.017854696139693260193f, 0.018409570679068565369f, 0.010924619622528553009f, 0.30318415164947509766f, 0.27308729290962219238f, -0.50692886114120483398f, 0.023124601691961288452f, 0.15057127177715301514f, 0.024976767599582672119f, -0.0033131705131381750107f, -0.098907090723514556885f, 0.28423604369163513184f, 0.33443483710289001465f, -0.17146375775337219238f, 0.39386689662933349609f, -0.034912668168544769287f, 0.028502047061920166016f, -0.034047495573759078979f, -0.071935385465621948242f, 0.21193592250347137451f, 0.81222957372665405273f, 0.50208437442779541016f, 0.18935400247573852539f, -0.089614264667034149170f, -0.12190129607915878296f, 0.061834108084440231323f, -0.085707731544971466064f, 0.27216365933418273926f, 0.41931888461112976074f, 0.26803708076477050781f, -0.068262360990047454834f, 0.050250690430402755737f, 0.093573018908500671387f, -0.018439967185258865356f, -0.14814539253711700439f, -0.11995402723550796509f, -0.066844731569290161133f, 0.18402761220932006836f, 0.16692070662975311279f, 0.089604146778583526611f, -0.039280824363231658936f, -0.018659915775060653687f, -0.099656350910663604736f, -0.070383653044700622559f, -0.033783089369535446167f, -0.072562806308269500732f, 0.011225624941289424896f, 0.095224812626838684082f, 0.057780370116233825684f},
  {-0.11030455678701400757f, 0.12106439471244812012f, -0.12866221368312835693f, -0.071190640330314636230f, 0.024137448519468307495f, -0.029862139374017715454f, 0.0028150053694844245911f, -0.064551495015621185303f, -0.11128359287977218628f, -0.14309942722320556641f, -0.11110257357358932495f, -0.12440979480743408203f, 0.19634060561656951904f, 0.12699390947818756104f, -0.018211806192994117737f, 0.030044969171285629272f, -0.061117872595787048340f, 0.063886664807796478271f, 0.038543097674846649170f, 0.060158770531415939331f, 0.55474859476089477539f, 0.46738022565841674805f, 0.12441655993461608887f, 0.0021875288803130388260f, -0.010224780999124050140f, 0.017646549269556999207f, -0.33578503131866455078f, -0.78719049692153930664f, 0.025557849556207656860f, -0.0021963648032397031784f, 0.33344450592994689941f, 0.036561541259288787842f, -0.11255310475826263428f, 0.16088499128818511963f, -0.32384127378463745117f, -0.19906754791736602783f, -0.087377801537513732910f, -0.65889626741409301758f, 0.10047091543674468994f, 0.0089871333912014961243f, 0.091444216668605804443f, 0.0052738385275006294250f, 0.44662523269653320312f, 0.85139501094818115234f, -0.014076823368668556213f, -0.53864133358001708984f, 0.18650479614734649658f, 0.16167090833187103271f, -0.13499015569686889648f, -0.12706331908702850342f, 0.14761163294315338135f, 0.13497331738471984863f, 0.051580123603343963623f, -0.0090730711817741394043f, -0.011761383153498172760f, 0.018798762932419776917f, 0.093933269381523132324f, -0.059059932827949523926f, -0.13819205760955810547f, 0.070753201842308044434f, 0.091248877346515655518f, 0.029966449365019798279f, -0.11424077302217483521f, 0.068410165607929229736f}
};
static const float tensor_Gemm_0_bias[10] = 
{-0.19805845618247985840f, 0.35788545012474060059f, 0.41228845715522766113f, 0.29795470833778381348f, -0.0049672489985823631287f, 0.16437748074531555176f, -0.073406949639320373535f, -0.023060778155922889709f, 0.0063991933129727840424f, 0.61454629898071289062f};
static const float tensor_Gemm_1_weight[10][10] = 
{
  {0.30106332898139953613f, 0.19965204596519470215f, 0.19312031567096710205f, 0.87905883789062500000f, -0.034083835780620574951f, -0.15101435780525207520f, 0.16044895350933074951f, 1.0782592296600341797f, -0.79540967941284179688f, 0.35153678059577941895f},
  {0.077438764274120330811f, 0.61945170164108276367f, -0.85681974887847900391f, -1.4631518125534057617f, 0.29214218258857727051f, 0.47250437736511230469f, -0.28876006603240966797f, -0.70739877223968505859f, -0.42279973626136779785f, 1.2863893508911132812f},
  {1.8576011657714843750f, 0.62690877914428710938f, -0.69087791442871093750f, 0.034435283392667770386f, 0.11932048201560974121f, 0.18130296468734741211f, 0.012912858277559280396f, -0.57941567897796630859f, 0.066985666751861572266f, 0.42240694165229797363f},
  {0.44702658057212829590f, 1.4865901470184326172f, -0.064152486622333526611f, -1.2826799154281616211f, -0.027091473340988159180f, -0.13003095984458923340f, -0.046498429030179977417f, 0.66270697116851806641f, -0.59789937734603881836f, -0.74921458959579467773f},
  {-0.51374202966690063477f, -1.5190180540084838867f, -0.12818731367588043213f, 1.1398950815200805664f, 0.00032968196319416165352f, 0.23096781969070434570f, -0.30986252427101135254f, -0.65723496675491333008f, 0.70110523700714111328f, -0.49476858973503112793f},
  {-0.71641069650650024414f, 0.37781810760498046875f, -0.12858736515045166016f, 0.10229067504405975342f, -0.10628257691860198975f, -0.12942516803741455078f, -0.0080946749076247215271f, 1.1360715627670288086f, -0.066981635987758636475f, -0.46510753035545349121f},
  {-0.16379509866237640381f, 0.55372226238250732422f, -0.91736972332000732422f, 1.5484405755996704102f, 0.28312772512435913086f, 0.30163183808326721191f, 0.27406713366508483887f, -0.90274846553802490234f, 0.22664313018321990967f, -0.69622474908828735352f},
  {-0.29671746492385864258f, -0.81189328432083129883f, 1.4911146163940429688f, -0.92063826322555541992f, 0.070661246776580810547f, -0.15555201470851898193f, -0.093844607472419738770f, -0.18720382452011108398f, -0.25985270738601684570f, 0.58931481838226318359f},
  {0.45173677802085876465f, 0.20883734524250030518f, -0.41821268200874328613f, -0.37341448664665222168f, 0.30879524350166320801f, 0.030039202421903610229f, -0.23644824326038360596f, 0.66041916608810424805f, 0.76953876018524169922f, 0.37875366210937500000f},
  {-0.31196245551109313965f, -0.95294797420501708984f, 0.91339617967605590820f, 0.17503705620765686035f, 0.28726604580879211426f, -0.18321166932582855225f, -0.28126075863838195801f, -0.50205820798873901367f, 0.22672256827354431152f, -0.28320467472076416016f}
};
static const float tensor_Gemm_1_bias[10] = 
{-1.8042834997177124023f, 1.0678052902221679688f, -0.94282180070877075195f, -0.027044145390391349792f, 0.56712967157363891602f, 0.044691864401102066040f, -0.65637075901031494141f, 0.36275404691696166992f, -0.32053613662719726562f, 0.72826522588729858398f};
float tensor_onnx__Gemm_5[1][64];
float tensor_onnx__Gemm_7[1][10];

float tensor_input[1][10];


static inline void node_Flatten_0( const float tensor_onnx__Flatten_0[1][64], float tensor_onnx__Gemm_5[1][64] )
{
	/* Flatten*/
	float *input = (float*)tensor_onnx__Flatten_0;
	float *output = (float*)tensor_onnx__Gemm_5;
	for( uint32_t i=0; i<64; i++ )
		output[i] = input[i];

}

static inline void node_Gemm_1( const float tensor_onnx__Gemm_5[1][64], const float tensor_Gemm_0_weight[10][64], const float tensor_Gemm_0_bias[10], float tensor_input[1][10] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 64;
	const int N = 10;
	float (*A)[64]  = (float(*)[64])tensor_onnx__Gemm_5;
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

static inline void node_Relu_2( const float tensor_input[1][10], float tensor_onnx__Gemm_7[1][10] )
{
	/*Relu*/
	float *X = (float*)tensor_input;
	float *Y = (float*)tensor_onnx__Gemm_7;
	for( uint32_t i=0; i<10; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node_Gemm_3( const float tensor_onnx__Gemm_7[1][10], const float tensor_Gemm_1_weight[10][10], const float tensor_Gemm_1_bias[10], float tensor_8[1][10] )
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
	float (*A)[10]  = (float(*)[10])tensor_onnx__Gemm_7;
	float (*Y)[10]  = (float(*)[10])tensor_8;
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


void original(const float tensor_onnx__Flatten_0[1][64], float tensor_8[1][10]) {
	node_Flatten_0( tensor_onnx__Flatten_0, tensor_onnx__Gemm_5);
	node_Gemm_1( tensor_onnx__Gemm_5, tensor_Gemm_0_weight, tensor_Gemm_0_bias, tensor_input);
	node_Relu_2( tensor_input, tensor_onnx__Gemm_7);
	node_Gemm_3( tensor_onnx__Gemm_7, tensor_Gemm_1_weight, tensor_Gemm_1_bias, tensor_8);
}

#endif // ORIGINAL_H
