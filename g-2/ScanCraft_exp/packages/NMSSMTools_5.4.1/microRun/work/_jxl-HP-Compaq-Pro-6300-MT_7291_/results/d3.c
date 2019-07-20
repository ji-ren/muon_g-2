/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C3(REAL *);
extern DNN S3_omg_p25p25_u;
REAL S3_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[14],width[14];
char * Qtxt[14];
REAL Q0[14]; COMPLEX Q1[14]; REAL Q2[14];
 if(momenta)
 {width[13]=0.; mass[13]=V[15];  Qtxt[13]="\1\3";
width[3]=V[554]; mass[3]=V[9];  Qtxt[3]="\1\2";
width[2]=V[555]; mass[2]=V[10];  Qtxt[2]="\1\2";
width[1]=V[556]; mass[1]=V[11];  Qtxt[1]="\1\2";
width[12]=0.; mass[12]=V[15];  Qtxt[12]="\1\4";
width[11]=0.; mass[11]=V[16];  Qtxt[11]="\1\3";
width[10]=0.; mass[10]=V[16];  Qtxt[10]="\1\4";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\3";
width[8]=0.; mass[8]=V[18];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[17];  Qtxt[7]="\1\4";
width[6]=0.; mass[6]=V[18];  Qtxt[6]="\1\4";
width[5]=0.; mass[5]=V[19];  Qtxt[5]="\1\4";
width[4]=0.; mass[4]=V[19];  Qtxt[4]="\1\3";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[446];                                                   
if(!momenta){ C3(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[1]*(DP[0]*(C[3]+4*DP[1])+C[4]-C[2]*DP[1])+C[6]+C[5]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[8])+C[11]+C[10]*DP[0])+DP[1]*(C[9]-C[7]*
 DP[1])+C[12];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[15])+C[17]+C[10]*DP[0])+DP[1]*(C[16]-
 C[14]*DP[1])+C[18];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[19];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[21])+C[23]+C[10]*DP[0])+DP[1]*(C[22]-
 C[20]*DP[1])+C[24];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[1]*(DP[0]*(C[25]+8*DP[1])+C[26]-C[14]*DP[1])+C[28]+C[27]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[19];
D=+C[1];
R=+DP[1]*(DP[0]*(C[29]+8*DP[1])+C[30]-C[20]*DP[1])+C[32]+C[31]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[33];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[35])+C[37]+C[10]*DP[0])+DP[1]*(C[36]-
 C[34]*DP[1])+C[38];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[33];
D=+C[1];
R=+DP[1]*(DP[0]*(C[39]+8*DP[1])+C[40]-C[34]*DP[1])+C[42]+C[41]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[45])+C[47]+C[10]*DP[0])+DP[1]*(C[44]*
 DP[1]-C[46])+C[48];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[49];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*DP[1]-C[54])+C[52]*DP[1]-C[55])+C[53]*DP[1]-C[56];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[57];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*DP[1]-C[61])+C[59]*DP[1]-C[62])+C[60]*DP[1]-C[63];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[64];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*DP[1]-C[68])+C[66]*DP[1]-C[69])+C[67]*DP[1]-C[70];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[43];
D=+C[1];
R=+DP[1]*(DP[0]*(C[71]+8*DP[1])+C[72]+C[44]*DP[1])+C[74]+C[73]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(C[77]+4*DP[0]-8*DP[1])+DP[1]*(C[75]+4*DP[1])+C[78])+DP[1]*(
 C[76]-C[2]*DP[1])+C[79];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[0]*(DP[0]*(C[82]+8*DP[0]-16*DP[1])+DP[1]*(C[80]+8*DP[1])+C[83])+DP[1]*
 (C[81]-C[14]*DP[1])+C[84];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[19];
D=+C[1];
R=+DP[0]*(DP[0]*(C[87]+8*DP[0]-16*DP[1])+DP[1]*(C[85]+8*DP[1])+C[88])+DP[1]*
 (C[86]-C[20]*DP[1])+C[89];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[90])+C[93]+C[92]*DP[0])+DP[1]*(C[91]-
 C[14]*DP[1])+C[94];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[19];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[95])+C[98]+C[97]*DP[0])+DP[1]*(C[96]-
 C[20]*DP[1])+C[99];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[33];
D=+C[1];
R=+DP[0]*(DP[0]*(C[102]+8*DP[0]-16*DP[1])+DP[1]*(C[100]+8*DP[1])+C[103])+
 DP[1]*(C[101]-C[34]*DP[1])+C[104];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[33];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[105])+C[108]+C[107]*DP[0])+DP[1]*(C[106]-
 C[34]*DP[1])+C[109];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[43];
D=+C[1];
R=+DP[0]*(DP[0]*(C[112]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[110])+C[113])+
 DP[1]*(C[44]*DP[1]-C[111])+C[114];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[49];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*(DP[1]-DP[0])-C[115])+C[52]*DP[1]-C[116])+C[53]*
 DP[1]-C[117];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[57];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*(DP[1]-DP[0])-C[118])+C[59]*DP[1]-C[119])+C[60]*
 DP[1]-C[120];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[64];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*(DP[1]-DP[0])-C[121])+C[66]*DP[1]-C[122])+C[67]*
 DP[1]-C[123];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[124])+C[127]+C[126]*DP[0])+DP[1]*(C[125]+
 C[44]*DP[1])+C[128];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[129];
D=+C[1];
R=+DP[0]*(DP[0]*(C[133]+4*DP[0]-8*DP[1])+DP[1]*(C[131]+4*DP[1])+C[134])+
 DP[1]*(C[132]-C[130]*DP[1])+C[135];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[136];
D=+C[1];
R=+DP[0]*(DP[0]*(C[140]+8*DP[0]-16*DP[1])+DP[1]*(C[138]+8*DP[1])+C[141])+
 DP[1]*(C[139]-C[137]*DP[1])+C[142];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[129];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[144])+C[146]+C[92]*DP[0])+DP[1]*(C[145]-
 C[143]*DP[1])+C[147];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[136];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[148])+C[150]+C[97]*DP[0])+DP[1]*(C[149]-
 C[137]*DP[1])+C[151];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[152];
D=+C[1];
R=+DP[0]*(DP[0]*(C[156]+8*DP[0]-16*DP[1])+DP[1]*(C[154]+8*DP[1])+C[157])+
 DP[1]*(C[155]-C[153]*DP[1])+C[158];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[152];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[159])+C[161]+C[107]*DP[0])+DP[1]*(C[160]-
 C[153]*DP[1])+C[162];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[163];
D=+C[1];
R=+DP[0]*(DP[0]*(C[166]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[164])+C[167])+
 DP[1]*(C[44]*DP[1]-C[165])+C[168];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[169];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*(DP[1]-DP[0])-C[172])+C[170]*DP[1]-C[173])+C[171]*
 DP[1]-C[174];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[175];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*(DP[1]-DP[0])-C[178])+C[176]*DP[1]-C[179])+C[177]*
 DP[1]-C[180];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[181];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*(DP[1]-DP[0])-C[184])+C[182]*DP[1]-C[185])+C[183]*
 DP[1]-C[186];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[163];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[187])+C[189]+C[126]*DP[0])+DP[1]*(C[188]+
 C[44]*DP[1])+C[190];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[191];
D=+C[1];
R=+DP[0]*(DP[0]*(C[195]+4*DP[0]-8*DP[1])+DP[1]*(C[193]+4*DP[1])+C[196])+
 DP[1]*(C[194]-C[192]*DP[1])+C[197];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[136];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[198])+C[200]+C[92]*DP[0])+DP[1]*(C[199]-
 C[137]*DP[1])+C[201];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[191];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[203])+C[205]+C[97]*DP[0])+DP[1]*(C[204]-
 C[202]*DP[1])+C[206];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[207];
D=+C[1];
R=+DP[0]*(DP[0]*(C[211]+8*DP[0]-16*DP[1])+DP[1]*(C[209]+8*DP[1])+C[212])+
 DP[1]*(C[210]-C[208]*DP[1])+C[213];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[207];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[214])+C[216]+C[107]*DP[0])+DP[1]*(C[215]-
 C[208]*DP[1])+C[217];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[218];
D=+C[1];
R=+DP[0]*(DP[0]*(C[221]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[219])+C[222])+
 DP[1]*(C[44]*DP[1]-C[220])+C[223];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[224];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*(DP[1]-DP[0])-C[227])+C[225]*DP[1]-C[228])+C[226]*
 DP[1]-C[229];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[230];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*(DP[1]-DP[0])-C[233])+C[231]*DP[1]-C[234])+C[232]*
 DP[1]-C[235];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[236];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*(DP[1]-DP[0])-C[239])+C[237]*DP[1]-C[240])+C[238]*
 DP[1]-C[241];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[218];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[242])+C[244]+C[126]*DP[0])+DP[1]*(C[243]+
 C[44]*DP[1])+C[245];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[129];
D=+C[1];
R=+DP[1]*(DP[0]*(C[246]+4*DP[1])+C[247]-C[130]*DP[1])+C[249]+C[248]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[136];
D=+C[1];
R=+DP[1]*(DP[0]*(C[250]+8*DP[1])+C[251]-C[137]*DP[1])+C[253]+C[252]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[152];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[254])+C[256]+C[92]*DP[0])+DP[1]*(C[255]-
 C[153]*DP[1])+C[257];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[152];
