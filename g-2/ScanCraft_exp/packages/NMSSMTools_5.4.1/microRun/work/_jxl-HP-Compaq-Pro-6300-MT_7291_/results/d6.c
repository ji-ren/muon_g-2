/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
static void C6(REAL *);
extern DNN S6_omg_p25p25_u;
REAL S6_omg_p25p25_u(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[6];
REAL* V=va_omg_p25p25_u;
REAL mass[14],width[14];
char * Qtxt[14];
REAL Q0[14]; COMPLEX Q1[14]; REAL Q2[14];
 if(momenta)
 {width[13]=0.; mass[13]=V[19];  Qtxt[13]="\1\4";
width[12]=0.; mass[12]=V[19];  Qtxt[12]="\1\3";
width[11]=0.; mass[11]=V[18];  Qtxt[11]="\1\4";
width[10]=0.; mass[10]=V[18];  Qtxt[10]="\1\3";
width[9]=0.; mass[9]=V[17];  Qtxt[9]="\1\3";
width[8]=0.; mass[8]=V[17];  Qtxt[8]="\1\4";
width[7]=0.; mass[7]=V[16];  Qtxt[7]="\1\4";
width[6]=0.; mass[6]=V[16];  Qtxt[6]="\1\3";
width[3]=V[558]; mass[3]=V[13];  Qtxt[3]="\1\2";
width[2]=V[557]; mass[2]=V[12];  Qtxt[2]="\1\2";
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\4";
width[4]=0.; mass[4]=V[15];  Qtxt[4]="\1\3";
width[1]=V[553]; mass[1]=V[2];  Qtxt[1]="\1\2";
*err=*err|prepDen(13,nin_omg_p25p25_u,BWrange_omg_p25p25_u*
 BWrange_omg_p25p25_u,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(4, momenta, DP);
}
{
REAL N,D,R; COMPLEX Prop;
static REAL C[417];                                                   
if(!momenta){ C6(C); return 0;}
  REAL N_p1p2_=1/DP[0];
N=-C[0];
D=+C[1];
R=+DP[0]*(DP[0]*(-C[5]-C[4]*DP[0])-C[6]-C[2]*DP[1])+DP[1]*(C[2]*DP[1]-C[3])-
 C[7];
R*=(N/D);
Prop=1*Q2[1];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[8];
D=+C[9];
R=+DP[0]*(DP[0]*(C[13]-8*DP[1])+C[14]-C[11]*DP[1])+DP[1]*(C[10]*DP[1]-
 C[12])+C[15];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[4]):conj(
 Q1[4]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[8];
D=+C[9];
R=+DP[0]*(DP[0]*(8*(DP[1]-DP[0])-C[18])+C[16]*DP[1]-C[19])+DP[1]*(C[17]+
 C[10]*DP[1])-C[20];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[21];
D=+C[22];
R=+DP[0]*(DP[0]*(C[24]+C[23]*DP[0])+C[25])+C[26];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[27];
D=+C[22];
R=+DP[0]*(DP[0]*(C[24]+C[23]*DP[0])+C[25])+C[26];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[28];
D=+C[9];
R=+DP[0]*(DP[0]*(C[33]-C[30]*DP[1])+C[34]-C[31]*DP[1])+DP[1]*(C[29]*DP[1]-
 C[32])+C[35];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[28];
D=+C[9];
R=+DP[0]*(DP[0]*(C[30]*(DP[1]-DP[0])+C[38])+C[39]-C[36]*DP[1])+DP[1]*(C[29]*
 DP[1]-C[37])+C[40];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[41];
D=+C[9];
R=+DP[0]*(DP[0]*(C[30]*(DP[1]-DP[0])+C[45])+C[46]-C[43]*DP[1])+DP[1]*(C[42]*
 DP[1]-C[44])+C[47];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[41];
D=+C[9];
R=+DP[0]*(DP[0]*(C[50]-C[30]*DP[1])+C[51]-C[48]*DP[1])+DP[1]*(C[42]*DP[1]-
 C[49])+C[52];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[53];
D=+C[9];
R=+DP[0]*(DP[0]*(C[57]-C[30]*DP[1])+C[58]-C[55]*DP[1])+DP[1]*(C[54]*DP[1]-
 C[56])+C[59];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[53];
D=+C[9];
R=+DP[0]*(DP[0]*(C[30]*(DP[1]-DP[0])+C[62])+C[63]-C[60]*DP[1])+DP[1]*(C[54]*
 DP[1]-C[61])+C[64];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[65];
D=+C[9];
R=+DP[0]*(DP[0]*(C[69]-C[30]*DP[1])+C[70]-C[67]*DP[1])+DP[1]*(C[66]*DP[1]-
 C[68])+C[71];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[65];
D=+C[9];
R=+DP[0]*(DP[0]*(C[30]*(DP[1]-DP[0])+C[74])+C[75]-C[72]*DP[1])+DP[1]*(C[66]*
 DP[1]-C[73])+C[76];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[1]):Q1[1])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[1]*(DP[1]*(4*DP[0]-C[79])+C[80])-C[82]-C[81]*DP[0];
R*=(N/D);
Prop=1*Q2[4];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[77];
D=+C[83];
R=+DP[0]*(DP[1]*(4*(DP[1]-DP[0])-C[85])+C[88]+C[87]*DP[0])+DP[1]*(C[84]*
 DP[1]-C[86])+C[89];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[5]):conj(
 Q1[5]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[90];
D=+C[78];
R=+DP[0]*(DP[0]*(C[91]*DP[1]-C[94])+C[92]*DP[1]-C[95])+C[93]*DP[1]-C[96];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[97];
D=+C[78];
R=+DP[0]*(DP[0]*(C[91]*DP[1]-C[94])+C[92]*DP[1]-C[95])+C[93]*DP[1]-C[96];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[98];
D=+C[78];
R=+DP[1]*(DP[0]*(C[100]+8*DP[1])+C[101]-C[99]*DP[1])+C[102]*DP[0]-C[103];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[98];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[105])+C[13]*DP[0]-C[107])+DP[1]*(C[104]*
 DP[1]-C[106])+C[108];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[109];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[111])+C[13]*DP[0]-C[113])+DP[1]*(C[110]*
 DP[1]-C[112])+C[114];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[109];
D=+C[78];
R=+DP[1]*(DP[0]*(C[116]+8*DP[1])+C[117]-C[115]*DP[1])+C[118]*DP[0]-C[119];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[120];
D=+C[78];
R=+DP[1]*(DP[0]*(C[122]+8*DP[1])+C[123]-C[121]*DP[1])+C[124]*DP[0]-C[125];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[120];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[127])+C[13]*DP[0]-C[129])+DP[1]*(C[126]*
 DP[1]-C[128])+C[130];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[131];
D=+C[78];
R=+DP[1]*(DP[0]*(C[133]+8*DP[1])+C[134]-C[132]*DP[1])+C[135]*DP[0]-C[136];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[131];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[138])+C[13]*DP[0]-C[140])+DP[1]*(C[137]*
 DP[1]-C[139])+C[141];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[4]):Q1[4])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[77];
D=+C[78];
R=+DP[0]*(DP[0]*(C[144]+4*DP[0]-8*DP[1])+DP[1]*(C[142]+4*DP[1])-C[145])+
 DP[1]*(C[143]-C[79]*DP[1])-C[146];
R*=(N/D);
Prop=1*Q2[5];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[90];
D=+C[78];
R=+DP[0]*(DP[0]*(C[91]*(DP[1]-DP[0])-C[147])+C[92]*DP[1]-C[148])+C[93]*
 DP[1]-C[149];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[2]):conj(
 Q1[2]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[97];
D=+C[78];
R=+DP[0]*(DP[0]*(C[91]*(DP[1]-DP[0])-C[147])+C[92]*DP[1]-C[148])+C[93]*
 DP[1]-C[149];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[98];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[150])+C[153]+C[152]*DP[0])+DP[1]*(C[104]*
 DP[1]-C[151])+C[154];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[98];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[157]-16*DP[1])+DP[1]*(C[155]+8*DP[1])-C[158])+
 DP[1]*(C[156]-C[99]*DP[1])-C[159];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[109];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[162]-16*DP[1])+DP[1]*(C[160]+8*DP[1])-C[163])+
 DP[1]*(C[161]-C[115]*DP[1])-C[164];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[109];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[165])+C[168]+C[167]*DP[0])+DP[1]*(C[110]*
 DP[1]-C[166])+C[169];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[120];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[170])+C[173]+C[172]*DP[0])+DP[1]*(C[126]*
 DP[1]-C[171])+C[174];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[120];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[177]-16*DP[1])+DP[1]*(C[175]+8*DP[1])-C[178])+
 DP[1]*(C[176]-C[121]*DP[1])-C[179];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[131];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[180])+C[183]+C[182]*DP[0])+DP[1]*(C[137]*
 DP[1]-C[181])+C[184];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[131];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[187]-16*DP[1])+DP[1]*(C[185]+8*DP[1])-C[188])+
 DP[1]*(C[186]-C[132]*DP[1])-C[189];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[5]):Q1[5])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[190];
D=+C[191];
R=+DP[0]*(DP[0]*(C[193]+C[192]*DP[0])+C[194])+C[195];
R*=(N/D);
Prop=1*Q2[2];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[196];
D=+C[197];
R=+DP[0]*(DP[0]*(C[193]+C[192]*DP[0])+C[194])+C[195];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gswidth_omg_p25p25_u? creal(Q1[3]):conj(
 Q1[3]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[198];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[201])+C[199]*DP[1]-C[202])+C[200]*DP[1]-
 C[203];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[198];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[204])+C[205]+C[199]*DP[1])+C[206]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[207];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[208])+C[209]+C[199]*DP[1])+C[210]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[207];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[211])+C[199]*DP[1]-C[212])+C[200]*DP[1]-
 C[213];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[214];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[215])+C[199]*DP[1]-C[216])+C[200]*DP[1]-
 C[217];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[214];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[218])+C[219]+C[199]*DP[1])+C[220]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[221];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[222])+C[199]*DP[1]-C[223])+C[200]*DP[1]-
 C[224];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[221];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[225])+C[226]+C[199]*DP[1])+C[227]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[2]):Q1[2])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[228];
