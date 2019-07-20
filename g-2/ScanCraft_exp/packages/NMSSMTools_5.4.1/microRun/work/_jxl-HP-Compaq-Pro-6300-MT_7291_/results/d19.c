/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C19(REAL *);
extern DNN S19_omg_p25p25_u;
REAL S19_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
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
width[10]=0.; mass[10]=V[25];  Qtxt[10]="\1\3";
width[9]=0.; mass[9]=V[25];  Qtxt[9]="\1\4";
width[8]=0.; mass[8]=V[24];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[24];  Qtxt[7]="\1\4";
width[3]=V[558]; mass[3]=V[13];  Qtxt[3]="\1\2";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(10,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[113];                                                   
if(!momenta){ C19(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[0]*(C[5]+C[4]*DP[0]-C[2]*DP[1])+DP[1]*(C[2]*DP[1]-C[3])-C[6];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[7];
D=+C[8];
R=+DP[0]*(C[9]+2*DP[0])+C[10];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[11];
D=+C[8];
R=+DP[0]*(C[9]+2*DP[0])+C[10];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[12];
D=+C[13];
R=+DP[0]*(C[18]+C[17]*DP[0]-C[15]*DP[1])+DP[1]*(C[14]*DP[1]-C[16])+C[19];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[12];
D=+C[13];
R=+DP[1]*(C[14]*DP[1]-C[21]-C[20]*DP[0])-C[23]-C[22]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[12];
D=+C[13];
R=+DP[0]*(C[28]+C[27]*DP[0]-C[25]*DP[1])+DP[1]*(C[24]*DP[1]-C[26])+C[29];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[12];
D=+C[13];
R=+DP[1]*(C[24]*DP[1]-C[31]-C[30]*DP[0])-C[33]-C[32]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[34];
D=+C[35];
R=+DP[0]*(DP[0]-C[36])-C[37];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[38];
D=+C[39];
R=+DP[0]*(DP[0]-C[36])-C[37];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[40];
D=+C[39];
R=+DP[0]*(DP[0]-C[36])-C[37];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[41];
D=+C[42];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[45])+C[44]*DP[1]-C[46];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[41];
D=+C[42];
R=+DP[0]*(C[43]*DP[1]-C[47])+C[44]*DP[1]-C[48];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[41];
D=+C[42];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[51])+C[50]*DP[1]-C[52];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[41];
D=+C[42];
R=+DP[0]*(C[49]*DP[1]-C[53])+C[50]*DP[1]-C[54];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[55];
D=+C[35];
R=+DP[0]*(DP[0]-C[36])-C[37];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[56];
D=+C[39];
R=+DP[0]*(DP[0]-C[36])-C[37];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[57];
D=+C[42];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[45])+C[44]*DP[1]-C[46];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[57];
D=+C[42];
R=+DP[0]*(C[43]*DP[1]-C[47])+C[44]*DP[1]-C[48];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[57];
D=+C[42];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[51])+C[50]*DP[1]-C[52];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[57];
D=+C[42];
R=+DP[0]*(C[49]*DP[1]-C[53])+C[50]*DP[1]-C[54];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[58];
D=+C[35];
R=+DP[0]*(DP[0]-C[36])-C[37];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[59];
D=+C[42];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[45])+C[44]*DP[1]-C[46];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[59];
D=+C[42];
R=+DP[0]*(C[43]*DP[1]-C[47])+C[44]*DP[1]-C[48];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[59];
D=+C[42];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[51])+C[50]*DP[1]-C[52];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[59];
D=+C[42];
R=+DP[0]*(C[49]*DP[1]-C[53])+C[50]*DP[1]-C[54];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[60];
D=+C[35];
R=+DP[0]*(C[61]+DP[0])+C[62];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[63];
D=+C[39];
R=+DP[0]*(C[61]+DP[0])+C[62];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[64];
D=+C[42];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[66])+C[65]*DP[1]-C[67];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[64];
D=+C[42];
R=+DP[0]*(C[68]+C[43]*DP[1])+C[69]+C[65]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[64];
D=+C[42];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[71])+C[70]*DP[1]-C[72];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[64];
D=+C[42];
R=+DP[0]*(C[73]+C[49]*DP[1])+C[74]+C[70]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[75];
D=+C[35];
R=+DP[0]*(C[61]+DP[0])+C[62];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[76];
D=+C[42];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[66])+C[65]*DP[1]-C[67];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[76];
D=+C[42];
R=+DP[0]*(C[68]+C[43]*DP[1])+C[69]+C[65]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[76];
D=+C[42];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[71])+C[70]*DP[1]-C[72];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[76];
D=+C[42];
R=+DP[0]*(C[73]+C[49]*DP[1])+C[74]+C[70]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[0]*(C[81]+C[79]*DP[0]-C[80]*DP[1])+DP[1]*(C[79]*DP[1]-C[81])+C[82];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[77];
D=+C[78];
R=+DP[1]*(C[83]*(DP[1]-DP[0])-C[84])+C[86]+C[85]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[77];
D=+C[87];
R=+DP[0]*(C[90]+C[88]*DP[0]-C[89]*DP[1])+DP[1]*(C[88]*DP[1]-C[90])+C[91];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[77];
D=+C[78];
R=+DP[1]*(C[92]*(DP[1]-DP[0])+C[93])+C[95]+C[94]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[1]*(C[96]+C[79]*DP[1])+C[97];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[77];
D=+C[78];
R=+DP[1]*(C[92]*(DP[1]-DP[0])-C[98])+C[100]+C[99]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[77];
D=+C[87];
R=+DP[1]*(C[101]+C[88]*DP[1])+C[102];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[0]*(C[105]+C[103]*DP[0]-C[104]*DP[1])+DP[1]*(C[103]*DP[1]-C[105])+
 C[106];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=-C[77];
