/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C27(REAL *);
extern DNN S27_omg_p25p25_u;
REAL S27_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
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
width[12]=0.; mass[12]=V[15];  Qtxt[12]="\1\4";
width[1]=V[556]; mass[1]=V[11];  Qtxt[1]="\1\2";
width[11]=0.; mass[11]=V[16];  Qtxt[11]="\1\3";
width[10]=0.; mass[10]=V[16];  Qtxt[10]="\1\4";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\3";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\4";
width[7]=0.; mass[7]=V[18];  Qtxt[7]="\1\3";
width[6]=0.; mass[6]=V[18];  Qtxt[6]="\1\4";
width[5]=0.; mass[5]=V[19];  Qtxt[5]="\1\3";
width[4]=0.; mass[4]=V[19];  Qtxt[4]="\1\4";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[224];                                                   
if(!momenta){ C27(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])+C[2])+C[4]-C[3]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[6])+C[7]*DP[0]-C[8];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[9];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[10])+C[12]-C[11]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[9];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[13])+C[14]*DP[0]-C[15];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[16];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[17])+C[19]-C[18]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[16];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[20])+C[21]*DP[0]-C[22];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[23];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[24])+C[26]-C[25]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[23];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[27])+C[28]*DP[0]-C[29];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[30];
D=+C[31];
R=+C[34]-C[33]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[36])+C[38]-C[37]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[39];
D=+C[40];
R=+C[34]-C[33]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[41];
D=+C[40];
R=+C[34]-C[33]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[42])+C[43]*DP[0]-C[44];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[45])+C[47]-C[46]*DP[0];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[9];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[48])+C[49]*DP[0]-C[50];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[9];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[51])+C[53]-C[52]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[16];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[54])+C[55]*DP[0]-C[56];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[16];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[57])+C[59]-C[58]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[23];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[60])+C[61]*DP[0]-C[62];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[23];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[63])+C[65]-C[64]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[30];
D=+C[31];
R=+C[66]*DP[0]-C[67]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[68])+C[69]*DP[0]-C[70];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[39];
D=+C[40];
R=+C[66]*DP[0]-C[67]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[41];
D=+C[40];
R=+C[66]*DP[0]-C[67]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[71])+C[73]-C[72]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[74];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])+C[75])+C[77]-C[76]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[74];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[6])+C[78]*DP[0]-C[79];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[81])+C[83]-C[82]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[80];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[84])+C[85]*DP[0]-C[86];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[87];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[88])+C[90]-C[89]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[87];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[91])+C[92]*DP[0]-C[93];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[94];
D=+C[31];
R=+C[96]-C[95]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[97];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[98])+C[100]-C[99]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[101];
D=+C[40];
R=+C[96]-C[95]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[102];
D=+C[40];
R=+C[96]-C[95]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[97];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[103])+C[104]*DP[0]-C[105];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[74];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[106])+C[108]-C[107]*DP[0];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[80];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[109])+C[110]*DP[0]-C[111];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[80];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[112])+C[114]-C[113]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[87];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[115])+C[116]*DP[0]-C[117];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[87];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[118])+C[120]-C[119]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[94];
D=+C[31];
R=+C[121]*DP[0]-C[122]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[97];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[123])+C[124]*DP[0]-C[125];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[101];
D=+C[40];
R=+C[121]*DP[0]-C[122]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[102];
D=+C[40];
R=+C[121]*DP[0]-C[122]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[97];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[126])+C[128]-C[127]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[129];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])+C[130])+C[132]-C[131]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[129];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[6])+C[133]*DP[0]-C[134];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[135];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[136])+C[138]-C[137]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[135];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[139])+C[140]*DP[0]-C[141];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[142];
D=+C[31];
R=+C[144]-C[143]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[145];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[146])+C[148]-C[147]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[149];
D=+C[40];
R=+C[144]-C[143]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[150];
D=+C[40];
R=+C[144]-C[143]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[145];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[151])+C[152]*DP[0]-C[153];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[129];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[154])+C[156]-C[155]*DP[0];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[135];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[157])+C[158]*DP[0]-C[159];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[135];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[160])+C[162]-C[161]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[142];
D=+C[31];
R=+C[163]*DP[0]-C[164]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[145];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[165])+C[166]*DP[0]-C[167];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[149];
D=+C[40];
R=+C[163]*DP[0]-C[164]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[150];
D=+C[40];
R=+C[163]*DP[0]-C[164]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[145];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[168])+C[170]-C[169]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[171];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])+C[172])+C[174]-C[173]*DP[0];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[171];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[6])+C[175]*DP[0]-C[176];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[177];
D=+C[31];
R=+C[179]-C[178]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[180];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[181])+C[183]-C[182]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[184];
D=+C[40];
R=+C[179]-C[178]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[185];
D=+C[40];
R=+C[179]-C[178]*DP[0]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[180];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])+C[186])+C[187]*DP[0]-C[188];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[171];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[189])+C[191]-C[190]*DP[0];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[177];
D=+C[31];
R=+C[192]*DP[0]-C[193]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[180];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[194])+C[195]*DP[0]-C[196];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[184];
D=+C[40];
R=+C[192]*DP[0]-C[193]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[185];
D=+C[40];
R=+C[192]*DP[0]-C[193]+C[32]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[180];
D=+C[1];
R=+DP[1]*(4*(DP[1]-DP[0])-C[197])+C[199]-C[198]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[200];
D=+C[201];
R=+DP[0]-C[202];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[203];
D=+C[31];
R=+C[204]-6*DP[0]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[205];
D=+C[206];
R=+DP[0]-C[202];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[207];
D=+C[206];
R=+DP[0]-C[202];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[203];
D=+C[31];
R=+2*DP[0]-C[208]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[209];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])+C[210])+C[212]-C[211]*DP[0];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[213];
D=+C[40];
R=+C[204]-6*DP[0]+4*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[214];
D=+C[40];
R=+C[204]-6*DP[0]+4*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[209];
D=+C[5];
R=+DP[1]*(2*(DP[1]-DP[0])-C[6])+C[215]*DP[0]-C[216];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[217];
D=+C[206];
R=+DP[0]-C[202];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[218];
D=+C[219];
R=+DP[0]-C[202];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[213];
D=+C[40];
R=+2*DP[0]-C[208]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[220];
D=+C[206];
R=+DP[0]-C[202];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[214];
D=+C[40];
R=+2*DP[0]-C[208]+4*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[209];
D=+C[1];
R=+DP[1]*(2*(DP[1]-DP[0])-C[221])+C[223]+C[222]*DP[0];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C27(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[37];                                                           
S[0]=V[15]*V[15];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9];
C[223]=+S[0]*(8*S[0]-2*S[1]+3*S[2]);
C[222]=+S[2];
C[221]=+10*S[0]-S[1]+S[2];
S[3]=V[460]*V[460];
S[4]=V[254]*V[254];
C[220]=+S[3]*S[4];
S[5]=V[122]*V[122];
S[6]=V[121]*V[121];
S[7]=V[119]*V[119];
S[8]=V[7]*V[7];
S[9]=V[3]*V[3];
S[10]=V[1]*V[1];
C[219]=+2*S[5]*S[6]*S[7]*S[8]*S[9]*S[10];
C[218]=+V[462]*V[460]*V[280]*V[254];
S[11]=V[462]*V[462];
S[12]=V[280]*V[280];
C[217]=+S[11]*S[12];
C[216]=+S[0]*(4*S[0]-S[2]);
C[215]=+4*S[0]+S[2];
C[214]=+V[462]*S[3]*V[254]*V[15];
C[213]=+S[11]*V[460]*V[280]*V[15];
C[212]=+S[0]*(2*S[1]-S[2]);
C[211]=+8*S[0]-S[2];
C[210]=+6*S[0]+S[1]-S[2];
C[209]=+S[11]*S[3];
C[208]=+6*S[0]-S[1]+S[2];
C[207]=+V[464]*V[460]*V[300]*V[254];
C[206]=+4*S[5]*S[6]*S[7]*S[8]*S[9]*S[10];
C[205]=+V[464]*V[462]*V[300]*V[280];
C[204]=+2*S[0]+S[1]-S[2];
C[203]=+V[464]*V[462]*V[460]*V[300]*V[15];
C[202]=+S[0];
C[201]=+16*S[5]*S[6]*S[7]*S[8]*S[9]*S[10];
S[13]=V[464]*V[464];
S[14]=V[300]*V[300];
C[200]=+S[13]*S[14];
C[199]=+V[15]*(V[15]*(V[15]*(6*V[16]+10*V[15])+5*S[2]-3*S[1])+V[16]*(S[2]-
 S[1]));
