/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C30(REAL *);
extern DNN S30_omg_p25p25_u;
REAL S30_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[14],width[14];
char * Qtxt[14];
REAL Q0[14]; COMPLEX Q1[14]; REAL Q2[14];
 if(momenta)
 {width[3]=V[553]; mass[3]=V[2];  Qtxt[3]="\1\2";
width[13]=0.; mass[13]=V[15];  Qtxt[13]="\1\3";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[12]=0.; mass[12]=V[15];  Qtxt[12]="\1\4";
width[1]=V[558]; mass[1]=V[13];  Qtxt[1]="\1\2";
width[11]=0.; mass[11]=V[16];  Qtxt[11]="\1\3";
width[10]=0.; mass[10]=V[16];  Qtxt[10]="\1\4";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\3";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\4";
width[7]=0.; mass[7]=V[18];  Qtxt[7]="\1\3";
width[6]=0.; mass[6]=V[18];  Qtxt[6]="\1\4";
width[5]=0.; mass[5]=V[19];  Qtxt[5]="\1\4";
width[4]=0.; mass[4]=V[19];  Qtxt[4]="\1\3";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[114];                                                   
if(!momenta){ C30(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[4]-C[3]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[4]-C[3]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[6];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[9]-C[8]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[6];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[9]-C[8]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[10];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[12]-C[11]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[10];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[12]-C[11]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[15]-C[14]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[15]-C[14]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[16];
D=+C[17];
R=+C[19]+C[18]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[22]-C[21]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[23];
D=+C[24];
R=+C[19]+C[18]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[22]-C[21]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[25];
D=+C[26];
R=+DP[0]*(-C[30]-C[29]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[31];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[4]-C[3]*DP[0];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[6];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[9]-C[8]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[6];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[9]-C[8]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[10];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[12]-C[11]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[10];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[12]-C[11]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[15]-C[14]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[15]-C[14]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[16];
D=+C[17];
R=+C[19]+C[18]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[22]-C[21]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[23];
D=+C[24];
R=+C[19]+C[18]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[20];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[22]-C[21]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[25];
D=+C[26];
R=+DP[0]*(-C[30]-C[29]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[31];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[32];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[34]-C[33]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[32];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[34]-C[33]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[37]-C[36]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[37]-C[36]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[40]-C[39]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[40]-C[39]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[41];
D=+C[17];
R=+C[43]+C[42]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[44];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[46]-C[45]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[47];
D=+C[24];
R=+C[43]+C[42]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[44];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[46]-C[45]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[48];
D=+C[26];
R=+DP[0]*(-C[50]-C[49]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[51];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[32];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[34]-C[33]*DP[0];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[37]-C[36]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[37]-C[36]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[40]-C[39]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[40]-C[39]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[41];
D=+C[17];
R=+C[43]+C[42]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[44];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[46]-C[45]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[47];
D=+C[24];
R=+C[43]+C[42]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[44];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[46]-C[45]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[48];
D=+C[26];
R=+DP[0]*(-C[50]-C[49]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[51];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[52];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[54]-C[53]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[52];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[54]-C[53]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[57]-C[56]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[57]-C[56]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[58];
D=+C[17];
R=+C[60]+C[59]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[61];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[63]-C[62]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[64];
D=+C[24];
R=+C[60]+C[59]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[61];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[63]-C[62]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[65];
D=+C[26];
R=+DP[0]*(-C[67]-C[66]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[68];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[52];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[54]-C[53]*DP[0];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[57]-C[56]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[57]-C[56]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[58];
D=+C[17];
R=+C[60]+C[59]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[61];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[63]-C[62]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[64];
D=+C[24];
R=+C[60]+C[59]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[61];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[63]-C[62]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[65];
D=+C[26];
R=+DP[0]*(-C[67]-C[66]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[68];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[69];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[71]-C[70]*DP[0];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[69];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[71]-C[70]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[72];
D=+C[17];
R=+C[74]+C[73]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[75];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[77]-C[76]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[78];
D=+C[24];
R=+C[74]+C[73]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[75];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[77]-C[76]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[79];
D=+C[26];
R=+DP[0]*(-C[81]-C[80]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[82];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[69];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])-C[71]-C[70]*DP[0];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[72];
D=+C[17];
R=+C[74]+C[73]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[75];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[77]-C[76]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[78];
D=+C[24];
R=+C[74]+C[73]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[75];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[7])-C[77]-C[76]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[79];
D=+C[26];
R=+DP[0]*(-C[81]-C[80]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-C[82];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[83];
D=+C[84];
R=+C[85]+DP[0];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[86];
D=+C[17];
R=+C[87]+2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[88];
D=+C[89];
R=+C[85]+DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[86];
D=+C[17];
R=+C[87]+2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[90];
D=+C[91];
R=+DP[0]*(C[93]+C[92]*DP[0])+C[94];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[95];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])+C[96]*DP[0]-C[97];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[98];
D=+C[24];
R=+C[87]+2*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[95];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])+C[96]*DP[0]-C[97];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[99];
D=+C[26];
R=+DP[0]*(-C[101]-C[100]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-
 C[102];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[103];
D=+C[89];
R=+C[85]+DP[0];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[98];
D=+C[24];
R=+C[87]+2*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[104];
D=+C[105];
R=+DP[0]*(C[93]+C[92]*DP[0])+C[94];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[95];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[2])+C[96]*DP[0]-C[97];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[99];
D=+C[26];
R=+DP[0]*(-C[101]-C[100]*DP[0]-C[27]*DP[1])+DP[1]*(C[27]*DP[1]-C[28])-
 C[102];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[13]):Q1[13])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[106];
D=+C[107];
R=+DP[0]*(DP[0]*(-C[111]-C[110]*DP[0])-C[112]-C[108]*DP[1])+DP[1]*(C[108]*
 DP[1]-C[109])-C[113];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C30(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[47];                                                           
S[0]=V[15]*V[15];
S[1]=V[12]*V[12];
S[2]=V[10]*V[10];
S[3]=V[2]*V[2];
S[4]=V[12]*V[12]*V[12]*V[12];
S[5]=V[15]*V[15]*V[15]*V[15];
S[6]=V[212]*V[212];
C[113]=+S[0]*(S[0]*(V[211]*(V[211]*(4*(S[0]*(S[0]+S[1]-S[2]-S[3])+S[3]*(
 S[2]-S[1]))+S[2]*(S[2]-2*S[1])+S[4])+V[212]*(S[3]*(4*S[3]-8*S[0])+S[2]*(4*
 S[1]-2*S[2])+8*S[5]-2*S[4]))+S[6]*(4*(S[0]*(S[0]-S[1]+S[2]-S[3])+S[3]*(
 S[1]-S[2]))+S[2]*(S[2]-2*S[1])+S[4]))+S[3]*(V[211]*(S[1]*(2*(S[3]*(V[211]-
 V[212])+V[212]*S[1]+V[211]*S[2])-4*V[212]*S[2]-V[211]*S[1])+S[2]*(S[2]*(2*
 V[212]-V[211])-V[211]*S[3]))+S[6]*(S[2]*(2*S[1]-S[2]+S[3])-S[4])));
S[7]=V[2]*V[2]*V[2]*V[2];
C[112]=+S[0]*(V[211]*(V[211]*(S[2]*(S[2]-8*S[0]-2*S[1]+4*S[3])+S[1]*(8*S[0]+
 S[1]-4*S[3])+S[0]*(12*S[0]-8*S[3]))+V[212]*(S[3]*(4*S[3]-16*S[0])+S[2]*(4*
 S[1]-2*S[2])+24*S[5]-2*S[4]))+S[6]*(S[2]*(8*S[0]-2*S[1]+S[2]-4*S[3])+S[1]*(
 S[1]-8*S[0]+4*S[3])+S[0]*(12*S[0]-8*S[3])))+S[7]*(S[2]*(V[211]*(2*V[212]-
 V[211])-S[6]));
C[111]=+S[0]*(V[211]*(V[211]*(4*(S[1]-S[2]-S[3])+12*S[0])+V[212]*(24*S[0]-8*
 S[3]))+S[6]*(4*(S[2]-S[1]-S[3])+12*S[0]));
C[110]=+S[0]*(V[211]*(8*V[212]+4*V[211])+4*S[6]);
C[109]=+S[7]*(V[211]*(V[211]*(2*S[0]-S[1]+S[2])+V[212]*(2*(S[1]-S[2])-4*
 S[0]))+S[6]*(2*S[0]-S[1]+S[2]));
C[108]=+S[7]*(V[211]*(2*V[211]-4*V[212])+2*S[6]);
S[8]=V[119]*V[119]*V[119]*V[119];
S[9]=V[118]*V[118]*V[118]*V[118];
C[107]=+16*S[8]*S[9]*S[7];
S[10]=V[458]*V[458];
S[11]=V[125]*V[125];
S[12]=V[1]*V[1]*V[1]*V[1];
C[106]=+S[10]*S[11]*S[12];
S[13]=V[119]*V[119]*V[119];
S[14]=V[118]*V[118];
C[105]=+8*V[122]*V[121]*S[13]*S[14]*V[7]*V[3]*S[3];
C[104]=+V[466]*V[458]*V[388]*V[125]*V[15]*V[1];
S[15]=V[466]*V[466];
S[16]=V[388]*V[388];
C[103]=+S[15]*S[16];
S[17]=V[10]*V[10]*V[10]*V[10];
C[102]=+S[0]*(V[211]*(S[2]*(2*(S[3]-S[1])+S[2]-4*S[0])+S[1]*(4*(S[0]-S[3])+
 S[1])+4*S[5])+V[212]*(S[1]*(2*(S[2]+S[3])-S[1])+S[0]*(4*(S[0]-S[3]))-
 S[17]));
C[101]=+S[0]*(V[211]*(4*(S[1]-S[2])+8*S[0])+V[212]*(8*S[0]-4*S[3]))+S[3]*(
 S[2]*(2*(V[211]-V[212])));
C[100]=+S[0]*(4*(V[212]+V[211]));
S[18]=V[1]*V[1];
C[99]=+V[466]*V[462]*V[458]*V[125]*S[18];
C[98]=+S[15]*V[462]*V[388]*V[15];
C[97]=+S[0]*(2*S[1]-S[2]);
C[96]=+S[2];
S[19]=V[462]*V[462];
C[95]=+S[15]*S[19];
C[94]=+S[0]*(2*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3]))+S[0]*(4*(
 V[212]+V[211])))+S[3]*(S[2]*(V[211]-V[212])+S[1]*(V[212]-V[211]));
