/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C31(REAL *);
extern DNN S31_omg_p25p25_u;
REAL S31_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
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
width[10]=0.; mass[10]=V[18];  Qtxt[10]="\1\3";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\4";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[16];  Qtxt[7]="\1\4";
width[6]=0.; mass[6]=V[16];  Qtxt[6]="\1\3";
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\4";
width[3]=V[555]; mass[3]=V[10];  Qtxt[3]="\1\2";
width[2]=V[556]; mass[2]=V[11];  Qtxt[2]="\1\2";
width[4]=0.; mass[4]=V[15];  Qtxt[4]="\1\3";
width[1]=V[554]; mass[1]=V[9];  Qtxt[1]="\1\2";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[224];                                                   
if(!momenta){ C31(C); return 0;}
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
N=-C[3];
D=+C[4];
R=+2*DP[0]-C[5]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[7];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[8];
D=+C[7];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[3];
D=+C[4];
R=+C[9]-6*DP[0]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[10];
D=+C[4];
R=+C[12]*DP[0]-C[13]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[10];
D=+C[4];
R=+C[15]-C[14]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[16];
D=+C[4];
R=+C[17]*DP[0]-C[18]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[16];
D=+C[4];
R=+C[20]-C[19]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[21];
D=+C[4];
R=+C[22]*DP[0]-C[23]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[21];
D=+C[4];
R=+C[25]-C[24]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[26];
D=+C[4];
R=+C[28]-C[27]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[26];
D=+C[4];
R=+C[29]*DP[0]-C[30]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[31];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])-C[33])+C[35]+C[34]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[36];
D=+C[37];
R=+2*DP[0]-C[5]+4*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[38];
D=+C[37];
R=+2*DP[0]-C[5]+4*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[31];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[41]*DP[0]-C[42];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[44])+C[46]-C[45]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[43];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[47])+C[48]*DP[0]-C[49];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[50];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[51])+C[53]-C[52]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[50];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[54])+C[55]*DP[0]-C[56];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[57];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[58])+C[60]-C[59]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[57];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[61])+C[62]*DP[0]-C[63];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[64];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[65])+C[66]*DP[0]-C[67];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[64];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[68])+C[70]-C[69]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[71];
D=+C[7];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[72];
D=+C[73];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[36];
D=+C[37];
R=+C[9]-6*DP[0]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[74];
D=+C[37];
R=+C[12]*DP[0]-C[13]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[74];
D=+C[37];
R=+C[15]-C[14]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[75];
D=+C[37];
R=+C[17]*DP[0]-C[18]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[75];
D=+C[37];
R=+C[20]-C[19]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[76];
D=+C[37];
R=+C[22]*DP[0]-C[23]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[76];
D=+C[37];
R=+C[25]-C[24]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[77];
D=+C[37];
R=+C[28]-C[27]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[77];
D=+C[37];
R=+C[29]*DP[0]-C[30]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[78];
D=+C[7];
R=+DP[0]-C[2];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[38];
D=+C[37];
R=+C[9]-6*DP[0]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[79];
D=+C[37];
R=+C[12]*DP[0]-C[13]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[79];
D=+C[37];
R=+C[15]-C[14]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[37];
R=+C[17]*DP[0]-C[18]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[80];
D=+C[37];
R=+C[20]-C[19]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[81];
D=+C[37];
R=+C[22]*DP[0]-C[23]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[81];
D=+C[37];
R=+C[25]-C[24]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[82];
D=+C[37];
R=+C[28]-C[27]*DP[0]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[82];
D=+C[37];
R=+C[29]*DP[0]-C[30]+C[11]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[31];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])+C[83])+C[85]-C[84]*DP[0];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[43];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[86])+C[87]*DP[0]-C[88];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[43];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[89])+C[91]-C[90]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[50];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[92])+C[93]*DP[0]-C[94];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[50];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[95])+C[97]-C[96]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[57];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[98])+C[99]*DP[0]-C[100];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[57];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[101])+C[103]-C[102]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[64];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[104])+C[106]-C[105]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[64];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[107])+C[108]*DP[0]-C[109];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[110];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])-C[111])+C[113]-C[112]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[110];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[114]*DP[0]-C[115];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[116];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[117])+C[119]-C[118]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[116];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[120])+C[121]*DP[0]-C[122];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[123];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[124])+C[126]-C[125]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[123];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[127])+C[128]*DP[0]-C[129];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[130];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[131])+C[132]*DP[0]-C[133];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[130];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[134])+C[136]-C[135]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[110];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])+C[137])+C[139]-C[138]*DP[0];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[116];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[140])+C[141]*DP[0]-C[142];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[116];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[143])+C[145]-C[144]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[123];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[146])+C[147]*DP[0]-C[148];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[123];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[149])+C[151]-C[150]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[130];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[152])+C[154]-C[153]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[130];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[155])+C[156]*DP[0]-C[157];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[158];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])-C[159])+C[161]-C[160]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[158];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[162]*DP[0]-C[163];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[164];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[165])+C[167]-C[166]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[164];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[168])+C[169]*DP[0]-C[170];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[171];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[172])+C[173]*DP[0]-C[174];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[171];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[175])+C[177]-C[176]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[158];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])+C[178])+C[180]-C[179]*DP[0];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[164];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[181])+C[182]*DP[0]-C[183];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[164];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[184])+C[186]-C[185]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[171];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[187])+C[189]-C[188]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[171];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[190])+C[191]*DP[0]-C[192];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[193];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])-C[194])+C[196]-C[195]*DP[0];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[193];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[197]*DP[0]-C[198];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[199];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[200])+C[201]*DP[0]-C[202];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[199];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[203])+C[205]-C[204]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[193];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])+C[206])+C[208]-C[207]*DP[0];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[199];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])+C[209])+C[211]-C[210]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[199];
D=+C[32];
R=+DP[1]*(4*(DP[1]-DP[0])-C[212])+C[213]*DP[0]-C[214];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[215];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])+C[216])+C[218]-C[217]*DP[0];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[215];
D=+C[39];
R=+DP[1]*(2*(DP[1]-DP[0])-C[40])+C[219]*DP[0]-C[220];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[215];
D=+C[32];
R=+DP[1]*(2*(DP[1]-DP[0])-C[221])+C[223]-C[222]*DP[0];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C31(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[37];                                                           
S[0]=V[19]*V[19];
S[1]=V[11]*V[11];
S[2]=V[10]*V[10];
C[223]=+V[15]*(V[15]*(V[15]*(4*V[19]+3*V[15])+S[0]-S[1]+2*S[2])+V[19]*(S[2]-
 S[1]));
S[3]=V[15]*V[15];
C[222]=+S[0]-S[3]-S[2];
C[221]=+V[15]*(4*V[19]+6*V[15])+S[2]-S[1];
C[220]=+S[3]*(V[15]*(2*V[19]+V[15])+S[0]-S[2]);
C[219]=+V[15]*(2*V[19]+V[15])+S[0]+S[2];
C[218]=+V[15]*(V[15]*(S[0]-S[3]+S[1])+V[19]*(S[1]-S[2]));
C[217]=+V[15]*(4*V[19]+3*V[15])+S[0]-S[2];
C[216]=+V[15]*(4*V[19]+2*V[15])+S[1]-S[2];
S[4]=V[544]*V[544];
S[5]=V[540]*V[540];
C[215]=+S[4]*S[5];
C[214]=+V[15]*(V[15]*(2*(V[19]*V[18]+S[3]-S[2])+4*V[18]*V[15])+S[2]*(V[18]-
 V[19])+S[1]*(V[19]-V[18]));
C[213]=+2*(V[19]*V[18]+S[3]+S[2])+4*V[19]*V[15];
C[212]=+V[15]*(4*(V[19]-V[18]+V[15]))+2*(S[2]-S[1]);
C[211]=+V[15]*(S[1]*(V[19]+V[18]+2*V[15])+S[2]*(-V[19]-V[18])+V[15]*(2*(
 V[19]*V[18]-S[3])));
C[210]=+V[15]*(4*(V[19]+V[18])+6*V[15])+2*(V[19]*V[18]-S[2]);
C[209]=+V[15]*(4*(V[19]+V[18]+V[15]))+2*(S[1]-S[2]);
S[6]=V[18]*V[18];
C[208]=+V[15]*(V[15]*(S[6]-S[3]+S[1])+V[18]*(S[1]-S[2]));
C[207]=+V[15]*(4*V[18]+3*V[15])+S[6]-S[2];
C[206]=+V[15]*(4*V[18]+2*V[15])+S[1]-S[2];
C[205]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[18])+6*V[15])+2*(V[19]*V[18]-S[1])+
 4*S[2])+S[2]*(V[19]+V[18])+S[1]*(-V[19]-V[18]));
