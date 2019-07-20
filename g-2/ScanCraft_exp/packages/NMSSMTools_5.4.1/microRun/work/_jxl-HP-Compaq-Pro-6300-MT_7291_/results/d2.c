/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C2(REAL *);
extern DNN S2_omg_p25p25_u;
REAL S2_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[14],width[14];
char * Qtxt[14];
REAL Q0[14]; COMPLEX Q1[14]; REAL Q2[14];
 if(momenta)
 {width[13]=0.; mass[13]=V[19];  Qtxt[13]="\1\4";
width[12]=0.; mass[12]=V[19];  Qtxt[12]="\1\3";
width[11]=0.; mass[11]=V[18];  Qtxt[11]="\1\4";
width[10]=0.; mass[10]=V[18];  Qtxt[10]="\1\3";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\4";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[16];  Qtxt[7]="\1\4";
width[6]=0.; mass[6]=V[16];  Qtxt[6]="\1\3";
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\4";
width[3]=V[556]; mass[3]=V[11];  Qtxt[3]="\1\2";
width[2]=V[555]; mass[2]=V[10];  Qtxt[2]="\1\2";
width[1]=V[554]; mass[1]=V[9];  Qtxt[1]="\1\2";
width[4]=0.; mass[4]=V[15];  Qtxt[4]="\1\3";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[446];                                                   
if(!momenta){ C2(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[1]*(DP[1]*(C[2]+4*DP[0])-C[3])+C[5]-C[4]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[1];
R=+DP[0]*(DP[0]*(C[7]*DP[1]-C[10])+C[8]*DP[1]-C[11])+C[9]*DP[1]-C[12];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[0]*(DP[0]*(C[14]*DP[1]-C[17])+C[15]*DP[1]-C[18])+C[16]*DP[1]-C[19];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[20];
D=+C[1];
R=+DP[0]*(DP[0]*(C[21]*DP[1]-C[24])+C[22]*DP[1]-C[25])+C[23]*DP[1]-C[26];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[27];
R=+DP[0]*(DP[1]*(4*(DP[1]-DP[0])-C[28])+C[31]+C[30]*DP[0])+DP[1]*(C[2]*
 DP[1]-C[29])+C[32];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[33];
D=+C[1];
R=+DP[1]*(DP[0]*(C[35]+8*DP[1])+C[36]+C[34]*DP[1])+C[38]+C[37]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[33];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[39])+C[42]+C[41]*DP[0])+DP[1]*(C[40]+
 C[34]*DP[1])+C[43];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[44];
D=+C[1];
R=+DP[1]*(DP[0]*(C[45]+8*DP[1])+C[46]+C[34]*DP[1])+C[48]+C[47]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[44];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[49])+C[51]+C[41]*DP[0])+DP[1]*(C[50]+
 C[34]*DP[1])+C[52];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[53];
D=+C[1];
R=+DP[1]*(DP[0]*(C[54]+8*DP[1])+C[55]+C[34]*DP[1])+C[57]+C[56]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[53];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[58])+C[60]+C[41]*DP[0])+DP[1]*(C[59]+
 C[34]*DP[1])+C[61];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[1];
R=+DP[1]*(DP[0]*(C[63]+8*DP[1])+C[64]+C[34]*DP[1])+C[66]+C[65]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[62];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[67])+C[69]+C[41]*DP[0])+DP[1]*(C[68]+
 C[34]*DP[1])+C[70];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[71];
D=+C[72];
R=+DP[0]*(DP[0]*(C[74]+C[73]*DP[0])-C[75])-C[76];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[0]*(DP[0]*(C[80]+C[79]*DP[0])-C[81])-C[82];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[83];
D=+C[78];
R=+DP[0]*(DP[0]*(C[85]+C[84]*DP[0])-C[86])-C[87];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[6];
D=+C[1];
R=+DP[0]*(DP[0]*(C[7]*(DP[1]-DP[0])-C[88])+C[8]*DP[1]-C[89])+C[9]*DP[1]-
 C[90];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[91];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*DP[1]-C[95])+C[93]*DP[1]-C[96])+C[94]*DP[1]-C[97];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[91];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*(DP[1]-DP[0])-C[98])+C[93]*DP[1]-C[99])+C[94]*DP[1]-
 C[100];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[101];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*DP[1]-C[104])+C[102]*DP[1]-C[105])+C[103]*DP[1]-
 C[106];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[101];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*(DP[1]-DP[0])-C[107])+C[102]*DP[1]-C[108])+C[103]*
 DP[1]-C[109];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[110];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*DP[1]-C[113])+C[111]*DP[1]-C[114])+C[112]*DP[1]-
 C[115];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[110];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*(DP[1]-DP[0])-C[116])+C[111]*DP[1]-C[117])+C[112]*
 DP[1]-C[118];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[119];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*DP[1]-C[122])+C[120]*DP[1]-C[123])+C[121]*DP[1]-
 C[124];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[119];
D=+C[78];
R=+DP[0]*(DP[0]*(C[92]*(DP[1]-DP[0])-C[125])+C[120]*DP[1]-C[126])+C[121]*
 DP[1]-C[127];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[128];
D=+C[72];
R=+DP[0]*(DP[0]*(C[130]+C[129]*DP[0])-C[131])-C[132];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[133];
D=+C[78];
R=+DP[0]*(DP[0]*(C[135]+C[134]*DP[0])-C[136])-C[137];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[0]*(DP[0]*(C[14]*(DP[1]-DP[0])-C[138])+C[15]*DP[1]-C[139])+C[16]*
 DP[1]-C[140];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[141];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*DP[1]-C[145])+C[143]*DP[1]-C[146])+C[144]*DP[1]-
 C[147];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[141];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*(DP[1]-DP[0])-C[148])+C[143]*DP[1]-C[149])+C[144]*
 DP[1]-C[150];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[151];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*DP[1]-C[154])+C[152]*DP[1]-C[155])+C[153]*DP[1]-
 C[156];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[151];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*(DP[1]-DP[0])-C[157])+C[152]*DP[1]-C[158])+C[153]*
 DP[1]-C[159];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[160];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*DP[1]-C[163])+C[161]*DP[1]-C[164])+C[162]*DP[1]-
 C[165];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[160];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*(DP[1]-DP[0])-C[166])+C[161]*DP[1]-C[167])+C[162]*
 DP[1]-C[168];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[169];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*DP[1]-C[172])+C[170]*DP[1]-C[173])+C[171]*DP[1]-
 C[174];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[169];
D=+C[78];
R=+DP[0]*(DP[0]*(C[142]*(DP[1]-DP[0])-C[175])+C[170]*DP[1]-C[176])+C[171]*
 DP[1]-C[177];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[178];
D=+C[72];
R=+DP[0]*(DP[0]*(C[180]+C[179]*DP[0])-C[181])-C[182];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[1];
R=+DP[0]*(DP[0]*(C[21]*(DP[1]-DP[0])-C[183])+C[22]*DP[1]-C[184])+C[23]*
 DP[1]-C[185];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[186];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*DP[1]-C[190])+C[188]*DP[1]-C[191])+C[189]*DP[1]-
 C[192];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[186];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*(DP[1]-DP[0])-C[193])+C[188]*DP[1]-C[194])+C[189]*
 DP[1]-C[195];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[196];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*DP[1]-C[199])+C[197]*DP[1]-C[200])+C[198]*DP[1]-
 C[201];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[196];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*(DP[1]-DP[0])-C[202])+C[197]*DP[1]-C[203])+C[198]*
 DP[1]-C[204];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[205];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*DP[1]-C[208])+C[206]*DP[1]-C[209])+C[207]*DP[1]-
 C[210];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[205];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*(DP[1]-DP[0])-C[211])+C[206]*DP[1]-C[212])+C[207]*
 DP[1]-C[213];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[214];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*DP[1]-C[217])+C[215]*DP[1]-C[218])+C[216]*DP[1]-
 C[219];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[214];
D=+C[78];
R=+DP[0]*(DP[0]*(C[187]*(DP[1]-DP[0])-C[220])+C[215]*DP[1]-C[221])+C[216]*
 DP[1]-C[222];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(C[225]+4*DP[0]-8*DP[1])+DP[1]*(4*DP[1]-C[223])+C[226])+
 DP[1]*(C[2]*DP[1]-C[224])+C[227];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[33];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[228])+C[231]+C[230]*DP[0])+DP[1]*(C[34]*
 DP[1]-C[229])+C[232];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[33];