D=+C[1];
R=+DP[1]*(DP[0]*(C[258]+8*DP[1])+C[259]-C[153]*DP[1])+C[261]+C[260]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[163];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[262])+C[264]+C[92]*DP[0])+DP[1]*(C[44]*
 DP[1]-C[263])+C[265];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[169];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*DP[1]-C[266])+C[170]*DP[1]-C[267])+C[171]*DP[1]-
 C[268];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[175];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*DP[1]-C[269])+C[176]*DP[1]-C[270])+C[177]*DP[1]-
 C[271];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[181];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*DP[1]-C[272])+C[182]*DP[1]-C[273])+C[183]*DP[1]-
 C[274];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[163];
D=+C[1];
R=+DP[1]*(DP[0]*(C[275]+8*DP[1])+C[276]+C[44]*DP[1])+C[278]+C[277]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[191];
D=+C[1];
R=+DP[1]*(DP[0]*(C[279]+4*DP[1])+C[280]-C[192]*DP[1])+C[282]+C[281]*DP[0];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[207];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[283])+C[285]+C[97]*DP[0])+DP[1]*(C[284]-
 C[208]*DP[1])+C[286];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[207];
D=+C[1];
R=+DP[1]*(DP[0]*(C[287]+8*DP[1])+C[288]-C[208]*DP[1])+C[290]+C[289]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[218];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[291])+C[293]+C[97]*DP[0])+DP[1]*(C[44]*
 DP[1]-C[292])+C[294];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[224];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*DP[1]-C[295])+C[225]*DP[1]-C[296])+C[226]*DP[1]-
 C[297];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[230];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*DP[1]-C[298])+C[231]*DP[1]-C[299])+C[232]*DP[1]-
 C[300];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[236];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*DP[1]-C[301])+C[237]*DP[1]-C[302])+C[238]*DP[1]-
 C[303];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[218];
D=+C[1];
R=+DP[1]*(DP[0]*(C[304]+8*DP[1])+C[305]+C[44]*DP[1])+C[307]+C[306]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[308];
D=+C[1];
R=+DP[0]*(DP[0]*(C[312]+4*DP[0]-8*DP[1])+DP[1]*(C[310]+4*DP[1])+C[313])+
 DP[1]*(C[311]-C[309]*DP[1])+C[314];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[308];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[316])+C[318]+C[107]*DP[0])+DP[1]*(C[317]-
 C[315]*DP[1])+C[319];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[320];
D=+C[1];
R=+DP[0]*(DP[0]*(C[323]+8*DP[0]-16*DP[1])+DP[1]*(8*DP[1]-C[321])+C[324])+
 DP[1]*(C[44]*DP[1]-C[322])+C[325];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[326];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*(DP[1]-DP[0])-C[329])+C[327]*DP[1]-C[330])+C[328]*
 DP[1]-C[331];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[332];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*(DP[1]-DP[0])-C[335])+C[333]*DP[1]-C[336])+C[334]*
 DP[1]-C[337];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[338];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*(DP[1]-DP[0])-C[341])+C[339]*DP[1]-C[342])+C[340]*
 DP[1]-C[343];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[320];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])+C[344])+C[346]+C[126]*DP[0])+DP[1]*(C[345]+
 C[44]*DP[1])+C[347];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[308];
D=+C[1];
R=+DP[1]*(DP[0]*(C[348]+4*DP[1])+C[349]-C[309]*DP[1])+C[351]+C[350]*DP[0];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[320];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[352])+C[354]+C[107]*DP[0])+DP[1]*(C[44]*
 DP[1]-C[353])+C[355];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[326];
D=+C[50];
R=+DP[0]*(DP[0]*(C[51]*DP[1]-C[356])+C[327]*DP[1]-C[357])+C[328]*DP[1]-
 C[358];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[332];
D=+C[50];
R=+DP[0]*(DP[0]*(C[58]*DP[1]-C[359])+C[333]*DP[1]-C[360])+C[334]*DP[1]-
 C[361];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[338];
D=+C[50];
R=+DP[0]*(DP[0]*(C[65]*DP[1]-C[362])+C[339]*DP[1]-C[363])+C[340]*DP[1]-
 C[364];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[320];
D=+C[1];
R=+DP[1]*(DP[0]*(C[365]+8*DP[1])+C[366]+C[44]*DP[1])+C[368]+C[367]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[369];
D=+C[1];
R=+DP[0]*(DP[0]*(C[373]+4*DP[0]-8*DP[1])+DP[1]*(4*DP[1]-C[371])+C[374])+
 DP[1]*(C[370]*DP[1]-C[372])+C[375];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[376];
D=+C[1];
R=+DP[0]*(DP[0]*(C[377]*(DP[1]-DP[0])-C[380])+C[378]*DP[1]-C[381])+C[379]*
 DP[1]-C[382];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[383];
D=+C[1];
R=+DP[0]*(DP[0]*(C[384]*(DP[1]-DP[0])-C[387])+C[385]*DP[1]-C[388])+C[386]*
 DP[1]-C[389];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[390];
D=+C[1];
R=+DP[0]*(DP[0]*(C[391]*(DP[1]-DP[0])-C[394])+C[392]*DP[1]-C[395])+C[393]*
 DP[1]-C[396];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[369];
D=+C[397];
R=+DP[0]*(DP[1]*(4*(DP[1]-DP[0])-C[398])+C[401]+C[400]*DP[0])+DP[1]*(C[370]*
 DP[1]-C[399])+C[402];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[403];
D=+C[404];
R=+DP[0]*(DP[0]*(C[406]+C[405]*DP[0])-C[407])-C[408];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[409];
D=+C[50];
R=+DP[0]*(DP[0]*(C[411]+C[410]*DP[0])-C[412])-C[413];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[414];
D=+C[50];
R=+DP[0]*(DP[0]*(C[416]+C[415]*DP[0])-C[417])-C[418];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[376];
D=+C[1];
R=+DP[0]*(DP[0]*(C[377]*DP[1]-C[419])+C[378]*DP[1]-C[420])+C[379]*DP[1]-
 C[421];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[422];
D=+C[404];
R=+DP[0]*(DP[0]*(C[424]+C[423]*DP[0])-C[425])-C[426];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[427];
D=+C[50];
R=+DP[0]*(DP[0]*(C[429]+C[428]*DP[0])-C[430])-C[431];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[383];
D=+C[1];
R=+DP[0]*(DP[0]*(C[384]*DP[1]-C[432])+C[385]*DP[1]-C[433])+C[386]*DP[1]-
 C[434];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[435];
D=+C[404];
R=+DP[0]*(DP[0]*(C[437]+C[436]*DP[0])-C[438])-C[439];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[390];
D=+C[1];
R=+DP[0]*(DP[0]*(C[391]*DP[1]-C[440])+C[392]*DP[1]-C[441])+C[393]*DP[1]-
 C[442];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[369];
D=+C[1];
R=+DP[1]*(DP[1]*(C[370]+4*DP[0])-C[443])+C[445]-C[444]*DP[0];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C3(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[34];                                                           
S[0]=V[12]*V[12];
S[1]=V[2]*V[2];
S[2]=V[15]*V[15];
C[445]=+S[1]*(S[2]*(4*S[0]-S[1]));
S[3]=V[2]*V[2]*V[2]*V[2];
C[444]=+S[3];
C[443]=+S[1]*(2*(S[0]-S[1]));
C[442]=+S[2]*(S[0]*(V[209]*(4*S[2]-S[0]+S[1])+V[210]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[209]-V[210]))+S[2]*(4*(V[210]-V[209]))));
C[441]=+S[1]*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209]))+S[2]*(S[0]*(4*(
 V[209]-V[210]))+S[2]*(8*(V[210]-V[209])));
C[440]=+S[1]*(2*(V[210]-V[209]))+S[2]*(4*(V[210]-V[209]));
S[4]=V[15]*V[15]*V[15]*V[15];
S[5]=V[210]*V[210];
C[439]=+S[2]*(V[209]*(S[1]*(V[209]*(S[1]-4*S[2]-2*S[0])+V[210]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[209]-2*V[210])+S[2]*(8*V[210]-4*V[209]))+S[4]*(
 4*V[209]-8*V[210]))+S[5]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[4]));
S[6]=V[12]*V[12]*V[12]*V[12];
C[438]=+V[209]*(S[1]*(S[1]*(2*V[210]-V[209])+S[0]*(2*V[209]-4*V[210]))+S[6]*
 (2*V[210]-V[209])+S[4]*(4*V[209]-8*V[210]))+S[5]*(S[1]*(2*S[0]-S[1])+4*
 S[4]-S[6]);
C[437]=+V[209]*(V[209]*(4*(S[2]-S[0]-S[1]))+V[210]*(8*(S[0]-S[2]+S[1])))+
 S[5]*(4*(S[2]-S[0]-S[1]));
C[436]=+V[209]*(4*V[209]-8*V[210])+4*S[5];
S[7]=V[460]*V[460];
S[8]=V[125]*V[125];
S[9]=V[1]*V[1];
C[435]=+S[7]*S[8]*S[9];
C[434]=+S[2]*(S[0]*(V[211]*(4*S[2]-S[0]+S[1])+V[212]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[211]-V[212]))+S[2]*(4*(V[212]-V[211]))));
C[433]=+S[1]*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211]))+S[2]*(S[0]*(4*(
 V[211]-V[212]))+S[2]*(8*(V[212]-V[211])));
C[432]=+S[1]*(2*(V[212]-V[211]))+S[2]*(4*(V[212]-V[211]));
C[431]=+S[2]*(S[1]*(V[209]*(V[211]*(S[1]-4*S[2]-2*S[0])+V[212]*(4*S[2]+2*
 S[0]-S[1]))+V[210]*(V[211]*(4*S[2]+2*S[0]-S[1])+V[212]*(S[1]-4*S[2]-2*
 S[0])))+S[0]*(S[0]*(V[209]*(V[211]-V[212])+V[210]*(V[212]-V[211]))+S[2]*(4*
 (V[209]*(V[212]-V[211])+V[210]*(V[211]-V[212]))))+S[4]*(4*(V[209]*(V[211]-
 V[212])+V[210]*(V[212]-V[211]))));