D=+C[191];
R=+DP[0]*(DP[0]*(C[193]+C[192]*DP[0])+C[194])+C[195];
R*=(N/D);
Prop=1*Q2[3];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[229];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[201])+C[199]*DP[1]-C[202])+C[200]*DP[1]-
 C[203];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[6]):conj(
 Q1[6]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[229];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[204])+C[205]+C[199]*DP[1])+C[206]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[230];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[208])+C[209]+C[199]*DP[1])+C[210]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[230];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[211])+C[199]*DP[1]-C[212])+C[200]*DP[1]-
 C[213];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[231];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[215])+C[199]*DP[1]-C[216])+C[200]*DP[1]-
 C[217];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[231];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[218])+C[219]+C[199]*DP[1])+C[220]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[232];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*DP[1]-C[222])+C[199]*DP[1]-C[223])+C[200]*DP[1]-
 C[224];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[232];
D=+C[197];
R=+DP[0]*(DP[0]*(C[23]*(DP[1]-DP[0])+C[225])+C[226]+C[199]*DP[1])+C[227]+
 C[200]*DP[1];
R*=(N/D);
Prop=1*(gswidth_omg_p25p25_u? creal(Q1[3]):Q1[3])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[233];
D=+C[78];
R=+DP[1]*(DP[0]*(C[235]+4*DP[1])+C[236]-C[234]*DP[1])+C[237]*DP[0]-C[238];
R*=(N/D);
Prop=1*Q2[6];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[233];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[240])+C[152]*DP[0]-C[242])+DP[1]*(C[239]*
 DP[1]-C[241])+C[243];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[7]):conj(
 Q1[7]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[244];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[246])+C[152]*DP[0]-C[248])+DP[1]*(C[245]*
 DP[1]-C[247])+C[249];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[244];
D=+C[78];
R=+DP[1]*(DP[0]*(C[251]+8*DP[1])+C[252]-C[250]*DP[1])+C[253]*DP[0]-C[254];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[255];
D=+C[78];
R=+DP[1]*(DP[0]*(C[257]+8*DP[1])+C[258]-C[256]*DP[1])+C[259]*DP[0]-C[260];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[255];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[262])+C[152]*DP[0]-C[264])+DP[1]*(C[261]*
 DP[1]-C[263])+C[265];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[266];
D=+C[78];
R=+DP[1]*(DP[0]*(C[268]+8*DP[1])+C[269]-C[267]*DP[1])+C[270]*DP[0]-C[271];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[266];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[273])+C[152]*DP[0]-C[275])+DP[1]*(C[272]*
 DP[1]-C[274])+C[276];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[6]):Q1[6])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[233];
D=+C[78];
R=+DP[0]*(DP[0]*(4*DP[0]-C[279]-8*DP[1])+DP[1]*(C[277]+4*DP[1])+C[280])+
 DP[1]*(C[278]-C[234]*DP[1])-C[281];
R*=(N/D);
Prop=1*Q2[7];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[244];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[284]-16*DP[1])+DP[1]*(C[282]+8*DP[1])+C[285])+
 DP[1]*(C[283]-C[250]*DP[1])-C[286];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[8]):conj(
 Q1[8]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[244];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[287])+C[167]*DP[0]-C[289])+DP[1]*(C[245]*
 DP[1]-C[288])+C[290];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[255];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[291])+C[172]*DP[0]-C[293])+DP[1]*(C[261]*
 DP[1]-C[292])+C[294];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[255];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[297]-16*DP[1])+DP[1]*(C[295]+8*DP[1])+C[298])+
 DP[1]*(C[296]-C[256]*DP[1])-C[299];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[266];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[300])+C[182]*DP[0]-C[302])+DP[1]*(C[272]*
 DP[1]-C[301])+C[303];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[266];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[306]-16*DP[1])+DP[1]*(C[304]+8*DP[1])+C[307])+
 DP[1]*(C[305]-C[267]*DP[1])-C[308];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[7]):Q1[7])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[309];
D=+C[78];
R=+DP[0]*(DP[0]*(4*DP[0]-C[313]-8*DP[1])+DP[1]*(C[311]+4*DP[1])+C[314])+
 DP[1]*(C[312]-C[310]*DP[1])-C[315];
R*=(N/D);
Prop=1*Q2[8];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[309];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[317])+C[167]*DP[0]-C[319])+DP[1]*(C[316]*
 DP[1]-C[318])+C[320];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[9]):conj(
 Q1[9]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[321];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[323])+C[172]*DP[0]-C[325])+DP[1]*(C[322]*
 DP[1]-C[324])+C[326];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[321];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[330]-16*DP[1])+DP[1]*(C[328]+8*DP[1])+C[331])+
 DP[1]*(C[329]-C[327]*DP[1])-C[332];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[333];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[335])+C[182]*DP[0]-C[337])+DP[1]*(C[334]*
 DP[1]-C[336])+C[338];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[333];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[342]-16*DP[1])+DP[1]*(C[340]+8*DP[1])+C[343])+
 DP[1]*(C[341]-C[339]*DP[1])-C[344];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[8]):Q1[8])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[309];
D=+C[78];
R=+DP[1]*(DP[0]*(C[345]+4*DP[1])+C[346]-C[310]*DP[1])+C[347]*DP[0]-C[348];
R*=(N/D);
Prop=1*Q2[9];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[321];
D=+C[78];
R=+DP[1]*(DP[0]*(C[349]+8*DP[1])+C[350]-C[327]*DP[1])+C[351]*DP[0]-C[352];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[10]):conj(
 Q1[10]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[321];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[353])+C[167]*DP[0]-C[355])+DP[1]*(C[322]*
 DP[1]-C[354])+C[356];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[333];
D=+C[78];
R=+DP[1]*(DP[0]*(C[357]+8*DP[1])+C[358]-C[339]*DP[1])+C[359]*DP[0]-C[360];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[333];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[361])+C[167]*DP[0]-C[363])+DP[1]*(C[334]*
 DP[1]-C[362])+C[364];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[9]):Q1[9])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[365];
D=+C[78];
R=+DP[1]*(DP[0]*(C[367]+4*DP[1])+C[368]-C[366]*DP[1])+C[369]*DP[0]-C[370];
R*=(N/D);
Prop=1*Q2[10];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[365];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[372])+C[172]*DP[0]-C[374])+DP[1]*(C[371]*
 DP[1]-C[373])+C[375];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[11]):conj(
 Q1[11]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[376];
D=+C[78];
R=+DP[1]*(DP[0]*(C[378]+8*DP[1])+C[379]-C[377]*DP[1])+C[380]*DP[0]-C[381];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[376];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[383])+C[172]*DP[0]-C[385])+DP[1]*(C[382]*
 DP[1]-C[384])+C[386];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[10]):Q1[10])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[365];
D=+C[78];
R=+DP[0]*(DP[0]*(4*DP[0]-C[389]-8*DP[1])+DP[1]*(C[387]+4*DP[1])+C[390])+
 DP[1]*(C[388]-C[366]*DP[1])-C[391];
R*=(N/D);
Prop=1*Q2[11];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[376];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[392])+C[182]*DP[0]-C[394])+DP[1]*(C[382]*
 DP[1]-C[393])+C[395];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[12]):conj(
 Q1[12]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[376];
D=+C[78];
R=+DP[0]*(DP[0]*(8*DP[0]-C[398]-16*DP[1])+DP[1]*(C[396]+8*DP[1])+C[399])+
 DP[1]*(C[397]-C[377]*DP[1])-C[400];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[11]):Q1[11])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[401];
D=+C[78];
R=+DP[1]*(DP[0]*(C[403]+4*DP[1])+C[404]-C[402]*DP[1])+C[405]*DP[0]-C[406];
R*=(N/D);
Prop=1*Q2[12];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=-C[401];
D=+C[78];
R=+DP[0]*(DP[1]*(8*(DP[1]-DP[0])-C[408])+C[182]*DP[0]-C[410])+DP[1]*(C[407]*
 DP[1]-C[409])+C[411];
R*=(N/D);
Prop=1*(gtwidth_omg_p25p25_u? creal(Q1[12]):Q1[12])*(gtwidth_omg_p25p25_u? creal(Q1[13]):conj(
 Q1[13]));
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;
N=+C[401];
D=+C[78];
R=+DP[0]*(DP[0]*(4*DP[0]-C[414]-8*DP[1])+DP[1]*(C[412]+4*DP[1])+C[415])+
 DP[1]*(C[413]-C[402]*DP[1])-C[416];
R*=(N/D);
Prop=1*Q2[13];
if(gswidth_omg_p25p25_u ) Prop=Prop*Q0[1]*Q0[2]*Q0[3];
R*=creal(Prop);
 if(R>Fmax) Fmax=R; else if(R<-Fmax) Fmax=-R;
ans+=R;

}
return ans;
}

static void C6(REAL*C)
{
  REAL* V=va_omg_p25p25_u;
REAL S[39];                                                           
S[0]=V[9]*V[9];
S[1]=V[2]*V[2];
S[2]=V[15]*V[15];
S[3]=V[15]*V[15]*V[15]*V[15];
C[416]=+V[15]*(V[19]*(S[1]*(3*V[19]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[4]=V[19]*V[19];
S[5]=V[9]*V[9]*V[9]*V[9];
C[415]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[19])+7*S[1]-4*S[0])+V[19]*(4*S[0]+
 8*S[1]))+S[1]*(S[4]-2*S[1])+S[5];
C[414]=+V[15]*(4*V[19]-8*V[15])+4*S[0];
C[413]=+V[15]*(V[15]*(V[15]*(8*V[19]-2*V[15])+2*S[4]+S[0]-5*S[1])+V[19]*(-4*
 S[0]-8*S[1]))+S[1]*(2*(S[1]-S[0])+S[4])-S[4]*S[0];
C[412]=+V[15]*(8*V[19]-10*V[15])+4*(S[0]+S[1])+2*S[4];
C[411]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])+6*S[1])+
 V[19]*(8*S[1]-4*S[0]))+S[1]*(6*S[4]-4*S[0]-3*S[1])+S[5])+V[19]*(S[1]*(S[1]-
 2*S[0])+S[5]));
C[410]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[0]-2*S[1])+V[19]*(4*S[0]+
 8*S[1]))+S[1]*(2*(S[4]-S[0])+4*S[1]);
C[409]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*S[4]-6*S[0]-2*S[1])+V[19]*(
 4*(S[1]-S[0])))+S[1]*(4*(S[0]-S[1])+2*S[4])-2*S[4]*S[0];
C[408]=+4*(S[4]-S[0]-S[1])+V[15]*(8*V[19]+20*V[15]);
C[407]=+V[15]*(8*V[19]+12*V[15])+4*S[4]-8*S[1];
C[406]=+S[1]*(V[15]*(V[15]*(V[15]*(8*V[19]+5*V[15])+3*S[4]-S[0]+4*S[1])+
 V[19]*(3*(S[1]-S[0]))));
