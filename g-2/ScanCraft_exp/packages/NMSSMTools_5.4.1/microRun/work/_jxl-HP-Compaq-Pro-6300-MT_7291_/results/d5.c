/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C5(REAL *);
extern DNN S5_omg_p25p25_u;
REAL S5_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[14],width[14];
char * Qtxt[14];
REAL Q0[14]; COMPLEX Q1[14]; REAL Q2[14];
 if(momenta)
 {width[3]=V[553]; mass[3]=V[2];  Qtxt[3]="\1\2";
width[13]=0.; mass[13]=V[15];  Qtxt[13]="\1\3";
width[12]=0.; mass[12]=V[15];  Qtxt[12]="\1\4";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[1]=V[558]; mass[1]=V[13];  Qtxt[1]="\1\2";
width[11]=0.; mass[11]=V[16];  Qtxt[11]="\1\3";
width[10]=0.; mass[10]=V[16];  Qtxt[10]="\1\4";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\4";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\3";
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
static REAL C[417];                                                   
if(!momenta){ C5(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=+C[0];
D=+C[1];
R=+DP[1]*(DP[0]*(C[3]+4*DP[1])+C[4]-C[2]*DP[1])+C[5]*DP[0]-C[6];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[0];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[8])+C[10]*DP[0]-C[11])+DP[1]*(C[7]*DP[1]-
 C[9])+C[12];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[15])+C[10]*DP[0]-C[17])+DP[1]*(C[14]*
 DP[1]-C[16])+C[18];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[1]*(DP[0]*(C[20]+8*DP[1])+C[21]-C[19]*DP[1])+C[22]*DP[0]-C[23];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[24];
D=+C[1];
R=+DP[1]*(DP[0]*(C[26]+8*DP[1])+C[27]-C[25]*DP[1])+C[28]*DP[0]-C[29];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[24];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[31])+C[10]*DP[0]-C[33])+DP[1]*(C[30]*
 DP[1]-C[32])+C[34];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[37])+C[10]*DP[0]-C[39])+DP[1]*(C[36]*
 DP[1]-C[38])+C[40];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[35];
D=+C[1];
R=+DP[1]*(DP[0]*(C[42]+8*DP[1])+C[43]-C[41]*DP[1])+C[44]*DP[0]-C[45];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[46];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[51])+C[49]*DP[1]-C[52])+C[50]*DP[1]-C[53];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[54];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[51])+C[49]*DP[1]-C[52])+C[50]*DP[1]-C[53];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[57])+C[59]+C[10]*DP[0])+DP[1]*(C[56]*
 DP[1]-C[58])+C[60];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[55];
D=+C[1];
R=+DP[1]*(DP[0]*(C[62]+8*DP[1])+C[63]-C[61]*DP[1])+C[64]*DP[0]-C[65];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[66];
D=+C[67];
R=+DP[0]*(DP[0]*(C[72]-C[69]*DP[1])+C[73]-C[70]*DP[1])+DP[1]*(C[68]*DP[1]-
 C[71])+C[74];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[77]-8*DP[1])+DP[1]*(C[75]+4*DP[1])+C[78])+DP[1]*(
 C[76]-C[2]*DP[1])-C[79];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[13];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[82]-16*DP[1])+DP[1]*(C[80]+8*DP[1])+C[83])+DP[1]*
 (C[81]-C[19]*DP[1])-C[84];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[13];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[85])+C[87]*DP[0]-C[88])+DP[1]*(C[14]*
 DP[1]-C[86])+C[89];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[24];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[90])+C[92]*DP[0]-C[93])+DP[1]*(C[30]*
 DP[1]-C[91])+C[94];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[24];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[97]-16*DP[1])+DP[1]*(C[95]+8*DP[1])+C[98])+DP[1]*
 (C[96]-C[25]*DP[1])-C[99];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[35];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[102]-16*DP[1])+DP[1]*(C[100]+8*DP[1])+C[103])+
 DP[1]*(C[101]-C[41]*DP[1])-C[104];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[35];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[105])+C[107]*DP[0]-C[108])+DP[1]*(C[36]*
 DP[1]-C[106])+C[109];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[46];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[110])+C[111]+C[49]*DP[1])+C[112]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[54];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[110])+C[111]+C[49]*DP[1])+C[112]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[55];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[115]-16*DP[1])+DP[1]*(C[113]+8*DP[1])-C[116])+
 DP[1]*(C[114]-C[61]*DP[1])-C[117];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[55];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[118])+C[120]*DP[0]-C[121])+DP[1]*(C[56]*
 DP[1]-C[119])+C[122];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[66];
D=+C[67];
R=+DP[0]*(DP[0]*(C[69]*(DP[1]-DP[0])+C[125])+C[126]-C[123]*DP[1])+DP[1]*(
 C[68]*DP[1]-C[124])+C[127];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[128];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[132]-8*DP[1])+DP[1]*(C[130]+4*DP[1])+C[133])+
 DP[1]*(C[131]-C[129]*DP[1])-C[134];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[128];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[136])+C[87]*DP[0]-C[138])+DP[1]*(C[135]*
 DP[1]-C[137])+C[139];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[140];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[142])+C[92]*DP[0]-C[144])+DP[1]*(C[141]*
 DP[1]-C[143])+C[145];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[140];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[149]-16*DP[1])+DP[1]*(C[147]+8*DP[1])+C[150])+
 DP[1]*(C[148]-C[146]*DP[1])-C[151];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[152];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[156]-16*DP[1])+DP[1]*(C[154]+8*DP[1])+C[157])+
 DP[1]*(C[155]-C[153]*DP[1])-C[158];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[152];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[160])+C[107]*DP[0]-C[162])+DP[1]*(C[159]*
 DP[1]-C[161])+C[163];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[164];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[165])+C[166]+C[49]*DP[1])+C[167]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[168];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[165])+C[166]+C[49]*DP[1])+C[167]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[169];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[173]-16*DP[1])+DP[1]*(C[171]+8*DP[1])-C[174])+
 DP[1]*(C[172]-C[170]*DP[1])-C[175];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[169];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[177])+C[120]*DP[0]-C[179])+DP[1]*(C[176]*
 DP[1]-C[178])+C[180];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[181];
D=+C[67];
R=+DP[0]*(DP[0]*(C[69]*(DP[1]-DP[0])+C[185])+C[186]-C[183]*DP[1])+DP[1]*(
 C[182]*DP[1]-C[184])+C[187];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[128];
D=+C[1];
R=+DP[1]*(DP[0]*(C[188]+4*DP[1])+C[189]-C[129]*DP[1])+C[190]*DP[0]-C[191];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[140];
D=+C[1];
R=+DP[1]*(DP[0]*(C[192]+8*DP[1])+C[193]-C[146]*DP[1])+C[194]*DP[0]-C[195];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[140];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[196])+C[87]*DP[0]-C[198])+DP[1]*(C[141]*
 DP[1]-C[197])+C[199];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[152];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[200])+C[87]*DP[0]-C[202])+DP[1]*(C[159]*
 DP[1]-C[201])+C[203];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[152];
D=+C[1];
R=+DP[1]*(DP[0]*(C[204]+8*DP[1])+C[205]-C[153]*DP[1])+C[206]*DP[0]-C[207];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[164];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[208])+C[49]*DP[1]-C[209])+C[50]*DP[1]-C[210];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[168];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[208])+C[49]*DP[1]-C[209])+C[50]*DP[1]-C[210];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[169];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[211])+C[213]+C[87]*DP[0])+DP[1]*(C[176]*
 DP[1]-C[212])+C[214];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[169];
D=+C[1];
R=+DP[1]*(DP[0]*(C[215]+8*DP[1])+C[216]-C[170]*DP[1])+C[217]*DP[0]-C[218];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[181];
D=+C[67];
R=+DP[0]*(DP[0]*(C[221]-C[69]*DP[1])+C[222]-C[219]*DP[1])+DP[1]*(C[182]*
 DP[1]-C[220])+C[223];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[224];
D=+C[1];
R=+DP[1]*(DP[0]*(C[226]+4*DP[1])+C[227]-C[225]*DP[1])+C[228]*DP[0]-C[229];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[224];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[231])+C[92]*DP[0]-C[233])+DP[1]*(C[230]*
 DP[1]-C[232])+C[234];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[235];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[237])+C[92]*DP[0]-C[239])+DP[1]*(C[236]*
 DP[1]-C[238])+C[240];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[235];
D=+C[1];
R=+DP[1]*(DP[0]*(C[242]+8*DP[1])+C[243]-C[241]*DP[1])+C[244]*DP[0]-C[245];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[246];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[247])+C[49]*DP[1]-C[248])+C[50]*DP[1]-C[249];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[250];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[247])+C[49]*DP[1]-C[248])+C[50]*DP[1]-C[249];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[251];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[253])+C[255]+C[92]*DP[0])+DP[1]*(C[252]*
 DP[1]-C[254])+C[256];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[251];