C[204]=+2*(V[19]*V[18]-S[3]-S[2]);
C[203]=+V[15]*(4*(V[19]+V[18])+12*V[15])+2*(S[2]-S[1]);
C[202]=+V[15]*(V[15]*(2*(V[19]*V[18]+S[3]-S[2])+4*V[19]*V[15])+S[2]*(V[19]-
 V[18])+S[1]*(V[18]-V[19]));
C[201]=+2*(V[19]*V[18]+S[3]+S[2])+4*V[18]*V[15];
C[200]=+V[15]*(4*(V[19]-V[18]-V[15]))+2*(S[1]-S[2]);
C[199]=+V[544]*V[540]*V[523]*V[519];
C[198]=+S[3]*(V[15]*(2*V[18]+V[15])+S[6]-S[2]);
C[197]=+V[15]*(2*V[18]+V[15])+S[6]+S[2];
C[196]=+V[15]*(V[15]*(V[15]*(4*V[18]+3*V[15])+S[6]-S[1]+2*S[2])+V[18]*(S[2]-
 S[1]));
C[195]=+S[6]-S[3]-S[2];
C[194]=+V[15]*(4*V[18]+6*V[15])+S[2]-S[1];
S[7]=V[523]*V[523];
S[8]=V[519]*V[519];
C[193]=+S[7]*S[8];
C[192]=+V[15]*(V[15]*(2*(V[19]*V[17]+S[3]-S[2])+4*V[17]*V[15])+S[2]*(V[17]-
 V[19])+S[1]*(V[19]-V[17]));
