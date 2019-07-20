/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
double BWrange_omg_p25p25_u=2.7;
int twidth_omg_p25p25_u=0;
int gtwidth_omg_p25p25_u=0;
int gswidth_omg_p25p25_u=0;
 REAL va_omg_p25p25_u[559]={0};
const int nin_omg_p25p25_u = 2;

const int nout_omg_p25p25_u = 2;

const int nprc_omg_p25p25_u = 39;

char * pinf_omg_p25p25_u(int nsub,int nprtcl,REAL* pmass,int * num)
{
int n;
 static char *names[39][4] ={
{"~o1","~o1","A","A"},
{"~o1","~o1","Z","hb"},
{"~o1","~o1","Z","ha"},
{"~o1","~o1","Z","h3"},
{"~o1","~o1","Z","h2"},
{"~o1","~o1","Z","h1"},
{"~o1","~o1","Z","Z"},
{"~o1","~o1","W+","H-"},
{"~o1","~o1","W+","W-"},
{"~o1","~o1","W-","H+"},
{"~o1","~o1","G","G"},
{"~o1","~o1","ne","Ne"},
{"~o1","~o1","e","E"},
{"~o1","~o1","nm","Nm"},
{"~o1","~o1","m","M"},
{"~o1","~o1","nl","Nl"},
{"~o1","~o1","l","L"},
{"~o1","~o1","u","U"},
{"~o1","~o1","d","D"},
{"~o1","~o1","s","S"},
{"~o1","~o1","c","C"},
{"~o1","~o1","t","T"},
{"~o1","~o1","b","B"},
{"~o1","~o1","h1","hb"},
{"~o1","~o1","h1","ha"},
{"~o1","~o1","h1","h3"},
{"~o1","~o1","h1","h2"},
{"~o1","~o1","h1","h1"},
{"~o1","~o1","h2","hb"},
{"~o1","~o1","h2","ha"},
{"~o1","~o1","h2","h3"},
{"~o1","~o1","h2","h2"},
{"~o1","~o1","h3","hb"},
{"~o1","~o1","h3","ha"},
{"~o1","~o1","h3","h3"},
{"~o1","~o1","ha","hb"},
{"~o1","~o1","ha","ha"},
{"~o1","~o1","hb","hb"},
{"~o1","~o1","H+","H-"}};
int const nvalue[39][4]={
{15,15,0,0},
{15,15,2,13},
{15,15,2,12},
{15,15,2,11},
{15,15,2,10},
{15,15,2,9},
{15,15,2,2},
{15,15,3,14},
{15,15,3,3},
{15,15,3,14},
{15,15,0,0},
{15,15,0,0},
{15,15,0,0},
{15,15,0,0},
{15,15,0,0},
{15,15,0,0},
{15,15,4,4},
{15,15,5,5},
{15,15,5,5},
{15,15,5,5},
{15,15,130,130},
{15,15,128,128},
{15,15,129,129},
{15,15,9,13},
{15,15,9,12},
{15,15,9,11},
{15,15,9,10},
{15,15,9,9},
{15,15,10,13},
{15,15,10,12},
{15,15,10,11},
{15,15,10,10},
{15,15,11,13},
{15,15,11,12},
{15,15,11,11},
{15,15,12,13},
{15,15,12,12},
{15,15,13,13},
{15,15,14,14}};
int const pcode[39][4]={
{1000022,1000022,22,22},
{1000022,1000022,23,46},
{1000022,1000022,23,36},
{1000022,1000022,23,45},
{1000022,1000022,23,35},
{1000022,1000022,23,25},
{1000022,1000022,23,23},
{1000022,1000022,24,-37},
{1000022,1000022,24,-24},
{1000022,1000022,-24,37},
{1000022,1000022,21,21},
{1000022,1000022,12,-12},
{1000022,1000022,11,-11},
{1000022,1000022,14,-14},
{1000022,1000022,13,-13},
{1000022,1000022,16,-16},
{1000022,1000022,15,-15},
{1000022,1000022,2,-2},
{1000022,1000022,1,-1},
{1000022,1000022,3,-3},
{1000022,1000022,4,-4},
{1000022,1000022,6,-6},
{1000022,1000022,5,-5},
{1000022,1000022,25,46},
{1000022,1000022,25,36},
{1000022,1000022,25,45},
{1000022,1000022,25,35},
{1000022,1000022,25,25},
{1000022,1000022,35,46},
{1000022,1000022,35,36},
{1000022,1000022,35,45},
{1000022,1000022,35,35},
{1000022,1000022,45,46},
{1000022,1000022,45,36},
{1000022,1000022,45,45},
{1000022,1000022,36,46},
{1000022,1000022,36,36},
{1000022,1000022,46,46},
{1000022,1000022,37,-37}};
if  (nsub<0 ||nsub>39||nprtcl<0||nprtcl>4) return NULL;
if(pmass)
{
  n=nvalue[nsub-1][nprtcl-1];
  if (n==0) *pmass=0; else *pmass=va_omg_p25p25_u[n];
  if (*pmass<0) (*pmass)=-(*pmass);
}
if(num)*num=pcode[nsub-1][nprtcl-1];
return names[nsub-1][nprtcl-1];
}
char * polarized_omg_p25p25_u[3]={"",",",","};
int pinfAux_omg_p25p25_u(int nsub,int nprtcl,int*spin2,int*color,int*neutral)
{
int const pcode[39][4]={
{1000022,1000022,22,22},
{1000022,1000022,23,46},
{1000022,1000022,23,36},
{1000022,1000022,23,45},
{1000022,1000022,23,35},
{1000022,1000022,23,25},
{1000022,1000022,23,23},
{1000022,1000022,24,-37},
{1000022,1000022,24,-24},
{1000022,1000022,-24,37},
{1000022,1000022,21,21},
{1000022,1000022,12,-12},
{1000022,1000022,11,-11},
{1000022,1000022,14,-14},
{1000022,1000022,13,-13},
{1000022,1000022,16,-16},
{1000022,1000022,15,-15},
{1000022,1000022,2,-2},
{1000022,1000022,1,-1},
{1000022,1000022,3,-3},
{1000022,1000022,4,-4},
{1000022,1000022,6,-6},
{1000022,1000022,5,-5},
{1000022,1000022,25,46},
{1000022,1000022,25,36},
{1000022,1000022,25,45},
{1000022,1000022,25,35},
{1000022,1000022,25,25},
{1000022,1000022,35,46},
{1000022,1000022,35,36},
{1000022,1000022,35,45},
{1000022,1000022,35,35},
{1000022,1000022,45,46},
{1000022,1000022,45,36},
{1000022,1000022,45,45},
{1000022,1000022,36,46},
{1000022,1000022,36,36},
{1000022,1000022,46,46},
{1000022,1000022,37,-37}};
int const Spin2[39][4]={
{1,1,2,2},
{1,1,2,0},
{1,1,2,0},
{1,1,2,0},
{1,1,2,0},
{1,1,2,0},
{1,1,2,2},
{1,1,2,0},
{1,1,2,2},
{1,1,2,0},
{1,1,2,2},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0}};
int const Color[39][4]={
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,8,8},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,3,-3},
{1,1,3,-3},
{1,1,3,-3},
{1,1,3,-3},
{1,1,3,-3},
{1,1,3,-3},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1}};
int const Neutral[39][4]={
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,1,1},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,0,0},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,1,1},
{1,1,0,0}};
if(nsub<0 ||nsub>39||nprtcl<0||nprtcl>4) return 0;
if(spin2) *spin2=Spin2[nsub-1][nprtcl-1];
if(color) *color=Color[nsub-1][nprtcl-1];
if(neutral) *neutral=Neutral[nsub-1][nprtcl-1];
return pcode[nsub-1][nprtcl-1];
}
const int nvar_omg_p25p25_u = 172;