D=+C[1];
R=+DP[1]*(DP[0]*(C[258]+8*DP[1])+C[259]-C[257]*DP[1])+C[260]*DP[0]-C[261];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[262];
D=+C[67];
R=+DP[0]*(DP[0]*(C[266]-C[69]*DP[1])+C[267]-C[264]*DP[1])+DP[1]*(C[263]*
 DP[1]-C[265])+C[268];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[224];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[271]-8*DP[1])+DP[1]*(C[269]+4*DP[1])+C[272])+
 DP[1]*(C[270]-C[225]*DP[1])-C[273];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[235];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[276]-16*DP[1])+DP[1]*(C[274]+8*DP[1])+C[277])+
 DP[1]*(C[275]-C[241]*DP[1])-C[278];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[235];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[279])+C[107]*DP[0]-C[281])+DP[1]*(C[236]*
 DP[1]-C[280])+C[282];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[246];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[283])+C[284]+C[49]*DP[1])+C[285]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[250];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[283])+C[284]+C[49]*DP[1])+C[285]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[251];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[288]-16*DP[1])+DP[1]*(C[286]+8*DP[1])-C[289])+
 DP[1]*(C[287]-C[257]*DP[1])-C[290];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[251];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[291])+C[120]*DP[0]-C[293])+DP[1]*(C[252]*
 DP[1]-C[292])+C[294];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[262];
D=+C[67];
R=+DP[0]*(DP[0]*(C[69]*(DP[1]-DP[0])+C[297])+C[298]-C[295]*DP[1])+DP[1]*(
 C[263]*DP[1]-C[296])+C[299];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[300];
D=+C[1];
R=+DP[0]*(DP[0]*(4*DP[0]-C[304]-8*DP[1])+DP[1]*(C[302]+4*DP[1])+C[305])+
 DP[1]*(C[303]-C[301]*DP[1])-C[306];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[300];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[308])+C[107]*DP[0]-C[310])+DP[1]*(C[307]*
 DP[1]-C[309])+C[311];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[312];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[313])+C[314]+C[49]*DP[1])+C[315]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[316];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*(DP[1]-DP[0])+C[313])+C[314]+C[49]*DP[1])+C[315]+
 C[50]*DP[1];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[317];
D=+C[1];
R=+DP[0]*(DP[0]*(8*DP[0]-C[321]-16*DP[1])+DP[1]*(C[319]+8*DP[1])-C[322])+
 DP[1]*(C[320]-C[318]*DP[1])-C[323];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[317];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[325])+C[120]*DP[0]-C[327])+DP[1]*(C[324]*
 DP[1]-C[326])+C[328];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[329];
D=+C[67];
R=+DP[0]*(DP[0]*(C[69]*(DP[1]-DP[0])+C[333])+C[334]-C[331]*DP[1])+DP[1]*(
 C[330]*DP[1]-C[332])+C[335];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[300];
D=+C[1];
R=+DP[1]*(DP[0]*(C[336]+4*DP[1])+C[337]-C[301]*DP[1])+C[338]*DP[0]-C[339];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[312];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[340])+C[49]*DP[1]-C[341])+C[50]*DP[1]-C[342];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[1]):conj(
 Q1[1]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[316];
D=+C[47];
R=+DP[0]*(DP[0]*(C[48]*DP[1]-C[340])+C[49]*DP[1]-C[341])+C[50]*DP[1]-C[342];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[317];
D=+C[1];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[343])+C[345]+C[107]*DP[0])+DP[1]*(C[324]*
 DP[1]-C[344])+C[346];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[317];
D=+C[1];
R=+DP[1]*(DP[0]*(C[347]+8*DP[1])+C[348]-C[318]*DP[1])+C[349]*DP[0]-C[350];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[329];
D=+C[67];
R=+DP[0]*(DP[0]*(C[353]-C[69]*DP[1])+C[354]-C[351]*DP[1])+DP[1]*(C[330]*
 DP[1]-C[352])+C[355];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[356];
D=+C[357];
R=+DP[0]*(DP[0]*(C[359]+C[358]*DP[0])+C[360])+C[361];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[362];
D=+C[47];
R=+DP[0]*(DP[0]*(C[359]+C[358]*DP[0])+C[360])+C[361];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[363];
D=+C[1];
R=+DP[0]*(DP[0]*(C[364]*(DP[1]-DP[0])-C[367])+C[365]*DP[1]-C[368])+C[366]*
 DP[1]-C[369];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[363];
D=+C[1];
R=+DP[0]*(DP[0]*(C[364]*DP[1]-C[370])+C[365]*DP[1]-C[371])+C[366]*DP[1]-
 C[372];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[373];
D=+C[374];
R=+DP[0]*(DP[0]*(C[375]+C[48]*DP[0])+C[376])+C[377];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[378];
D=+C[357];
R=+DP[0]*(DP[0]*(C[359]+C[358]*DP[0])+C[360])+C[361];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[379];
D=+C[1];
R=+DP[0]*(DP[0]*(C[364]*(DP[1]-DP[0])-C[367])+C[365]*DP[1]-C[368])+C[366]*
 DP[1]-C[369];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[379];
D=+C[1];
R=+DP[0]*(DP[0]*(C[364]*DP[1]-C[370])+C[365]*DP[1]-C[371])+C[366]*DP[1]-
 C[372];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[380];
D=+C[374];
R=+DP[0]*(DP[0]*(C[375]+C[48]*DP[0])+C[376])+C[377];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[381];
D=+C[1];
R=+DP[0]*(DP[0]*(C[385]+4*DP[0]-8*DP[1])+DP[1]*(C[383]+4*DP[1])-C[386])+
 DP[1]*(C[384]-C[382]*DP[1])-C[387];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[381];
D=+C[388];
R=+DP[0]*(DP[1]*(4*(DP[1]-DP[0])-C[390])+C[393]+C[392]*DP[0])+DP[1]*(C[389]*
 DP[1]-C[391])+C[394];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[395];
D=+C[67];
R=+DP[0]*(DP[0]*(8*(DP[1]-DP[0])-C[399])+C[397]*DP[1]-C[400])+DP[1]*(C[398]+
 C[396]*DP[1])-C[401];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[381];
D=+C[1];
R=+DP[1]*(DP[1]*(4*DP[0]-C[382])+C[402])-C[404]-C[403]*DP[0];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[395];
D=+C[67];
R=+DP[0]*(DP[0]*(C[120]-8*DP[1])+C[407]-C[405]*DP[1])+DP[1]*(C[396]*DP[1]-
 C[406])+C[408];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[13]):Q1[13])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[409];
D=+C[410];
R=+DP[0]*(DP[0]*(-C[414]-C[413]*DP[0])-C[415]-C[411]*DP[1])+DP[1]*(C[411]*
 DP[1]-C[412])-C[416];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C5(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[39];                                                           
S[0]=V[15]*V[15];
S[1]=V[10]*V[10];
S[2]=V[2]*V[2];
S[3]=V[15]*V[15]*V[15]*V[15];
C[416]=+S[0]*(S[2]*(S[2]*(5*S[0]+2*S[1]-4*S[2])+S[1]*(2*S[0]-S[1])-8*S[3])+
 S[0]*(S[1]*(S[1]-4*S[0])+4*S[3]));
S[4]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[415]=+S[0]*(S[2]*(2*S[1]-16*S[0]+5*S[2])+S[1]*(S[1]-8*S[0])+12*S[3])+S[4];
C[414]=+S[0]*(12*S[0]-4*S[1]-8*S[2]);
C[413]=+4*S[0];
S[5]=V[2]*V[2]*V[2]*V[2];
C[412]=+S[5]*(2*S[0]-S[1]+S[2]);
C[411]=+2*S[5];
S[6]=V[119]*V[119]*V[119]*V[119];
S[7]=V[118]*V[118]*V[118]*V[118]*V[118]*V[118];
C[410]=+4*S[6]*S[7]*S[4];
S[8]=V[458]*V[458];
S[9]=V[233]*V[233];
S[10]=V[3]*V[3];
S[11]=V[1]*V[1]*V[1]*V[1];
C[409]=+S[8]*S[9]*S[10]*S[11];
C[408]=+S[0]*(S[2]*(14*S[2]-4*S[0]-2*S[1])+S[1]*(2*S[1]-8*S[0])+8*S[3])+
 S[5]*(3*(S[2]-S[1]));
C[407]=+S[2]*(2*S[1]-4*S[2])+S[0]*(16*S[0]-8*S[1]);
C[406]=+S[2]*(14*S[2]-2*S[1])+S[0]*(8*S[0]-4*S[1]);
C[405]=+16*S[0]-4*S[1];
C[404]=+S[2]*(S[0]*(16*S[0]-4*S[1]+7*S[2]));
C[403]=+S[5];
C[402]=+S[2]*(2*(S[2]-S[1])+24*S[0]);
C[401]=+S[2]*(S[2]*(2*S[2]-8*S[0]-S[1])+S[1]*(6*S[0]-S[1]));
C[400]=+S[2]*(2*S[1]-8*S[0]+10*S[2])+S[1]*(2*S[1]-8*S[0])+8*S[3];
C[399]=+8*(-S[1]-S[2])+16*S[0];
C[398]=+S[2]*(6*(S[1]+S[2])-16*S[0])+S[0]*(8*S[0]-4*S[1]);
C[397]=+16*(S[0]-S[2])-4*S[1];
C[396]=+8*S[2];
S[12]=V[1]*V[1]*V[1];
C[395]=+V[462]*S[8]*V[233]*V[15]*S[12];
C[394]=+S[0]*(S[2]*(10*S[0]-3*S[1]-S[2])+S[1]*(S[1]-4*S[0])+4*S[3]);
C[393]=+S[2]*(S[1]-4*S[0]-2*S[2])+S[0]*(8*S[0]-4*S[1]);
C[392]=+4*S[0]+2*S[2];
C[391]=+S[2]*(2*(S[0]+S[1]-S[2]))+S[0]*(12*S[0]-6*S[1]);
C[390]=+2*(-S[1]-S[2])+16*S[0];
C[389]=+12*S[0]-4*S[2];
S[13]=V[122]*V[122];
S[14]=V[121]*V[121];
S[15]=V[118]*V[118];
S[16]=V[7]*V[7];
C[388]=+8*S[13]*S[14]*S[6]*S[15]*S[16]*S[10]*S[2];
C[387]=+S[0]*(S[1]*(4*(S[2]-S[0])+S[1])+4*S[3]-2*S[5]);
S[17]=V[10]*V[10]*V[10]*V[10];
C[386]=+S[2]*(2*S[2]-16*S[0])+4*S[3]-S[17];
C[385]=+4*(S[0]-S[1]);
C[384]=+S[2]*(2*(S[2]-S[1])-12*S[0])+S[0]*(8*S[0]-4*S[1]);
C[383]=+4*(S[1]+S[2]);
C[382]=+4*(S[0]+S[2]);
S[18]=V[462]*V[462];
S[19]=V[1]*V[1];
C[381]=+S[18]*S[8]*S[19];
C[380]=+V[466]*V[458]*V[233]*V[125]*V[15]*S[12];
C[379]=+V[466]*V[462]*V[458]*V[125]*S[19];
S[20]=V[466]*V[466];
S[21]=V[125]*V[125];
C[378]=+S[20]*S[21]*S[19];
C[377]=+S[2]*(S[2]*(V[211]*(S[2]-6*S[0]-2*S[1])+V[212]*(6*S[0]+2*S[1]-
 S[2]))+S[17]*(V[211]-V[212])+S[3]*(12*(V[211]-V[212])))+S[0]*(S[1]*(S[1]*(
 2*(V[212]-V[211]))+S[0]*(8*(V[211]-V[212])))+S[3]*(8*(V[212]-V[211])));
C[376]=+S[0]*(24*(S[2]*(V[211]-V[212])+S[0]*(V[212]-V[211]))+S[1]*(16*(
 V[211]-V[212])))+S[5]*(6*(V[212]-V[211]))+S[17]*(2*(V[212]-V[211]));
C[375]=+V[211]*(8*S[1]-24*S[0]+12*S[2])+V[212]*(24*S[0]-8*S[1]-12*S[2]);
S[22]=V[118]*V[118]*V[118]*V[118];
C[374]=+16*V[122]*V[121]*S[6]*S[22]*V[7]*S[5];
C[373]=+V[468]*V[458]*V[233]*V[126]*V[15]*S[12];
C[372]=+S[0]*(S[1]*(V[211]*(4*S[0]-S[1]+S[2])+V[212]*(S[1]-4*S[0]-S[2]))+
 S[0]*(S[2]*(2*(V[211]-V[212]))+S[0]*(4*(V[212]-V[211]))));
C[371]=+S[2]*(S[2]*(V[211]-V[212])+S[1]*(V[212]-V[211]))+S[0]*(S[1]*(4*(
 V[211]-V[212]))+S[0]*(8*(V[212]-V[211])));
C[370]=+S[2]*(2*(V[212]-V[211]))+S[0]*(4*(V[212]-V[211]));
C[369]=+S[2]*(S[0]*(V[211]*(S[2]-2*S[0]-S[1])+V[212]*(2*S[0]+S[1]-S[2])));
C[368]=+S[1]*(V[211]*(4*S[0]-S[1]+S[2])+V[212]*(S[1]-4*S[0]-S[2]))+S[3]*(4*(
 V[212]-V[211]));
C[367]=+V[211]*(4*S[1]-8*S[0]+2*S[2])+V[212]*(8*S[0]-4*S[1]-2*S[2]);
C[366]=+S[0]*(2*(S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))+S[0]*(4*(V[212]-
 V[211])));