C[93]=+2*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3]))+S[0]*(8*(V[212]+
 V[211]));
C[92]=+4*(V[212]+V[211]);
C[91]=+16*V[122]*V[121]*S[13]*S[14]*V[7]*V[3]*S[3];
C[90]=+V[468]*V[458]*V[400]*V[125]*V[15]*V[1];
S[20]=V[122]*V[122];
S[21]=V[121]*V[121];
S[22]=V[119]*V[119];
S[23]=V[7]*V[7];
S[24]=V[3]*V[3];
C[89]=+4*S[20]*S[21]*S[22]*S[23]*S[24]*S[18];
C[88]=+V[468]*V[466]*V[400]*V[388];
C[87]=+2*S[0]+S[1]-S[2];
C[86]=+V[468]*V[466]*V[462]*V[400]*V[15];
C[85]=+S[0];
C[84]=+16*S[20]*S[21]*S[22]*S[23]*S[24]*S[18];
S[25]=V[468]*V[468];
S[26]=V[400]*V[400];
C[83]=+S[25]*S[26];
C[82]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-
 S[2]-S[3]))+V[16]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(
 V[16]*(4*(V[212]+V[211]))))+S[2]*(V[211]*(S[2]-2*S[1]+S[3])+V[212]*(2*S[1]-
 S[2]+S[3]))+S[1]*(S[3]*(V[212]-3*V[211])+S[1]*(V[211]-V[212])))+S[3]*(
 V[16]*(S[2]*(V[211]-V[212])+S[1]*(V[212]-V[211]))));