C[198]=+2*(V[15]*(V[16]-V[15])-S[2]);
C[197]=+V[15]*(4*V[16]+16*V[15])+2*(S[2]-S[1]);
C[196]=+V[15]*(V[15]*(V[15]*(2*V[16]+6*V[15])-S[1]-S[2])+V[16]*(S[1]-S[2]));
C[195]=+V[15]*(6*V[16]+2*V[15])+2*S[2];
C[194]=+2*(S[2]-S[1])+4*V[16]*V[15];
C[193]=+V[15]*(V[15]*(2*V[16]+4*V[15])+S[2]-S[1]);
C[192]=+2*V[16];
S[15]=V[16]*V[16];
C[191]=+V[15]*(V[15]*(V[15]*(4*V[16]+3*V[15])+S[15]-S[1]+2*S[2])+V[16]*(
 S[2]-S[1]));
C[190]=+S[15]-S[0]-S[2];
C[189]=+V[15]*(4*V[16]+6*V[15])+S[2]-S[1];
C[188]=+V[15]*(V[15]*(V[15]*(6*V[16]+2*V[15])+S[1]-3*S[2])+V[16]*(S[2]-
 S[1]));
C[187]=+V[15]*(2*V[16]+6*V[15])+2*S[2];
C[186]=+V[15]*(4*V[16]-8*V[15])+2*(S[1]-S[2]);
C[185]=+V[477]*V[473]*V[460]*V[254];
C[184]=+V[477]*V[473]*V[462]*V[280];
C[183]=+V[15]*(V[15]*(V[15]*(2*(V[16]-V[15]))+3*S[1]-S[2])+V[16]*(S[1]-
 S[2]));
