/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C21(REAL *);
extern DNN S21_omg_p25p25_u;
REAL S21_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
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
width[10]=0.; mass[10]=V[27];  Qtxt[10]="\1\3";
width[9]=0.; mass[9]=V[27];  Qtxt[9]="\1\4";
width[8]=0.; mass[8]=V[26];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[26];  Qtxt[7]="\1\4";
width[3]=V[558]; mass[3]=V[13];  Qtxt[3]="\1\2";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(10,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[116];                                                   
if(!momenta){ C21(C); return 0;}
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
N=-C[7];
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
N=-C[11];
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
N=-C[12];
D=+C[13];
R=+DP[0]*(C[18]+C[17]*DP[0]-C[15]*DP[1])+DP[1]*(C[14]*DP[1]-C[16])-C[19];
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
N=-C[12];
D=+C[13];
R=+DP[1]*(C[14]*DP[1]-C[21]-C[20]*DP[0])+C[22]*DP[0]-C[23];
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
N=-C[12];
D=+C[13];
R=+DP[0]*(C[28]+C[27]*DP[0]-C[25]*DP[1])+DP[1]*(C[24]*DP[1]-C[26])-C[29];
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
N=-C[12];
D=+C[13];
R=+DP[1]*(C[24]*DP[1]-C[31]-C[30]*DP[0])+C[32]*DP[0]-C[33];
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
R=+DP[0]*(DP[0]-C[36])+C[37];
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
R=+DP[0]*(DP[0]-C[36])+C[37];
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
R=+DP[0]*(DP[0]-C[36])+C[37];
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
R=+DP[0]*(DP[0]-C[36])+C[37];
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
R=+DP[0]*(DP[0]-C[36])+C[37];
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
R=+DP[0]*(DP[0]-C[36])+C[37];
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
D=+C[61];
R=+DP[0]*(C[62]+DP[0])+C[63];
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
N=+C[64];
D=+C[65];
R=+DP[0]*(C[62]+DP[0])+C[63];
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
N=+C[66];
D=+C[67];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[69])+C[68]*DP[1]-C[70];
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
N=-C[66];
D=+C[67];
R=+DP[0]*(C[71]+C[43]*DP[1])+C[72]+C[68]*DP[1];
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
N=+C[66];
D=+C[67];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[74])+C[73]*DP[1]-C[75];
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
N=-C[66];
D=+C[67];
R=+DP[0]*(C[76]+C[49]*DP[1])+C[77]+C[73]*DP[1];
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
N=+C[78];
D=+C[61];
R=+DP[0]*(C[62]+DP[0])+C[63];
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
N=+C[79];
D=+C[67];
R=+DP[0]*(C[43]*(DP[1]-DP[0])-C[69])+C[68]*DP[1]-C[70];
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
N=-C[79];
D=+C[67];
R=+DP[0]*(C[71]+C[43]*DP[1])+C[72]+C[68]*DP[1];
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
N=+C[79];
D=+C[67];
R=+DP[0]*(C[49]*(DP[1]-DP[0])-C[74])+C[73]*DP[1]-C[75];
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
N=-C[79];
D=+C[67];
R=+DP[0]*(C[76]+C[49]*DP[1])+C[77]+C[73]*DP[1];
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
N=+C[80];
D=+C[81];
R=+DP[0]*(C[84]+C[82]*DP[0]-C[83]*DP[1])+DP[1]*(C[82]*DP[1]-C[84])+C[85];
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
N=-C[80];
D=+C[81];
R=+DP[1]*(C[86]*(DP[1]-DP[0])-C[87])+C[88]*DP[0]-C[89];
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
N=+C[80];
D=+C[90];
R=+DP[0]*(C[93]+C[91]*DP[0]-C[92]*DP[1])+DP[1]*(C[91]*DP[1]-C[93])+C[94];
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
N=-C[80];
D=+C[81];
R=+DP[1]*(C[95]*(DP[1]-DP[0])+C[96])+C[97]*DP[0]-C[98];
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
N=+C[80];
D=+C[81];
R=+DP[1]*(C[99]+C[82]*DP[1])+C[100];
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
N=-C[80];
D=+C[81];
R=+DP[1]*(C[95]*(DP[1]-DP[0])-C[101])+C[102]*DP[0]-C[103];
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
N=+C[80];
D=+C[90];
R=+DP[1]*(C[104]+C[91]*DP[1])+C[105];
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
N=+C[80];
D=+C[81];
R=+DP[0]*(C[108]+C[106]*DP[0]-C[107]*DP[1])+DP[1]*(C[106]*DP[1]-C[108])+
 C[109];
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
N=-C[80];
D=+C[81];
R=+DP[1]*(C[110]*(DP[1]-DP[0])-C[111])+C[112]*DP[0]-C[113];
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
N=+C[80];
D=+C[81];
R=+DP[1]*(C[114]+C[106]*DP[1])+C[115];
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

