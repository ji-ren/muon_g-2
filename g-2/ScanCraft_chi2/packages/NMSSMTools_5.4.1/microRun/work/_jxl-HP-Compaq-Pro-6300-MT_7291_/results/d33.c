/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C33(REAL *);
extern DNN S33_omg_p25p25_u;
REAL S33_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
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
width[3]=V[558]; mass[3]=V[13];  Qtxt[3]="\1\2";
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\4";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[4]=0.; mass[4]=V[15];  Qtxt[4]="\1\3";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[114];                                                   
if(!momenta){ C33(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(-C[5]-C[4]*DP[0])-C[6]-C[2]*DP[1])+DP[1]*(C[2]*DP[1]-C[3])-
 C[7];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[8];
D=+C[9];
R=+DP[0]*(-C[13]-C[12]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[14];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[15];
D=+C[16];
R=+DP[0]*(C[18]+C[17]*DP[0])+C[19];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[8];
D=+C[9];
R=+DP[0]*(-C[13]-C[12]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[14];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[21];
R=+DP[0]*(C[18]+C[17]*DP[0])+C[19];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[22];
D=+C[9];
R=+DP[0]*(-C[24]-C[23]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[25];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[22];
D=+C[9];
R=+DP[0]*(-C[24]-C[23]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[25];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[26];
D=+C[9];
R=+DP[0]*(-C[28]-C[27]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[29];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[26];
D=+C[9];
R=+DP[0]*(-C[28]-C[27]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[29];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[30];
D=+C[9];
R=+DP[0]*(-C[32]-C[31]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[33];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[30];
D=+C[9];
R=+DP[0]*(-C[32]-C[31]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[33];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[34];
D=+C[9];
R=+DP[0]*(-C[36]-C[35]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[37];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[34];
D=+C[9];
R=+DP[0]*(-C[36]-C[35]*DP[0]-C[10]*DP[1])+DP[1]*(C[10]*DP[1]-C[11])-C[37];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[41]*DP[0]-C[42];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[44];
R=+C[45]+2*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[46];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[41]*DP[0]-C[42];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[47];
D=+C[48];
R=+C[45]+2*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[49];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[52]-C[51]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[49];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[52]-C[51]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[53];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[55]-C[54]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[53];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[55]-C[54]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[56];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[58]-C[57]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[56];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[58]-C[57]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[59];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[61]-C[60]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[59];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[61]-C[60]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[63];
R=+C[64]+DP[0];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[44];
R=+C[45]+2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[65];
D=+C[66];
R=+C[64]+DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[67];
D=+C[44];
R=+C[69]+C[68]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[67];
D=+C[44];
R=+C[69]+C[68]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[70];
D=+C[44];
R=+C[72]+C[71]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[70];
D=+C[44];
R=+C[72]+C[71]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[73];
D=+C[44];
R=+C[75]+C[74]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[73];
D=+C[44];
R=+C[75]+C[74]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[76];
D=+C[44];
R=+C[78]+C[77]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[76];
D=+C[44];
R=+C[78]+C[77]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[41]*DP[0]-C[42];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[47];
D=+C[48];
R=+C[45]+2*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[49];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[52]-C[51]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[49];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[52]-C[51]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[53];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[55]-C[54]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[53];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[55]-C[54]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[56];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[58]-C[57]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[56];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[58]-C[57]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[59];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[61]-C[60]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[59];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[61]-C[60]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[79];
D=+C[66];
R=+C[64]+DP[0];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[48];
R=+C[69]+C[68]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[48];
R=+C[69]+C[68]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[48];
R=+C[72]+C[71]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[48];
R=+C[72]+C[71]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[82];
D=+C[48];
R=+C[75]+C[74]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[82];
D=+C[48];
R=+C[75]+C[74]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[83];
D=+C[48];
R=+C[78]+C[77]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[83];
D=+C[48];
R=+C[78]+C[77]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[84];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[86]-C[85]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[84];
D=+C[46];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[86]-C[85]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[87];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[89]-C[88]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[87];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[89]-C[88]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[90];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[92]-C[91]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[90];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[92]-C[91]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[93];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[95]-C[94]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[93];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[95]-C[94]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[84];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[86]-C[85]*DP[0];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[87];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[89]-C[88]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[87];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[89]-C[88]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[90];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[92]-C[91]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[90];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[92]-C[91]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[93];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[95]-C[94]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[93];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[95]-C[94]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[96];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[98]-C[97]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[96];
D=+C[46];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[98]-C[97]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[99];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[101]-C[100]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[99];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[101]-C[100]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[102];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[104]-C[103]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[102];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[104]-C[103]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[96];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[98]-C[97]*DP[0];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[99];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[101]-C[100]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[99];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[101]-C[100]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[102];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[104]-C[103]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[102];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[104]-C[103]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[105];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[107]-C[106]*DP[0];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[105];
D=+C[46];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[107]-C[106]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[108];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[110]-C[109]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[108];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[110]-C[109]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[105];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[107]-C[106]*DP[0];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[108];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[110]-C[109]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[108];
D=+C[39];
R=+DP[1]*(4*(DP[1]-DP[0])-C[50])-C[110]-C[109]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[111];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[113]-C[112]*DP[0];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[111];
D=+C[46];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[113]-C[112]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[111];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])-C[113]-C[112]*DP[0];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C33(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[47];                                                           
S[0]=V[19]*V[19];
S[1]=V[15]*V[15];
S[2]=V[13]*V[13];
S[3]=V[11]*V[11];
C[113]=+V[15]*(V[15]*(S[0]-S[1]+S[2])+V[19]*(S[2]-S[3]));
C[112]=+S[0]-S[1]-S[3];
S[4]=V[552]*V[552];
S[5]=V[544]*V[544];
C[111]=+S[4]*S[5];
C[110]=+V[15]*(S[2]*(V[19]+V[18]+2*V[15])+S[3]*(-V[19]-V[18])+V[15]*(2*(
 V[19]*V[18]-S[1])));
C[109]=+2*(V[19]*V[18]-S[1]-S[3]);
C[108]=+V[552]*V[544]*V[531]*V[523];
S[6]=V[18]*V[18];
C[107]=+V[15]*(V[15]*(S[6]-S[1]+S[2])+V[18]*(S[2]-S[3]));
C[106]=+S[6]-S[1]-S[3];
S[7]=V[531]*V[531];
S[8]=V[523]*V[523];
C[105]=+S[7]*S[8];
C[104]=+V[15]*(S[2]*(V[19]+V[17]+2*V[15])+S[3]*(-V[19]-V[17])+V[15]*(2*(
 V[19]*V[17]-S[1])));
C[103]=+2*(V[19]*V[17]-S[1]-S[3]);
C[102]=+V[552]*V[544]*V[510]*V[502];
C[101]=+V[15]*(S[2]*(V[18]+V[17]+2*V[15])+S[3]*(-V[18]-V[17])+V[15]*(2*(
 V[18]*V[17]-S[1])));
C[100]=+2*(V[18]*V[17]-S[1]-S[3]);
C[99]=+V[531]*V[523]*V[510]*V[502];
S[9]=V[17]*V[17];
C[98]=+V[15]*(V[15]*(S[9]-S[1]+S[2])+V[17]*(S[2]-S[3]));
C[97]=+S[9]-S[1]-S[3];
S[10]=V[510]*V[510];
S[11]=V[502]*V[502];
C[96]=+S[10]*S[11];
C[95]=+V[15]*(S[2]*(V[19]+V[16]+2*V[15])+S[3]*(-V[19]-V[16])+V[15]*(2*(
 V[19]*V[16]-S[1])));
C[94]=+2*(V[19]*V[16]-S[1]-S[3]);
C[93]=+V[552]*V[544]*V[489]*V[481];
C[92]=+V[15]*(S[2]*(V[18]+V[16]+2*V[15])+S[3]*(-V[18]-V[16])+V[15]*(2*(
 V[18]*V[16]-S[1])));
C[91]=+2*(V[18]*V[16]-S[1]-S[3]);
C[90]=+V[531]*V[523]*V[489]*V[481];
C[89]=+V[15]*(S[2]*(V[17]+V[16]+2*V[15])+S[3]*(-V[17]-V[16])+V[15]*(2*(
 V[17]*V[16]-S[1])));
C[88]=+2*(V[17]*V[16]-S[1]-S[3]);
C[87]=+V[510]*V[502]*V[489]*V[481];
S[12]=V[16]*V[16];
C[86]=+V[15]*(V[15]*(S[12]-S[1]+S[2])+V[16]*(S[2]-S[3]));
C[85]=+S[12]-S[1]-S[3];
S[13]=V[489]*V[489];
S[14]=V[481]*V[481];
C[84]=+S[13]*S[14];
C[83]=+V[552]*V[544]*V[468]*V[449];
C[82]=+V[531]*V[523]*V[468]*V[449];
C[81]=+V[510]*V[502]*V[468]*V[449];
C[80]=+V[489]*V[481]*V[468]*V[449];
S[15]=V[468]*V[468];
S[16]=V[449]*V[449];
C[79]=+S[15]*S[16];
C[78]=+V[15]*(2*V[19]*V[15]+S[2]-S[3]);
C[77]=+2*V[19];
C[76]=+V[552]*V[544]*V[466]*V[439];
C[75]=+V[15]*(2*V[18]*V[15]+S[2]-S[3]);
C[74]=+2*V[18];
C[73]=+V[531]*V[523]*V[466]*V[439];
C[72]=+V[15]*(2*V[17]*V[15]+S[2]-S[3]);
C[71]=+2*V[17];
C[70]=+V[510]*V[502]*V[466]*V[439];
C[69]=+V[15]*(2*V[16]*V[15]+S[2]-S[3]);
C[68]=+2*V[16];
C[67]=+V[489]*V[481]*V[466]*V[439];
S[17]=V[122]*V[122];
S[18]=V[121]*V[121];
S[19]=V[119]*V[119];
S[20]=V[7]*V[7];
S[21]=V[3]*V[3];
S[22]=V[1]*V[1];
C[66]=+4*S[17]*S[18]*S[19]*S[20]*S[21]*S[22];
C[65]=+V[468]*V[466]*V[449]*V[439];
C[64]=+S[1];
C[63]=+16*S[17]*S[18]*S[19]*S[20]*S[21]*S[22];
S[23]=V[466]*V[466];
S[24]=V[439]*V[439];
C[62]=+S[23]*S[24];
C[61]=+V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+3*S[2]-S[3])+V[19]*(S[2]-
 S[3]));
C[60]=+2*(V[15]*(V[19]-V[15])-S[3]);
C[59]=+V[552]*V[544]*V[468]*V[464];
C[58]=+V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+3*S[2]-S[3])+V[18]*(S[2]-
 S[3]));
C[57]=+2*(V[15]*(V[18]-V[15])-S[3]);
C[56]=+V[531]*V[523]*V[468]*V[464];
C[55]=+V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+3*S[2]-S[3])+V[17]*(S[2]-
 S[3]));
C[54]=+2*(V[15]*(V[17]-V[15])-S[3]);
C[53]=+V[510]*V[502]*V[468]*V[464];
C[52]=+V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+3*S[2]-S[3])+V[16]*(S[2]-
 S[3]));
C[51]=+2*(V[15]*(V[16]-V[15])-S[3]);
C[50]=+2*(S[3]-S[2])+4*S[1];
C[49]=+V[489]*V[481]*V[468]*V[464];
S[25]=V[122]*V[122]*V[122];
S[26]=V[121]*V[121]*V[121];
S[27]=V[119]*V[119]*V[119];
S[28]=V[7]*V[7]*V[7];
S[29]=V[3]*V[3]*V[3];
C[48]=+8*S[25]*S[26]*S[27]*S[28]*S[29]*V[1];
C[47]=+S[15]*V[464]*V[449]*V[15];
S[30]=V[122]*V[122]*V[122]*V[122];
S[31]=V[121]*V[121]*V[121]*V[121];
S[32]=V[119]*V[119]*V[119]*V[119];
S[33]=V[7]*V[7]*V[7]*V[7];
S[34]=V[3]*V[3]*V[3]*V[3];
C[46]=+8*S[30]*S[31]*S[32]*S[33]*S[34];
C[45]=+2*S[1]+S[2]-S[3];
C[44]=+16*S[25]*S[26]*S[27]*S[28]*S[29]*V[1];
C[43]=+V[468]*V[466]*V[464]*V[439]*V[15];
C[42]=+S[1]*(2*S[2]-S[3]);
C[41]=+S[3];
C[40]=+2*S[1]-S[2]+S[3];
C[39]=+16*S[30]*S[31]*S[32]*S[33]*S[34];
S[35]=V[464]*V[464];
C[38]=+S[15]*S[35];
S[36]=V[2]*V[2];
C[37]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-
 S[3]-S[36]))+V[19]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+
 S[1]*(V[19]*(4*(V[214]+V[213]))))+S[3]*(V[213]*(S[3]-2*S[2]+S[36])+V[214]*(
 2*S[2]-S[3]+S[36]))+S[2]*(S[36]*(V[214]-3*V[213])+S[2]*(V[213]-V[214])))+
 S[36]*(V[19]*(S[3]*(V[213]-V[214])+S[2]*(V[214]-V[213]))));