C[191]=+2*(V[19]*V[17]+S[3]+S[2])+4*V[19]*V[15];
C[190]=+V[15]*(4*(V[19]-V[17]+V[15]))+2*(S[2]-S[1]);
C[189]=+V[15]*(S[1]*(V[19]+V[17]+2*V[15])+S[2]*(-V[19]-V[17])+V[15]*(2*(
 V[19]*V[17]-S[3])));
C[188]=+V[15]*(4*(V[19]+V[17])+6*V[15])+2*(V[19]*V[17]-S[2]);
C[187]=+V[15]*(4*(V[19]+V[17]+V[15]))+2*(S[1]-S[2]);
C[186]=+V[15]*(S[1]*(V[18]+V[17]+2*V[15])+S[2]*(-V[18]-V[17])+V[15]*(2*(
 V[18]*V[17]-S[3])));
C[185]=+V[15]*(4*(V[18]+V[17])+6*V[15])+2*(V[18]*V[17]-S[2]);
C[184]=+V[15]*(4*(V[18]+V[17]+V[15]))+2*(S[1]-S[2]);
C[183]=+V[15]*(V[15]*(2*(V[18]*V[17]+S[3]-S[2])+4*V[17]*V[15])+S[2]*(V[17]-
 V[18])+S[1]*(V[18]-V[17]));