D=+C[78];
R=+DP[1]*(C[107]*(DP[1]-DP[0])-C[108])+C[110]+C[109]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[1]*(C[111]+C[103]*DP[1])+C[112];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4]*Q0[5]*Q0[6];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*1)/(1); /* (4 3) */
 }
ans+=R;

}
return ans;
}

static void C19(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[40];                                                           
S[0]=V[192]*V[192];
S[1]=V[191]*V[191];
S[2]=V[15]*V[15];
S[3]=V[5]*V[5];
C[112]=+4*S[0]*S[1]*S[2]*S[3];
C[111]=+V[5]*(V[15]*(V[191]*(V[192]*(4*(S[0]+S[1])))));
S[4]=V[192]*V[192]*V[192];
S[5]=V[192]*V[192]*V[192]*V[192];
C[110]=+S[2]*(V[191]*(V[191]*(V[5]*(V[5]*(2*S[0]-S[1])+2*V[192]*V[191]*
 V[15])+S[2]*(2*S[0]+S[1]))+2*S[4]*V[15]*V[5])+S[5]*(S[2]-S[3]));
C[109]=+V[15]*(V[191]*(V[191]*(V[15]*(2*S[0]+S[1])+2*V[192]*V[191]*V[5])+2*
 S[4]*V[5])+S[5]*V[15])+4*S[0]*S[1]*S[3];
C[108]=+4*S[0]*S[1]*S[2];
C[107]=+4*S[0]*S[1];
C[106]=+S[2]*(V[15]*(V[191]*(V[191]*(V[15]*(2*S[0]+S[1])+4*V[192]*V[191]*
 V[5])+4*S[4]*V[5])+S[5]*V[15])+4*S[0]*S[1]*S[3]);
C[105]=+V[15]*(V[191]*(V[191]*(V[15]*(4*S[0]+2*S[1])+4*V[192]*V[191]*V[5])+
 4*S[4]*V[5])+2*S[5]*V[15]);
C[104]=+S[1]*(4*S[0]+2*S[1])+2*S[5];
C[103]=+S[1]*(2*S[0]+S[1])+S[5];
S[6]=V[190]*V[190];
C[102]=+S[3]*(S[2]*(V[189]*(V[192]*(V[192]*V[189]+2*V[191]*V[190]))+S[1]*
 S[6]));
C[101]=+V[5]*(V[15]*(2*(V[189]*(V[190]*(S[0]+S[1])+V[192]*V[191]*V[189])+
 V[192]*V[191]*S[6])));
C[100]=+S[2]*(V[189]*(V[191]*(V[5]*(V[5]*(2*V[192]*V[190]-V[191]*V[189])+2*
 V[191]*V[190]*V[15])+S[2]*(2*V[192]*V[190]+V[191]*V[189]))+2*S[0]*V[190]*
 V[15]*V[5])+S[6]*(S[0]*(S[2]-S[3])));
C[99]=+V[189]*(V[5]*(V[190]*(2*(V[15]*(S[0]+S[1])+V[192]*V[191]*V[5]))+S[0]*
 V[189]*V[5])+S[2]*(V[191]*(2*V[192]*V[190]+V[191]*V[189])))+S[6]*(S[0]*
 S[2]+S[1]*S[3]);
C[98]=+V[15]*(V[5]*(2*(V[189]*(V[190]*(S[0]+S[1])-V[192]*V[191]*V[189])-
 V[192]*V[191]*S[6]))+4*V[192]*V[191]*V[190]*V[189]*V[15]);
S[7]=V[189]*V[189];
C[97]=+4*S[6]*S[7]*S[2]*S[3];
C[96]=+V[5]*(V[15]*(V[189]*(V[190]*(4*(S[6]+S[7])))));
C[95]=+S[2]*(V[191]*(V[189]*(V[5]*(V[5]*(2*V[192]*V[190]-V[191]*V[189])+2*
 V[192]*V[189]*V[15])+S[2]*(2*V[192]*V[190]+V[191]*V[189]))+2*V[192]*S[6]*
 V[15]*V[5])+S[6]*(S[0]*(S[2]-S[3])));
C[94]=+V[191]*(V[5]*(V[190]*(V[5]*(2*V[192]*V[189]+V[191]*V[190])+2*V[192]*
 V[190]*V[15])+2*V[192]*S[7]*V[15])+S[2]*(V[189]*(2*V[192]*V[190]+V[191]*
 V[189])))+S[0]*(S[6]*S[2]+S[7]*S[3]);
C[93]=+V[15]*(V[5]*(2*(V[189]*(V[190]*(S[0]+S[1])-V[192]*V[191]*V[189])-
 V[192]*V[191]*S[6]))-4*V[192]*V[191]*V[190]*V[189]*V[15]);
C[92]=+4*V[192]*V[191]*V[190]*V[189];
C[91]=+S[2]*(V[5]*(V[189]*(V[192]*(2*(V[15]*(V[192]*V[190]+V[191]*V[189])+
 V[191]*V[190]*V[5])+V[192]*V[189]*V[5])+2*S[1]*V[190]*V[15])+S[6]*(V[191]*(
 2*V[192]*V[15]+V[191]*V[5])))+S[2]*(V[189]*(V[191]*(2*V[192]*V[190]+V[191]*
 V[189]))+S[0]*S[6]));
C[90]=+V[15]*(2*(V[5]*(V[189]*(V[190]*(S[0]+S[1])+V[192]*V[191]*V[189])+
 V[192]*V[191]*S[6])+V[15]*(S[0]*S[6]+S[1]*S[7]))+4*V[192]*V[191]*V[190]*
 V[189]*V[15]);
C[89]=+V[189]*(V[191]*(4*V[192]*V[190]+2*V[191]*V[189]))+2*S[0]*S[6];
C[88]=+V[189]*(V[191]*(2*V[192]*V[190]+V[191]*V[189]))+S[0]*S[6];
S[8]=V[122]*V[122]*V[122]*V[122];
S[9]=V[119]*V[119]*V[119]*V[119];
S[10]=V[118]*V[118]*V[118]*V[118];
S[11]=V[3]*V[3]*V[3]*V[3];
C[87]=+54*S[8]*S[9]*S[10]*S[11];
S[12]=V[190]*V[190]*V[190];
S[13]=V[190]*V[190]*V[190]*V[190];
C[86]=+S[2]*(V[189]*(V[189]*(V[5]*(V[5]*(2*S[6]-S[7])+2*V[190]*V[189]*
 V[15])+S[2]*(2*S[6]+S[7]))+2*S[12]*V[15]*V[5])+S[13]*(S[2]-S[3]));
C[85]=+V[15]*(V[189]*(V[189]*(V[15]*(2*S[6]+S[7])+2*V[190]*V[189]*V[5])+2*
 S[12]*V[5])+S[13]*V[15])+4*S[6]*S[7]*S[3];
C[84]=+4*S[6]*S[7]*S[2];
C[83]=+4*S[6]*S[7];
C[82]=+S[2]*(V[15]*(V[189]*(V[189]*(V[15]*(2*S[6]+S[7])+4*V[190]*V[189]*
 V[5])+4*S[12]*V[5])+S[13]*V[15])+4*S[6]*S[7]*S[3]);
C[81]=+V[15]*(V[189]*(V[189]*(V[15]*(4*S[6]+2*S[7])+4*V[190]*V[189]*V[5])+4*
 S[12]*V[5])+2*S[13]*V[15]);
C[80]=+S[7]*(4*S[6]+2*S[7])+2*S[13];
C[79]=+S[7]*(2*S[6]+S[7])+S[13];
C[78]=+108*S[8]*S[9]*S[10]*S[11];
S[14]=V[1]*V[1]*V[1]*V[1];
C[77]=+S[14];
S[15]=V[1]*V[1]*V[1];
C[76]=+V[468]*V[188]*V[126]*V[5]*S[15];
S[16]=V[468]*V[468];
S[17]=V[188]*V[188];
S[18]=V[126]*V[126];
S[19]=V[1]*V[1];
C[75]=+3*S[16]*S[17]*S[18]*S[3]*S[19];
S[20]=V[15]*V[15]*V[15];
C[74]=+S[20]*(V[5]*(S[0]+S[1]));
C[73]=+V[5]*(V[15]*(S[0]+S[1]));
C[72]=+S[20]*(V[5]*(S[0]+S[1])+2*V[192]*V[191]*V[15]);
C[71]=+V[15]*(V[5]*(S[0]+S[1])+4*V[192]*V[191]*V[15]);
C[70]=+2*V[192]*V[191]*S[2];
C[69]=+S[20]*(V[5]*(S[6]+S[7]));
C[68]=+V[5]*(V[15]*(S[6]+S[7]));
C[67]=+S[20]*(V[5]*(S[6]+S[7])+2*V[190]*V[189]*V[15]);
C[66]=+V[15]*(V[5]*(S[6]+S[7])+4*V[190]*V[189]*V[15]);
C[65]=+2*V[190]*V[189]*S[2];
C[64]=+V[466]*V[188]*V[125]*V[5]*S[15];
C[63]=+3*V[468]*V[466]*S[17]*V[126]*V[125]*S[3]*S[19];
S[21]=V[15]*V[15]*V[15]*V[15];
C[62]=+S[21];
C[61]=+2*S[2];
S[22]=V[466]*V[466];
S[23]=V[125]*V[125];
C[60]=+3*S[22]*S[17]*S[23]*S[3]*S[19];
C[59]=+V[464]*V[187]*V[5]*S[15];
S[24]=V[464]*V[464];
S[25]=V[187]*V[187];
C[58]=+3*S[24]*S[25]*S[3]*S[19];
C[57]=+V[462]*V[186]*V[5]*S[15];
C[56]=+3*V[464]*V[462]*V[187]*V[186]*S[3]*S[19];
S[26]=V[462]*V[462];
S[27]=V[186]*V[186];
C[55]=+3*S[26]*S[27]*S[3]*S[19];
C[54]=+S[2]*(V[5]*(V[15]*(S[0]+S[1])-2*V[192]*V[191]*V[5])+2*V[192]*V[191]*
 S[2]);
C[53]=+V[5]*(V[15]*(S[0]+S[1])+2*V[192]*V[191]*V[5])+2*V[192]*V[191]*S[2];
C[52]=+S[2]*(V[5]*(V[15]*(S[0]+S[1])+2*V[192]*V[191]*V[5]));
C[51]=+V[5]*(V[15]*(S[0]+S[1])-2*V[192]*V[191]*V[5])+2*V[192]*V[191]*S[2];
C[50]=+V[15]*(2*(V[5]*(S[0]+S[1])+V[192]*V[191]*V[15]));
C[49]=+2*V[192]*V[191];
C[48]=+S[2]*(V[5]*(V[15]*(S[6]+S[7])-2*V[190]*V[189]*V[5])+2*V[190]*V[189]*
 S[2]);
C[47]=+V[5]*(V[15]*(S[6]+S[7])+2*V[190]*V[189]*V[5])+2*V[190]*V[189]*S[2];
C[46]=+S[2]*(V[5]*(V[15]*(S[6]+S[7])+2*V[190]*V[189]*V[5]));
C[45]=+V[5]*(V[15]*(S[6]+S[7])-2*V[190]*V[189]*V[5])+2*V[190]*V[189]*S[2];
C[44]=+V[15]*(2*(V[5]*(S[6]+S[7])+V[190]*V[189]*V[15]));
C[43]=+2*V[190]*V[189];
S[28]=V[121]*V[121];
S[29]=V[118]*V[118];
C[42]=+12*S[8]*S[28]*S[9]*S[29]*V[7]*S[11];
C[41]=+V[460]*V[185]*V[5]*S[15];
C[40]=+3*V[464]*V[460]*V[187]*V[185]*S[3]*S[19];
S[30]=V[121]*V[121]*V[121]*V[121];
S[31]=V[7]*V[7];
C[39]=+2*S[8]*S[30]*S[9]*S[31]*S[11];
C[38]=+3*V[462]*V[460]*V[186]*V[185]*S[3]*S[19];
C[37]=+S[2]*(S[2]-2*S[3]);
C[36]=+2*S[3];
C[35]=+4*S[8]*S[30]*S[9]*S[31]*S[11];
S[32]=V[460]*V[460];
S[33]=V[185]*V[185];
C[34]=+3*S[32]*S[33]*S[3]*S[19];
S[34]=V[119]*V[119];
S[35]=V[2]*V[2];
C[33]=+S[2]*(S[35]*(V[5]*(V[5]*(S[34]*(2*(S[0]-S[1]))-6*S[0]-3*S[1])+6*
 V[192]*V[191]*V[15])+S[2]*(S[34]*(2*(S[0]-S[1]))+3*S[1]))+S[3]*(S[2]*(6*(
 S[0]+S[1]))));
C[32]=+S[35]*(S[34]*(2*(S[3]*(S[1]-S[0])+S[2]*(S[0]-S[1])))+V[5]*(V[192]*(3*
 V[192]*V[5]+6*V[191]*V[15]))+3*S[1]*S[2])+S[3]*(S[2]*(6*(S[0]+S[1])));
C[31]=+V[5]*(V[15]*(V[191]*(V[192]*(12*S[2]-18*S[35]))));
C[30]=+12*V[192]*V[191]*V[15]*V[5];
C[29]=+S[2]*(S[35]*(V[5]*(V[5]*(S[34]*(2*(S[1]-S[0]))+6*S[0]+3*S[1])+12*
 V[192]*V[191]*V[15])+S[2]*(S[34]*(2*(S[0]-S[1]))+3*S[1]))+S[2]*(V[5]*(V[5]*
 (6*(-S[0]-S[1]))-12*V[192]*V[191]*V[15])));
C[28]=+S[35]*(S[34]*(S[3]*(2*(S[0]-S[1]))+S[2]*(6*(S[0]-S[1])))+V[5]*(
 V[192]*(12*V[191]*V[15]-3*V[192]*V[5]))+9*S[1]*S[2])+S[2]*(V[5]*(V[5]*(6*(-
 S[0]-S[1]))-24*V[192]*V[191]*V[15]));
C[27]=+S[35]*(S[34]*(4*(S[0]-S[1]))+6*S[1])-12*V[192]*V[191]*V[15]*V[5];
C[26]=+V[15]*(S[35]*(V[15]*(S[34]*(8*(S[0]-S[1]))+12*S[1])+18*V[192]*V[191]*
 V[5])-12*V[192]*V[191]*S[2]*V[5]);
C[25]=+S[35]*(S[34]*(8*(S[0]-S[1]))+12*S[1])-12*V[192]*V[191]*V[15]*V[5];
C[24]=+S[35]*(S[34]*(4*(S[0]-S[1]))+6*S[1]);
C[23]=+S[2]*(S[35]*(V[5]*(V[5]*(S[34]*(2*(S[6]-S[7]))-6*S[6]-3*S[7])+6*
 V[190]*V[189]*V[15])+S[2]*(S[34]*(2*(S[6]-S[7]))+3*S[7]))+S[3]*(S[2]*(6*(
 S[6]+S[7]))));
C[22]=+S[35]*(S[34]*(2*(S[3]*(S[7]-S[6])+S[2]*(S[6]-S[7])))+V[5]*(V[190]*(3*
 V[190]*V[5]+6*V[189]*V[15]))+3*S[7]*S[2])+S[3]*(S[2]*(6*(S[6]+S[7])));
C[21]=+V[5]*(V[15]*(V[189]*(V[190]*(12*S[2]-18*S[35]))));
C[20]=+12*V[190]*V[189]*V[15]*V[5];
C[19]=+S[2]*(S[35]*(V[5]*(V[5]*(S[34]*(2*(S[7]-S[6]))+6*S[6]+3*S[7])+12*
 V[190]*V[189]*V[15])+S[2]*(S[34]*(2*(S[6]-S[7]))+3*S[7]))+S[2]*(V[5]*(V[5]*
 (6*(-S[6]-S[7]))-12*V[190]*V[189]*V[15])));
C[18]=+S[35]*(S[34]*(S[3]*(2*(S[6]-S[7]))+S[2]*(6*(S[6]-S[7])))+V[5]*(
 V[190]*(12*V[189]*V[15]-3*V[190]*V[5]))+9*S[7]*S[2])+S[2]*(V[5]*(V[5]*(6*(-
 S[6]-S[7]))-24*V[190]*V[189]*V[15]));
C[17]=+S[35]*(S[34]*(4*(S[6]-S[7]))+6*S[7])-12*V[190]*V[189]*V[15]*V[5];
C[16]=+V[15]*(S[35]*(V[15]*(S[34]*(8*(S[6]-S[7]))+12*S[7])+18*V[190]*V[189]*
 V[5])-12*V[190]*V[189]*S[2]*V[5]);
C[15]=+S[35]*(S[34]*(8*(S[6]-S[7]))+12*S[7])-12*V[190]*V[189]*V[15]*V[5];
C[14]=+S[35]*(S[34]*(4*(S[6]-S[7]))+6*S[7]);
S[36]=V[122]*V[122];
S[37]=V[3]*V[3];
C[13]=+36*S[36]*S[9]*S[10]*S[37]*S[35];
C[12]=+V[458]*S[14];
C[11]=+3*V[468]*V[458]*V[188]*V[126]*V[15]*S[3]*S[15];
C[10]=+S[2]*(2*S[2]-S[35]);
C[9]=+4*S[2]-S[35];
C[8]=+2*S[36]*S[28]*S[9]*S[29]*V[7]*S[37]*S[35];
C[7]=+3*V[466]*V[458]*V[188]*V[125]*V[15]*S[3]*S[15];
C[6]=+S[3]*(S[2]*(S[35]*(S[35]*(S[34]*(8*S[34]-12)-9)+36*S[2])-36*S[21]));
C[5]=+S[35]*(S[35]*(S[34]*(S[3]*(8*S[34]-12)+S[2]*(8*S[34]-12))+9*S[2])-36*
 S[2]*S[3])+72*S[21]*S[3];
S[38]=V[2]*V[2]*V[2]*V[2];
C[4]=+S[38]*(S[34]*(8*S[34]-12)+9)+36*S[2]*S[3];
C[3]=+S[38]*(S[2]*(S[34]*(16*S[34]-24)+18));
C[2]=+S[38]*(S[34]*(16*S[34]-24)+18);
C[1]=+12*S[9]*S[10]*S[38];
S[39]=V[458]*V[458];
C[0]=+S[39]*S[14];
}