C[182]=+V[15]*(6*V[16]+10*V[15])-2*S[2];
C[181]=+V[15]*(4*V[16]+8*V[15])+2*(S[1]-S[2]);
C[180]=+V[477]*V[473]*V[462]*V[460];
C[179]=+V[15]*(2*V[16]*V[15]+S[1]-S[2]);
C[178]=+2*V[16]+4*V[15];
C[177]=+V[477]*V[473]*V[464]*V[300];
C[176]=+S[0]*(V[15]*(2*V[16]+V[15])+S[15]-S[2]);
C[175]=+V[15]*(2*V[16]+V[15])+S[15]+S[2];
C[174]=+V[15]*(V[15]*(S[15]-S[0]+S[1])+V[16]*(S[1]-S[2]));
C[173]=+V[15]*(4*V[16]+3*V[15])+S[15]-S[2];
C[172]=+V[15]*(4*V[16]+2*V[15])+S[1]-S[2];
S[16]=V[477]*V[477];
S[17]=V[473]*V[473];
C[171]=+S[16]*S[17];
C[170]=+V[15]*(V[15]*(V[15]*(6*V[17]+10*V[15])+5*S[2]-3*S[1])+V[17]*(S[2]-
 S[1]));
C[169]=+2*(V[15]*(V[17]-V[15])-S[2]);
C[168]=+V[15]*(4*V[17]+16*V[15])+2*(S[2]-S[1]);
C[167]=+V[15]*(V[15]*(V[15]*(2*V[17]+6*V[15])-S[1]-S[2])+V[17]*(S[1]-S[2]));
C[166]=+V[15]*(6*V[17]+2*V[15])+2*S[2];
C[165]=+2*(S[2]-S[1])+4*V[17]*V[15];
C[164]=+V[15]*(V[15]*(2*V[17]+4*V[15])+S[2]-S[1]);
C[163]=+2*V[17];
C[162]=+V[15]*(V[15]*(V[15]*(4*(V[17]+V[16])+6*V[15])+2*(V[17]*V[16]-S[1])+
 4*S[2])+S[2]*(V[17]+V[16])+S[1]*(-V[17]-V[16]));