C[182]=+2*(V[18]*V[17]+S[3]+S[2])+4*V[18]*V[15];
C[181]=+V[15]*(4*(V[18]-V[17]+V[15]))+2*(S[2]-S[1]);
S[9]=V[17]*V[17];
C[180]=+V[15]*(V[15]*(S[9]-S[3]+S[1])+V[17]*(S[1]-S[2]));
C[179]=+V[15]*(4*V[17]+3*V[15])+S[9]-S[2];
C[178]=+V[15]*(4*V[17]+2*V[15])+S[1]-S[2];
C[177]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[17])+6*V[15])+2*(V[19]*V[17]-S[1])+
 4*S[2])+S[2]*(V[19]+V[17])+S[1]*(-V[19]-V[17]));
C[176]=+2*(V[19]*V[17]-S[3]-S[2]);
C[175]=+V[15]*(4*(V[19]+V[17])+12*V[15])+2*(S[2]-S[1]);
C[174]=+V[15]*(V[15]*(2*(V[19]*V[17]+S[3]-S[2])+4*V[19]*V[15])+S[2]*(V[19]-
 V[17])+S[1]*(V[17]-V[19]));
C[173]=+2*(V[19]*V[17]+S[3]+S[2])+4*V[17]*V[15];
C[172]=+V[15]*(4*(V[19]-V[17]-V[15]))+2*(S[1]-S[2]);
C[171]=+V[544]*V[540]*V[502]*V[498];
C[170]=+V[15]*(V[15]*(2*(V[18]*V[17]+S[3]-S[2])+4*V[18]*V[15])+S[2]*(V[18]-
 V[17])+S[1]*(V[17]-V[18]));
C[169]=+2*(V[18]*V[17]+S[3]+S[2])+4*V[17]*V[15];
C[168]=+V[15]*(4*(V[18]-V[17]-V[15]))+2*(S[1]-S[2]);
C[167]=+V[15]*(V[15]*(V[15]*(4*(V[18]+V[17])+6*V[15])+2*(V[18]*V[17]-S[1])+
 4*S[2])+S[2]*(V[18]+V[17])+S[1]*(-V[18]-V[17]));
C[166]=+2*(V[18]*V[17]-S[3]-S[2]);
C[165]=+V[15]*(4*(V[18]+V[17])+12*V[15])+2*(S[2]-S[1]);
C[164]=+V[523]*V[519]*V[502]*V[498];
C[163]=+S[3]*(V[15]*(2*V[17]+V[15])+S[9]-S[2]);
C[162]=+V[15]*(2*V[17]+V[15])+S[9]+S[2];
C[161]=+V[15]*(V[15]*(V[15]*(4*V[17]+3*V[15])+S[9]-S[1]+2*S[2])+V[17]*(S[2]-
 S[1]));
C[160]=+S[9]-S[3]-S[2];
C[159]=+V[15]*(4*V[17]+6*V[15])+S[2]-S[1];
S[10]=V[502]*V[502];
S[11]=V[498]*V[498];
C[158]=+S[10]*S[11];
C[157]=+V[15]*(V[15]*(2*(V[19]*V[16]+S[3]-S[2])+4*V[16]*V[15])+S[2]*(V[16]-
 V[19])+S[1]*(V[19]-V[16]));
C[156]=+2*(V[19]*V[16]+S[3]+S[2])+4*V[19]*V[15];
C[155]=+V[15]*(4*(V[19]-V[16]+V[15]))+2*(S[2]-S[1]);
C[154]=+V[15]*(S[1]*(V[19]+V[16]+2*V[15])+S[2]*(-V[19]-V[16])+V[15]*(2*(
 V[19]*V[16]-S[3])));
C[153]=+V[15]*(4*(V[19]+V[16])+6*V[15])+2*(V[19]*V[16]-S[2]);
C[152]=+V[15]*(4*(V[19]+V[16]+V[15]))+2*(S[1]-S[2]);
C[151]=+V[15]*(S[1]*(V[18]+V[16]+2*V[15])+S[2]*(-V[18]-V[16])+V[15]*(2*(
 V[18]*V[16]-S[3])));