D=+C[1];
R=+DP[0]*(DP[0]*(C[235]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[233])+C[236])+
 DP[1]*(C[34]*DP[1]-C[234])+C[237];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[44];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[238])+C[241]+C[240]*DP[0])+DP[1]*(C[34]*
 DP[1]-C[239])+C[242];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[44];
D=+C[1];
R=+DP[0]*(DP[0]*(C[245]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[243])+C[246])+
 DP[1]*(C[34]*DP[1]-C[244])+C[247];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[53];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[248])+C[251]+C[250]*DP[0])+DP[1]*(C[34]*
 DP[1]-C[249])+C[252];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[53];
D=+C[1];
R=+DP[0]*(DP[0]*(C[255]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[253])+C[256])+
 DP[1]*(C[34]*DP[1]-C[254])+C[257];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[62];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[258])+C[261]+C[260]*DP[0])+DP[1]*(C[34]*
 DP[1]-C[259])+C[262];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[1];
R=+DP[0]*(DP[0]*(C[265]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[263])+C[266])+
 DP[1]*(C[34]*DP[1]-C[264])+C[267];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[268];
D=+C[1];
R=+DP[1]*(DP[0]*(C[270]+4*DP[1])+C[271]-C[269]*DP[1])+C[273]+C[272]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[268];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[275])+C[277]+C[230]*DP[0])+DP[1]*(C[276]-
 C[274]*DP[1])+C[278];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[279];
D=+C[1];
R=+DP[1]*(DP[0]*(C[281]+8*DP[1])+C[282]-C[280]*DP[1])+C[284]+C[283]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[279];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[285])+C[287]+C[230]*DP[0])+DP[1]*(C[286]-
 C[280]*DP[1])+C[288];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[289];
D=+C[1];
R=+DP[1]*(DP[0]*(C[291]+8*DP[1])+C[292]-C[290]*DP[1])+C[294]+C[293]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[289];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[295])+C[297]+C[230]*DP[0])+DP[1]*(C[296]-
 C[290]*DP[1])+C[298];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[299];
D=+C[1];
R=+DP[1]*(DP[0]*(C[301]+8*DP[1])+C[302]-C[300]*DP[1])+C[304]+C[303]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[299];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[305])+C[307]+C[230]*DP[0])+DP[1]*(C[306]-
 C[300]*DP[1])+C[308];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[268];
D=+C[1];
R=+DP[0]*(DP[0]*(C[311]+4*DP[0]-8*DP[1])+DP[1]*(C[309]+4*DP[1])+C[312])+
 DP[1]*(C[310]-C[269]*DP[1])+C[313];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[279];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[314])+C[316]+C[240]*DP[0])+DP[1]*(C[315]-
 C[280]*DP[1])+C[317];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[279];
D=+C[1];
R=+DP[0]*(DP[0]*(C[320]+8*DP[0]-16*DP[1])+DP[1]*(C[318]+8*DP[1])+C[321])+
 DP[1]*(C[319]-C[280]*DP[1])+C[322];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[289];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[323])+C[325]+C[250]*DP[0])+DP[1]*(C[324]-
 C[290]*DP[1])+C[326];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[289];
D=+C[1];
R=+DP[0]*(DP[0]*(C[329]+8*DP[0]-16*DP[1])+DP[1]*(C[327]+8*DP[1])+C[330])+
 DP[1]*(C[328]-C[290]*DP[1])+C[331];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[299];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[332])+C[334]+C[260]*DP[0])+DP[1]*(C[333]-
 C[300]*DP[1])+C[335];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[299];
D=+C[1];
R=+DP[0]*(DP[0]*(C[338]+8*DP[0]-16*DP[1])+DP[1]*(C[336]+8*DP[1])+C[339])+
 DP[1]*(C[337]-C[300]*DP[1])+C[340];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[341];
D=+C[1];
R=+DP[1]*(DP[0]*(C[343]+4*DP[1])+C[344]-C[342]*DP[1])+C[346]+C[345]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[341];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[348])+C[350]+C[240]*DP[0])+DP[1]*(C[349]-
 C[347]*DP[1])+C[351];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[352];
D=+C[1];
R=+DP[1]*(DP[0]*(C[354]+8*DP[1])+C[355]-C[353]*DP[1])+C[357]+C[356]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[352];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[358])+C[360]+C[240]*DP[0])+DP[1]*(C[359]-
 C[353]*DP[1])+C[361];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[362];
D=+C[1];
R=+DP[1]*(DP[0]*(C[364]+8*DP[1])+C[365]-C[363]*DP[1])+C[367]+C[366]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[362];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[368])+C[370]+C[240]*DP[0])+DP[1]*(C[369]-
 C[363]*DP[1])+C[371];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[341];
D=+C[1];
R=+DP[0]*(DP[0]*(C[374]+4*DP[0]-8*DP[1])+DP[1]*(C[372]+4*DP[1])+C[375])+
 DP[1]*(C[373]-C[342]*DP[1])+C[376];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[352];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[377])+C[379]+C[250]*DP[0])+DP[1]*(C[378]-
 C[353]*DP[1])+C[380];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[352];
D=+C[1];
R=+DP[0]*(DP[0]*(C[383]+8*DP[0]-16*DP[1])+DP[1]*(C[381]+8*DP[1])+C[384])+
 DP[1]*(C[382]-C[353]*DP[1])+C[385];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[362];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[386])+C[388]+C[260]*DP[0])+DP[1]*(C[387]-
 C[363]*DP[1])+C[389];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[362];
D=+C[1];
R=+DP[0]*(DP[0]*(C[392]+8*DP[0]-16*DP[1])+DP[1]*(C[390]+8*DP[1])+C[393])+
 DP[1]*(C[391]-C[363]*DP[1])+C[394];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[395];
D=+C[1];
R=+DP[1]*(DP[0]*(C[397]+4*DP[1])+C[398]-C[396]*DP[1])+C[400]+C[399]*DP[0];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[395];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[402])+C[404]+C[250]*DP[0])+DP[1]*(C[403]-
 C[401]*DP[1])+C[405];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[406];
D=+C[1];
R=+DP[1]*(DP[0]*(C[408]+8*DP[1])+C[409]-C[407]*DP[1])+C[411]+C[410]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[406];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[412])+C[414]+C[250]*DP[0])+DP[1]*(C[413]-
 C[407]*DP[1])+C[415];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[395];
D=+C[1];
R=+DP[0]*(DP[0]*(C[418]+4*DP[0]-8*DP[1])+DP[1]*(C[416]+4*DP[1])+C[419])+
 DP[1]*(C[417]-C[396]*DP[1])+C[420];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[406];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[421])+C[423]+C[260]*DP[0])+DP[1]*(C[422]-
 C[407]*DP[1])+C[424];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[406];
D=+C[1];
R=+DP[0]*(DP[0]*(C[427]+8*DP[0]-16*DP[1])+DP[1]*(C[425]+8*DP[1])+C[428])+
 DP[1]*(C[426]-C[407]*DP[1])+C[429];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[430];
D=+C[1];
R=+DP[1]*(DP[0]*(C[432]+4*DP[1])+C[433]-C[431]*DP[1])+C[435]+C[434]*DP[0];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[430];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[437])+C[439]+C[260]*DP[0])+DP[1]*(C[438]-
 C[436]*DP[1])+C[440];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[430];
D=+C[1];
R=+DP[0]*(DP[0]*(C[443]+4*DP[0]-8*DP[1])+DP[1]*(C[441]+4*DP[1])+C[444])+
 DP[1]*(C[442]-C[431]*DP[1])+C[445];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C2(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[34];                                                           
S[0]=V[13]*V[13];
S[1]=V[2]*V[2];
S[2]=V[15]*V[15];
S[3]=V[15]*V[15]*V[15]*V[15];
C[445]=+V[15]*(V[19]*(S[1]*(3*V[19]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[4]=V[19]*V[19];
S[5]=V[13]*V[13]*V[13]*V[13];
C[444]=+V[15]*(V[15]*(V[15]*(8*V[19]+4*V[15])-4*S[0]-5*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(S[4]-2*S[1])+S[5];
C[443]=+V[15]*(4*V[19]+8*V[15])-4*S[0];
C[442]=+V[15]*(V[15]*(V[15]*(-8*V[19]-2*V[15])+2*S[4]+S[0]+7*S[1])+V[19]*(4*
 (S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[4])-S[4]*S[0];
C[441]=+V[15]*(-8*V[19]-10*V[15])+4*(S[0]+S[1])+2*S[4];
C[440]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])+V[19]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[4]+2*S[0]+3*S[1])+S[5])+V[19]*(S[1]*(4*
 S[0]-5*S[1])+S[5]));
C[439]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[4]+S[0])-4*S[1]);
C[438]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*S[4]+2*S[0]+6*S[1])+V[19]*(
 4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[4])-2*S[4]*S[0];