C[81]=+V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-S[2]-S[3]))+
 V[16]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(V[16]*(8*(
 V[212]+V[211]))))+S[3]*(S[2]*(2*(V[211]-V[212])));
C[80]=+V[15]*(V[16]*(4*(V[212]+V[211])));
C[79]=+V[485]*V[477]*V[458]*V[125]*S[18];
C[78]=+V[485]*V[477]*V[466]*V[388];
C[77]=+V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+3*S[1]-S[2])+V[16]*(S[1]-
 S[2]));
C[76]=+2*(V[15]*(V[16]-V[15])-S[2]);
C[75]=+V[485]*V[477]*V[466]*V[462];
C[74]=+V[15]*(2*V[16]*V[15]+S[1]-S[2]);
C[73]=+2*V[16];
C[72]=+V[485]*V[477]*V[468]*V[400];
S[27]=V[16]*V[16];
C[71]=+V[15]*(V[15]*(S[27]-S[0]+S[1])+V[16]*(S[1]-S[2]));
C[70]=+S[27]-S[0]-S[2];
S[28]=V[485]*V[485];
S[29]=V[477]*V[477];
C[69]=+S[28]*S[29];
C[68]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-
 S[2]-S[3]))+V[17]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(
 V[17]*(4*(V[212]+V[211]))))+S[2]*(V[211]*(S[2]-2*S[1]+S[3])+V[212]*(2*S[1]-
 S[2]+S[3]))+S[1]*(S[3]*(V[212]-3*V[211])+S[1]*(V[211]-V[212])))+S[3]*(
 V[17]*(S[2]*(V[211]-V[212])+S[1]*(V[212]-V[211]))));