C[365]=+2*(S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))+S[0]*(8*(V[212]-
 V[211]));
C[364]=+4*(V[212]-V[211]);
C[363]=+V[468]*V[462]*V[458]*V[126]*S[19];
C[362]=+V[468]*V[466]*V[126]*V[125]*S[19];
S[23]=V[212]*V[212];
C[361]=+S[0]*(V[211]*(S[2]*(V[211]*(S[2]-4*S[0]-2*S[1])+V[212]*(8*S[0]+4*
 S[1]-2*S[2]))+S[1]*(S[1]*(V[211]-2*V[212])+S[0]*(8*V[212]-4*V[211]))+S[3]*(
 4*V[211]-8*V[212]))+S[23]*(S[2]*(S[2]-4*S[0]-2*S[1])+S[1]*(S[1]-4*S[0])+4*
 S[3]));
C[360]=+V[211]*(S[2]*(V[211]*(S[2]-8*S[0]-2*S[1])+V[212]*(16*S[0]+4*S[1]-2*
 S[2]))+S[1]*(S[1]*(V[211]-2*V[212])+S[0]*(16*V[212]-8*V[211]))+S[3]*(12*
 V[211]-24*V[212]))+S[23]*(S[2]*(S[2]-8*S[0]-2*S[1])+S[1]*(S[1]-8*S[0])+12*
 S[3]);
C[359]=+V[211]*(V[211]*(4*(-S[1]-S[2])+12*S[0])+V[212]*(8*(S[1]+S[2])-24*
 S[0]))+S[23]*(4*(-S[1]-S[2])+12*S[0]);
C[358]=+V[211]*(4*V[211]-8*V[212])+4*S[23];
C[357]=+64*S[13]*S[14]*S[6]*S[15]*S[16]*S[10]*S[2];
S[24]=V[468]*V[468];
S[25]=V[126]*V[126];
C[356]=+S[24]*S[25]*S[19];
C[355]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[1])+
 V[16]*(-S[1]-S[2])))+S[17]+7*S[5])+V[16]*(S[2]*(7*S[2]-2*S[1])+S[17]))+
 S[5]*(3*(S[2]-S[1])));
C[354]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))+4*(S[2]-S[1]))+V[16]*(
 4*(-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[16]*S[5];
C[353]=+V[15]*(4*(V[15]*(V[16]+V[15])+S[2]));
S[26]=V[15]*V[15]*V[15];
C[352]=+S[2]*(V[15]*(V[15]*(4*(V[16]-V[15]))+12*S[2])+V[16]*(2*(S[2]-
 S[1])))+S[26]*(8*S[0]-4*S[1]);
C[351]=+V[15]*(4*(-S[1]-S[2])+16*S[0])+4*V[16]*S[2];
C[350]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[16]+18*V[15])+11*S[2]-5*S[1])+V[16]*
 (3*(S[2]-S[1]))));
C[349]=+S[2]*(2*(V[15]*(V[16]-V[15])-S[2]));
C[348]=+V[15]*(V[15]*(V[15]*(4*(V[16]-V[15]))+2*S[1]+34*S[2])+V[16]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[347]=+V[15]*(4*(V[16]-V[15]));
C[346]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+14*S[2])+
 V[16]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[16]*(S[2]*(S[1]-2*S[2])+
 S[17]));
C[345]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))+2*S[2]-4*S[1])+V[16]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[344]=+V[15]*(V[15]*(V[15]*(12*(V[16]+V[15]))+10*S[2]-6*S[1])+V[16]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[343]=+V[15]*(12*V[16]+20*V[15])+4*(-S[1]-S[2]);
C[342]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[16]*(
 V[212]-V[211]))+S[1]*(V[211]-V[212]))+V[16]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[211]-V[212])+S[17]*(V[212]-V[211]))+V[16]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[341]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[16]*(V[212]-
 V[211])))+4*(S[2]*(V[212]-V[211])+S[1]*(V[211]-V[212])))+V[16]*(4*(S[2]*(
 V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[2]*(2*(S[2]*(V[211]-V[212])+S[1]*(
 V[212]-V[211])));
C[340]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[16]*(V[212]-V[211]))+S[2]*(V[212]-
 V[211]));
S[27]=V[16]*V[16];
C[339]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[16]+5*V[15])+3*S[27]-S[1]+4*S[2])+
 V[16]*(3*(S[2]-S[1]))));
C[338]=+S[2]*(S[27]-S[0]-S[2]);
C[337]=+S[2]*(V[15]*(12*V[16]+11*V[15])+2*(S[2]-S[1])+S[27])+S[0]*(2*(S[27]-
 S[0])+S[1])-S[27]*S[1];
C[336]=+2*(S[27]-S[0]);
C[335]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[16]-V[15])+S[1]+
 S[2])+V[16]*(-S[1]-S[2]))-S[1]*S[2])+S[5]-S[17])+V[16]*(S[2]*(7*S[2]-2*
 S[1])+S[17]))+S[2]*(S[2]*(S[1]-2*S[2])+S[17]));
C[334]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[16]-16*V[15])+12*(S[1]+S[2]))+V[16]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[17])-2*V[16]*S[5];
C[333]=+V[15]*(V[15]*(4*V[16]-20*V[15])+8*(S[1]+S[2]));
C[332]=+S[2]*(V[15]*(V[15]*(4*V[16]+12*V[15])-4*S[1]-8*S[2])+V[16]*(2*(S[2]-
 S[1])))+S[26]*(4*S[1]-8*S[0]);
C[331]=+V[15]*(4*S[1]-16*S[0]+12*S[2])+4*V[16]*S[2];
C[330]=+S[2]*(4*(V[16]+V[15]));
C[329]=+V[477]*V[469]*V[458]*V[233]*S[12];
C[328]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[16]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[0])+8*S[3])+S[2]*(V[16]*(3*(S[2]-S[1]))));
C[327]=+S[2]*(V[15]*(2*V[16]+6*V[15])+4*S[2]-2*S[1])+S[0]*(8*S[1]-16*S[0]);
C[326]=+V[15]*(V[15]*(V[15]*(4*V[16]+20*V[15])+10*(-S[1]-S[2]))+V[16]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[325]=+4*(V[16]*V[15]-S[1]-S[2])+28*S[0];
C[324]=+V[15]*(8*V[16]+16*V[15])-8*S[2];
C[323]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])-6*S[2])+
 V[16]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[17])+V[16]*(S[2]*(S[1]-2*
 S[2])+S[17]));