C[36]=+V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-S[3]-S[36]))+
 V[19]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+S[1]*(V[19]*(8*(
 V[214]+V[213]))))+S[36]*(S[3]*(2*(V[213]-V[214])));
C[35]=+V[15]*(V[19]*(4*(V[214]+V[213])));
C[34]=+V[552]*V[544]*V[458]*V[126]*S[22];
C[33]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-
 S[3]-S[36]))+V[18]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+
 S[1]*(V[18]*(4*(V[214]+V[213]))))+S[3]*(V[213]*(S[3]-2*S[2]+S[36])+V[214]*(
 2*S[2]-S[3]+S[36]))+S[2]*(S[36]*(V[214]-3*V[213])+S[2]*(V[213]-V[214])))+
 S[36]*(V[18]*(S[3]*(V[213]-V[214])+S[2]*(V[214]-V[213]))));
C[32]=+V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-S[3]-S[36]))+
 V[18]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+S[1]*(V[18]*(8*(
 V[214]+V[213]))))+S[36]*(S[3]*(2*(V[213]-V[214])));
C[31]=+V[15]*(V[18]*(4*(V[214]+V[213])));
C[30]=+V[531]*V[523]*V[458]*V[126]*S[22];
C[29]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-
 S[3]-S[36]))+V[17]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+
 S[1]*(V[17]*(4*(V[214]+V[213]))))+S[3]*(V[213]*(S[3]-2*S[2]+S[36])+V[214]*(
 2*S[2]-S[3]+S[36]))+S[2]*(S[36]*(V[214]-3*V[213])+S[2]*(V[213]-V[214])))+
 S[36]*(V[17]*(S[3]*(V[213]-V[214])+S[2]*(V[214]-V[213]))));