C[161]=+2*(V[17]*V[16]-S[0]-S[2]);
C[160]=+V[15]*(4*(V[17]+V[16])+12*V[15])+2*(S[2]-S[1]);
C[159]=+V[15]*(V[15]*(2*(V[17]*V[16]+S[0]-S[2])+4*V[16]*V[15])+S[2]*(V[16]-
 V[17])+S[1]*(V[17]-V[16]));
C[158]=+2*(V[17]*V[16]+S[0]+S[2])+4*V[17]*V[15];
C[157]=+V[15]*(4*(V[17]-V[16]+V[15]))+2*(S[2]-S[1]);
S[18]=V[17]*V[17];
C[156]=+V[15]*(V[15]*(V[15]*(4*V[17]+3*V[15])+S[18]-S[1]+2*S[2])+V[17]*(
 S[2]-S[1]));
C[155]=+S[18]-S[0]-S[2];
C[154]=+V[15]*(4*V[17]+6*V[15])+S[2]-S[1];
C[153]=+V[15]*(V[15]*(V[15]*(6*V[17]+2*V[15])+S[1]-3*S[2])+V[17]*(S[2]-
 S[1]));
C[152]=+V[15]*(2*V[17]+6*V[15])+2*S[2];
C[151]=+V[15]*(4*V[17]-8*V[15])+2*(S[1]-S[2]);
C[150]=+V[498]*V[494]*V[460]*V[254];
C[149]=+V[498]*V[494]*V[462]*V[280];
C[148]=+V[15]*(V[15]*(V[15]*(2*(V[17]-V[15]))+3*S[1]-S[2])+V[17]*(S[1]-
 S[2]));
C[147]=+V[15]*(6*V[17]+10*V[15])-2*S[2];
C[146]=+V[15]*(4*V[17]+8*V[15])+2*(S[1]-S[2]);
C[145]=+V[498]*V[494]*V[462]*V[460];
C[144]=+V[15]*(2*V[17]*V[15]+S[1]-S[2]);
C[143]=+2*V[17]+4*V[15];
C[142]=+V[498]*V[494]*V[464]*V[300];
C[141]=+V[15]*(V[15]*(2*(V[17]*V[16]+S[0]-S[2])+4*V[17]*V[15])+S[2]*(V[17]-
 V[16])+S[1]*(V[16]-V[17]));
C[140]=+2*(V[17]*V[16]+S[0]+S[2])+4*V[16]*V[15];
C[139]=+V[15]*(4*(V[17]-V[16]-V[15]))+2*(S[1]-S[2]);
C[138]=+V[15]*(S[1]*(V[17]+V[16]+2*V[15])+S[2]*(-V[17]-V[16])+V[15]*(2*(
 V[17]*V[16]-S[0])));
C[137]=+V[15]*(4*(V[17]+V[16])+6*V[15])+2*(V[17]*V[16]-S[2]);
C[136]=+V[15]*(4*(V[17]+V[16]+V[15]))+2*(S[1]-S[2]);
C[135]=+V[498]*V[494]*V[477]*V[473];
C[134]=+S[0]*(V[15]*(2*V[17]+V[15])+S[18]-S[2]);
C[133]=+V[15]*(2*V[17]+V[15])+S[18]+S[2];
C[132]=+V[15]*(V[15]*(S[18]-S[0]+S[1])+V[17]*(S[1]-S[2]));
C[131]=+V[15]*(4*V[17]+3*V[15])+S[18]-S[2];
C[130]=+V[15]*(4*V[17]+2*V[15])+S[1]-S[2];
S[19]=V[498]*V[498];
S[20]=V[494]*V[494];
C[129]=+S[19]*S[20];
C[128]=+V[15]*(V[15]*(V[15]*(6*V[18]+10*V[15])+5*S[2]-3*S[1])+V[18]*(S[2]-
 S[1]));