C[322]=+V[15]*(V[15]*(8*V[16]*V[15]+4*S[1]-22*S[2])+V[16]*(-4*S[1]-10*
 S[2]))+4*S[5]-2*S[17];
C[321]=+V[15]*(4*V[16]-12*V[15])+8*S[1];
C[320]=+V[15]*(V[15]*(V[15]*(12*V[16]+4*V[15])-2*S[1]-18*S[2])+V[16]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[319]=+V[15]*(12*(V[16]-V[15]))+8*(S[1]+S[2]);
C[318]=+8*(V[16]*V[15]+S[2]);
C[317]=+V[477]*V[469]*V[462]*V[458]*S[19];
C[316]=+V[477]*V[469]*V[466]*V[125]*S[19];
C[315]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[16]*(
 V[212]-V[211]))+S[1]*(V[212]-V[211]))+V[16]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[212]-V[211])+S[17]*(V[211]-V[212]))+V[16]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[314]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[211]-V[212]))+V[16]*(8*(V[212]-
 V[211])))+S[2]*(4*(V[212]-V[211]))+S[1]*(12*(V[212]-V[211])))+V[16]*(4*(
 S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[1]*(2*(S[2]*(V[212]-V[211])+
 S[1]*(V[211]-V[212])));
C[313]=+V[15]*(V[15]*(20*(V[211]-V[212]))+V[16]*(4*(V[212]-V[211])))+S[2]*(
 4*(V[212]-V[211]))+S[1]*(8*(V[212]-V[211]));
C[312]=+V[477]*V[469]*V[468]*V[126]*S[19];
C[311]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+
 V[16]*(8*S[2]-4*S[1]))+S[2]*(6*S[27]-4*S[1]-3*S[2])+S[17])+V[16]*(S[2]*(
 S[2]-2*S[1])+S[17]));
C[310]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[27]-S[1])+4*S[2]);
C[309]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*S[27]-6*S[1]-2*S[2])+V[16]*
 (4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[27])-2*S[27]*S[1];
C[308]=+4*(S[27]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[307]=+V[15]*(8*V[16]+12*V[15])+4*S[27]-8*S[2];
C[306]=+V[15]*(V[16]*(S[2]*(3*V[16]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[0])+4*
 S[3])+S[2]*(V[15]*(3*(S[1]-S[0]))));
C[305]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[16])+7*S[2]-4*S[1])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(S[27]-2*S[2])+S[17];
C[304]=+V[15]*(4*V[16]-8*V[15])+4*S[1];
C[303]=+V[15]*(V[15]*(V[15]*(8*V[16]-2*V[15])+2*S[27]+S[1]-5*S[2])+V[16]*(-
 4*S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[27])-S[27]*S[1];
C[302]=+V[15]*(8*V[16]-10*V[15])+4*(S[1]+S[2])+2*S[27];
C[301]=+V[15]*(4*V[16]-2*V[15])+2*S[27]+4*S[2];
S[28]=V[477]*V[477];
S[29]=V[469]*V[469];
C[300]=+S[28]*S[29]*S[19];
C[299]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[17]-V[15])+S[1]+
 S[2])+V[17]*(-S[1]-S[2]))-S[1]*S[2])+S[5]-S[17])+V[17]*(S[2]*(7*S[2]-2*
 S[1])+S[17]))+S[2]*(S[2]*(S[1]-2*S[2])+S[17]));
C[298]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[17]-16*V[15])+12*(S[1]+S[2]))+V[17]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[17])-2*V[17]*S[5];
C[297]=+V[15]*(V[15]*(4*V[17]-20*V[15])+8*(S[1]+S[2]));
C[296]=+S[2]*(V[15]*(V[15]*(4*V[17]+12*V[15])-4*S[1]-8*S[2])+V[17]*(2*(S[2]-
 S[1])))+S[26]*(4*S[1]-8*S[0]);
C[295]=+V[15]*(4*S[1]-16*S[0]+12*S[2])+4*V[17]*S[2];
C[294]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[17]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[0])+8*S[3])+S[2]*(V[17]*(3*(S[2]-S[1]))));
C[293]=+S[2]*(V[15]*(2*V[17]+6*V[15])+4*S[2]-2*S[1])+S[0]*(8*S[1]-16*S[0]);
C[292]=+V[15]*(V[15]*(V[15]*(4*V[17]+20*V[15])+10*(-S[1]-S[2]))+V[17]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[291]=+4*(V[17]*V[15]-S[1]-S[2])+28*S[0];
C[290]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])-6*S[2])+
 V[17]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[17])+V[17]*(S[2]*(S[1]-2*
 S[2])+S[17]));
C[289]=+V[15]*(V[15]*(8*V[17]*V[15]+4*S[1]-22*S[2])+V[17]*(-4*S[1]-10*
 S[2]))+4*S[5]-2*S[17];
C[288]=+V[15]*(4*V[17]-12*V[15])+8*S[1];
C[287]=+V[15]*(V[15]*(V[15]*(12*V[17]+4*V[15])-2*S[1]-18*S[2])+V[17]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[286]=+V[15]*(12*(V[17]-V[15]))+8*(S[1]+S[2]);
C[285]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[17]*(
 V[212]-V[211]))+S[1]*(V[212]-V[211]))+V[17]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[212]-V[211])+S[17]*(V[211]-V[212]))+V[17]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[284]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[211]-V[212]))+V[17]*(8*(V[212]-
 V[211])))+S[2]*(4*(V[212]-V[211]))+S[1]*(12*(V[212]-V[211])))+V[17]*(4*(
 S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[1]*(2*(S[2]*(V[212]-V[211])+
 S[1]*(V[211]-V[212])));
C[283]=+V[15]*(V[15]*(20*(V[211]-V[212]))+V[17]*(4*(V[212]-V[211])))+S[2]*(
 4*(V[212]-V[211]))+S[1]*(8*(V[212]-V[211]));
C[282]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+8*
 V[17]*S[2]-4*V[16]*S[1])+S[2]*(6*V[17]*V[16]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[17]-2*V[16])+S[1]*(V[16]-3*V[17]))+V[16]*S[17]);
C[281]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[17]*V[16]-S[1])+4*S[2]);
C[280]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[17]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[17]-8*V[16])-4*V[16]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[17]*V[16])-2*
 V[17]*V[16]*S[1];
C[279]=+4*(V[17]*V[16]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[278]=+V[15]*(S[2]*(S[1]*(V[17]+V[16]+6*V[15])+S[2]*(2*(-V[17]-V[16]))+
 V[15]*(6*(V[17]*V[16]-S[0])))+S[1]*(S[1]*(V[17]+V[16])+S[0]*(4*(-V[17]-
 V[16])))+S[3]*(4*(V[17]+V[16])));
C[277]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[17]-V[16])-S[1])+S[2]*(V[17]+
 V[16]))+S[1]*(4*(V[17]+V[16]))+14*V[15]*S[2])+S[2]*(2*V[17]*V[16]-4*S[2])+
 2*S[17];
C[276]=+V[15]*(4*(V[17]+V[16])-16*V[15])+8*S[1];
C[275]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[16])-4*V[15])+4*V[17]*V[16]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[17]-V[16]))+S[1]*(4*(-V[17]-V[16])))+S[2]*(4*(S[2]-
 S[1])+2*V[17]*V[16])-2*V[17]*V[16]*S[1];
C[274]=+8*(V[15]*(V[17]+V[16])+S[1]+S[2])+4*V[17]*V[16]-20*S[0];
C[273]=+V[15]*(V[17]*(S[2]*(3*V[17]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[0])+4*
 S[3])+S[2]*(V[15]*(3*(S[1]-S[0]))));
S[30]=V[17]*V[17];
C[272]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[17])+7*S[2]-4*S[1])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(S[30]-2*S[2])+S[17];
C[271]=+V[15]*(4*V[17]-8*V[15])+4*S[1];
C[270]=+V[15]*(V[15]*(V[15]*(8*V[17]-2*V[15])+2*S[30]+S[1]-5*S[2])+V[17]*(-
 4*S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[30])-S[30]*S[1];
C[269]=+V[15]*(8*V[17]-10*V[15])+4*(S[1]+S[2])+2*S[30];
C[268]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[1])+
 V[17]*(-S[1]-S[2])))+S[17]+7*S[5])+V[17]*(S[2]*(7*S[2]-2*S[1])+S[17]))+
 S[5]*(3*(S[2]-S[1])));
C[267]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))+4*(S[2]-S[1]))+V[17]*(
 4*(-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[17]*S[5];
C[266]=+V[15]*(4*(V[15]*(V[17]+V[15])+S[2]));
C[265]=+S[2]*(V[15]*(V[15]*(4*(V[17]-V[15]))+12*S[2])+V[17]*(2*(S[2]-
 S[1])))+S[26]*(8*S[0]-4*S[1]);
C[264]=+V[15]*(4*(-S[1]-S[2])+16*S[0])+4*V[17]*S[2];
C[263]=+S[2]*(4*(V[17]+V[15]));
C[262]=+V[498]*V[490]*V[458]*V[233]*S[12];
C[261]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[17]+18*V[15])+11*S[2]-5*S[1])+V[17]*
 (3*(S[2]-S[1]))));