C[28]=+V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-S[3]-S[36]))+
 V[17]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+S[1]*(V[17]*(8*(
 V[214]+V[213]))))+S[36]*(S[3]*(2*(V[213]-V[214])));
C[27]=+V[15]*(V[17]*(4*(V[214]+V[213])));
C[26]=+V[510]*V[502]*V[458]*V[126]*S[22];
C[25]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-
 S[3]-S[36]))+V[16]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+
 S[1]*(V[16]*(4*(V[214]+V[213]))))+S[3]*(V[213]*(S[3]-2*S[2]+S[36])+V[214]*(
 2*S[2]-S[3]+S[36]))+S[2]*(S[36]*(V[214]-3*V[213])+S[2]*(V[213]-V[214])))+
 S[36]*(V[16]*(S[3]*(V[213]-V[214])+S[2]*(V[214]-V[213]))));
C[24]=+V[15]*(2*(V[15]*(V[213]*(S[2]-S[3]+S[36])+V[214]*(S[2]-S[3]-S[36]))+
 V[16]*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36])))+S[1]*(V[16]*(8*(
 V[214]+V[213]))))+S[36]*(S[3]*(2*(V[213]-V[214])));
C[23]=+V[15]*(V[16]*(4*(V[214]+V[213])));
C[22]=+V[489]*V[481]*V[458]*V[126]*S[22];
S[37]=V[118]*V[118];
C[21]=+8*V[122]*V[121]*S[27]*S[37]*V[7]*V[3]*S[36];
C[20]=+V[468]*V[458]*V[449]*V[126]*V[15]*V[1];
C[19]=+S[1]*(2*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36]))+S[1]*(4*(
 V[214]+V[213])))+S[36]*(S[3]*(V[213]-V[214])+S[2]*(V[214]-V[213]));