C[405]=+S[1]*(S[4]-S[2]-S[1]);
C[404]=+S[1]*(V[15]*(12*V[19]+11*V[15])+2*(S[1]-S[0])+S[4])+S[2]*(2*(S[4]-
 S[2])+S[0])-S[4]*S[0];
C[403]=+2*(S[4]-S[2]);
C[402]=+V[15]*(4*V[19]-2*V[15])+2*S[4]+4*S[1];
S[6]=V[536]*V[536];
S[7]=V[532]*V[532];
S[8]=V[1]*V[1];
C[401]=+S[6]*S[7]*S[8];
C[400]=+V[15]*(S[1]*(S[0]*(V[19]+V[18]+6*V[15])+S[1]*(2*(-V[19]-V[18]))+
 V[15]*(6*(V[19]*V[18]-S[2])))+S[0]*(S[0]*(V[19]+V[18])+S[2]*(4*(-V[19]-
 V[18])))+S[3]*(4*(V[19]+V[18])));
C[399]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[18])-S[0])+S[1]*(V[19]+
 V[18]))+S[0]*(4*(V[19]+V[18]))+14*V[15]*S[1])+S[1]*(2*V[19]*V[18]-4*S[1])+
 2*S[5];
C[398]=+V[15]*(4*(V[19]+V[18])-16*V[15])+8*S[0];
C[397]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[18])-4*V[15])+4*V[19]*V[18]+2*S[0]-
 10*S[1])+S[1]*(8*(-V[19]-V[18]))+S[0]*(4*(-V[19]-V[18])))+S[1]*(4*(S[1]-
 S[0])+2*V[19]*V[18])-2*V[19]*V[18]*S[0];
C[396]=+8*(V[15]*(V[19]+V[18])+S[0]+S[1])+4*V[19]*V[18]-20*S[2];
C[395]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])+6*S[1])+8*
 V[18]*S[1]-4*V[19]*S[0])+S[1]*(6*V[19]*V[18]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[18]-2*V[19])+S[0]*(V[19]-3*V[18]))+V[19]*S[5]);
C[394]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[0]-2*S[1])+V[19]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[19]*V[18]-S[0])+4*S[1]);
C[393]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[18]-6*S[0]-2*S[1])+
 S[1]*(12*V[18]-8*V[19])-4*V[19]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[19]*V[18])-2*
 V[19]*V[18]*S[0];
C[392]=+4*(V[19]*V[18]-S[0]-S[1])+V[15]*(8*V[19]+20*V[15]);
C[391]=+V[15]*(V[18]*(S[1]*(3*V[18]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[9]=V[18]*V[18];
C[390]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[18])+7*S[1]-4*S[0])+V[18]*(4*S[0]+
 8*S[1]))+S[1]*(S[9]-2*S[1])+S[5];
C[389]=+V[15]*(4*V[18]-8*V[15])+4*S[0];
C[388]=+V[15]*(V[15]*(V[15]*(8*V[18]-2*V[15])+2*S[9]+S[0]-5*S[1])+V[18]*(-4*
 S[0]-8*S[1]))+S[1]*(2*(S[1]-S[0])+S[9])-S[9]*S[0];
C[387]=+V[15]*(8*V[18]-10*V[15])+4*(S[0]+S[1])+2*S[9];
C[386]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])+6*S[1])+8*
 V[19]*S[1]-4*V[18]*S[0])+S[1]*(6*V[19]*V[18]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[19]-2*V[18])+S[0]*(V[18]-3*V[19]))+V[18]*S[5]);
C[385]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[0]-2*S[1])+V[18]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[19]*V[18]-S[0])+4*S[1]);
C[384]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[19]*V[18]-6*S[0]-2*S[1])+
 S[1]*(12*V[19]-8*V[18])-4*V[18]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[19]*V[18])-2*
 V[19]*V[18]*S[0];
C[383]=+4*(V[19]*V[18]-S[0]-S[1])+V[15]*(8*V[18]+20*V[15]);
C[382]=+V[15]*(4*(V[19]+V[18])+12*V[15])+4*V[19]*V[18]-8*S[1];
C[381]=+S[1]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[18])+10*V[15])+6*V[19]*V[18]-
 2*S[0]+8*S[1])+3*(S[1]*(V[19]+V[18])+S[0]*(-V[19]-V[18]))));
C[380]=+S[1]*(2*(V[19]*V[18]-S[2]-S[1]));
C[379]=+S[1]*(V[15]*(12*(V[19]+V[18])+22*V[15])+4*(S[1]-S[0])+2*V[19]*
 V[18])+S[2]*(4*(V[19]*V[18]-S[2])+2*S[0])-2*V[19]*V[18]*S[0];
C[378]=+4*(V[19]*V[18]-S[2]);
C[377]=+4*(V[15]*(V[19]+V[18]-V[15])+V[19]*V[18])+8*S[1];
C[376]=+V[536]*V[532]*V[515]*V[511]*S[8];
C[375]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])+6*S[1])+
 V[18]*(8*S[1]-4*S[0]))+S[1]*(6*S[9]-4*S[0]-3*S[1])+S[5])+V[18]*(S[1]*(S[1]-
 2*S[0])+S[5]));
C[374]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[0]-2*S[1])+V[18]*(4*S[0]+
 8*S[1]))+S[1]*(2*(S[9]-S[0])+4*S[1]);
C[373]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*S[9]-6*S[0]-2*S[1])+V[18]*(
 4*(S[1]-S[0])))+S[1]*(4*(S[0]-S[1])+2*S[9])-2*S[9]*S[0];
C[372]=+4*(S[9]-S[0]-S[1])+V[15]*(8*V[18]+20*V[15]);
C[371]=+V[15]*(8*V[18]+12*V[15])+4*S[9]-8*S[1];
C[370]=+S[1]*(V[15]*(V[15]*(V[15]*(8*V[18]+5*V[15])+3*S[9]-S[0]+4*S[1])+
 V[18]*(3*(S[1]-S[0]))));
C[369]=+S[1]*(S[9]-S[2]-S[1]);
C[368]=+S[1]*(V[15]*(12*V[18]+11*V[15])+2*(S[1]-S[0])+S[9])+S[2]*(2*(S[9]-
 S[2])+S[0])-S[9]*S[0];
C[367]=+2*(S[9]-S[2]);
C[366]=+V[15]*(4*V[18]-2*V[15])+2*S[9]+4*S[1];
S[10]=V[515]*V[515];
S[11]=V[511]*V[511];
C[365]=+S[10]*S[11]*S[8];
C[364]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])+6*S[1])+8*
 V[19]*S[1]-4*V[17]*S[0])+S[1]*(6*V[19]*V[17]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[19]-2*V[17])+S[0]*(V[17]-3*V[19]))+V[17]*S[5]);
C[363]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[0]-2*S[1])+V[17]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[19]*V[17]-S[0])+4*S[1]);
C[362]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[19]*V[17]-6*S[0]-2*S[1])+
 S[1]*(12*V[19]-8*V[17])-4*V[17]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[19]*V[17])-2*
 V[19]*V[17]*S[0];
C[361]=+4*(V[19]*V[17]-S[0]-S[1])+V[15]*(8*V[17]+20*V[15]);
C[360]=+S[1]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[17])+10*V[15])+6*V[19]*V[17]-
 2*S[0]+8*S[1])+3*(S[1]*(V[19]+V[17])+S[0]*(-V[19]-V[17]))));
C[359]=+S[1]*(2*(V[19]*V[17]-S[2]-S[1]));
C[358]=+S[1]*(V[15]*(12*(V[19]+V[17])+22*V[15])+4*(S[1]-S[0])+2*V[19]*
 V[17])+S[2]*(4*(V[19]*V[17]-S[2])+2*S[0])-2*V[19]*V[17]*S[0];
C[357]=+4*(V[19]*V[17]-S[2]);
C[356]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])+6*S[1])+8*
 V[18]*S[1]-4*V[17]*S[0])+S[1]*(6*V[18]*V[17]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[18]-2*V[17])+S[0]*(V[17]-3*V[18]))+V[17]*S[5]);
C[355]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[0]-2*S[1])+V[17]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[18]*V[17]-S[0])+4*S[1]);
C[354]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[18]*V[17]-6*S[0]-2*S[1])+
 S[1]*(12*V[18]-8*V[17])-4*V[17]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[18]*V[17])-2*
 V[18]*V[17]*S[0];
C[353]=+4*(V[18]*V[17]-S[0]-S[1])+V[15]*(8*V[17]+20*V[15]);
C[352]=+S[1]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[17])+10*V[15])+6*V[18]*V[17]-
 2*S[0]+8*S[1])+3*(S[1]*(V[18]+V[17])+S[0]*(-V[18]-V[17]))));
C[351]=+S[1]*(2*(V[18]*V[17]-S[2]-S[1]));
C[350]=+S[1]*(V[15]*(12*(V[18]+V[17])+22*V[15])+4*(S[1]-S[0])+2*V[18]*
 V[17])+S[2]*(4*(V[18]*V[17]-S[2])+2*S[0])-2*V[18]*V[17]*S[0];
C[349]=+4*(V[18]*V[17]-S[2]);
S[12]=V[17]*V[17];
C[348]=+S[1]*(V[15]*(V[15]*(V[15]*(8*V[17]+5*V[15])+3*S[12]-S[0]+4*S[1])+
 V[17]*(3*(S[1]-S[0]))));
C[347]=+S[1]*(S[12]-S[2]-S[1]);
C[346]=+S[1]*(V[15]*(12*V[17]+11*V[15])+2*(S[1]-S[0])+S[12])+S[2]*(2*(S[12]-
 S[2])+S[0])-S[12]*S[0];
C[345]=+2*(S[12]-S[2]);
C[344]=+V[15]*(S[1]*(S[0]*(V[19]+V[17]+6*V[15])+S[1]*(2*(-V[19]-V[17]))+
 V[15]*(6*(V[19]*V[17]-S[2])))+S[0]*(S[0]*(V[19]+V[17])+S[2]*(4*(-V[19]-
 V[17])))+S[3]*(4*(V[19]+V[17])));
C[343]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[17])-S[0])+S[1]*(V[19]+
 V[17]))+S[0]*(4*(V[19]+V[17]))+14*V[15]*S[1])+S[1]*(2*V[19]*V[17]-4*S[1])+
 2*S[5];
C[342]=+V[15]*(4*(V[19]+V[17])-16*V[15])+8*S[0];
C[341]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[17])-4*V[15])+4*V[19]*V[17]+2*S[0]-
 10*S[1])+S[1]*(8*(-V[19]-V[17]))+S[0]*(4*(-V[19]-V[17])))+S[1]*(4*(S[1]-
 S[0])+2*V[19]*V[17])-2*V[19]*V[17]*S[0];