C[437]=+4*(S[4]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[436]=+V[15]*(-8*V[19]-4*V[15])+4*S[4]+8*S[1];
C[435]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[19])+3*S[4]+S[0]+2*S[1])+V[19]*
 (3*(S[0]-S[1]))));
C[434]=+S[1]*(S[4]-S[2]-S[1]);
C[433]=+S[1]*(2*(S[1]-S[0])+S[4]-S[2])+S[2]*(2*(S[4]-S[2])+S[0])-S[4]*S[0];
C[432]=+2*(S[4]-S[2]);
C[431]=+V[15]*(-4*V[19]-2*V[15])+2*S[4]+4*S[1];
S[6]=V[552]*V[552];
S[7]=V[532]*V[532];
S[8]=V[1]*V[1];
C[430]=+S[6]*S[7]*S[8];
C[429]=+V[15]*(S[1]*(S[0]*(V[19]+V[18]+6*V[15])+S[1]*(2*(-V[19]-V[18]))+
 V[15]*(6*(V[19]*V[18]-S[2])))+S[0]*(S[0]*(V[19]+V[18])+S[2]*(4*(-V[19]-
 V[18])))+S[3]*(4*(V[19]+V[18])));
C[428]=+V[15]*(V[15]*(8*(V[15]*(V[19]+V[18]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[19]+V[18])+S[0]*(-V[19]-V[18])))+S[1]*(2*V[19]*V[18]-4*S[1])+2*S[5];
C[427]=+V[15]*(4*(V[19]+V[18])+16*V[15])-8*S[0];
C[426]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[18])-4*V[15])+4*V[19]*V[18]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[19]-V[18])+S[0]*(V[19]+V[18])))+S[1]*(4*(S[1]-S[0])+2*
 V[19]*V[18])-2*V[19]*V[18]*S[0];
C[425]=+8*(V[15]*(-V[19]-V[18])+S[0]+S[1])+4*V[19]*V[18]-20*S[2];
C[424]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])-V[19]*S[0]-
 V[18]*S[1])-6*V[15]*S[1])+S[1]*(6*V[19]*V[18]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-2*V[19]-3*V[18])+S[0]*(V[19]+3*V[18]))+V[19]*S[5]);
C[423]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[18]+S[0])-4*S[1]);
C[422]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*V[19]*V[18]+2*S[0]+6*S[1])+
 V[19]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[18])-2*V[19]*V[18]*
 S[0];
C[421]=+4*(V[19]*V[18]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[420]=+V[15]*(V[18]*(S[1]*(3*V[18]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[9]=V[18]*V[18];
C[419]=+V[15]*(V[15]*(V[15]*(8*V[18]+4*V[15])-4*S[0]-5*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(S[9]-2*S[1])+S[5];
C[418]=+V[15]*(4*V[18]+8*V[15])-4*S[0];
C[417]=+V[15]*(V[15]*(V[15]*(-8*V[18]-2*V[15])+2*S[9]+S[0]+7*S[1])+V[18]*(4*
 (S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[9])-S[9]*S[0];
C[416]=+V[15]*(-8*V[18]-10*V[15])+4*(S[0]+S[1])+2*S[9];
C[415]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])-V[19]*S[1]-
 V[18]*S[0])-6*V[15]*S[1])+S[1]*(6*V[19]*V[18]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-3*V[19]-2*V[18])+S[0]*(3*V[19]+V[18]))+V[18]*S[5]);
C[414]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[18]+S[0])-4*S[1]);
C[413]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*V[19]*V[18]+2*S[0]+6*S[1])+
 V[18]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[18])-2*V[19]*V[18]*
 S[0];
C[412]=+4*(V[19]*V[18]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[411]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[19]-V[18])+2*V[15])+6*V[19]*V[18]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[19]-V[18])+S[0]*(V[19]+V[18]))));
C[410]=+S[1]*(2*(V[19]*V[18]-S[2]-S[1]));
C[409]=+S[1]*(2*(V[19]*V[18]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[19]*V[18]-
 S[2])+2*S[0])-2*V[19]*V[18]*S[0];
C[408]=+4*(V[19]*V[18]-S[2]);
C[407]=+4*(V[15]*(-V[19]-V[18]-V[15])+V[19]*V[18])+8*S[1];
C[406]=+V[552]*V[532]*V[531]*V[511]*S[8];
C[405]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])+V[18]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[9]+2*S[0]+3*S[1])+S[5])+V[18]*(S[1]*(4*
 S[0]-5*S[1])+S[5]));
C[404]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[9]+S[0])-4*S[1]);
C[403]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*S[9]+2*S[0]+6*S[1])+V[18]*(
 4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[9])-2*S[9]*S[0];
C[402]=+4*(S[9]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[401]=+V[15]*(-8*V[18]-4*V[15])+4*S[9]+8*S[1];
C[400]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[18])+3*S[9]+S[0]+2*S[1])+V[18]*
 (3*(S[0]-S[1]))));
C[399]=+S[1]*(S[9]-S[2]-S[1]);
C[398]=+S[1]*(2*(S[1]-S[0])+S[9]-S[2])+S[2]*(2*(S[9]-S[2])+S[0])-S[9]*S[0];
C[397]=+2*(S[9]-S[2]);
C[396]=+V[15]*(-4*V[18]-2*V[15])+2*S[9]+4*S[1];
S[10]=V[531]*V[531];
S[11]=V[511]*V[511];
C[395]=+S[10]*S[11]*S[8];
C[394]=+V[15]*(S[1]*(S[0]*(V[19]+V[17]+6*V[15])+S[1]*(2*(-V[19]-V[17]))+
 V[15]*(6*(V[19]*V[17]-S[2])))+S[0]*(S[0]*(V[19]+V[17])+S[2]*(4*(-V[19]-
 V[17])))+S[3]*(4*(V[19]+V[17])));
C[393]=+V[15]*(V[15]*(8*(V[15]*(V[19]+V[17]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[19]+V[17])+S[0]*(-V[19]-V[17])))+S[1]*(2*V[19]*V[17]-4*S[1])+2*S[5];
C[392]=+V[15]*(4*(V[19]+V[17])+16*V[15])-8*S[0];
C[391]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[17])-4*V[15])+4*V[19]*V[17]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[19]-V[17])+S[0]*(V[19]+V[17])))+S[1]*(4*(S[1]-S[0])+2*
 V[19]*V[17])-2*V[19]*V[17]*S[0];
C[390]=+8*(V[15]*(-V[19]-V[17])+S[0]+S[1])+4*V[19]*V[17]-20*S[2];
C[389]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])-V[19]*S[0]-
 V[17]*S[1])-6*V[15]*S[1])+S[1]*(6*V[19]*V[17]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-2*V[19]-3*V[17])+S[0]*(V[19]+3*V[17]))+V[19]*S[5]);
C[388]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[17]+S[0])-4*S[1]);
C[387]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*V[19]*V[17]+2*S[0]+6*S[1])+
 V[19]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[17])-2*V[19]*V[17]*
 S[0];
C[386]=+4*(V[19]*V[17]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[385]=+V[15]*(S[1]*(S[0]*(V[18]+V[17]+6*V[15])+S[1]*(2*(-V[18]-V[17]))+
 V[15]*(6*(V[18]*V[17]-S[2])))+S[0]*(S[0]*(V[18]+V[17])+S[2]*(4*(-V[18]-
 V[17])))+S[3]*(4*(V[18]+V[17])));
C[384]=+V[15]*(V[15]*(8*(V[15]*(V[18]+V[17]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[18]+V[17])+S[0]*(-V[18]-V[17])))+S[1]*(2*V[18]*V[17]-4*S[1])+2*S[5];
C[383]=+V[15]*(4*(V[18]+V[17])+16*V[15])-8*S[0];
C[382]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[17])-4*V[15])+4*V[18]*V[17]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[18]-V[17])+S[0]*(V[18]+V[17])))+S[1]*(4*(S[1]-S[0])+2*
 V[18]*V[17])-2*V[18]*V[17]*S[0];
C[381]=+8*(V[15]*(-V[18]-V[17])+S[0]+S[1])+4*V[18]*V[17]-20*S[2];
C[380]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])-V[18]*S[0]-
 V[17]*S[1])-6*V[15]*S[1])+S[1]*(6*V[18]*V[17]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-2*V[18]-3*V[17])+S[0]*(V[18]+3*V[17]))+V[18]*S[5]);
