/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C4(REAL *);
extern DNN S4_omg_p25p25_u;
REAL S4_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[14],width[14];
char * Qtxt[14];
REAL Q0[14]; COMPLEX Q1[14]; REAL Q2[14];
 if(momenta)
 {width[13]=0.; mass[13]=V[19];  Qtxt[13]="\1\3";
width[12]=0.; mass[12]=V[19];  Qtxt[12]="\1\4";
width[11]=0.; mass[11]=V[18];  Qtxt[11]="\1\4";
width[10]=0.; mass[10]=V[17];  Qtxt[10]="\1\4";
width[9]=0.; mass[9]=V[18];  Qtxt[9]="\1\3";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[16];  Qtxt[7]="\1\4";
width[6]=0.; mass[6]=V[16];  Qtxt[6]="\1\3";
width[3]=V[558]; mass[3]=V[13];  Qtxt[3]="\1\2";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\4";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
width[4]=0.; mass[4]=V[15];  Qtxt[4]="\1\3";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[417];                                                   
if(!momenta){ C4(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[1]*(DP[1]*(4*DP[0]-C[2])+C[3])-C[5]-C[4]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[7];
R=+DP[0]*(DP[0]*(C[11]-8*DP[1])+C[12]-C[9]*DP[1])+DP[1]*(C[8]*DP[1]-C[10])+
 C[13];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[14];
R=+DP[0]*(DP[1]*(4*(DP[1]-DP[0])-C[16])+C[19]+C[18]*DP[0])+DP[1]*(C[15]*
 DP[1]-C[17])+C[20];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[21];
D=+C[1];
R=+DP[0]*(DP[0]*(C[22]*DP[1]-C[25])+C[23]*DP[1]-C[26])+C[24]*DP[1]-C[27];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[28];
D=+C[1];
R=+DP[0]*(DP[0]*(C[22]*DP[1]-C[25])+C[23]*DP[1]-C[26])+C[24]*DP[1]-C[27];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[29];
D=+C[1];
R=+DP[1]*(DP[0]*(C[31]+8*DP[1])+C[32]-C[30]*DP[1])+C[33]*DP[0]-C[34];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[29];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[36])+C[11]*DP[0]-C[38])+DP[1]*(C[35]*
 DP[1]-C[37])+C[39];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[40];
D=+C[1];
R=+DP[1]*(DP[0]*(C[42]+8*DP[1])+C[43]-C[41]*DP[1])+C[44]*DP[0]-C[45];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[46];
D=+C[1];
R=+DP[1]*(DP[0]*(C[48]+8*DP[1])+C[49]-C[47]*DP[1])+C[50]*DP[0]-C[51];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[40];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[53])+C[11]*DP[0]-C[55])+DP[1]*(C[52]*
 DP[1]-C[54])+C[56];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[46];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[58])+C[11]*DP[0]-C[60])+DP[1]*(C[57]*
 DP[1]-C[59])+C[61];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[62];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[64])+C[11]*DP[0]-C[66])+DP[1]*(C[63]*
 DP[1]-C[65])+C[67];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[1];
R=+DP[1]*(DP[0]*(C[69]+8*DP[1])+C[70]-C[68]*DP[1])+C[71]*DP[0]-C[72];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[73];
D=+C[74];
R=+DP[0]*(DP[0]*(-C[78]-C[77]*DP[0])-C[79]-C[75]*DP[1])+DP[1]*(C[75]*DP[1]-
 C[76])-C[80];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[7];
R=+DP[0]*(DP[0]*(8*(DP[1]-DP[0])-C[83])+C[81]*DP[1]-C[84])+DP[1]*(C[82]+
 C[8]*DP[1])-C[85];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[86];
D=+C[87];
R=+DP[0]*(DP[0]*(C[89]+C[88]*DP[0])+C[90])+C[91];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[92];
D=+C[87];
R=+DP[0]*(DP[0]*(C[89]+C[88]*DP[0])+C[90])+C[91];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[93];
D=+C[7];
R=+DP[0]*(DP[0]*(C[98]-C[95]*DP[1])+C[99]-C[96]*DP[1])+DP[1]*(C[94]*DP[1]-
 C[97])+C[100];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[93];
D=+C[7];
R=+DP[0]*(DP[0]*(C[95]*(DP[1]-DP[0])+C[103])+C[104]-C[101]*DP[1])+DP[1]*(
 C[94]*DP[1]-C[102])+C[105];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[106];
D=+C[7];
R=+DP[0]*(DP[0]*(C[110]-C[95]*DP[1])+C[111]-C[108]*DP[1])+DP[1]*(C[107]*
 DP[1]-C[109])+C[112];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[113];
D=+C[7];
R=+DP[0]*(DP[0]*(C[117]-C[95]*DP[1])+C[118]-C[115]*DP[1])+DP[1]*(C[114]*
 DP[1]-C[116])+C[119];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[106];
D=+C[7];
R=+DP[0]*(DP[0]*(C[95]*(DP[1]-DP[0])+C[122])+C[123]-C[120]*DP[1])+DP[1]*(
 C[107]*DP[1]-C[121])+C[124];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[113];
D=+C[7];
R=+DP[0]*(DP[0]*(C[95]*(DP[1]-DP[0])+C[127])+C[128]-C[125]*DP[1])+DP[1]*(
 C[114]*DP[1]-C[126])+C[129];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[130];
D=+C[7];
R=+DP[0]*(DP[0]*(C[95]*(DP[1]-DP[0])+C[134])+C[135]-C[132]*DP[1])+DP[1]*(
 C[131]*DP[1]-C[133])+C[136];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[130];
D=+C[7];
R=+DP[0]*(DP[0]*(C[139]-C[95]*DP[1])+C[140]-C[137]*DP[1])+DP[1]*(C[131]*
 DP[1]-C[138])+C[141];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(C[144]+4*DP[0]-8*DP[1])+DP[1]*(C[142]+4*DP[1])-C[145])+
 DP[1]*(C[143]-C[2]*DP[1])-C[146];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[21];
D=+C[1];
R=+DP[0]*(DP[0]*(C[22]*(DP[1]-DP[0])-C[147])+C[23]*DP[1]-C[148])+C[24]*
 DP[1]-C[149];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[28];
D=+C[1];
R=+DP[0]*(DP[0]*(C[22]*(DP[1]-DP[0])-C[147])+C[23]*DP[1]-C[148])+C[24]*
 DP[1]-C[149];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[29];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[150])+C[153]+C[152]*DP[0])+DP[1]*(C[35]*
 DP[1]-C[151])+C[154];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[29];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[157]-16*DP[1])+DP[1]*(C[155]+8*DP[1])-C[158])+
 DP[1]*(C[156]-C[30]*DP[1])-C[159];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[40];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[160])+C[163]+C[162]*DP[0])+DP[1]*(C[52]*
 DP[1]-C[161])+C[164];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[46];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[165])+C[168]+C[167]*DP[0])+DP[1]*(C[57]*
 DP[1]-C[166])+C[169];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[40];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[172]-16*DP[1])+DP[1]*(C[170]+8*DP[1])-C[173])+
 DP[1]*(C[171]-C[41]*DP[1])-C[174];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[46];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[177]-16*DP[1])+DP[1]*(C[175]+8*DP[1])-C[178])+
 DP[1]*(C[176]-C[47]*DP[1])-C[179];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[182]-16*DP[1])+DP[1]*(C[180]+8*DP[1])-C[183])+
 DP[1]*(C[181]-C[68]*DP[1])-C[184];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[62];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[185])+C[188]+C[187]*DP[0])+DP[1]*(C[63]*
 DP[1]-C[186])+C[189];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[190];
D=+C[191];
R=+DP[0]*(DP[0]*(C[193]+C[192]*DP[0])+C[194])+C[195];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[196];
D=+C[197];
R=+DP[0]*(DP[0]*(C[193]+C[192]*DP[0])+C[194])+C[195];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[198];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[201])+C[199]*DP[1]-C[202])+C[200]*DP[1]-
 C[203];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[198];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[204])+C[205]+C[199]*DP[1])+C[206]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[207];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[208])+C[199]*DP[1]-C[209])+C[200]*DP[1]-
 C[210];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[211];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[212])+C[199]*DP[1]-C[213])+C[200]*DP[1]-
 C[214];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[207];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[215])+C[216]+C[199]*DP[1])+C[217]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[211];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[218])+C[219]+C[199]*DP[1])+C[220]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[221];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[222])+C[223]+C[199]*DP[1])+C[224]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[221];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[225])+C[199]*DP[1]-C[226])+C[200]*DP[1]-
 C[227];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[228];
D=+C[191];
R=+DP[0]*(DP[0]*(C[193]+C[192]*DP[0])+C[194])+C[195];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[229];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[201])+C[199]*DP[1]-C[202])+C[200]*DP[1]-
 C[203];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[229];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[204])+C[205]+C[199]*DP[1])+C[206]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[230];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[208])+C[199]*DP[1]-C[209])+C[200]*DP[1]-
 C[210];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[231];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[212])+C[199]*DP[1]-C[213])+C[200]*DP[1]-
 C[214];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[230];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[215])+C[216]+C[199]*DP[1])+C[217]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[231];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[218])+C[219]+C[199]*DP[1])+C[220]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[232];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*(DP[1]-DP[0])+C[222])+C[223]+C[199]*DP[1])+C[224]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[232];
