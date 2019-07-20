/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C11(REAL *);
extern DNN S11_omg_p25p25_u;
REAL S11_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[6],width[6];
char * Qtxt[6];
REAL Q0[6]; COMPLEX Q1[6]; REAL Q2[6];
 if(momenta)
 {width[5]=V[558]; mass[5]=V[13];  Qtxt[5]="\1\2";
width[4]=V[557]; mass[4]=V[12];  Qtxt[4]="\1\2";
width[3]=V[556]; mass[3]=V[11];  Qtxt[3]="\1\2";
width[2]=V[555]; mass[2]=V[10];  Qtxt[2]="\1\2";
width[1]=V[554]; mass[1]=V[9];  Qtxt[1]="\1\2";
*err=*err|prepDen(5,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[15];                                                    
if(!momenta){ C11(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(C[2]+DP[0])-C[3])-C[4];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[5];
D=+C[1];
R=+DP[0]*(DP[0]*(C[2]+DP[0])-C[3])-C[4];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[6];
D=+C[1];
R=+DP[0]*(DP[0]*(C[2]+DP[0])-C[3])-C[4];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[7];
D=+C[1];
R=+DP[0]*(DP[0]*(C[2]+DP[0])-C[3])-C[4];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[8];
D=+C[1];
R=+DP[0]*(DP[0]*(C[2]+DP[0])-C[3])-C[4];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[9];
D=+C[1];
R=+DP[0]*(DP[0]*(C[2]+DP[0])-C[3])-C[4];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[4]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[10];
D=+C[1];
R=+DP[0]*(DP[0]*(C[11]+DP[0])+C[12])+C[4];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[5];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[0]*(DP[0]*(C[11]+DP[0])+C[12])+C[4];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;
N=+C[14];
D=+C[1];
R=+DP[0]*(DP[0]*(C[11]+DP[0])+C[12])+C[4];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3]*Q0[4];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
 if(cb_coeff)
 {
  cb_coeff[0] += (R*8)/(9); /* (3 4) (4 3) */
 }
ans+=R;

}
return ans;
}

static void C11(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[23];                                                           
S[0]=V[468]*V[468];
S[1]=V[170]*V[170];
S[2]=V[162]*V[162];
C[14]=+128*S[0]*S[1]*S[2];
C[13]=+256*V[468]*V[466]*V[170]*V[169]*V[162]*V[161];
S[3]=V[15]*V[15]*V[15]*V[15];
C[12]=+3*S[3];
S[4]=V[15]*V[15];
C[11]=+3*S[4];
S[5]=V[466]*V[466];
S[6]=V[169]*V[169];
S[7]=V[161]*V[161];
C[10]=+128*S[5]*S[6]*S[7];
S[8]=V[464]*V[464];
S[9]=V[165]*V[165];
S[10]=V[160]*V[160];
C[9]=+32*S[8]*S[9]*S[10];
C[8]=+64*V[464]*V[462]*V[165]*V[164]*V[160]*V[159];
S[11]=V[462]*V[462];
S[12]=V[164]*V[164];
S[13]=V[159]*V[159];
C[7]=+32*S[11]*S[12]*S[13];
C[6]=+64*V[464]*V[460]*V[165]*V[163]*V[160]*V[158];
C[5]=+64*V[462]*V[460]*V[164]*V[163]*V[159]*V[158];
S[14]=V[15]*V[15]*V[15]*V[15]*V[15]*V[15];
C[4]=+S[14];
C[3]=+S[3];
C[2]=+S[4];
S[15]=V[122]*V[122];
S[16]=V[121]*V[121];
S[17]=V[119]*V[119];
S[18]=V[7]*V[7];
S[19]=V[3]*V[3];
C[1]=+S[15]*S[16]*S[17]*S[18]*S[19];
S[20]=V[460]*V[460];
S[21]=V[163]*V[163];
S[22]=V[158]*V[158];
C[0]=+32*S[20]*S[21]*S[22];
}
