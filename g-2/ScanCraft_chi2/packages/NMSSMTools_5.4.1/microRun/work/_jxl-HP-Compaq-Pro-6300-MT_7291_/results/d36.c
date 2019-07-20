/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C36(REAL *);
extern DNN S36_omg_p25p25_u;
REAL S36_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
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
width[4]=0.; mass[4]=V[15];  Qtxt[4]="\1\3";
width[3]=V[556]; mass[3]=V[11];  Qtxt[3]="\1\2";
width[2]=V[555]; mass[2]=V[10];  Qtxt[2]="\1\2";
width[1]=V[554]; mass[1]=V[9];  Qtxt[1]="\1\2";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[190];                                                   
if(!momenta){ C36(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[3];
D=+C[4];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[5];
D=+C[4];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[6];
D=+C[7];
R=+4*DP[1]-C[8]-2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[7];
R=+4*DP[1]-C[8]-2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[9];
D=+C[7];
R=+C[12]-C[11]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[9];
D=+C[7];
R=+C[13]*DP[0]-C[14]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[15];
D=+C[7];
R=+C[17]-C[16]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[15];
D=+C[7];
R=+C[18]*DP[0]-C[19]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[7];
R=+C[22]-C[21]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[20];
D=+C[7];
R=+C[23]*DP[0]-C[24]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[25];
D=+C[7];
R=+C[27]-C[26]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[25];
D=+C[7];
R=+C[28]*DP[0]-C[29]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[30];
D=+C[1];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[31];
D=+C[4];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[32];
D=+C[7];
R=+4*DP[1]-C[8]-2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[32];
D=+C[7];
R=+4*DP[1]-C[8]-2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[33];
D=+C[7];
R=+C[12]-C[11]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[33];
D=+C[7];
R=+C[13]*DP[0]-C[14]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[34];
D=+C[7];
R=+C[17]-C[16]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[34];
D=+C[7];
R=+C[18]*DP[0]-C[19]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[7];
R=+C[22]-C[21]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[35];
D=+C[7];
R=+C[23]*DP[0]-C[24]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[36];
D=+C[7];
R=+C[27]-C[26]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[36];
D=+C[7];
R=+C[28]*DP[0]-C[29]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[37];
D=+C[1];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[7];
R=+4*DP[1]-C[8]-2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[38];
D=+C[7];
R=+4*DP[1]-C[8]-2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[39];
D=+C[7];
R=+C[12]-C[11]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[39];
D=+C[7];
R=+C[13]*DP[0]-C[14]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[40];
D=+C[7];
R=+C[17]-C[16]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[40];
D=+C[7];
R=+C[18]*DP[0]-C[19]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[41];
D=+C[7];
R=+C[22]-C[21]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[41];
D=+C[7];
R=+C[23]*DP[0]-C[24]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[42];
D=+C[7];
R=+C[27]-C[26]*DP[0]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[42];
D=+C[7];
R=+C[28]*DP[0]-C[29]+C[10]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[46]+C[45]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[43];
D=+C[47];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[46]+C[45]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[48];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[49])-C[51]-C[50]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[48];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[52])+C[54]+C[53]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[56])-C[58]-C[57]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[55];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[59])+C[61]+C[60]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[62];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[63])-C[65]-C[64]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[66])+C[68]+C[67]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[69];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[70])-C[72]-C[71]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[69];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[73])+C[75]+C[74]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[46]+C[45]*DP[0];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[48];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[49])-C[51]-C[50]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[48];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[52])+C[54]+C[53]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[55];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[56])-C[58]-C[57]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[59])+C[61]+C[60]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[62];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[63])-C[65]-C[64]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[62];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[66])+C[68]+C[67]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[69];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[70])-C[72]-C[71]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[69];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[73])+C[75]+C[74]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[76];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])+C[77])+C[79]-C[78]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[76];
D=+C[47];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[80]*DP[0]-C[81];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[82];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[83])+C[85]-C[84]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[82];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[86])+C[87]*DP[0]-C[88];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[89];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[90])+C[92]-C[91]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[89];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[93])+C[94]*DP[0]-C[95];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[96];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[97])+C[99]-C[98]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[96];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[100])+C[101]*DP[0]-C[102];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[76];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])-C[103])+C[105]-C[104]*DP[0];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[82];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[106])+C[107]*DP[0]-C[108];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[82];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[109])+C[111]-C[110]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[89];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[112])+C[113]*DP[0]-C[114];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[89];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[115])+C[117]-C[116]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[96];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[118])+C[119]*DP[0]-C[120];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[96];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[121])+C[123]-C[122]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[124];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])+C[125])+C[127]-C[126]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[124];
D=+C[47];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[128]*DP[0]-C[129];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[130];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[131])+C[133]-C[132]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[130];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[134])+C[135]*DP[0]-C[136];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[137];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[138])+C[140]-C[139]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[137];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[141])+C[142]*DP[0]-C[143];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[124];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])-C[144])+C[146]-C[145]*DP[0];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[130];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[147])+C[148]*DP[0]-C[149];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[130];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[150])+C[152]-C[151]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[137];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[153])+C[154]*DP[0]-C[155];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[137];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[156])+C[158]-C[157]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[159];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])+C[160])+C[162]-C[161]*DP[0];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[159];
D=+C[47];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[163]*DP[0]-C[164];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[165];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[166])+C[168]-C[167]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[165];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[169])+C[170]*DP[0]-C[171];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[159];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])-C[172])+C[174]-C[173]*DP[0];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[165];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])+C[175])+C[176]*DP[0]-C[177];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[165];
D=+C[44];
R=+DP[1]*(4*(DP[1]-DP[0])-C[178])+C[180]-C[179]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[181];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])+C[182])+C[184]-C[183]*DP[0];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[181];
D=+C[47];
R=+DP[1]*(2*(DP[1]-DP[0])-C[8])+C[185]*DP[0]-C[186];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[181];
D=+C[44];
R=+DP[1]*(2*(DP[1]-DP[0])-C[187])+C[189]-C[188]*DP[0];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C36(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[39];                                                           
S[0]=V[19]*V[19];
S[1]=V[15]*V[15];
S[2]=V[13]*V[13];
S[3]=V[12]*V[12];
C[189]=+V[15]*(V[15]*(S[0]-S[1]+S[2])+V[19]*(S[3]-S[2]));
C[188]=+V[15]*(3*V[15]-4*V[19])+S[0]-S[3];
C[187]=+V[15]*(4*V[19]-2*V[15])+S[3]-S[2];
C[186]=+S[1]*(V[15]*(V[15]-2*V[19])+S[0]-S[3]);
C[185]=+V[15]*(V[15]-2*V[19])+S[0]+S[3];
C[184]=+V[15]*(V[15]*(V[15]*(3*V[15]-4*V[19])+S[0]-S[2]+2*S[3])+V[19]*(S[2]-
 S[3]));
C[183]=+S[0]-S[1]-S[3];
C[182]=+V[15]*(4*V[19]-6*V[15])+S[2]-S[3];
S[4]=V[552]*V[552];
S[5]=V[548]*V[548];
C[181]=+S[4]*S[5];
C[180]=+V[15]*(S[2]*(2*V[15]-V[19]-V[18])+S[3]*(V[19]+V[18])+V[15]*(2*(
 V[19]*V[18]-S[1])));
C[179]=+V[15]*(4*(-V[19]-V[18])+6*V[15])+2*(V[19]*V[18]-S[3]);
C[178]=+V[15]*(4*(V[19]+V[18]-V[15]))+2*(S[3]-S[2]);
C[177]=+V[15]*(V[15]*(2*(V[19]*V[18]+S[1]-S[3])-4*V[18]*V[15])+S[3]*(V[19]-
 V[18])+S[2]*(V[18]-V[19]));
C[176]=+2*(V[19]*V[18]+S[1]+S[3])-4*V[19]*V[15];
C[175]=+V[15]*(4*(V[19]-V[18]-V[15]))+2*(S[2]-S[3]);
S[6]=V[18]*V[18];
C[174]=+V[15]*(V[15]*(S[6]-S[1]+S[2])+V[18]*(S[3]-S[2]));
C[173]=+V[15]*(3*V[15]-4*V[18])+S[6]-S[3];
C[172]=+V[15]*(4*V[18]-2*V[15])+S[3]-S[2];
C[171]=+V[15]*(V[15]*(2*(V[19]*V[18]+S[1]-S[3])-4*V[19]*V[15])+S[3]*(V[18]-
 V[19])+S[2]*(V[19]-V[18]));
C[170]=+2*(V[19]*V[18]+S[1]+S[3])-4*V[18]*V[15];
C[169]=+V[15]*(4*(V[19]-V[18]+V[15]))+2*(S[3]-S[2]);
C[168]=+V[15]*(V[15]*(V[15]*(4*(-V[19]-V[18])+6*V[15])+2*(V[19]*V[18]-S[2])+
 4*S[3])+S[3]*(-V[19]-V[18])+S[2]*(V[19]+V[18]));
C[167]=+2*(V[19]*V[18]-S[1]-S[3]);
C[166]=+V[15]*(4*(V[19]+V[18])-12*V[15])+2*(S[2]-S[3]);
C[165]=+V[552]*V[548]*V[531]*V[527];
C[164]=+S[1]*(V[15]*(V[15]-2*V[18])+S[6]-S[3]);
C[163]=+V[15]*(V[15]-2*V[18])+S[6]+S[3];
C[162]=+V[15]*(V[15]*(V[15]*(3*V[15]-4*V[18])+S[6]-S[2]+2*S[3])+V[18]*(S[2]-
 S[3]));
C[161]=+S[6]-S[1]-S[3];
C[160]=+V[15]*(4*V[18]-6*V[15])+S[2]-S[3];
S[7]=V[531]*V[531];
S[8]=V[527]*V[527];
C[159]=+S[7]*S[8];
C[158]=+V[15]*(S[2]*(2*V[15]-V[19]-V[17])+S[3]*(V[19]+V[17])+V[15]*(2*(
 V[19]*V[17]-S[1])));
C[157]=+V[15]*(4*(-V[19]-V[17])+6*V[15])+2*(V[19]*V[17]-S[3]);
C[156]=+V[15]*(4*(V[19]+V[17]-V[15]))+2*(S[3]-S[2]);
C[155]=+V[15]*(V[15]*(2*(V[19]*V[17]+S[1]-S[3])-4*V[17]*V[15])+S[3]*(V[19]-
 V[17])+S[2]*(V[17]-V[19]));
C[154]=+2*(V[19]*V[17]+S[1]+S[3])-4*V[19]*V[15];
C[153]=+V[15]*(4*(V[19]-V[17]-V[15]))+2*(S[2]-S[3]);
C[152]=+V[15]*(S[2]*(2*V[15]-V[18]-V[17])+S[3]*(V[18]+V[17])+V[15]*(2*(
 V[18]*V[17]-S[1])));
C[151]=+V[15]*(4*(-V[18]-V[17])+6*V[15])+2*(V[18]*V[17]-S[3]);
C[150]=+V[15]*(4*(V[18]+V[17]-V[15]))+2*(S[3]-S[2]);
C[149]=+V[15]*(V[15]*(2*(V[18]*V[17]+S[1]-S[3])-4*V[17]*V[15])+S[3]*(V[18]-
 V[17])+S[2]*(V[17]-V[18]));
C[148]=+2*(V[18]*V[17]+S[1]+S[3])-4*V[18]*V[15];
C[147]=+V[15]*(4*(V[18]-V[17]-V[15]))+2*(S[2]-S[3]);
S[9]=V[17]*V[17];
C[146]=+V[15]*(V[15]*(S[9]-S[1]+S[2])+V[17]*(S[3]-S[2]));
C[145]=+V[15]*(3*V[15]-4*V[17])+S[9]-S[3];
C[144]=+V[15]*(4*V[17]-2*V[15])+S[3]-S[2];
C[143]=+V[15]*(V[15]*(2*(V[19]*V[17]+S[1]-S[3])-4*V[19]*V[15])+S[3]*(V[17]-
 V[19])+S[2]*(V[19]-V[17]));
C[142]=+2*(V[19]*V[17]+S[1]+S[3])-4*V[17]*V[15];
C[141]=+V[15]*(4*(V[19]-V[17]+V[15]))+2*(S[3]-S[2]);
C[140]=+V[15]*(V[15]*(V[15]*(4*(-V[19]-V[17])+6*V[15])+2*(V[19]*V[17]-S[2])+
 4*S[3])+S[3]*(-V[19]-V[17])+S[2]*(V[19]+V[17]));
C[139]=+2*(V[19]*V[17]-S[1]-S[3]);
C[138]=+V[15]*(4*(V[19]+V[17])-12*V[15])+2*(S[2]-S[3]);
C[137]=+V[552]*V[548]*V[510]*V[506];
C[136]=+V[15]*(V[15]*(2*(V[18]*V[17]+S[1]-S[3])-4*V[18]*V[15])+S[3]*(V[17]-
 V[18])+S[2]*(V[18]-V[17]));
C[135]=+2*(V[18]*V[17]+S[1]+S[3])-4*V[17]*V[15];
C[134]=+V[15]*(4*(V[18]-V[17]+V[15]))+2*(S[3]-S[2]);
C[133]=+V[15]*(V[15]*(V[15]*(4*(-V[18]-V[17])+6*V[15])+2*(V[18]*V[17]-S[2])+
 4*S[3])+S[3]*(-V[18]-V[17])+S[2]*(V[18]+V[17]));
C[132]=+2*(V[18]*V[17]-S[1]-S[3]);
C[131]=+V[15]*(4*(V[18]+V[17])-12*V[15])+2*(S[2]-S[3]);
C[130]=+V[531]*V[527]*V[510]*V[506];
C[129]=+S[1]*(V[15]*(V[15]-2*V[17])+S[9]-S[3]);
C[128]=+V[15]*(V[15]-2*V[17])+S[9]+S[3];
C[127]=+V[15]*(V[15]*(V[15]*(3*V[15]-4*V[17])+S[9]-S[2]+2*S[3])+V[17]*(S[2]-
 S[3]));
C[126]=+S[9]-S[1]-S[3];
C[125]=+V[15]*(4*V[17]-6*V[15])+S[2]-S[3];
S[10]=V[510]*V[510];
S[11]=V[506]*V[506];
C[124]=+S[10]*S[11];
C[123]=+V[15]*(S[2]*(2*V[15]-V[19]-V[16])+S[3]*(V[19]+V[16])+V[15]*(2*(
 V[19]*V[16]-S[1])));
C[122]=+V[15]*(4*(-V[19]-V[16])+6*V[15])+2*(V[19]*V[16]-S[3]);
C[121]=+V[15]*(4*(V[19]+V[16]-V[15]))+2*(S[3]-S[2]);
C[120]=+V[15]*(V[15]*(2*(V[19]*V[16]+S[1]-S[3])-4*V[16]*V[15])+S[3]*(V[19]-
 V[16])+S[2]*(V[16]-V[19]));
C[119]=+2*(V[19]*V[16]+S[1]+S[3])-4*V[19]*V[15];
C[118]=+V[15]*(4*(V[19]-V[16]-V[15]))+2*(S[2]-S[3]);
C[117]=+V[15]*(S[2]*(2*V[15]-V[18]-V[16])+S[3]*(V[18]+V[16])+V[15]*(2*(
 V[18]*V[16]-S[1])));
C[116]=+V[15]*(4*(-V[18]-V[16])+6*V[15])+2*(V[18]*V[16]-S[3]);
C[115]=+V[15]*(4*(V[18]+V[16]-V[15]))+2*(S[3]-S[2]);
C[114]=+V[15]*(V[15]*(2*(V[18]*V[16]+S[1]-S[3])-4*V[16]*V[15])+S[3]*(V[18]-
 V[16])+S[2]*(V[16]-V[18]));
C[113]=+2*(V[18]*V[16]+S[1]+S[3])-4*V[18]*V[15];
C[112]=+V[15]*(4*(V[18]-V[16]-V[15]))+2*(S[2]-S[3]);
C[111]=+V[15]*(S[2]*(2*V[15]-V[17]-V[16])+S[3]*(V[17]+V[16])+V[15]*(2*(
 V[17]*V[16]-S[1])));
C[110]=+V[15]*(4*(-V[17]-V[16])+6*V[15])+2*(V[17]*V[16]-S[3]);
C[109]=+V[15]*(4*(V[17]+V[16]-V[15]))+2*(S[3]-S[2]);
C[108]=+V[15]*(V[15]*(2*(V[17]*V[16]+S[1]-S[3])-4*V[16]*V[15])+S[3]*(V[17]-
 V[16])+S[2]*(V[16]-V[17]));
C[107]=+2*(V[17]*V[16]+S[1]+S[3])-4*V[17]*V[15];
C[106]=+V[15]*(4*(V[17]-V[16]-V[15]))+2*(S[2]-S[3]);
S[12]=V[16]*V[16];
C[105]=+V[15]*(V[15]*(S[12]-S[1]+S[2])+V[16]*(S[3]-S[2]));
C[104]=+V[15]*(3*V[15]-4*V[16])+S[12]-S[3];
C[103]=+V[15]*(4*V[16]-2*V[15])+S[3]-S[2];
C[102]=+V[15]*(V[15]*(2*(V[19]*V[16]+S[1]-S[3])-4*V[19]*V[15])+S[3]*(V[16]-
 V[19])+S[2]*(V[19]-V[16]));
C[101]=+2*(V[19]*V[16]+S[1]+S[3])-4*V[16]*V[15];
C[100]=+V[15]*(4*(V[19]-V[16]+V[15]))+2*(S[3]-S[2]);
C[99]=+V[15]*(V[15]*(V[15]*(4*(-V[19]-V[16])+6*V[15])+2*(V[19]*V[16]-S[2])+
 4*S[3])+S[3]*(-V[19]-V[16])+S[2]*(V[19]+V[16]));
C[98]=+2*(V[19]*V[16]-S[1]-S[3]);
C[97]=+V[15]*(4*(V[19]+V[16])-12*V[15])+2*(S[2]-S[3]);
C[96]=+V[552]*V[548]*V[489]*V[485];
C[95]=+V[15]*(V[15]*(2*(V[18]*V[16]+S[1]-S[3])-4*V[18]*V[15])+S[3]*(V[16]-
 V[18])+S[2]*(V[18]-V[16]));
C[94]=+2*(V[18]*V[16]+S[1]+S[3])-4*V[16]*V[15];
C[93]=+V[15]*(4*(V[18]-V[16]+V[15]))+2*(S[3]-S[2]);
C[92]=+V[15]*(V[15]*(V[15]*(4*(-V[18]-V[16])+6*V[15])+2*(V[18]*V[16]-S[2])+
 4*S[3])+S[3]*(-V[18]-V[16])+S[2]*(V[18]+V[16]));
C[91]=+2*(V[18]*V[16]-S[1]-S[3]);
C[90]=+V[15]*(4*(V[18]+V[16])-12*V[15])+2*(S[2]-S[3]);
C[89]=+V[531]*V[527]*V[489]*V[485];
C[88]=+V[15]*(V[15]*(2*(V[17]*V[16]+S[1]-S[3])-4*V[17]*V[15])+S[3]*(V[16]-
 V[17])+S[2]*(V[17]-V[16]));
C[87]=+2*(V[17]*V[16]+S[1]+S[3])-4*V[16]*V[15];
C[86]=+V[15]*(4*(V[17]-V[16]+V[15]))+2*(S[3]-S[2]);
C[85]=+V[15]*(V[15]*(V[15]*(4*(-V[17]-V[16])+6*V[15])+2*(V[17]*V[16]-S[2])+
 4*S[3])+S[3]*(-V[17]-V[16])+S[2]*(V[17]+V[16]));
C[84]=+2*(V[17]*V[16]-S[1]-S[3]);
C[83]=+V[15]*(4*(V[17]+V[16])-12*V[15])+2*(S[2]-S[3]);
C[82]=+V[510]*V[506]*V[489]*V[485];
C[81]=+S[1]*(V[15]*(V[15]-2*V[16])+S[12]-S[3]);
C[80]=+V[15]*(V[15]-2*V[16])+S[12]+S[3];
C[79]=+V[15]*(V[15]*(V[15]*(3*V[15]-4*V[16])+S[12]-S[2]+2*S[3])+V[16]*(S[2]-
 S[3]));
C[78]=+S[12]-S[1]-S[3];
C[77]=+V[15]*(4*V[16]-6*V[15])+S[2]-S[3];
S[13]=V[489]*V[489];
S[14]=V[485]*V[485];
C[76]=+S[13]*S[14];
C[75]=+V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+S[2]+S[3])+V[19]*(S[3]-S[2]));
C[74]=+2*(V[15]*(V[19]-V[15])+S[3]);
C[73]=+2*(S[3]-S[2])+4*V[19]*V[15];
C[72]=+V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+S[2]-3*S[3])+V[19]*(S[3]-
 S[2]));