D=+C[197];
R=+DP[0]*(DP[0]*(C[88]*DP[1]-C[225])+C[199]*DP[1]-C[226])+C[200]*DP[1]-
 C[227];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[233];
D=+C[1];
R=+DP[1]*(DP[0]*(C[235]+4*DP[1])+C[236]-C[234]*DP[1])+C[237]*DP[0]-C[238];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[233];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[240])+C[152]*DP[0]-C[242])+DP[1]*(C[239]*
 DP[1]-C[241])+C[243];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[244];
D=+C[1];
R=+DP[1]*(DP[0]*(C[246]+8*DP[1])+C[247]-C[245]*DP[1])+C[248]*DP[0]-C[249];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[250];
D=+C[1];
R=+DP[1]*(DP[0]*(C[252]+8*DP[1])+C[253]-C[251]*DP[1])+C[254]*DP[0]-C[255];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[244];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[257])+C[152]*DP[0]-C[259])+DP[1]*(C[256]*
 DP[1]-C[258])+C[260];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[250];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[262])+C[152]*DP[0]-C[264])+DP[1]*(C[261]*
 DP[1]-C[263])+C[265];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[266];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[268])+C[152]*DP[0]-C[270])+DP[1]*(C[267]*
 DP[1]-C[269])+C[271];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[266];
D=+C[1];
R=+DP[1]*(DP[0]*(C[273]+8*DP[1])+C[274]-C[272]*DP[1])+C[275]*DP[0]-C[276];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[233];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[279]-8*DP[1])+DP[1]*(C[277]+4*DP[1])+C[280])+
 DP[1]*(C[278]-C[234]*DP[1])-C[281];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[244];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[282])+C[162]*DP[0]-C[284])+DP[1]*(C[256]*
 DP[1]-C[283])+C[285];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[250];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[286])+C[167]*DP[0]-C[288])+DP[1]*(C[261]*
 DP[1]-C[287])+C[289];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[244];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[292]-16*DP[1])+DP[1]*(C[290]+8*DP[1])+C[293])+
 DP[1]*(C[291]-C[245]*DP[1])-C[294];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[250];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[297]-16*DP[1])+DP[1]*(C[295]+8*DP[1])+C[298])+
 DP[1]*(C[296]-C[251]*DP[1])-C[299];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[266];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[302]-16*DP[1])+DP[1]*(C[300]+8*DP[1])+C[303])+
 DP[1]*(C[301]-C[272]*DP[1])-C[304];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[266];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[305])+C[187]*DP[0]-C[307])+DP[1]*(C[267]*
 DP[1]-C[306])+C[308];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[309];
D=+C[1];
R=+DP[1]*(DP[0]*(C[311]+4*DP[1])+C[312]-C[310]*DP[1])+C[313]*DP[0]-C[314];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[315];
D=+C[1];
R=+DP[1]*(DP[0]*(C[317]+8*DP[1])+C[318]-C[316]*DP[1])+C[319]*DP[0]-C[320];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[309];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[322])+C[162]*DP[0]-C[324])+DP[1]*(C[321]*
 DP[1]-C[323])+C[325];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[315];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[327])+C[162]*DP[0]-C[329])+DP[1]*(C[326]*
 DP[1]-C[328])+C[330];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[331];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[333])+C[162]*DP[0]-C[335])+DP[1]*(C[332]*
 DP[1]-C[334])+C[336];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[331];
D=+C[1];
R=+DP[1]*(DP[0]*(C[338]+8*DP[1])+C[339]-C[337]*DP[1])+C[340]*DP[0]-C[341];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[342];
D=+C[1];
R=+DP[1]*(DP[0]*(C[344]+4*DP[1])+C[345]-C[343]*DP[1])+C[346]*DP[0]-C[347];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[315];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[348])+C[167]*DP[0]-C[350])+DP[1]*(C[326]*
 DP[1]-C[349])+C[351];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[342];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[353])+C[167]*DP[0]-C[355])+DP[1]*(C[352]*
 DP[1]-C[354])+C[356];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[357];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[359])+C[167]*DP[0]-C[361])+DP[1]*(C[358]*
 DP[1]-C[360])+C[362];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[357];
D=+C[1];
R=+DP[1]*(DP[0]*(C[364]+8*DP[1])+C[365]-C[363]*DP[1])+C[366]*DP[0]-C[367];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[309];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[370]-8*DP[1])+DP[1]*(C[368]+4*DP[1])+C[371])+
 DP[1]*(C[369]-C[310]*DP[1])-C[372];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[315];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[375]-16*DP[1])+DP[1]*(C[373]+8*DP[1])+C[376])+
 DP[1]*(C[374]-C[316]*DP[1])-C[377];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[331];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[380]-16*DP[1])+DP[1]*(C[378]+8*DP[1])+C[381])+
 DP[1]*(C[379]-C[337]*DP[1])-C[382];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[331];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[383])+C[187]*DP[0]-C[385])+DP[1]*(C[332]*
 DP[1]-C[384])+C[386];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[342];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[389]-8*DP[1])+DP[1]*(C[387]+4*DP[1])+C[390])+
 DP[1]*(C[388]-C[343]*DP[1])-C[391];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[357];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[394]-16*DP[1])+DP[1]*(C[392]+8*DP[1])+C[395])+
 DP[1]*(C[393]-C[363]*DP[1])-C[396];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[357];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[397])+C[187]*DP[0]-C[399])+DP[1]*(C[358]*
 DP[1]-C[398])+C[400];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[401];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[405]-8*DP[1])+DP[1]*(C[403]+4*DP[1])+C[406])+
 DP[1]*(C[404]-C[402]*DP[1])-C[407];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[401];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[409])+C[187]*DP[0]-C[411])+DP[1]*(C[408]*
 DP[1]-C[410])+C[412];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[401];
D=+C[1];
R=+DP[1]*(DP[0]*(C[413]+4*DP[1])+C[414]-C[402]*DP[1])+C[415]*DP[0]-C[416];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C4(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[39];                                                           
S[0]=V[19]*V[19];
S[1]=V[11]*V[11];
S[2]=V[2]*V[2];
C[416]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[19]+5*V[15])+3*S[0]-S[1]+4*S[2])+
 V[19]*(3*(S[2]-S[1]))));
S[3]=V[15]*V[15];
C[415]=+S[2]*(S[0]-S[3]-S[2]);
C[414]=+S[2]*(V[15]*(12*V[19]+11*V[15])+2*(S[2]-S[1])+S[0])+S[3]*(2*(S[0]-
 S[3])+S[1])-S[0]*S[1];
C[413]=+2*(S[0]-S[3]);
S[4]=V[11]*V[11]*V[11]*V[11];
C[412]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+
 V[19]*(8*S[2]-4*S[1]))+S[2]*(6*S[0]-4*S[1]-3*S[2])+S[4])+V[19]*(S[2]*(S[2]-
 2*S[1])+S[4]));
C[411]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[0]-S[1])+4*S[2]);
C[410]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*S[0]-6*S[1]-2*S[2])+V[19]*(
 4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[0])-2*S[0]*S[1];
C[409]=+4*(S[0]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[408]=+V[15]*(8*V[19]+12*V[15])+4*S[0]-8*S[2];
S[5]=V[15]*V[15]*V[15]*V[15];
C[407]=+V[15]*(V[19]*(S[2]*(3*V[19]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[3])+4*
 S[5])+S[2]*(V[15]*(3*(S[1]-S[3]))));
C[406]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[19])+7*S[2]-4*S[1])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(S[0]-2*S[2])+S[4];
C[405]=+V[15]*(4*V[19]-8*V[15])+4*S[1];
C[404]=+V[15]*(V[15]*(V[15]*(8*V[19]-2*V[15])+2*S[0]+S[1]-5*S[2])+V[19]*(-4*
 S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[0])-S[0]*S[1];
C[403]=+V[15]*(8*V[19]-10*V[15])+4*(S[1]+S[2])+2*S[0];
C[402]=+V[15]*(4*V[19]-2*V[15])+2*S[0]+4*S[2];
S[6]=V[544]*V[544];
S[7]=V[532]*V[532];
S[8]=V[1]*V[1];
C[401]=+S[6]*S[7]*S[8];
C[400]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+8*
 V[18]*S[2]-4*V[19]*S[1])+S[2]*(6*V[19]*V[18]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[18]-2*V[19])+S[1]*(V[19]-3*V[18]))+V[19]*S[4]);
C[399]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[18]-S[1])+4*S[2]);
C[398]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[18]-6*S[1]-2*S[2])+
 S[2]*(12*V[18]-8*V[19])-4*V[19]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[18])-2*
 V[19]*V[18]*S[1];
C[397]=+4*(V[19]*V[18]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[396]=+V[15]*(S[2]*(S[1]*(V[19]+V[18]+6*V[15])+S[2]*(2*(-V[19]-V[18]))+
 V[15]*(6*(V[19]*V[18]-S[3])))+S[1]*(S[1]*(V[19]+V[18])+S[3]*(4*(-V[19]-
 V[18])))+S[5]*(4*(V[19]+V[18])));
C[395]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[18])-S[1])+S[2]*(V[19]+
 V[18]))+S[1]*(4*(V[19]+V[18]))+14*V[15]*S[2])+S[2]*(2*V[19]*V[18]-4*S[2])+
 2*S[4];