C[127]=+2*(V[15]*(V[18]-V[15])-S[2]);
C[126]=+V[15]*(4*V[18]+16*V[15])+2*(S[2]-S[1]);
C[125]=+V[15]*(V[15]*(V[15]*(2*V[18]+6*V[15])-S[1]-S[2])+V[18]*(S[1]-S[2]));
C[124]=+V[15]*(6*V[18]+2*V[15])+2*S[2];
C[123]=+2*(S[2]-S[1])+4*V[18]*V[15];
C[122]=+V[15]*(V[15]*(2*V[18]+4*V[15])+S[2]-S[1]);
C[121]=+2*V[18];
C[120]=+V[15]*(V[15]*(V[15]*(4*(V[18]+V[16])+6*V[15])+2*(V[18]*V[16]-S[1])+
 4*S[2])+S[2]*(V[18]+V[16])+S[1]*(-V[18]-V[16]));
C[119]=+2*(V[18]*V[16]-S[0]-S[2]);
C[118]=+V[15]*(4*(V[18]+V[16])+12*V[15])+2*(S[2]-S[1]);
C[117]=+V[15]*(V[15]*(2*(V[18]*V[16]+S[0]-S[2])+4*V[16]*V[15])+S[2]*(V[16]-
 V[18])+S[1]*(V[18]-V[16]));
C[116]=+2*(V[18]*V[16]+S[0]+S[2])+4*V[18]*V[15];
C[115]=+V[15]*(4*(V[18]-V[16]+V[15]))+2*(S[2]-S[1]);
C[114]=+V[15]*(V[15]*(V[15]*(4*(V[18]+V[17])+6*V[15])+2*(V[18]*V[17]-S[1])+
 4*S[2])+S[2]*(V[18]+V[17])+S[1]*(-V[18]-V[17]));
C[113]=+2*(V[18]*V[17]-S[0]-S[2]);
C[112]=+V[15]*(4*(V[18]+V[17])+12*V[15])+2*(S[2]-S[1]);
C[111]=+V[15]*(V[15]*(2*(V[18]*V[17]+S[0]-S[2])+4*V[17]*V[15])+S[2]*(V[17]-
 V[18])+S[1]*(V[18]-V[17]));
C[110]=+2*(V[18]*V[17]+S[0]+S[2])+4*V[18]*V[15];
C[109]=+V[15]*(4*(V[18]-V[17]+V[15]))+2*(S[2]-S[1]);
S[21]=V[18]*V[18];
C[108]=+V[15]*(V[15]*(V[15]*(4*V[18]+3*V[15])+S[21]-S[1]+2*S[2])+V[18]*(
 S[2]-S[1]));
C[107]=+S[21]-S[0]-S[2];
C[106]=+V[15]*(4*V[18]+6*V[15])+S[2]-S[1];
C[105]=+V[15]*(V[15]*(V[15]*(6*V[18]+2*V[15])+S[1]-3*S[2])+V[18]*(S[2]-
 S[1]));
C[104]=+V[15]*(2*V[18]+6*V[15])+2*S[2];
C[103]=+V[15]*(4*V[18]-8*V[15])+2*(S[1]-S[2]);
C[102]=+V[519]*V[515]*V[460]*V[254];
C[101]=+V[519]*V[515]*V[462]*V[280];
C[100]=+V[15]*(V[15]*(V[15]*(2*(V[18]-V[15]))+3*S[1]-S[2])+V[18]*(S[1]-
 S[2]));