C[150]=+V[15]*(4*(V[18]+V[16])+6*V[15])+2*(V[18]*V[16]-S[2]);
C[149]=+V[15]*(4*(V[18]+V[16]+V[15]))+2*(S[1]-S[2]);
C[148]=+V[15]*(V[15]*(2*(V[18]*V[16]+S[3]-S[2])+4*V[16]*V[15])+S[2]*(V[16]-
 V[18])+S[1]*(V[18]-V[16]));
C[147]=+2*(V[18]*V[16]+S[3]+S[2])+4*V[18]*V[15];
C[146]=+V[15]*(4*(V[18]-V[16]+V[15]))+2*(S[2]-S[1]);
C[145]=+V[15]*(S[1]*(V[17]+V[16]+2*V[15])+S[2]*(-V[17]-V[16])+V[15]*(2*(
 V[17]*V[16]-S[3])));
C[144]=+V[15]*(4*(V[17]+V[16])+6*V[15])+2*(V[17]*V[16]-S[2]);
C[143]=+V[15]*(4*(V[17]+V[16]+V[15]))+2*(S[1]-S[2]);
C[142]=+V[15]*(V[15]*(2*(V[17]*V[16]+S[3]-S[2])+4*V[16]*V[15])+S[2]*(V[16]-
 V[17])+S[1]*(V[17]-V[16]));
C[141]=+2*(V[17]*V[16]+S[3]+S[2])+4*V[17]*V[15];
C[140]=+V[15]*(4*(V[17]-V[16]+V[15]))+2*(S[2]-S[1]);
S[12]=V[16]*V[16];
C[139]=+V[15]*(V[15]*(S[12]-S[3]+S[1])+V[16]*(S[1]-S[2]));
C[138]=+V[15]*(4*V[16]+3*V[15])+S[12]-S[2];
C[137]=+V[15]*(4*V[16]+2*V[15])+S[1]-S[2];
C[136]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[16])+6*V[15])+2*(V[19]*V[16]-S[1])+
 4*S[2])+S[2]*(V[19]+V[16])+S[1]*(-V[19]-V[16]));
C[135]=+2*(V[19]*V[16]-S[3]-S[2]);
C[134]=+V[15]*(4*(V[19]+V[16])+12*V[15])+2*(S[2]-S[1]);
C[133]=+V[15]*(V[15]*(2*(V[19]*V[16]+S[3]-S[2])+4*V[19]*V[15])+S[2]*(V[19]-
 V[16])+S[1]*(V[16]-V[19]));
C[132]=+2*(V[19]*V[16]+S[3]+S[2])+4*V[16]*V[15];
C[131]=+V[15]*(4*(V[19]-V[16]-V[15]))+2*(S[1]-S[2]);
C[130]=+V[544]*V[540]*V[481]*V[477];
C[129]=+V[15]*(V[15]*(2*(V[18]*V[16]+S[3]-S[2])+4*V[18]*V[15])+S[2]*(V[18]-
 V[16])+S[1]*(V[16]-V[18]));
C[128]=+2*(V[18]*V[16]+S[3]+S[2])+4*V[16]*V[15];
C[127]=+V[15]*(4*(V[18]-V[16]-V[15]))+2*(S[1]-S[2]);
C[126]=+V[15]*(V[15]*(V[15]*(4*(V[18]+V[16])+6*V[15])+2*(V[18]*V[16]-S[1])+
 4*S[2])+S[2]*(V[18]+V[16])+S[1]*(-V[18]-V[16]));
C[125]=+2*(V[18]*V[16]-S[3]-S[2]);
C[124]=+V[15]*(4*(V[18]+V[16])+12*V[15])+2*(S[2]-S[1]);
C[123]=+V[523]*V[519]*V[481]*V[477];
C[122]=+V[15]*(V[15]*(2*(V[17]*V[16]+S[3]-S[2])+4*V[17]*V[15])+S[2]*(V[17]-
 V[16])+S[1]*(V[16]-V[17]));