C[394]=+V[15]*(4*(V[19]+V[18])-16*V[15])+8*S[1];
C[393]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[18])-4*V[15])+4*V[19]*V[18]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[19]-V[18]))+S[1]*(4*(-V[19]-V[18])))+S[2]*(4*(S[2]-
 S[1])+2*V[19]*V[18])-2*V[19]*V[18]*S[1];
C[392]=+8*(V[15]*(V[19]+V[18])+S[1]+S[2])+4*V[19]*V[18]-20*S[3];
C[391]=+V[15]*(V[18]*(S[2]*(3*V[18]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[3])+4*
 S[5])+S[2]*(V[15]*(3*(S[1]-S[3]))));
S[9]=V[18]*V[18];
C[390]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[18])+7*S[2]-4*S[1])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(S[9]-2*S[2])+S[4];
C[389]=+V[15]*(4*V[18]-8*V[15])+4*S[1];
C[388]=+V[15]*(V[15]*(V[15]*(8*V[18]-2*V[15])+2*S[9]+S[1]-5*S[2])+V[18]*(-4*
 S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[9])-S[9]*S[1];
C[387]=+V[15]*(8*V[18]-10*V[15])+4*(S[1]+S[2])+2*S[9];
C[386]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+8*
 V[17]*S[2]-4*V[19]*S[1])+S[2]*(6*V[19]*V[17]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[17]-2*V[19])+S[1]*(V[19]-3*V[17]))+V[19]*S[4]);
C[385]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[17]-S[1])+4*S[2]);
C[384]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[17]-8*V[19])-4*V[19]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[17])-2*
 V[19]*V[17]*S[1];
C[383]=+4*(V[19]*V[17]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[382]=+V[15]*(S[2]*(S[1]*(V[19]+V[17]+6*V[15])+S[2]*(2*(-V[19]-V[17]))+
 V[15]*(6*(V[19]*V[17]-S[3])))+S[1]*(S[1]*(V[19]+V[17])+S[3]*(4*(-V[19]-
 V[17])))+S[5]*(4*(V[19]+V[17])));
C[381]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[17])-S[1])+S[2]*(V[19]+
 V[17]))+S[1]*(4*(V[19]+V[17]))+14*V[15]*S[2])+S[2]*(2*V[19]*V[17]-4*S[2])+
 2*S[4];
C[380]=+V[15]*(4*(V[19]+V[17])-16*V[15])+8*S[1];
C[379]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[17])-4*V[15])+4*V[19]*V[17]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[19]-V[17]))+S[1]*(4*(-V[19]-V[17])))+S[2]*(4*(S[2]-
 S[1])+2*V[19]*V[17])-2*V[19]*V[17]*S[1];
C[378]=+8*(V[15]*(V[19]+V[17])+S[1]+S[2])+4*V[19]*V[17]-20*S[3];
C[377]=+V[15]*(S[2]*(S[1]*(V[18]+V[17]+6*V[15])+S[2]*(2*(-V[18]-V[17]))+
 V[15]*(6*(V[18]*V[17]-S[3])))+S[1]*(S[1]*(V[18]+V[17])+S[3]*(4*(-V[18]-
 V[17])))+S[5]*(4*(V[18]+V[17])));
C[376]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[18]-V[17])-S[1])+S[2]*(V[18]+
 V[17]))+S[1]*(4*(V[18]+V[17]))+14*V[15]*S[2])+S[2]*(2*V[18]*V[17]-4*S[2])+
 2*S[4];
C[375]=+V[15]*(4*(V[18]+V[17])-16*V[15])+8*S[1];
C[374]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[17])-4*V[15])+4*V[18]*V[17]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[18]-V[17]))+S[1]*(4*(-V[18]-V[17])))+S[2]*(4*(S[2]-
 S[1])+2*V[18]*V[17])-2*V[18]*V[17]*S[1];
C[373]=+8*(V[15]*(V[18]+V[17])+S[1]+S[2])+4*V[18]*V[17]-20*S[3];
C[372]=+V[15]*(V[17]*(S[2]*(3*V[17]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[3])+4*
 S[5])+S[2]*(V[15]*(3*(S[1]-S[3]))));
S[10]=V[17]*V[17];
C[371]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[17])+7*S[2]-4*S[1])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(S[10]-2*S[2])+S[4];
C[370]=+V[15]*(4*V[17]-8*V[15])+4*S[1];
C[369]=+V[15]*(V[15]*(V[15]*(8*V[17]-2*V[15])+2*S[10]+S[1]-5*S[2])+V[17]*(-
 4*S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[10])-S[10]*S[1];
C[368]=+V[15]*(8*V[17]-10*V[15])+4*(S[1]+S[2])+2*S[10];
C[367]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[18])+10*V[15])+6*V[19]*V[18]-
 2*S[1]+8*S[2])+3*(S[2]*(V[19]+V[18])+S[1]*(-V[19]-V[18]))));
C[366]=+S[2]*(2*(V[19]*V[18]-S[3]-S[2]));
C[365]=+S[2]*(V[15]*(12*(V[19]+V[18])+22*V[15])+4*(S[2]-S[1])+2*V[19]*
 V[18])+S[3]*(4*(V[19]*V[18]-S[3])+2*S[1])-2*V[19]*V[18]*S[1];
C[364]=+4*(V[19]*V[18]-S[3]);
C[363]=+4*(V[15]*(V[19]+V[18]-V[15])+V[19]*V[18])+8*S[2];
C[362]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+8*
 V[19]*S[2]-4*V[18]*S[1])+S[2]*(6*V[19]*V[18]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[19]-2*V[18])+S[1]*(V[18]-3*V[19]))+V[18]*S[4]);
C[361]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[18]-S[1])+4*S[2]);
C[360]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[19]*V[18]-6*S[1]-2*S[2])+
 S[2]*(12*V[19]-8*V[18])-4*V[18]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[18])-2*
 V[19]*V[18]*S[1];
C[359]=+4*(V[19]*V[18]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[358]=+V[15]*(4*(V[19]+V[18])+12*V[15])+4*V[19]*V[18]-8*S[2];
C[357]=+V[544]*V[532]*V[523]*V[511]*S[8];
C[356]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+
 V[18]*(8*S[2]-4*S[1]))+S[2]*(6*S[9]-4*S[1]-3*S[2])+S[4])+V[18]*(S[2]*(S[2]-
 2*S[1])+S[4]));
C[355]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[9]-S[1])+4*S[2]);
C[354]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*S[9]-6*S[1]-2*S[2])+V[18]*(
 4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[9])-2*S[9]*S[1];
C[353]=+4*(S[9]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[352]=+V[15]*(8*V[18]+12*V[15])+4*S[9]-8*S[2];
C[351]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+8*
 V[17]*S[2]-4*V[18]*S[1])+S[2]*(6*V[18]*V[17]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[17]-2*V[18])+S[1]*(V[18]-3*V[17]))+V[18]*S[4]);
C[350]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[17]-S[1])+4*S[2]);
C[349]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[18]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[17]-8*V[18])-4*V[18]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[17])-2*
 V[18]*V[17]*S[1];
C[348]=+4*(V[18]*V[17]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[347]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[18]+5*V[15])+3*S[9]-S[1]+4*S[2])+
 V[18]*(3*(S[2]-S[1]))));
C[346]=+S[2]*(S[9]-S[3]-S[2]);
C[345]=+S[2]*(V[15]*(12*V[18]+11*V[15])+2*(S[2]-S[1])+S[9])+S[3]*(2*(S[9]-
 S[3])+S[1])-S[9]*S[1];
C[344]=+2*(S[9]-S[3]);
C[343]=+V[15]*(4*V[18]-2*V[15])+2*S[9]+4*S[2];
S[11]=V[523]*V[523];
S[12]=V[511]*V[511];
C[342]=+S[11]*S[12]*S[8];
C[341]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[17])+10*V[15])+6*V[19]*V[17]-
 2*S[1]+8*S[2])+3*(S[2]*(V[19]+V[17])+S[1]*(-V[19]-V[17]))));
C[340]=+S[2]*(2*(V[19]*V[17]-S[3]-S[2]));
C[339]=+S[2]*(V[15]*(12*(V[19]+V[17])+22*V[15])+4*(S[2]-S[1])+2*V[19]*
 V[17])+S[3]*(4*(V[19]*V[17]-S[3])+2*S[1])-2*V[19]*V[17]*S[1];
C[338]=+4*(V[19]*V[17]-S[3]);
C[337]=+4*(V[15]*(V[19]+V[17]-V[15])+V[19]*V[17])+8*S[2];
C[336]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+8*
 V[19]*S[2]-4*V[17]*S[1])+S[2]*(6*V[19]*V[17]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[19]-2*V[17])+S[1]*(V[17]-3*V[19]))+V[17]*S[4]);
C[335]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[17]-S[1])+4*S[2]);
C[334]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[19]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[19]-8*V[17])-4*V[17]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[17])-2*
 V[19]*V[17]*S[1];