C[340]=+8*(V[15]*(V[19]+V[17])+S[0]+S[1])+4*V[19]*V[17]-20*S[2];
C[339]=+4*(V[15]*(V[19]+V[17]-V[15])+V[19]*V[17])+8*S[1];
C[338]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])+6*S[1])+8*
 V[17]*S[1]-4*V[19]*S[0])+S[1]*(6*V[19]*V[17]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[17]-2*V[19])+S[0]*(V[19]-3*V[17]))+V[19]*S[5]);
C[337]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[0]-2*S[1])+V[19]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[19]*V[17]-S[0])+4*S[1]);
C[336]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[17]-6*S[0]-2*S[1])+
 S[1]*(12*V[17]-8*V[19])-4*V[19]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[19]*V[17])-2*
 V[19]*V[17]*S[0];
C[335]=+4*(V[19]*V[17]-S[0]-S[1])+V[15]*(8*V[19]+20*V[15]);
C[334]=+V[15]*(4*(V[19]+V[17])+12*V[15])+4*V[19]*V[17]-8*S[1];
C[333]=+V[536]*V[532]*V[494]*V[490]*S[8];
C[332]=+V[15]*(S[1]*(S[0]*(V[18]+V[17]+6*V[15])+S[1]*(2*(-V[18]-V[17]))+
 V[15]*(6*(V[18]*V[17]-S[2])))+S[0]*(S[0]*(V[18]+V[17])+S[2]*(4*(-V[18]-
 V[17])))+S[3]*(4*(V[18]+V[17])));
C[331]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[18]-V[17])-S[0])+S[1]*(V[18]+
 V[17]))+S[0]*(4*(V[18]+V[17]))+14*V[15]*S[1])+S[1]*(2*V[18]*V[17]-4*S[1])+
 2*S[5];
C[330]=+V[15]*(4*(V[18]+V[17])-16*V[15])+8*S[0];
C[329]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[17])-4*V[15])+4*V[18]*V[17]+2*S[0]-
 10*S[1])+S[1]*(8*(-V[18]-V[17]))+S[0]*(4*(-V[18]-V[17])))+S[1]*(4*(S[1]-
 S[0])+2*V[18]*V[17])-2*V[18]*V[17]*S[0];
C[328]=+8*(V[15]*(V[18]+V[17])+S[0]+S[1])+4*V[18]*V[17]-20*S[2];
C[327]=+4*(V[15]*(V[18]+V[17]-V[15])+V[18]*V[17])+8*S[1];
C[326]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])+6*S[1])+8*
 V[17]*S[1]-4*V[18]*S[0])+S[1]*(6*V[18]*V[17]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[17]-2*V[18])+S[0]*(V[18]-3*V[17]))+V[18]*S[5]);
C[325]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[0]-2*S[1])+V[18]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[18]*V[17]-S[0])+4*S[1]);
C[324]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[18]*V[17]-6*S[0]-2*S[1])+
 S[1]*(12*V[17]-8*V[18])-4*V[18]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[18]*V[17])-2*
 V[18]*V[17]*S[0];
C[323]=+4*(V[18]*V[17]-S[0]-S[1])+V[15]*(8*V[18]+20*V[15]);
C[322]=+V[15]*(4*(V[18]+V[17])+12*V[15])+4*V[18]*V[17]-8*S[1];
C[321]=+V[515]*V[511]*V[494]*V[490]*S[8];
C[320]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])+6*S[1])+
 V[17]*(8*S[1]-4*S[0]))+S[1]*(6*S[12]-4*S[0]-3*S[1])+S[5])+V[17]*(S[1]*(
 S[1]-2*S[0])+S[5]));
C[319]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[0]-2*S[1])+V[17]*(4*S[0]+
 8*S[1]))+S[1]*(2*(S[12]-S[0])+4*S[1]);
C[318]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*S[12]-6*S[0]-2*S[1])+V[17]*
 (4*(S[1]-S[0])))+S[1]*(4*(S[0]-S[1])+2*S[12])-2*S[12]*S[0];
C[317]=+4*(S[12]-S[0]-S[1])+V[15]*(8*V[17]+20*V[15]);
C[316]=+V[15]*(8*V[17]+12*V[15])+4*S[12]-8*S[1];
C[315]=+V[15]*(V[17]*(S[1]*(3*V[17]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
C[314]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[17])+7*S[1]-4*S[0])+V[17]*(4*S[0]+
 8*S[1]))+S[1]*(S[12]-2*S[1])+S[5];
C[313]=+V[15]*(4*V[17]-8*V[15])+4*S[0];
C[312]=+V[15]*(V[15]*(V[15]*(8*V[17]-2*V[15])+2*S[12]+S[0]-5*S[1])+V[17]*(-
 4*S[0]-8*S[1]))+S[1]*(2*(S[1]-S[0])+S[12])-S[12]*S[0];
C[311]=+V[15]*(8*V[17]-10*V[15])+4*(S[0]+S[1])+2*S[12];
C[310]=+V[15]*(4*V[17]-2*V[15])+2*S[12]+4*S[1];
S[13]=V[494]*V[494];
S[14]=V[490]*V[490];
C[309]=+S[13]*S[14]*S[8];
C[308]=+V[15]*(S[1]*(S[0]*(V[19]+V[16]+6*V[15])+S[1]*(2*(-V[19]-V[16]))+
 V[15]*(6*(V[19]*V[16]-S[2])))+S[0]*(S[0]*(V[19]+V[16])+S[2]*(4*(-V[19]-
 V[16])))+S[3]*(4*(V[19]+V[16])));
C[307]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[19]-V[16])-S[0])+S[1]*(V[19]+
 V[16]))+S[0]*(4*(V[19]+V[16]))+14*V[15]*S[1])+S[1]*(2*V[19]*V[16]-4*S[1])+
 2*S[5];
C[306]=+V[15]*(4*(V[19]+V[16])-16*V[15])+8*S[0];
C[305]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[16])-4*V[15])+4*V[19]*V[16]+2*S[0]-
 10*S[1])+S[1]*(8*(-V[19]-V[16]))+S[0]*(4*(-V[19]-V[16])))+S[1]*(4*(S[1]-
 S[0])+2*V[19]*V[16])-2*V[19]*V[16]*S[0];
C[304]=+8*(V[15]*(V[19]+V[16])+S[0]+S[1])+4*V[19]*V[16]-20*S[2];
C[303]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])+6*S[1])+8*
 V[16]*S[1]-4*V[19]*S[0])+S[1]*(6*V[19]*V[16]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[16]-2*V[19])+S[0]*(V[19]-3*V[16]))+V[19]*S[5]);
C[302]=+V[15]*(V[15]*(V[15]*(8*(-V[19]-V[15]))+4*S[0]-2*S[1])+V[19]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[19]*V[16]-S[0])+4*S[1]);
C[301]=+V[15]*(V[15]*(V[15]*(8*V[19]+12*V[15])+4*V[19]*V[16]-6*S[0]-2*S[1])+
 S[1]*(12*V[16]-8*V[19])-4*V[19]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[19]*V[16])-2*
 V[19]*V[16]*S[0];
C[300]=+4*(V[19]*V[16]-S[0]-S[1])+V[15]*(8*V[19]+20*V[15]);
C[299]=+V[15]*(S[1]*(S[0]*(V[18]+V[16]+6*V[15])+S[1]*(2*(-V[18]-V[16]))+
 V[15]*(6*(V[18]*V[16]-S[2])))+S[0]*(S[0]*(V[18]+V[16])+S[2]*(4*(-V[18]-
 V[16])))+S[3]*(4*(V[18]+V[16])));
C[298]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[18]-V[16])-S[0])+S[1]*(V[18]+
 V[16]))+S[0]*(4*(V[18]+V[16]))+14*V[15]*S[1])+S[1]*(2*V[18]*V[16]-4*S[1])+
 2*S[5];
C[297]=+V[15]*(4*(V[18]+V[16])-16*V[15])+8*S[0];
C[296]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[16])-4*V[15])+4*V[18]*V[16]+2*S[0]-
 10*S[1])+S[1]*(8*(-V[18]-V[16]))+S[0]*(4*(-V[18]-V[16])))+S[1]*(4*(S[1]-
 S[0])+2*V[18]*V[16])-2*V[18]*V[16]*S[0];
C[295]=+8*(V[15]*(V[18]+V[16])+S[0]+S[1])+4*V[18]*V[16]-20*S[2];
C[294]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])+6*S[1])+8*
 V[16]*S[1]-4*V[18]*S[0])+S[1]*(6*V[18]*V[16]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[16]-2*V[18])+S[0]*(V[18]-3*V[16]))+V[18]*S[5]);
C[293]=+V[15]*(V[15]*(V[15]*(8*(-V[18]-V[15]))+4*S[0]-2*S[1])+V[18]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[18]*V[16]-S[0])+4*S[1]);
C[292]=+V[15]*(V[15]*(V[15]*(8*V[18]+12*V[15])+4*V[18]*V[16]-6*S[0]-2*S[1])+
 S[1]*(12*V[16]-8*V[18])-4*V[18]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[18]*V[16])-2*
 V[18]*V[16]*S[0];
C[291]=+4*(V[18]*V[16]-S[0]-S[1])+V[15]*(8*V[18]+20*V[15]);
C[290]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])+6*S[1])+8*
 V[16]*S[1]-4*V[17]*S[0])+S[1]*(6*V[17]*V[16]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[16]-2*V[17])+S[0]*(V[17]-3*V[16]))+V[17]*S[5]);
C[289]=+V[15]*(V[15]*(V[15]*(8*(-V[17]-V[15]))+4*S[0]-2*S[1])+V[17]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[17]*V[16]-S[0])+4*S[1]);
C[288]=+V[15]*(V[15]*(V[15]*(8*V[17]+12*V[15])+4*V[17]*V[16]-6*S[0]-2*S[1])+
 S[1]*(12*V[16]-8*V[17])-4*V[17]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[17]*V[16])-2*
 V[17]*V[16]*S[0];
C[287]=+4*(V[17]*V[16]-S[0]-S[1])+V[15]*(8*V[17]+20*V[15]);
C[286]=+V[15]*(S[1]*(S[0]*(V[17]+V[16]+6*V[15])+S[1]*(2*(-V[17]-V[16]))+
 V[15]*(6*(V[17]*V[16]-S[2])))+S[0]*(S[0]*(V[17]+V[16])+S[2]*(4*(-V[17]-
 V[16])))+S[3]*(4*(V[17]+V[16])));