C[260]=+S[2]*(2*(V[15]*(V[17]-V[15])-S[2]));
C[259]=+V[15]*(V[15]*(V[15]*(4*(V[17]-V[15]))+2*S[1]+34*S[2])+V[17]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[258]=+V[15]*(4*(V[17]-V[15]));
C[257]=+8*(V[17]*V[15]+S[2]);
C[256]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+14*S[2])+
 V[17]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[17]*(S[2]*(S[1]-2*S[2])+
 S[17]));
C[255]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))+2*S[2]-4*S[1])+V[17]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[254]=+V[15]*(V[15]*(V[15]*(12*(V[17]+V[15]))+10*S[2]-6*S[1])+V[17]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[253]=+V[15]*(12*V[17]+20*V[15])+4*(-S[1]-S[2]);
C[252]=+V[15]*(8*V[17]+16*V[15])-8*S[2];
C[251]=+V[498]*V[490]*V[462]*V[458]*S[19];
C[250]=+V[498]*V[490]*V[466]*V[125]*S[19];
C[249]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[17]*(
 V[212]-V[211]))+S[1]*(V[211]-V[212]))+V[17]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[211]-V[212])+S[17]*(V[212]-V[211]))+V[17]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[248]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[17]*(V[212]-
 V[211])))+4*(S[2]*(V[212]-V[211])+S[1]*(V[211]-V[212])))+V[17]*(4*(S[2]*(
 V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[2]*(2*(S[2]*(V[211]-V[212])+S[1]*(
 V[212]-V[211])));
C[247]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[17]*(V[212]-V[211]))+S[2]*(V[212]-
 V[211]));
C[246]=+V[498]*V[490]*V[468]*V[126]*S[19];
C[245]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[17]+V[16])+10*V[15])+6*V[17]*V[16]-
 2*S[1]+8*S[2])+3*(S[2]*(V[17]+V[16])+S[1]*(-V[17]-V[16]))));
C[244]=+S[2]*(2*(V[17]*V[16]-S[0]-S[2]));
C[243]=+S[2]*(V[15]*(12*(V[17]+V[16])+22*V[15])+4*(S[2]-S[1])+2*V[17]*
 V[16])+S[0]*(4*(V[17]*V[16]-S[0])+2*S[1])-2*V[17]*V[16]*S[1];
C[242]=+4*(V[17]*V[16]-S[0]);
C[241]=+4*(V[15]*(V[17]+V[16]-V[15])+V[17]*V[16])+8*S[2];
C[240]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+8*
 V[16]*S[2]-4*V[17]*S[1])+S[2]*(6*V[17]*V[16]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[16]-2*V[17])+S[1]*(V[17]-3*V[16]))+V[17]*S[17]);
C[239]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[17]*V[16]-S[1])+4*S[2]);
C[238]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[17]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[16]-8*V[17])-4*V[17]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[17]*V[16])-2*
 V[17]*V[16]*S[1];
C[237]=+4*(V[17]*V[16]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[236]=+V[15]*(4*(V[17]+V[16])+12*V[15])+4*V[17]*V[16]-8*S[2];
C[235]=+V[498]*V[490]*V[477]*V[469]*S[19];
C[234]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+
 V[17]*(8*S[2]-4*S[1]))+S[2]*(6*S[30]-4*S[1]-3*S[2])+S[17])+V[17]*(S[2]*(
 S[2]-2*S[1])+S[17]));
C[233]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[30]-S[1])+4*S[2]);
C[232]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*S[30]-6*S[1]-2*S[2])+V[17]*
 (4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[30])-2*S[30]*S[1];
C[231]=+4*(S[30]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[230]=+V[15]*(8*V[17]+12*V[15])+4*S[30]-8*S[2];
C[229]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[17]+5*V[15])+3*S[30]-S[1]+4*S[2])+
 V[17]*(3*(S[2]-S[1]))));
C[228]=+S[2]*(S[30]-S[0]-S[2]);
C[227]=+S[2]*(V[15]*(12*V[17]+11*V[15])+2*(S[2]-S[1])+S[30])+S[0]*(2*(S[30]-
 S[0])+S[1])-S[30]*S[1];
C[226]=+2*(S[30]-S[0]);
C[225]=+V[15]*(4*V[17]-2*V[15])+2*S[30]+4*S[2];
S[31]=V[498]*V[498];
S[32]=V[490]*V[490];
C[224]=+S[31]*S[32]*S[19];
C[223]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[1])+
 V[18]*(-S[1]-S[2])))+S[17]+7*S[5])+V[18]*(S[2]*(7*S[2]-2*S[1])+S[17]))+
 S[5]*(3*(S[2]-S[1])));
C[222]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))+4*(S[2]-S[1]))+V[18]*(
 4*(-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[18]*S[5];
C[221]=+V[15]*(4*(V[15]*(V[18]+V[15])+S[2]));
C[220]=+S[2]*(V[15]*(V[15]*(4*(V[18]-V[15]))+12*S[2])+V[18]*(2*(S[2]-
 S[1])))+S[26]*(8*S[0]-4*S[1]);
C[219]=+V[15]*(4*(-S[1]-S[2])+16*S[0])+4*V[18]*S[2];
C[218]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[18]+18*V[15])+11*S[2]-5*S[1])+V[18]*
 (3*(S[2]-S[1]))));
C[217]=+S[2]*(2*(V[15]*(V[18]-V[15])-S[2]));
C[216]=+V[15]*(V[15]*(V[15]*(4*(V[18]-V[15]))+2*S[1]+34*S[2])+V[18]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[215]=+V[15]*(4*(V[18]-V[15]));
C[214]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+14*S[2])+
 V[18]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[18]*(S[2]*(S[1]-2*S[2])+
 S[17]));
C[213]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))+2*S[2]-4*S[1])+V[18]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[212]=+V[15]*(V[15]*(V[15]*(12*(V[18]+V[15]))+10*S[2]-6*S[1])+V[18]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[211]=+V[15]*(12*V[18]+20*V[15])+4*(-S[1]-S[2]);
C[210]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[18]*(
 V[212]-V[211]))+S[1]*(V[211]-V[212]))+V[18]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[211]-V[212])+S[17]*(V[212]-V[211]))+V[18]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[209]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[18]*(V[212]-
 V[211])))+4*(S[2]*(V[212]-V[211])+S[1]*(V[211]-V[212])))+V[18]*(4*(S[2]*(
 V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[2]*(2*(S[2]*(V[211]-V[212])+S[1]*(
 V[212]-V[211])));
C[208]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[18]*(V[212]-V[211]))+S[2]*(V[212]-
 V[211]));
C[207]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[16])+10*V[15])+6*V[18]*V[16]-
 2*S[1]+8*S[2])+3*(S[2]*(V[18]+V[16])+S[1]*(-V[18]-V[16]))));
C[206]=+S[2]*(2*(V[18]*V[16]-S[0]-S[2]));
C[205]=+S[2]*(V[15]*(12*(V[18]+V[16])+22*V[15])+4*(S[2]-S[1])+2*V[18]*
 V[16])+S[0]*(4*(V[18]*V[16]-S[0])+2*S[1])-2*V[18]*V[16]*S[1];
C[204]=+4*(V[18]*V[16]-S[0]);
C[203]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+8*
 V[16]*S[2]-4*V[18]*S[1])+S[2]*(6*V[18]*V[16]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[16]-2*V[18])+S[1]*(V[18]-3*V[16]))+V[18]*S[17]);
C[202]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[16]-S[1])+4*S[2]);
C[201]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[18]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[16]-8*V[18])-4*V[18]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[16])-2*
 V[18]*V[16]*S[1];
C[200]=+4*(V[18]*V[16]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[199]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+8*
 V[17]*S[2]-4*V[18]*S[1])+S[2]*(6*V[18]*V[17]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[17]-2*V[18])+S[1]*(V[18]-3*V[17]))+V[18]*S[17]);
C[198]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[17]-S[1])+4*S[2]);
C[197]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[18]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[17]-8*V[18])-4*V[18]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[17])-2*
 V[18]*V[17]*S[1];
C[196]=+4*(V[18]*V[17]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[195]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[17])+10*V[15])+6*V[18]*V[17]-
 2*S[1]+8*S[2])+3*(S[2]*(V[18]+V[17])+S[1]*(-V[18]-V[17]))));
C[194]=+S[2]*(2*(V[18]*V[17]-S[0]-S[2]));
C[193]=+S[2]*(V[15]*(12*(V[18]+V[17])+22*V[15])+4*(S[2]-S[1])+2*V[18]*
 V[17])+S[0]*(4*(V[18]*V[17]-S[0])+2*S[1])-2*V[18]*V[17]*S[1];
C[192]=+4*(V[18]*V[17]-S[0]);
S[33]=V[18]*V[18];
C[191]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[18]+5*V[15])+3*S[33]-S[1]+4*S[2])+
 V[18]*(3*(S[2]-S[1]))));
C[190]=+S[2]*(S[33]-S[0]-S[2]);
C[189]=+S[2]*(V[15]*(12*V[18]+11*V[15])+2*(S[2]-S[1])+S[33])+S[0]*(2*(S[33]-
 S[0])+S[1])-S[33]*S[1];
C[188]=+2*(S[33]-S[0]);
C[187]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[18]-V[15])+S[1]+
 S[2])+V[18]*(-S[1]-S[2]))-S[1]*S[2])+S[5]-S[17])+V[18]*(S[2]*(7*S[2]-2*
 S[1])+S[17]))+S[2]*(S[2]*(S[1]-2*S[2])+S[17]));