C[379]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[17]+S[0])-4*S[1]);
C[378]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*V[18]*V[17]+2*S[0]+6*S[1])+
 V[18]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[17])-2*V[18]*V[17]*
 S[0];
C[377]=+4*(V[18]*V[17]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[376]=+V[15]*(V[17]*(S[1]*(3*V[17]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[12]=V[17]*V[17];
C[375]=+V[15]*(V[15]*(V[15]*(8*V[17]+4*V[15])-4*S[0]-5*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(S[12]-2*S[1])+S[5];
C[374]=+V[15]*(4*V[17]+8*V[15])-4*S[0];
C[373]=+V[15]*(V[15]*(V[15]*(-8*V[17]-2*V[15])+2*S[12]+S[0]+7*S[1])+V[17]*(
 4*(S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[12])-S[12]*S[0];
C[372]=+V[15]*(-8*V[17]-10*V[15])+4*(S[0]+S[1])+2*S[12];
C[371]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])-V[19]*S[1]-
 V[17]*S[0])-6*V[15]*S[1])+S[1]*(6*V[19]*V[17]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-3*V[19]-2*V[17])+S[0]*(3*V[19]+V[17]))+V[17]*S[5]);
C[370]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[17]+S[0])-4*S[1]);
C[369]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*V[19]*V[17]+2*S[0]+6*S[1])+
 V[17]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[17])-2*V[19]*V[17]*
 S[0];
C[368]=+4*(V[19]*V[17]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[367]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[19]-V[17])+2*V[15])+6*V[19]*V[17]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[19]-V[17])+S[0]*(V[19]+V[17]))));
C[366]=+S[1]*(2*(V[19]*V[17]-S[2]-S[1]));
C[365]=+S[1]*(2*(V[19]*V[17]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[19]*V[17]-
 S[2])+2*S[0])-2*V[19]*V[17]*S[0];
C[364]=+4*(V[19]*V[17]-S[2]);
C[363]=+4*(V[15]*(-V[19]-V[17]-V[15])+V[19]*V[17])+8*S[1];
C[362]=+V[552]*V[532]*V[510]*V[490]*S[8];
C[361]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])-V[18]*S[1]-
 V[17]*S[0])-6*V[15]*S[1])+S[1]*(6*V[18]*V[17]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-3*V[18]-2*V[17])+S[0]*(3*V[18]+V[17]))+V[17]*S[5]);
C[360]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[17]+S[0])-4*S[1]);
C[359]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*V[18]*V[17]+2*S[0]+6*S[1])+
 V[17]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[17])-2*V[18]*V[17]*
 S[0];
C[358]=+4*(V[18]*V[17]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[357]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[18]-V[17])+2*V[15])+6*V[18]*V[17]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[18]-V[17])+S[0]*(V[18]+V[17]))));
C[356]=+S[1]*(2*(V[18]*V[17]-S[2]-S[1]));
C[355]=+S[1]*(2*(V[18]*V[17]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[18]*V[17]-
 S[2])+2*S[0])-2*V[18]*V[17]*S[0];
C[354]=+4*(V[18]*V[17]-S[2]);
C[353]=+4*(V[15]*(-V[18]-V[17]-V[15])+V[18]*V[17])+8*S[1];
C[352]=+V[531]*V[511]*V[510]*V[490]*S[8];
C[351]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])+V[17]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[12]+2*S[0]+3*S[1])+S[5])+V[17]*(S[1]*(
 4*S[0]-5*S[1])+S[5]));
C[350]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[12]+S[0])-4*S[1]);
C[349]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*S[12]+2*S[0]+6*S[1])+V[17]*
 (4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[12])-2*S[12]*S[0];
C[348]=+4*(S[12]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[347]=+V[15]*(-8*V[17]-4*V[15])+4*S[12]+8*S[1];
C[346]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[17])+3*S[12]+S[0]+2*S[1])+
 V[17]*(3*(S[0]-S[1]))));
C[345]=+S[1]*(S[12]-S[2]-S[1]);
C[344]=+S[1]*(2*(S[1]-S[0])+S[12]-S[2])+S[2]*(2*(S[12]-S[2])+S[0])-S[12]*
 S[0];
C[343]=+2*(S[12]-S[2]);
C[342]=+V[15]*(-4*V[17]-2*V[15])+2*S[12]+4*S[1];
S[13]=V[510]*V[510];
S[14]=V[490]*V[490];
C[341]=+S[13]*S[14]*S[8];
C[340]=+V[15]*(S[1]*(S[0]*(V[19]+V[16]+6*V[15])+S[1]*(2*(-V[19]-V[16]))+
 V[15]*(6*(V[19]*V[16]-S[2])))+S[0]*(S[0]*(V[19]+V[16])+S[2]*(4*(-V[19]-
 V[16])))+S[3]*(4*(V[19]+V[16])));
C[339]=+V[15]*(V[15]*(8*(V[15]*(V[19]+V[16]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[19]+V[16])+S[0]*(-V[19]-V[16])))+S[1]*(2*V[19]*V[16]-4*S[1])+2*S[5];
C[338]=+V[15]*(4*(V[19]+V[16])+16*V[15])-8*S[0];
C[337]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[16])-4*V[15])+4*V[19]*V[16]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[19]-V[16])+S[0]*(V[19]+V[16])))+S[1]*(4*(S[1]-S[0])+2*
 V[19]*V[16])-2*V[19]*V[16]*S[0];
C[336]=+8*(V[15]*(-V[19]-V[16])+S[0]+S[1])+4*V[19]*V[16]-20*S[2];
C[335]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])-V[19]*S[0]-
 V[16]*S[1])-6*V[15]*S[1])+S[1]*(6*V[19]*V[16]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-2*V[19]-3*V[16])+S[0]*(V[19]+3*V[16]))+V[19]*S[5]);
C[334]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[16]+S[0])-4*S[1]);
C[333]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*V[19]*V[16]+2*S[0]+6*S[1])+
 V[19]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[16])-2*V[19]*V[16]*
 S[0];
C[332]=+4*(V[19]*V[16]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[331]=+V[15]*(S[1]*(S[0]*(V[18]+V[16]+6*V[15])+S[1]*(2*(-V[18]-V[16]))+
 V[15]*(6*(V[18]*V[16]-S[2])))+S[0]*(S[0]*(V[18]+V[16])+S[2]*(4*(-V[18]-
 V[16])))+S[3]*(4*(V[18]+V[16])));
C[330]=+V[15]*(V[15]*(8*(V[15]*(V[18]+V[16]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[18]+V[16])+S[0]*(-V[18]-V[16])))+S[1]*(2*V[18]*V[16]-4*S[1])+2*S[5];
C[329]=+V[15]*(4*(V[18]+V[16])+16*V[15])-8*S[0];
C[328]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[16])-4*V[15])+4*V[18]*V[16]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[18]-V[16])+S[0]*(V[18]+V[16])))+S[1]*(4*(S[1]-S[0])+2*
 V[18]*V[16])-2*V[18]*V[16]*S[0];
C[327]=+8*(V[15]*(-V[18]-V[16])+S[0]+S[1])+4*V[18]*V[16]-20*S[2];
C[326]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])-V[18]*S[0]-
 V[16]*S[1])-6*V[15]*S[1])+S[1]*(6*V[18]*V[16]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-2*V[18]-3*V[16])+S[0]*(V[18]+3*V[16]))+V[18]*S[5]);
C[325]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[16]+S[0])-4*S[1]);
C[324]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*V[18]*V[16]+2*S[0]+6*S[1])+
 V[18]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[16])-2*V[18]*V[16]*
 S[0];
C[323]=+4*(V[18]*V[16]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[322]=+V[15]*(S[1]*(S[0]*(V[17]+V[16]+6*V[15])+S[1]*(2*(-V[17]-V[16]))+
 V[15]*(6*(V[17]*V[16]-S[2])))+S[0]*(S[0]*(V[17]+V[16])+S[2]*(4*(-V[17]-
 V[16])))+S[3]*(4*(V[17]+V[16])));
C[321]=+V[15]*(V[15]*(8*(V[15]*(V[17]+V[16]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[17]+V[16])+S[0]*(-V[17]-V[16])))+S[1]*(2*V[17]*V[16]-4*S[1])+2*S[5];
C[320]=+V[15]*(4*(V[17]+V[16])+16*V[15])-8*S[0];
C[319]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[16])-4*V[15])+4*V[17]*V[16]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[17]-V[16])+S[0]*(V[17]+V[16])))+S[1]*(4*(S[1]-S[0])+2*
 V[17]*V[16])-2*V[17]*V[16]*S[0];