C[71]=+2*(V[15]*(V[19]-V[15])-S[3]);
C[70]=+V[15]*(4*V[19]-8*V[15])+2*(S[2]-S[3]);
C[69]=+V[552]*V[548]*V[468]*V[466];
C[68]=+V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+S[2]+S[3])+V[18]*(S[3]-S[2]));
C[67]=+2*(V[15]*(V[18]-V[15])+S[3]);
C[66]=+2*(S[3]-S[2])+4*V[18]*V[15];
C[65]=+V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+S[2]-3*S[3])+V[18]*(S[3]-
 S[2]));
C[64]=+2*(V[15]*(V[18]-V[15])-S[3]);
C[63]=+V[15]*(4*V[18]-8*V[15])+2*(S[2]-S[3]);
C[62]=+V[531]*V[527]*V[468]*V[466];
C[61]=+V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+S[2]+S[3])+V[17]*(S[3]-S[2]));
C[60]=+2*(V[15]*(V[17]-V[15])+S[3]);
C[59]=+2*(S[3]-S[2])+4*V[17]*V[15];
C[58]=+V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+S[2]-3*S[3])+V[17]*(S[3]-
 S[2]));
C[57]=+2*(V[15]*(V[17]-V[15])-S[3]);
C[56]=+V[15]*(4*V[17]-8*V[15])+2*(S[2]-S[3]);
C[55]=+V[510]*V[506]*V[468]*V[466];
C[54]=+V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+S[2]+S[3])+V[16]*(S[3]-S[2]));
C[53]=+2*(V[15]*(V[16]-V[15])+S[3]);
C[52]=+2*(S[3]-S[2])+4*V[16]*V[15];
C[51]=+V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+S[2]-3*S[3])+V[16]*(S[3]-
 S[2]));