C[285]=+V[15]*(8*(V[15]*(V[15]*(V[15]-V[17]-V[16])-S[0])+S[1]*(V[17]+
 V[16]))+S[0]*(4*(V[17]+V[16]))+14*V[15]*S[1])+S[1]*(2*V[17]*V[16]-4*S[1])+
 2*S[5];
C[284]=+V[15]*(4*(V[17]+V[16])-16*V[15])+8*S[0];
C[283]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[16])-4*V[15])+4*V[17]*V[16]+2*S[0]-
 10*S[1])+S[1]*(8*(-V[17]-V[16]))+S[0]*(4*(-V[17]-V[16])))+S[1]*(4*(S[1]-
 S[0])+2*V[17]*V[16])-2*V[17]*V[16]*S[0];
C[282]=+8*(V[15]*(V[17]+V[16])+S[0]+S[1])+4*V[17]*V[16]-20*S[2];
C[281]=+V[15]*(V[16]*(S[1]*(3*V[16]*V[15]+S[0]-2*S[1])+S[0]*(S[0]-4*S[2])+4*
 S[3])+S[1]*(V[15]*(3*(S[0]-S[2]))));
S[15]=V[16]*V[16];
C[280]=+V[15]*(V[15]*(V[15]*(4*V[15]-8*V[16])+7*S[1]-4*S[0])+V[16]*(4*S[0]+
 8*S[1]))+S[1]*(S[15]-2*S[1])+S[5];
C[279]=+V[15]*(4*V[16]-8*V[15])+4*S[0];
C[278]=+V[15]*(V[15]*(V[15]*(8*V[16]-2*V[15])+2*S[15]+S[0]-5*S[1])+V[16]*(-
 4*S[0]-8*S[1]))+S[1]*(2*(S[1]-S[0])+S[15])-S[15]*S[0];
C[277]=+V[15]*(8*V[16]-10*V[15])+4*(S[0]+S[1])+2*S[15];
C[276]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])+6*S[1])+8*
 V[19]*S[1]-4*V[16]*S[0])+S[1]*(6*V[19]*V[16]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[19]-2*V[16])+S[0]*(V[16]-3*V[19]))+V[16]*S[5]);
C[275]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[0]-2*S[1])+V[16]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[19]*V[16]-S[0])+4*S[1]);
C[274]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[19]*V[16]-6*S[0]-2*S[1])+
 S[1]*(12*V[19]-8*V[16])-4*V[16]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[19]*V[16])-2*
 V[19]*V[16]*S[0];
C[273]=+4*(V[19]*V[16]-S[0]-S[1])+V[15]*(8*V[16]+20*V[15]);
C[272]=+V[15]*(4*(V[19]+V[16])+12*V[15])+4*V[19]*V[16]-8*S[1];
C[271]=+S[1]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[16])+10*V[15])+6*V[19]*V[16]-
 2*S[0]+8*S[1])+3*(S[1]*(V[19]+V[16])+S[0]*(-V[19]-V[16]))));
C[270]=+S[1]*(2*(V[19]*V[16]-S[2]-S[1]));
C[269]=+S[1]*(V[15]*(12*(V[19]+V[16])+22*V[15])+4*(S[1]-S[0])+2*V[19]*
 V[16])+S[2]*(4*(V[19]*V[16]-S[2])+2*S[0])-2*V[19]*V[16]*S[0];
C[268]=+4*(V[19]*V[16]-S[2]);
C[267]=+4*(V[15]*(V[19]+V[16]-V[15])+V[19]*V[16])+8*S[1];
C[266]=+V[536]*V[532]*V[473]*V[469]*S[8];
C[265]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])+6*S[1])+8*
 V[18]*S[1]-4*V[16]*S[0])+S[1]*(6*V[18]*V[16]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[18]-2*V[16])+S[0]*(V[16]-3*V[18]))+V[16]*S[5]);
C[264]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[0]-2*S[1])+V[16]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[18]*V[16]-S[0])+4*S[1]);
C[263]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[18]*V[16]-6*S[0]-2*S[1])+
 S[1]*(12*V[18]-8*V[16])-4*V[16]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[18]*V[16])-2*
 V[18]*V[16]*S[0];
C[262]=+4*(V[18]*V[16]-S[0]-S[1])+V[15]*(8*V[16]+20*V[15]);
C[261]=+V[15]*(4*(V[18]+V[16])+12*V[15])+4*V[18]*V[16]-8*S[1];
C[260]=+S[1]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[16])+10*V[15])+6*V[18]*V[16]-
 2*S[0]+8*S[1])+3*(S[1]*(V[18]+V[16])+S[0]*(-V[18]-V[16]))));
C[259]=+S[1]*(2*(V[18]*V[16]-S[2]-S[1]));
C[258]=+S[1]*(V[15]*(12*(V[18]+V[16])+22*V[15])+4*(S[1]-S[0])+2*V[18]*
 V[16])+S[2]*(4*(V[18]*V[16]-S[2])+2*S[0])-2*V[18]*V[16]*S[0];
C[257]=+4*(V[18]*V[16]-S[2]);
C[256]=+4*(V[15]*(V[18]+V[16]-V[15])+V[18]*V[16])+8*S[1];
C[255]=+V[515]*V[511]*V[473]*V[469]*S[8];
C[254]=+S[1]*(V[15]*(V[15]*(V[15]*(8*(V[17]+V[16])+10*V[15])+6*V[17]*V[16]-
 2*S[0]+8*S[1])+3*(S[1]*(V[17]+V[16])+S[0]*(-V[17]-V[16]))));
C[253]=+S[1]*(2*(V[17]*V[16]-S[2]-S[1]));
C[252]=+S[1]*(V[15]*(12*(V[17]+V[16])+22*V[15])+4*(S[1]-S[0])+2*V[17]*
 V[16])+S[2]*(4*(V[17]*V[16]-S[2])+2*S[0])-2*V[17]*V[16]*S[0];
C[251]=+4*(V[17]*V[16]-S[2]);
C[250]=+4*(V[15]*(V[17]+V[16]-V[15])+V[17]*V[16])+8*S[1];
C[249]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])+6*S[1])+8*
 V[17]*S[1]-4*V[16]*S[0])+S[1]*(6*V[17]*V[16]-4*S[0]-3*S[1])+S[5])+S[1]*(
 S[1]*(3*V[17]-2*V[16])+S[0]*(V[16]-3*V[17]))+V[16]*S[5]);
C[248]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[0]-2*S[1])+V[16]*(4*S[0]+
 8*S[1]))+S[1]*(2*(V[17]*V[16]-S[0])+4*S[1]);
C[247]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*V[17]*V[16]-6*S[0]-2*S[1])+
 S[1]*(12*V[17]-8*V[16])-4*V[16]*S[0])+S[1]*(4*(S[0]-S[1])+2*V[17]*V[16])-2*
 V[17]*V[16]*S[0];
C[246]=+4*(V[17]*V[16]-S[0]-S[1])+V[15]*(8*V[16]+20*V[15]);
C[245]=+V[15]*(4*(V[17]+V[16])+12*V[15])+4*V[17]*V[16]-8*S[1];
C[244]=+V[494]*V[490]*V[473]*V[469]*S[8];
C[243]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])+6*S[1])+
 V[16]*(8*S[1]-4*S[0]))+S[1]*(6*S[15]-4*S[0]-3*S[1])+S[5])+V[16]*(S[1]*(
 S[1]-2*S[0])+S[5]));
C[242]=+V[15]*(V[15]*(V[15]*(8*(-V[16]-V[15]))+4*S[0]-2*S[1])+V[16]*(4*S[0]+
 8*S[1]))+S[1]*(2*(S[15]-S[0])+4*S[1]);
C[241]=+V[15]*(V[15]*(V[15]*(8*V[16]+12*V[15])+4*S[15]-6*S[0]-2*S[1])+V[16]*
 (4*(S[1]-S[0])))+S[1]*(4*(S[0]-S[1])+2*S[15])-2*S[15]*S[0];
C[240]=+4*(S[15]-S[0]-S[1])+V[15]*(8*V[16]+20*V[15]);
C[239]=+V[15]*(8*V[16]+12*V[15])+4*S[15]-8*S[1];
C[238]=+S[1]*(V[15]*(V[15]*(V[15]*(8*V[16]+5*V[15])+3*S[15]-S[0]+4*S[1])+
 V[16]*(3*(S[1]-S[0]))));
C[237]=+S[1]*(S[15]-S[2]-S[1]);
C[236]=+S[1]*(V[15]*(12*V[16]+11*V[15])+2*(S[1]-S[0])+S[15])+S[2]*(2*(S[15]-
 S[2])+S[0])-S[15]*S[0];