C[318]=+8*(V[15]*(-V[17]-V[16])+S[0]+S[1])+4*V[17]*V[16]-20*S[2];
C[317]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])-V[17]*S[0]-
 V[16]*S[1])-6*V[15]*S[1])+S[1]*(6*V[17]*V[16]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-2*V[17]-3*V[16])+S[0]*(V[17]+3*V[16]))+V[17]*S[5]);
C[316]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[17]*V[16]+S[0])-4*S[1]);
C[315]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*V[17]*V[16]+2*S[0]+6*S[1])+
 V[17]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[17]*V[16])-2*V[17]*V[16]*
 S[0];
C[314]=+4*(V[17]*V[16]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[313]=+V[15]*(V[16]*(S[1]*(3*V[16]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[15]=V[16]*V[16];
C[312]=+V[15]*(V[15]*(V[15]*(8*V[16]+4*V[15])-4*S[0]-5*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(S[15]-2*S[1])+S[5];
C[311]=+V[15]*(4*V[16]+8*V[15])-4*S[0];
C[310]=+V[15]*(V[15]*(V[15]*(-8*V[16]-2*V[15])+2*S[15]+S[0]+7*S[1])+V[16]*(
 4*(S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[15])-S[15]*S[0];
C[309]=+V[15]*(-8*V[16]-10*V[15])+4*(S[0]+S[1])+2*S[15];
C[308]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])-V[19]*S[1]-
 V[16]*S[0])-6*V[15]*S[1])+S[1]*(6*V[19]*V[16]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-3*V[19]-2*V[16])+S[0]*(3*V[19]+V[16]))+V[16]*S[5]);
C[307]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[16]+S[0])-4*S[1]);
C[306]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*V[19]*V[16]+2*S[0]+6*S[1])+
 V[16]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[16])-2*V[19]*V[16]*
 S[0];
C[305]=+4*(V[19]*V[16]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[304]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[19]-V[16])+2*V[15])+6*V[19]*V[16]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[19]-V[16])+S[0]*(V[19]+V[16]))));
C[303]=+S[1]*(2*(V[19]*V[16]-S[2]-S[1]));
C[302]=+S[1]*(2*(V[19]*V[16]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[19]*V[16]-
 S[2])+2*S[0])-2*V[19]*V[16]*S[0];
C[301]=+4*(V[19]*V[16]-S[2]);
C[300]=+4*(V[15]*(-V[19]-V[16]-V[15])+V[19]*V[16])+8*S[1];
C[299]=+V[552]*V[532]*V[489]*V[469]*S[8];
C[298]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])-V[18]*S[1]-
 V[16]*S[0])-6*V[15]*S[1])+S[1]*(6*V[18]*V[16]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-3*V[18]-2*V[16])+S[0]*(3*V[18]+V[16]))+V[16]*S[5]);
C[297]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[16]+S[0])-4*S[1]);
C[296]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*V[18]*V[16]+2*S[0]+6*S[1])+
 V[16]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[16])-2*V[18]*V[16]*
 S[0];
C[295]=+4*(V[18]*V[16]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[294]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[18]-V[16])+2*V[15])+6*V[18]*V[16]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[18]-V[16])+S[0]*(V[18]+V[16]))));
C[293]=+S[1]*(2*(V[18]*V[16]-S[2]-S[1]));
C[292]=+S[1]*(2*(V[18]*V[16]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[18]*V[16]-
 S[2])+2*S[0])-2*V[18]*V[16]*S[0];
C[291]=+4*(V[18]*V[16]-S[2]);
C[290]=+4*(V[15]*(-V[18]-V[16]-V[15])+V[18]*V[16])+8*S[1];
C[289]=+V[531]*V[511]*V[489]*V[469]*S[8];
C[288]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])-V[17]*S[1]-
 V[16]*S[0])-6*V[15]*S[1])+S[1]*(6*V[17]*V[16]+2*S[0]+3*S[1])+S[5])+S[1]*(
 S[1]*(-3*V[17]-2*V[16])+S[0]*(3*V[17]+V[16]))+V[16]*S[5]);
C[287]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[17]*V[16]+S[0])-4*S[1]);
C[286]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*V[17]*V[16]+2*S[0]+6*S[1])+
 V[16]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[17]*V[16])-2*V[17]*V[16]*
 S[0];
C[285]=+4*(V[17]*V[16]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[284]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[17]-V[16])+2*V[15])+6*V[17]*V[16]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[17]-V[16])+S[0]*(V[17]+V[16]))));
C[283]=+S[1]*(2*(V[17]*V[16]-S[2]-S[1]));
C[282]=+S[1]*(2*(V[17]*V[16]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[17]*V[16]-
 S[2])+2*S[0])-2*V[17]*V[16]*S[0];
C[281]=+4*(V[17]*V[16]-S[2]);
C[280]=+4*(V[15]*(-V[17]-V[16]-V[15])+V[17]*V[16])+8*S[1];
C[279]=+V[510]*V[490]*V[489]*V[469]*S[8];
C[278]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])+V[16]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[15]+2*S[0]+3*S[1])+S[5])+V[16]*(S[1]*(
 4*S[0]-5*S[1])+S[5]));
C[277]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[15]+S[0])-4*S[1]);
C[276]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*S[15]+2*S[0]+6*S[1])+V[16]*
 (4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[15])-2*S[15]*S[0];
C[275]=+4*(S[15]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[274]=+V[15]*(-8*V[16]-4*V[15])+4*S[15]+8*S[1];
C[273]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[16])+3*S[15]+S[0]+2*S[1])+
 V[16]*(3*(S[0]-S[1]))));
C[272]=+S[1]*(S[15]-S[2]-S[1]);
C[271]=+S[1]*(2*(S[1]-S[0])+S[15]-S[2])+S[2]*(2*(S[15]-S[2])+S[0])-S[15]*
 S[0];
C[270]=+2*(S[15]-S[2]);
C[269]=+V[15]*(-4*V[16]-2*V[15])+2*S[15]+4*S[1];
S[16]=V[489]*V[489];
S[17]=V[469]*V[469];
C[268]=+S[16]*S[17]*S[8];
C[267]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])-6*S[1])+
 V[19]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[19]*(S[1]*(S[0]-2*
 S[1])+S[5]));
S[18]=V[2]*V[2]*V[2]*V[2];
C[266]=+V[15]*(V[15]*(V[15]*(8*V[19]+16*V[15])-12*S[0]-6*S[1])+V[19]*(6*
 S[1]-4*S[0]))+2*S[5]-4*S[18];
C[265]=+V[15]*(4*V[19]+20*V[15])-8*S[0];
C[264]=+V[15]*(V[15]*(V[15]*(4*V[19]+12*V[15])-6*S[0]-10*S[1])+V[19]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[263]=+V[15]*(4*V[19]+28*V[15])+8*(-S[0]-S[1]);
C[262]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])-10*S[1])+
 V[19]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[19]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[261]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[260]=+4*(V[15]*(V[19]+V[15])+S[1]);
C[259]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[15]))-2*S[0]-6*S[1])+V[19]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[258]=+4*(V[19]*V[15]-S[0]-S[1])+12*S[2];
C[257]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])-6*S[1])+
 V[18]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[18]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[256]=+V[15]*(V[15]*(V[15]*(8*V[18]+16*V[15])-12*S[0]-6*S[1])+V[18]*(6*
 S[1]-4*S[0]))+2*S[5]-4*S[18];
C[255]=+V[15]*(4*V[18]+20*V[15])-8*S[0];
C[254]=+V[15]*(V[15]*(V[15]*(4*V[18]+12*V[15])-6*S[0]-10*S[1])+V[18]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[253]=+V[15]*(4*V[18]+28*V[15])+8*(-S[0]-S[1]);
C[252]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])-10*S[1])+
 V[18]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[18]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[251]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[250]=+4*(V[15]*(V[18]+V[15])+S[1]);
C[249]=+V[15]*(V[15]*(V[15]*(4*(V[18]+V[15]))-2*S[0]-6*S[1])+V[18]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[248]=+4*(V[18]*V[15]-S[0]-S[1])+12*S[2];
C[247]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])-6*S[1])+
 V[17]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[17]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[246]=+V[15]*(V[15]*(V[15]*(8*V[17]+16*V[15])-12*S[0]-6*S[1])+V[17]*(6*
 S[1]-4*S[0]))+2*S[5]-4*S[18];
