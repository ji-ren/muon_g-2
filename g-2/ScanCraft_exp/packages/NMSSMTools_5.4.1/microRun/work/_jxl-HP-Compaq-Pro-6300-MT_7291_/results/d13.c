/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C13(REAL *);
extern DNN S13_omg_p25p25_u;
REAL S13_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[6],width[6];
char * Qtxt[6];
REAL Q0[6]; COMPLEX Q1[6]; REAL Q2[6];
 if(momenta)
 {width[5]=0.; mass[5]=V[35];  Qtxt[5]="\1\3";
width[4]=0.; mass[4]=V[35];  Qtxt[4]="\1\4";
width[3]=0.; mass[3]=V[34];  Qtxt[3]="\1\3";
width[2]=0.; mass[2]=V[34];  Qtxt[2]="\1\4";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(5,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[18];REAL S[1];                                          
if(!momenta){ C13(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[0]*(C[5]+C[4]*DP[0]-C[2]*DP[1])+DP[1]*(C[2]*DP[1]-C[3]);
R*=(N/D);
Prop=1*Q2[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[1];
R=+DP[0]*(C[8]+2*DP[0]-4*DP[1])+DP[1]*(2*DP[1]-C[7])+C[9];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[6];
D=+C[1];
S[0]=DP[1]*DP[1];
R=+2*S[0]-C[9]-C[10]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[11];
D=+C[12];
R=+DP[0]*(C[8]+2*DP[0]-4*DP[1])+DP[1]*(2*DP[1]-C[7])+C[9];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[11];
D=+C[12];
R=+2*S[0]-C[9]-C[10]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[0]*(C[14]+DP[0]-2*DP[1])+DP[1]*(DP[1]-C[14])+C[9];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[15];
D=+C[1];
R=+C[10]+DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+S[0];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[16];
D=+C[12];
R=+DP[0]*(C[14]+DP[0]-2*DP[1])+DP[1]*(DP[1]-C[14])+C[9];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[17];
D=+C[12];
R=+C[10]+DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[16];
D=+C[12];
R=+S[0];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C13(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[11];                                                           
S[0]=V[43]*V[43]*V[43]*V[43];
S[1]=V[15]*V[15];
S[2]=V[1]*V[1]*V[1]*V[1];
C[17]=+4*S[0]*S[1]*S[2];
C[16]=+4*S[0]*S[2];
S[3]=V[193]*V[193]*V[193]*V[193];
C[15]=+S[3]*S[1]*S[2];
C[14]=+2*S[1];
C[13]=+S[3]*S[2];
S[4]=V[118]*V[118]*V[118]*V[118];
C[12]=+S[4];
S[5]=V[43]*V[43];
C[11]=+2*V[458]*S[5]*S[2];
C[10]=+S[1];
S[6]=V[15]*V[15]*V[15]*V[15];
C[9]=+S[6];
C[8]=+3*S[1];
C[7]=+4*S[1];
S[7]=V[193]*V[193];
C[6]=+V[458]*S[7]*V[120]*S[2];
S[8]=V[120]*V[120];
S[9]=V[119]*V[119]*V[119]*V[119];
C[5]=+S[1]*(S[8]+4*S[9]);
C[4]=+S[8]+4*S[9];
C[3]=+S[1]*(2*S[8]+8*S[9]);
C[2]=+2*S[8]+8*S[9];
C[1]=+4*S[9]*S[4];
S[10]=V[458]*V[458];
C[0]=+S[10]*S[2];
}