C[67]=+V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-S[2]-S[3]))+
 V[17]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(V[17]*(8*(
 V[212]+V[211]))))+S[3]*(S[2]*(2*(V[211]-V[212])));
C[66]=+V[15]*(V[17]*(4*(V[212]+V[211])));
C[65]=+V[506]*V[498]*V[458]*V[125]*S[18];
C[64]=+V[506]*V[498]*V[466]*V[388];
C[63]=+V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+3*S[1]-S[2])+V[17]*(S[1]-
 S[2]));
C[62]=+2*(V[15]*(V[17]-V[15])-S[2]);
C[61]=+V[506]*V[498]*V[466]*V[462];
C[60]=+V[15]*(2*V[17]*V[15]+S[1]-S[2]);
C[59]=+2*V[17];
C[58]=+V[506]*V[498]*V[468]*V[400];
C[57]=+V[15]*(S[1]*(V[17]+V[16]+2*V[15])+S[2]*(-V[17]-V[16])+V[15]*(2*(
 V[17]*V[16]-S[0])));
C[56]=+2*(V[17]*V[16]-S[0]-S[2]);
C[55]=+V[506]*V[498]*V[485]*V[477];
S[30]=V[17]*V[17];
C[54]=+V[15]*(V[15]*(S[30]-S[0]+S[1])+V[17]*(S[1]-S[2]));
C[53]=+S[30]-S[0]-S[2];
S[31]=V[506]*V[506];
S[32]=V[498]*V[498];
C[52]=+S[31]*S[32];
C[51]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-
 S[2]-S[3]))+V[18]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(
 V[18]*(4*(V[212]+V[211]))))+S[2]*(V[211]*(S[2]-2*S[1]+S[3])+V[212]*(2*S[1]-
 S[2]+S[3]))+S[1]*(S[3]*(V[212]-3*V[211])+S[1]*(V[211]-V[212])))+S[3]*(
 V[18]*(S[2]*(V[211]-V[212])+S[1]*(V[212]-V[211]))));
C[50]=+V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-S[2]-S[3]))+
 V[18]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(V[18]*(8*(
 V[212]+V[211]))))+S[3]*(S[2]*(2*(V[211]-V[212])));
C[49]=+V[15]*(V[18]*(4*(V[212]+V[211])));
C[48]=+V[527]*V[519]*V[458]*V[125]*S[18];
C[47]=+V[527]*V[519]*V[466]*V[388];
C[46]=+V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+3*S[1]-S[2])+V[18]*(S[1]-
 S[2]));
C[45]=+2*(V[15]*(V[18]-V[15])-S[2]);
C[44]=+V[527]*V[519]*V[466]*V[462];
C[43]=+V[15]*(2*V[18]*V[15]+S[1]-S[2]);
C[42]=+2*V[18];
C[41]=+V[527]*V[519]*V[468]*V[400];
C[40]=+V[15]*(S[1]*(V[18]+V[16]+2*V[15])+S[2]*(-V[18]-V[16])+V[15]*(2*(
 V[18]*V[16]-S[0])));
C[39]=+2*(V[18]*V[16]-S[0]-S[2]);
C[38]=+V[527]*V[519]*V[485]*V[477];
C[37]=+V[15]*(S[1]*(V[18]+V[17]+2*V[15])+S[2]*(-V[18]-V[17])+V[15]*(2*(
 V[18]*V[17]-S[0])));