C[245]=+V[15]*(4*V[17]+20*V[15])-8*S[0];
C[244]=+V[15]*(V[15]*(V[15]*(4*V[17]+12*V[15])-6*S[0]-10*S[1])+V[17]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[243]=+V[15]*(4*V[17]+28*V[15])+8*(-S[0]-S[1]);
C[242]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])-10*S[1])+
 V[17]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[17]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[241]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[240]=+4*(V[15]*(V[17]+V[15])+S[1]);
C[239]=+V[15]*(V[15]*(V[15]*(4*(V[17]+V[15]))-2*S[0]-6*S[1])+V[17]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[238]=+4*(V[17]*V[15]-S[0]-S[1])+12*S[2];
C[237]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])-6*S[1])+
 V[16]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[16]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[236]=+V[15]*(V[15]*(V[15]*(8*V[16]+16*V[15])-12*S[0]-6*S[1])+V[16]*(6*
 S[1]-4*S[0]))+2*S[5]-4*S[18];
C[235]=+V[15]*(4*V[16]+20*V[15])-8*S[0];
C[234]=+V[15]*(V[15]*(V[15]*(4*V[16]+12*V[15])-6*S[0]-10*S[1])+V[16]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[233]=+V[15]*(4*V[16]+28*V[15])+8*(-S[0]-S[1]);
C[232]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])-10*S[1])+
 V[16]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[16]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[231]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[230]=+4*(V[15]*(V[16]+V[15])+S[1]);
C[229]=+V[15]*(V[15]*(V[15]*(4*(V[16]+V[15]))-2*S[0]-6*S[1])+V[16]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[228]=+4*(V[16]*V[15]-S[0]-S[1])+12*S[2];
C[227]=+S[2]*(S[0]*(4*(S[1]-S[2])+S[0])+4*S[3]-2*S[18]);
C[226]=+S[0]*(S[0]-8*S[2])+12*S[3]-2*S[18];
C[225]=+12*S[2]-4*S[0];
C[224]=+S[1]*(2*(S[0]-S[1])-4*S[2])+S[2]*(8*S[2]-4*S[0]);
C[223]=+4*(-S[0]-S[1])+16*S[2];
C[222]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[19]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[19]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[18]*(3*(V[213]-V[214]))+
 S[5]*(V[213]-V[214]))+V[19]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[221]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[19]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[19]*(V[213]-V[214])))+S[2]*(V[19]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[220]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[19]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[219]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[19]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[19]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[18]*(V[213]-V[214])+
 S[5]*(V[214]-V[213]))+V[19]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[218]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[19]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[19]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[217]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[19]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[216]=+V[15]*(V[19]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[215]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[19]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[214]=+V[552]*V[532]*V[464]*V[126]*S[8];
C[213]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[18]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[18]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[18]*(3*(V[213]-V[214]))+
 S[5]*(V[213]-V[214]))+V[18]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[212]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[18]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[18]*(V[213]-V[214])))+S[2]*(V[18]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[211]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[18]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[210]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[18]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[18]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[18]*(V[213]-V[214])+
 S[5]*(V[214]-V[213]))+V[18]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[209]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[18]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[18]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[208]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[18]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[207]=+V[15]*(V[18]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[206]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[18]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[205]=+V[531]*V[511]*V[464]*V[126]*S[8];
C[204]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[17]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[17]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[18]*(3*(V[213]-V[214]))+
 S[5]*(V[213]-V[214]))+V[17]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[203]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[17]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[17]*(V[213]-V[214])))+S[2]*(V[17]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[202]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[17]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[201]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[17]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[17]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[18]*(V[213]-V[214])+
 S[5]*(V[214]-V[213]))+V[17]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[200]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[17]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[17]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[199]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[17]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[198]=+V[15]*(V[17]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[197]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[17]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[196]=+V[510]*V[490]*V[464]*V[126]*S[8];
C[195]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[16]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[16]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[18]*(3*(V[213]-V[214]))+
 S[5]*(V[213]-V[214]))+V[16]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[194]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[16]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[16]*(V[213]-V[214])))+S[2]*(V[16]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[193]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[16]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[192]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[16]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[16]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[18]*(V[213]-V[214])+
 S[5]*(V[214]-V[213]))+V[16]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[5]*(V[214]-V[213])));
C[191]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[16]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[16]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[190]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[16]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[189]=+V[15]*(V[16]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[188]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[16]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[187]=+8*(V[214]-V[213]);
C[186]=+V[489]*V[469]*V[464]*V[126]*S[8];
C[185]=+S[1]*(S[2]*(V[213]*(S[1]-2*S[2]-S[0])+V[214]*(2*S[2]+S[0]-S[1])));
C[184]=+S[0]*(V[213]*(4*S[2]-S[0]+S[1])+V[214]*(S[0]-4*S[2]-S[1]))+S[3]*(4*(
 V[214]-V[213]));
C[183]=+V[213]*(4*S[0]-8*S[2]+2*S[1])+V[214]*(8*S[2]-4*S[0]-2*S[1]);
S[19]=V[214]*V[214];
C[182]=+S[2]*(V[213]*(S[1]*(V[213]*(S[1]-4*S[2]-2*S[0])+V[214]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[213]-2*V[214])+S[2]*(8*V[214]-4*V[213]))+S[3]*(
 4*V[213]-8*V[214]))+S[19]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[3]));
C[181]=+V[213]*(S[1]*(S[1]*(2*V[214]-V[213])+S[0]*(2*V[213]-4*V[214]))+S[5]*
 (2*V[214]-V[213])+S[3]*(4*V[213]-8*V[214]))+S[19]*(S[1]*(2*S[0]-S[1])+4*
 S[3]-S[5]);
C[180]=+V[213]*(V[213]*(4*(S[2]-S[0]-S[1]))+V[214]*(8*(S[0]-S[2]+S[1])))+
 S[19]*(4*(S[2]-S[0]-S[1]));
C[179]=+V[213]*(4*V[213]-8*V[214])+4*S[19];
S[20]=V[464]*V[464];
S[21]=V[126]*V[126];
C[178]=+S[20]*S[21]*S[8];
C[177]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[19]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[19]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[18]*(3*(V[211]-V[212]))+
 S[5]*(V[211]-V[212]))+V[19]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[176]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[19]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[19]*(V[211]-V[212])))+S[2]*(V[19]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[175]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[19]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[174]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[19]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[19]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[18]*(V[211]-V[212])+
 S[5]*(V[212]-V[211]))+V[19]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[173]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[19]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[19]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[172]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[19]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[171]=+V[15]*(V[19]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[170]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[19]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[169]=+V[552]*V[532]*V[462]*V[126]*S[8];
C[168]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[18]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[18]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[18]*(3*(V[211]-V[212]))+
 S[5]*(V[211]-V[212]))+V[18]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[167]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[18]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[18]*(V[211]-V[212])))+S[2]*(V[18]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[166]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[18]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[165]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[18]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[18]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[18]*(V[211]-V[212])+
 S[5]*(V[212]-V[211]))+V[18]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[164]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[18]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[18]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[163]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[18]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[162]=+V[15]*(V[18]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[161]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[18]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[160]=+V[531]*V[511]*V[462]*V[126]*S[8];
C[159]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[17]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[17]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[18]*(3*(V[211]-V[212]))+
 S[5]*(V[211]-V[212]))+V[17]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[158]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[17]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[17]*(V[211]-V[212])))+S[2]*(V[17]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[157]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[17]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[156]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[17]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[17]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[18]*(V[211]-V[212])+
 S[5]*(V[212]-V[211]))+V[17]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[155]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[17]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[17]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[154]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[17]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[153]=+V[15]*(V[17]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[152]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[17]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[151]=+V[510]*V[490]*V[462]*V[126]*S[8];
C[150]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[16]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[16]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[18]*(3*(V[211]-V[212]))+
 S[5]*(V[211]-V[212]))+V[16]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[149]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[16]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[16]*(V[211]-V[212])))+S[2]*(V[16]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[148]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[16]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[147]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[16]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[16]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[18]*(V[211]-V[212])+
 S[5]*(V[212]-V[211]))+V[16]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[5]*(V[212]-V[211])));