C[235]=+2*(S[15]-S[2]);
C[234]=+V[15]*(4*V[16]-2*V[15])+2*S[15]+4*S[1];
S[16]=V[473]*V[473];
S[17]=V[469]*V[469];
C[233]=+S[16]*S[17]*S[8];
C[232]=+V[536]*V[532]*V[468]*V[126]*S[8];
C[231]=+V[515]*V[511]*V[468]*V[126]*S[8];
C[230]=+V[494]*V[490]*V[468]*V[126]*S[8];
C[229]=+V[473]*V[469]*V[468]*V[126]*S[8];
S[18]=V[468]*V[468];
S[19]=V[126]*V[126];
C[228]=+S[18]*S[19]*S[8];
S[20]=V[2]*V[2]*V[2]*V[2];
C[227]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[19]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[19]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[210]-V[209])+S[5]*(V[209]-V[210]))+V[19]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[226]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[209]-V[210]))+V[19]*(8*(V[210]-
 V[209])))+S[1]*(4*(V[210]-V[209]))+S[0]*(12*(V[210]-V[209])))+V[19]*(4*(
 S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[0]*(2*(S[1]*(V[210]-V[209])+
 S[0]*(V[209]-V[210])));
C[225]=+V[15]*(V[15]*(20*(V[209]-V[210]))+V[19]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[210]-V[209]))+S[0]*(8*(V[210]-V[209]));
C[224]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[19]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[19]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[209]-V[210])+S[5]*(V[210]-V[209]))+V[19]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[223]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[19]*(V[210]-
 V[209])))+4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210])))+V[19]*(4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[222]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[19]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[221]=+V[536]*V[532]*V[466]*V[125]*S[8];
C[220]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[18]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[18]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[210]-V[209])+S[5]*(V[209]-V[210]))+V[18]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[219]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[209]-V[210]))+V[18]*(8*(V[210]-
 V[209])))+S[1]*(4*(V[210]-V[209]))+S[0]*(12*(V[210]-V[209])))+V[18]*(4*(
 S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[0]*(2*(S[1]*(V[210]-V[209])+
 S[0]*(V[209]-V[210])));
C[218]=+V[15]*(V[15]*(20*(V[209]-V[210]))+V[18]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[210]-V[209]))+S[0]*(8*(V[210]-V[209]));
C[217]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[18]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[18]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[209]-V[210])+S[5]*(V[210]-V[209]))+V[18]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[216]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[18]*(V[210]-
 V[209])))+4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210])))+V[18]*(4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[215]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[18]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[214]=+V[515]*V[511]*V[466]*V[125]*S[8];
C[213]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[17]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[17]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[209]-V[210])+S[5]*(V[210]-V[209]))+V[17]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[212]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[17]*(V[210]-
 V[209])))+4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210])))+V[17]*(4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[211]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[17]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[210]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[17]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[17]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[210]-V[209])+S[5]*(V[209]-V[210]))+V[17]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[209]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[209]-V[210]))+V[17]*(8*(V[210]-
 V[209])))+S[1]*(4*(V[210]-V[209]))+S[0]*(12*(V[210]-V[209])))+V[17]*(4*(
 S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[0]*(2*(S[1]*(V[210]-V[209])+
 S[0]*(V[209]-V[210])));
C[208]=+V[15]*(V[15]*(20*(V[209]-V[210]))+V[17]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[210]-V[209]))+S[0]*(8*(V[210]-V[209]));
C[207]=+V[494]*V[490]*V[466]*V[125]*S[8];
C[206]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[209]-V[210])+V[16]*(
 V[210]-V[209]))+S[0]*(V[210]-V[209]))+V[16]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[210]-V[209])+S[5]*(V[209]-V[210]))+V[16]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[205]=+V[15]*(V[15]*(V[15]*(V[15]*(16*(V[209]-V[210]))+V[16]*(8*(V[210]-
 V[209])))+S[1]*(4*(V[210]-V[209]))+S[0]*(12*(V[210]-V[209])))+V[16]*(4*(
 S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[0]*(2*(S[1]*(V[210]-V[209])+
 S[0]*(V[209]-V[210])));
C[204]=+V[15]*(V[15]*(20*(V[209]-V[210]))+V[16]*(4*(V[210]-V[209])))+S[1]*(
 4*(V[210]-V[209]))+S[0]*(8*(V[210]-V[209]));
C[203]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[210]-V[209])+V[16]*(
 V[210]-V[209]))+S[0]*(V[209]-V[210]))+V[16]*(S[1]*(V[209]-V[210])+S[0]*(
 V[209]-V[210]))))+S[20]*(V[209]-V[210])+S[5]*(V[210]-V[209]))+V[16]*(S[1]*(
 S[1]*(V[210]-V[209])+S[0]*(2*(V[209]-V[210])))+S[5]*(V[210]-V[209])));
C[202]=+V[15]*(V[15]*(V[15]*(8*(V[15]*(V[210]-V[209])+V[16]*(V[210]-
 V[209])))+4*(S[1]*(V[210]-V[209])+S[0]*(V[209]-V[210])))+V[16]*(4*(S[1]*(
 V[209]-V[210])+S[0]*(V[209]-V[210]))))+S[1]*(2*(S[1]*(V[209]-V[210])+S[0]*(
 V[210]-V[209])));
C[201]=+4*(V[15]*(V[15]*(V[210]-V[209])+V[16]*(V[210]-V[209]))+S[1]*(V[210]-
 V[209]));
C[200]=+S[2]*(4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(8*(V[210]-
 V[209])));
C[199]=+4*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(16*(V[210]-
 V[209]));
C[198]=+V[473]*V[469]*V[466]*V[125]*S[8];
S[21]=V[122]*V[122];
S[22]=V[121]*V[121];
S[23]=V[119]*V[119]*V[119]*V[119];
S[24]=V[118]*V[118];
S[25]=V[7]*V[7];
S[26]=V[3]*V[3];
C[197]=+32*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[1];
C[196]=+V[468]*V[466]*V[126]*V[125]*S[8];
S[27]=V[210]*V[210];
C[195]=+S[2]*(V[209]*(S[1]*(V[209]*(S[1]-4*S[2]-2*S[0])+V[210]*(8*S[2]+4*
 S[0]-2*S[1]))+S[0]*(S[0]*(V[209]-2*V[210])+S[2]*(8*V[210]-4*V[209]))+S[3]*(
 4*V[209]-8*V[210]))+S[27]*(S[1]*(S[1]-4*S[2]-2*S[0])+S[0]*(S[0]-4*S[2])+4*
 S[3]));
C[194]=+V[209]*(S[1]*(V[209]*(S[1]-8*S[2]-2*S[0])+V[210]*(16*S[2]+4*S[0]-2*
 S[1]))+S[0]*(S[0]*(V[209]-2*V[210])+S[2]*(16*V[210]-8*V[209]))+S[3]*(12*
 V[209]-24*V[210]))+S[27]*(S[1]*(S[1]-8*S[2]-2*S[0])+S[0]*(S[0]-8*S[2])+12*
 S[3]);
C[193]=+V[209]*(V[209]*(4*(-S[0]-S[1])+12*S[2])+V[210]*(8*(S[0]+S[1])-24*
 S[2]))+S[27]*(4*(-S[0]-S[1])+12*S[2]);
C[192]=+V[209]*(4*V[209]-8*V[210])+4*S[27];
C[191]=+64*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[1];
S[28]=V[466]*V[466];
S[29]=V[125]*V[125];
C[190]=+S[28]*S[29]*S[8];
C[189]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])-6*S[1])+
 V[19]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[19]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[188]=+V[15]*(V[15]*(8*V[19]*V[15]+4*S[0]-22*S[1])+V[19]*(-4*S[0]-10*
 S[1]))+4*S[20]-2*S[5];
C[187]=+V[15]*(4*V[19]-12*V[15])+8*S[0];
C[186]=+V[15]*(V[15]*(V[15]*(12*V[19]+4*V[15])-2*S[0]-18*S[1])+V[19]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[1]-S[0]));
C[185]=+V[15]*(12*(V[19]-V[15]))+8*(S[0]+S[1]);
C[184]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[19]+V[15])-S[0])+14*S[1])+
 V[19]*(6*S[1]-4*S[0]))+S[0]*(S[0]-7*S[1]))+V[19]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[183]=+V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))+2*S[1]-4*S[0])+V[19]*(-4*S[0]-
 10*S[1]))+S[1]*(2*S[0]-4*S[1]);
C[182]=+4*(V[15]*(V[19]+V[15])+S[1]);
C[181]=+V[15]*(V[15]*(V[15]*(12*(V[19]+V[15]))+10*S[1]-6*S[0])+V[19]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[0]-S[1]));
C[180]=+V[15]*(12*V[19]+20*V[15])+4*(-S[0]-S[1]);
C[179]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])-6*S[1])+
 V[18]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[18]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[178]=+V[15]*(V[15]*(8*V[18]*V[15]+4*S[0]-22*S[1])+V[18]*(-4*S[0]-10*
 S[1]))+4*S[20]-2*S[5];
C[177]=+V[15]*(4*V[18]-12*V[15])+8*S[0];
C[176]=+V[15]*(V[15]*(V[15]*(12*V[18]+4*V[15])-2*S[0]-18*S[1])+V[18]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[1]-S[0]));
C[175]=+V[15]*(12*(V[18]-V[15]))+8*(S[0]+S[1]);
C[174]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[18]+V[15])-S[0])+14*S[1])+
 V[18]*(6*S[1]-4*S[0]))+S[0]*(S[0]-7*S[1]))+V[18]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[173]=+V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))+2*S[1]-4*S[0])+V[18]*(-4*S[0]-
 10*S[1]))+S[1]*(2*S[0]-4*S[1]);
C[172]=+4*(V[15]*(V[18]+V[15])+S[1]);
C[171]=+V[15]*(V[15]*(V[15]*(12*(V[18]+V[15]))+10*S[1]-6*S[0])+V[18]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[0]-S[1]));
C[170]=+V[15]*(12*V[18]+20*V[15])+4*(-S[0]-S[1]);
C[169]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])+14*S[1])+
 V[17]*(6*S[1]-4*S[0]))+S[0]*(S[0]-7*S[1]))+V[17]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[168]=+V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))+2*S[1]-4*S[0])+V[17]*(-4*S[0]-
 10*S[1]))+S[1]*(2*S[0]-4*S[1]);
C[167]=+4*(V[15]*(V[17]+V[15])+S[1]);
C[166]=+V[15]*(V[15]*(V[15]*(12*(V[17]+V[15]))+10*S[1]-6*S[0])+V[17]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[0]-S[1]));
C[165]=+V[15]*(12*V[17]+20*V[15])+4*(-S[0]-S[1]);
C[164]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[17]+V[15])-S[0])-6*S[1])+
 V[17]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[17]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[163]=+V[15]*(V[15]*(8*V[17]*V[15]+4*S[0]-22*S[1])+V[17]*(-4*S[0]-10*
 S[1]))+4*S[20]-2*S[5];
C[162]=+V[15]*(4*V[17]-12*V[15])+8*S[0];
C[161]=+V[15]*(V[15]*(V[15]*(12*V[17]+4*V[15])-2*S[0]-18*S[1])+V[17]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[1]-S[0]));
C[160]=+V[15]*(12*(V[17]-V[15]))+8*(S[0]+S[1]);
C[159]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])-6*S[1])+
 V[16]*(6*S[1]-4*S[0]))+S[1]*(7*S[0]-2*S[1])+S[5])+V[16]*(S[1]*(S[0]-2*
 S[1])+S[5]));
C[158]=+V[15]*(V[15]*(8*V[16]*V[15]+4*S[0]-22*S[1])+V[16]*(-4*S[0]-10*
 S[1]))+4*S[20]-2*S[5];
C[157]=+V[15]*(4*V[16]-12*V[15])+8*S[0];
C[156]=+V[15]*(V[15]*(V[15]*(12*V[16]+4*V[15])-2*S[0]-18*S[1])+V[16]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[1]-S[0]));
C[155]=+V[15]*(12*(V[16]-V[15]))+8*(S[0]+S[1]);
C[154]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[16]+V[15])-S[0])+14*S[1])+
 V[16]*(6*S[1]-4*S[0]))+S[0]*(S[0]-7*S[1]))+V[16]*(S[1]*(S[0]-2*S[1])+
 S[5]));
