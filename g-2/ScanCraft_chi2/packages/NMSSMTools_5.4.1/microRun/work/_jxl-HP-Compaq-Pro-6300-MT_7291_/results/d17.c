/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C17(REAL *);
extern DNN S17_omg_p25p25_u;
REAL S17_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[11],width[11];
char * Qtxt[11];
REAL Q0[11]; COMPLEX Q1[11]; REAL Q2[11];
 if(momenta)
 {width[6]=V[556]; mass[6]=V[11];  Qtxt[6]="\1\2";
width[5]=V[555]; mass[5]=V[10];  Qtxt[5]="\1\2";
width[4]=V[554]; mass[4]=V[9];  Qtxt[4]="\1\2";
width[10]=0.; mass[10]=V[39];  Qtxt[10]="\1\3";
width[9]=0.; mass[9]=V[39];  Qtxt[9]="\1\4";
width[8]=0.; mass[8]=V[38];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[38];  Qtxt[7]="\1\4";
width[3]=V[558]; mass[3]=V[13];  Qtxt[3]="\1\2";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(10,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[117];                                                   
if(!momenta){ C17(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[0]*(C[5]+C[4]*DP[0]-C[2]*DP[1])+DP[1]*(C[2]*DP[1]-C[3])+C[6];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[7];
D=+C[8];
R=+DP[0]*(C[10]+C[9]*DP[0])+C[11];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[12];
D=+C[8];
R=+DP[0]*(C[10]+C[9]*DP[0])+C[11];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[14];
R=+DP[0]*(C[18]*DP[0]-C[19]-C[16]*DP[1])+DP[1]*(C[15]*DP[1]-C[17])-C[20];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[14];
R=+DP[1]*(C[15]*DP[1]-C[22]-C[21]*DP[0])-C[24]-C[23]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[14];
R=+DP[0]*(C[28]*DP[0]-C[29]-C[26]*DP[1])+DP[1]*(C[25]*DP[1]-C[27])-C[30];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[14];
R=+DP[1]*(C[25]*DP[1]-C[32]-C[31]*DP[0])-C[34]-C[33]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[35];
D=+C[36];
R=+DP[0]*(DP[0]-C[37])-C[38];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[39];
D=+C[40];
R=+DP[0]*(DP[0]-C[37])-C[38];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[41];
D=+C[40];
R=+DP[0]*(DP[0]-C[37])-C[38];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[42];
D=+C[43];
R=+DP[0]*(C[44]*(DP[1]-DP[0])-C[46])+C[45]*DP[1]-C[47];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[42];
D=+C[43];
R=+DP[0]*(C[44]*DP[1]-C[48])+C[45]*DP[1]-C[49];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[42];
D=+C[43];
R=+DP[0]*(C[50]*(DP[1]-DP[0])-C[52])+C[51]*DP[1]-C[53];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[42];
D=+C[43];
R=+DP[0]*(C[50]*DP[1]-C[54])+C[51]*DP[1]-C[55];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[56];
D=+C[36];
R=+DP[0]*(DP[0]-C[37])-C[38];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[57];
D=+C[40];
R=+DP[0]*(DP[0]-C[37])-C[38];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[58];
D=+C[43];
R=+DP[0]*(C[44]*(DP[1]-DP[0])-C[46])+C[45]*DP[1]-C[47];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[58];
D=+C[43];
R=+DP[0]*(C[44]*DP[1]-C[48])+C[45]*DP[1]-C[49];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[58];
D=+C[43];
R=+DP[0]*(C[50]*(DP[1]-DP[0])-C[52])+C[51]*DP[1]-C[53];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[58];
D=+C[43];
R=+DP[0]*(C[50]*DP[1]-C[54])+C[51]*DP[1]-C[55];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[59];
D=+C[36];
R=+DP[0]*(DP[0]-C[37])-C[38];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[60];
D=+C[43];
R=+DP[0]*(C[44]*(DP[1]-DP[0])-C[46])+C[45]*DP[1]-C[47];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[60];
D=+C[43];
R=+DP[0]*(C[44]*DP[1]-C[48])+C[45]*DP[1]-C[49];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[60];
D=+C[43];
R=+DP[0]*(C[50]*(DP[1]-DP[0])-C[52])+C[51]*DP[1]-C[53];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[60];
D=+C[43];
R=+DP[0]*(C[50]*DP[1]-C[54])+C[51]*DP[1]-C[55];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[61];
D=+C[62];
R=+DP[0]*(C[63]+DP[0])+C[64];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[65];
D=+C[66];
R=+DP[0]*(C[63]+DP[0])+C[64];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[67];
D=+C[68];
R=+DP[0]*(C[44]*(DP[1]-DP[0])-C[70])+C[69]*DP[1]-C[71];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[67];
D=+C[68];
R=+DP[0]*(C[72]+C[44]*DP[1])+C[73]+C[69]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[67];
D=+C[68];
R=+DP[0]*(C[50]*(DP[1]-DP[0])-C[75])+C[74]*DP[1]-C[76];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[67];
D=+C[68];
R=+DP[0]*(C[77]+C[50]*DP[1])+C[78]+C[74]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[79];
D=+C[62];
R=+DP[0]*(C[63]+DP[0])+C[64];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[80];
D=+C[68];
R=+DP[0]*(C[44]*(DP[1]-DP[0])-C[70])+C[69]*DP[1]-C[71];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[68];
R=+DP[0]*(C[72]+C[44]*DP[1])+C[73]+C[69]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[80];
D=+C[68];
R=+DP[0]*(C[50]*(DP[1]-DP[0])-C[75])+C[74]*DP[1]-C[76];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[68];
R=+DP[0]*(C[77]+C[50]*DP[1])+C[78]+C[74]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[82];
R=+DP[0]*(C[85]+C[83]*DP[0]-C[84]*DP[1])+DP[1]*(C[83]*DP[1]-C[85])+C[86];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[82];
R=+DP[1]*(C[87]*(DP[1]-DP[0])-C[88])+C[90]+C[89]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[91];
R=+DP[0]*(C[94]+C[92]*DP[0]-C[93]*DP[1])+DP[1]*(C[92]*DP[1]-C[94])+C[95];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[82];
R=+DP[1]*(C[96]*(DP[1]-DP[0])+C[97])+C[99]+C[98]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[82];
R=+DP[1]*(C[100]+C[83]*DP[1])+C[101];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[82];
R=+DP[1]*(C[96]*(DP[1]-DP[0])-C[102])+C[104]+C[103]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[91];
R=+DP[1]*(C[105]+C[92]*DP[1])+C[106];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[82];
R=+DP[0]*(C[109]+C[107]*DP[0]-C[108]*DP[1])+DP[1]*(C[107]*DP[1]-C[109])+
 C[110];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[82];
R=+DP[1]*(C[111]*(DP[1]-DP[0])-C[112])+C[114]+C[113]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[82];
R=+DP[1]*(C[115]+C[107]*DP[1])+C[116];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C17(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[41];                                                           
S[0]=V[218]*V[218];
S[1]=V[217]*V[217];
S[2]=V[15]*V[15];
S[3]=V[4]*V[4];
C[116]=+4*S[0]*S[1]*S[2]*S[3];
C[115]=+V[4]*(V[15]*(V[217]*(V[218]*(4*(S[0]+S[1])))));
S[4]=V[218]*V[218]*V[218];
S[5]=V[218]*V[218]*V[218]*V[218];
C[114]=+S[2]*(V[217]*(V[217]*(V[4]*(V[4]*(2*S[0]-S[1])+2*V[218]*V[217]*
 V[15])+S[2]*(2*S[0]+S[1]))+2*S[4]*V[15]*V[4])+S[5]*(S[2]-S[3]));
C[113]=+V[15]*(V[217]*(V[217]*(V[15]*(2*S[0]+S[1])+2*V[218]*V[217]*V[4])+2*
 S[4]*V[4])+S[5]*V[15])+4*S[0]*S[1]*S[3];
C[112]=+4*S[0]*S[1]*S[2];
C[111]=+4*S[0]*S[1];
C[110]=+S[2]*(V[15]*(V[217]*(V[217]*(V[15]*(2*S[0]+S[1])+4*V[218]*V[217]*
 V[4])+4*S[4]*V[4])+S[5]*V[15])+4*S[0]*S[1]*S[3]);
C[109]=+V[15]*(V[217]*(V[217]*(V[15]*(4*S[0]+2*S[1])+4*V[218]*V[217]*V[4])+
 4*S[4]*V[4])+2*S[5]*V[15]);
C[108]=+S[1]*(4*S[0]+2*S[1])+2*S[5];
C[107]=+S[1]*(2*S[0]+S[1])+S[5];
S[6]=V[216]*V[216];
C[106]=+S[3]*(S[2]*(V[215]*(V[218]*(V[218]*V[215]+2*V[217]*V[216]))+S[1]*
 S[6]));
C[105]=+V[4]*(V[15]*(2*(V[215]*(V[216]*(S[0]+S[1])+V[218]*V[217]*V[215])+
 V[218]*V[217]*S[6])));
C[104]=+S[2]*(V[215]*(V[217]*(V[4]*(V[4]*(2*V[218]*V[216]-V[217]*V[215])+2*
 V[217]*V[216]*V[15])+S[2]*(2*V[218]*V[216]+V[217]*V[215]))+2*S[0]*V[216]*
 V[15]*V[4])+S[6]*(S[0]*(S[2]-S[3])));
C[103]=+V[215]*(V[4]*(V[216]*(2*(V[15]*(S[0]+S[1])+V[218]*V[217]*V[4]))+
 S[0]*V[215]*V[4])+S[2]*(V[217]*(2*V[218]*V[216]+V[217]*V[215])))+S[6]*(
 S[0]*S[2]+S[1]*S[3]);
C[102]=+V[15]*(V[4]*(2*(V[215]*(V[216]*(S[0]+S[1])-V[218]*V[217]*V[215])-
 V[218]*V[217]*S[6]))+4*V[218]*V[217]*V[216]*V[215]*V[15]);
S[7]=V[215]*V[215];
C[101]=+4*S[6]*S[7]*S[2]*S[3];
C[100]=+V[4]*(V[15]*(V[215]*(V[216]*(4*(S[6]+S[7])))));
C[99]=+S[2]*(V[217]*(V[215]*(V[4]*(V[4]*(2*V[218]*V[216]-V[217]*V[215])+2*
 V[218]*V[215]*V[15])+S[2]*(2*V[218]*V[216]+V[217]*V[215]))+2*V[218]*S[6]*
 V[15]*V[4])+S[6]*(S[0]*(S[2]-S[3])));
C[98]=+V[217]*(V[4]*(V[216]*(V[4]*(2*V[218]*V[215]+V[217]*V[216])+2*V[218]*
 V[216]*V[15])+2*V[218]*S[7]*V[15])+S[2]*(V[215]*(2*V[218]*V[216]+V[217]*
 V[215])))+S[0]*(S[6]*S[2]+S[7]*S[3]);
C[97]=+V[15]*(V[4]*(2*(V[215]*(V[216]*(S[0]+S[1])-V[218]*V[217]*V[215])-
 V[218]*V[217]*S[6]))-4*V[218]*V[217]*V[216]*V[215]*V[15]);
C[96]=+4*V[218]*V[217]*V[216]*V[215];
C[95]=+S[2]*(V[4]*(V[215]*(V[218]*(2*(V[15]*(V[218]*V[216]+V[217]*V[215])+
 V[217]*V[216]*V[4])+V[218]*V[215]*V[4])+2*S[1]*V[216]*V[15])+S[6]*(V[217]*(
 2*V[218]*V[15]+V[217]*V[4])))+S[2]*(V[215]*(V[217]*(2*V[218]*V[216]+V[217]*
 V[215]))+S[0]*S[6]));
C[94]=+V[15]*(2*(V[4]*(V[215]*(V[216]*(S[0]+S[1])+V[218]*V[217]*V[215])+
 V[218]*V[217]*S[6])+V[15]*(S[0]*S[6]+S[1]*S[7]))+4*V[218]*V[217]*V[216]*
 V[215]*V[15]);
C[93]=+V[215]*(V[217]*(4*V[218]*V[216]+2*V[217]*V[215]))+2*S[0]*S[6];
C[92]=+V[215]*(V[217]*(2*V[218]*V[216]+V[217]*V[215]))+S[0]*S[6];
S[8]=V[122]*V[122]*V[122]*V[122];
S[9]=V[119]*V[119]*V[119]*V[119];
S[10]=V[118]*V[118]*V[118]*V[118];
S[11]=V[3]*V[3]*V[3]*V[3];
C[91]=+2*S[8]*S[9]*S[10]*S[11];
S[12]=V[216]*V[216]*V[216];
S[13]=V[216]*V[216]*V[216]*V[216];
C[90]=+S[2]*(V[215]*(V[215]*(V[4]*(V[4]*(2*S[6]-S[7])+2*V[216]*V[215]*
 V[15])+S[2]*(2*S[6]+S[7]))+2*S[12]*V[15]*V[4])+S[13]*(S[2]-S[3]));
C[89]=+V[15]*(V[215]*(V[215]*(V[15]*(2*S[6]+S[7])+2*V[216]*V[215]*V[4])+2*
 S[12]*V[4])+S[13]*V[15])+4*S[6]*S[7]*S[3];
C[88]=+4*S[6]*S[7]*S[2];
C[87]=+4*S[6]*S[7];
C[86]=+S[2]*(V[15]*(V[215]*(V[215]*(V[15]*(2*S[6]+S[7])+4*V[216]*V[215]*
 V[4])+4*S[12]*V[4])+S[13]*V[15])+4*S[6]*S[7]*S[3]);
C[85]=+V[15]*(V[215]*(V[215]*(V[15]*(4*S[6]+2*S[7])+4*V[216]*V[215]*V[4])+4*
 S[12]*V[4])+2*S[13]*V[15]);
C[84]=+S[7]*(4*S[6]+2*S[7])+2*S[13];
C[83]=+S[7]*(2*S[6]+S[7])+S[13];
C[82]=+4*S[8]*S[9]*S[10]*S[11];
S[14]=V[1]*V[1]*V[1]*V[1];
C[81]=+S[14];
S[15]=V[1]*V[1]*V[1];
C[80]=+V[468]*V[126]*V[6]*V[4]*S[15];
S[16]=V[468]*V[468];
S[17]=V[126]*V[126];
S[18]=V[6]*V[6];
S[19]=V[1]*V[1];
C[79]=+S[16]*S[17]*S[18]*S[3]*S[19];
S[20]=V[15]*V[15]*V[15];
C[78]=+S[20]*(V[4]*(S[0]+S[1]));
C[77]=+V[4]*(V[15]*(S[0]+S[1]));
C[76]=+S[20]*(V[4]*(S[0]+S[1])+2*V[218]*V[217]*V[15]);
C[75]=+V[15]*(V[4]*(S[0]+S[1])+4*V[218]*V[217]*V[15]);
C[74]=+2*V[218]*V[217]*S[2];
C[73]=+S[20]*(V[4]*(S[6]+S[7]));
C[72]=+V[4]*(V[15]*(S[6]+S[7]));
C[71]=+S[20]*(V[4]*(S[6]+S[7])+2*V[216]*V[215]*V[15]);
C[70]=+V[15]*(V[4]*(S[6]+S[7])+4*V[216]*V[215]*V[15]);
C[69]=+2*V[216]*V[215]*S[2];
S[21]=V[122]*V[122]*V[122];
S[22]=V[118]*V[118];
C[68]=+4*S[21]*V[121]*S[9]*S[22]*V[7]*S[11];
C[67]=+V[466]*V[125]*V[6]*V[4]*S[15];
S[23]=V[122]*V[122];
S[24]=V[121]*V[121];
S[25]=V[7]*V[7];
C[66]=+2*S[23]*S[24]*S[9]*S[25]*S[11];
C[65]=+V[468]*V[466]*V[126]*V[125]*S[18]*S[3]*S[19];
S[26]=V[15]*V[15]*V[15]*V[15];
C[64]=+S[26];
C[63]=+2*S[2];
C[62]=+4*S[23]*S[24]*S[9]*S[25]*S[11];
S[27]=V[466]*V[466];
S[28]=V[125]*V[125];
C[61]=+S[27]*S[28]*S[18]*S[3]*S[19];
C[60]=+V[464]*V[94]*V[4]*S[15];
S[29]=V[464]*V[464];
S[30]=V[94]*V[94];
C[59]=+S[29]*S[30]*S[3]*S[19];
C[58]=+V[462]*V[91]*V[4]*S[15];
C[57]=+V[464]*V[462]*V[94]*V[91]*S[3]*S[19];
S[31]=V[462]*V[462];
S[32]=V[91]*V[91];
C[56]=+S[31]*S[32]*S[3]*S[19];
C[55]=+S[2]*(V[4]*(V[15]*(S[0]+S[1])-2*V[218]*V[217]*V[4])+2*V[218]*V[217]*
 S[2]);
C[54]=+V[4]*(V[15]*(S[0]+S[1])+2*V[218]*V[217]*V[4])+2*V[218]*V[217]*S[2];
C[53]=+S[2]*(V[4]*(V[15]*(S[0]+S[1])+2*V[218]*V[217]*V[4]));
C[52]=+V[4]*(V[15]*(S[0]+S[1])-2*V[218]*V[217]*V[4])+2*V[218]*V[217]*S[2];
C[51]=+V[15]*(2*(V[4]*(S[0]+S[1])+V[218]*V[217]*V[15]));
C[50]=+2*V[218]*V[217];
C[49]=+S[2]*(V[4]*(V[15]*(S[6]+S[7])-2*V[216]*V[215]*V[4])+2*V[216]*V[215]*
 S[2]);
C[48]=+V[4]*(V[15]*(S[6]+S[7])+2*V[216]*V[215]*V[4])+2*V[216]*V[215]*S[2];
C[47]=+S[2]*(V[4]*(V[15]*(S[6]+S[7])+2*V[216]*V[215]*V[4]));
C[46]=+V[4]*(V[15]*(S[6]+S[7])-2*V[216]*V[215]*V[4])+2*V[216]*V[215]*S[2];
C[45]=+V[15]*(2*(V[4]*(S[6]+S[7])+V[216]*V[215]*V[15]));
C[44]=+2*V[216]*V[215];
C[43]=+4*S[8]*V[121]*S[9]*S[22]*V[7]*S[11];
C[42]=+V[460]*V[88]*V[4]*S[15];
C[41]=+V[464]*V[460]*V[94]*V[88]*S[3]*S[19];
C[40]=+2*S[8]*S[24]*S[9]*S[25]*S[11];
C[39]=+V[462]*V[460]*V[91]*V[88]*S[3]*S[19];
C[38]=+S[2]*(S[2]-2*S[3]);
C[37]=+2*S[3];
C[36]=+4*S[8]*S[24]*S[9]*S[25]*S[11];
S[33]=V[460]*V[460];
S[34]=V[88]*V[88];
C[35]=+S[33]*S[34]*S[3]*S[19];
S[35]=V[119]*V[119];
S[36]=V[2]*V[2];
C[34]=+S[2]*(V[4]*(V[4]*(S[36]*(S[35]*(-2*S[0]-4*S[1])+V[120]*(-2*S[0]-
 S[1]))+S[2]*(S[35]*(4*(S[0]+S[1]))+V[120]*(2*(S[0]+S[1]))))+S[36]*(V[15]*(
 V[217]*(V[218]*(2*V[120]+4*S[35])))))+S[36]*(S[2]*(2*S[0]*S[35]+S[1]*
 V[120])));
C[33]=+V[4]*(V[4]*(S[2]*(S[35]*(4*(S[0]+S[1]))+V[120]*(2*(S[0]+S[1])))+
 S[36]*(S[0]*V[120]+2*S[1]*S[35]))+S[36]*(V[15]*(V[217]*(V[218]*(2*V[120]+4*
 S[35])))))+S[36]*(S[2]*(2*S[0]*S[35]+S[1]*V[120]));
C[32]=+V[4]*(V[15]*(V[217]*(V[218]*(S[36]*(-6*V[120]-12*S[35])+S[2]*(4*
 V[120]+8*S[35])))));
C[31]=+V[4]*(V[15]*(V[217]*(V[218]*(4*V[120]+8*S[35]))));
C[30]=+S[2]*(V[4]*(V[4]*(S[36]*(S[35]*(-2*S[0]-4*S[1])+V[120]*(-2*S[0]-
 S[1]))+S[2]*(S[35]*(4*(S[0]+S[1]))+V[120]*(2*(S[0]+S[1]))))+V[15]*(V[217]*(
 V[218]*(S[36]*(-4*V[120]-8*S[35])+S[2]*(4*V[120]+8*S[35])))))+S[36]*(S[2]*
 (-2*S[0]*S[35]-S[1]*V[120])));
C[29]=+V[4]*(V[15]*(V[15]*(V[4]*(S[35]*(4*(S[0]+S[1]))+V[120]*(2*(S[0]+
 S[1])))+V[15]*(V[217]*(V[218]*(8*V[120]+16*S[35]))))+S[36]*(V[217]*(V[218]*
 (-4*V[120]-8*S[35]))))+S[36]*(V[4]*(S[0]*V[120]+2*S[1]*S[35])))+S[36]*(
 S[2]*(-6*S[0]*S[35]-3*S[1]*V[120]));
C[28]=+V[217]*(V[4]*(V[15]*(V[218]*(-4*V[120]-8*S[35])))+2*V[217]*V[120]*
 S[36])+4*S[0]*S[35]*S[36];
C[27]=+V[15]*(V[217]*(V[4]*(V[218]*(S[36]*(6*V[120]+12*S[35])+S[2]*(-4*
 V[120]-8*S[35])))+4*V[217]*V[120]*V[15]*S[36])+8*S[0]*S[35]*V[15]*S[36]);
C[26]=+V[217]*(V[4]*(V[15]*(V[218]*(-4*V[120]-8*S[35])))+4*V[217]*V[120]*
 S[36])+8*S[0]*S[35]*S[36];
C[25]=+S[36]*(4*S[0]*S[35]+2*S[1]*V[120]);
C[24]=+S[2]*(V[4]*(V[4]*(S[36]*(S[35]*(-2*S[6]-4*S[7])+V[120]*(-2*S[6]-
 S[7]))+S[2]*(S[35]*(4*(S[6]+S[7]))+V[120]*(2*(S[6]+S[7]))))+S[36]*(V[15]*(
 V[215]*(V[216]*(2*V[120]+4*S[35])))))+S[36]*(S[2]*(2*S[6]*S[35]+S[7]*
 V[120])));
C[23]=+V[4]*(V[4]*(S[2]*(S[35]*(4*(S[6]+S[7]))+V[120]*(2*(S[6]+S[7])))+
 S[36]*(S[6]*V[120]+2*S[7]*S[35]))+S[36]*(V[15]*(V[215]*(V[216]*(2*V[120]+4*
 S[35])))))+S[36]*(S[2]*(2*S[6]*S[35]+S[7]*V[120]));
C[22]=+V[4]*(V[15]*(V[215]*(V[216]*(S[36]*(-6*V[120]-12*S[35])+S[2]*(4*
 V[120]+8*S[35])))));
C[21]=+V[4]*(V[15]*(V[215]*(V[216]*(4*V[120]+8*S[35]))));
C[20]=+S[2]*(V[4]*(V[4]*(S[36]*(S[35]*(-2*S[6]-4*S[7])+V[120]*(-2*S[6]-
 S[7]))+S[2]*(S[35]*(4*(S[6]+S[7]))+V[120]*(2*(S[6]+S[7]))))+V[15]*(V[215]*(
 V[216]*(S[36]*(-4*V[120]-8*S[35])+S[2]*(4*V[120]+8*S[35])))))+S[36]*(S[2]*
 (-2*S[6]*S[35]-S[7]*V[120])));
C[19]=+V[4]*(V[15]*(V[15]*(V[4]*(S[35]*(4*(S[6]+S[7]))+V[120]*(2*(S[6]+
 S[7])))+V[15]*(V[215]*(V[216]*(8*V[120]+16*S[35]))))+S[36]*(V[215]*(V[216]*
 (-4*V[120]-8*S[35]))))+S[36]*(V[4]*(S[6]*V[120]+2*S[7]*S[35])))+S[36]*(
 S[2]*(-6*S[6]*S[35]-3*S[7]*V[120]));
C[18]=+V[215]*(V[4]*(V[15]*(V[216]*(-4*V[120]-8*S[35])))+2*V[215]*V[120]*
 S[36])+4*S[6]*S[35]*S[36];
C[17]=+V[15]*(V[215]*(V[4]*(V[216]*(S[36]*(6*V[120]+12*S[35])+S[2]*(-4*
 V[120]-8*S[35])))+4*V[215]*V[120]*V[15]*S[36])+8*S[6]*S[35]*V[15]*S[36]);
C[16]=+V[215]*(V[4]*(V[15]*(V[216]*(-4*V[120]-8*S[35])))+4*V[215]*V[120]*
 S[36])+8*S[6]*S[35]*S[36];
C[15]=+S[36]*(4*S[6]*S[35]+2*S[7]*V[120]);
S[37]=V[3]*V[3];
C[14]=+4*S[23]*S[9]*S[10]*S[37]*S[36];
C[13]=+V[458]*S[14];
C[12]=+V[468]*V[458]*V[126]*V[15]*V[6]*S[3]*S[15];
C[11]=+S[2]*(S[36]*(-V[120]-2*S[35])+S[2]*(2*V[120]+4*S[35]));
C[10]=+S[36]*(-V[120]-2*S[35])+S[2]*(4*V[120]+8*S[35]);
C[9]=+2*V[120]+4*S[35];
C[8]=+2*V[122]*V[121]*S[9]*S[22]*V[7]*S[37]*S[36];
C[7]=+V[466]*V[458]*V[125]*V[15]*V[6]*S[3]*S[15];
S[38]=V[120]*V[120];
C[6]=+S[3]*(S[2]*(S[36]*(S[35]*(S[36]*(8*V[120]+4*S[35])+S[2]*(16*(-V[120]-
 S[35])))+S[38]*(S[36]-4*S[2]))+S[26]*(S[35]*(16*(V[120]+S[35]))+4*S[38])));
S[39]=V[2]*V[2]*V[2]*V[2];
C[5]=+S[2]*(S[3]*(S[35]*(S[36]*(16*(-V[120]-S[35]))+S[2]*(32*(V[120]+
 S[35])))+S[38]*(8*S[2]-4*S[36]))+S[39]*(S[38]+4*S[9]))-4*V[120]*S[35]*S[3]*
 S[39];
C[4]=+S[3]*(S[2]*(S[35]*(16*(V[120]+S[35]))+4*S[38]))+S[39]*(S[38]+4*S[9]);
C[3]=+S[39]*(S[2]*(2*S[38]+8*S[9]));
C[2]=+S[39]*(2*S[38]+8*S[9]);
C[1]=+4*S[9]*S[10]*S[39];
S[40]=V[458]*V[458];
C[0]=+S[40]*S[14];
}