C[146]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[16]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[16]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[145]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[16]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[144]=+V[15]*(V[16]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[143]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[16]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[142]=+8*(V[212]-V[211]);
C[141]=+V[489]*V[469]*V[462]*V[126]*S[8];
C[140]=+S[1]*(S[2]*(V[211]*(S[1]-2*S[2]-S[0])+V[212]*(2*S[2]+S[0]-S[1])));
C[139]=+S[0]*(V[211]*(4*S[2]-S[0]+S[1])+V[212]*(S[0]-4*S[2]-S[1]))+S[3]*(4*(
 V[212]-V[211]));
C[138]=+V[211]*(4*S[0]-8*S[2]+2*S[1])+V[212]*(8*S[2]-4*S[0]-2*S[1]);
C[137]=+S[2]*(S[1]*(V[211]*(V[213]*(S[1]-4*S[2]-2*S[0])+V[214]*(4*S[2]+2*
 S[0]-S[1]))+V[212]*(V[213]*(4*S[2]+2*S[0]-S[1])+V[214]*(S[1]-4*S[2]-2*
 S[0])))+S[0]*(S[0]*(V[211]*(V[213]-V[214])+V[212]*(V[214]-V[213]))+S[2]*(4*
 (V[211]*(V[214]-V[213])+V[212]*(V[213]-V[214]))))+S[3]*(4*(V[211]*(V[213]-
 V[214])+V[212]*(V[214]-V[213]))));
C[136]=+S[1]*(S[1]*(V[211]*(V[214]-V[213])+V[212]*(V[213]-V[214]))+S[0]*(2*(
 V[211]*(V[213]-V[214])+V[212]*(V[214]-V[213]))))+S[5]*(V[211]*(V[214]-
 V[213])+V[212]*(V[213]-V[214]))+S[3]*(4*(V[211]*(V[213]-V[214])+V[212]*(
 V[214]-V[213])));
C[135]=+4*(V[211]*(V[213]*(S[2]-S[0]-S[1])+V[214]*(S[0]-S[2]+S[1]))+V[212]*(
 V[213]*(S[0]-S[2]+S[1])+V[214]*(S[2]-S[0]-S[1])));
C[134]=+4*(V[211]*(V[213]-V[214])+V[212]*(V[214]-V[213]));
C[133]=+V[464]*V[462]*S[21]*S[8];
S[22]=V[212]*V[212];
C[132]=+S[2]*(V[211]*(S[1]*(V[211]*(S[1]-4*S[2]-2*S[0])+V[212]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[211]-2*V[212])+S[2]*(8*V[212]-4*V[211]))+S[3]*(
 4*V[211]-8*V[212]))+S[22]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[3]));
C[131]=+V[211]*(S[1]*(S[1]*(2*V[212]-V[211])+S[0]*(2*V[211]-4*V[212]))+S[5]*
 (2*V[212]-V[211])+S[3]*(4*V[211]-8*V[212]))+S[22]*(S[1]*(2*S[0]-S[1])+4*
 S[3]-S[5]);
C[130]=+V[211]*(V[211]*(4*(S[2]-S[0]-S[1]))+V[212]*(8*(S[0]-S[2]+S[1])))+
 S[22]*(4*(S[2]-S[0]-S[1]));
C[129]=+V[211]*(4*V[211]-8*V[212])+4*S[22];
S[23]=V[462]*V[462];
C[128]=+S[23]*S[21]*S[8];
C[127]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[19]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[19]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[18]*(3*(V[209]-V[210]))+
 S[5]*(V[209]-V[210]))+V[19]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[126]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[19]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[19]*(V[209]-V[210])))+S[2]*(V[19]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[125]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[19]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[124]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[19]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[19]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[18]*(V[209]-V[210])+
 S[5]*(V[210]-V[209]))+V[19]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[123]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[19]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[19]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[122]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[19]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[121]=+V[15]*(V[19]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*
 (V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[120]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[19]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[119]=+V[552]*V[532]*V[460]*V[126]*S[8];
C[118]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[18]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[18]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[18]*(3*(V[209]-V[210]))+
 S[5]*(V[209]-V[210]))+V[18]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[117]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[18]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[18]*(V[209]-V[210])))+S[2]*(V[18]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[116]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[18]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[115]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[18]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[18]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[18]*(V[209]-V[210])+
 S[5]*(V[210]-V[209]))+V[18]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[114]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[18]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[18]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[113]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[18]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[112]=+V[15]*(V[18]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*
 (V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[111]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[18]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[110]=+V[531]*V[511]*V[460]*V[126]*S[8];
C[109]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[17]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[17]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[18]*(3*(V[209]-V[210]))+
 S[5]*(V[209]-V[210]))+V[17]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[108]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[17]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[17]*(V[209]-V[210])))+S[2]*(V[17]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[107]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[17]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[106]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[17]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[17]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[18]*(V[209]-V[210])+
 S[5]*(V[210]-V[209]))+V[17]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[105]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[17]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[17]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[104]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[17]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[103]=+V[15]*(V[17]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*
 (V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[102]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[17]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[101]=+V[510]*V[490]*V[460]*V[126]*S[8];
C[100]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[16]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[16]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[18]*(3*(V[209]-V[210]))+
 S[5]*(V[209]-V[210]))+V[16]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[99]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[16]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[16]*(V[209]-V[210])))+S[2]*(V[16]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[98]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[16]*(4*(V[210]-V[209])))+S[1]*(4*
 (V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[97]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[16]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[16]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[18]*(V[209]-V[210])+
 S[5]*(V[210]-V[209]))+V[16]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[5]*(V[210]-V[209])));
C[96]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[16]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[16]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[95]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[16]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[94]=+V[15]*(V[16]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*(
 V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[93]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[16]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[92]=+8*(V[210]-V[209]);
C[91]=+V[489]*V[469]*V[460]*V[126]*S[8];
C[90]=+S[1]*(S[2]*(V[209]*(S[1]-2*S[2]-S[0])+V[210]*(2*S[2]+S[0]-S[1])));
C[89]=+S[0]*(V[209]*(4*S[2]-S[0]+S[1])+V[210]*(S[0]-4*S[2]-S[1]))+S[3]*(4*(
 V[210]-V[209]));
C[88]=+V[209]*(4*S[0]-8*S[2]+2*S[1])+V[210]*(8*S[2]-4*S[0]-2*S[1]);
C[87]=+S[2]*(S[1]*(V[209]*(V[213]*(S[1]-4*S[2]-2*S[0])+V[214]*(4*S[2]+2*
 S[0]-S[1]))+V[210]*(V[213]*(4*S[2]+2*S[0]-S[1])+V[214]*(S[1]-4*S[2]-2*
 S[0])))+S[0]*(S[0]*(V[209]*(V[213]-V[214])+V[210]*(V[214]-V[213]))+S[2]*(4*
 (V[209]*(V[214]-V[213])+V[210]*(V[213]-V[214]))))+S[3]*(4*(V[209]*(V[213]-
 V[214])+V[210]*(V[214]-V[213]))));
C[86]=+S[1]*(S[1]*(V[209]*(V[214]-V[213])+V[210]*(V[213]-V[214]))+S[0]*(2*(
 V[209]*(V[213]-V[214])+V[210]*(V[214]-V[213]))))+S[5]*(V[209]*(V[214]-
 V[213])+V[210]*(V[213]-V[214]))+S[3]*(4*(V[209]*(V[213]-V[214])+V[210]*(
 V[214]-V[213])));
C[85]=+4*(V[209]*(V[213]*(S[2]-S[0]-S[1])+V[214]*(S[0]-S[2]+S[1]))+V[210]*(
 V[213]*(S[0]-S[2]+S[1])+V[214]*(S[2]-S[0]-S[1])));
C[84]=+4*(V[209]*(V[213]-V[214])+V[210]*(V[214]-V[213]));
C[83]=+V[464]*V[460]*S[21]*S[8];
C[82]=+S[2]*(S[1]*(V[209]*(V[211]*(S[1]-4*S[2]-2*S[0])+V[212]*(4*S[2]+2*
 S[0]-S[1]))+V[210]*(V[211]*(4*S[2]+2*S[0]-S[1])+V[212]*(S[1]-4*S[2]-2*
 S[0])))+S[0]*(S[0]*(V[209]*(V[211]-V[212])+V[210]*(V[212]-V[211]))+S[2]*(4*
 (V[209]*(V[212]-V[211])+V[210]*(V[211]-V[212]))))+S[3]*(4*(V[209]*(V[211]-
 V[212])+V[210]*(V[212]-V[211]))));
C[81]=+S[1]*(S[1]*(V[209]*(V[212]-V[211])+V[210]*(V[211]-V[212]))+S[0]*(2*(
 V[209]*(V[211]-V[212])+V[210]*(V[212]-V[211]))))+S[5]*(V[209]*(V[212]-
 V[211])+V[210]*(V[211]-V[212]))+S[3]*(4*(V[209]*(V[211]-V[212])+V[210]*(
 V[212]-V[211])));
C[80]=+4*(V[209]*(V[211]*(S[2]-S[0]-S[1])+V[212]*(S[0]-S[2]+S[1]))+V[210]*(
 V[211]*(S[0]-S[2]+S[1])+V[212]*(S[2]-S[0]-S[1])));
C[79]=+4*(V[209]*(V[211]-V[212])+V[210]*(V[212]-V[211]));
S[24]=V[122]*V[122];
S[25]=V[121]*V[121];
S[26]=V[119]*V[119]*V[119]*V[119];
S[27]=V[118]*V[118];
S[28]=V[7]*V[7];
S[29]=V[3]*V[3];
C[78]=+32*S[24]*S[25]*S[26]*S[27]*S[28]*S[29]*S[1];
C[77]=+V[462]*V[460]*S[21]*S[8];
S[30]=V[210]*V[210];
C[76]=+S[2]*(V[209]*(S[1]*(V[209]*(S[1]-4*S[2]-2*S[0])+V[210]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[209]-2*V[210])+S[2]*(8*V[210]-4*V[209]))+S[3]*(
 4*V[209]-8*V[210]))+S[30]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[3]));