C[153]=+V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))+2*S[1]-4*S[0])+V[16]*(-4*S[0]-
 10*S[1]))+S[1]*(2*S[0]-4*S[1]);
C[152]=+4*(V[15]*(V[16]+V[15])+S[1]);
C[151]=+V[15]*(V[15]*(V[15]*(12*(V[16]+V[15]))+10*S[1]-6*S[0])+V[16]*(6*(-
 S[0]-S[1])))+S[1]*(4*(S[0]-S[1]));
C[150]=+V[15]*(12*V[16]+20*V[15])+4*(-S[0]-S[1]);
C[149]=+S[1]*(S[2]*(V[209]*(S[1]-2*S[2]-S[0])+V[210]*(2*S[2]+S[0]-S[1])));
C[148]=+S[0]*(V[209]*(4*S[2]-S[0]+S[1])+V[210]*(S[0]-4*S[2]-S[1]))+S[3]*(4*(
 V[210]-V[209]));
C[147]=+V[209]*(4*S[0]-8*S[2]+2*S[1])+V[210]*(8*S[2]-4*S[0]-2*S[1]);
C[146]=+S[2]*(S[0]*(4*(S[1]-S[2])+S[0])+4*S[3]-2*S[20]);
C[145]=+S[1]*(2*S[1]-16*S[2])+4*S[3]-S[5];
C[144]=+4*(S[2]-S[0]);
C[143]=+S[1]*(2*(S[1]-S[0])-12*S[2])+S[2]*(8*S[2]-4*S[0]);
C[142]=+4*(S[0]+S[1]);
C[141]=+V[15]*(V[15]*(S[1]*(V[15]*(14*V[19]+6*V[15])-3*S[0]-5*S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[19]*(3*(S[1]-S[0]))));
C[140]=+S[1]*(V[15]*(2*V[19]+6*V[15])+4*S[1]-2*S[0])+S[2]*(8*S[0]-16*S[2]);
C[139]=+V[15]*(V[15]*(V[15]*(4*V[19]+20*V[15])+10*(-S[0]-S[1]))+V[19]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[0]-S[1]));
C[138]=+4*(V[19]*V[15]-S[0]-S[1])+28*S[2];
C[137]=+V[15]*(8*V[19]+16*V[15])-8*S[1];
C[136]=+S[1]*(V[15]*(V[15]*(V[15]*(14*V[19]+18*V[15])+11*S[1]-5*S[0])+V[19]*
 (3*(S[1]-S[0]))));
C[135]=+S[1]*(2*(V[15]*(V[19]-V[15])-S[1]));
C[134]=+V[15]*(V[15]*(V[15]*(4*(V[19]-V[15]))+2*S[0]+34*S[1])+V[19]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[1]-S[0]));
C[133]=+V[15]*(4*(V[19]-V[15]));
C[132]=+8*(V[19]*V[15]+S[1]);
C[131]=+V[536]*V[532]*V[460]*V[458]*S[8];
C[130]=+V[15]*(V[15]*(S[1]*(V[15]*(14*V[18]+6*V[15])-3*S[0]-5*S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[18]*(3*(S[1]-S[0]))));
C[129]=+S[1]*(V[15]*(2*V[18]+6*V[15])+4*S[1]-2*S[0])+S[2]*(8*S[0]-16*S[2]);
C[128]=+V[15]*(V[15]*(V[15]*(4*V[18]+20*V[15])+10*(-S[0]-S[1]))+V[18]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[0]-S[1]));
C[127]=+4*(V[18]*V[15]-S[0]-S[1])+28*S[2];
C[126]=+V[15]*(8*V[18]+16*V[15])-8*S[1];
C[125]=+S[1]*(V[15]*(V[15]*(V[15]*(14*V[18]+18*V[15])+11*S[1]-5*S[0])+V[18]*
 (3*(S[1]-S[0]))));
C[124]=+S[1]*(2*(V[15]*(V[18]-V[15])-S[1]));
C[123]=+V[15]*(V[15]*(V[15]*(4*(V[18]-V[15]))+2*S[0]+34*S[1])+V[18]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[1]-S[0]));
C[122]=+V[15]*(4*(V[18]-V[15]));
C[121]=+8*(V[18]*V[15]+S[1]);
C[120]=+V[515]*V[511]*V[460]*V[458]*S[8];
C[119]=+S[1]*(V[15]*(V[15]*(V[15]*(14*V[17]+18*V[15])+11*S[1]-5*S[0])+V[17]*
 (3*(S[1]-S[0]))));
C[118]=+S[1]*(2*(V[15]*(V[17]-V[15])-S[1]));
C[117]=+V[15]*(V[15]*(V[15]*(4*(V[17]-V[15]))+2*S[0]+34*S[1])+V[17]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[1]-S[0]));
C[116]=+V[15]*(4*(V[17]-V[15]));
C[115]=+8*(V[17]*V[15]+S[1]);
C[114]=+V[15]*(V[15]*(S[1]*(V[15]*(14*V[17]+6*V[15])-3*S[0]-5*S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[17]*(3*(S[1]-S[0]))));
C[113]=+S[1]*(V[15]*(2*V[17]+6*V[15])+4*S[1]-2*S[0])+S[2]*(8*S[0]-16*S[2]);
C[112]=+V[15]*(V[15]*(V[15]*(4*V[17]+20*V[15])+10*(-S[0]-S[1]))+V[17]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[0]-S[1]));
C[111]=+4*(V[17]*V[15]-S[0]-S[1])+28*S[2];
C[110]=+V[15]*(8*V[17]+16*V[15])-8*S[1];
C[109]=+V[494]*V[490]*V[460]*V[458]*S[8];
C[108]=+V[15]*(V[15]*(S[1]*(V[15]*(14*V[16]+6*V[15])-3*S[0]-5*S[1])+S[0]*(2*
 S[0]-8*S[2])+8*S[3])+S[1]*(V[16]*(3*(S[1]-S[0]))));
C[107]=+S[1]*(V[15]*(2*V[16]+6*V[15])+4*S[1]-2*S[0])+S[2]*(8*S[0]-16*S[2]);
C[106]=+V[15]*(V[15]*(V[15]*(4*V[16]+20*V[15])+10*(-S[0]-S[1]))+V[16]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[0]-S[1]));
C[105]=+4*(V[16]*V[15]-S[0]-S[1])+28*S[2];
C[104]=+V[15]*(8*V[16]+16*V[15])-8*S[1];
C[103]=+S[1]*(V[15]*(V[15]*(V[15]*(14*V[16]+18*V[15])+11*S[1]-5*S[0])+V[16]*
 (3*(S[1]-S[0]))));
C[102]=+S[1]*(2*(V[15]*(V[16]-V[15])-S[1]));
C[101]=+V[15]*(V[15]*(V[15]*(4*(V[16]-V[15]))+2*S[0]+34*S[1])+V[16]*(14*
 S[1]-2*S[0]))+S[1]*(4*(S[1]-S[0]));
C[100]=+V[15]*(4*(V[16]-V[15]));
C[99]=+8*(V[16]*V[15]+S[1]);
C[98]=+V[473]*V[469]*V[460]*V[458]*S[8];
C[97]=+V[468]*V[460]*V[458]*V[126]*S[8];
C[96]=+S[2]*(S[0]*(V[209]*(4*S[2]-S[0]+S[1])+V[210]*(S[0]-4*S[2]-S[1]))+
 S[2]*(S[1]*(2*(V[209]-V[210]))+S[2]*(4*(V[210]-V[209]))));
C[95]=+S[1]*(S[1]*(V[209]-V[210])+S[0]*(V[210]-V[209]))+S[2]*(S[0]*(4*(
 V[209]-V[210]))+S[2]*(8*(V[210]-V[209])));
C[94]=+S[1]*(2*(V[210]-V[209]))+S[2]*(4*(V[210]-V[209]));
C[93]=+S[2]*(2*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(4*(V[210]-
 V[209])));
C[92]=+2*(S[1]*(V[209]-V[210])+S[0]*(V[209]-V[210]))+S[2]*(8*(V[210]-
 V[209]));
C[91]=+4*(V[210]-V[209]);
C[90]=+V[466]*V[460]*V[458]*V[125]*S[8];
C[89]=+S[2]*(S[1]*(10*S[2]-3*S[0]-S[1])+S[0]*(S[0]-4*S[2])+4*S[3]);
C[88]=+S[1]*(S[0]-4*S[2]-2*S[1])+S[2]*(8*S[2]-4*S[0]);
C[87]=+4*S[2]+2*S[1];
C[86]=+S[1]*(2*(S[2]+S[0]-S[1]))+S[2]*(12*S[2]-6*S[0]);
C[85]=+2*(-S[0]-S[1])+16*S[2];
C[84]=+12*S[2]-4*S[1];
C[83]=+8*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[1];
C[82]=+S[1]*(S[2]*(16*S[2]-4*S[0]+7*S[1]));
C[81]=+S[20];
C[80]=+S[1]*(2*(S[1]-S[0])+24*S[2]);
C[79]=+4*(S[2]+S[1]);
C[78]=+16*S[21]*S[22]*S[23]*S[24]*S[25]*S[26]*S[1];
S[30]=V[460]*V[460];
S[31]=V[458]*V[458];
C[77]=+S[30]*S[31]*S[8];
C[76]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[19]-V[15])+S[0]+S[1])+
 V[19]*(-S[0]-S[1]))-S[0]*S[1])+S[20]-S[5])+V[19]*(S[1]*(7*S[1]-2*S[0])+
 S[5]))+S[1]*(S[1]*(S[0]-2*S[1])+S[5]));
C[75]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[19]-16*V[15])+12*(S[0]+S[1]))+V[19]*(
 4*(-S[0]-S[1])))+S[1]*(-2*S[0]-8*S[1])-2*S[5])-2*V[19]*S[20];
C[74]=+V[15]*(V[15]*(4*V[19]-20*V[15])+8*(S[0]+S[1]));
S[32]=V[15]*V[15]*V[15];
C[73]=+S[1]*(V[15]*(V[15]*(4*V[19]+12*V[15])-4*S[0]-8*S[1])+V[19]*(2*(S[1]-
 S[0])))+S[32]*(4*S[0]-8*S[2]);
C[72]=+V[15]*(4*S[0]-16*S[2]+12*S[1])+4*V[19]*S[1];
C[71]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[19]+V[15])-S[0])+
 V[19]*(-S[0]-S[1])))+S[5]+7*S[20])+V[19]*(S[1]*(7*S[1]-2*S[0])+S[5]))+
 S[20]*(3*(S[1]-S[0])));