C[333]=+4*(V[19]*V[17]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[332]=+V[15]*(4*(V[19]+V[17])+12*V[15])+4*V[19]*V[17]-8*S[2];
C[331]=+V[544]*V[532]*V[502]*V[490]*S[8];
C[330]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+8*
 V[18]*S[2]-4*V[17]*S[1])+S[2]*(6*V[18]*V[17]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[18]-2*V[17])+S[1]*(V[17]-3*V[18]))+V[17]*S[4]);
C[329]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[17]-S[1])+4*S[2]);
C[328]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[18]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[18]-8*V[17])-4*V[17]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[17])-2*
 V[18]*V[17]*S[1];
C[327]=+4*(V[18]*V[17]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[326]=+V[15]*(4*(V[18]+V[17])+12*V[15])+4*V[18]*V[17]-8*S[2];
C[325]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+
 V[17]*(8*S[2]-4*S[1]))+S[2]*(6*S[10]-4*S[1]-3*S[2])+S[4])+V[17]*(S[2]*(
 S[2]-2*S[1])+S[4]));
C[324]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[10]-S[1])+4*S[2]);
C[323]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*S[10]-6*S[1]-2*S[2])+V[17]*
 (4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[10])-2*S[10]*S[1];
C[322]=+4*(S[10]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[321]=+V[15]*(8*V[17]+12*V[15])+4*S[10]-8*S[2];
C[320]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[17])+10*V[15])+6*V[18]*V[17]-
 2*S[1]+8*S[2])+3*(S[2]*(V[18]+V[17])+S[1]*(-V[18]-V[17]))));
C[319]=+S[2]*(2*(V[18]*V[17]-S[3]-S[2]));
C[318]=+S[2]*(V[15]*(12*(V[18]+V[17])+22*V[15])+4*(S[2]-S[1])+2*V[18]*
 V[17])+S[3]*(4*(V[18]*V[17]-S[3])+2*S[1])-2*V[18]*V[17]*S[1];
C[317]=+4*(V[18]*V[17]-S[3]);
C[316]=+4*(V[15]*(V[18]+V[17]-V[15])+V[18]*V[17])+8*S[2];
C[315]=+V[523]*V[511]*V[502]*V[490]*S[8];
C[314]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[17]+5*V[15])+3*S[10]-S[1]+4*S[2])+
 V[17]*(3*(S[2]-S[1]))));
C[313]=+S[2]*(S[10]-S[3]-S[2]);
C[312]=+S[2]*(V[15]*(12*V[17]+11*V[15])+2*(S[2]-S[1])+S[10])+S[3]*(2*(S[10]-
 S[3])+S[1])-S[10]*S[1];
C[311]=+2*(S[10]-S[3]);
C[310]=+V[15]*(4*V[17]-2*V[15])+2*S[10]+4*S[2];
S[13]=V[502]*V[502];
S[14]=V[490]*V[490];
C[309]=+S[13]*S[14]*S[8];
C[308]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+8*
 V[16]*S[2]-4*V[19]*S[1])+S[2]*(6*V[19]*V[16]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[16]-2*V[19])+S[1]*(V[19]-3*V[16]))+V[19]*S[4]);
C[307]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[16]-S[1])+4*S[2]);
C[306]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[16]-8*V[19])-4*V[19]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[16])-2*
 V[19]*V[16]*S[1];
C[305]=+4*(V[19]*V[16]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[304]=+V[15]*(S[2]*(S[1]*(V[19]+V[16]+6*V[15])+S[2]*(2*(-V[19]-V[16]))+
 V[15]*(6*(V[19]*V[16]-S[3])))+S[1]*(S[1]*(V[19]+V[16])+S[3]*(4*(-V[19]-
 V[16])))+S[5]*(4*(V[19]+V[16])));
C[303]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[16])-S[1])+S[2]*(V[19]+
 V[16]))+S[1]*(4*(V[19]+V[16]))+14*V[15]*S[2])+S[2]*(2*V[19]*V[16]-4*S[2])+
 2*S[4];
C[302]=+V[15]*(4*(V[19]+V[16])-16*V[15])+8*S[1];
C[301]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[16])-4*V[15])+4*V[19]*V[16]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[19]-V[16]))+S[1]*(4*(-V[19]-V[16])))+S[2]*(4*(S[2]-
 S[1])+2*V[19]*V[16])-2*V[19]*V[16]*S[1];
C[300]=+8*(V[15]*(V[19]+V[16])+S[1]+S[2])+4*V[19]*V[16]-20*S[3];
C[299]=+V[15]*(S[2]*(S[1]*(V[18]+V[16]+6*V[15])+S[2]*(2*(-V[18]-V[16]))+
 V[15]*(6*(V[18]*V[16]-S[3])))+S[1]*(S[1]*(V[18]+V[16])+S[3]*(4*(-V[18]-
 V[16])))+S[5]*(4*(V[18]+V[16])));
C[298]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[18]-V[16])-S[1])+S[2]*(V[18]+
 V[16]))+S[1]*(4*(V[18]+V[16]))+14*V[15]*S[2])+S[2]*(2*V[18]*V[16]-4*S[2])+
 2*S[4];
C[297]=+V[15]*(4*(V[18]+V[16])-16*V[15])+8*S[1];
C[296]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[16])-4*V[15])+4*V[18]*V[16]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[18]-V[16]))+S[1]*(4*(-V[18]-V[16])))+S[2]*(4*(S[2]-
 S[1])+2*V[18]*V[16])-2*V[18]*V[16]*S[1];
C[295]=+8*(V[15]*(V[18]+V[16])+S[1]+S[2])+4*V[18]*V[16]-20*S[3];
C[294]=+V[15]*(S[2]*(S[1]*(V[17]+V[16]+6*V[15])+S[2]*(2*(-V[17]-V[16]))+
 V[15]*(6*(V[17]*V[16]-S[3])))+S[1]*(S[1]*(V[17]+V[16])+S[3]*(4*(-V[17]-
 V[16])))+S[5]*(4*(V[17]+V[16])));
C[293]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[17]-V[16])-S[1])+S[2]*(V[17]+
 V[16]))+S[1]*(4*(V[17]+V[16]))+14*V[15]*S[2])+S[2]*(2*V[17]*V[16]-4*S[2])+
 2*S[4];
C[292]=+V[15]*(4*(V[17]+V[16])-16*V[15])+8*S[1];
C[291]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[16])-4*V[15])+4*V[17]*V[16]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[17]-V[16]))+S[1]*(4*(-V[17]-V[16])))+S[2]*(4*(S[2]-
 S[1])+2*V[17]*V[16])-2*V[17]*V[16]*S[1];
C[290]=+8*(V[15]*(V[17]+V[16])+S[1]+S[2])+4*V[17]*V[16]-20*S[3];
C[289]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+8*
 V[16]*S[2]-4*V[18]*S[1])+S[2]*(6*V[18]*V[16]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[16]-2*V[18])+S[1]*(V[18]-3*V[16]))+V[18]*S[4]);
C[288]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[16]-S[1])+4*S[2]);
C[287]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[18]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[16]-8*V[18])-4*V[18]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[16])-2*
 V[18]*V[16]*S[1];
C[286]=+4*(V[18]*V[16]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[285]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+8*
 V[16]*S[2]-4*V[17]*S[1])+S[2]*(6*V[17]*V[16]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[16]-2*V[17])+S[1]*(V[17]-3*V[16]))+V[17]*S[4]);
C[284]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[17]*V[16]-S[1])+4*S[2]);
C[283]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[17]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[16]-8*V[17])-4*V[17]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[17]*V[16])-2*
 V[17]*V[16]*S[1];
C[282]=+4*(V[17]*V[16]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[281]=+V[15]*(V[16]*(S[2]*(3*V[16]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[3])+4*
 S[5])+S[2]*(V[15]*(3*(S[1]-S[3]))));
S[15]=V[16]*V[16];
C[280]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[16])+7*S[2]-4*S[1])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(S[15]-2*S[2])+S[4];
C[279]=+V[15]*(4*V[16]-8*V[15])+4*S[1];
C[278]=+V[15]*(V[15]*(V[15]*(8*V[16]-2*V[15])+2*S[15]+S[1]-5*S[2])+V[16]*(-
 4*S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[15])-S[15]*S[1];
C[277]=+V[15]*(8*V[16]-10*V[15])+4*(S[1]+S[2])+2*S[15];
C[276]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[16])+10*V[15])+6*V[19]*V[16]-
 2*S[1]+8*S[2])+3*(S[2]*(V[19]+V[16])+S[1]*(-V[19]-V[16]))));
C[275]=+S[2]*(2*(V[19]*V[16]-S[3]-S[2]));
C[274]=+S[2]*(V[15]*(12*(V[19]+V[16])+22*V[15])+4*(S[2]-S[1])+2*V[19]*
 V[16])+S[3]*(4*(V[19]*V[16]-S[3])+2*S[1])-2*V[19]*V[16]*S[1];