C[186]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[18]-16*V[15])+12*(S[1]+S[2]))+V[18]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[17])-2*V[18]*S[5];
C[185]=+V[15]*(V[15]*(4*V[18]-20*V[15])+8*(S[1]+S[2]));
C[184]=+S[2]*(V[15]*(V[15]*(4*V[18]+12*V[15])-4*S[1]-8*S[2])+V[18]*(2*(S[2]-
 S[1])))+S[26]*(4*S[1]-8*S[0]);
C[183]=+V[15]*(4*S[1]-16*S[0]+12*S[2])+4*V[18]*S[2];
C[182]=+S[2]*(4*(V[18]+V[15]));
C[181]=+V[519]*V[511]*V[458]*V[233]*S[12];
C[180]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[18]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[0])+8*S[3])+S[2]*(V[18]*(3*(S[2]-S[1]))));
C[179]=+S[2]*(V[15]*(2*V[18]+6*V[15])+4*S[2]-2*S[1])+S[0]*(8*S[1]-16*S[0]);
C[178]=+V[15]*(V[15]*(V[15]*(4*V[18]+20*V[15])+10*(-S[1]-S[2]))+V[18]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[177]=+4*(V[18]*V[15]-S[1]-S[2])+28*S[0];
C[176]=+V[15]*(8*V[18]+16*V[15])-8*S[2];
C[175]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])-6*S[2])+
 V[18]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[17])+V[18]*(S[2]*(S[1]-2*
 S[2])+S[17]));
C[174]=+V[15]*(V[15]*(8*V[18]*V[15]+4*S[1]-22*S[2])+V[18]*(-4*S[1]-10*
 S[2]))+4*S[5]-2*S[17];
C[173]=+V[15]*(4*V[18]-12*V[15])+8*S[1];
C[172]=+V[15]*(V[15]*(V[15]*(12*V[18]+4*V[15])-2*S[1]-18*S[2])+V[18]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[171]=+V[15]*(12*(V[18]-V[15]))+8*(S[1]+S[2]);
C[170]=+8*(V[18]*V[15]+S[2]);
C[169]=+V[519]*V[511]*V[462]*V[458]*S[19];
C[168]=+V[519]*V[511]*V[466]*V[125]*S[19];
C[167]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[18]*(
 V[212]-V[211]))+S[1]*(V[212]-V[211]))+V[18]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[212]-V[211])+S[17]*(V[211]-V[212]))+V[18]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[166]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[211]-V[212]))+V[18]*(8*(V[212]-
 V[211])))+S[2]*(4*(V[212]-V[211]))+S[1]*(12*(V[212]-V[211])))+V[18]*(4*(
 S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[1]*(2*(S[2]*(V[212]-V[211])+
 S[1]*(V[211]-V[212])));
C[165]=+V[15]*(V[15]*(20*(V[211]-V[212]))+V[18]*(4*(V[212]-V[211])))+S[2]*(
 4*(V[212]-V[211]))+S[1]*(8*(V[212]-V[211]));
C[164]=+V[519]*V[511]*V[468]*V[126]*S[19];
C[163]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+8*
 V[18]*S[2]-4*V[16]*S[1])+S[2]*(6*V[18]*V[16]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[18]-2*V[16])+S[1]*(V[16]-3*V[18]))+V[16]*S[17]);
C[162]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[16]-S[1])+4*S[2]);
C[161]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[18]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[18]-8*V[16])-4*V[16]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[16])-2*
 V[18]*V[16]*S[1];
C[160]=+4*(V[18]*V[16]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[159]=+V[15]*(4*(V[18]+V[16])+12*V[15])+4*V[18]*V[16]-8*S[2];
C[158]=+V[15]*(S[2]*(S[1]*(V[18]+V[16]+6*V[15])+S[2]*(2*(-V[18]-V[16]))+
 V[15]*(6*(V[18]*V[16]-S[0])))+S[1]*(S[1]*(V[18]+V[16])+S[0]*(4*(-V[18]-
 V[16])))+S[3]*(4*(V[18]+V[16])));
C[157]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[18]-V[16])-S[1])+S[2]*(V[18]+
 V[16]))+S[1]*(4*(V[18]+V[16]))+14*V[15]*S[2])+S[2]*(2*V[18]*V[16]-4*S[2])+
 2*S[17];
C[156]=+V[15]*(4*(V[18]+V[16])-16*V[15])+8*S[1];
C[155]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[16])-4*V[15])+4*V[18]*V[16]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[18]-V[16]))+S[1]*(4*(-V[18]-V[16])))+S[2]*(4*(S[2]-
 S[1])+2*V[18]*V[16])-2*V[18]*V[16]*S[1];
C[154]=+8*(V[15]*(V[18]+V[16])+S[1]+S[2])+4*V[18]*V[16]-20*S[0];
C[153]=+4*(V[15]*(V[18]+V[16]-V[15])+V[18]*V[16])+8*S[2];
C[152]=+V[519]*V[511]*V[477]*V[469]*S[19];
C[151]=+V[15]*(S[2]*(S[1]*(V[18]+V[17]+6*V[15])+S[2]*(2*(-V[18]-V[17]))+
 V[15]*(6*(V[18]*V[17]-S[0])))+S[1]*(S[1]*(V[18]+V[17])+S[0]*(4*(-V[18]-
 V[17])))+S[3]*(4*(V[18]+V[17])));
C[150]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[18]-V[17])-S[1])+S[2]*(V[18]+
 V[17]))+S[1]*(4*(V[18]+V[17]))+14*V[15]*S[2])+S[2]*(2*V[18]*V[17]-4*S[2])+
 2*S[17];
C[149]=+V[15]*(4*(V[18]+V[17])-16*V[15])+8*S[1];
C[148]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[17])-4*V[15])+4*V[18]*V[17]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[18]-V[17]))+S[1]*(4*(-V[18]-V[17])))+S[2]*(4*(S[2]-
 S[1])+2*V[18]*V[17])-2*V[18]*V[17]*S[1];
C[147]=+8*(V[15]*(V[18]+V[17])+S[1]+S[2])+4*V[18]*V[17]-20*S[0];
C[146]=+4*(V[15]*(V[18]+V[17]-V[15])+V[18]*V[17])+8*S[2];
C[145]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+8*
 V[18]*S[2]-4*V[17]*S[1])+S[2]*(6*V[18]*V[17]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[18]-2*V[17])+S[1]*(V[17]-3*V[18]))+V[17]*S[17]);
C[144]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[18]*V[17]-S[1])+4*S[2]);
C[143]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[18]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[18]-8*V[17])-4*V[17]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[18]*V[17])-2*
 V[18]*V[17]*S[1];
C[142]=+4*(V[18]*V[17]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[141]=+V[15]*(4*(V[18]+V[17])+12*V[15])+4*V[18]*V[17]-8*S[2];
C[140]=+V[519]*V[511]*V[498]*V[490]*S[19];
C[139]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+
 V[18]*(8*S[2]-4*S[1]))+S[2]*(6*S[33]-4*S[1]-3*S[2])+S[17])+V[18]*(S[2]*(
 S[2]-2*S[1])+S[17]));
C[138]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[33]-S[1])+4*S[2]);
C[137]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*S[33]-6*S[1]-2*S[2])+V[18]*
 (4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[33])-2*S[33]*S[1];
C[136]=+4*(S[33]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[135]=+V[15]*(8*V[18]+12*V[15])+4*S[33]-8*S[2];
C[134]=+V[15]*(V[18]*(S[2]*(3*V[18]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[0])+4*
 S[3])+S[2]*(V[15]*(3*(S[1]-S[0]))));
C[133]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[18])+7*S[2]-4*S[1])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(S[33]-2*S[2])+S[17];
C[132]=+V[15]*(4*V[18]-8*V[15])+4*S[1];
C[131]=+V[15]*(V[15]*(V[15]*(8*V[18]-2*V[15])+2*S[33]+S[1]-5*S[2])+V[18]*(-
 4*S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[33])-S[33]*S[1];
C[130]=+V[15]*(8*V[18]-10*V[15])+4*(S[1]+S[2])+2*S[33];
C[129]=+V[15]*(4*V[18]-2*V[15])+2*S[33]+4*S[2];
S[34]=V[519]*V[519];
S[35]=V[511]*V[511];
C[128]=+S[34]*S[35]*S[19];
C[127]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[19]-V[15])+S[1]+
 S[2])+V[19]*(-S[1]-S[2]))-S[1]*S[2])+S[5]-S[17])+V[19]*(S[2]*(7*S[2]-2*
 S[1])+S[17]))+S[2]*(S[2]*(S[1]-2*S[2])+S[17]));
C[126]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[19]-16*V[15])+12*(S[1]+S[2]))+V[19]*
 (4*(-S[1]-S[2])))+S[2]*(-2*S[1]-8*S[2])-2*S[17])-2*V[19]*S[5];
C[125]=+V[15]*(V[15]*(4*V[19]-20*V[15])+8*(S[1]+S[2]));
C[124]=+S[2]*(V[15]*(V[15]*(4*V[19]+12*V[15])-4*S[1]-8*S[2])+V[19]*(2*(S[2]-
 S[1])))+S[26]*(4*S[1]-8*S[0]);
C[123]=+V[15]*(4*S[1]-16*S[0]+12*S[2])+4*V[19]*S[2];
C[122]=+V[15]*(V[15]*(S[2]*(V[15]*(14*V[19]+6*V[15])-3*S[1]-5*S[2])+S[1]*(2*
 S[1]-8*S[0])+8*S[3])+S[2]*(V[19]*(3*(S[2]-S[1]))));