C[430]=+S[1]*(S[1]*(V[209]*(V[212]-V[211])+V[210]*(V[211]-V[212]))+S[0]*(2*(
 V[209]*(V[211]-V[212])+V[210]*(V[212]-V[211]))))+S[6]*(V[209]*(V[212]-
 V[211])+V[210]*(V[211]-V[212]))+S[4]*(4*(V[209]*(V[211]-V[212])+V[210]*(
 V[212]-V[211])));
C[429]=+4*(V[209]*(V[211]*(S[2]-S[0]-S[1])+V[212]*(S[0]-S[2]+S[1]))+V[210]*(
 V[211]*(S[0]-S[2]+S[1])+V[212]*(S[2]-S[0]-S[1])));
C[428]=+4*(V[209]*(V[211]-V[212])+V[210]*(V[212]-V[211]));
C[427]=+V[462]*V[460]*S[8]*S[9];
S[10]=V[212]*V[212];
C[426]=+S[2]*(V[211]*(S[1]*(V[211]*(S[1]-4*S[2]-2*S[0])+V[212]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[211]-2*V[212])+S[2]*(8*V[212]-4*V[211]))+S[4]*(
 4*V[211]-8*V[212]))+S[10]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[4]));
C[425]=+V[211]*(S[1]*(S[1]*(2*V[212]-V[211])+S[0]*(2*V[211]-4*V[212]))+S[6]*
 (2*V[212]-V[211])+S[4]*(4*V[211]-8*V[212]))+S[10]*(S[1]*(2*S[0]-S[1])+4*
 S[4]-S[6]);
C[424]=+V[211]*(V[211]*(4*(S[2]-S[0]-S[1]))+V[212]*(8*(S[0]-S[2]+S[1])))+
 S[10]*(4*(S[2]-S[0]-S[1]));
C[423]=+V[211]*(4*V[211]-8*V[212])+4*S[10];
S[11]=V[462]*V[462];
C[422]=+S[11]*S[8]*S[9];
C[421]=+S[2]*(S[0]*(V[213]*(4*S[2]-S[0]+S[1])+V[214]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[213]-V[214]))+S[2]*(4*(V[214]-V[213]))));
C[420]=+S[1]*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213]))+S[2]*(S[0]*(4*(
 V[213]-V[214]))+S[2]*(8*(V[214]-V[213])));
C[419]=+S[1]*(2*(V[214]-V[213]))+S[2]*(4*(V[214]-V[213]));
C[418]=+S[2]*(S[1]*(V[209]*(V[213]*(S[1]-4*S[2]-2*S[0])+V[214]*(4*S[2]+2*
 S[0]-S[1]))+V[210]*(V[213]*(4*S[2]+2*S[0]-S[1])+V[214]*(S[1]-4*S[2]-2*
 S[0])))+S[0]*(S[0]*(V[209]*(V[213]-V[214])+V[210]*(V[214]-V[213]))+S[2]*(4*
 (V[209]*(V[214]-V[213])+V[210]*(V[213]-V[214]))))+S[4]*(4*(V[209]*(V[213]-
 V[214])+V[210]*(V[214]-V[213]))));
C[417]=+S[1]*(S[1]*(V[209]*(V[214]-V[213])+V[210]*(V[213]-V[214]))+S[0]*(2*(
 V[209]*(V[213]-V[214])+V[210]*(V[214]-V[213]))))+S[6]*(V[209]*(V[214]-
 V[213])+V[210]*(V[213]-V[214]))+S[4]*(4*(V[209]*(V[213]-V[214])+V[210]*(
 V[214]-V[213])));
C[416]=+4*(V[209]*(V[213]*(S[2]-S[0]-S[1])+V[214]*(S[0]-S[2]+S[1]))+V[210]*(
 V[213]*(S[0]-S[2]+S[1])+V[214]*(S[2]-S[0]-S[1])));
C[415]=+4*(V[209]*(V[213]-V[214])+V[210]*(V[214]-V[213]));
C[414]=+V[464]*V[460]*S[8]*S[9];
C[413]=+S[2]*(S[1]*(V[211]*(V[213]*(S[1]-4*S[2]-2*S[0])+V[214]*(4*S[2]+2*
 S[0]-S[1]))+V[212]*(V[213]*(4*S[2]+2*S[0]-S[1])+V[214]*(S[1]-4*S[2]-2*
 S[0])))+S[0]*(S[0]*(V[211]*(V[213]-V[214])+V[212]*(V[214]-V[213]))+S[2]*(4*
 (V[211]*(V[214]-V[213])+V[212]*(V[213]-V[214]))))+S[4]*(4*(V[211]*(V[213]-
 V[214])+V[212]*(V[214]-V[213]))));
C[412]=+S[1]*(S[1]*(V[211]*(V[214]-V[213])+V[212]*(V[213]-V[214]))+S[0]*(2*(
 V[211]*(V[213]-V[214])+V[212]*(V[214]-V[213]))))+S[6]*(V[211]*(V[214]-
 V[213])+V[212]*(V[213]-V[214]))+S[4]*(4*(V[211]*(V[213]-V[214])+V[212]*(
 V[214]-V[213])));
C[411]=+4*(V[211]*(V[213]*(S[2]-S[0]-S[1])+V[214]*(S[0]-S[2]+S[1]))+V[212]*(
 V[213]*(S[0]-S[2]+S[1])+V[214]*(S[2]-S[0]-S[1])));
C[410]=+4*(V[211]*(V[213]-V[214])+V[212]*(V[214]-V[213]));
C[409]=+V[464]*V[462]*S[8]*S[9];
S[12]=V[214]*V[214];
C[408]=+S[2]*(V[213]*(S[1]*(V[213]*(S[1]-4*S[2]-2*S[0])+V[214]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[213]-2*V[214])+S[2]*(8*V[214]-4*V[213]))+S[4]*(
 4*V[213]-8*V[214]))+S[12]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[4]));
C[407]=+V[213]*(S[1]*(S[1]*(2*V[214]-V[213])+S[0]*(2*V[213]-4*V[214]))+S[6]*
 (2*V[214]-V[213])+S[4]*(4*V[213]-8*V[214]))+S[12]*(S[1]*(2*S[0]-S[1])+4*
 S[4]-S[6]);
C[406]=+V[213]*(V[213]*(4*(S[2]-S[0]-S[1]))+V[214]*(8*(S[0]-S[2]+S[1])))+
 S[12]*(4*(S[2]-S[0]-S[1]));
C[405]=+V[213]*(4*V[213]-8*V[214])+4*S[12];
S[13]=V[122]*V[122];
S[14]=V[121]*V[121];
S[15]=V[119]*V[119]*V[119]*V[119];
S[16]=V[118]*V[118];
S[17]=V[7]*V[7];
S[18]=V[3]*V[3];
C[404]=+64*S[13]*S[14]*S[15]*S[16]*S[17]*S[18]*S[1];
S[19]=V[464]*V[464];
C[403]=+S[19]*S[8]*S[9];
C[402]=+S[2]*(S[1]*(3*S[0]-2*S[2]-S[1])+S[0]*(S[0]-4*S[2])+4*S[4]);
C[401]=+S[1]*(S[0]-2*S[1])+S[2]*(8*S[2]-4*S[0]);
C[400]=+4*S[2]+2*S[1];
C[399]=+2*(S[1]*(S[0]-S[2]-S[1])-S[2]*S[0])+4*S[4];
C[398]=+2*(-S[0]-S[1])+8*S[2];
C[397]=+8*S[13]*S[14]*S[15]*S[16]*S[17]*S[18]*S[1];
C[396]=+S[1]*(S[2]*(V[209]*(S[1]-2*S[2]-S[0])+V[210]*(2*S[2]+S[0]-S[1])));
C[395]=+S[0]*(V[209]*(4*S[2]-S[0]+S[1])+V[210]*(S[0]-4*S[2]-S[1]))+S[4]*(4*(
 V[210]-V[209]));
C[394]=+V[209]*(4*S[0]-8*S[2]+2*S[1])+V[210]*(8*S[2]-4*S[0]-2*S[1]);
C[393]=+S[2]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(4*(V[210]-
 V[209])));
C[392]=+2*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(8*(V[210]-
 V[209]));
C[391]=+4*(V[210]-V[209]);
C[390]=+V[466]*V[460]*V[458]*V[125]*S[9];
C[389]=+S[1]*(S[2]*(V[211]*(S[1]-2*S[2]-S[0])+V[212]*(2*S[2]+S[0]-S[1])));
C[388]=+S[0]*(V[211]*(4*S[2]-S[0]+S[1])+V[212]*(S[0]-4*S[2]-S[1]))+S[4]*(4*(
 V[212]-V[211]));
C[387]=+V[211]*(4*S[0]-8*S[2]+2*S[1])+V[212]*(8*S[2]-4*S[0]-2*S[1]);
C[386]=+S[2]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212]))+S[2]*(4*(V[212]-
 V[211])));
C[385]=+2*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212]))+S[2]*(8*(V[212]-
 V[211]));
C[384]=+4*(V[212]-V[211]);
C[383]=+V[466]*V[462]*V[458]*V[125]*S[9];
C[382]=+S[1]*(S[2]*(V[213]*(S[1]-2*S[2]-S[0])+V[214]*(2*S[2]+S[0]-S[1])));
C[381]=+S[0]*(V[213]*(4*S[2]-S[0]+S[1])+V[214]*(S[0]-4*S[2]-S[1]))+S[4]*(4*(
 V[214]-V[213]));