C[121]=+2*(V[17]*V[16]+S[3]+S[2])+4*V[16]*V[15];
C[120]=+V[15]*(4*(V[17]-V[16]-V[15]))+2*(S[1]-S[2]);
C[119]=+V[15]*(V[15]*(V[15]*(4*(V[17]+V[16])+6*V[15])+2*(V[17]*V[16]-S[1])+
 4*S[2])+S[2]*(V[17]+V[16])+S[1]*(-V[17]-V[16]));
C[118]=+2*(V[17]*V[16]-S[3]-S[2]);
C[117]=+V[15]*(4*(V[17]+V[16])+12*V[15])+2*(S[2]-S[1]);
C[116]=+V[502]*V[498]*V[481]*V[477];
C[115]=+S[3]*(V[15]*(2*V[16]+V[15])+S[12]-S[2]);
C[114]=+V[15]*(2*V[16]+V[15])+S[12]+S[2];
C[113]=+V[15]*(V[15]*(V[15]*(4*V[16]+3*V[15])+S[12]-S[1]+2*S[2])+V[16]*(
 S[2]-S[1]));
C[112]=+S[12]-S[3]-S[2];
C[111]=+V[15]*(4*V[16]+6*V[15])+S[2]-S[1];
S[13]=V[481]*V[481];
S[14]=V[477]*V[477];
C[110]=+S[13]*S[14];
C[109]=+V[15]*(V[15]*(V[15]*(2*V[19]+6*V[15])-S[1]-S[2])+V[19]*(S[1]-S[2]));
C[108]=+V[15]*(6*V[19]+2*V[15])+2*S[2];
C[107]=+2*(S[2]-S[1])+4*V[19]*V[15];
C[106]=+V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+3*S[1]-S[2])+V[19]*(S[1]-
 S[2]));
C[105]=+V[15]*(6*V[19]+10*V[15])-2*S[2];
C[104]=+V[15]*(4*V[19]+8*V[15])+2*(S[1]-S[2]);
C[103]=+V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+3*S[1]-S[2])+V[18]*(S[1]-
 S[2]));
C[102]=+V[15]*(6*V[18]+10*V[15])-2*S[2];
C[101]=+V[15]*(4*V[18]+8*V[15])+2*(S[1]-S[2]);
C[100]=+V[15]*(V[15]*(V[15]*(2*V[18]+6*V[15])-S[1]-S[2])+V[18]*(S[1]-S[2]));
C[99]=+V[15]*(6*V[18]+2*V[15])+2*S[2];
C[98]=+2*(S[2]-S[1])+4*V[18]*V[15];
C[97]=+V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+3*S[1]-S[2])+V[17]*(S[1]-
 S[2]));
C[96]=+V[15]*(6*V[17]+10*V[15])-2*S[2];
C[95]=+V[15]*(4*V[17]+8*V[15])+2*(S[1]-S[2]);
C[94]=+V[15]*(V[15]*(V[15]*(2*V[17]+6*V[15])-S[1]-S[2])+V[17]*(S[1]-S[2]));
C[93]=+V[15]*(6*V[17]+2*V[15])+2*S[2];
C[92]=+2*(S[2]-S[1])+4*V[17]*V[15];
C[91]=+V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+3*S[1]-S[2])+V[16]*(S[1]-
 S[2]));