C[50]=+2*(V[15]*(V[16]-V[15])-S[3]);
C[49]=+V[15]*(4*V[16]-8*V[15])+2*(S[2]-S[3]);
C[48]=+V[489]*V[485]*V[468]*V[466];
S[15]=V[122]*V[122]*V[122]*V[122];
S[16]=V[121]*V[121]*V[121]*V[121];
S[17]=V[119]*V[119]*V[119]*V[119];
S[18]=V[7]*V[7]*V[7]*V[7];
S[19]=V[3]*V[3]*V[3]*V[3];
C[47]=+8*S[15]*S[16]*S[17]*S[18]*S[19];
C[46]=+S[1]*S[3];
C[45]=+S[3];
C[44]=+16*S[15]*S[16]*S[17]*S[18]*S[19];
S[20]=V[468]*V[468];
S[21]=V[466]*V[466];
C[43]=+S[20]*S[21];
C[42]=+V[552]*V[548]*V[464]*V[439];
C[41]=+V[531]*V[527]*V[464]*V[439];
C[40]=+V[510]*V[506]*V[464]*V[439];
C[39]=+V[489]*V[485]*V[464]*V[439];
C[38]=+V[468]*V[466]*V[464]*V[439]*V[15];
S[22]=V[464]*V[464];
S[23]=V[439]*V[439];
C[37]=+S[22]*S[23];
C[36]=+V[552]*V[548]*V[462]*V[400];
C[35]=+V[531]*V[527]*V[462]*V[400];
C[34]=+V[510]*V[506]*V[462]*V[400];
C[33]=+V[489]*V[485]*V[462]*V[400];
C[32]=+V[468]*V[466]*V[462]*V[400]*V[15];
C[31]=+V[464]*V[462]*V[439]*V[400];
S[24]=V[462]*V[462];
S[25]=V[400]*V[400];
C[30]=+S[24]*S[25];
C[29]=+V[15]*(2*V[19]*V[15]-S[2]+S[3]);
C[28]=+2*V[19]-4*V[15];
C[27]=+V[15]*(V[15]*(2*V[19]-4*V[15])+S[2]-S[3]);
C[26]=+2*V[19];
C[25]=+V[552]*V[548]*V[460]*V[335];
C[24]=+V[15]*(2*V[18]*V[15]-S[2]+S[3]);
C[23]=+2*V[18]-4*V[15];
C[22]=+V[15]*(V[15]*(2*V[18]-4*V[15])+S[2]-S[3]);
C[21]=+2*V[18];
C[20]=+V[531]*V[527]*V[460]*V[335];
C[19]=+V[15]*(2*V[17]*V[15]-S[2]+S[3]);
C[18]=+2*V[17]-4*V[15];
C[17]=+V[15]*(V[15]*(2*V[17]-4*V[15])+S[2]-S[3]);
C[16]=+2*V[17];
C[15]=+V[510]*V[506]*V[460]*V[335];
C[14]=+V[15]*(2*V[16]*V[15]-S[2]+S[3]);
C[13]=+2*V[16]-4*V[15];
C[12]=+V[15]*(V[15]*(2*V[16]-4*V[15])+S[2]-S[3]);
C[11]=+2*V[16];
C[10]=+4*V[15];
C[9]=+V[489]*V[485]*V[460]*V[335];
C[8]=+2*S[1]-S[2]+S[3];
S[26]=V[122]*V[122]*V[122];
S[27]=V[121]*V[121]*V[121];
S[28]=V[119]*V[119]*V[119];
S[29]=V[7]*V[7]*V[7];
S[30]=V[3]*V[3]*V[3];
C[7]=+16*S[26]*S[27]*S[28]*S[29]*S[30]*V[1];
C[6]=+V[468]*V[466]*V[460]*V[335]*V[15];
C[5]=+V[464]*V[460]*V[439]*V[335];
S[31]=V[122]*V[122];
S[32]=V[121]*V[121];
S[33]=V[119]*V[119];
S[34]=V[7]*V[7];
S[35]=V[3]*V[3];
S[36]=V[1]*V[1];
C[4]=+8*S[31]*S[32]*S[33]*S[34]*S[35]*S[36];
C[3]=+V[462]*V[460]*V[400]*V[335];
C[2]=+S[1];
C[1]=+16*S[31]*S[32]*S[33]*S[34]*S[35]*S[36];
S[37]=V[460]*V[460];
S[38]=V[335]*V[335];
C[0]=+S[37]*S[38];
}