C[75]=+V[209]*(S[1]*(S[1]*(2*V[210]-V[209])+S[0]*(2*V[209]-4*V[210]))+S[5]*(
 2*V[210]-V[209])+S[3]*(4*V[209]-8*V[210]))+S[30]*(S[1]*(2*S[0]-S[1])+4*
 S[3]-S[5]);
C[74]=+V[209]*(V[209]*(4*(S[2]-S[0]-S[1]))+V[210]*(8*(S[0]-S[2]+S[1])))+
 S[30]*(4*(S[2]-S[0]-S[1]));
C[73]=+V[209]*(4*V[209]-8*V[210])+4*S[30];
C[72]=+64*S[24]*S[25]*S[26]*S[27]*S[28]*S[29]*S[1];
S[31]=V[460]*V[460];
C[71]=+S[31]*S[21]*S[8];
C[70]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[19]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[19]*(3*(S[0]-S[1]))));
C[69]=+S[1]*(2*(V[15]*(V[19]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[68]=+V[15]*(V[15]*(V[15]*(4*V[19]-12*V[15])+6*S[0]+2*S[1])+V[19]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[67]=+4*(V[19]*V[15]+S[0]+S[1])-20*S[2];
C[66]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+5*S[0]+S[1])+V[19]*(3*(
 S[0]-S[1]))));
C[65]=+S[1]*(2*(V[15]*(V[19]-V[15])-S[1]));
C[64]=+V[15]*(V[15]*(V[15]*(4*(V[19]-V[15]))+2*(S[0]-S[1]))+V[19]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[63]=+V[15]*(4*(V[19]-V[15]));
C[62]=+V[552]*V[532]*V[468]*V[458]*S[8];
C[61]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[18]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[18]*(3*(S[0]-S[1]))));
C[60]=+S[1]*(2*(V[15]*(V[18]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[59]=+V[15]*(V[15]*(V[15]*(4*V[18]-12*V[15])+6*S[0]+2*S[1])+V[18]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[58]=+4*(V[18]*V[15]+S[0]+S[1])-20*S[2];
C[57]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+5*S[0]+S[1])+V[18]*(3*(
 S[0]-S[1]))));
C[56]=+S[1]*(2*(V[15]*(V[18]-V[15])-S[1]));
C[55]=+V[15]*(V[15]*(V[15]*(4*(V[18]-V[15]))+2*(S[0]-S[1]))+V[18]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[54]=+V[15]*(4*(V[18]-V[15]));
C[53]=+V[531]*V[511]*V[468]*V[458]*S[8];
C[52]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[17]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[17]*(3*(S[0]-S[1]))));
C[51]=+S[1]*(2*(V[15]*(V[17]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[50]=+V[15]*(V[15]*(V[15]*(4*V[17]-12*V[15])+6*S[0]+2*S[1])+V[17]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[49]=+4*(V[17]*V[15]+S[0]+S[1])-20*S[2];
C[48]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+5*S[0]+S[1])+V[17]*(3*(
 S[0]-S[1]))));
C[47]=+S[1]*(2*(V[15]*(V[17]-V[15])-S[1]));
C[46]=+V[15]*(V[15]*(V[15]*(4*(V[17]-V[15]))+2*(S[0]-S[1]))+V[17]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[45]=+V[15]*(4*(V[17]-V[15]));
C[44]=+V[510]*V[490]*V[468]*V[458]*S[8];
C[43]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[16]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[16]*(3*(S[0]-S[1]))));
C[42]=+S[1]*(2*(V[15]*(V[16]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[41]=+8*S[2]+4*S[1];
C[40]=+V[15]*(V[15]*(V[15]*(4*V[16]-12*V[15])+6*S[0]+2*S[1])+V[16]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[39]=+4*(V[16]*V[15]+S[0]+S[1])-20*S[2];
C[38]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+5*S[0]+S[1])+V[16]*(3*(
 S[0]-S[1]))));
C[37]=+S[1]*(2*(V[15]*(V[16]-V[15])-S[1]));
C[36]=+V[15]*(V[15]*(V[15]*(4*(V[16]-V[15]))+2*(S[0]-S[1]))+V[16]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[35]=+V[15]*(4*(V[16]-V[15]));
C[34]=+8*(S[2]-S[1]);
C[33]=+V[489]*V[469]*V[468]*V[458]*S[8];
C[32]=+S[2]*(S[1]*(3*S[0]-2*S[2]-S[1])+S[0]*(S[0]-4*S[2])+4*S[3]);
C[31]=+S[1]*(S[0]-2*S[1])+S[2]*(8*S[2]-4*S[0]);
C[30]=+4*S[2]+2*S[1];
C[29]=+2*(S[1]*(S[0]-S[2]-S[1])-S[2]*S[0])+4*S[3];
C[28]=+2*(-S[0]-S[1])+8*S[2];
C[27]=+8*S[24]*S[25]*S[26]*S[27]*S[28]*S[29]*S[1];
C[26]=+S[2]*(S[0]*(V[213]*(4*S[2]-S[0]+S[1])+V[214]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[213]-V[214]))+S[2]*(4*(V[214]-V[213]))));
C[25]=+S[1]*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213]))+S[2]*(S[0]*(4*(
 V[213]-V[214]))+S[2]*(8*(V[214]-V[213])));
C[24]=+S[1]*(2*(V[214]-V[213]))+S[2]*(4*(V[214]-V[213]));
C[23]=+S[2]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214]))+S[2]*(4*(V[214]-
 V[213])));
C[22]=+2*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214]))+S[2]*(8*(V[214]-
 V[213]));
C[21]=+4*(V[214]-V[213]);
C[20]=+V[468]*V[464]*V[458]*V[126]*S[8];
C[19]=+S[2]*(S[0]*(V[211]*(4*S[2]-S[0]+S[1])+V[212]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[211]-V[212]))+S[2]*(4*(V[212]-V[211]))));
C[18]=+S[1]*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211]))+S[2]*(S[0]*(4*(
 V[211]-V[212]))+S[2]*(8*(V[212]-V[211])));
C[17]=+S[1]*(2*(V[212]-V[211]))+S[2]*(4*(V[212]-V[211]));
C[16]=+S[2]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212]))+S[2]*(4*(V[212]-
 V[211])));
C[15]=+2*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212]))+S[2]*(8*(V[212]-
 V[211]));
C[14]=+4*(V[212]-V[211]);
C[13]=+V[468]*V[462]*V[458]*V[126]*S[8];
C[12]=+S[2]*(S[0]*(V[209]*(4*S[2]-S[0]+S[1])+V[210]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[209]-V[210]))+S[2]*(4*(V[210]-V[209]))));
C[11]=+S[1]*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209]))+S[2]*(S[0]*(4*(
 V[209]-V[210]))+S[2]*(8*(V[210]-V[209])));
C[10]=+S[1]*(2*(V[210]-V[209]))+S[2]*(4*(V[210]-V[209]));
C[9]=+S[2]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(4*(V[210]-
 V[209])));
C[8]=+2*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(8*(V[210]-
 V[209]));
C[7]=+4*(V[210]-V[209]);
C[6]=+V[468]*V[460]*V[458]*V[126]*S[8];
C[5]=+S[1]*(S[2]*(4*S[0]-S[1]));
C[4]=+S[18];
C[3]=+S[1]*(2*(S[0]-S[1]));
C[2]=+4*(S[2]-S[1]);
C[1]=+16*S[24]*S[25]*S[26]*S[27]*S[28]*S[29]*S[1];
S[32]=V[468]*V[468];
S[33]=V[458]*V[458];
C[0]=+S[32]*S[33]*S[8];
}
