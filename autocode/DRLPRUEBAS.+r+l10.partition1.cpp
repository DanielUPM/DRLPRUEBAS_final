//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__RL10_partition1_CPP
#define DRLPRUEBAS__RL10_partition1_CPP

#include "DRLPRUEBAS.+r+l10.partition1.h"

DRLPRUEBAS__RL10_partition1* DRLPRUEBAS__RL10_partition1::s_current= NULL;

DRLPRUEBAS__RL10_partition1::DRLPRUEBAS__RL10_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "RL10";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__RL10_partition1";
m_infoModelFileName = "DRLPRUEBAS.+r+l10.partition1";
m_infoModelFileNameExtra = "+r+l10.partition1";
m_perfFlag = false;
m_infoComponentDate = "07/06/2018 09:58:06.102000";
m_infoPartitionDate = "07/06/2018 09:58:33.407000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[8]; 
int nbx;
for (nbx=0; nbx < 8 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[1];
int ib;
for (ib=0; ib < 1 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[4]; 
int nibr;
for (nibr=0; nibr < 4 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[45]; 
int nif;
for (nif=0; nif < 45 ; nif++)
	m_branchIf[nif]= -1;

static const char * elmstr0[] = { "Angles", "Coefficients", NULL } ;
static int elmind0[] = { 1, 2 } ;
static const char * elmstr1[] = { "LOX", "NTO", "H2O2", "HNO3", "LF2", "RP_1", "LCH4", "LH2", "N2H4", "UDMH", "MMH", "JP_10", "Kerox", "Oil", "H2O", "IPA", 
		"Air", "Ar", "CH4", "CO", "CO2", "H2", "He", "N2", "O2", "MMH_vapour", "Comb_prod", "Comb_prod_M", "Comb_prod_cp", NULL } ;
static int elmind1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 } ;
static const char * elmstr2[] = { "Liquid", "Gas", NULL } ;
static int elmind2[] = { 1, 2 } ;
static const char * elmstr3[] = { "Convergent", "Divergent", NULL } ;
static int elmind3[] = { 1, 2 } ;
static int elmind4[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind5[] = { 1, 7, 8, 11 } ;
static int elmind6[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } ;
static int elmind7[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind8[] = { 1, 4 } ;
static const char * elmstr9[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", NULL } ;
static int elmind9[] = { 1, 2, 3, 4, 5, 6, 7, 8 } ;
static int elmind10[] = { 8, 6 } ;
static const char * elmstr11[] = { "All", "Unknown_W", NULL } ;
static int elmind11[] = { 1, 2 } ;
static int elmind12[] = { 1, 5, 6, 7 } ;
static int elmind13[] = { 2, 3, 4 } ;
static const char * elmstr14[] = { "Yes", "No", NULL } ;
static int elmind14[] = { 1, 2 } ;
n_typ=15;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,2,elmind0},
		{elmstr1,29,elmind1},
		{elmstr2,2,elmind2},
		{elmstr3,2,elmind3},
		{elmstr1,10,elmind4},
		{elmstr1,4,elmind5},
		{elmstr1,16,elmind6},
		{elmstr1,26,elmind7},
		{elmstr9,2,elmind8},
		{elmstr9,8,elmind9},
		{elmstr9,2,elmind10},
		{elmstr11,2,elmind11},
		{elmstr9,4,elmind12},
		{elmstr9,3,elmind13},
		{elmstr14,2,elmind14}
	} ;
typ= new struct INTEG_enumType[15];
etypecopy(15,typ,tmp_typ);
n_dyn=9;
dyn= new double[9] ;
static double tmp_dynInit[9]={ 1, 1, 1, 1, 100, 100, 1, 1, 1 } ;
dynInit= new double[9];
dcopy(9,dynInit,tmp_dynInit);


n_der=0;
der= new double[9] ;
static double tmp_derInit[9]={ 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[9];
dcopy(9,derInit,tmp_derInit);


res= new double[9] ;
ldr= new double[9] ;
boxDyn= new double[9] ;
boxDer= new double[9] ;

n_unkR=396;
unkR= new double[396] ;
static double tmp_unkRInit[396]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 0, 8, 0, 14700000, 0, 0, 0, 4000, 0, 
		0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 2.70069069, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16.3526821, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		0, 1, 0, 0, 3275010, 5000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 1.475994, 0, 0, 0, 0, 0.00100103471, 0.00813274823, 100000, 0, 1, 1, 1, 0, 16.09, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 
		0.000583419169, 0, 0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 
		1, 1, 1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 
		1200000, 124105.6, 1500, 0.1, 1, 1, 1200000, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 
		0, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 0, 1, 1, 1, 0, 0.01, 
		0, 0, 0, 500, 7358000, 0.573907002, 0.0656, 0, 0.2533, 0.05, 0, 0, 0.01, 0, 0, 500, 
		4282000, 0.6508, 0.03027, 0, 0.05393, 0.05, 0, 0, 3219188.99, 0, 1500, 0.1, 1, 1200000, 1, 1, 
		1, 1, 0, 0, 0, 0, 0.005, 0, 1, 0, 0, 10000, 0, 0, 5, 0, 
		45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[396];
dcopy(396,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 4, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 1, 1, 1, 
		1, 1, 2, 2, 1, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 30;
n_neld= 0;
m_numBoxes= 7;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__RL10_partition1::initInternalModels()
{
}

void DRLPRUEBAS__RL10_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi1;
	int _vi2;

	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[1]) ) {
	_vi2 = setofElem(&typ[1], _vi1) ;
	fluid[_vi1-1] = 0. ;
	_vi1 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double DRLPRUEBAS__RL10_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[7]) ) {
	_vi4 = setofElem(&typ[7], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


double DRLPRUEBAS__RL10_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


int DRLPRUEBAS__RL10_partition1::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi5;
	int _vi6;

	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[7]) ) {
	_vi6 = setofElem(&typ[7], _vi5) ;
	if( fluid[_vi6-1] != 0 ) {
	fluid_name = _vi6 ;
	}
	_vi5 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int DRLPRUEBAS__RL10_partition1::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[6], fluid_name) != 0 ) {
	fluid_state = 1 ;
	}
	else {
	fluid_state = 2 ;
	}
	return fluid_state ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi7;
	int _vi8;
	double _vr2;

	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[7]) ) {
	_vi8 = setofElem(&typ[7], _vi7) ;
	_vr2 += _div( fluid[_vi8-1] , Chem_M[_vi7-1],"Chem_M[_vi7]") ;
	_vi7 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__RL10_partition1::LPRES__Vaporisation(double fluid[])
{
	// Local variables:
	int Vapour[4] = { 25,19,22,26 };
	int liquid_name = 1;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",109,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	liquid_name = LPRES__Know_fluid(fluid) ;
	if(!(setofPos(&typ[5], liquid_name) != 0))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",113,".","setofPos(LPRES.LV, liquid_name) != 0","%s","ONLY LIQUIDS IN ENUM LV CAN BE VAPORISED!");

	return Vapour[setofPos(&typ[5], liquid_name)-1] ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__cond(double fluid[])
{
	// Local variables:
	double Chem_cond[16] = { 0.149,0.131,0.353,0.294,0.1,0.137,0.15,0.117,0.488,0.035,0.246,0.11,0.17,0.12,0.607,0.145 };
	int _vi10;
	int _vi9;
	double _vr3;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",253,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr3 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[6]) ) {
	_vi10 = setofElem(&typ[6], _vi9) ;
	_vr3 += Chem_cond[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi11;
	int _vi12;
	double _vr4;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",233,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[6]) ) {
	_vi12 = setofElem(&typ[6], _vi11) ;
	_vr4 += Chem_rho[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[16] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002 };
	int _vi13;
	int _vi14;
	double _vr5;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",273,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr5 = 0. ;
	_vi13 = 1 ;
	while ( _vi13 <= setofSize(&typ[6]) ) {
	_vi14 = setofElem(&typ[6], _vi13) ;
	_vr5 += Chem_visc[_vi13-1] * fluid[_vi14-1] ;
	_vi13 += 1 ;
	}
	return _vr5 ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
{
	// Local variables:
	double rey = 0.0;
	double fric = 0.0;
	double a = 0.0;
	double b = 0.0;

	rey = MATH__max(abs(Re), 1e-05) ;
	a = _pow( (2.457 * _log(_div( 1. , (_pow( (_div( 7. , Re,"Re")) , 0.9,"(7 / Re)**(0.9)" ) + _div( 0.27 * rug , D,"D")),"(7 / Re) ** 0.9 + 0.27 * rug / D"),"1 / ((7 / Re) ** 0.9 + 0.27 * rug / D)")) , 16.,"(2.457 * log(1 / ((7 / Re) ** 0.9 + 0.27 * rug / D)))**(16)" ) ;
	b = _pow( (_div( 37530. , rey,"rey")) , 16.,"(37530 / rey)**(16)" ) ;
	fric = 8. * _pow( (_pow( (_div( 8. , rey,"rey")) , 12.,"(8 / rey)**(12)" ) + _div( 1. , _pow( (a + b) , 1.5,"(a + b)**(1.5)" ),"(a + b) ** 1.5")) , 0.0833333333,"((8 / rey) ** 12 + 1 / (a + b) ** 1.5)**(0.0833333333)" ) ;
	return fric ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__RL10_partition1::LPRES__ISA_Pressure(const double & z)
{
	// Local variables:
	double p_amb = 101325.;
	double a[8] = { -6.5,0,1,2.8,0,-2.8,-2,0 };
	int b[8] = { 0,1,0,0,1,0,0,1 };
	double T_0 = 288.15;
	double p_0 = 101325.;
	double h_0 = 0.;
	double h_max[7] = { 11000,20000,32000,47000,51000,71000,84852 };
	int i = 0;
	int j = 1;
	double h = 0.0;
	int _vi15;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi15 = 1 ;
	while ( _vi15 <= 7 ) {
	if( h > h_max[_vi15-1] ) {
	if( b[_vi15-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi15-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi15-1] * (h_max[_vi15-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi15-1] * 287./1000.),"a[_vi15] * 287 / 1000")),"((T_0 + a[_vi15] * (h_max[_vi15] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi15] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi15-1] * (h_max[_vi15-1] - h_0)/1000. ;
	h_0 = h_max[_vi15-1] ;
	j = _vi15 + 1 ;
	}
	_vi15 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


/* Copy special unkR[] items to dyn[] vector */

void DRLPRUEBAS__RL10_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__RL10_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",159,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[179]) ;
	unkI[0] = 1 ;
	unkR[214] = 1. ;
	if( 1 ) {
	unkR[58] = unkR[213] ;
	}
	dyn[3] = unkR[14] ;
	unkR[16] = unkR[17] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[241]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[61]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[241]), &unkR[28]) ;
	unkR[230] = 500. ;
  // init(Pump_F.Pump,0)
	dyn[6] = unkR[339] ;
  // init(Pump_O.Pump,0)
	dyn[7] = unkR[351] ;
  // init(Turbine.Turbine,0)
	unkR[377] = unkR[376] ;
	dyn[8] = unkR[379] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__RL10_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-147]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[179]) , _sqrt(LPRES__gamma(&unkR[179]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[179]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[179]) + 1) , (2 * (LPRES__gamma(&unkR[179]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__RL10_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__RL10_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-148]  Junction.f_in1.W = Injector_F.W - HeadLoss_Turb.f_in.W
unkR[332] = unkR[27] - dyn[2] ;
//[E-149]  HeadLoss_TF.f_in.W = HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[236] = dyn[2] + unkR[332] ;
//[E-150]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[273] = _div( _div( unkR[236] , (unkR[231] * unkR[232] * LPRES__rho(&unkR[241])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-151]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[229] = _div( LPRES__rho(&unkR[241]) * unkR[273] * unkR[225] , LPRES__visc(&unkR[241]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-152]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-153]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[238] = _div( unkR[227] * LPRES__cond(&unkR[241]) , unkR[225],"CoolingJacket.D_hy") ;
//[E-154]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[234] = LPRES__hdc_fric(unkR[224], unkR[271], unkR[229]) ;
//[E-155]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[237] = unkR[270] - _div( unkR[234] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[241]) * _pow( unkR[273] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-156]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[367] = unkR[237] * unkR[366] ;
//[E-157]  HeadLoss_Turb.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[308] = _div( unkR[367] , unkR[389],"Turbine.pi") ;
//[E-158]  Junction.f_in2.pt = HeadLoss_Turb.f_in.pt - HeadLoss_Turb.dp
unkR[309] = unkR[308] - unkR[305] ;
//[E-159]  HeadLoss_Junct.f_in.pt = Junction.f_in2.pt * Junction.TPL
unkR[288] = unkR[309] * unkR[331] ;
//[E-160]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[289] = unkR[288] - unkR[284] ;
//[E-161]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[383] = 1. - unkR[386] * (1. - _pow( (_div( unkR[308] , unkR[367],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[28]) - 1.) , LPRES__gamma(&unkR[28]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-162]  Junction.f_in1.Tt = HeadLoss_Turb.f_in.Tt / Turbine.alpha
unkR[235] = _div( dyn[1] , unkR[383],"Turbine.alpha") ;
//[E-163]  CoolingJacket.h.Q = HeadLoss_TF.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - CoolingJacket.l.Tt)
unkR[208] = unkR[236] * LPRES__cp(&unkR[28]) * (unkR[235] - unkR[240]) ;
//[E-164]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + CoolingJacket.l.Tt
unkR[230] = _div( _div( unkR[208] , unkR[223],"CoolingJacket.A_wet_cooling") , unkR[238],"CoolingJacket.h_l") + unkR[240] ;
//[E-165]  CoolingJacket.h.T = CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w) + CoolingJacket.T_w_cold
unkR[209] = _div( _div( unkR[208] , unkR[5],"CombCha.A_wet") , (_div( unkR[239] , unkR[272],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[230] ;
//[E-166]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[287] = _div( (-(_div( unkR[332] , unkR[27],"Injector_F.W") * LPRES__cp(&unkR[28]) * -unkR[235]) - _div( dyn[2] , unkR[27],"Injector_F.W") * LPRES__cp(&unkR[28]) * -dyn[1]) , (_div( unkR[332] , unkR[27],"Injector_F.W") * LPRES__cp(&unkR[28]) + _div( dyn[2] , unkR[27],"Injector_F.W") * LPRES__cp(&unkR[28])),"Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-167]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[378] = dyn[2] * LPRES__cp(&unkR[28]) * (unkR[235] - dyn[1]) ;
//[E-168]  Pump_F.m.Power = Gearbox.m_out.Power - Turbine.m.Power
unkR[338] = unkR[283] - unkR[378] ;
//[E-169]  Pump_F.tau = -Pump_F.m.Power / HeadLoss_TF.f_in.W
res[1] = evalNormResidueInternal(1,unkR[347],_div( -unkR[338] , unkR[236],"HeadLoss_TF.f_in.W"));
//[E-170]  CombCha.f_O.p_c = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CombCha.A_th
unkR[58] = _div( _div( unkR[178] * _sqrt(LPRES__R(&unkR[179]) * dyn[3],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[179]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-171]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[316] = _div( unkR[289] , unkR[58],"CombCha.f_O.p_c") ;
//[E-172]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[315] = _sqrt(_div( 2. * (_pow( unkR[316] , (_div( (LPRES__gamma(&unkR[28]) - 1.) , LPRES__gamma(&unkR[28]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[28]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[315] = 1. ;
else unkR[315] = 0. ;
//[E-173]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[26] = _div( unkR[287] , (1. + (LPRES__gamma(&unkR[28]) - 1.)/2. * _pow( unkR[315] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[26] = unkR[287] ;
}
//[E-174]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[326] = _div( unkR[276] , unkR[58],"CombCha.f_O.p_c") ;
//[E-175]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[325] = _sqrt(_div( 2. * (_pow( unkR[326] , (_div( (LPRES__gamma(&unkR[61]) - 1.) , LPRES__gamma(&unkR[61]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[61]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[325] = 1. ;
else unkR[325] = 0. ;
//[E-176]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[59] = _div( unkR[275] , (1. + (LPRES__gamma(&unkR[61]) - 1.)/2. * _pow( unkR[325] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[59] = unkR[275] ;
}
//[E-177]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[15] = _div( (LPRES__cp(&unkR[120]) * unkR[59] + _div( unkR[214] , unkR[8],"CombCha.OF_st") * LPRES__cp(&unkR[91]) * unkR[26]) , ((1. + _div( unkR[214] , unkR[8],"CombCha.OF_st")) * unkR[24]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-178]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[13] = _div( (_div( unkR[25] * unkR[11] , (_div( (1. + unkR[7]) , MATH__min(unkR[7], unkR[8]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[24] * (unkR[15] - 298.15)) , LPRES__cp(&unkR[149]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-179]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[2] = evalNormResidueInternal(2,_div( (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") * LPRES__cp(&unkR[149]) * (dyn[3] - unkR[13]) + _div( unkR[20] , unkR[178],"ThrustMonitor.g.W") * unkR[89] * (dyn[3] - unkR[59]) + _div( unkR[19] , unkR[178],"ThrustMonitor.g.W") * unkR[56] * (dyn[3] - unkR[26]),0);
//[E-180]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[22] = _div( _sqrt(LPRES__R(&unkR[179]) * dyn[3],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[179]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-181]  CombCha.T_aw = ThrustMonitor.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[12] = dyn[3] * _div( (1. + _pow( unkR[9] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[179]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[179]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-182]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[215] = 1.184e-07 * _pow( LPRES__M(&unkR[179]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[12] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-183]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[210] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[215] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[179]) , _pow( unkR[9] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[58] , unkR[22],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-184]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[3] = evalNormResidueInternal(3,unkR[208],unkR[210] * (unkR[12] - unkR[209]) * unkR[5]);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__RL10_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[3];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__RL10_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-185]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[179]) , (_pow( (_div( dyn[4] , unkR[58],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[179]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[179]) * (1. - _pow( (_div( dyn[4] , unkR[58],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[179]) - 1.) , LPRES__gamma(&unkR[179]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[179]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__RL10_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__RL10_partition1::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-190]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( unkR[178] * _sqrt(LPRES__R(&unkR[179]) * dyn[3],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[58],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[179]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[179]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[179]) + 1)/2 , (LPRES__gamma(&unkR[179]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__RL10_partition1::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__RL10_partition1::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-218]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
res[6] = evalNormResidueInternal(6,unkR[343],_div( unkR[347] , _pow( dyn[6] , 2,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__RL10_partition1::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn5, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__RL10_partition1::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-223]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
res[7] = evalNormResidueInternal(7,unkR[355],_div( unkR[359] , _pow( dyn[7] , 2,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__RL10_partition1::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn6, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__RL10_partition1::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-234]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[390] = _div( unkR[395] , _pow( dyn[8] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-235]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[387] = _div( (unkR[390] + 1.) , (tan(unkR[384] * 3.14159265358979/180.) - tan(unkR[385] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-236]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[8] = evalNormResidueInternal(8,unkR[387],_div( unkR[381] , dyn[8],"Turbine.U"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition1::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition1& m= *DRLPRUEBAS__RL10_partition1::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__RL10_partition1::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition1::fcn7, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__RL10_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[178] = unkR[60] + unkR[27] ;
//[E-3]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[61]);
//[E-4]  CombCha.W_O = Injector_O.W * (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[21] = unkR[60] * (1. - unkR[87]) ;
//[E-5]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[241]), &unkR[28]);
//[E-6]  CombCha.W_F = Injector_F.W * (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[16] = unkR[27] * (1. - unkR[54]) ;
//[E-7]  CombCha.W_IO = Injector_O.W - CombCha.W_O
unkR[20] = unkR[60] - unkR[21] ;
//[E-8]  CombCha.W_IF = Injector_F.W - CombCha.W_F
unkR[19] = unkR[27] - unkR[16] ;
//[E-9]  CombCha.OF = CombCha.W_O / CombCha.W_F
unkR[7] = _div( unkR[21] , unkR[16],"CombCha.W_F") ;
//[E-10]  CombCha.phi = CombCha.OF_st / CombCha.OF
unkR[214] = _div( unkR[8] , unkR[7],"CombCha.OF") ;
//[E-11]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[18] = _div( unkR[16] , unkR[214],"CombCha.phi") ;
//[E-12]  CombCha.Q_comb_effective =  ZONE[1] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[11] = unkR[10] ;
else unkR[11] = 0. ;
//[E-13]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[120] = _div( unkR[61] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-14]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[91] = _div( unkR[28] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-15]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[149] = _div( (unkR[120] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[91] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[149] = _div( (unkR[120] * unkR[21] + unkR[91] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-16]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[121] = _div( unkR[62] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-17]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[92] = _div( unkR[29] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[150] = _div( (unkR[121] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[92] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[150] = _div( (unkR[121] * unkR[21] + unkR[92] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-19]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-20]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[93] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[21] + unkR[93] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-22]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[94] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[21] + unkR[94] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-25]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[95] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[21] + unkR[95] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-28]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[96] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[21] + unkR[96] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-31]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[97] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[21] + unkR[97] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-34]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[98] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[21] + unkR[98] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-37]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[99] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[21] + unkR[99] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-40]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[100] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[21] + unkR[100] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-43]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[101] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[21] + unkR[101] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-46]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[102] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[21] + unkR[102] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-49]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[103] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[21] + unkR[103] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-52]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[104] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[21] + unkR[104] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-55]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[105] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[21] + unkR[105] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-58]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-59]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[106] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[21] + unkR[106] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-61]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-62]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-63]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[107] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[21] + unkR[107] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-64]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-65]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-66]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[108] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[21] + unkR[108] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-67]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-68]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-69]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[109] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[21] + unkR[109] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-70]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-71]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-72]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[110] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[21] + unkR[110] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-73]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-74]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-75]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[111] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[21] + unkR[111] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-76]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-77]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-78]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[112] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[21] + unkR[112] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-79]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-80]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-81]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[113] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[21] + unkR[113] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-82]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-83]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-84]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[114] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[21] + unkR[114] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-85]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-86]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-87]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[115] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[21] + unkR[115] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-88]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[87]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-89]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[54]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-90]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[116] * MATH__max(unkR[214] - 1., 0.) * unkR[18]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[21] + unkR[116] * unkR[16]) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-91]  CombCha.fluid_O[Comb_prod] = 0
unkR[146] = 0. ;
//[E-92]  CombCha.fluid_F[Comb_prod] = 0
unkR[117] = 0. ;
//[E-93]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[214], 0.) * unkR[21] + unkR[117] * MATH__max(unkR[214] - 1., 0.) * unkR[18] + (1. - MATH__max(1. - unkR[214], 0.)) * (unkR[21] + unkR[18])) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = 0. ;
}
//[E-94]  CombCha.fluid_P[Comb_prod_M] =  IF[28] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[176] = unkR[6] ;
}
else 
{
unkR[176] = 0. ;
}
//[E-95]  CombCha.fluid_P[Comb_prod_cp] =  IF[29] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = unkR[23] ;
}
else 
{
unkR[177] = 0. ;
}
//[E-96]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[296] = unkR[295] - unkR[291] ;
//[E-97]  CoolingJacket.l.pt = Pump_F.dp + Pump_F.f_in.pt
unkR[270] = unkR[340] + unkR[296] ;
//[E-98]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[241]);
//[E-99]  Pump_F.tau = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[347] = _div( (unkR[270] - unkR[296]) , (unkR[341] * LPRES__rho(&unkR[241])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-100]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[303] = unkR[302] - unkR[298] ;
//[E-101]  FlowMeter_O.f_in.pt = Pump_O.dp + Pump_O.f_in.pt
unkR[276] = unkR[352] + unkR[303] ;
//[E-102]  Pump_O.tau = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[359] = _div( (unkR[276] - unkR[303]) , (unkR[353] * LPRES__rho(&unkR[61])),"Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-103]  Pump_O.m.Power = -(Pump_O.tau * Injector_O.W)
unkR[281] = -(unkR[359] * unkR[60]) ;
//[E-104]  Gearbox.m_out.Power =  ZONE[2] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[1]==0)
	unkR[283] = -unkR[281] * unkR[279] ;
else unkR[283] = _div( -unkR[281] , unkR[279],"Gearbox.eta") ;
//[E-105]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[147] = 0. ;
//[E-106]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[148] = 0. ;
//[E-107]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[118] = 0. ;
//[E-108]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[119] = 0. ;
//[E-109]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[24] = _div( (unkR[21] * LPRES__cp(&unkR[120]) + unkR[16] * LPRES__cp(&unkR[91])) , (unkR[21] + unkR[16]),"CombCha.W_O + CombCha.W_F") ;
//[E-110]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[275] = _div( _div( (unkR[276] - unkR[303]) , LPRES__rho(&unkR[61]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[353],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[61]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[301] ;
//[E-111]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[179] = _div( unkR[149] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[180] = _div( unkR[150] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[151] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[152] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[153] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[154] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[155] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[21] + unkR[16]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[205] = _div( (unkR[175] * (unkR[21] + unkR[16]) + unkR[20] + unkR[19]) , unkR[178],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[206] = unkR[176] ;
//[E-139]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[207] = unkR[177] ;
//[E-140]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[231] * unkR[232]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[231] + unkR[232]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-141]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[231] * unkR[232] , (unkR[231] + unkR[232]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-142]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[240] = _div( _div( (unkR[270] - unkR[296]) , LPRES__rho(&unkR[241]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[341],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[241]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[294] ;
//[E-143]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[228] = _div( LPRES__visc(&unkR[241]) * LPRES__cp(&unkR[241]) , LPRES__cond(&unkR[241]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-144]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[223] = unkI[2] * 2. * (unkR[231] + unkR[232]) * unkR[226] ;
//[E-145]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[9] = _div( 4. * LPRES__gamma(&unkR[179]) , (9. * LPRES__gamma(&unkR[179]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-146]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,3,50);
else fbox2(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-186]  FlowMeter_F.i.Data[1] = abs(HeadLoss_TF.f_in.W)
unkR[274] = abs(unkR[236]) ;
//[E-187]  FlowMeter_O.i.Data[1] = abs(Injector_O.W)
unkR[277] = abs(unkR[60]) ;
//[E-188]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[220] = unkR[274] + unkR[277] ;
//[E-189]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[211] = unkR[22] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-191]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[370] = _div( dyn[3] , (1. + (LPRES__gamma(&unkR[179]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-192]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[373] = dyn[5] * _sqrt(LPRES__gamma(&unkR[179]) * LPRES__R(&unkR[179]) * unkR[370],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-193]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[372] = _div( unkR[58] , _pow( (1. + (LPRES__gamma(&unkR[179]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[179]) - 1.) , LPRES__gamma(&unkR[179]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-194]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[371] = LPRES__ISA_Pressure(unkR[334]) ;
//[E-195]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[219] = unkR[178] * unkR[373] + unkR[2] * (unkR[372] - unkR[371]) ;
//[E-196]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[217] = _div( unkR[219] , unkR[220],"ControlPanel.W_tot") ;
//[E-197]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[216] = _div( unkR[217] , unkR[22],"CombCha.c_star") ;
//[E-198]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[218] = unkR[217]/9.80665 ;
//[E-199]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[282] = unkR[394] * 2. * 3.14159265358979/60. ;
//[E-200]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[280] = _div( unkR[282] , unkR[278],"Gearbox.GR") ;
//[E-201]  Injector_F.PR_sl =  IF[30] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[317] = _pow( ((LPRES__gamma(&unkR[28]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[28]) , (LPRES__gamma(&unkR[28]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[317] = 0. ;
}
//[E-202]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[319] = _div( unkR[289] , unkR[317],"Injector_F.PR_sl") ;
}
else 
{
unkR[319] = 0. ;
}
//[E-203]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * Injector_F.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[313] = _div( _sqrt(unkR[287] * LPRES__R(&unkR[28]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[27] , (LPRES__FGAMMA(&unkR[28]) * unkR[289]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[313] = 0. ;
}
//[E-204]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[57] = MATH__max(unkR[58], unkR[319]) ;
}
else 
{
unkR[57] = unkR[58] ;
}
//[E-205]  Injector_F.A_d =  IF[35] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[312] = _div( unkR[313] * _pow( (_div( (2. + (LPRES__gamma(&unkR[28]) - 1.) * _pow( unkR[315] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[28]) + 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[28]) + 1.) , (2. * (LPRES__gamma(&unkR[28]) - 1.)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[315],"Injector_F.M_out") ;
}
else 
{
unkR[312] = _div( _div( unkR[27] , unkR[314],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[28]) * (unkR[289] - unkR[57]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"),"sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))") ;
}
//[E-206]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[320] = unkR[315] * _sqrt(LPRES__gamma(&unkR[28]) * LPRES__R(&unkR[28]) * unkR[26],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[320] = _div( unkR[27] , (LPRES__rho(&unkR[28]) * unkR[312] * unkR[314]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-207]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[28]) == 2 ) 
{
unkR[318] = 0. ;
}
else 
{
unkR[318] = _div( LPRES__rho(&unkR[28]) * unkR[320] * unkR[314] * _sqrt(4. * unkR[312]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[28]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-208]  Injector_O.PR_sl =  IF[38] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[327] = _pow( ((LPRES__gamma(&unkR[61]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[61]) , (LPRES__gamma(&unkR[61]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[327] = 0. ;
}
//[E-209]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[329] = _div( unkR[276] , unkR[327],"Injector_O.PR_sl") ;
}
else 
{
unkR[329] = 0. ;
}
//[E-210]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * Injector_O.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[323] = _div( _sqrt(unkR[275] * LPRES__R(&unkR[61]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[60] , (LPRES__FGAMMA(&unkR[61]) * unkR[276]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[323] = 0. ;
}
//[E-211]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[90] = MATH__max(unkR[58], unkR[329]) ;
}
else 
{
unkR[90] = unkR[58] ;
}
//[E-212]  Injector_O.A_d =  IF[43] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[322] = _div( unkR[323] * _pow( (_div( (2. + (LPRES__gamma(&unkR[61]) - 1.) * _pow( unkR[325] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[61]) + 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[61]) + 1.) , (2. * (LPRES__gamma(&unkR[61]) - 1.)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[325],"Injector_O.M_out") ;
}
else 
{
unkR[322] = _div( _div( unkR[60] , unkR[324],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[61]) * (unkR[276] - unkR[90]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))") ;
}
//[E-213]  Injector_O.v_ideal =  IF[44] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[330] = unkR[325] * _sqrt(LPRES__gamma(&unkR[61]) * LPRES__R(&unkR[61]) * unkR[59],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[330] = _div( unkR[60] , (LPRES__rho(&unkR[61]) * unkR[322] * unkR[324]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-214]  Injector_O.Re =  IF[45] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[61]) == 2 ) 
{
unkR[328] = 0. ;
}
else 
{
unkR[328] = _div( LPRES__rho(&unkR[61]) * unkR[330] * unkR[324] * _sqrt(4. * unkR[322]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[61]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-215]  Junction.f_in1.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[333] = _div( unkR[288] , unkR[331],"Junction.TPL") ;
//[E-216]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[337] = _div( (unkR[270] - unkR[296]) , (9.80665 * LPRES__rho(&unkR[241])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-217]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi_d
unkR[343] = 1. - _div( (1. - unkR[344]) , unkR[342],"Pump_F.phi_d") * unkR[342] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-219]  Pump_F.r_m_d = Pump_F.U / Turbine.m.N
unkR[346] = _div( dyn[6] , unkR[282],"Turbine.m.N") ;
//[E-220]  Pump_F.A_in_d = HeadLoss_TF.f_in.W / Pump_F.phi_d / LPRES.rho(HeadLoss_TF.f_in.fluid) / Pump_F.U
unkR[336] = _div( _div( _div( unkR[236] , unkR[342],"Pump_F.phi_d") , LPRES__rho(&unkR[241]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") , dyn[6],"Pump_F.U") ;
//[E-221]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[350] = _div( (unkR[276] - unkR[303]) , (9.80665 * LPRES__rho(&unkR[61])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-222]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi_d
unkR[355] = 1. - _div( (1. - unkR[356]) , unkR[354],"Pump_O.phi_d") * unkR[354] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-224]  Pump_O.r_m_d = Pump_O.U / Pump_O.m.N
unkR[358] = _div( dyn[7] , unkR[280],"Pump_O.m.N") ;
//[E-225]  Pump_O.A_in_d = Injector_O.W / Pump_O.phi_d / LPRES.rho(HeadLoss_TO.f_in.fluid) / Pump_O.U
unkR[349] = _div( _div( _div( unkR[60] , unkR[354],"Pump_O.phi_d") , LPRES__rho(&unkR[61]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") , dyn[7],"Pump_O.U") ;
//[E-226]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[364] = unkR[237] * unkR[366] ;
//[E-227]  Regulator_F.dp_d = Regulator_F.f_in.pt - Junction.f_in1.pt
unkR[361] = unkR[364] - unkR[333] ;
//[E-228]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[221] = unkR[219] ;
//[E-229]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[377] = MATH__min(unkR[376], 1.) ;
//[E-230]  Turbine.A_in_d = HeadLoss_Turb.f_in.W * sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Turbine.f_in.pt
unkR[375] = _div( _div( dyn[2] * _sqrt(unkR[235] * LPRES__R(&unkR[28]),"Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (_sqrt(LPRES__gamma(&unkR[28]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(unkR[377], 1.) * cos(unkR[384] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[28]) - 1.)/2. * _pow( MATH__min(unkR[377], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[28]) + 1.)/2. , (LPRES__gamma(&unkR[28]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" )),"sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))") , unkR[367],"Turbine.f_in.pt") ;
//[E-231]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[395] = _div( unkR[378] , dyn[2],"HeadLoss_Turb.f_in.W") ;
//[E-232]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[380] = unkR[377] * _sqrt(_div( LPRES__gamma(&unkR[28]) * LPRES__R(&unkR[28]) * unkR[235] , (1. + (LPRES__gamma(&unkR[28]) - 1.)/2. * _pow( unkR[377] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-233]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[381] = unkR[380] * cos(unkR[384] * 3.14159265358979/180.) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-237]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[393] = _div( dyn[8] , unkR[282],"Turbine.m.N") ;
//[E-238]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[222] = unkR[274] + unkR[277] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__RL10_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[241])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",58,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[241])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[61])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[179])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[372] , unkR[371],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[28])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__RL10_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[281]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[28]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= unkR[316] - unkR[317]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[28]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= unkR[316] - unkR[317]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[61]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[326] - unkR[327]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[61]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[326] - unkR[327]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__RL10_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__RL10_partition1::executeWhen(double *_time,  int index )
{
  if ( index == 0 )
  {
	unkI[0] = 0 ;
	return;
  }

  if ( index == 1 )
  {
	unkI[0] = 1 ;
	return;
  }

}

/* Evaluation of ZONE conditions*/
void DRLPRUEBAS__RL10_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha.Q_comb_effective =  ZONE (CombCha.Combustion) CombCha.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Gearbox.m_out.Power =  ZONE (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta OTHERS -Pump_O.m.Power / Gearbox.eta
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__RL10_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 12 ;
	nConstraints= 31;
	nWhen= 2;
	nZones= 4;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0",
		"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha.Combustion","OTHERS",
	"Pump_O.m.Power > 0","OTHERS",
	"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha.Combustion"},{ ZONE,GT_OP,0,0,"Pump_O.m.Power > 0"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__RL10_partition1::initDelays()
{
}


bool DRLPRUEBAS__RL10_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__RL10_partition1 = 88324;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__RL10_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__RL10_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__RL10_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__RL10_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__RL10_partition1;
return true;
}



bool DRLPRUEBAS__RL10_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__RL10_partition1 = 272;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__RL10_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__RL10_partition1[] = 
{
"CQAAAB4AAAAAAAAAAQAAAAQAAAAEAAAABAAAAAUAAAAFAAAAAQAAAAEAAAAFAAAAAQAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAYAAAAHAAAACAAAAAEAAAACAAAAAwAAAAQAAAAJAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__RL10_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__RL10_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__RL10_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__RL10_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__RL10_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__RL10_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__RL10_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__RL10_partition1(name,dirInstall);
		ep = tmp->createThinModel();
	}
	catch(...)
	{
	}
	return ep;
}

#ifndef SIMULA_NOT_USE_METAINFO
/* Function to get information of the model*/
SIMULA_EXPORT_C_EXP void getInformationPartition(char *libraryName, char *componentName, char *partitionName, char *symbolTableFilename, bool& isDebug)
{
	sprintf(libraryName,"%s","DRLPRUEBAS");
	sprintf(componentName,"%s","RL10");
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+r+l10.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