C[273]=+4*(V[19]*V[16]-S[3]);
C[272]=+4*(V[15]*(V[19]+V[16]-V[15])+V[19]*V[16])+8*S[2];
C[271]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+8*
 V[19]*S[2]-4*V[16]*S[1])+S[2]*(6*V[19]*V[16]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[19]-2*V[16])+S[1]*(V[16]-3*V[19]))+V[16]*S[4]);
C[270]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[16]-S[1])+4*S[2]);
C[269]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[19]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[19]-8*V[16])-4*V[16]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[16])-2*
 V[19]*V[16]*S[1];
C[268]=+4*(V[19]*V[16]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[267]=+V[15]*(4*(V[19]+V[16])+12*V[15])+4*V[19]*V[16]-8*S[2];
C[266]=+V[544]*V[532]*V[481]*V[469]*S[8];
C[265]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+8*
 V[18]*S[2]-4*V[16]*S[1])+S[2]*(6*V[18]*V[16]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[18]-2*V[16])+S[1]*(V[16]-3*V[18]))+V[16]*S[4]);
C[264]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[16]-S[1])+4*S[2]);
C[263]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[18]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[18]-8*V[16])-4*V[16]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[16])-2*
 V[18]*V[16]*S[1];
C[262]=+4*(V[18]*V[16]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[261]=+V[15]*(4*(V[18]+V[16])+12*V[15])+4*V[18]*V[16]-8*S[2];
C[260]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+8*
 V[17]*S[2]-4*V[16]*S[1])+S[2]*(6*V[17]*V[16]-4*S[1]-3*S[2])+S[4])+S[2]*(
 S[2]*(3*V[17]-2*V[16])+S[1]*(V[16]-3*V[17]))+V[16]*S[4]);
C[259]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[17]*V[16]-S[1])+4*S[2]);
C[258]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[17]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[17]-8*V[16])-4*V[16]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[17]*V[16])-2*
 V[17]*V[16]*S[1];
C[257]=+4*(V[17]*V[16]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[256]=+V[15]*(4*(V[17]+V[16])+12*V[15])+4*V[17]*V[16]-8*S[2];
C[255]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[16])+10*V[15])+6*V[18]*V[16]-
 2*S[1]+8*S[2])+3*(S[2]*(V[18]+V[16])+S[1]*(-V[18]-V[16]))));
C[254]=+S[2]*(2*(V[18]*V[16]-S[3]-S[2]));
C[253]=+S[2]*(V[15]*(12*(V[18]+V[16])+22*V[15])+4*(S[2]-S[1])+2*V[18]*
 V[16])+S[3]*(4*(V[18]*V[16]-S[3])+2*S[1])-2*V[18]*V[16]*S[1];
C[252]=+4*(V[18]*V[16]-S[3]);
C[251]=+4*(V[15]*(V[18]+V[16]-V[15])+V[18]*V[16])+8*S[2];
C[250]=+V[523]*V[511]*V[481]*V[469]*S[8];
C[249]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[17]+V[16])+10*V[15])+6*V[17]*V[16]-
 2*S[1]+8*S[2])+3*(S[2]*(V[17]+V[16])+S[1]*(-V[17]-V[16]))));
C[248]=+S[2]*(2*(V[17]*V[16]-S[3]-S[2]));
C[247]=+S[2]*(V[15]*(12*(V[17]+V[16])+22*V[15])+4*(S[2]-S[1])+2*V[17]*
 V[16])+S[3]*(4*(V[17]*V[16]-S[3])+2*S[1])-2*V[17]*V[16]*S[1];
C[246]=+4*(V[17]*V[16]-S[3]);
C[245]=+4*(V[15]*(V[17]+V[16]-V[15])+V[17]*V[16])+8*S[2];
C[244]=+V[502]*V[490]*V[481]*V[469]*S[8];
C[243]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+
 V[16]*(8*S[2]-4*S[1]))+S[2]*(6*S[15]-4*S[1]-3*S[2])+S[4])+V[16]*(S[2]*(
 S[2]-2*S[1])+S[4]));
C[242]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[15]-S[1])+4*S[2]);
C[241]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*S[15]-6*S[1]-2*S[2])+V[16]*
 (4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[15])-2*S[15]*S[1];
C[240]=+4*(S[15]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[239]=+V[15]*(8*V[16]+12*V[15])+4*S[15]-8*S[2];
C[238]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[16]+5*V[15])+3*S[15]-S[1]+4*S[2])+
 V[16]*(3*(S[2]-S[1]))));
C[237]=+S[2]*(S[15]-S[3]-S[2]);
C[236]=+S[2]*(V[15]*(12*V[16]+11*V[15])+2*(S[2]-S[1])+S[15])+S[3]*(2*(S[15]-
 S[3])+S[1])-S[15]*S[1];
C[235]=+2*(S[15]-S[3]);
C[234]=+V[15]*(4*V[16]-2*V[15])+2*S[15]+4*S[2];
S[16]=V[481]*V[481];
S[17]=V[469]*V[469];
C[233]=+S[16]*S[17]*S[8];
C[232]=+V[544]*V[532]*V[468]*V[126]*S[8];
C[231]=+V[523]*V[511]*V[468]*V[126]*S[8];
C[230]=+V[502]*V[490]*V[468]*V[126]*S[8];
C[229]=+V[481]*V[469]*V[468]*V[126]*S[8];
S[18]=V[468]*V[468];
S[19]=V[126]*V[126];
C[228]=+S[18]*S[19]*S[8];
S[20]=V[2]*V[2]*V[2]*V[2];
C[227]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[19]*(
 V[214]-V[213]))+S[1]*(V[213]-V[214]))+V[19]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[213]-V[214])+S[4]*(V[214]-V[213]))+V[19]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[226]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[19]*(V[214]-
 V[213])))+4*(S[2]*(V[214]-V[213])+S[1]*(V[213]-V[214])))+V[19]*(4*(S[2]*(
 V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[2]*(2*(S[2]*(V[213]-V[214])+S[1]*(
 V[214]-V[213])));
C[225]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[19]*(V[214]-V[213]))+S[2]*(V[214]-
 V[213]));
C[224]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[19]*(
 V[214]-V[213]))+S[1]*(V[214]-V[213]))+V[19]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[214]-V[213])+S[4]*(V[213]-V[214]))+V[19]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[223]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[213]-V[214]))+V[19]*(8*(V[214]-
 V[213])))+S[2]*(4*(V[214]-V[213]))+S[1]*(12*(V[214]-V[213])))+V[19]*(4*(
 S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[1]*(2*(S[2]*(V[214]-V[213])+
 S[1]*(V[213]-V[214])));
C[222]=+V[15]*(V[15]*(20*(V[213]-V[214]))+V[19]*(4*(V[214]-V[213])))+S[2]*(
 4*(V[214]-V[213]))+S[1]*(8*(V[214]-V[213]));
C[221]=+V[544]*V[532]*V[466]*V[125]*S[8];
C[220]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[18]*(
 V[214]-V[213]))+S[1]*(V[214]-V[213]))+V[18]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[214]-V[213])+S[4]*(V[213]-V[214]))+V[18]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[219]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[213]-V[214]))+V[18]*(8*(V[214]-
 V[213])))+S[2]*(4*(V[214]-V[213]))+S[1]*(12*(V[214]-V[213])))+V[18]*(4*(
 S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[1]*(2*(S[2]*(V[214]-V[213])+
 S[1]*(V[213]-V[214])));
C[218]=+V[15]*(V[15]*(20*(V[213]-V[214]))+V[18]*(4*(V[214]-V[213])))+S[2]*(
 4*(V[214]-V[213]))+S[1]*(8*(V[214]-V[213]));
C[217]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[17]*(
 V[214]-V[213]))+S[1]*(V[214]-V[213]))+V[17]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[214]-V[213])+S[4]*(V[213]-V[214]))+V[17]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[216]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[213]-V[214]))+V[17]*(8*(V[214]-
 V[213])))+S[2]*(4*(V[214]-V[213]))+S[1]*(12*(V[214]-V[213])))+V[17]*(4*(
 S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[1]*(2*(S[2]*(V[214]-V[213])+
 S[1]*(V[213]-V[214])));
C[215]=+V[15]*(V[15]*(20*(V[213]-V[214]))+V[17]*(4*(V[214]-V[213])))+S[2]*(
 4*(V[214]-V[213]))+S[1]*(8*(V[214]-V[213]));
C[214]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[18]*(
 V[214]-V[213]))+S[1]*(V[213]-V[214]))+V[18]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[213]-V[214])+S[4]*(V[214]-V[213]))+V[18]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[213]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[18]*(V[214]-
 V[213])))+4*(S[2]*(V[214]-V[213])+S[1]*(V[213]-V[214])))+V[18]*(4*(S[2]*(
 V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[2]*(2*(S[2]*(V[213]-V[214])+S[1]*(
 V[214]-V[213])));
C[212]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[18]*(V[214]-V[213]))+S[2]*(V[214]-
 V[213]));
C[211]=+V[523]*V[511]*V[466]*V[125]*S[8];
C[210]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[17]*(
 V[214]-V[213]))+S[1]*(V[213]-V[214]))+V[17]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[213]-V[214])+S[4]*(V[214]-V[213]))+V[17]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[209]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[17]*(V[214]-
 V[213])))+4*(S[2]*(V[214]-V[213])+S[1]*(V[213]-V[214])))+V[17]*(4*(S[2]*(
 V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[2]*(2*(S[2]*(V[213]-V[214])+S[1]*(
 V[214]-V[213])));
C[208]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[17]*(V[214]-V[213]))+S[2]*(V[214]-
 V[213]));
C[207]=+V[502]*V[490]*V[466]*V[125]*S[8];
C[206]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[16]*(
 V[214]-V[213]))+S[1]*(V[214]-V[213]))+V[16]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[214]-V[213])+S[4]*(V[213]-V[214]))+V[16]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[205]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[213]-V[214]))+V[16]*(8*(V[214]-
 V[213])))+S[2]*(4*(V[214]-V[213]))+S[1]*(12*(V[214]-V[213])))+V[16]*(4*(
 S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[1]*(2*(S[2]*(V[214]-V[213])+
 S[1]*(V[213]-V[214])));
C[204]=+V[15]*(V[15]*(20*(V[213]-V[214]))+V[16]*(4*(V[214]-V[213])))+S[2]*(
 4*(V[214]-V[213]))+S[1]*(8*(V[214]-V[213]));
C[203]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[16]*(
 V[214]-V[213]))+S[1]*(V[213]-V[214]))+V[16]*(S[2]*(V[213]-V[214])+S[1]*(
 V[213]-V[214]))))+S[20]*(V[213]-V[214])+S[4]*(V[214]-V[213]))+V[16]*(S[2]*(
 S[2]*(V[214]-V[213])+S[1]*(2*(V[213]-V[214])))+S[4]*(V[214]-V[213])));
