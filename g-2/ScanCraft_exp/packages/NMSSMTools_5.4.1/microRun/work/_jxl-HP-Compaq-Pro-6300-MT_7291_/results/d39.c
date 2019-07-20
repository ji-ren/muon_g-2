/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C39(REAL *);
extern DNN S39_omg_p25p25_u;
REAL S39_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[9],width[9];
char * Qtxt[9];
REAL Q0[9]; COMPLEX Q1[9]; REAL Q2[9];
 if(momenta)
 {width[4]=V[556]; mass[4]=V[11];  Qtxt[4]="\1\2";
width[3]=V[555]; mass[3]=V[10];  Qtxt[3]="\1\2";
width[2]=V[554]; mass[2]=V[9];  Qtxt[2]="\1\2";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
width[8]=0.; mass[8]=V[21];  Qtxt[8]="\1\3";
width[7]=0.; mass[7]=V[21];  Qtxt[7]="\1\4";
width[6]=0.; mass[6]=V[20];  Qtxt[6]="\1\3";
width[5]=0.; mass[5]=V[20];  Qtxt[5]="\1\4";
*err=*err|prepDen(8,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[77];                                                    
if(!momenta){ C39(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+C[1];
R=+DP[1]*(C[2]*(DP[1]-DP[0])+C[3])+C[5]-C[4]*DP[0];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[6];
R=+DP[1]*(C[7]*(DP[1]-DP[0])-C[8])+C[9]*DP[0]-C[10];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[6];
R=+DP[1]*(C[11]*(DP[1]-DP[0])+C[12])-C[14]-C[13]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[6];
R=+DP[1]*(C[15]*(DP[1]-DP[0])+C[16])+C[17]*DP[0]-C[18];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[19];
D=+C[20];
R=+DP[1]*(C[21]*(DP[1]-DP[0])-C[22])+C[24]+C[23]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[25];
D=+C[26];
R=+C[29]-C[28]*DP[0]+C[27]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[30];
D=+C[26];
R=+C[29]-C[28]*DP[0]+C[27]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[31];
D=+C[26];
R=+C[29]-C[28]*DP[0]+C[27]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[1]*(C[2]*(DP[1]-DP[0])-C[32])+C[34]+C[33]*DP[0];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[6];
R=+DP[1]*(C[15]*(DP[1]-DP[0])-C[35])+C[36]*DP[0]-C[37];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[6];
R=+DP[1]*(C[11]*(DP[1]-DP[0])-C[38])+C[40]+C[39]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[19];
D=+C[20];
R=+DP[1]*(C[21]*(DP[1]-DP[0])-C[22])+C[24]+C[23]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[25];
D=+C[26];
R=+C[41]*DP[0]-C[42]+C[27]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[30];
D=+C[26];
R=+C[41]*DP[0]-C[42]+C[27]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[31];
D=+C[26];
R=+C[41]*DP[0]-C[42]+C[27]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[1]*(C[43]*(DP[1]-DP[0])+C[44])+C[46]-C[45]*DP[0];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[6];
R=+DP[1]*(C[47]*(DP[1]-DP[0])-C[48])+C[49]*DP[0]-C[50];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[19];
D=+C[20];
R=+DP[1]*(C[51]*(DP[1]-DP[0])-C[52])+C[54]+C[53]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[25];
D=+C[26];
R=+C[57]-C[56]*DP[0]+C[55]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[30];
D=+C[26];
R=+C[57]-C[56]*DP[0]+C[55]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[31];
D=+C[26];
R=+C[57]-C[56]*DP[0]+C[55]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[1]*(C[43]*(DP[1]-DP[0])-C[58])+C[60]+C[59]*DP[0];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[19];
D=+C[20];
R=+DP[1]*(C[51]*(DP[1]-DP[0])-C[52])+C[54]+C[53]*DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[25];
D=+C[26];
R=+C[61]*DP[0]-C[62]+C[55]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[30];
D=+C[26];
R=+C[61]*DP[0]-C[62]+C[55]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[31];
D=+C[26];
R=+C[61]*DP[0]-C[62]+C[55]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[63];
D=+C[64];
R=+DP[1]*(2*(DP[1]-DP[0])-C[65])+C[67]+C[66]*DP[0];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[68];
D=+C[69];
R=+DP[0]-C[70];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[71];
D=+C[72];
R=+DP[0]-C[70];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[73];
D=+C[72];
R=+DP[0]-C[70];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[74];
D=+C[69];
R=+DP[0]-C[70];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[75];
D=+C[72];
R=+DP[0]-C[70];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gswidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[76];
D=+C[69];
R=+DP[0]-C[70];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C39(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[39];                                                           
S[0]=V[464]*V[464];
S[1]=V[208]*V[208];
C[76]=+S[0]*S[1];
C[75]=+V[464]*V[462]*V[208]*V[203];
S[2]=V[462]*V[462];
S[3]=V[203]*V[203];
C[74]=+S[2]*S[3];
C[73]=+V[464]*V[460]*V[208]*V[198];
S[4]=V[122]*V[122];
S[5]=V[121]*V[121];
S[6]=V[119]*V[119];
S[7]=V[7]*V[7];
S[8]=V[3]*V[3];
S[9]=V[1]*V[1];
C[72]=+2*S[4]*S[5]*S[6]*S[7]*S[8]*S[9];
C[71]=+V[462]*V[460]*V[203]*V[198];
S[10]=V[15]*V[15];
C[70]=+S[10];
C[69]=+4*S[4]*S[5]*S[6]*S[7]*S[8]*S[9];
S[11]=V[460]*V[460];
S[12]=V[198]*V[198];
C[68]=+S[11]*S[12];
S[13]=V[14]*V[14];
C[67]=+S[10]*(S[10]-S[13]);
C[66]=+S[10]+S[13];
C[65]=+2*S[10];
S[14]=V[119]*V[119]*V[119]*V[119];
S[15]=V[118]*V[118]*V[118]*V[118];
C[64]=+4*S[14]*S[15];
S[16]=V[458]*V[458];
S[17]=V[120]*V[120];
S[18]=V[1]*V[1]*V[1]*V[1];
C[63]=+S[16]*S[17]*S[18];
S[19]=V[455]*V[455];
S[20]=V[454]*V[454];
C[62]=+S[10]*(V[15]*(S[19]+S[20])+V[455]*V[454]*V[21]);
C[61]=+V[455]*V[454]*V[21];
S[21]=V[21]*V[21];
S[22]=V[455]*V[455]*V[455];
S[23]=V[455]*V[455]*V[455]*V[455];
C[60]=+S[10]*(V[454]*(V[454]*(V[455]*(V[455]*(2*(S[21]+S[10]+S[13]))+4*
 V[454]*V[21]*V[15])+2*S[20]*S[10])+4*S[22]*V[21]*V[15])+2*S[23]*S[10]);
C[59]=+S[20]*(S[20]*(S[10]+S[13])-2*S[19]*S[21])+S[23]*(S[10]+S[13]);
C[58]=+V[15]*(4*(V[454]*(V[454]*(V[15]*(S[19]+S[20])+V[455]*V[454]*V[21])+
 S[22]*V[21])+S[23]*V[15]));
C[57]=+V[455]*V[454]*V[21]*S[10];
C[56]=+V[15]*(S[19]+S[20])+V[455]*V[454]*V[21];
C[55]=+V[15]*(S[19]+S[20]);
C[54]=+S[10]*(S[13]*(S[20]-S[19])+S[10]*(S[19]-S[20]));
C[53]=+S[13]*(S[19]-S[20])+S[10]*(S[19]-S[20]);
C[52]=+S[10]*(2*(S[19]-S[20]));
C[51]=+2*(S[19]-S[20]);
C[50]=+S[10]*(V[454]*(V[454]*(V[454]*(V[15]*(2*V[455]*V[21]+V[454]*V[15])-
 V[454]*S[13])+2*S[19]*S[21])+2*S[22]*V[21]*V[15])+S[23]*(S[10]-S[13]));
C[49]=+V[454]*(V[455]*(2*(V[454]*(V[455]*(S[21]+S[10]+S[13])+V[454]*V[21]*
 V[15])+S[19]*V[21]*V[15])));
C[48]=+4*S[19]*S[20]*S[10];
C[47]=+4*S[19]*S[20];
C[46]=+S[10]*(S[20]*(S[19]*(2*(S[21]-S[10]+S[13]))));
C[45]=+V[454]*(V[454]*(V[15]*(V[15]*(4*S[19]+S[20])+4*V[455]*V[454]*V[21])+
 2*S[19]*S[21]-S[20]*S[13])+4*S[22]*V[21]*V[15])+S[23]*(S[10]-S[13]);
C[44]=+V[15]*(V[454]*(V[455]*(4*(V[21]*(S[19]+S[20])+V[455]*V[454]*
 V[15]))));
S[24]=V[454]*V[454]*V[454]*V[454];
C[43]=+2*(S[23]+S[24]);
S[25]=V[451]*V[451];
S[26]=V[450]*V[450];
C[42]=+S[10]*(V[15]*(S[25]+S[26])+V[451]*V[450]*V[20]);
C[41]=+V[451]*V[450]*V[20];
C[40]=+S[10]*(V[15]*(2*(V[450]*(V[454]*(V[450]*(V[455]*V[21]+V[454]*V[15])+
 V[454]*V[451]*V[20])+S[19]*V[451]*V[20])+S[25]*(V[455]*(V[455]*V[15]+
 V[454]*V[21])))+V[15]*(S[19]*S[26]+S[20]*S[25]))+S[13]*(S[19]*S[26]+S[20]*
 S[25])+2*V[455]*V[454]*V[451]*V[450]*V[21]*V[20]);
C[39]=+V[450]*(V[454]*(V[450]*(V[454]*(S[10]+S[13]))-2*V[455]*V[451]*V[21]*
 V[20]))+S[25]*(S[19]*(S[10]+S[13]));
C[38]=+V[15]*(2*(V[450]*(V[455]*(V[450]*(V[455]*V[15]+V[454]*V[21])+V[455]*
 V[451]*V[20])+S[20]*V[451]*V[20])+S[25]*(V[454]*(V[455]*V[21]+V[454]*
 V[15])))+V[15]*(4*(S[19]*S[25]+S[20]*S[26])));
C[37]=+S[10]*(V[454]*(V[450]*(V[450]*(V[15]*(2*V[455]*V[21]+V[454]*V[15])-
 V[454]*S[13])+2*V[455]*V[451]*V[21]*V[20])+2*V[455]*S[25]*V[21]*V[15])+
 S[25]*(S[19]*(S[10]-S[13])));
C[36]=+V[450]*(V[455]*(V[455]*(V[15]*(2*V[451]*V[20]+V[450]*V[15])+V[450]*
 S[13])+2*V[454]*V[451]*V[21]*V[20])+2*S[20]*V[451]*V[20]*V[15])+S[25]*(
 S[20]*(S[10]+S[13]));
C[35]=+V[15]*(2*(V[450]*(V[455]*(V[450]*(V[455]*V[15]-V[454]*V[21])+V[455]*
 V[451]*V[20])+S[20]*V[451]*V[20])+S[25]*(V[454]*(V[454]*V[15]-V[455]*
 V[21]))));
S[27]=V[20]*V[20];
S[28]=V[451]*V[451]*V[451];
S[29]=V[451]*V[451]*V[451]*V[451];
C[34]=+S[10]*(V[450]*(V[450]*(V[451]*(V[451]*(2*(S[27]+S[10]+S[13]))+4*
 V[450]*V[20]*V[15])+2*S[26]*S[10])+4*S[28]*V[20]*V[15])+2*S[29]*S[10]);
C[33]=+S[26]*(S[26]*(S[10]+S[13])-2*S[25]*S[27])+S[29]*(S[10]+S[13]);
C[32]=+V[15]*(4*(V[450]*(V[450]*(V[15]*(S[25]+S[26])+V[451]*V[450]*V[20])+
 S[28]*V[20])+S[29]*V[15]));
C[31]=+V[464]*V[208]*V[1];
C[30]=+V[462]*V[203]*V[1];
C[29]=+V[451]*V[450]*V[20]*S[10];
C[28]=+V[15]*(S[25]+S[26])+V[451]*V[450]*V[20];
C[27]=+V[15]*(S[25]+S[26]);
S[30]=V[122]*V[122]*V[122];
S[31]=V[121]*V[121]*V[121];
S[32]=V[119]*V[119]*V[119];
S[33]=V[3]*V[3]*V[3];
C[26]=+4*S[30]*S[31]*S[32]*V[7]*S[33];
C[25]=+V[460]*V[198]*V[1];
C[24]=+S[10]*(S[13]*(S[26]-S[25])+S[10]*(S[25]-S[26]));
C[23]=+S[13]*(S[25]-S[26])+S[10]*(S[25]-S[26]);
C[22]=+S[10]*(2*(S[25]-S[26]));
C[21]=+2*(S[25]-S[26]);
S[34]=V[118]*V[118];
C[20]=+8*S[4]*S[5]*S[14]*S[34]*S[8];
C[19]=+V[458]*V[120]*S[18];
C[18]=+S[10]*(V[450]*(V[454]*(V[454]*(V[15]*(2*V[451]*V[20]+V[450]*V[15])-
 V[450]*S[13])+2*V[455]*V[451]*V[21]*V[20])+2*S[19]*V[451]*V[20]*V[15])+
 S[25]*(S[19]*(S[10]-S[13])));
C[17]=+V[454]*(V[451]*(V[451]*(V[15]*(2*V[455]*V[21]+V[454]*V[15])+V[454]*
 S[13])+2*V[455]*V[450]*V[21]*V[20])+2*V[455]*S[26]*V[21]*V[15])+S[26]*(
 S[19]*(S[10]+S[13]));
C[16]=+V[15]*(2*(V[450]*(V[455]*(V[450]*(-V[455]*V[15]-V[454]*V[21])+V[455]*
 V[451]*V[20])+S[20]*V[451]*V[20])+S[25]*(V[454]*(-V[455]*V[21]-V[454]*
 V[15]))));
C[15]=+2*(S[19]*S[26]+S[20]*S[25]);
C[14]=+S[10]*(V[450]*(V[455]*(V[450]*(V[455]*(S[10]-S[13]))-2*V[454]*V[451]*
 V[21]*V[20]))+S[25]*(S[20]*(S[10]-S[13])));
C[13]=+V[15]*(2*(V[450]*(V[455]*(V[450]*(V[455]*V[15]+V[454]*V[21])+V[455]*
 V[451]*V[20])+S[20]*V[451]*V[20])+S[25]*(V[454]*(V[455]*V[21]+V[454]*
 V[15])))+V[15]*(S[19]*S[25]+S[20]*S[26]))+S[13]*(-S[19]*S[25]-S[20]*S[26])+
 2*V[455]*V[454]*V[451]*V[450]*V[21]*V[20];
C[12]=+V[15]*(2*(V[450]*(V[455]*(V[450]*(V[455]*V[15]+V[454]*V[21])+V[455]*
 V[451]*V[20])+S[20]*V[451]*V[20])+S[25]*(V[454]*(V[455]*V[21]+V[454]*
 V[15]))));
C[11]=+2*(S[19]*S[25]+S[20]*S[26]);
C[10]=+S[10]*(V[450]*(V[450]*(V[450]*(V[15]*(2*V[451]*V[20]+V[450]*V[15])-
 V[450]*S[13])+2*S[25]*S[27])+2*S[28]*V[20]*V[15])+S[29]*(S[10]-S[13]));
C[9]=+V[450]*(V[451]*(2*(V[450]*(V[451]*(S[27]+S[10]+S[13])+V[450]*V[20]*
 V[15])+S[25]*V[20]*V[15])));
C[8]=+4*S[25]*S[26]*S[10];
C[7]=+4*S[25]*S[26];
S[35]=V[122]*V[122]*V[122]*V[122];
S[36]=V[121]*V[121]*V[121]*V[121];
S[37]=V[3]*V[3]*V[3]*V[3];
C[6]=+16*S[35]*S[36]*S[14]*S[37];
C[5]=+S[10]*(S[26]*(S[25]*(2*(S[27]-S[10]+S[13]))));
C[4]=+V[450]*(V[450]*(V[15]*(V[15]*(4*S[25]+S[26])+4*V[451]*V[450]*V[20])+2*
 S[25]*S[27]-S[26]*S[13])+4*S[28]*V[20]*V[15])+S[29]*(S[10]-S[13]);
C[3]=+V[15]*(V[450]*(V[451]*(4*(V[20]*(S[25]+S[26])+V[451]*V[450]*V[15]))));
S[38]=V[450]*V[450]*V[450]*V[450];
C[2]=+2*(S[29]+S[38]);
C[1]=+32*S[35]*S[36]*S[14]*S[37];
C[0]=+S[18];
}