C[90]=+V[15]*(6*V[16]+10*V[15])-2*S[2];
C[89]=+V[15]*(4*V[16]+8*V[15])+2*(S[1]-S[2]);
C[88]=+V[15]*(V[15]*(V[15]*(2*V[16]+6*V[15])-S[1]-S[2])+V[16]*(S[1]-S[2]));
C[87]=+V[15]*(6*V[16]+2*V[15])+2*S[2];
C[86]=+2*(S[2]-S[1])+4*V[16]*V[15];
C[85]=+S[3]*(2*S[1]-S[2]);
C[84]=+8*S[3]-S[2];
C[83]=+6*S[3]+S[1]-S[2];
C[82]=+V[544]*V[540]*V[462]*V[365];
C[81]=+V[523]*V[519]*V[462]*V[365];
C[80]=+V[502]*V[498]*V[462]*V[365];
C[79]=+V[481]*V[477]*V[462]*V[365];
S[15]=V[462]*V[462];
S[16]=V[365]*V[365];
C[78]=+S[15]*S[16];
C[77]=+V[544]*V[540]*V[464]*V[378];
C[76]=+V[523]*V[519]*V[464]*V[378];
C[75]=+V[502]*V[498]*V[464]*V[378];
C[74]=+V[481]*V[477]*V[464]*V[378];
S[17]=V[122]*V[122];
S[18]=V[121]*V[121];
S[19]=V[119]*V[119];
S[20]=V[7]*V[7];
S[21]=V[3]*V[3];
S[22]=V[1]*V[1];
C[73]=+2*S[17]*S[18]*S[19]*S[20]*S[21]*S[22];
C[72]=+V[464]*V[462]*V[378]*V[365];
S[23]=V[464]*V[464];
S[24]=V[378]*V[378];
C[71]=+S[23]*S[24];
C[70]=+V[15]*(V[15]*(V[15]*(6*V[19]+10*V[15])+5*S[2]-3*S[1])+V[19]*(S[2]-
 S[1]));
C[69]=+2*(V[15]*(V[19]-V[15])-S[2]);
C[68]=+V[15]*(4*V[19]+16*V[15])+2*(S[2]-S[1]);
C[67]=+V[15]*(V[15]*(V[15]*(6*V[19]+2*V[15])+S[1]-3*S[2])+V[19]*(S[2]-
 S[1]));
C[66]=+V[15]*(2*V[19]+6*V[15])+2*S[2];
C[65]=+V[15]*(4*V[19]-8*V[15])+2*(S[1]-S[2]);
C[64]=+V[544]*V[540]*V[464]*V[462];
C[63]=+V[15]*(V[15]*(V[15]*(6*V[18]+2*V[15])+S[1]-3*S[2])+V[18]*(S[2]-
 S[1]));
C[62]=+V[15]*(2*V[18]+6*V[15])+2*S[2];
C[61]=+V[15]*(4*V[18]-8*V[15])+2*(S[1]-S[2]);
C[60]=+V[15]*(V[15]*(V[15]*(6*V[18]+10*V[15])+5*S[2]-3*S[1])+V[18]*(S[2]-
 S[1]));
C[59]=+2*(V[15]*(V[18]-V[15])-S[2]);
C[58]=+V[15]*(4*V[18]+16*V[15])+2*(S[2]-S[1]);
C[57]=+V[523]*V[519]*V[464]*V[462];
C[56]=+V[15]*(V[15]*(V[15]*(6*V[17]+2*V[15])+S[1]-3*S[2])+V[17]*(S[2]-
 S[1]));
C[55]=+V[15]*(2*V[17]+6*V[15])+2*S[2];
C[54]=+V[15]*(4*V[17]-8*V[15])+2*(S[1]-S[2]);
C[53]=+V[15]*(V[15]*(V[15]*(6*V[17]+10*V[15])+5*S[2]-3*S[1])+V[17]*(S[2]-
 S[1]));
C[52]=+2*(V[15]*(V[17]-V[15])-S[2]);
C[51]=+V[15]*(4*V[17]+16*V[15])+2*(S[2]-S[1]);
C[50]=+V[502]*V[498]*V[464]*V[462];
C[49]=+V[15]*(V[15]*(V[15]*(6*V[16]+2*V[15])+S[1]-3*S[2])+V[16]*(S[2]-
 S[1]));