C[99]=+V[15]*(6*V[18]+10*V[15])-2*S[2];
C[98]=+V[15]*(4*V[18]+8*V[15])+2*(S[1]-S[2]);
C[97]=+V[519]*V[515]*V[462]*V[460];
C[96]=+V[15]*(2*V[18]*V[15]+S[1]-S[2]);
C[95]=+2*V[18]+4*V[15];
C[94]=+V[519]*V[515]*V[464]*V[300];
C[93]=+V[15]*(V[15]*(2*(V[18]*V[16]+S[0]-S[2])+4*V[18]*V[15])+S[2]*(V[18]-
 V[16])+S[1]*(V[16]-V[18]));
C[92]=+2*(V[18]*V[16]+S[0]+S[2])+4*V[16]*V[15];
C[91]=+V[15]*(4*(V[18]-V[16]-V[15]))+2*(S[1]-S[2]);
C[90]=+V[15]*(S[1]*(V[18]+V[16]+2*V[15])+S[2]*(-V[18]-V[16])+V[15]*(2*(
 V[18]*V[16]-S[0])));
C[89]=+V[15]*(4*(V[18]+V[16])+6*V[15])+2*(V[18]*V[16]-S[2]);
C[88]=+V[15]*(4*(V[18]+V[16]+V[15]))+2*(S[1]-S[2]);
C[87]=+V[519]*V[515]*V[477]*V[473];
C[86]=+V[15]*(V[15]*(2*(V[18]*V[17]+S[0]-S[2])+4*V[18]*V[15])+S[2]*(V[18]-
 V[17])+S[1]*(V[17]-V[18]));
C[85]=+2*(V[18]*V[17]+S[0]+S[2])+4*V[17]*V[15];
C[84]=+V[15]*(4*(V[18]-V[17]-V[15]))+2*(S[1]-S[2]);
C[83]=+V[15]*(S[1]*(V[18]+V[17]+2*V[15])+S[2]*(-V[18]-V[17])+V[15]*(2*(
 V[18]*V[17]-S[0])));
C[82]=+V[15]*(4*(V[18]+V[17])+6*V[15])+2*(V[18]*V[17]-S[2]);
C[81]=+V[15]*(4*(V[18]+V[17]+V[15]))+2*(S[1]-S[2]);
C[80]=+V[519]*V[515]*V[498]*V[494];
C[79]=+S[0]*(V[15]*(2*V[18]+V[15])+S[21]-S[2]);
C[78]=+V[15]*(2*V[18]+V[15])+S[21]+S[2];
C[77]=+V[15]*(V[15]*(S[21]-S[0]+S[1])+V[18]*(S[1]-S[2]));
C[76]=+V[15]*(4*V[18]+3*V[15])+S[21]-S[2];
C[75]=+V[15]*(4*V[18]+2*V[15])+S[1]-S[2];
S[22]=V[519]*V[519];
S[23]=V[515]*V[515];
C[74]=+S[22]*S[23];
C[73]=+V[15]*(V[15]*(V[15]*(6*V[19]+10*V[15])+5*S[2]-3*S[1])+V[19]*(S[2]-
 S[1]));
C[72]=+2*(V[15]*(V[19]-V[15])-S[2]);
C[71]=+V[15]*(4*V[19]+16*V[15])+2*(S[2]-S[1]);
C[70]=+V[15]*(V[15]*(V[15]*(2*V[19]+6*V[15])-S[1]-S[2])+V[19]*(S[1]-S[2]));
C[69]=+V[15]*(6*V[19]+2*V[15])+2*S[2];
C[68]=+2*(S[2]-S[1])+4*V[19]*V[15];
C[67]=+V[15]*(V[15]*(2*V[19]+4*V[15])+S[2]-S[1]);
C[66]=+2*V[19];
C[65]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[16])+6*V[15])+2*(V[19]*V[16]-S[1])+4*
 S[2])+S[2]*(V[19]+V[16])+S[1]*(-V[19]-V[16]));
C[64]=+2*(V[19]*V[16]-S[0]-S[2]);
C[63]=+V[15]*(4*(V[19]+V[16])+12*V[15])+2*(S[2]-S[1]);
C[62]=+V[15]*(V[15]*(2*(V[19]*V[16]+S[0]-S[2])+4*V[16]*V[15])+S[2]*(V[16]-
 V[19])+S[1]*(V[19]-V[16]));