const int nfunc_omg_p25p25_u = 386;

char * varName_omg_p25p25_u[559]={"P(cms)"
,"EE"
,"MZ"
,"MW"
,"Ml"
,"Mq"
,"tB"
,"xvev"
,"muP"
,"Mh1"
,"Mh2"
,"Mh3"
,"Mha"
,"Mhb"
,"MHc"
,"MNE1"
,"MNE2"
,"MNE3"
,"MNE4"
,"MNE5"
,"MC1"
,"MC2"
,"MSuL"
,"MSuR"
,"MSdL"
,"MSdR"
,"MScL"
,"MScR"
,"MSsL"
,"MSsR"
,"MSt1"
,"MSt2"
,"MSb1"
,"MSb2"
,"MSeL"
,"MSeR"
,"MSmL"
,"MSmR"
,"MSl1"
,"MSl2"
,"MSne"
,"MSnm"
,"MSnl"
,"Zn11"
,"Zn12"
,"Zn13"
,"Zn14"
,"Zn15"
,"Zn21"
,"Zn22"
,"Zn23"
,"Zn24"
,"Zn25"
,"Zn31"
,"Zn32"
,"Zn33"
,"Zn34"
,"Zn35"
,"Zn41"
,"Zn42"
,"Zn43"
,"Zn44"
,"Zn45"
,"Zn51"
,"Zn52"
,"Zn53"
,"Zn54"
,"Zn55"
,"Zu11"
,"Zu12"
,"Zu21"
,"Zu22"
,"Zv11"
,"Zv12"
,"Zv21"
,"Zv22"
,"Zt11"
,"Zt12"
,"Zt21"
,"Zt22"
,"Zb11"
,"Zb12"
,"Zb21"
,"Zb22"
,"Zl11"
,"Zl12"
,"Zl21"
,"Zl22"
,"Zh11"
,"Zh12"
,"Zh13"
,"Zh21"
,"Zh22"
,"Zh23"
,"Zh31"
,"Zh32"
,"Zh33"
,"la1"
,"la2"
,"la3"
,"la4"
,"la5"
,"la6"
,"la7"
,"la1s"
,"la2s"
,"la3s"
,"la4s"
,"la5s"
,"la6s"
,"la7s"
,"la8s"
,"aa1"
,"aa2"
,"aa3"
,"aa4"
,"aa5"
,"aa6"
,"CW"
,"SW"
,"C2W"
,"sb"
,"cb"
,"Pa12"
,"Pa22"
,"Pa11"
,"Pa21"
,"Td3"
,"Mt"
,"Mb"
,"Mc"
,"Td2"
,"Zuu11"
,"Zuu12"
,"Zuu21"
,"Zuu22"
,"Zdd11"
,"Zdd12"
,"Zdd21"
,"Zdd22"
,"Zcc11"
,"Zcc12"
,"Zcc21"
,"Zcc22"
,"Zss11"
,"Zss12"
,"Zss21"
,"Zss22"
,"MbMM"
,"MtMM"
,"NMM13"
,"NMM14"
,"NMM23"
,"NMM24"
,"NMM34"
,"NMM35"
,"NMM45"
,"NMM55"
,"Rqcdh1"
,"Rqcdh2"
,"Rqcdh3"
,"Rqcdha"
,"Rqcdhb"
,"LGGh1"
,"LGGh2"
,"LGGh3"
,"LAAh1"
,"LAAh2"
,"LAAh3"
,"LGGha"
,"LGGhb"
,"LAAha"
,"LAAhb"
,"B00015"
,"B00016"
,"B00017"
,"B00018"
,"B00024"
,"B00025"
,"B00026"
,"B00027"
,"B00049"
,"B00050"
,"B00051"
,"B00052"
,"B00069"
,"B00070"
,"B00071"
,"B00072"
,"B00077"
,"B00078"
,"B00079"
,"B00080"
,"B00097"
,"B00102"
,"B00103"
,"B00104"
,"B00105"
,"B00106"
,"B00107"
,"B00108"
,"B00109"
,"B00110"
,"B00111"
,"B00112"
,"B00113"
,"B00114"
,"B00115"
,"B00116"
,"B00117"
,"B00118"
,"B00119"
,"B00120"
,"B00121"
,"B00122"
,"B00174"
,"B00175"
,"B00176"
,"B00177"
,"B00194"
,"B00207"
,"B00208"
,"B00209"
,"B00210"
,"B00231"
,"B00232"
,"B00233"
,"B00234"
,"B00255"
,"B00256"
,"B00257"
,"B00258"
,"B00275"
,"B00276"
,"B00277"
,"B00428"
,"B00429"
,"B00430"
,"B00431"
,"B00432"
,"B00433"
,"B00434"
,"B00435"
,"B00436"
,"B00437"
,"B00438"
,"B00439"
,"B00440"
,"B00441"
,"B00442"
,"B00443"
,"B00444"
,"B00445"
,"B00446"
,"B00447"
,"B00448"
,"B00449"
,"B00450"
,"B00451"
,"B00452"
,"B00453"
,"B00454"
,"B00455"
,"B00456"
,"B00457"
,"B00458"
,"B00459"
,"B00460"
,"B00461"
,"B00462"
,"B00463"
,"B00464"
,"B00465"
,"B00466"
,"B00467"
,"B00468"
,"B00469"
,"B00470"
,"B00471"
,"B00472"
,"B00473"
,"B00474"
,"B00475"
,"B00476"
,"B00477"
,"B00478"
,"B00479"
,"B00480"
,"B00481"
,"B00482"
,"B00483"
,"B00484"
,"B00485"
,"B00486"
,"B00487"
,"B00488"
,"B00489"
,"B00490"
,"B00491"
,"B00492"
,"B00493"
,"B00494"
,"B00495"
,"B00496"
,"B00497"
,"B00498"
,"B00499"
,"B00500"
,"B00501"
,"B00502"
,"B00503"
,"B00504"
,"B00505"
,"B00506"
,"B00507"
,"B00508"
,"B00509"
,"B00510"
,"B00511"
,"B00512"
,"B00513"
,"B00514"
,"B00515"
,"B00516"
,"B00517"
,"B00518"
,"B00519"
,"B00520"
,"B00521"
,"B00522"
,"B00523"
,"B00524"
,"B00525"
,"B00526"
,"B00527"
,"B00528"
,"B00529"
,"B00530"
,"B00531"
,"B00532"
,"B00533"
,"B00534"
,"B00535"
,"B00536"
,"B00537"
,"B00538"
,"B00608"
,"B00609"
,"B00610"
,"B00611"
,"B00612"
,"B00613"
,"B00614"
,"B00615"
,"B00616"
,"B00617"
,"B00618"
,"B00619"
,"B00620"
,"B00621"
,"B00622"
,"B00623"
,"B00624"
,"B00625"
,"B00626"
,"B00627"
,"B00628"
,"B00629"
,"B00630"
,"B00631"
,"B00632"
,"B00633"
,"B00634"
,"B00635"
,"B00636"
,"B00637"
,"B00638"
,"B00639"
,"B00640"
,"B00641"
,"B00642"
,"B00643"
,"B00644"
,"B00645"
,"B00646"
,"B00647"
,"B00648"
,"B00649"
,"B00650"
,"B00651"
,"B00652"
,"B00653"
,"B00654"
,"B00655"
,"B00656"
,"B00657"
,"B00658"
,"B00659"
,"B00660"
,"B00661"
,"B00662"
,"B00663"
,"B00664"
,"B00665"
,"B00666"
,"B00667"
,"B00668"
,"B00669"
,"B00670"
,"B00671"
,"B00672"
,"B00742"
,"B00743"
,"B00744"
,"B00745"
,"B00746"
,"B00747"
,"B00748"
,"B00749"
,"B00750"
,"B00751"
,"B00752"
,"B00753"
,"B00754"
,"B00755"
,"B00756"
,"B00757"
,"B00758"
,"B00759"
,"B00760"
,"B00761"
,"B00762"
,"B00763"
,"B00764"
,"B00765"
,"B00766"
,"B00767"
,"B00768"
,"B00769"
,"B00770"
,"B00771"
,"B00772"
,"B00773"
,"B00774"
,"B00775"
,"B00776"
,"B00777"
,"B00778"
,"B00779"
,"B00780"
,"B00927"
,"B00928"
,"B00929"
,"B00930"
,"B00979"
,"B00980"
,"B00981"
,"B00982"
,"B01023"
,"B01026"
,"B01027"
,"B01028"
,"B01029"
,"B01030"
,"B01031"
,"B01032"
,"B01033"
,"B01034"
,"B01035"
,"B01036"
,"B01040"
,"B01041"
,"B01042"
,"B01043"
,"B01044"
,"B01045"
,"B01046"
,"B01047"
,"B01048"
,"B01049"
,"B01050"
,"B01051"
,"B01052"
,"B01053"
,"B01054"
,"B01055"
,"B01056"
,"B01057"
,"B01058"
,"B01059"
,"B01060"
,"B01064"
,"B01065"
,"B01066"
,"B01067"
,"B01068"
,"B01069"
,"B01070"
,"B01071"
,"B01072"
,"B01073"
,"B01074"
,"B01075"
,"B01076"
,"B01077"
,"B01078"
,"B01079"
,"B01080"
,"B01081"
,"B01082"
,"B01083"
,"B01084"
,"B01088"
,"B01089"
,"B01090"
,"B01091"
,"B01092"
,"B01093"
,"B01094"
,"B01095"
,"B01096"
,"B01097"
,"B01098"
,"B01099"
,"B01100"
,"B01101"
,"B01102"
,"B01103"
,"B01104"
,"B01105"
,"B01106"
,"B01107"
,"B01108"
,"B01112"
,"B01113"
,"B01114"
,"B01115"
,"B01116"
,"B01117"
,"B01118"
,"B01119"
,"B01120"
,"B01121"
,"B01122"
,"B01123"
,"B01124"
,"B01125"
,"B01126"
,"B01127"
,"B01128"
,"B01129"
,"B01130"
,"B01131"
,"wZ"
,"wh1"
,"wh2"
,"wh3"
,"wha"
,"whb"};

 char * den_info_omg_p25p25_u(int nsub,int n, int * mass, int * width)
{
 switch(nsub){
 case 1: switch(n){
    case 1: *mass=13; *width=558; return "\1\2";
    case 2: *mass=12; *width=557; return "\1\2";
    case 3: *mass=11; *width=556; return "\1\2";
    case 4: *mass=10; *width=555; return "\1\2";
    case 5: *mass=9; *width=554; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 2: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=15; *width=0; return "\1\4";
    case 10: *mass=11; *width=556; return "\1\2";
    case 11: *mass=10; *width=555; return "\1\2";
    case 12: *mass=9; *width=554; return "\1\2";
    case 13: *mass=15; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 3: switch(n){
    case 1: *mass=15; *width=0; return "\1\3";
    case 2: *mass=9; *width=554; return "\1\2";
    case 3: *mass=10; *width=555; return "\1\2";
    case 4: *mass=11; *width=556; return "\1\2";
    case 5: *mass=15; *width=0; return "\1\4";
    case 6: *mass=16; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=17; *width=0; return "\1\3";
    case 9: *mass=18; *width=0; return "\1\3";
    case 10: *mass=17; *width=0; return "\1\4";
    case 11: *mass=18; *width=0; return "\1\4";
    case 12: *mass=19; *width=0; return "\1\4";
    case 13: *mass=19; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 4: switch(n){
    case 1: *mass=19; *width=0; return "\1\3";
    case 2: *mass=19; *width=0; return "\1\4";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=17; *width=0; return "\1\4";
    case 5: *mass=18; *width=0; return "\1\3";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=13; *width=558; return "\1\2";
    case 10: *mass=12; *width=557; return "\1\2";
    case 11: *mass=15; *width=0; return "\1\4";
    case 12: *mass=2; *width=553; return "\1\2";
    case 13: *mass=15; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 5: switch(n){
    case 1: *mass=2; *width=553; return "\1\2";
    case 2: *mass=15; *width=0; return "\1\3";
    case 3: *mass=15; *width=0; return "\1\4";
    case 4: *mass=12; *width=557; return "\1\2";
    case 5: *mass=13; *width=558; return "\1\2";
    case 6: *mass=16; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=17; *width=0; return "\1\4";
    case 9: *mass=17; *width=0; return "\1\3";
    case 10: *mass=18; *width=0; return "\1\3";
    case 11: *mass=18; *width=0; return "\1\4";
    case 12: *mass=19; *width=0; return "\1\4";
    case 13: *mass=19; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 6: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\3";
    case 6: *mass=17; *width=0; return "\1\4";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=13; *width=558; return "\1\2";
    case 10: *mass=12; *width=557; return "\1\2";
    case 11: *mass=15; *width=0; return "\1\4";
    case 12: *mass=15; *width=0; return "\1\3";
    case 13: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 7: switch(n){
    case 1: *mass=15; *width=0; return "\1\4";
    case 2: *mass=15; *width=0; return "\1\3";
    case 3: *mass=10; *width=555; return "\1\2";
    case 4: *mass=9; *width=554; return "\1\2";
    case 5: *mass=11; *width=556; return "\1\2";
    case 6: *mass=16; *width=0; return "\1\4";
    case 7: *mass=16; *width=0; return "\1\3";
    case 8: *mass=17; *width=0; return "\1\4";
    case 9: *mass=17; *width=0; return "\1\3";
    case 10: *mass=18; *width=0; return "\1\4";
    case 11: *mass=18; *width=0; return "\1\3";
    case 12: *mass=19; *width=0; return "\1\4";
    case 13: *mass=19; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 8: switch(n){
    case 1: *mass=13; *width=558; return "\1\2";
    case 2: *mass=12; *width=557; return "\1\2";
    case 3: *mass=11; *width=556; return "\1\2";
    case 4: *mass=10; *width=555; return "\1\2";
    case 5: *mass=9; *width=554; return "\1\2";
    case 6: *mass=21; *width=0; return "\1\3";
    case 7: *mass=21; *width=0; return "\1\4";
    case 8: *mass=20; *width=0; return "\1\3";
    case 9: *mass=20; *width=0; return "\1\4";
    default:*mass=0; *width=0; return NULL;
                  }
 case 9: switch(n){
    case 1: *mass=2; *width=553; return "\1\2";
    case 2: *mass=20; *width=0; return "\1\4";
    case 3: *mass=20; *width=0; return "\1\3";
    case 4: *mass=21; *width=0; return "\1\4";
    case 5: *mass=21; *width=0; return "\1\3";
    case 6: *mass=9; *width=554; return "\1\2";
    case 7: *mass=10; *width=555; return "\1\2";
    case 8: *mass=11; *width=556; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 10: switch(n){
    case 1: *mass=13; *width=558; return "\1\2";
    case 2: *mass=12; *width=557; return "\1\2";
    case 3: *mass=11; *width=556; return "\1\2";
    case 4: *mass=10; *width=555; return "\1\2";
    case 5: *mass=9; *width=554; return "\1\2";
    case 6: *mass=21; *width=0; return "\1\4";
    case 7: *mass=21; *width=0; return "\1\3";
    case 8: *mass=20; *width=0; return "\1\4";
    case 9: *mass=20; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 11: switch(n){
    case 1: *mass=13; *width=558; return "\1\2";
    case 2: *mass=12; *width=557; return "\1\2";
    case 3: *mass=11; *width=556; return "\1\2";
    case 4: *mass=10; *width=555; return "\1\2";
    case 5: *mass=9; *width=554; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 12: switch(n){
    case 1: *mass=40; *width=0; return "\1\3";
    case 2: *mass=40; *width=0; return "\1\4";
    case 3: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 13: switch(n){
    case 1: *mass=35; *width=0; return "\1\3";
    case 2: *mass=35; *width=0; return "\1\4";
    case 3: *mass=34; *width=0; return "\1\3";
    case 4: *mass=34; *width=0; return "\1\4";
    case 5: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 14: switch(n){
    case 1: *mass=41; *width=0; return "\1\3";
    case 2: *mass=41; *width=0; return "\1\4";
    case 3: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 15: switch(n){
    case 1: *mass=37; *width=0; return "\1\3";
    case 2: *mass=37; *width=0; return "\1\4";
    case 3: *mass=36; *width=0; return "\1\3";
    case 4: *mass=36; *width=0; return "\1\4";
    case 5: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 16: switch(n){
    case 1: *mass=42; *width=0; return "\1\3";
    case 2: *mass=42; *width=0; return "\1\4";
    case 3: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 17: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=39; *width=0; return "\1\3";
    case 5: *mass=39; *width=0; return "\1\4";
    case 6: *mass=38; *width=0; return "\1\3";
    case 7: *mass=38; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 18: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=23; *width=0; return "\1\3";
    case 5: *mass=23; *width=0; return "\1\4";
    case 6: *mass=22; *width=0; return "\1\3";
    case 7: *mass=22; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 19: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=25; *width=0; return "\1\3";
    case 5: *mass=25; *width=0; return "\1\4";
    case 6: *mass=24; *width=0; return "\1\3";
    case 7: *mass=24; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 20: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=29; *width=0; return "\1\3";
    case 5: *mass=29; *width=0; return "\1\4";
    case 6: *mass=28; *width=0; return "\1\3";
    case 7: *mass=28; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 21: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=27; *width=0; return "\1\3";
    case 5: *mass=27; *width=0; return "\1\4";
    case 6: *mass=26; *width=0; return "\1\3";
    case 7: *mass=26; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 22: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=31; *width=0; return "\1\3";
    case 5: *mass=31; *width=0; return "\1\4";
    case 6: *mass=30; *width=0; return "\1\3";
    case 7: *mass=30; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 23: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=33; *width=0; return "\1\3";
    case 5: *mass=33; *width=0; return "\1\4";
    case 6: *mass=32; *width=0; return "\1\3";
    case 7: *mass=32; *width=0; return "\1\4";
    case 8: *mass=13; *width=558; return "\1\2";
    case 9: *mass=12; *width=557; return "\1\2";
    case 10: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 24: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=13; *width=558; return "\1\2";
    case 10: *mass=15; *width=0; return "\1\4";
    case 11: *mass=12; *width=557; return "\1\2";
    case 12: *mass=15; *width=0; return "\1\3";
    case 13: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 25: switch(n){
    case 1: *mass=2; *width=553; return "\1\2";
    case 2: *mass=15; *width=0; return "\1\3";
    case 3: *mass=12; *width=557; return "\1\2";
    case 4: *mass=15; *width=0; return "\1\4";
    case 5: *mass=13; *width=558; return "\1\2";
    case 6: *mass=16; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=17; *width=0; return "\1\3";
    case 9: *mass=17; *width=0; return "\1\4";
    case 10: *mass=18; *width=0; return "\1\3";
    case 11: *mass=18; *width=0; return "\1\4";
    case 12: *mass=19; *width=0; return "\1\3";
    case 13: *mass=19; *width=0; return "\1\4";
    default:*mass=0; *width=0; return NULL;
                  }
 case 26: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=15; *width=0; return "\1\4";
    case 10: *mass=10; *width=555; return "\1\2";
    case 11: *mass=11; *width=556; return "\1\2";
    case 12: *mass=9; *width=554; return "\1\2";
    case 13: *mass=15; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 27: switch(n){
    case 1: *mass=15; *width=0; return "\1\3";
    case 2: *mass=9; *width=554; return "\1\2";
    case 3: *mass=10; *width=555; return "\1\2";
    case 4: *mass=15; *width=0; return "\1\4";
    case 5: *mass=11; *width=556; return "\1\2";
    case 6: *mass=16; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=17; *width=0; return "\1\3";
    case 9: *mass=17; *width=0; return "\1\4";
    case 10: *mass=18; *width=0; return "\1\3";
    case 11: *mass=18; *width=0; return "\1\4";
    case 12: *mass=19; *width=0; return "\1\3";
    case 13: *mass=19; *width=0; return "\1\4";
    default:*mass=0; *width=0; return NULL;
                  }
 case 28: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=11; *width=556; return "\1\2";
    case 10: *mass=10; *width=555; return "\1\2";
    case 11: *mass=9; *width=554; return "\1\2";
    case 12: *mass=15; *width=0; return "\1\4";
    case 13: *mass=15; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 29: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=13; *width=558; return "\1\2";
    case 10: *mass=15; *width=0; return "\1\4";
    case 11: *mass=12; *width=557; return "\1\2";
    case 12: *mass=15; *width=0; return "\1\3";
    case 13: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 30: switch(n){
    case 1: *mass=2; *width=553; return "\1\2";
    case 2: *mass=15; *width=0; return "\1\3";
    case 3: *mass=12; *width=557; return "\1\2";
    case 4: *mass=15; *width=0; return "\1\4";
    case 5: *mass=13; *width=558; return "\1\2";
    case 6: *mass=16; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=17; *width=0; return "\1\3";
    case 9: *mass=17; *width=0; return "\1\4";
    case 10: *mass=18; *width=0; return "\1\3";
    case 11: *mass=18; *width=0; return "\1\4";
    case 12: *mass=19; *width=0; return "\1\4";
    case 13: *mass=19; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 31: switch(n){
    case 1: *mass=19; *width=0; return "\1\3";
    case 2: *mass=19; *width=0; return "\1\4";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=15; *width=0; return "\1\4";
    case 10: *mass=10; *width=555; return "\1\2";
    case 11: *mass=11; *width=556; return "\1\2";
    case 12: *mass=15; *width=0; return "\1\3";
    case 13: *mass=9; *width=554; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 32: switch(n){
    case 1: *mass=9; *width=554; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=15; *width=0; return "\1\4";
    case 4: *mass=15; *width=0; return "\1\3";
    case 5: *mass=11; *width=556; return "\1\2";
    case 6: *mass=16; *width=0; return "\1\4";
    case 7: *mass=16; *width=0; return "\1\3";
    case 8: *mass=17; *width=0; return "\1\4";
    case 9: *mass=17; *width=0; return "\1\3";
    case 10: *mass=18; *width=0; return "\1\4";
    case 11: *mass=18; *width=0; return "\1\3";
    case 12: *mass=19; *width=0; return "\1\4";
    case 13: *mass=19; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 33: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=13; *width=558; return "\1\2";
    case 10: *mass=15; *width=0; return "\1\4";
    case 11: *mass=12; *width=557; return "\1\2";
    case 12: *mass=15; *width=0; return "\1\3";
    case 13: *mass=2; *width=553; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 34: switch(n){
    case 1: *mass=2; *width=553; return "\1\2";
    case 2: *mass=12; *width=557; return "\1\2";
    case 3: *mass=15; *width=0; return "\1\4";
    case 4: *mass=15; *width=0; return "\1\3";
    case 5: *mass=13; *width=558; return "\1\2";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\3";
    case 8: *mass=16; *width=0; return "\1\4";
    case 9: *mass=17; *width=0; return "\1\4";
    case 10: *mass=18; *width=0; return "\1\3";
    case 11: *mass=18; *width=0; return "\1\4";
    case 12: *mass=19; *width=0; return "\1\3";
    case 13: *mass=19; *width=0; return "\1\4";
    default:*mass=0; *width=0; return NULL;
                  }
 case 35: switch(n){
    case 1: *mass=19; *width=0; return "\1\3";
    case 2: *mass=18; *width=0; return "\1\3";
    case 3: *mass=16; *width=0; return "\1\3";
    case 4: *mass=17; *width=0; return "\1\3";
    case 5: *mass=15; *width=0; return "\1\3";
    case 6: *mass=19; *width=0; return "\1\4";
    case 7: *mass=18; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\4";
    case 9: *mass=17; *width=0; return "\1\4";
    case 10: *mass=11; *width=556; return "\1\2";
    case 11: *mass=15; *width=0; return "\1\4";
    case 12: *mass=10; *width=555; return "\1\2";
    case 13: *mass=9; *width=554; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 36: switch(n){
    case 1: *mass=19; *width=0; return "\1\4";
    case 2: *mass=19; *width=0; return "\1\3";
    case 3: *mass=18; *width=0; return "\1\4";
    case 4: *mass=18; *width=0; return "\1\3";
    case 5: *mass=17; *width=0; return "\1\4";
    case 6: *mass=17; *width=0; return "\1\3";
    case 7: *mass=16; *width=0; return "\1\4";
    case 8: *mass=16; *width=0; return "\1\3";
    case 9: *mass=15; *width=0; return "\1\4";
    case 10: *mass=15; *width=0; return "\1\3";
    case 11: *mass=11; *width=556; return "\1\2";
    case 12: *mass=10; *width=555; return "\1\2";
    case 13: *mass=9; *width=554; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 37: switch(n){
    case 1: *mass=9; *width=554; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=11; *width=556; return "\1\2";
    case 4: *mass=15; *width=0; return "\1\4";
    case 5: *mass=15; *width=0; return "\1\3";
    case 6: *mass=16; *width=0; return "\1\4";
    case 7: *mass=16; *width=0; return "\1\3";
    case 8: *mass=17; *width=0; return "\1\4";
    case 9: *mass=17; *width=0; return "\1\3";
    case 10: *mass=18; *width=0; return "\1\4";
    case 11: *mass=18; *width=0; return "\1\3";
    case 12: *mass=19; *width=0; return "\1\4";
    case 13: *mass=19; *width=0; return "\1\3";
    default:*mass=0; *width=0; return NULL;
                  }
 case 38: switch(n){
    case 1: *mass=19; *width=0; return "\1\3";
    case 2: *mass=18; *width=0; return "\1\3";
    case 3: *mass=17; *width=0; return "\1\3";
    case 4: *mass=16; *width=0; return "\1\3";
    case 5: *mass=15; *width=0; return "\1\3";
    case 6: *mass=19; *width=0; return "\1\4";
    case 7: *mass=18; *width=0; return "\1\4";
    case 8: *mass=17; *width=0; return "\1\4";
    case 9: *mass=16; *width=0; return "\1\4";
    case 10: *mass=15; *width=0; return "\1\4";
    case 11: *mass=11; *width=556; return "\1\2";
    case 12: *mass=10; *width=555; return "\1\2";
    case 13: *mass=9; *width=554; return "\1\2";
    default:*mass=0; *width=0; return NULL;
                  }
 case 39: switch(n){
    case 1: *mass=11; *width=556; return "\1\2";
    case 2: *mass=10; *width=555; return "\1\2";
    case 3: *mass=9; *width=554; return "\1\2";
    case 4: *mass=2; *width=553; return "\1\2";
    case 5: *mass=21; *width=0; return "\1\3";
    case 6: *mass=21; *width=0; return "\1\4";
    case 7: *mass=20; *width=0; return "\1\3";
    case 8: *mass=20; *width=0; return "\1\4";
    default:*mass=0; *width=0; return NULL;
                  }
   default: *mass=0; *width=0; return NULL;
            }
}

CalcHEP_interface interface_omg_p25p25_u={ 1,
"/home/jxl/Desktop/ScanCraft/ScanCraft/packages/NMSSMTools_5.4.1/sources/micromegas/CalcHEP_src/"
,172, 386, varName_omg_p25p25_u,va_omg_p25p25_u,2, 2, 39, &pinf_omg_p25p25_u, &pinfAux_omg_p25p25_u, polarized_omg_p25p25_u, &calcFunc_omg_p25p25_u, &BWrange_omg_p25p25_u,&twidth_omg_p25p25_u,&gtwidth_omg_p25p25_u,&gswidth_omg_p25p25_u, &aWidth_omg_p25p25_u, &sqme_omg_p25p25_u,&den_info_omg_p25p25_u,cb_omg_p25p25_u};

CalcHEP_interface * PtrInterface_omg_p25p25_u=&interface_omg_p25p25_u;