C[48]=+V[15]*(2*V[16]+6*V[15])+2*S[2];
C[47]=+V[15]*(4*V[16]-8*V[15])+2*(S[1]-S[2]);
C[46]=+V[15]*(V[15]*(V[15]*(6*V[16]+10*V[15])+5*S[2]-3*S[1])+V[16]*(S[2]-
 S[1]));
C[45]=+2*(V[15]*(V[16]-V[15])-S[2]);
C[44]=+V[15]*(4*V[16]+16*V[15])+2*(S[2]-S[1]);
C[43]=+V[481]*V[477]*V[464]*V[462];
C[42]=+S[3]*(4*S[3]-S[2]);
C[41]=+4*S[3]+S[2];
C[40]=+2*S[3]-S[1]+S[2];
S[25]=V[122]*V[122]*V[122]*V[122];
S[26]=V[121]*V[121]*V[121]*V[121];
S[27]=V[119]*V[119]*V[119]*V[119];
S[28]=V[7]*V[7]*V[7]*V[7];
S[29]=V[3]*V[3]*V[3]*V[3];
C[39]=+8*S[25]*S[26]*S[27]*S[28]*S[29];
C[38]=+V[464]*S[15]*V[365]*V[15];
S[30]=V[122]*V[122]*V[122];
S[31]=V[121]*V[121]*V[121];
S[32]=V[119]*V[119]*V[119];
S[33]=V[7]*V[7]*V[7];
S[34]=V[3]*V[3]*V[3];
C[37]=+8*S[30]*S[31]*S[32]*S[33]*S[34]*V[1];
C[36]=+S[23]*V[462]*V[378]*V[15];
C[35]=+S[3]*(8*S[3]-2*S[1]+3*S[2]);
C[34]=+S[2];
C[33]=+10*S[3]-S[1]+S[2];
C[32]=+16*S[25]*S[26]*S[27]*S[28]*S[29];
C[31]=+S[23]*S[15];
C[30]=+V[15]*(V[15]*(2*V[19]+4*V[15])+S[2]-S[1]);
C[29]=+2*V[19];
C[28]=+V[15]*(2*V[19]*V[15]+S[1]-S[2]);
C[27]=+2*V[19]+4*V[15];
C[26]=+V[544]*V[540]*V[460]*V[300];
C[25]=+V[15]*(2*V[18]*V[15]+S[1]-S[2]);
C[24]=+2*V[18]+4*V[15];
C[23]=+V[15]*(V[15]*(2*V[18]+4*V[15])+S[2]-S[1]);
C[22]=+2*V[18];
C[21]=+V[523]*V[519]*V[460]*V[300];
C[20]=+V[15]*(2*V[17]*V[15]+S[1]-S[2]);
C[19]=+2*V[17]+4*V[15];
C[18]=+V[15]*(V[15]*(2*V[17]+4*V[15])+S[2]-S[1]);
C[17]=+2*V[17];
C[16]=+V[502]*V[498]*V[460]*V[300];
C[15]=+V[15]*(2*V[16]*V[15]+S[1]-S[2]);
C[14]=+2*V[16]+4*V[15];
C[13]=+V[15]*(V[15]*(2*V[16]+4*V[15])+S[2]-S[1]);
C[12]=+2*V[16];
C[11]=+4*V[15];
C[10]=+V[481]*V[477]*V[460]*V[300];
C[9]=+2*S[3]+S[1]-S[2];
C[8]=+V[462]*V[460]*V[365]*V[300];
C[7]=+4*S[17]*S[18]*S[19]*S[20]*S[21]*S[22];
C[6]=+V[464]*V[460]*V[378]*V[300];
C[5]=+6*S[3]-S[1]+S[2];
C[4]=+16*S[30]*S[31]*S[32]*S[33]*S[34]*V[1];
C[3]=+V[464]*V[462]*V[460]*V[300]*V[15];
C[2]=+S[3];
C[1]=+16*S[17]*S[18]*S[19]*S[20]*S[21]*S[22];
S[35]=V[460]*V[460];
S[36]=V[300]*V[300];
C[0]=+S[35]*S[36];
}