C[202]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[16]*(V[214]-
 V[213])))+4*(S[2]*(V[214]-V[213])+S[1]*(V[213]-V[214])))+V[16]*(4*(S[2]*(
 V[213]-V[214])+S[1]*(V[213]-V[214]))))+S[2]*(2*(S[2]*(V[213]-V[214])+S[1]*(
 V[214]-V[213])));
C[201]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[16]*(V[214]-V[213]))+S[2]*(V[214]-
 V[213]));
C[200]=+S[3]*(4*(S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))+S[3]*(8*(V[214]-
 V[213])));
C[199]=+4*(S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))+S[3]*(16*(V[214]-
 V[213]));
C[198]=+V[481]*V[469]*V[466]*V[125]*S[8];
S[21]=V[122]*V[122];
S[22]=V[121]*V[121];
S[23]=V[119]*V[119]*V[119]*V[119];
S[24]=V[118]*V[118];
S[25]=V[7]*V[7];
S[26]=V[3]*V[3];
C[197]=+32*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[2];
C[196]=+V[468]*V[466]*V[126]*V[125]*S[8];
S[27]=V[214]*V[214];
C[195]=+S[3]*(V[213]*(S[2]*(V[213]*(S[2]-4*S[3]-2*S[1])+V[214]*(8*S[3]+4*
 S[1]-2*S[2]))+S[1]*(S[1]*(V[213]-2*V[214])+S[3]*(8*V[214]-4*V[213]))+S[5]*(
 4*V[213]-8*V[214]))+S[27]*(S[2]*(S[2]-4*S[3]-2*S[1])+S[1]*(S[1]-4*S[3])+4*
 S[5]));
C[194]=+V[213]*(S[2]*(V[213]*(S[2]-8*S[3]-2*S[1])+V[214]*(16*S[3]+4*S[1]-2*
 S[2]))+S[1]*(S[1]*(V[213]-2*V[214])+S[3]*(16*V[214]-8*V[213]))+S[5]*(12*
 V[213]-24*V[214]))+S[27]*(S[2]*(S[2]-8*S[3]-2*S[1])+S[1]*(S[1]-8*S[3])+12*
 S[5]);
C[193]=+V[213]*(V[213]*(4*(-S[1]-S[2])+12*S[3])+V[214]*(8*(S[1]+S[2])-24*
 S[3]))+S[27]*(4*(-S[1]-S[2])+12*S[3]);
C[192]=+V[213]*(4*V[213]-8*V[214])+4*S[27];
C[191]=+64*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[2];
S[28]=V[466]*V[466];
S[29]=V[125]*V[125];
C[190]=+S[28]*S[29]*S[8];
C[189]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+14*S[2])+
 V[19]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[19]*(S[2]*(S[1]-2*S[2])+
 S[4]));
C[188]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))+2*S[2]-4*S[1])+V[19]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[187]=+4*(V[15]*(V[19]+V[15])+S[2]);
C[186]=+V[15]*(V[15]*(V[15]*(12*(V[19]+V[15]))+10*S[2]-6*S[1])+V[19]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[185]=+V[15]*(12*V[19]+20*V[15])+4*(-S[1]-S[2]);
C[184]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])-6*S[2])+
 V[19]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[4])+V[19]*(S[2]*(S[1]-2*
 S[2])+S[4]));
C[183]=+V[15]*(V[15]*(8*V[19]*V[15]+4*S[1]-22*S[2])+V[19]*(-4*S[1]-10*
 S[2]))+4*S[20]-2*S[4];
C[182]=+V[15]*(4*V[19]-12*V[15])+8*S[1];
C[181]=+V[15]*(V[15]*(V[15]*(12*V[19]+4*V[15])-2*S[1]-18*S[2])+V[19]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[180]=+V[15]*(12*(V[19]-V[15]))+8*(S[1]+S[2]);
C[179]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])-6*S[2])+
 V[18]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[4])+V[18]*(S[2]*(S[1]-2*
 S[2])+S[4]));
C[178]=+V[15]*(V[15]*(8*V[18]*V[15]+4*S[1]-22*S[2])+V[18]*(-4*S[1]-10*
 S[2]))+4*S[20]-2*S[4];
C[177]=+V[15]*(4*V[18]-12*V[15])+8*S[1];
C[176]=+V[15]*(V[15]*(V[15]*(12*V[18]+4*V[15])-2*S[1]-18*S[2])+V[18]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[175]=+V[15]*(12*(V[18]-V[15]))+8*(S[1]+S[2]);
C[174]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])-6*S[2])+
 V[17]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[4])+V[17]*(S[2]*(S[1]-2*
 S[2])+S[4]));
C[173]=+V[15]*(V[15]*(8*V[17]*V[15]+4*S[1]-22*S[2])+V[17]*(-4*S[1]-10*
 S[2]))+4*S[20]-2*S[4];
C[172]=+V[15]*(4*V[17]-12*V[15])+8*S[1];
C[171]=+V[15]*(V[15]*(V[15]*(12*V[17]+4*V[15])-2*S[1]-18*S[2])+V[17]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[170]=+V[15]*(12*(V[17]-V[15]))+8*(S[1]+S[2]);
C[169]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+14*S[2])+
 V[18]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[18]*(S[2]*(S[1]-2*S[2])+
 S[4]));
C[168]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))+2*S[2]-4*S[1])+V[18]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[167]=+4*(V[15]*(V[18]+V[15])+S[2]);
C[166]=+V[15]*(V[15]*(V[15]*(12*(V[18]+V[15]))+10*S[2]-6*S[1])+V[18]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[165]=+V[15]*(12*V[18]+20*V[15])+4*(-S[1]-S[2]);
C[164]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+14*S[2])+
 V[17]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[17]*(S[2]*(S[1]-2*S[2])+
 S[4]));
C[163]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))+2*S[2]-4*S[1])+V[17]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[162]=+4*(V[15]*(V[17]+V[15])+S[2]);
C[161]=+V[15]*(V[15]*(V[15]*(12*(V[17]+V[15]))+10*S[2]-6*S[1])+V[17]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[160]=+V[15]*(12*V[17]+20*V[15])+4*(-S[1]-S[2]);
C[159]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])-6*S[2])+
 V[16]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[4])+V[16]*(S[2]*(S[1]-2*
 S[2])+S[4]));
C[158]=+V[15]*(V[15]*(8*V[16]*V[15]+4*S[1]-22*S[2])+V[16]*(-4*S[1]-10*
 S[2]))+4*S[20]-2*S[4];
C[157]=+V[15]*(4*V[16]-12*V[15])+8*S[1];
C[156]=+V[15]*(V[15]*(V[15]*(12*V[16]+4*V[15])-2*S[1]-18*S[2])+V[16]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[155]=+V[15]*(12*(V[16]-V[15]))+8*(S[1]+S[2]);
C[154]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+14*S[2])+
 V[16]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[16]*(S[2]*(S[1]-2*S[2])+
 S[4]));