C[380]=+V[213]*(4*S[0]-8*S[2]+2*S[1])+V[214]*(8*S[2]-4*S[0]-2*S[1]);
C[379]=+S[2]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214]))+S[2]*(4*(V[214]-
 V[213])));
C[378]=+2*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214]))+S[2]*(8*(V[214]-
 V[213]));
C[377]=+4*(V[214]-V[213]);
C[376]=+V[466]*V[464]*V[458]*V[125]*S[9];
C[375]=+S[2]*(S[0]*(4*(S[1]-S[2])+S[0])+4*S[4]-2*S[3]);
C[374]=+S[0]*(S[0]-8*S[2])+12*S[4]-2*S[3];
C[373]=+12*S[2]-4*S[0];
C[372]=+S[1]*(2*(S[0]-S[1])-4*S[2])+S[2]*(8*S[2]-4*S[0]);
C[371]=+4*(-S[0]-S[1])+16*S[2];
C[370]=+4*(S[2]-S[1]);
S[20]=V[466]*V[466];
S[21]=V[458]*V[458];
C[369]=+S[20]*S[21]*S[9];
C[368]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+5*S[0]+S[1])+V[16]*(3*(
 S[0]-S[1]))));
C[367]=+S[1]*(2*(V[15]*(V[16]-V[15])-S[1]));
C[366]=+V[15]*(V[15]*(V[15]*(4*(V[16]-V[15]))+2*(S[0]-S[1]))+V[16]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[365]=+V[15]*(4*(V[16]-V[15]));
C[364]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[16]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[16]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[3]*(V[209]-V[210])+
 S[6]*(V[210]-V[209]))+V[16]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[363]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[16]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[16]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[362]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[16]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[361]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[16]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[16]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[3]*(V[211]-V[212])+
 S[6]*(V[212]-V[211]))+V[16]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[360]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[16]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[16]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[359]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[16]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[358]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[16]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[16]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[3]*(V[213]-V[214])+
 S[6]*(V[214]-V[213]))+V[16]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[357]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[16]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[16]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[356]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[16]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[355]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])-10*S[1])+
 V[16]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[16]*(S[1]*(S[0]-2*S[1])+
 S[6]));
C[354]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[353]=+V[15]*(V[15]*(V[15]*(4*(V[16]+V[15]))-2*S[0]-6*S[1])+V[16]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[352]=+4*(V[16]*V[15]-S[0]-S[1])+12*S[2];
S[22]=V[16]*V[16];
C[351]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[16])+3*S[22]+S[0]+2*S[1])+
 V[16]*(3*(S[0]-S[1]))));
C[350]=+S[1]*(S[22]-S[2]-S[1]);
C[349]=+S[1]*(2*(S[1]-S[0])+S[22]-S[2])+S[2]*(2*(S[22]-S[2])+S[0])-S[22]*
 S[0];
C[348]=+2*(S[22]-S[2]);
C[347]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[16]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[4])+S[1]*(V[16]*(3*(S[0]-S[1]))));
C[346]=+S[1]*(2*(V[15]*(V[16]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[345]=+V[15]*(V[15]*(V[15]*(4*V[16]-12*V[15])+6*S[0]+2*S[1])+V[16]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[1]-S[0]));
C[344]=+4*(V[16]*V[15]+S[0]+S[1])-20*S[2];
C[343]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[16]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[16]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[3]*(3*(V[209]-V[210]))+
 S[6]*(V[209]-V[210]))+V[16]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[342]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[16]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[16]*(V[209]-V[210])))+S[2]*(V[16]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[341]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[16]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[340]=+V[15]*(V[16]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*
 (V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[339]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[16]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[338]=+V[485]*V[469]*V[460]*V[125]*S[9];
C[337]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[16]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[16]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[3]*(3*(V[211]-V[212]))+
 S[6]*(V[211]-V[212]))+V[16]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[336]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[16]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[16]*(V[211]-V[212])))+S[2]*(V[16]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[335]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[16]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[334]=+V[15]*(V[16]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[333]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[16]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[332]=+V[485]*V[469]*V[462]*V[125]*S[9];
C[331]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[16]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[16]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[3]*(3*(V[213]-V[214]))+
 S[6]*(V[213]-V[214]))+V[16]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[330]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[16]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[16]*(V[213]-V[214])))+S[2]*(V[16]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[329]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[16]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[328]=+V[15]*(V[16]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[327]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[16]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[326]=+V[485]*V[469]*V[464]*V[125]*S[9];
C[325]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])-6*S[1])+
 V[16]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[6])+V[16]*(S[1]*(S[0]-2*
 S[1])+S[6]));
C[324]=+V[15]*(V[15]*(V[15]*(8*V[16]+16*V[15])-12*S[0]-6*S[1])+V[16]*(6*
 S[1]-4*S[0]))+2*S[6]-4*S[3];
C[323]=+V[15]*(4*V[16]+20*V[15])-8*S[0];
C[322]=+V[15]*(V[15]*(V[15]*(4*V[16]+12*V[15])-6*S[0]-10*S[1])+V[16]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[321]=+V[15]*(4*V[16]+28*V[15])+8*(-S[0]-S[1]);
C[320]=+V[485]*V[469]*V[466]*V[458]*S[9];
C[319]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])+V[16]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[22]+2*S[0]+3*S[1])+S[6])+V[16]*(S[1]*(
 4*S[0]-5*S[1])+S[6]));
C[318]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[22]+S[0])-4*S[1]);
C[317]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*S[22]+2*S[0]+6*S[1])+V[16]*
 (4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[22])-2*S[22]*S[0];
C[316]=+4*(S[22]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[315]=+V[15]*(-8*V[16]-4*V[15])+4*S[22]+8*S[1];
C[314]=+V[15]*(V[16]*(S[1]*(3*V[16]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[4])+S[1]*(V[15]*(3*(S[0]-S[2]))));
C[313]=+V[15]*(V[15]*(V[15]*(8*V[16]+4*V[15])-4*S[0]-5*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(S[22]-2*S[1])+S[6];
C[312]=+V[15]*(4*V[16]+8*V[15])-4*S[0];
C[311]=+V[15]*(V[15]*(V[15]*(-8*V[16]-2*V[15])+2*S[22]+S[0]+7*S[1])+V[16]*(
 4*(S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[22])-S[22]*S[0];
C[310]=+V[15]*(-8*V[16]-10*V[15])+4*(S[0]+S[1])+2*S[22];
C[309]=+V[15]*(-4*V[16]-2*V[15])+2*S[22]+4*S[1];
S[23]=V[485]*V[485];
S[24]=V[469]*V[469];
C[308]=+S[23]*S[24]*S[9];
C[307]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+5*S[0]+S[1])+V[17]*(3*(
 S[0]-S[1]))));
C[306]=+S[1]*(2*(V[15]*(V[17]-V[15])-S[1]));
C[305]=+V[15]*(V[15]*(V[15]*(4*(V[17]-V[15]))+2*(S[0]-S[1]))+V[17]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[304]=+V[15]*(4*(V[17]-V[15]));
C[303]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[17]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[17]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[3]*(V[209]-V[210])+
 S[6]*(V[210]-V[209]))+V[17]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[302]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[17]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[17]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[301]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[17]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[300]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[17]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[17]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[3]*(V[211]-V[212])+
 S[6]*(V[212]-V[211]))+V[17]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[299]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[17]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[17]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[298]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[17]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[297]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[17]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[17]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[3]*(V[213]-V[214])+
 S[6]*(V[214]-V[213]))+V[17]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[296]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[17]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[17]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[295]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[17]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[294]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])-10*S[1])+
 V[17]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[17]*(S[1]*(S[0]-2*S[1])+
 S[6]));
C[293]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[292]=+V[15]*(V[15]*(V[15]*(4*(V[17]+V[15]))-2*S[0]-6*S[1])+V[17]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[291]=+4*(V[17]*V[15]-S[0]-S[1])+12*S[2];
C[290]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[17]-V[16])+2*V[15])+6*V[17]*V[16]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[17]-V[16])+S[0]*(V[17]+V[16]))));
C[289]=+S[1]*(2*(V[17]*V[16]-S[2]-S[1]));
C[288]=+S[1]*(2*(V[17]*V[16]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[17]*V[16]-
 S[2])+2*S[0])-2*V[17]*V[16]*S[0];
C[287]=+4*(V[17]*V[16]-S[2]);
C[286]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])-V[17]*S[0]-
 V[16]*S[1])-6*V[15]*S[1])+S[1]*(6*V[17]*V[16]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-2*V[17]-3*V[16])+S[0]*(V[17]+3*V[16]))+V[17]*S[6]);
C[285]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[17]*V[16]+S[0])-4*S[1]);
C[284]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*V[17]*V[16]+2*S[0]+6*S[1])+
 V[17]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[17]*V[16])-2*V[17]*V[16]*
 S[0];
C[283]=+4*(V[17]*V[16]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
S[25]=V[17]*V[17];
C[282]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[17])+3*S[25]+S[0]+2*S[1])+
 V[17]*(3*(S[0]-S[1]))));
C[281]=+S[1]*(S[25]-S[2]-S[1]);
C[280]=+S[1]*(2*(S[1]-S[0])+S[25]-S[2])+S[2]*(2*(S[25]-S[2])+S[0])-S[25]*
 S[0];
C[279]=+2*(S[25]-S[2]);
C[278]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+5*S[0]+S[1])+V[18]*(3*(
 S[0]-S[1]))));