C[70]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[19]+V[15]))+4*(S[1]-S[0]))+V[19]*(4*
 (-S[0]-S[1])))+S[1]*(2*(S[0]-S[1])))-2*V[19]*S[20];
C[69]=+V[15]*(4*(V[15]*(V[19]+V[15])+S[1]));
C[68]=+S[1]*(V[15]*(V[15]*(4*(V[19]-V[15]))+12*S[1])+V[19]*(2*(S[1]-S[0])))+
 S[32]*(8*S[2]-4*S[0]);
C[67]=+V[15]*(4*(-S[0]-S[1])+16*S[2])+4*V[19]*S[1];
C[66]=+S[1]*(4*(V[19]+V[15]));
S[33]=V[1]*V[1]*V[1];
C[65]=+V[536]*V[532]*V[458]*V[232]*S[33];
C[64]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[18]-V[15])+S[0]+S[1])+
 V[18]*(-S[0]-S[1]))-S[0]*S[1])+S[20]-S[5])+V[18]*(S[1]*(7*S[1]-2*S[0])+
 S[5]))+S[1]*(S[1]*(S[0]-2*S[1])+S[5]));
C[63]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[18]-16*V[15])+12*(S[0]+S[1]))+V[18]*(
 4*(-S[0]-S[1])))+S[1]*(-2*S[0]-8*S[1])-2*S[5])-2*V[18]*S[20];
C[62]=+V[15]*(V[15]*(4*V[18]-20*V[15])+8*(S[0]+S[1]));
C[61]=+S[1]*(V[15]*(V[15]*(4*V[18]+12*V[15])-4*S[0]-8*S[1])+V[18]*(2*(S[1]-
 S[0])))+S[32]*(4*S[0]-8*S[2]);
C[60]=+V[15]*(4*S[0]-16*S[2]+12*S[1])+4*V[18]*S[1];
C[59]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[18]+V[15])-S[0])+
 V[18]*(-S[0]-S[1])))+S[5]+7*S[20])+V[18]*(S[1]*(7*S[1]-2*S[0])+S[5]))+
 S[20]*(3*(S[1]-S[0])));
C[58]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[18]+V[15]))+4*(S[1]-S[0]))+V[18]*(4*
 (-S[0]-S[1])))+S[1]*(2*(S[0]-S[1])))-2*V[18]*S[20];
C[57]=+V[15]*(4*(V[15]*(V[18]+V[15])+S[1]));
C[56]=+S[1]*(V[15]*(V[15]*(4*(V[18]-V[15]))+12*S[1])+V[18]*(2*(S[1]-S[0])))+
 S[32]*(8*S[2]-4*S[0]);
C[55]=+V[15]*(4*(-S[0]-S[1])+16*S[2])+4*V[18]*S[1];
C[54]=+S[1]*(4*(V[18]+V[15]));
C[53]=+V[515]*V[511]*V[458]*V[232]*S[33];
C[52]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[17]+V[15])-S[0])+
 V[17]*(-S[0]-S[1])))+S[5]+7*S[20])+V[17]*(S[1]*(7*S[1]-2*S[0])+S[5]))+
 S[20]*(3*(S[1]-S[0])));
C[51]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[17]+V[15]))+4*(S[1]-S[0]))+V[17]*(4*
 (-S[0]-S[1])))+S[1]*(2*(S[0]-S[1])))-2*V[17]*S[20];
C[50]=+V[15]*(4*(V[15]*(V[17]+V[15])+S[1]));
C[49]=+S[1]*(V[15]*(V[15]*(4*(V[17]-V[15]))+12*S[1])+V[17]*(2*(S[1]-S[0])))+
 S[32]*(8*S[2]-4*S[0]);
C[48]=+V[15]*(4*(-S[0]-S[1])+16*S[2])+4*V[17]*S[1];
C[47]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[17]-V[15])+S[0]+S[1])+
 V[17]*(-S[0]-S[1]))-S[0]*S[1])+S[20]-S[5])+V[17]*(S[1]*(7*S[1]-2*S[0])+
 S[5]))+S[1]*(S[1]*(S[0]-2*S[1])+S[5]));
C[46]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[17]-16*V[15])+12*(S[0]+S[1]))+V[17]*(
 4*(-S[0]-S[1])))+S[1]*(-2*S[0]-8*S[1])-2*S[5])-2*V[17]*S[20];
C[45]=+V[15]*(V[15]*(4*V[17]-20*V[15])+8*(S[0]+S[1]));
C[44]=+S[1]*(V[15]*(V[15]*(4*V[17]+12*V[15])-4*S[0]-8*S[1])+V[17]*(2*(S[1]-
 S[0])))+S[32]*(4*S[0]-8*S[2]);
C[43]=+V[15]*(4*S[0]-16*S[2]+12*S[1])+4*V[17]*S[1];
C[42]=+S[1]*(4*(V[17]+V[15]));
C[41]=+V[494]*V[490]*V[458]*V[232]*S[33];
C[40]=+V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[15]*(V[16]-V[15])+S[0]+S[1])+
 V[16]*(-S[0]-S[1]))-S[0]*S[1])+S[20]-S[5])+V[16]*(S[1]*(7*S[1]-2*S[0])+
 S[5]))+S[1]*(S[1]*(S[0]-2*S[1])+S[5]));
C[39]=+V[15]*(V[15]*(V[15]*(V[15]*(8*V[16]-16*V[15])+12*(S[0]+S[1]))+V[16]*(
 4*(-S[0]-S[1])))+S[1]*(-2*S[0]-8*S[1])-2*S[5])-2*V[16]*S[20];
C[38]=+V[15]*(V[15]*(4*V[16]-20*V[15])+8*(S[0]+S[1]));
C[37]=+S[1]*(V[15]*(V[15]*(4*V[16]+12*V[15])-4*S[0]-8*S[1])+V[16]*(2*(S[1]-
 S[0])))+S[32]*(4*S[0]-8*S[2]);
C[36]=+V[15]*(4*S[0]-16*S[2]+12*S[1])+4*V[16]*S[1];
C[35]=+V[15]*(V[15]*(V[15]*(V[15]*(4*(V[15]*(V[15]*(V[16]+V[15])-S[0])+
 V[16]*(-S[0]-S[1])))+S[5]+7*S[20])+V[16]*(S[1]*(7*S[1]-2*S[0])+S[5]))+
 S[20]*(3*(S[1]-S[0])));
C[34]=+V[15]*(V[15]*(V[15]*(V[15]*(8*(V[16]+V[15]))+4*(S[1]-S[0]))+V[16]*(4*
 (-S[0]-S[1])))+S[1]*(2*(S[0]-S[1])))-2*V[16]*S[20];
C[33]=+V[15]*(4*(V[15]*(V[16]+V[15])+S[1]));
C[32]=+S[1]*(V[15]*(V[15]*(4*(V[16]-V[15]))+12*S[1])+V[16]*(2*(S[1]-S[0])))+
 S[32]*(8*S[2]-4*S[0]);
C[31]=+V[15]*(4*(-S[0]-S[1])+16*S[2])+4*V[16]*S[1];
C[30]=+8*V[15];
C[29]=+S[1]*(4*(V[16]+V[15]));
C[28]=+V[473]*V[469]*V[458]*V[232]*S[33];
C[27]=+V[468]*V[458]*V[232]*V[126]*V[15]*S[33];
C[26]=+S[1]*(S[1]*(V[209]*(S[1]-6*S[2]-2*S[0])+V[210]*(6*S[2]+2*S[0]-S[1]))+
 S[5]*(V[209]-V[210])+S[3]*(12*(V[209]-V[210])))+S[2]*(S[0]*(S[0]*(2*(
 V[210]-V[209]))+S[2]*(8*(V[209]-V[210])))+S[3]*(8*(V[210]-V[209])));
C[25]=+S[2]*(24*(S[1]*(V[209]-V[210])+S[2]*(V[210]-V[209]))+S[0]*(16*(
 V[209]-V[210])))+S[20]*(6*(V[210]-V[209]))+S[5]*(2*(V[210]-V[209]));
C[24]=+V[209]*(8*S[0]-24*S[2]+12*S[1])+V[210]*(24*S[2]-8*S[0]-12*S[1]);
C[23]=+8*(V[210]-V[209]);
S[34]=V[118]*V[118]*V[118]*V[118];
C[22]=+16*V[122]*V[121]*S[23]*S[34]*V[7]*S[20];
C[21]=+V[466]*V[458]*V[232]*V[125]*V[15]*S[33];
C[20]=+S[1]*(S[1]*(2*S[1]-8*S[2]-S[0])+S[0]*(6*S[2]-S[0]));
C[19]=+S[1]*(2*S[0]-8*S[2]+10*S[1])+S[0]*(2*S[0]-8*S[2])+8*S[3];
C[18]=+8*(-S[0]-S[1])+16*S[2];
C[17]=+S[1]*(6*(S[0]+S[1])-16*S[2])+S[2]*(8*S[2]-4*S[0]);
C[16]=+16*(S[2]-S[1])-4*S[0];
C[15]=+S[2]*(S[1]*(14*S[1]-4*S[2]-2*S[0])+S[0]*(2*S[0]-8*S[2])+8*S[3])+
 S[20]*(3*(S[1]-S[0]));
C[14]=+S[1]*(2*S[0]-4*S[1])+S[2]*(16*S[2]-8*S[0]);
C[13]=+8*S[2]+4*S[1];
C[12]=+S[1]*(14*S[1]-2*S[0])+S[2]*(8*S[2]-4*S[0]);
C[11]=+16*S[2]-4*S[0];
C[10]=+8*S[1];
C[9]=+8*V[122]*V[121]*S[23]*S[34]*V[7]*S[20];
C[8]=+V[460]*S[31]*V[232]*V[15]*S[33];
C[7]=+S[2]*(S[1]*(S[1]*(5*S[2]+2*S[0]-4*S[1])+S[0]*(2*S[2]-S[0])-8*S[3])+
 S[2]*(S[0]*(S[0]-4*S[2])+4*S[3]));
S[35]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[6]=+S[2]*(S[1]*(2*S[0]-16*S[2]+5*S[1])+S[0]*(S[0]-8*S[2])+12*S[3])+S[35];
C[5]=+S[2]*(12*S[2]-4*S[0]-8*S[1]);
C[4]=+4*S[2];
C[3]=+S[20]*(2*S[2]-S[0]+S[1]);
C[2]=+2*S[20];
S[36]=V[118]*V[118]*V[118]*V[118]*V[118]*V[118];
C[1]=+4*S[23]*S[36]*S[35];
S[37]=V[232]*V[232];
S[38]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[31]*S[37]*S[26]*S[38];
}