C[153]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))+2*S[2]-4*S[1])+V[16]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[152]=+4*(V[15]*(V[16]+V[15])+S[2]);
C[151]=+V[15]*(V[15]*(V[15]*(12*(V[16]+V[15]))+10*S[2]-6*S[1])+V[16]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[150]=+V[15]*(12*V[16]+20*V[15])+4*(-S[1]-S[2]);
C[149]=+S[2]*(S[3]*(V[213]*(S[2]-2*S[3]-S[1])+V[214]*(2*S[3]+S[1]-S[2])));
C[148]=+S[1]*(V[213]*(4*S[3]-S[1]+S[2])+V[214]*(S[1]-4*S[3]-S[2]))+S[5]*(4*(
 V[214]-V[213]));
C[147]=+V[213]*(4*S[1]-8*S[3]+2*S[2])+V[214]*(8*S[3]-4*S[1]-2*S[2]);
C[146]=+S[3]*(S[1]*(4*(S[2]-S[3])+S[1])+4*S[5]-2*S[20]);
C[145]=+S[2]*(2*S[2]-16*S[3])+4*S[5]-S[4];
C[144]=+4*(S[3]-S[1]);
C[143]=+S[2]*(2*(S[2]-S[1])-12*S[3])+S[3]*(8*S[3]-4*S[1]);
C[142]=+4*(S[1]+S[2]);
C[141]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[1])+
 V[19]*(-S[1]-S[2])))+S[4]+7*S[20])+V[19]*(S[2]*(7*S[2]-2*S[1])+S[4]))+
 S[20]*(3*(S[2]-S[1])));
C[140]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))+4*(S[2]-S[1]))+V[19]*(
 4*(-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[19]*S[20];
C[139]=+V[15]*(4*(V[15]*(V[19]+V[15])+S[2]));
S[30]=V[15]*V[15]*V[15];
C[138]=+S[2]*(V[15]*(V[15]*(4*(V[19]-V[15]))+12*S[2])+V[19]*(2*(S[2]-
 S[1])))+S[30]*(8*S[3]-4*S[1]);
C[137]=+V[15]*(4*(-S[1]-S[2])+16*S[3])+4*V[19]*S[2];
C[136]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[19]-V[15])+S[1]+
 S[2])+V[19]*(-S[1]-S[2]))-S[1]*S[2])+S[20]-S[4])+V[19]*(S[2]*(7*S[2]-2*
 S[1])+S[4]))+S[2]*(S[2]*(S[1]-2*S[2])+S[4]));
C[135]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[19]-16*V[15])+12*(S[1]+S[2]))+V[19]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[4])-2*V[19]*S[20];
C[134]=+V[15]*(V[15]*(4*V[19]-20*V[15])+8*(S[1]+S[2]));
C[133]=+S[2]*(V[15]*(V[15]*(4*V[19]+12*V[15])-4*S[1]-8*S[2])+V[19]*(2*(S[2]-
 S[1])))+S[30]*(4*S[1]-8*S[3]);
C[132]=+V[15]*(4*S[1]-16*S[3]+12*S[2])+4*V[19]*S[2];
C[131]=+S[2]*(4*(V[19]+V[15]));
S[31]=V[1]*V[1]*V[1];
C[130]=+V[544]*V[532]*V[458]*V[234]*S[31];
C[129]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[18]-V[15])+S[1]+
 S[2])+V[18]*(-S[1]-S[2]))-S[1]*S[2])+S[20]-S[4])+V[18]*(S[2]*(7*S[2]-2*
 S[1])+S[4]))+S[2]*(S[2]*(S[1]-2*S[2])+S[4]));
C[128]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[18]-16*V[15])+12*(S[1]+S[2]))+V[18]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[4])-2*V[18]*S[20];
C[127]=+V[15]*(V[15]*(4*V[18]-20*V[15])+8*(S[1]+S[2]));
C[126]=+S[2]*(V[15]*(V[15]*(4*V[18]+12*V[15])-4*S[1]-8*S[2])+V[18]*(2*(S[2]-
 S[1])))+S[30]*(4*S[1]-8*S[3]);
C[125]=+V[15]*(4*S[1]-16*S[3]+12*S[2])+4*V[18]*S[2];
C[124]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[17]-V[15])+S[1]+
 S[2])+V[17]*(-S[1]-S[2]))-S[1]*S[2])+S[20]-S[4])+V[17]*(S[2]*(7*S[2]-2*
 S[1])+S[4]))+S[2]*(S[2]*(S[1]-2*S[2])+S[4]));
C[123]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[17]-16*V[15])+12*(S[1]+S[2]))+V[17]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[4])-2*V[17]*S[20];
C[122]=+V[15]*(V[15]*(4*V[17]-20*V[15])+8*(S[1]+S[2]));
C[121]=+S[2]*(V[15]*(V[15]*(4*V[17]+12*V[15])-4*S[1]-8*S[2])+V[17]*(2*(S[2]-
 S[1])))+S[30]*(4*S[1]-8*S[3]);
C[120]=+V[15]*(4*S[1]-16*S[3]+12*S[2])+4*V[17]*S[2];
C[119]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[1])+
 V[18]*(-S[1]-S[2])))+S[4]+7*S[20])+V[18]*(S[2]*(7*S[2]-2*S[1])+S[4]))+
 S[20]*(3*(S[2]-S[1])));
C[118]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))+4*(S[2]-S[1]))+V[18]*(
 4*(-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[18]*S[20];
C[117]=+V[15]*(4*(V[15]*(V[18]+V[15])+S[2]));
C[116]=+S[2]*(V[15]*(V[15]*(4*(V[18]-V[15]))+12*S[2])+V[18]*(2*(S[2]-
 S[1])))+S[30]*(8*S[3]-4*S[1]);
C[115]=+V[15]*(4*(-S[1]-S[2])+16*S[3])+4*V[18]*S[2];
C[114]=+S[2]*(4*(V[18]+V[15]));
C[113]=+V[523]*V[511]*V[458]*V[234]*S[31];
C[112]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[1])+
 V[17]*(-S[1]-S[2])))+S[4]+7*S[20])+V[17]*(S[2]*(7*S[2]-2*S[1])+S[4]))+
 S[20]*(3*(S[2]-S[1])));
C[111]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))+4*(S[2]-S[1]))+V[17]*(
 4*(-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[17]*S[20];
C[110]=+V[15]*(4*(V[15]*(V[17]+V[15])+S[2]));
C[109]=+S[2]*(V[15]*(V[15]*(4*(V[17]-V[15]))+12*S[2])+V[17]*(2*(S[2]-
 S[1])))+S[30]*(8*S[3]-4*S[1]);
C[108]=+V[15]*(4*(-S[1]-S[2])+16*S[3])+4*V[17]*S[2];
C[107]=+S[2]*(4*(V[17]+V[15]));
C[106]=+V[502]*V[490]*V[458]*V[234]*S[31];
C[105]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[16]-V[15])+S[1]+
 S[2])+V[16]*(-S[1]-S[2]))-S[1]*S[2])+S[20]-S[4])+V[16]*(S[2]*(7*S[2]-2*
 S[1])+S[4]))+S[2]*(S[2]*(S[1]-2*S[2])+S[4]));
C[104]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[16]-16*V[15])+12*(S[1]+S[2]))+V[16]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[4])-2*V[16]*S[20];
C[103]=+V[15]*(V[15]*(4*V[16]-20*V[15])+8*(S[1]+S[2]));
C[102]=+S[2]*(V[15]*(V[15]*(4*V[16]+12*V[15])-4*S[1]-8*S[2])+V[16]*(2*(S[2]-
 S[1])))+S[30]*(4*S[1]-8*S[3]);
C[101]=+V[15]*(4*S[1]-16*S[3]+12*S[2])+4*V[16]*S[2];
C[100]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[1])+
 V[16]*(-S[1]-S[2])))+S[4]+7*S[20])+V[16]*(S[2]*(7*S[2]-2*S[1])+S[4]))+
 S[20]*(3*(S[2]-S[1])));
C[99]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))+4*(S[2]-S[1]))+V[16]*(4*
 (-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[16]*S[20];
C[98]=+V[15]*(4*(V[15]*(V[16]+V[15])+S[2]));
C[97]=+S[2]*(V[15]*(V[15]*(4*(V[16]-V[15]))+12*S[2])+V[16]*(2*(S[2]-S[1])))+
 S[30]*(8*S[3]-4*S[1]);
C[96]=+V[15]*(4*(-S[1]-S[2])+16*S[3])+4*V[16]*S[2];
C[95]=+8*V[15];
C[94]=+S[2]*(4*(V[16]+V[15]));
C[93]=+V[481]*V[469]*V[458]*V[234]*S[31];
C[92]=+V[468]*V[458]*V[234]*V[126]*V[15]*S[31];
C[91]=+S[2]*(S[2]*(V[213]*(S[2]-6*S[3]-2*S[1])+V[214]*(6*S[3]+2*S[1]-S[2]))+
 S[4]*(V[213]-V[214])+S[5]*(12*(V[213]-V[214])))+S[3]*(S[1]*(S[1]*(2*(
 V[214]-V[213]))+S[3]*(8*(V[213]-V[214])))+S[5]*(8*(V[214]-V[213])));
C[90]=+S[3]*(24*(S[2]*(V[213]-V[214])+S[3]*(V[214]-V[213]))+S[1]*(16*(
 V[213]-V[214])))+S[20]*(6*(V[214]-V[213]))+S[4]*(2*(V[214]-V[213]));
C[89]=+V[213]*(8*S[1]-24*S[3]+12*S[2])+V[214]*(24*S[3]-8*S[1]-12*S[2]);
C[88]=+8*(V[214]-V[213]);
S[32]=V[118]*V[118]*V[118]*V[118];
C[87]=+16*V[122]*V[121]*S[23]*S[32]*V[7]*S[20];
C[86]=+V[466]*V[458]*V[234]*V[125]*V[15]*S[31];
C[85]=+S[2]*(S[2]*(2*S[2]-8*S[3]-S[1])+S[1]*(6*S[3]-S[1]));
C[84]=+S[2]*(2*S[1]-8*S[3]+10*S[2])+S[1]*(2*S[1]-8*S[3])+8*S[5];
C[83]=+8*(-S[1]-S[2])+16*S[3];
C[82]=+S[2]*(6*(S[1]+S[2])-16*S[3])+S[3]*(8*S[3]-4*S[1]);
C[81]=+16*(S[3]-S[2])-4*S[1];
C[80]=+S[3]*(S[2]*(S[2]*(5*S[3]+2*S[1]-4*S[2])+S[1]*(2*S[3]-S[1])-8*S[5])+
 S[3]*(S[1]*(S[1]-4*S[3])+4*S[5]));
S[33]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[79]=+S[3]*(S[2]*(2*S[1]-16*S[3]+5*S[2])+S[1]*(S[1]-8*S[3])+12*S[5])+S[33];
C[78]=+S[3]*(12*S[3]-4*S[1]-8*S[2]);
C[77]=+4*S[3];
C[76]=+S[20]*(2*S[3]-S[1]+S[2]);
C[75]=+2*S[20];
S[34]=V[118]*V[118]*V[118]*V[118]*V[118]*V[118];
C[74]=+4*S[23]*S[34]*S[33];
S[35]=V[458]*V[458];
S[36]=V[234]*V[234];
S[37]=V[1]*V[1]*V[1]*V[1];
C[73]=+S[35]*S[36]*S[26]*S[37];
C[72]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[19]+18*V[15])+11*S[2]-5*S[1])+V[19]*(
 3*(S[2]-S[1]))));