C[36]=+2*(V[18]*V[17]-S[0]-S[2]);
C[35]=+V[527]*V[519]*V[506]*V[498];
S[33]=V[18]*V[18];
C[34]=+V[15]*(V[15]*(S[33]-S[0]+S[1])+V[18]*(S[1]-S[2]));
C[33]=+S[33]-S[0]-S[2];
S[34]=V[527]*V[527];
S[35]=V[519]*V[519];
C[32]=+S[34]*S[35];
C[31]=+V[15]*(V[15]*(V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-
 S[2]-S[3]))+V[19]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(
 V[19]*(4*(V[212]+V[211]))))+S[2]*(V[211]*(S[2]-2*S[1]+S[3])+V[212]*(2*S[1]-
 S[2]+S[3]))+S[1]*(S[3]*(V[212]-3*V[211])+S[1]*(V[211]-V[212])))+S[3]*(
 V[19]*(S[2]*(V[211]-V[212])+S[1]*(V[212]-V[211]))));
C[30]=+V[15]*(2*(V[15]*(V[211]*(S[1]-S[2]+S[3])+V[212]*(S[1]-S[2]-S[3]))+
 V[19]*(V[211]*(S[1]-S[2]-S[3])+V[212]*(S[2]-S[1]-S[3])))+S[0]*(V[19]*(8*(
 V[212]+V[211]))))+S[3]*(S[2]*(2*(V[211]-V[212])));
C[29]=+V[15]*(V[19]*(4*(V[212]+V[211])));
C[28]=+S[3]*(2*(S[2]*(V[212]-V[211])+S[1]*(V[211]-V[212]))+S[0]*(4*(V[212]-
 V[211])));
C[27]=+S[3]*(4*(V[212]-V[211]));
C[26]=+16*S[20]*S[21]*S[8]*S[14]*S[23]*S[24]*S[3];
C[25]=+V[548]*V[540]*V[458]*V[125]*S[18];
S[36]=V[122]*V[122]*V[122];
S[37]=V[121]*V[121]*V[121];
S[38]=V[7]*V[7]*V[7];
S[39]=V[3]*V[3]*V[3];
C[24]=+8*S[36]*S[37]*S[13]*S[38]*S[39]*V[1];
C[23]=+V[548]*V[540]*V[466]*V[388];
C[22]=+V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+3*S[1]-S[2])+V[19]*(S[1]-
 S[2]));
C[21]=+2*(V[15]*(V[19]-V[15])-S[2]);
C[20]=+V[548]*V[540]*V[466]*V[462];
C[19]=+V[15]*(2*V[19]*V[15]+S[1]-S[2]);
C[18]=+2*V[19];
C[17]=+16*S[36]*S[37]*S[13]*S[38]*S[39]*V[1];
C[16]=+V[548]*V[540]*V[468]*V[400];
C[15]=+V[15]*(S[1]*(V[19]+V[16]+2*V[15])+S[2]*(-V[19]-V[16])+V[15]*(2*(
 V[19]*V[16]-S[0])));
C[14]=+2*(V[19]*V[16]-S[0]-S[2]);
C[13]=+V[548]*V[540]*V[485]*V[477];
C[12]=+V[15]*(S[1]*(V[19]+V[17]+2*V[15])+S[2]*(-V[19]-V[17])+V[15]*(2*(
 V[19]*V[17]-S[0])));
C[11]=+2*(V[19]*V[17]-S[0]-S[2]);
C[10]=+V[548]*V[540]*V[506]*V[498];
C[9]=+V[15]*(S[1]*(V[19]+V[18]+2*V[15])+S[2]*(-V[19]-V[18])+V[15]*(2*(V[19]*
 V[18]-S[0])));
C[8]=+2*(V[19]*V[18]-S[0]-S[2]);
C[7]=+2*(S[2]-S[1])+4*S[0];
C[6]=+V[548]*V[540]*V[527]*V[519];
S[40]=V[122]*V[122]*V[122]*V[122];
S[41]=V[121]*V[121]*V[121]*V[121];
S[42]=V[7]*V[7]*V[7]*V[7];
S[43]=V[3]*V[3]*V[3]*V[3];
C[5]=+8*S[40]*S[41]*S[8]*S[42]*S[43];
S[44]=V[19]*V[19];
C[4]=+V[15]*(V[15]*(S[44]-S[0]+S[1])+V[19]*(S[1]-S[2]));
C[3]=+S[44]-S[0]-S[2];
C[2]=+2*S[0]-S[1]+S[2];
C[1]=+16*S[40]*S[41]*S[8]*S[42]*S[43];
S[45]=V[548]*V[548];
S[46]=V[540]*V[540];
C[0]=+S[45]*S[46];
}