C[277]=+S[1]*(2*(V[15]*(V[18]-V[15])-S[1]));
C[276]=+V[15]*(V[15]*(V[15]*(4*(V[18]-V[15]))+2*(S[0]-S[1]))+V[18]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[275]=+V[15]*(4*(V[18]-V[15]));
C[274]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[18]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[18]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[3]*(V[209]-V[210])+
 S[6]*(V[210]-V[209]))+V[18]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[273]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[18]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[18]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[272]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[18]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[271]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[18]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[18]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[3]*(V[211]-V[212])+
 S[6]*(V[212]-V[211]))+V[18]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[270]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[18]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[18]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[269]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[18]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[268]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[18]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[18]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[3]*(V[213]-V[214])+
 S[6]*(V[214]-V[213]))+V[18]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[267]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[18]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[18]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[266]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[18]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[265]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])-10*S[1])+
 V[18]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[18]*(S[1]*(S[0]-2*S[1])+
 S[6]));
C[264]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(6*S[1]-
 4*S[0]))+S[1]*(2*S[0]-4*S[1]);
C[263]=+V[15]*(V[15]*(V[15]*(4*(V[18]+V[15]))-2*S[0]-6*S[1])+V[18]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[262]=+4*(V[18]*V[15]-S[0]-S[1])+12*S[2];
C[261]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[18]-V[16])+2*V[15])+6*V[18]*V[16]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[18]-V[16])+S[0]*(V[18]+V[16]))));
C[260]=+S[1]*(2*(V[18]*V[16]-S[2]-S[1]));
C[259]=+S[1]*(2*(V[18]*V[16]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[18]*V[16]-
 S[2])+2*S[0])-2*V[18]*V[16]*S[0];
C[258]=+4*(V[18]*V[16]-S[2]);
C[257]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])-V[18]*S[0]-
 V[16]*S[1])-6*V[15]*S[1])+S[1]*(6*V[18]*V[16]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-2*V[18]-3*V[16])+S[0]*(V[18]+3*V[16]))+V[18]*S[6]);
C[256]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[16]+S[0])-4*S[1]);
C[255]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*V[18]*V[16]+2*S[0]+6*S[1])+
 V[18]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[16])-2*V[18]*V[16]*
 S[0];
C[254]=+4*(V[18]*V[16]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[253]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[18]-V[17])+2*V[15])+6*V[18]*V[17]+
 2*S[0]+4*S[1])+3*(S[1]*(-V[18]-V[17])+S[0]*(V[18]+V[17]))));
C[252]=+S[1]*(2*(V[18]*V[17]-S[2]-S[1]));
C[251]=+S[1]*(2*(V[18]*V[17]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[18]*V[17]-
 S[2])+2*S[0])-2*V[18]*V[17]*S[0];
C[250]=+4*(V[18]*V[17]-S[2]);
S[26]=V[18]*V[18];
C[249]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[18])+3*S[26]+S[0]+2*S[1])+
 V[18]*(3*(S[0]-S[1]))));
C[248]=+S[1]*(S[26]-S[2]-S[1]);
C[247]=+S[1]*(2*(S[1]-S[0])+S[26]-S[2])+S[2]*(2*(S[26]-S[2])+S[0])-S[26]*
 S[0];
C[246]=+2*(S[26]-S[2]);
C[245]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[17]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[4])+S[1]*(V[17]*(3*(S[0]-S[1]))));
C[244]=+S[1]*(2*(V[15]*(V[17]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[243]=+V[15]*(V[15]*(V[15]*(4*V[17]-12*V[15])+6*S[0]+2*S[1])+V[17]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[1]-S[0]));
C[242]=+4*(V[17]*V[15]+S[0]+S[1])-20*S[2];
C[241]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[17]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[17]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[3]*(3*(V[209]-V[210]))+
 S[6]*(V[209]-V[210]))+V[17]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[240]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[17]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[17]*(V[209]-V[210])))+S[2]*(V[17]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[239]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[17]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[238]=+V[15]*(V[17]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*
 (V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[237]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[17]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[236]=+V[506]*V[490]*V[460]*V[125]*S[9];
C[235]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[17]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[17]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[3]*(3*(V[211]-V[212]))+
 S[6]*(V[211]-V[212]))+V[17]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[234]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[17]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[17]*(V[211]-V[212])))+S[2]*(V[17]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[233]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[17]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[232]=+V[15]*(V[17]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[231]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[17]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[230]=+V[506]*V[490]*V[462]*V[125]*S[9];
C[229]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[17]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[17]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[3]*(3*(V[213]-V[214]))+
 S[6]*(V[213]-V[214]))+V[17]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[228]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[17]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[17]*(V[213]-V[214])))+S[2]*(V[17]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[227]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[17]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[226]=+V[15]*(V[17]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[225]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[17]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[224]=+V[506]*V[490]*V[464]*V[125]*S[9];
C[223]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])-6*S[1])+
 V[17]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[6])+V[17]*(S[1]*(S[0]-2*
 S[1])+S[6]));
C[222]=+V[15]*(V[15]*(V[15]*(8*V[17]+16*V[15])-12*S[0]-6*S[1])+V[17]*(6*
 S[1]-4*S[0]))+2*S[6]-4*S[3];
C[221]=+V[15]*(4*V[17]+20*V[15])-8*S[0];
C[220]=+V[15]*(V[15]*(V[15]*(4*V[17]+12*V[15])-6*S[0]-10*S[1])+V[17]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[219]=+V[15]*(4*V[17]+28*V[15])+8*(-S[0]-S[1]);
C[218]=+V[506]*V[490]*V[466]*V[458]*S[9];
C[217]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])-V[17]*S[1]-
 V[16]*S[0])-6*V[15]*S[1])+S[1]*(6*V[17]*V[16]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-3*V[17]-2*V[16])+S[0]*(3*V[17]+V[16]))+V[16]*S[6]);
C[216]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[17]*V[16]+S[0])-4*S[1]);
C[215]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*V[17]*V[16]+2*S[0]+6*S[1])+
 V[16]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[17]*V[16])-2*V[17]*V[16]*
 S[0];
C[214]=+4*(V[17]*V[16]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[213]=+V[15]*(S[1]*(S[0]*(V[17]+V[16]+6*V[15])+S[1]*(2*(-V[17]-V[16]))+
 V[15]*(6*(V[17]*V[16]-S[2])))+S[0]*(S[0]*(V[17]+V[16])+S[2]*(4*(-V[17]-
 V[16])))+S[4]*(4*(V[17]+V[16])));
C[212]=+V[15]*(V[15]*(8*(V[15]*(V[17]+V[16]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[17]+V[16])+S[0]*(-V[17]-V[16])))+S[1]*(2*V[17]*V[16]-4*S[1])+2*S[6];
C[211]=+V[15]*(4*(V[17]+V[16])+16*V[15])-8*S[0];
C[210]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[16])-4*V[15])+4*V[17]*V[16]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[17]-V[16])+S[0]*(V[17]+V[16])))+S[1]*(4*(S[1]-S[0])+2*
 V[17]*V[16])-2*V[17]*V[16]*S[0];
C[209]=+8*(V[15]*(-V[17]-V[16])+S[0]+S[1])+4*V[17]*V[16]-20*S[2];
C[208]=+4*(V[15]*(-V[17]-V[16]-V[15])+V[17]*V[16])+8*S[1];
C[207]=+V[506]*V[490]*V[485]*V[469]*S[9];
C[206]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])+V[17]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[25]+2*S[0]+3*S[1])+S[6])+V[17]*(S[1]*(
 4*S[0]-5*S[1])+S[6]));
C[205]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[25]+S[0])-4*S[1]);
C[204]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*S[25]+2*S[0]+6*S[1])+V[17]*
 (4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[25])-2*S[25]*S[0];
C[203]=+4*(S[25]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[202]=+V[15]*(-8*V[17]-4*V[15])+4*S[25]+8*S[1];
C[201]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])-V[18]*S[0]-
 V[17]*S[1])-6*V[15]*S[1])+S[1]*(6*V[18]*V[17]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-2*V[18]-3*V[17])+S[0]*(V[18]+3*V[17]))+V[18]*S[6]);
C[200]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[17]+S[0])-4*S[1]);
C[199]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*V[18]*V[17]+2*S[0]+6*S[1])+
 V[18]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[17])-2*V[18]*V[17]*
 S[0];