C[71]=+S[2]*(2*(V[15]*(V[19]-V[15])-S[2]));
C[70]=+V[15]*(V[15]*(V[15]*(4*(V[19]-V[15]))+2*S[1]+34*S[2])+V[19]*(14*S[2]-
 2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[69]=+V[15]*(4*(V[19]-V[15]));
C[68]=+8*(V[19]*V[15]+S[2]);
C[67]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[19]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[3])+8*S[5])+S[2]*(V[19]*(3*(S[2]-S[1]))));
C[66]=+S[2]*(V[15]*(2*V[19]+6*V[15])+4*S[2]-2*S[1])+S[3]*(8*S[1]-16*S[3]);
C[65]=+V[15]*(V[15]*(V[15]*(4*V[19]+20*V[15])+10*(-S[1]-S[2]))+V[19]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[64]=+4*(V[19]*V[15]-S[1]-S[2])+28*S[3];
C[63]=+V[15]*(8*V[19]+16*V[15])-8*S[2];
C[62]=+V[544]*V[532]*V[464]*V[458]*S[8];
C[61]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[18]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[3])+8*S[5])+S[2]*(V[18]*(3*(S[2]-S[1]))));
C[60]=+S[2]*(V[15]*(2*V[18]+6*V[15])+4*S[2]-2*S[1])+S[3]*(8*S[1]-16*S[3]);
C[59]=+V[15]*(V[15]*(V[15]*(4*V[18]+20*V[15])+10*(-S[1]-S[2]))+V[18]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[58]=+4*(V[18]*V[15]-S[1]-S[2])+28*S[3];
C[57]=+V[15]*(8*V[18]+16*V[15])-8*S[2];
C[56]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[17]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[3])+8*S[5])+S[2]*(V[17]*(3*(S[2]-S[1]))));
C[55]=+S[2]*(V[15]*(2*V[17]+6*V[15])+4*S[2]-2*S[1])+S[3]*(8*S[1]-16*S[3]);
C[54]=+V[15]*(V[15]*(V[15]*(4*V[17]+20*V[15])+10*(-S[1]-S[2]))+V[17]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[53]=+4*(V[17]*V[15]-S[1]-S[2])+28*S[3];
C[52]=+V[15]*(8*V[17]+16*V[15])-8*S[2];
C[51]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[18]+18*V[15])+11*S[2]-5*S[1])+V[18]*(
 3*(S[2]-S[1]))));
C[50]=+S[2]*(2*(V[15]*(V[18]-V[15])-S[2]));
C[49]=+V[15]*(V[15]*(V[15]*(4*(V[18]-V[15]))+2*S[1]+34*S[2])+V[18]*(14*S[2]-
 2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[48]=+V[15]*(4*(V[18]-V[15]));
C[47]=+8*(V[18]*V[15]+S[2]);
C[46]=+V[523]*V[511]*V[464]*V[458]*S[8];
C[45]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[17]+18*V[15])+11*S[2]-5*S[1])+V[17]*(
 3*(S[2]-S[1]))));
C[44]=+S[2]*(2*(V[15]*(V[17]-V[15])-S[2]));
C[43]=+V[15]*(V[15]*(V[15]*(4*(V[17]-V[15]))+2*S[1]+34*S[2])+V[17]*(14*S[2]-
 2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[42]=+V[15]*(4*(V[17]-V[15]));
C[41]=+8*(V[17]*V[15]+S[2]);
C[40]=+V[502]*V[490]*V[464]*V[458]*S[8];
C[39]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[16]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[3])+8*S[5])+S[2]*(V[16]*(3*(S[2]-S[1]))));
C[38]=+S[2]*(V[15]*(2*V[16]+6*V[15])+4*S[2]-2*S[1])+S[3]*(8*S[1]-16*S[3]);
C[37]=+V[15]*(V[15]*(V[15]*(4*V[16]+20*V[15])+10*(-S[1]-S[2]))+V[16]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[36]=+4*(V[16]*V[15]-S[1]-S[2])+28*S[3];
C[35]=+V[15]*(8*V[16]+16*V[15])-8*S[2];
C[34]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[16]+18*V[15])+11*S[2]-5*S[1])+V[16]*(
 3*(S[2]-S[1]))));
C[33]=+S[2]*(2*(V[15]*(V[16]-V[15])-S[2]));
C[32]=+V[15]*(V[15]*(V[15]*(4*(V[16]-V[15]))+2*S[1]+34*S[2])+V[16]*(14*S[2]-
 2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[31]=+V[15]*(4*(V[16]-V[15]));
C[30]=+8*(V[16]*V[15]+S[2]);
C[29]=+V[481]*V[469]*V[464]*V[458]*S[8];
C[28]=+V[468]*V[464]*V[458]*V[126]*S[8];
C[27]=+S[3]*(S[1]*(V[213]*(4*S[3]-S[1]+S[2])+V[214]*(S[1]-4*S[3]-S[2]))+
 S[3]*(S[2]*(2*(V[213]-V[214]))+S[3]*(4*(V[214]-V[213]))));
C[26]=+S[2]*(S[2]*(V[213]-V[214])+S[1]*(V[214]-V[213]))+S[3]*(S[1]*(4*(
 V[213]-V[214]))+S[3]*(8*(V[214]-V[213])));
C[25]=+S[2]*(2*(V[214]-V[213]))+S[3]*(4*(V[214]-V[213]));
C[24]=+S[3]*(2*(S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))+S[3]*(4*(V[214]-
 V[213])));
C[23]=+2*(S[2]*(V[213]-V[214])+S[1]*(V[213]-V[214]))+S[3]*(8*(V[214]-
 V[213]));
C[22]=+4*(V[214]-V[213]);
C[21]=+V[466]*V[464]*V[458]*V[125]*S[8];
C[20]=+S[3]*(S[2]*(10*S[3]-3*S[1]-S[2])+S[1]*(S[1]-4*S[3])+4*S[5]);
C[19]=+S[2]*(S[1]-4*S[3]-2*S[2])+S[3]*(8*S[3]-4*S[1]);
C[18]=+4*S[3]+2*S[2];
C[17]=+S[2]*(2*(S[3]+S[1]-S[2]))+S[3]*(12*S[3]-6*S[1]);
C[16]=+2*(-S[1]-S[2])+16*S[3];
C[15]=+12*S[3]-4*S[2];
C[14]=+8*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[2];
C[13]=+S[3]*(S[2]*(14*S[2]-4*S[3]-2*S[1])+S[1]*(2*S[1]-8*S[3])+8*S[5])+
 S[20]*(3*(S[2]-S[1]));
C[12]=+S[2]*(2*S[1]-4*S[2])+S[3]*(16*S[3]-8*S[1]);
C[11]=+8*S[3]+4*S[2];
C[10]=+S[2]*(14*S[2]-2*S[1])+S[3]*(8*S[3]-4*S[1]);
C[9]=+16*S[3]-4*S[1];
C[8]=+8*S[2];
C[7]=+8*V[122]*V[121]*S[23]*S[32]*V[7]*S[20];
C[6]=+V[464]*S[35]*V[234]*V[15]*S[31];
C[5]=+S[2]*(S[3]*(16*S[3]-4*S[1]+7*S[2]));
C[4]=+S[20];
C[3]=+S[2]*(2*(S[2]-S[1])+24*S[3]);
C[2]=+4*(S[3]+S[2]);
C[1]=+16*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[2];
S[38]=V[464]*V[464];
C[0]=+S[38]*S[35]*S[8];
}
