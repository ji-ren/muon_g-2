/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C16(REAL *);
extern DNN S16_omg_p25p25_u;
REAL S16_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[4],width[4];
char * Qtxt[4];
REAL Q0[4]; COMPLEX Q1[4]; REAL Q2[4];
 if(momenta)
 {width[3]=0.; mass[3]=V[42];  Qtxt[3]="\1\3";
width[2]=0.; mass[2]=V[42];  Qtxt[2]="\1\4";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(3,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[10];REAL S[1];                                          
if(!momenta){ C16(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[0]*(C[3]+DP[0]-2*DP[1])+DP[1]*(2*DP[1]-C[2]);
R*=(N/D);
Prop=1*Q2[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[4];
D=+C[1];
R=+DP[0]*(C[6]+2*DP[0]-4*DP[1])+DP[1]*(2*DP[1]-C[5])+C[7];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[4];
D=+C[1];
S[0]=DP[1]*DP[1];
R=+2*S[0]-C[7]-C[3]*DP[0];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[8];
D=+C[1];
R=+DP[0]*(C[2]+DP[0]-2*DP[1])+DP[1]*(DP[1]-C[2])+C[7];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[9];
D=+C[1];
R=+C[3]+DP[0];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[8];
D=+C[1];
R=+S[0];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C16(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[8];                                                            
S[0]=V[219]*V[219]*V[219]*V[219];
S[1]=V[15]*V[15];
S[2]=V[1]*V[1]*V[1]*V[1];
C[9]=+S[0]*S[1]*S[2];
C[8]=+S[0]*S[2];
S[3]=V[15]*V[15]*V[15]*V[15];
C[7]=+S[3];
C[6]=+3*S[1];
C[5]=+4*S[1];
S[4]=V[219]*V[219];
C[4]=+V[458]*S[4]*S[2];
C[3]=+S[1];
C[2]=+2*S[1];
S[5]=V[119]*V[119]*V[119]*V[119];
S[6]=V[118]*V[118]*V[118]*V[118];
C[1]=+4*S[5]*S[6];
S[7]=V[458]*V[458];
C[0]=+S[7]*S[2];
}