C[18]=+2*(V[213]*(S[2]-S[3]-S[36])+V[214]*(S[3]-S[2]-S[36]))+S[1]*(8*(
 V[214]+V[213]));
C[17]=+4*(V[214]+V[213]);
C[16]=+16*V[122]*V[121]*S[27]*S[37]*V[7]*V[3]*S[36];
C[15]=+V[466]*V[458]*V[439]*V[126]*V[15]*V[1];
S[38]=V[15]*V[15]*V[15]*V[15];
S[39]=V[11]*V[11]*V[11]*V[11];
C[14]=+S[1]*(V[213]*(S[3]*(2*(S[36]-S[2])+S[3]-4*S[1])+S[2]*(4*(S[1]-S[36])+
 S[2])+4*S[38])+V[214]*(S[2]*(2*(S[3]+S[36])-S[2])+S[1]*(4*(S[1]-S[36]))-
 S[39]));
C[13]=+S[1]*(V[213]*(4*(S[2]-S[3])+8*S[1])+V[214]*(8*S[1]-4*S[36]))+S[36]*(
 S[3]*(2*(V[213]-V[214])));
C[12]=+S[1]*(4*(V[214]+V[213]));
C[11]=+S[36]*(2*(S[3]*(V[214]-V[213])+S[2]*(V[213]-V[214]))+S[1]*(4*(V[214]-
 V[213])));