C[61]=+2*(V[19]*V[16]+S[0]+S[2])+4*V[19]*V[15];
C[60]=+V[15]*(4*(V[19]-V[16]+V[15]))+2*(S[2]-S[1]);
C[59]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[17])+6*V[15])+2*(V[19]*V[17]-S[1])+4*
 S[2])+S[2]*(V[19]+V[17])+S[1]*(-V[19]-V[17]));
C[58]=+2*(V[19]*V[17]-S[0]-S[2]);
C[57]=+V[15]*(4*(V[19]+V[17])+12*V[15])+2*(S[2]-S[1]);
C[56]=+V[15]*(V[15]*(2*(V[19]*V[17]+S[0]-S[2])+4*V[17]*V[15])+S[2]*(V[17]-
 V[19])+S[1]*(V[19]-V[17]));
C[55]=+2*(V[19]*V[17]+S[0]+S[2])+4*V[19]*V[15];
C[54]=+V[15]*(4*(V[19]-V[17]+V[15]))+2*(S[2]-S[1]);
C[53]=+V[15]*(V[15]*(V[15]*(4*(V[19]+V[18])+6*V[15])+2*(V[19]*V[18]-S[1])+4*
 S[2])+S[2]*(V[19]+V[18])+S[1]*(-V[19]-V[18]));
C[52]=+2*(V[19]*V[18]-S[0]-S[2]);
C[51]=+V[15]*(4*(V[19]+V[18])+12*V[15])+2*(S[2]-S[1]);
C[50]=+V[15]*(V[15]*(2*(V[19]*V[18]+S[0]-S[2])+4*V[18]*V[15])+S[2]*(V[18]-
 V[19])+S[1]*(V[19]-V[18]));
C[49]=+2*(V[19]*V[18]+S[0]+S[2])+4*V[19]*V[15];
C[48]=+V[15]*(4*(V[19]-V[18]+V[15]))+2*(S[2]-S[1]);
S[24]=V[19]*V[19];
C[47]=+V[15]*(V[15]*(V[15]*(4*V[19]+3*V[15])+S[24]-S[1]+2*S[2])+V[19]*(S[2]-
 S[1]));
C[46]=+S[24]-S[0]-S[2];
C[45]=+V[15]*(4*V[19]+6*V[15])+S[2]-S[1];
C[44]=+V[15]*(V[15]*(V[15]*(6*V[19]+2*V[15])+S[1]-3*S[2])+V[19]*(S[2]-
 S[1]));
C[43]=+V[15]*(2*V[19]+6*V[15])+2*S[2];
C[42]=+V[15]*(4*V[19]-8*V[15])+2*(S[1]-S[2]);
C[41]=+V[540]*V[536]*V[460]*V[254];
S[25]=V[122]*V[122]*V[122];
S[26]=V[121]*V[121]*V[121];
S[27]=V[119]*V[119]*V[119];
S[28]=V[7]*V[7]*V[7];
S[29]=V[3]*V[3]*V[3];
C[40]=+8*S[25]*S[26]*S[27]*S[28]*S[29]*V[1];
C[39]=+V[540]*V[536]*V[462]*V[280];
C[38]=+V[15]*(V[15]*(V[15]*(2*(V[19]-V[15]))+3*S[1]-S[2])+V[19]*(S[1]-
 S[2]));
C[37]=+V[15]*(6*V[19]+10*V[15])-2*S[2];
C[36]=+V[15]*(4*V[19]+8*V[15])+2*(S[1]-S[2]);
C[35]=+V[540]*V[536]*V[462]*V[460];
C[34]=+V[15]*(2*V[19]*V[15]+S[1]-S[2]);
C[33]=+2*V[19]+4*V[15];
C[32]=+4*V[15];
C[31]=+16*S[25]*S[26]*S[27]*S[28]*S[29]*V[1];
C[30]=+V[540]*V[536]*V[464]*V[300];
C[29]=+V[15]*(V[15]*(2*(V[19]*V[16]+S[0]-S[2])+4*V[19]*V[15])+S[2]*(V[19]-
 V[16])+S[1]*(V[16]-V[19]));