C[121]=+S[2]*(V[15]*(2*V[19]+6*V[15])+4*S[2]-2*S[1])+S[0]*(8*S[1]-16*S[0]);
C[120]=+8*S[0]+4*S[2];
C[119]=+V[15]*(V[15]*(V[15]*(4*V[19]+20*V[15])+10*(-S[1]-S[2]))+V[19]*(14*
 S[2]-2*S[1]))+S[2]*(4*(S[1]-S[2]));
C[118]=+4*(V[19]*V[15]-S[1]-S[2])+28*S[0];
C[117]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])-6*S[2])+
 V[19]*(6*S[2]-4*S[1]))+S[2]*(7*S[1]-2*S[2])+S[17])+V[19]*(S[2]*(S[1]-2*
 S[2])+S[17]));
C[116]=+V[15]*(V[15]*(8*V[19]*V[15]+4*S[1]-22*S[2])+V[19]*(-4*S[1]-10*
 S[2]))+4*S[5]-2*S[17];
C[115]=+V[15]*(4*V[19]-12*V[15])+8*S[1];
C[114]=+V[15]*(V[15]*(V[15]*(12*V[19]+4*V[15])-2*S[1]-18*S[2])+V[19]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[2]-S[1]));
C[113]=+V[15]*(12*(V[19]-V[15]))+8*(S[1]+S[2]);
C[112]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[211]-V[212])+V[19]*(
 V[212]-V[211]))+S[1]*(V[212]-V[211]))+V[19]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[212]-V[211])+S[17]*(V[211]-V[212]))+V[19]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[111]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[211]-V[212]))+V[19]*(8*(V[212]-
 V[211])))+S[2]*(4*(V[212]-V[211]))+S[1]*(12*(V[212]-V[211])))+V[19]*(4*(
 S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[1]*(2*(S[2]*(V[212]-V[211])+
 S[1]*(V[211]-V[212])));
C[110]=+V[15]*(V[15]*(20*(V[211]-V[212]))+V[19]*(4*(V[212]-V[211])))+S[2]*(
 4*(V[212]-V[211]))+S[1]*(8*(V[212]-V[211]));
C[109]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[1])+6*S[2])+8*
 V[19]*S[2]-4*V[16]*S[1])+S[2]*(6*V[19]*V[16]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[19]-2*V[16])+S[1]*(V[16]-3*V[19]))+V[16]*S[17]);
C[108]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[1]-2*S[2])+V[16]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[16]-S[1])+4*S[2]);
C[107]=+4*(V[15]*(V[16]+V[15])+S[2]);
C[106]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[19]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[19]-8*V[16])-4*V[16]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[16])-2*
 V[19]*V[16]*S[1];
C[105]=+4*(V[19]*V[16]-S[1]-S[2])+V[15]*(8*V[16]+20*V[15]);
C[104]=+V[15]*(S[2]*(S[1]*(V[19]+V[16]+6*V[15])+S[2]*(2*(-V[19]-V[16]))+
 V[15]*(6*(V[19]*V[16]-S[0])))+S[1]*(S[1]*(V[19]+V[16])+S[0]*(4*(-V[19]-
 V[16])))+S[3]*(4*(V[19]+V[16])));
C[103]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[16])-S[1])+S[2]*(V[19]+
 V[16]))+S[1]*(4*(V[19]+V[16]))+14*V[15]*S[2])+S[2]*(2*V[19]*V[16]-4*S[2])+
 2*S[17];
C[102]=+V[15]*(4*(V[19]+V[16])-16*V[15])+8*S[1];
C[101]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[16])-4*V[15])+4*V[19]*V[16]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[19]-V[16]))+S[1]*(4*(-V[19]-V[16])))+S[2]*(4*(S[2]-
 S[1])+2*V[19]*V[16])-2*V[19]*V[16]*S[1];
C[100]=+8*(V[15]*(V[19]+V[16])+S[1]+S[2])+4*V[19]*V[16]-20*S[0];
C[99]=+V[15]*(S[2]*(S[1]*(V[19]+V[17]+6*V[15])+S[2]*(2*(-V[19]-V[17]))+
 V[15]*(6*(V[19]*V[17]-S[0])))+S[1]*(S[1]*(V[19]+V[17])+S[0]*(4*(-V[19]-
 V[17])))+S[3]*(4*(V[19]+V[17])));
C[98]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[17])-S[1])+S[2]*(V[19]+V[17]))+
 S[1]*(4*(V[19]+V[17]))+14*V[15]*S[2])+S[2]*(2*V[19]*V[17]-4*S[2])+2*S[17];
C[97]=+V[15]*(4*(V[19]+V[17])-16*V[15])+8*S[1];
C[96]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[17])-4*V[15])+4*V[19]*V[17]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[19]-V[17]))+S[1]*(4*(-V[19]-V[17])))+S[2]*(4*(S[2]-
 S[1])+2*V[19]*V[17])-2*V[19]*V[17]*S[1];
C[95]=+8*(V[15]*(V[19]+V[17])+S[1]+S[2])+4*V[19]*V[17]-20*S[0];
C[94]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[1])+6*S[2])+8*
 V[19]*S[2]-4*V[17]*S[1])+S[2]*(6*V[19]*V[17]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[19]-2*V[17])+S[1]*(V[17]-3*V[19]))+V[17]*S[17]);
C[93]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[1]-2*S[2])+V[17]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[17]-S[1])+4*S[2]);
C[92]=+4*(V[15]*(V[17]+V[15])+S[2]);
C[91]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[19]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[19]-8*V[17])-4*V[17]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[17])-2*
 V[19]*V[17]*S[1];
C[90]=+4*(V[19]*V[17]-S[1]-S[2])+V[15]*(8*V[17]+20*V[15]);
C[89]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[1])+6*S[2])+8*
 V[19]*S[2]-4*V[18]*S[1])+S[2]*(6*V[19]*V[18]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[19]-2*V[18])+S[1]*(V[18]-3*V[19]))+V[18]*S[17]);
C[88]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[1]-2*S[2])+V[18]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[18]-S[1])+4*S[2]);
C[87]=+4*(V[15]*(V[18]+V[15])+S[2]);
C[86]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[19]*V[18]-6*S[1]-2*S[2])+
 S[2]*(12*V[19]-8*V[18])-4*V[18]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[18])-2*
 V[19]*V[18]*S[1];
C[85]=+4*(V[19]*V[18]-S[1]-S[2])+V[15]*(8*V[18]+20*V[15]);
C[84]=+V[15]*(S[2]*(S[1]*(V[19]+V[18]+6*V[15])+S[2]*(2*(-V[19]-V[18]))+
 V[15]*(6*(V[19]*V[18]-S[0])))+S[1]*(S[1]*(V[19]+V[18])+S[0]*(4*(-V[19]-
 V[18])))+S[3]*(4*(V[19]+V[18])));
C[83]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[18])-S[1])+S[2]*(V[19]+V[18]))+
 S[1]*(4*(V[19]+V[18]))+14*V[15]*S[2])+S[2]*(2*V[19]*V[18]-4*S[2])+2*S[17];
C[82]=+V[15]*(4*(V[19]+V[18])-16*V[15])+8*S[1];
C[81]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[18])-4*V[15])+4*V[19]*V[18]+2*S[1]-
 10*S[2])+S[2]*(8*(-V[19]-V[18]))+S[1]*(4*(-V[19]-V[18])))+S[2]*(4*(S[2]-
 S[1])+2*V[19]*V[18])-2*V[19]*V[18]*S[1];
C[80]=+8*(V[15]*(V[19]+V[18])+S[1]+S[2])+4*V[19]*V[18]-20*S[0];
C[79]=+V[15]*(V[19]*(S[2]*(3*V[19]*V[15]+S[1]-2*S[2])+S[1]*(S[1]-4*S[0])+4*
 S[3])+S[2]*(V[15]*(3*(S[1]-S[0]))));
S[36]=V[19]*V[19];
C[78]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[19])+7*S[2]-4*S[1])+V[19]*(4*S[1]+8*
 S[2]))+S[2]*(S[36]-2*S[2])+S[17];
C[77]=+V[15]*(4*V[19]-8*V[15])+4*S[1];
C[76]=+V[15]*(V[15]*(V[15]*(8*V[19]-2*V[15])+2*S[36]+S[1]-5*S[2])+V[19]*(-4*
 S[1]-8*S[2]))+S[2]*(2*(S[2]-S[1])+S[36])-S[36]*S[1];
C[75]=+V[15]*(8*V[19]-10*V[15])+4*(S[1]+S[2])+2*S[36];
C[74]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[1])+
 V[19]*(-S[1]-S[2])))+S[17]+7*S[5])+V[19]*(S[2]*(7*S[2]-2*S[1])+S[17]))+
 S[5]*(3*(S[2]-S[1])));
C[73]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))+4*(S[2]-S[1]))+V[19]*(4*
 (-S[1]-S[2])))+S[2]*(2*(S[1]-S[2])))-2*V[19]*S[5];
C[72]=+V[15]*(4*(V[15]*(V[19]+V[15])+S[2]));
C[71]=+S[2]*(V[15]*(V[15]*(4*(V[19]-V[15]))+12*S[2])+V[19]*(2*(S[2]-S[1])))+
 S[26]*(8*S[0]-4*S[1]);
C[70]=+V[15]*(4*(-S[1]-S[2])+16*S[0])+4*V[19]*S[2];
C[69]=+8*V[15];
C[68]=+S[2]*(4*(V[19]+V[15]));
C[67]=+8*V[122]*V[121]*S[6]*S[22]*V[7]*S[5];
C[66]=+V[540]*V[532]*V[458]*V[233]*S[12];
C[65]=+S[2]*(V[15]*(V[15]*(V[15]*(14*V[19]+18*V[15])+11*S[2]-5*S[1])+V[19]*(
 3*(S[2]-S[1]))));