C[198]=+4*(V[18]*V[17]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[197]=+V[15]*(V[17]*(S[1]*(3*V[17]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[4])+S[1]*(V[15]*(3*(S[0]-S[2]))));
C[196]=+V[15]*(V[15]*(V[15]*(8*V[17]+4*V[15])-4*S[0]-5*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(S[25]-2*S[1])+S[6];
C[195]=+V[15]*(4*V[17]+8*V[15])-4*S[0];
C[194]=+V[15]*(V[15]*(V[15]*(-8*V[17]-2*V[15])+2*S[25]+S[0]+7*S[1])+V[17]*(
 4*(S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[25])-S[25]*S[0];
C[193]=+V[15]*(-8*V[17]-10*V[15])+4*(S[0]+S[1])+2*S[25];
C[192]=+V[15]*(-4*V[17]-2*V[15])+2*S[25]+4*S[1];
S[27]=V[506]*V[506];
S[28]=V[490]*V[490];
C[191]=+S[27]*S[28]*S[9];
C[190]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[18]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[4])+S[1]*(V[18]*(3*(S[0]-S[1]))));
C[189]=+S[1]*(2*(V[15]*(V[18]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[188]=+V[15]*(V[15]*(V[15]*(4*V[18]-12*V[15])+6*S[0]+2*S[1])+V[18]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[1]-S[0]));
C[187]=+4*(V[18]*V[15]+S[0]+S[1])-20*S[2];
C[186]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[18]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[18]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[3]*(3*(V[209]-V[210]))+
 S[6]*(V[209]-V[210]))+V[18]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[185]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[18]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[18]*(V[209]-V[210])))+S[2]*(V[18]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[184]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[18]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[183]=+V[15]*(V[18]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*
 (V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[182]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[18]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[181]=+V[527]*V[511]*V[460]*V[125]*S[9];
C[180]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[18]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[18]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[3]*(3*(V[211]-V[212]))+
 S[6]*(V[211]-V[212]))+V[18]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[179]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[18]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[18]*(V[211]-V[212])))+S[2]*(V[18]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[178]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[18]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[177]=+V[15]*(V[18]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*
 (V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[176]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[18]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[175]=+V[527]*V[511]*V[462]*V[125]*S[9];
C[174]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[18]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[18]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[3]*(3*(V[213]-V[214]))+
 S[6]*(V[213]-V[214]))+V[18]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[173]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[18]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[18]*(V[213]-V[214])))+S[2]*(V[18]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[172]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[18]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[171]=+V[15]*(V[18]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*
 (V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[170]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[18]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[169]=+V[527]*V[511]*V[464]*V[125]*S[9];
C[168]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])-6*S[1])+
 V[18]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[6])+V[18]*(S[1]*(S[0]-2*
 S[1])+S[6]));
C[167]=+V[15]*(V[15]*(V[15]*(8*V[18]+16*V[15])-12*S[0]-6*S[1])+V[18]*(6*
 S[1]-4*S[0]))+2*S[6]-4*S[3];
C[166]=+V[15]*(4*V[18]+20*V[15])-8*S[0];
C[165]=+V[15]*(V[15]*(V[15]*(4*V[18]+12*V[15])-6*S[0]-10*S[1])+V[18]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[164]=+V[15]*(4*V[18]+28*V[15])+8*(-S[0]-S[1]);
C[163]=+V[527]*V[511]*V[466]*V[458]*S[9];
C[162]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])-V[18]*S[1]-
 V[16]*S[0])-6*V[15]*S[1])+S[1]*(6*V[18]*V[16]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-3*V[18]-2*V[16])+S[0]*(3*V[18]+V[16]))+V[16]*S[6]);
C[161]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[16]+S[0])-4*S[1]);
C[160]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*V[18]*V[16]+2*S[0]+6*S[1])+
 V[16]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[16])-2*V[18]*V[16]*
 S[0];
C[159]=+4*(V[18]*V[16]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[158]=+V[15]*(S[1]*(S[0]*(V[18]+V[16]+6*V[15])+S[1]*(2*(-V[18]-V[16]))+
 V[15]*(6*(V[18]*V[16]-S[2])))+S[0]*(S[0]*(V[18]+V[16])+S[2]*(4*(-V[18]-
 V[16])))+S[4]*(4*(V[18]+V[16])));
C[157]=+V[15]*(V[15]*(8*(V[15]*(V[18]+V[16]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[18]+V[16])+S[0]*(-V[18]-V[16])))+S[1]*(2*V[18]*V[16]-4*S[1])+2*S[6];
C[156]=+V[15]*(4*(V[18]+V[16])+16*V[15])-8*S[0];
C[155]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[16])-4*V[15])+4*V[18]*V[16]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[18]-V[16])+S[0]*(V[18]+V[16])))+S[1]*(4*(S[1]-S[0])+2*
 V[18]*V[16])-2*V[18]*V[16]*S[0];
C[154]=+8*(V[15]*(-V[18]-V[16])+S[0]+S[1])+4*V[18]*V[16]-20*S[2];
C[153]=+4*(V[15]*(-V[18]-V[16]-V[15])+V[18]*V[16])+8*S[1];
C[152]=+V[527]*V[511]*V[485]*V[469]*S[9];
C[151]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])-V[18]*S[1]-
 V[17]*S[0])-6*V[15]*S[1])+S[1]*(6*V[18]*V[17]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-3*V[18]-2*V[17])+S[0]*(3*V[18]+V[17]))+V[17]*S[6]);
C[150]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[18]*V[17]+S[0])-4*S[1]);
C[149]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*V[18]*V[17]+2*S[0]+6*S[1])+
 V[17]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[18]*V[17])-2*V[18]*V[17]*
 S[0];
C[148]=+4*(V[18]*V[17]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[147]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])+V[18]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[26]+2*S[0]+3*S[1])+S[6])+V[18]*(S[1]*(
 4*S[0]-5*S[1])+S[6]));
C[146]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[26]+S[0])-4*S[1]);
C[145]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*S[26]+2*S[0]+6*S[1])+V[18]*
 (4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[26])-2*S[26]*S[0];
C[144]=+4*(S[26]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[143]=+V[15]*(-8*V[18]-4*V[15])+4*S[26]+8*S[1];
C[142]=+V[15]*(S[1]*(S[0]*(V[18]+V[17]+6*V[15])+S[1]*(2*(-V[18]-V[17]))+
 V[15]*(6*(V[18]*V[17]-S[2])))+S[0]*(S[0]*(V[18]+V[17])+S[2]*(4*(-V[18]-
 V[17])))+S[4]*(4*(V[18]+V[17])));
C[141]=+V[15]*(V[15]*(8*(V[15]*(V[18]+V[17]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[18]+V[17])+S[0]*(-V[18]-V[17])))+S[1]*(2*V[18]*V[17]-4*S[1])+2*S[6];
C[140]=+V[15]*(4*(V[18]+V[17])+16*V[15])-8*S[0];
C[139]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[17])-4*V[15])+4*V[18]*V[17]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[18]-V[17])+S[0]*(V[18]+V[17])))+S[1]*(4*(S[1]-S[0])+2*
 V[18]*V[17])-2*V[18]*V[17]*S[0];
C[138]=+8*(V[15]*(-V[18]-V[17])+S[0]+S[1])+4*V[18]*V[17]-20*S[2];
C[137]=+4*(V[15]*(-V[18]-V[17]-V[15])+V[18]*V[17])+8*S[1];
C[136]=+V[527]*V[511]*V[506]*V[490]*S[9];
C[135]=+V[15]*(V[18]*(S[1]*(3*V[18]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[4])+S[1]*(V[15]*(3*(S[0]-S[2]))));
C[134]=+V[15]*(V[15]*(V[15]*(8*V[18]+4*V[15])-4*S[0]-5*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(S[26]-2*S[1])+S[6];
C[133]=+V[15]*(4*V[18]+8*V[15])-4*S[0];
C[132]=+V[15]*(V[15]*(V[15]*(-8*V[18]-2*V[15])+2*S[26]+S[0]+7*S[1])+V[18]*(
 4*(S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[26])-S[26]*S[0];
C[131]=+V[15]*(-8*V[18]-10*V[15])+4*(S[0]+S[1])+2*S[26];
C[130]=+V[15]*(-4*V[18]-2*V[15])+2*S[26]+4*S[1];
S[29]=V[527]*V[527];
S[30]=V[511]*V[511];
C[129]=+S[29]*S[30]*S[9];
C[128]=+V[15]*(V[15]*(S[1]*(V[15]*(2*V[19]-6*V[15])+3*S[0]+S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[4])+S[1]*(V[19]*(3*(S[0]-S[1]))));
C[127]=+S[1]*(2*(V[15]*(V[19]-V[15])+S[0])-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[126]=+8*S[2]+4*S[1];
C[125]=+V[15]*(V[15]*(V[15]*(4*V[19]-12*V[15])+6*S[0]+2*S[1])+V[19]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[1]-S[0]));
C[124]=+4*(V[19]*V[15]+S[0]+S[1])-20*S[2];
C[123]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[19]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[19]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(S[0]*(V[210]-V[209])))+S[3]*(3*(V[209]-V[210]))+
 S[6]*(V[209]-V[210]))+V[19]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[122]=+V[15]*(4*(S[1]*(V[15]*(V[209]-V[210])+V[19]*(V[210]-V[209]))+S[0]*(
 V[15]*(V[209]-V[210])+V[19]*(V[209]-V[210])))+S[2]*(V[19]*(8*(V[210]-
 V[209]))))+S[0]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209])));
C[121]=+V[15]*(V[15]*(12*(V[210]-V[209]))+V[19]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[209]-V[210]))+S[0]*(8*(V[209]-V[210]));
C[120]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[19]*(
 V[212]-V[211]))+S[0]*(V[212]-V[211]))+V[19]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(S[0]*(V[212]-V[211])))+S[3]*(3*(V[211]-V[212]))+
 S[6]*(V[211]-V[212]))+V[19]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[119]=+V[15]*(4*(S[1]*(V[15]*(V[211]-V[212])+V[19]*(V[212]-V[211]))+S[0]*(
 V[15]*(V[211]-V[212])+V[19]*(V[211]-V[212])))+S[2]*(V[19]*(8*(V[212]-
 V[211]))))+S[0]*(2*(S[1]*(V[211]-V[212])+S[0]*(V[212]-V[211])));
C[118]=+V[15]*(V[15]*(12*(V[212]-V[211]))+V[19]*(4*(V[212]-V[211])))+S[1]*(
 4*(V[211]-V[212]))+S[0]*(8*(V[211]-V[212]));
C[117]=+V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[15]*(V[213]-V[214])+V[19]*(
 V[214]-V[213]))+S[0]*(V[214]-V[213]))+V[19]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(S[0]*(V[214]-V[213])))+S[3]*(3*(V[213]-V[214]))+
 S[6]*(V[213]-V[214]))+V[19]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[116]=+V[15]*(4*(S[1]*(V[15]*(V[213]-V[214])+V[19]*(V[214]-V[213]))+S[0]*(
 V[15]*(V[213]-V[214])+V[19]*(V[213]-V[214])))+S[2]*(V[19]*(8*(V[214]-
 V[213]))))+S[0]*(2*(S[1]*(V[213]-V[214])+S[0]*(V[214]-V[213])));