C[28]=+2*(V[19]*V[16]+S[0]+S[2])+4*V[16]*V[15];
C[27]=+V[15]*(4*(V[19]-V[16]-V[15]))+2*(S[1]-S[2]);
C[26]=+V[15]*(S[1]*(V[19]+V[16]+2*V[15])+S[2]*(-V[19]-V[16])+V[15]*(2*(
 V[19]*V[16]-S[0])));
C[25]=+V[15]*(4*(V[19]+V[16])+6*V[15])+2*(V[19]*V[16]-S[2]);
C[24]=+V[15]*(4*(V[19]+V[16]+V[15]))+2*(S[1]-S[2]);
C[23]=+V[540]*V[536]*V[477]*V[473];
C[22]=+V[15]*(V[15]*(2*(V[19]*V[17]+S[0]-S[2])+4*V[19]*V[15])+S[2]*(V[19]-
 V[17])+S[1]*(V[17]-V[19]));
C[21]=+2*(V[19]*V[17]+S[0]+S[2])+4*V[17]*V[15];
C[20]=+V[15]*(4*(V[19]-V[17]-V[15]))+2*(S[1]-S[2]);
C[19]=+V[15]*(S[1]*(V[19]+V[17]+2*V[15])+S[2]*(-V[19]-V[17])+V[15]*(2*(
 V[19]*V[17]-S[0])));
C[18]=+V[15]*(4*(V[19]+V[17])+6*V[15])+2*(V[19]*V[17]-S[2]);
C[17]=+V[15]*(4*(V[19]+V[17]+V[15]))+2*(S[1]-S[2]);
C[16]=+V[540]*V[536]*V[498]*V[494];
C[15]=+V[15]*(V[15]*(2*(V[19]*V[18]+S[0]-S[2])+4*V[19]*V[15])+S[2]*(V[19]-
 V[18])+S[1]*(V[18]-V[19]));
C[14]=+2*(V[19]*V[18]+S[0]+S[2])+4*V[18]*V[15];
C[13]=+V[15]*(4*(V[19]-V[18]-V[15]))+2*(S[1]-S[2]);
C[12]=+V[15]*(S[1]*(V[19]+V[18]+2*V[15])+S[2]*(-V[19]-V[18])+V[15]*(2*(
 V[19]*V[18]-S[0])));
C[11]=+V[15]*(4*(V[19]+V[18])+6*V[15])+2*(V[19]*V[18]-S[2]);
C[10]=+V[15]*(4*(V[19]+V[18]+V[15]))+2*(S[1]-S[2]);
C[9]=+V[540]*V[536]*V[519]*V[515];
C[8]=+S[0]*(V[15]*(2*V[19]+V[15])+S[24]-S[2]);
C[7]=+V[15]*(2*V[19]+V[15])+S[24]+S[2];
C[6]=+2*S[0]-S[1]+S[2];
S[30]=V[122]*V[122]*V[122]*V[122];
S[31]=V[121]*V[121]*V[121]*V[121];
S[32]=V[119]*V[119]*V[119]*V[119];
S[33]=V[7]*V[7]*V[7]*V[7];
S[34]=V[3]*V[3]*V[3]*V[3];
C[5]=+8*S[30]*S[31]*S[32]*S[33]*S[34];
C[4]=+V[15]*(V[15]*(S[24]-S[0]+S[1])+V[19]*(S[1]-S[2]));
C[3]=+V[15]*(4*V[19]+3*V[15])+S[24]-S[2];
C[2]=+V[15]*(4*V[19]+2*V[15])+S[1]-S[2];
C[1]=+16*S[30]*S[31]*S[32]*S[33]*S[34];
S[35]=V[540]*V[540];
S[36]=V[536]*V[536];
C[0]=+S[35]*S[36];
}