static void C21(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[40];                                                           
S[0]=V[184]*V[184];
S[1]=V[183]*V[183];
S[2]=V[130]*V[130];
S[3]=V[15]*V[15];
C[115]=+4*S[0]*S[1]*S[2]*S[3];
C[114]=+V[15]*(V[130]*(V[183]*(V[184]*(4*(S[0]+S[1])))));
S[4]=V[184]*V[184]*V[184];
S[5]=V[184]*V[184]*V[184]*V[184];
C[113]=+S[3]*(V[183]*(V[183]*(V[15]*(V[15]*(-2*S[0]-S[1])-2*V[184]*V[183]*
 V[130])+S[2]*(S[1]-2*S[0]))-2*S[4]*V[130]*V[15])+S[5]*(S[2]-S[3]));
C[112]=+V[15]*(V[183]*(V[183]*(V[15]*(2*S[0]+S[1])+2*V[184]*V[183]*V[130])+
 2*S[4]*V[130])+S[5]*V[15])+4*S[0]*S[1]*S[2];
C[111]=+4*S[0]*S[1]*S[3];
C[110]=+4*S[0]*S[1];
C[109]=+S[3]*(V[15]*(V[183]*(V[183]*(V[15]*(2*S[0]+S[1])+4*V[184]*V[183]*
 V[130])+4*S[4]*V[130])+S[5]*V[15])+4*S[0]*S[1]*S[2]);
C[108]=+V[15]*(V[183]*(V[183]*(V[15]*(4*S[0]+2*S[1])+4*V[184]*V[183]*
 V[130])+4*S[4]*V[130])+2*S[5]*V[15]);
C[107]=+S[1]*(4*S[0]+2*S[1])+2*S[5];
C[106]=+S[1]*(2*S[0]+S[1])+S[5];
S[6]=V[182]*V[182];
C[105]=+S[3]*(S[2]*(V[181]*(V[184]*(V[184]*V[181]+2*V[183]*V[182]))+S[1]*
 S[6]));
C[104]=+V[15]*(V[130]*(2*(V[181]*(V[182]*(S[0]+S[1])+V[184]*V[183]*V[181])+
 V[184]*V[183]*S[6])));
C[103]=+S[3]*(V[181]*(V[183]*(V[15]*(V[15]*(-2*V[184]*V[182]-V[183]*V[181])-
 2*V[183]*V[182]*V[130])+S[2]*(V[183]*V[181]-2*V[184]*V[182]))-2*S[0]*
 V[182]*V[130]*V[15])+S[6]*(S[0]*(S[2]-S[3])));
C[102]=+V[181]*(V[15]*(V[182]*(2*(V[130]*(S[0]+S[1])+V[184]*V[183]*V[15]))+
 S[1]*V[181]*V[15])+S[2]*(V[184]*(V[184]*V[181]+2*V[183]*V[182])))+S[6]*(
 S[0]*S[3]+S[1]*S[2]);
C[101]=+V[15]*(V[130]*(2*(V[181]*(V[182]*(S[0]+S[1])-V[184]*V[183]*V[181])-
 V[184]*V[183]*S[6]))+4*V[184]*V[183]*V[182]*V[181]*V[15]);
S[7]=V[181]*V[181];
C[100]=+4*S[6]*S[7]*S[2]*S[3];
C[99]=+V[15]*(V[130]*(V[181]*(V[182]*(4*(S[6]+S[7])))));
C[98]=+S[3]*(V[183]*(V[181]*(V[15]*(V[15]*(-2*V[184]*V[182]-V[183]*V[181])-
 2*V[184]*V[181]*V[130])+S[2]*(V[183]*V[181]-2*V[184]*V[182]))-2*V[184]*
 S[6]*V[130]*V[15])+S[6]*(S[0]*(S[2]-S[3])));
C[97]=+V[183]*(V[15]*(V[181]*(V[15]*(2*V[184]*V[182]+V[183]*V[181])+2*
 V[184]*V[181]*V[130])+2*V[184]*S[6]*V[130])+S[2]*(V[182]*(2*V[184]*V[181]+
 V[183]*V[182])))+S[0]*(S[6]*S[3]+S[7]*S[2]);
C[96]=+V[15]*(V[130]*(2*(V[181]*(V[182]*(S[0]+S[1])-V[184]*V[183]*V[181])-
 V[184]*V[183]*S[6]))-4*V[184]*V[183]*V[182]*V[181]*V[15]);
C[95]=+4*V[184]*V[183]*V[182]*V[181];
C[94]=+S[3]*(V[15]*(V[181]*(V[183]*(2*(V[130]*(V[184]*V[181]+V[183]*V[182])+
 V[184]*V[182]*V[15])+V[183]*V[181]*V[15])+2*S[0]*V[182]*V[130])+S[6]*(
 V[184]*(V[184]*V[15]+2*V[183]*V[130])))+S[2]*(V[181]*(V[184]*(V[184]*
 V[181]+2*V[183]*V[182]))+S[1]*S[6]));
C[93]=+V[15]*(2*(V[130]*(V[181]*(V[182]*(S[0]+S[1])+V[184]*V[183]*V[181])+
 V[184]*V[183]*S[6])+V[15]*(S[0]*S[6]+S[1]*S[7]))+4*V[184]*V[183]*V[182]*
 V[181]*V[15]);
C[92]=+V[181]*(V[183]*(4*V[184]*V[182]+2*V[183]*V[181]))+2*S[0]*S[6];
C[91]=+V[181]*(V[183]*(2*V[184]*V[182]+V[183]*V[181]))+S[0]*S[6];
S[8]=V[121]*V[121]*V[121]*V[121];
S[9]=V[119]*V[119]*V[119]*V[119];
S[10]=V[118]*V[118]*V[118]*V[118];
S[11]=V[3]*V[3]*V[3]*V[3];
C[90]=+54*S[8]*S[9]*S[10]*S[11];
S[12]=V[182]*V[182]*V[182];
S[13]=V[182]*V[182]*V[182]*V[182];
C[89]=+S[3]*(V[181]*(V[181]*(V[15]*(V[15]*(-2*S[6]-S[7])-2*V[182]*V[181]*
 V[130])+S[2]*(S[7]-2*S[6]))-2*S[12]*V[130]*V[15])+S[13]*(S[2]-S[3]));
C[88]=+V[15]*(V[181]*(V[181]*(V[15]*(2*S[6]+S[7])+2*V[182]*V[181]*V[130])+2*
 S[12]*V[130])+S[13]*V[15])+4*S[6]*S[7]*S[2];
C[87]=+4*S[6]*S[7]*S[3];
C[86]=+4*S[6]*S[7];
C[85]=+S[3]*(V[15]*(V[181]*(V[181]*(V[15]*(2*S[6]+S[7])+4*V[182]*V[181]*
 V[130])+4*S[12]*V[130])+S[13]*V[15])+4*S[6]*S[7]*S[2]);
C[84]=+V[15]*(V[181]*(V[181]*(V[15]*(4*S[6]+2*S[7])+4*V[182]*V[181]*V[130])+
 4*S[12]*V[130])+2*S[13]*V[15]);
C[83]=+S[7]*(4*S[6]+2*S[7])+2*S[13];
C[82]=+S[7]*(2*S[6]+S[7])+S[13];
C[81]=+108*S[8]*S[9]*S[10]*S[11];
S[14]=V[1]*V[1]*V[1]*V[1];
C[80]=+S[14];
S[15]=V[1]*V[1]*V[1];
C[79]=+V[468]*V[130]*V[126]*S[15];
S[16]=V[468]*V[468];
S[17]=V[126]*V[126];
S[18]=V[1]*V[1];
C[78]=+3*S[16]*S[2]*S[17]*S[18];
S[19]=V[15]*V[15]*V[15];
C[77]=+S[19]*(V[130]*(S[0]+S[1]));
C[76]=+V[15]*(V[130]*(S[0]+S[1]));
C[75]=+S[19]*(V[130]*(S[0]+S[1])+2*V[184]*V[183]*V[15]);
C[74]=+V[15]*(V[130]*(S[0]+S[1])+4*V[184]*V[183]*V[15]);
C[73]=+2*V[184]*V[183]*S[3];
C[72]=+S[19]*(V[130]*(S[6]+S[7]));
C[71]=+V[15]*(V[130]*(S[6]+S[7]));
C[70]=+S[19]*(V[130]*(S[6]+S[7])+2*V[182]*V[181]*V[15]);
C[69]=+V[15]*(V[130]*(S[6]+S[7])+4*V[182]*V[181]*V[15]);
C[68]=+2*V[182]*V[181]*S[3];
S[20]=V[121]*V[121]*V[121];
S[21]=V[118]*V[118];
C[67]=+12*V[122]*S[20]*S[9]*S[21]*V[7]*V[6]*S[11];
C[66]=+V[466]*V[130]*V[125]*S[15];
S[22]=V[122]*V[122];
S[23]=V[121]*V[121];
S[24]=V[7]*V[7];
S[25]=V[6]*V[6];
C[65]=+2*S[22]*S[23]*S[9]*S[24]*S[25]*S[11];
C[64]=+3*V[468]*V[466]*S[2]*V[126]*V[125]*S[18];
S[26]=V[15]*V[15]*V[15]*V[15];
C[63]=+S[26];
C[62]=+2*S[3];
C[61]=+4*S[22]*S[23]*S[9]*S[24]*S[25]*S[11];
S[27]=V[466]*V[466];
S[28]=V[125]*V[125];
C[60]=+3*S[27]*S[2]*S[28]*S[18];
C[59]=+V[464]*V[130]*V[95]*S[15];
S[29]=V[464]*V[464];
S[30]=V[95]*V[95];
C[58]=+3*S[29]*S[2]*S[30]*S[18];
C[57]=+V[462]*V[130]*V[92]*S[15];
C[56]=+3*V[464]*V[462]*S[2]*V[95]*V[92]*S[18];
S[31]=V[462]*V[462];
S[32]=V[92]*V[92];
C[55]=+3*S[31]*S[2]*S[32]*S[18];
C[54]=+S[3]*(V[15]*(V[130]*(S[0]+S[1])+2*V[184]*V[183]*V[15])-2*V[184]*
 V[183]*S[2]);
C[53]=+V[15]*(V[130]*(S[0]+S[1])+2*V[184]*V[183]*V[15])+2*V[184]*V[183]*
 S[2];
C[52]=+S[3]*(V[130]*(V[15]*(S[0]+S[1])+2*V[184]*V[183]*V[130]));
C[51]=+V[15]*(V[130]*(S[0]+S[1])+2*V[184]*V[183]*V[15])-2*V[184]*V[183]*
 S[2];
C[50]=+V[15]*(2*(V[130]*(S[0]+S[1])+V[184]*V[183]*V[15]));
C[49]=+2*V[184]*V[183];
C[48]=+S[3]*(V[15]*(V[130]*(S[6]+S[7])+2*V[182]*V[181]*V[15])-2*V[182]*
 V[181]*S[2]);
C[47]=+V[15]*(V[130]*(S[6]+S[7])+2*V[182]*V[181]*V[15])+2*V[182]*V[181]*
 S[2];
C[46]=+S[3]*(V[130]*(V[15]*(S[6]+S[7])+2*V[182]*V[181]*V[130]));
C[45]=+V[15]*(V[130]*(S[6]+S[7])+2*V[182]*V[181]*V[15])-2*V[182]*V[181]*
 S[2];
C[44]=+V[15]*(2*(V[130]*(S[6]+S[7])+V[182]*V[181]*V[15]));
C[43]=+2*V[182]*V[181];
C[42]=+12*V[122]*S[8]*S[9]*S[21]*V[7]*S[11];
C[41]=+V[460]*V[130]*V[89]*S[15];
C[40]=+3*V[464]*V[460]*S[2]*V[95]*V[89]*S[18];
C[39]=+2*S[22]*S[8]*S[9]*S[24]*S[11];
C[38]=+3*V[462]*V[460]*S[2]*V[92]*V[89]*S[18];
C[37]=+S[3]*(2*S[2]-S[3]);
C[36]=+2*S[2];
C[35]=+4*S[22]*S[8]*S[9]*S[24]*S[11];
S[33]=V[460]*V[460];
S[34]=V[89]*V[89];
C[34]=+3*S[33]*S[2]*S[34]*S[18];
S[35]=V[119]*V[119];
S[36]=V[2]*V[2];
C[33]=+S[3]*(S[36]*(V[130]*(V[130]*(S[35]*(4*(S[0]-S[1]))-6*S[0]-3*S[1])+6*
 V[184]*V[183]*V[15])+S[3]*(S[35]*(4*(S[0]-S[1]))+3*S[1]))+S[3]*(S[2]*(6*(
 S[0]+S[1]))));
C[32]=+S[36]*(S[35]*(4*(S[3]*(S[1]-S[0])+S[2]*(S[0]-S[1])))+V[15]*(V[183]*(-
 6*V[184]*V[130]-3*V[183]*V[15]))-3*S[0]*S[2])+S[3]*(S[2]*(6*(-S[0]-S[1])));
C[31]=+V[15]*(V[130]*(V[183]*(V[184]*(12*S[3]-18*S[36]))));
C[30]=+12*V[184]*V[183]*V[130]*V[15];
C[29]=+S[3]*(S[36]*(V[130]*(V[130]*(S[35]*(4*(S[0]-S[1]))-6*S[0]-3*S[1])-12*
 V[184]*V[183]*V[15])+S[3]*(S[35]*(4*(S[1]-S[0]))-3*S[1]))+S[3]*(V[130]*(
 V[130]*(6*(S[0]+S[1]))+12*V[184]*V[183]*V[15])));
C[28]=+S[36]*(S[35]*(S[3]*(12*(S[0]-S[1]))+S[2]*(4*(S[0]-S[1])))+V[15]*(
 V[183]*(12*V[184]*V[130]+9*V[183]*V[15]))-3*S[0]*S[2])+S[3]*(V[130]*(
 V[130]*(6*(-S[0]-S[1]))-24*V[184]*V[183]*V[15]));
C[27]=+S[36]*(S[35]*(8*(S[0]-S[1]))+6*S[1])-12*V[184]*V[183]*V[130]*V[15];
C[26]=+V[15]*(S[36]*(V[15]*(S[35]*(16*(S[0]-S[1]))+12*S[1])+18*V[184]*
 V[183]*V[130])-12*V[184]*V[183]*V[130]*S[3]);
C[25]=+S[36]*(S[35]*(16*(S[0]-S[1]))+12*S[1])-12*V[184]*V[183]*V[130]*V[15];
C[24]=+S[36]*(S[35]*(8*(S[0]-S[1]))+6*S[1]);
C[23]=+S[3]*(S[36]*(V[130]*(V[130]*(S[35]*(4*(S[6]-S[7]))-6*S[6]-3*S[7])+6*
 V[182]*V[181]*V[15])+S[3]*(S[35]*(4*(S[6]-S[7]))+3*S[7]))+S[3]*(S[2]*(6*(
 S[6]+S[7]))));
C[22]=+S[36]*(S[35]*(4*(S[3]*(S[7]-S[6])+S[2]*(S[6]-S[7])))+V[15]*(V[181]*(-
 6*V[182]*V[130]-3*V[181]*V[15]))-3*S[6]*S[2])+S[3]*(S[2]*(6*(-S[6]-S[7])));
C[21]=+V[15]*(V[130]*(V[181]*(V[182]*(12*S[3]-18*S[36]))));
C[20]=+12*V[182]*V[181]*V[130]*V[15];
C[19]=+S[3]*(S[36]*(V[130]*(V[130]*(S[35]*(4*(S[6]-S[7]))-6*S[6]-3*S[7])-12*
 V[182]*V[181]*V[15])+S[3]*(S[35]*(4*(S[7]-S[6]))-3*S[7]))+S[3]*(V[130]*(
 V[130]*(6*(S[6]+S[7]))+12*V[182]*V[181]*V[15])));
C[18]=+S[36]*(S[35]*(S[3]*(12*(S[6]-S[7]))+S[2]*(4*(S[6]-S[7])))+V[15]*(
 V[181]*(12*V[182]*V[130]+9*V[181]*V[15]))-3*S[6]*S[2])+S[3]*(V[130]*(
 V[130]*(6*(-S[6]-S[7]))-24*V[182]*V[181]*V[15]));
C[17]=+S[36]*(S[35]*(8*(S[6]-S[7]))+6*S[7])-12*V[182]*V[181]*V[130]*V[15];
C[16]=+V[15]*(S[36]*(V[15]*(S[35]*(16*(S[6]-S[7]))+12*S[7])+18*V[182]*
 V[181]*V[130])-12*V[182]*V[181]*V[130]*S[3]);
C[15]=+S[36]*(S[35]*(16*(S[6]-S[7]))+12*S[7])-12*V[182]*V[181]*V[130]*V[15];
C[14]=+S[36]*(S[35]*(8*(S[6]-S[7]))+6*S[7]);
S[37]=V[3]*V[3];
C[13]=+36*S[23]*S[9]*S[10]*S[37]*S[36];
C[12]=+V[458]*S[14];
C[11]=+3*V[468]*V[458]*S[2]*V[126]*V[15]*S[15];
C[10]=+S[3]*(2*S[3]-S[36]);
C[9]=+4*S[3]-S[36];
C[8]=+2*V[122]*V[121]*S[9]*S[21]*V[7]*V[6]*S[37]*S[36];
C[7]=+3*V[466]*V[458]*S[2]*V[125]*V[15]*S[15];
C[6]=+S[3]*(S[2]*(S[36]*(S[36]*(S[35]*(32*S[35]-24)-9)+36*S[3])-36*S[26]));
C[5]=+S[36]*(S[36]*(S[35]*(S[3]*(32*S[35]-24)+S[2]*(32*S[35]-24))+9*S[3])-
 36*S[2]*S[3])+72*S[2]*S[26];
S[38]=V[2]*V[2]*V[2]*V[2];
C[4]=+S[38]*(S[35]*(32*S[35]-24)+9)+36*S[2]*S[3];
C[3]=+S[38]*(S[3]*(S[35]*(64*S[35]-48)+18));
C[2]=+S[38]*(S[35]*(64*S[35]-48)+18);
C[1]=+12*S[9]*S[10]*S[38];
S[39]=V[458]*V[458];
C[0]=+S[39]*S[14];
}