C[10]=+S[36]*(4*(V[214]-V[213]));
C[9]=+16*S[17]*S[18]*S[32]*S[37]*S[20]*S[21]*S[36];
C[8]=+V[468]*V[464]*V[458]*V[126]*S[22];
S[40]=V[13]*V[13]*V[13]*V[13];
S[41]=V[214]*V[214];
C[7]=+S[1]*(S[1]*(V[213]*(V[213]*(4*(S[1]*(S[1]+S[2]-S[3]-S[36])+S[36]*(
 S[3]-S[2]))+S[3]*(S[3]-2*S[2])+S[40])+V[214]*(S[36]*(4*S[36]-8*S[1])+S[3]*(
 4*S[2]-2*S[3])+8*S[38]-2*S[40]))+S[41]*(4*(S[1]*(S[1]-S[2]+S[3]-S[36])+
 S[36]*(S[2]-S[3]))+S[3]*(S[3]-2*S[2])+S[40]))+S[36]*(V[213]*(S[2]*(2*(
 S[36]*(V[213]-V[214])+V[214]*S[2]+V[213]*S[3])-4*V[214]*S[3]-V[213]*S[2])+
 S[3]*(S[3]*(2*V[214]-V[213])-V[213]*S[36]))+S[41]*(S[3]*(2*S[2]-S[3]+
 S[36])-S[40])));
S[42]=V[2]*V[2]*V[2]*V[2];
C[6]=+S[1]*(V[213]*(V[213]*(S[3]*(S[3]-8*S[1]-2*S[2]+4*S[36])+S[2]*(8*S[1]+
 S[2]-4*S[36])+S[1]*(12*S[1]-8*S[36]))+V[214]*(S[36]*(4*S[36]-16*S[1])+S[3]*
 (4*S[2]-2*S[3])+24*S[38]-2*S[40]))+S[41]*(S[3]*(8*S[1]-2*S[2]+S[3]-4*
 S[36])+S[2]*(S[2]-8*S[1]+4*S[36])+S[1]*(12*S[1]-8*S[36])))+S[42]*(S[3]*(
 V[213]*(2*V[214]-V[213])-S[41]));
C[5]=+S[1]*(V[213]*(V[213]*(4*(S[2]-S[3]-S[36])+12*S[1])+V[214]*(24*S[1]-8*
 S[36]))+S[41]*(4*(S[3]-S[2]-S[36])+12*S[1]));
C[4]=+S[1]*(V[213]*(8*V[214]+4*V[213])+4*S[41]);
C[3]=+S[42]*(V[213]*(V[213]*(2*S[1]-S[2]+S[3])+V[214]*(2*(S[2]-S[3])-4*
 S[1]))+S[41]*(2*S[1]-S[2]+S[3]));
C[2]=+S[42]*(V[213]*(2*V[213]-4*V[214])+2*S[41]);
S[43]=V[118]*V[118]*V[118]*V[118];
C[1]=+16*S[32]*S[43]*S[42];
S[44]=V[458]*V[458];
S[45]=V[126]*V[126];
S[46]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[44]*S[45]*S[46];
}