C[115]=+V[15]*(V[15]*(12*(V[214]-V[213]))+V[19]*(4*(V[214]-V[213])))+S[1]*(
 4*(V[213]-V[214]))+S[0]*(8*(V[213]-V[214]));
C[114]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])-6*S[1])+
 V[19]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[6])+V[19]*(S[1]*(S[0]-2*
 S[1])+S[6]));
C[113]=+V[15]*(V[15]*(V[15]*(8*V[19]+16*V[15])-12*S[0]-6*S[1])+V[19]*(6*
 S[1]-4*S[0]))+2*S[6]-4*S[3];
C[112]=+V[15]*(4*V[19]+20*V[15])-8*S[0];
C[111]=+V[15]*(V[15]*(V[15]*(4*V[19]+12*V[15])-6*S[0]-10*S[1])+V[19]*(2*(
 S[1]-S[0])))+S[1]*(4*(S[0]-S[1]));
C[110]=+V[15]*(4*V[19]+28*V[15])+8*(-S[0]-S[1]);
C[109]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])-V[19]*S[1]-
 V[16]*S[0])-6*V[15]*S[1])+S[1]*(6*V[19]*V[16]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-3*V[19]-2*V[16])+S[0]*(3*V[19]+V[16]))+V[16]*S[6]);
C[108]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))-4*S[0]-6*S[1])+V[16]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[16]+S[0])-4*S[1]);
C[107]=+4*(V[15]*(V[16]+V[15])+S[1]);
C[106]=+V[15]*(V[15]*(V[15]*(-8*V[16]-4*V[15])+4*V[19]*V[16]+2*S[0]+6*S[1])+
 V[16]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[16])-2*V[19]*V[16]*
 S[0];
C[105]=+4*(V[19]*V[16]+S[0]+S[1])+V[15]*(-8*V[16]-12*V[15]);
C[104]=+V[15]*(S[1]*(S[0]*(V[19]+V[16]+6*V[15])+S[1]*(2*(-V[19]-V[16]))+
 V[15]*(6*(V[19]*V[16]-S[2])))+S[0]*(S[0]*(V[19]+V[16])+S[2]*(4*(-V[19]-
 V[16])))+S[4]*(4*(V[19]+V[16])));
C[103]=+V[15]*(V[15]*(8*(V[15]*(V[19]+V[16]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[19]+V[16])+S[0]*(-V[19]-V[16])))+S[1]*(2*V[19]*V[16]-4*S[1])+2*S[6];
C[102]=+V[15]*(4*(V[19]+V[16])+16*V[15])-8*S[0];
C[101]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[16])-4*V[15])+4*V[19]*V[16]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[19]-V[16])+S[0]*(V[19]+V[16])))+S[1]*(4*(S[1]-S[0])+2*
 V[19]*V[16])-2*V[19]*V[16]*S[0];
C[100]=+8*(V[15]*(-V[19]-V[16])+S[0]+S[1])+4*V[19]*V[16]-20*S[2];
C[99]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])-V[19]*S[1]-
 V[17]*S[0])-6*V[15]*S[1])+S[1]*(6*V[19]*V[17]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-3*V[19]-2*V[17])+S[0]*(3*V[19]+V[17]))+V[17]*S[6]);
C[98]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))-4*S[0]-6*S[1])+V[17]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[17]+S[0])-4*S[1]);
C[97]=+4*(V[15]*(V[17]+V[15])+S[1]);
C[96]=+V[15]*(V[15]*(V[15]*(-8*V[17]-4*V[15])+4*V[19]*V[17]+2*S[0]+6*S[1])+
 V[17]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[17])-2*V[19]*V[17]*
 S[0];
C[95]=+4*(V[19]*V[17]+S[0]+S[1])+V[15]*(-8*V[17]-12*V[15]);
C[94]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])-V[19]*S[1]-
 V[18]*S[0])-6*V[15]*S[1])+S[1]*(6*V[19]*V[18]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-3*V[19]-2*V[18])+S[0]*(3*V[19]+V[18]))+V[18]*S[6]);
C[93]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))-4*S[0]-6*S[1])+V[18]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[18]+S[0])-4*S[1]);
C[92]=+4*(V[15]*(V[18]+V[15])+S[1]);
C[91]=+V[15]*(V[15]*(V[15]*(-8*V[18]-4*V[15])+4*V[19]*V[18]+2*S[0]+6*S[1])+
 V[18]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[18])-2*V[19]*V[18]*
 S[0];
C[90]=+4*(V[19]*V[18]+S[0]+S[1])+V[15]*(-8*V[18]-12*V[15]);
C[89]=+V[15]*(S[1]*(S[0]*(V[19]+V[17]+6*V[15])+S[1]*(2*(-V[19]-V[17]))+
 V[15]*(6*(V[19]*V[17]-S[2])))+S[0]*(S[0]*(V[19]+V[17])+S[2]*(4*(-V[19]-
 V[17])))+S[4]*(4*(V[19]+V[17])));
C[88]=+V[15]*(V[15]*(8*(V[15]*(V[19]+V[17]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[19]+V[17])+S[0]*(-V[19]-V[17])))+S[1]*(2*V[19]*V[17]-4*S[1])+2*S[6];
C[87]=+V[15]*(4*(V[19]+V[17])+16*V[15])-8*S[0];
C[86]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[17])-4*V[15])+4*V[19]*V[17]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[19]-V[17])+S[0]*(V[19]+V[17])))+S[1]*(4*(S[1]-S[0])+2*
 V[19]*V[17])-2*V[19]*V[17]*S[0];
C[85]=+8*(V[15]*(-V[19]-V[17])+S[0]+S[1])+4*V[19]*V[17]-20*S[2];
C[84]=+V[15]*(S[1]*(S[0]*(V[19]+V[18]+6*V[15])+S[1]*(2*(-V[19]-V[18]))+
 V[15]*(6*(V[19]*V[18]-S[2])))+S[0]*(S[0]*(V[19]+V[18])+S[2]*(4*(-V[19]-
 V[18])))+S[4]*(4*(V[19]+V[18])));
C[83]=+V[15]*(V[15]*(8*(V[15]*(V[19]+V[18]+V[15])-S[0])-10*S[1])+4*(S[1]*(
 V[19]+V[18])+S[0]*(-V[19]-V[18])))+S[1]*(2*V[19]*V[18]-4*S[1])+2*S[6];
C[82]=+V[15]*(4*(V[19]+V[18])+16*V[15])-8*S[0];
C[81]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[18])-4*V[15])+4*V[19]*V[18]+2*S[0]+
 14*S[1])+4*(S[1]*(-V[19]-V[18])+S[0]*(V[19]+V[18])))+S[1]*(4*(S[1]-S[0])+2*
 V[19]*V[18])-2*V[19]*V[18]*S[0];
C[80]=+8*(V[15]*(-V[19]-V[18])+S[0]+S[1])+4*V[19]*V[18]-20*S[2];
C[79]=+V[15]*(V[19]*(S[1]*(3*V[19]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[4])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[31]=V[19]*V[19];
C[78]=+V[15]*(V[15]*(V[15]*(8*V[19]+4*V[15])-4*S[0]-5*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(S[31]-2*S[1])+S[6];
C[77]=+V[15]*(4*V[19]+8*V[15])-4*S[0];
C[76]=+V[15]*(V[15]*(V[15]*(-8*V[19]-2*V[15])+2*S[31]+S[0]+7*S[1])+V[19]*(4*
 (S[0]-S[1])))+S[1]*(2*(S[1]-S[0])+S[31])-S[31]*S[0];
C[75]=+V[15]*(-8*V[19]-10*V[15])+4*(S[0]+S[1])+2*S[31];
C[74]=+S[1]*(V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+5*S[0]+S[1])+V[19]*(3*(
 S[0]-S[1]))));
C[73]=+S[1]*(2*(V[15]*(V[19]-V[15])-S[1]));
C[72]=+V[15]*(V[15]*(V[15]*(4*(V[19]-V[15]))+2*(S[0]-S[1]))+V[19]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[1]-S[0]));
C[71]=+V[15]*(4*(V[19]-V[15]));
C[70]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[19]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[19]*(S[1]*(V[210]-V[209])+S[0]*(
 V[209]-V[210])))+S[1]*(V[15]*(8*(V[209]-V[210]))))+S[3]*(V[209]-V[210])+
 S[6]*(V[210]-V[209]))+V[19]*(S[1]*(S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-
 V[210])))+S[6]*(V[210]-V[209])));
C[69]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[19]*(V[210]-
 V[209])))+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210])))+V[19]*(4*(S[1]*(
 V[210]-V[209])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[68]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[19]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[67]=+V[15]*(V[19]*(4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210]))+S[2]*(8*(
 V[210]-V[209])))+S[1]*(V[15]*(8*(V[209]-V[210]))));
C[66]=+V[15]*(8*(V[15]*(V[210]-V[209])+V[19]*(V[210]-V[209])))+4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]));
C[65]=+8*(V[210]-V[209]);
C[64]=+V[548]*V[532]*V[460]*V[125]*S[9];
C[63]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[19]*(
 V[212]-V[211]))+S[0]*(V[211]-V[212]))+V[19]*(S[1]*(V[212]-V[211])+S[0]*(
 V[211]-V[212])))+S[1]*(V[15]*(8*(V[211]-V[212]))))+S[3]*(V[211]-V[212])+
 S[6]*(V[212]-V[211]))+V[19]*(S[1]*(S[1]*(V[212]-V[211])+S[0]*(2*(V[211]-
 V[212])))+S[6]*(V[212]-V[211])));