C[64]=+S[2]*(2*(V[15]*(V[19]-V[15])-S[2]));
C[63]=+V[15]*(V[15]*(V[15]*(4*(V[19]-V[15]))+2*S[1]+34*S[2])+V[19]*(14*S[2]-
 2*S[1]))+S[2]*(4*(S[2]-S[1]));
C[62]=+V[15]*(4*(V[19]-V[15]));
C[61]=+8*(V[19]*V[15]+S[2]);
C[60]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+14*S[2])+
 V[19]*(6*S[2]-4*S[1]))+S[1]*(S[1]-7*S[2]))+V[19]*(S[2]*(S[1]-2*S[2])+
 S[17]));
C[59]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))+2*S[2]-4*S[1])+V[19]*(-4*S[1]-
 10*S[2]))+S[2]*(2*S[1]-4*S[2]);
C[58]=+V[15]*(V[15]*(V[15]*(12*(V[19]+V[15]))+10*S[2]-6*S[1])+V[19]*(6*(-
 S[1]-S[2])))+S[2]*(4*(S[1]-S[2]));
C[57]=+V[15]*(12*V[19]+20*V[15])+4*(-S[1]-S[2]);
C[56]=+V[15]*(8*V[19]+16*V[15])-8*S[2];
C[55]=+V[540]*V[532]*V[462]*V[458]*S[19];
C[54]=+V[540]*V[532]*V[466]*V[125]*S[19];
C[53]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[212]-V[211])+V[19]*(
 V[212]-V[211]))+S[1]*(V[211]-V[212]))+V[19]*(S[2]*(V[211]-V[212])+S[1]*(
 V[211]-V[212]))))+S[5]*(V[211]-V[212])+S[17]*(V[212]-V[211]))+V[19]*(S[2]*(
 S[2]*(V[212]-V[211])+S[1]*(2*(V[211]-V[212])))+S[17]*(V[212]-V[211])));
C[52]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[212]-V[211])+V[19]*(V[212]-
 V[211])))+4*(S[2]*(V[212]-V[211])+S[1]*(V[211]-V[212])))+V[19]*(4*(S[2]*(
 V[211]-V[212])+S[1]*(V[211]-V[212]))))+S[2]*(2*(S[2]*(V[211]-V[212])+S[1]*(
 V[212]-V[211])));
C[51]=+4*(V[15]*(V[15]*(V[212]-V[211])+V[19]*(V[212]-V[211]))+S[2]*(V[212]-
 V[211]));
C[50]=+S[0]*(4*(S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))+S[0]*(8*(V[212]-
 V[211])));
C[49]=+4*(S[2]*(V[211]-V[212])+S[1]*(V[211]-V[212]))+S[0]*(16*(V[212]-
 V[211]));
C[48]=+8*(V[212]-V[211]);
C[47]=+32*S[13]*S[14]*S[6]*S[15]*S[16]*S[10]*S[2];
C[46]=+V[540]*V[532]*V[468]*V[126]*S[19];
C[45]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[16])+10*V[15])+6*V[19]*V[16]-2*
 S[1]+8*S[2])+3*(S[2]*(V[19]+V[16])+S[1]*(-V[19]-V[16]))));
C[44]=+S[2]*(2*(V[19]*V[16]-S[0]-S[2]));
C[43]=+S[2]*(V[15]*(12*(V[19]+V[16])+22*V[15])+4*(S[2]-S[1])+2*V[19]*V[16])+
 S[0]*(4*(V[19]*V[16]-S[0])+2*S[1])-2*V[19]*V[16]*S[1];
C[42]=+4*(V[19]*V[16]-S[0]);
C[41]=+4*(V[15]*(V[19]+V[16]-V[15])+V[19]*V[16])+8*S[2];
C[40]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+8*
 V[16]*S[2]-4*V[19]*S[1])+S[2]*(6*V[19]*V[16]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[16]-2*V[19])+S[1]*(V[19]-3*V[16]))+V[19]*S[17]);
C[39]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[16]-S[1])+4*S[2]);
C[38]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[16]-6*S[1]-2*S[2])+
 S[2]*(12*V[16]-8*V[19])-4*V[19]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[16])-2*
 V[19]*V[16]*S[1];
C[37]=+4*(V[19]*V[16]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[36]=+V[15]*(4*(V[19]+V[16])+12*V[15])+4*V[19]*V[16]-8*S[2];
C[35]=+V[540]*V[532]*V[477]*V[469]*S[19];
C[34]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+8*
 V[17]*S[2]-4*V[19]*S[1])+S[2]*(6*V[19]*V[17]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[17]-2*V[19])+S[1]*(V[19]-3*V[17]))+V[19]*S[17]);
C[33]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[17]-S[1])+4*S[2]);
C[32]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[17]-6*S[1]-2*S[2])+
 S[2]*(12*V[17]-8*V[19])-4*V[19]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[17])-2*
 V[19]*V[17]*S[1];
C[31]=+4*(V[19]*V[17]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[30]=+V[15]*(4*(V[19]+V[17])+12*V[15])+4*V[19]*V[17]-8*S[2];
C[29]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[17])+10*V[15])+6*V[19]*V[17]-2*
 S[1]+8*S[2])+3*(S[2]*(V[19]+V[17])+S[1]*(-V[19]-V[17]))));
C[28]=+S[2]*(2*(V[19]*V[17]-S[0]-S[2]));
C[27]=+S[2]*(V[15]*(12*(V[19]+V[17])+22*V[15])+4*(S[2]-S[1])+2*V[19]*V[17])+
 S[0]*(4*(V[19]*V[17]-S[0])+2*S[1])-2*V[19]*V[17]*S[1];
C[26]=+4*(V[19]*V[17]-S[0]);
C[25]=+4*(V[15]*(V[19]+V[17]-V[15])+V[19]*V[17])+8*S[2];
C[24]=+V[540]*V[532]*V[498]*V[490]*S[19];
C[23]=+S[2]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[18])+10*V[15])+6*V[19]*V[18]-2*
 S[1]+8*S[2])+3*(S[2]*(V[19]+V[18])+S[1]*(-V[19]-V[18]))));
C[22]=+S[2]*(2*(V[19]*V[18]-S[0]-S[2]));
C[21]=+S[2]*(V[15]*(12*(V[19]+V[18])+22*V[15])+4*(S[2]-S[1])+2*V[19]*V[18])+
 S[0]*(4*(V[19]*V[18]-S[0])+2*S[1])-2*V[19]*V[18]*S[1];
C[20]=+4*(V[19]*V[18]-S[0]);
C[19]=+4*(V[15]*(V[19]+V[18]-V[15])+V[19]*V[18])+8*S[2];
C[18]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+8*
 V[18]*S[2]-4*V[19]*S[1])+S[2]*(6*V[19]*V[18]-4*S[1]-3*S[2])+S[17])+S[2]*(
 S[2]*(3*V[18]-2*V[19])+S[1]*(V[19]-3*V[18]))+V[19]*S[17]);
C[17]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(V[19]*V[18]-S[1])+4*S[2]);
C[16]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[18]-6*S[1]-2*S[2])+
 S[2]*(12*V[18]-8*V[19])-4*V[19]*S[1])+S[2]*(4*(S[1]-S[2])+2*V[19]*V[18])-2*
 V[19]*V[18]*S[1];
C[15]=+4*(V[19]*V[18]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[14]=+V[15]*(4*(V[19]+V[18])+12*V[15])+4*V[19]*V[18]-8*S[2];
C[13]=+V[540]*V[532]*V[519]*V[511]*S[19];
C[12]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[1])+6*S[2])+
 V[19]*(8*S[2]-4*S[1]))+S[2]*(6*S[36]-4*S[1]-3*S[2])+S[17])+V[19]*(S[2]*(
 S[2]-2*S[1])+S[17]));
C[11]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[1]-2*S[2])+V[19]*(4*S[1]+
 8*S[2]))+S[2]*(2*(S[36]-S[1])+4*S[2]);
C[10]=+4*(V[15]*(V[19]+V[15])+S[2]);
C[9]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*S[36]-6*S[1]-2*S[2])+V[19]*(
 4*(S[2]-S[1])))+S[2]*(4*(S[1]-S[2])+2*S[36])-2*S[36]*S[1];
C[8]=+4*(S[36]-S[1]-S[2])+V[15]*(8*V[19]+20*V[15]);
C[7]=+V[15]*(8*V[19]+12*V[15])+4*S[36]-8*S[2];
C[6]=+S[2]*(V[15]*(V[15]*(V[15]*(8*V[19]+5*V[15])+3*S[36]-S[1]+4*S[2])+
 V[19]*(3*(S[2]-S[1]))));
C[5]=+S[2]*(S[36]-S[0]-S[2]);
C[4]=+S[2]*(V[15]*(12*V[19]+11*V[15])+2*(S[2]-S[1])+S[36])+S[0]*(2*(S[36]-
 S[0])+S[1])-S[36]*S[1];
C[3]=+2*(S[36]-S[0]);
C[2]=+V[15]*(4*V[19]-2*V[15])+2*S[36]+4*S[2];
C[1]=+16*S[13]*S[14]*S[6]*S[15]*S[16]*S[10]*S[2];
S[37]=V[540]*V[540];
S[38]=V[532]*V[532];
C[0]=+S[37]*S[38]*S[19];
}