C[62]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[19]*(V[212]-
 V[211])))+4*(S[1]*(V[211]-V[212])+S[0]*(V[211]-V[212])))+V[19]*(4*(S[1]*(
 V[212]-V[211])+S[0]*(V[211]-V[212]))))+S[1]*(2*(S[1]*(V[211]-V[212])+S[0]*(
 V[212]-V[211])));
C[61]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[19]*(V[212]-V[211]))+S[1]*(V[212]-
 V[211]));
C[60]=+V[15]*(V[19]*(4*(S[1]*(V[212]-V[211])+S[0]*(V[211]-V[212]))+S[2]*(8*(
 V[212]-V[211])))+S[1]*(V[15]*(8*(V[211]-V[212]))));
C[59]=+V[15]*(8*(V[15]*(V[212]-V[211])+V[19]*(V[212]-V[211])))+4*(S[1]*(
 V[211]-V[212])+S[0]*(V[211]-V[212]));
C[58]=+8*(V[212]-V[211]);
C[57]=+V[548]*V[532]*V[462]*V[125]*S[9];
C[56]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[214]-V[213])+V[19]*(
 V[214]-V[213]))+S[0]*(V[213]-V[214]))+V[19]*(S[1]*(V[214]-V[213])+S[0]*(
 V[213]-V[214])))+S[1]*(V[15]*(8*(V[213]-V[214]))))+S[3]*(V[213]-V[214])+
 S[6]*(V[214]-V[213]))+V[19]*(S[1]*(S[1]*(V[214]-V[213])+S[0]*(2*(V[213]-
 V[214])))+S[6]*(V[214]-V[213])));
C[55]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[214]-V[213])+V[19]*(V[214]-
 V[213])))+4*(S[1]*(V[213]-V[214])+S[0]*(V[213]-V[214])))+V[19]*(4*(S[1]*(
 V[214]-V[213])+S[0]*(V[213]-V[214]))))+S[1]*(2*(S[1]*(V[213]-V[214])+S[0]*(
 V[214]-V[213])));
C[54]=+4*(V[15]*(V[15]*(V[214]-V[213])+V[19]*(V[214]-V[213]))+S[1]*(V[214]-
 V[213]));
C[53]=+V[15]*(V[19]*(4*(S[1]*(V[214]-V[213])+S[0]*(V[213]-V[214]))+S[2]*(8*(
 V[214]-V[213])))+S[1]*(V[15]*(8*(V[213]-V[214]))));
C[52]=+V[15]*(8*(V[15]*(V[214]-V[213])+V[19]*(V[214]-V[213])))+4*(S[1]*(
 V[213]-V[214])+S[0]*(V[213]-V[214]));
C[51]=+8*(V[214]-V[213]);
C[50]=+32*S[13]*S[14]*S[15]*S[16]*S[17]*S[18]*S[1];
C[49]=+V[548]*V[532]*V[464]*V[125]*S[9];
C[48]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])-10*S[1])+
 V[19]*(6*S[1]-4*S[0]))+S[0]*(S[0]+5*S[1]))+V[19]*(S[1]*(S[0]-2*S[1])+
 S[6]));
C[47]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(6*S[1]-4*
 S[0]))+S[1]*(2*S[0]-4*S[1]);
C[46]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[15]))-2*S[0]-6*S[1])+V[19]*(2*(S[1]-
 S[0])))+S[1]*(4*(S[0]-S[1]));
C[45]=+4*(V[19]*V[15]-S[0]-S[1])+12*S[2];
C[44]=+8*(S[2]-S[1]);
C[43]=+V[548]*V[532]*V[466]*V[458]*S[9];
C[42]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[19]-V[16])+2*V[15])+6*V[19]*V[16]+2*
 S[0]+4*S[1])+3*(S[1]*(-V[19]-V[16])+S[0]*(V[19]+V[16]))));
C[41]=+S[1]*(2*(V[19]*V[16]-S[2]-S[1]));
C[40]=+S[1]*(2*(V[19]*V[16]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[19]*V[16]-S[2])+
 2*S[0])-2*V[19]*V[16]*S[0];
C[39]=+4*(V[19]*V[16]-S[2]);
C[38]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])-V[19]*S[0]-
 V[16]*S[1])-6*V[15]*S[1])+S[1]*(6*V[19]*V[16]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-2*V[19]-3*V[16])+S[0]*(V[19]+3*V[16]))+V[19]*S[6]);
C[37]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[16]+S[0])-4*S[1]);
C[36]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*V[19]*V[16]+2*S[0]+6*S[1])+
 V[19]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[16])-2*V[19]*V[16]*
 S[0];
C[35]=+4*(V[19]*V[16]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[34]=+4*(V[15]*(-V[19]-V[16]-V[15])+V[19]*V[16])+8*S[1];
C[33]=+V[548]*V[532]*V[485]*V[469]*S[9];
C[32]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[19]-V[17])+2*V[15])+6*V[19]*V[17]+2*
 S[0]+4*S[1])+3*(S[1]*(-V[19]-V[17])+S[0]*(V[19]+V[17]))));
C[31]=+S[1]*(2*(V[19]*V[17]-S[2]-S[1]));
C[30]=+S[1]*(2*(V[19]*V[17]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[19]*V[17]-S[2])+
 2*S[0])-2*V[19]*V[17]*S[0];
C[29]=+4*(V[19]*V[17]-S[2]);
C[28]=+S[1]*(V[15]*(V[15]*(V[15]*(4*(-V[19]-V[18])+2*V[15])+6*V[19]*V[18]+2*
 S[0]+4*S[1])+3*(S[1]*(-V[19]-V[18])+S[0]*(V[19]+V[18]))));
C[27]=+S[1]*(2*(V[19]*V[18]-S[2]-S[1]));
C[26]=+S[1]*(2*(V[19]*V[18]-S[2])+4*(S[1]-S[0]))+S[2]*(4*(V[19]*V[18]-S[2])+
 2*S[0])-2*V[19]*V[18]*S[0];
C[25]=+4*(V[19]*V[18]-S[2]);
C[24]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])-V[19]*S[0]-
 V[17]*S[1])-6*V[15]*S[1])+S[1]*(6*V[19]*V[17]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-2*V[19]-3*V[17])+S[0]*(V[19]+3*V[17]))+V[19]*S[6]);
C[23]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[17]+S[0])-4*S[1]);
C[22]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*V[19]*V[17]+2*S[0]+6*S[1])+
 V[19]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[17])-2*V[19]*V[17]*
 S[0];
C[21]=+4*(V[19]*V[17]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[20]=+4*(V[15]*(-V[19]-V[17]-V[15])+V[19]*V[17])+8*S[1];
C[19]=+V[548]*V[532]*V[506]*V[490]*S[9];
C[18]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])-V[19]*S[0]-
 V[18]*S[1])-6*V[15]*S[1])+S[1]*(6*V[19]*V[18]+2*S[0]+3*S[1])+S[6])+S[1]*(
 S[1]*(-2*V[19]-3*V[18])+S[0]*(V[19]+3*V[18]))+V[19]*S[6]);
C[17]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(V[19]*V[18]+S[0])-4*S[1]);
C[16]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*V[19]*V[18]+2*S[0]+6*S[1])+
 V[19]*(4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*V[19]*V[18])-2*V[19]*V[18]*
 S[0];
C[15]=+4*(V[19]*V[18]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[14]=+4*(V[15]*(-V[19]-V[18]-V[15])+V[19]*V[18])+8*S[1];
C[13]=+V[548]*V[532]*V[527]*V[511]*S[9];
C[12]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])+V[19]*(-
 S[0]-S[1]))-6*V[15]*S[1])+S[1]*(6*S[31]+2*S[0]+3*S[1])+S[6])+V[19]*(S[1]*(
 4*S[0]-5*S[1])+S[6]));
C[11]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))-4*S[0]-6*S[1])+V[19]*(4*(S[1]-
 S[0])))+S[1]*(2*(S[31]+S[0])-4*S[1]);
C[10]=+4*(V[15]*(V[19]+V[15])+S[1]);
C[9]=+V[15]*(V[15]*(V[15]*(-8*V[19]-4*V[15])+4*S[31]+2*S[0]+6*S[1])+V[19]*(
 4*(S[0]-S[1])))+S[1]*(4*(S[1]-S[0])+2*S[31])-2*S[31]*S[0];
C[8]=+4*(S[31]+S[0]+S[1])+V[15]*(-8*V[19]-12*V[15]);
C[7]=+V[15]*(-8*V[19]-4*V[15])+4*S[31]+8*S[1];
C[6]=+S[1]*(V[15]*(V[15]*(V[15]*(V[15]-4*V[19])+3*S[31]+S[0]+2*S[1])+V[19]*(
 3*(S[0]-S[1]))));
C[5]=+S[1]*(S[31]-S[2]-S[1]);
C[4]=+S[1]*(2*(S[1]-S[0])+S[31]-S[2])+S[2]*(2*(S[31]-S[2])+S[0])-S[31]*S[0];
C[3]=+2*(S[31]-S[2]);
C[2]=+V[15]*(-4*V[19]-2*V[15])+2*S[31]+4*S[1];
C[1]=+16*S[13]*S[14]*S[15]*S[16]*S[17]*S[18]*S[1];
S[32]=V[548]*V[548];
S[33]=V[532]*V[532];
C[0]=+S[32]*S[33]*S[9];
}
