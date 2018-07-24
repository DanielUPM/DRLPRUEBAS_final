//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__RL10_partition2_CPP
#define DRLPRUEBAS__RL10_partition2_CPP

#include "DRLPRUEBAS.+r+l10.partition2.h"

DRLPRUEBAS__RL10_partition2* DRLPRUEBAS__RL10_partition2::s_current= NULL;

DRLPRUEBAS__RL10_partition2::DRLPRUEBAS__RL10_partition2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "RL10";
m_infoPartitionName = "partition2";
m_infoModelName = "DRLPRUEBAS__RL10_partition2";
m_infoModelFileName = "DRLPRUEBAS.+r+l10.partition2";
m_infoModelFileNameExtra = "+r+l10.partition2";
m_perfFlag = false;
m_infoComponentDate = "22/06/2018 13:21:21.047000";
m_infoPartitionDate = "25/06/2018 13:32:55.634000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[4]; 
int nbx;
for (nbx=0; nbx < 4 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[2];
int ib;
for (ib=0; ib < 2 ; ib++)
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
static int elmind4[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 } ;
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
		{elmstr1,11,elmind4},
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
static double tmp_dynInit[9]={ 1, 1, 1, 10, 1, 1, 1, 100, 100 } ;
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

n_unkR=406;
unkR= new double[406] ;
static double tmp_unkRInit[406]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		3300, 3000, 0, 2.7, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 0, 1, 0, 0, 0, 0, 10, 3275010, 5000000, 1, 0, 0.032, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 3180.93, 0, 
		0.00100103471, 0.00813274823, 100000, 0, 1, 1, 0, 0, 0, 16.09, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 19.05, 0.567, 0, 5e-05, 0.000583419169, 0.032, 0, 
		0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 
		1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 
		1500, 0.1, 1, 1, 1, 1, 1200000, 0.00178349971, 0, 0.5, 0, 0, 0, 2.70069069, 0, 0, 
		0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 0, 0, 1, 1, 0, 0.000677279675, 0, 0, 
		850, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 0.6508, 0, 
		0.03027, 0, 0.05393, 0.194281146, 0, 3219188.99, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 0, 0, 
		0, 0, 0.000513113762, 0.1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 0.05, 
		1.8, 0, 0.7, 0.715229315, 38172.635, 0 } ;
unkRInit= new double[406];
dcopy(406,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 4, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 4, 4, 4, 
		4, 6, 2, 2, 1, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 65;
n_neld= 0;
m_numBoxes= 3;
m_nNonLinearBoxes= 3;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__RL10_partition2::initInternalModels()
{
}

void DRLPRUEBAS__RL10_partition2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__RL10_partition2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_partition2::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__RL10_partition2::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__RL10_partition2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__RL10_partition2::LPRES__M(double fluid[])
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


double DRLPRUEBAS__RL10_partition2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__RL10_partition2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__RL10_partition2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_partition2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__RL10_partition2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__RL10_partition2::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__RL10_partition2::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__RL10_partition2::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__RL10_partition2::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__RL10_partition2::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__RL10_partition2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__RL10_partition2::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__RL10_partition2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__RL10_partition2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[182]) ;
	unkI[0] = 1 ;
	dyn[2] = 1. ;
	dyn[1] = unkR[19] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
	unkR[215] = _div( 1. , unkR[217],"CombCha.mfr_ch") ;
	unkR[216] = _div( 1. , (unkR[217] * unkR[17]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[251]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[63]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[251]), &unkR[30]) ;
	unkR[239] = 500. ;
	unkR[247] = _div( 1. , unkR[281],"CoolingJacket.mfr_ch") ;
	unkR[248] = _div( 1. , (unkR[281] * unkR[238]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Pump_F.Pump,0)
	dyn[5] = unkR[352] ;
  // init(Pump_O.Pump,0)
	unkR[363] = unkR[364] ;
  // init(Turbine.Turbine,0)
	dyn[6] = unkR[387] ;
	unkR[389] = unkR[390] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__RL10_partition2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-77]  HeadLoss_Junct.f_in.W = CombCha.W_F / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[29] = _div( dyn[1] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-78]  CoolingJacket.v = HeadLoss_Junct.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[287] = _div( _div( unkR[29] , (unkR[240] * unkR[241] * LPRES__rho(&unkR[251])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-79]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[237] = _div( LPRES__rho(&unkR[251]) * unkR[287] * unkR[233] , LPRES__visc(&unkR[251]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-80]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[235] = 0.027 * _pow( unkR[237] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[236] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-81]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[246] = _div( unkR[235] * LPRES__cond(&unkR[251]) , unkR[233],"CoolingJacket.D_hy") ;
//[E-82]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[243] = LPRES__hdc_fric(unkR[232], unkR[284], unkR[237]) ;
//[E-83]  Pump_F.phi = HeadLoss_Junct.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[355] = _div( unkR[29] , (unkR[349] * dyn[5] * LPRES__rho(&unkR[251])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-84]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi
unkR[357] = 1. - _div( (1. - unkR[358]) , unkR[356],"Pump_F.phi_d") * unkR[355] ;
//[E-85]  Pump_F.tau = Pump_F.psi * Pump_F.U ** 2
unkR[360] = unkR[357] * _pow( dyn[5] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-86]  CoolingJacket.l.pt = Pump_F.tau * Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid) + Pump_F.f_in.pt
unkR[280] = unkR[360] * unkR[354] * LPRES__rho(&unkR[251]) + unkR[310] ;
//[E-87]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[245] = unkR[280] - _div( unkR[243] * unkR[234] , unkR[232],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[251]) * _pow( unkR[287] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-88]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[379] = unkR[245] * unkR[378] ;
//[E-89]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[376] = unkR[245] * unkR[378] ;
//[E-90]  Junction.f_in1.pt = Regulator_F.f_in.pt - Regulator_F.dp
unkR[347] = unkR[376] - unkR[373] ;
//[E-91]  HeadLoss_Junct.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[302] = unkR[347] * unkR[346] ;
//[E-92]  Junction.f_in2.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[325] = _div( unkR[302] , unkR[346],"Junction.TPL") ;
//[E-93]  HeadLoss_Turb.f_in.pt = Junction.f_in2.pt + HeadLoss_Turb.dp
unkR[324] = unkR[325] + unkR[319] ;
//[E-94]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[394] = 1. - unkR[397] * (1. - _pow( (_div( unkR[324] , unkR[379],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-95]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[303] = unkR[302] - unkR[298] ;
//[E-96]  CombCha.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[60] = _div( unkR[303] , dyn[3],"Injector_F.PR") ;
//[E-97]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[334] = _div( unkR[303] , unkR[331],"Injector_F.PR_sl") ;
}
else 
{
unkR[334] = 0. ;
}
//[E-98]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[334]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-99]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[250] = _div( _div( (unkR[280] - unkR[310]) , LPRES__rho(&unkR[251]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[354],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[251]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[308] ;
//[E-100]  Pump_F.m.Power = -(Pump_F.tau * HeadLoss_Junct.f_in.W)
unkR[351] = -(unkR[360] * unkR[29]) ;
//[E-101]  HeadLoss_Junct.f_in.W = HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[323] = unkR[29] - dyn[4] ;
//[E-102]  CombCha.W_IF = HeadLoss_Turb.f_in.W + Junction.f_in1.W - CombCha.W_F
unkR[21] = unkR[323] + dyn[4] - dyn[1] ;
//[E-103]  HeadLoss_Turb.f_in.W * sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (Turbine.f_in.pt * Turbine.A_in) = sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))
unkR[244] = _div( _pow( (_div( _sqrt(LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[395] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[30]) + 1.)/2. , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[379] * unkR[386] , unkR[323],"HeadLoss_Turb.f_in.W")) , 2.,"(sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) * Turbine.f_in.pt * Turbine.A_in / HeadLoss_Turb.f_in.W)**(2)" ) , LPRES__R(&unkR[30]),"LPRES.R(HeadLoss_Turb.f_in.fluid)") ;
//[E-104]  CoolingJacket.h.Q = -(LPRES.cp(HeadLoss_Turb.f_in.fluid) * (HeadLoss_Junct.f_in.W * CoolingJacket.l.Tt - HeadLoss_Junct.f_in.W * Junction.f_in1.Tt))
unkR[211] = -(LPRES__cp(&unkR[30]) * (unkR[29] * unkR[250] - unkR[29] * unkR[244])) ;
//[E-105]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + CoolingJacket.l.Tt
unkR[239] = _div( _div( unkR[211] , unkR[231],"CoolingJacket.A_wet_cooling") , unkR[246],"CoolingJacket.h_l") + unkR[250] ;
//[E-106]  CoolingJacket.h.T = CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w) + CoolingJacket.T_w_cold
unkR[212] = _div( _div( unkR[211] , unkR[5],"CombCha.A_wet") , (_div( unkR[249] , unkR[285],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[239] ;
//[E-107]  HeadLoss_Turb.f_in.Tt = Turbine.alpha * Junction.f_in1.Tt
unkR[322] = unkR[394] * unkR[244] ;
//[E-108]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[301] = _div( (-(_div( dyn[4] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[244]) - _div( unkR[323] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[322]) , (_div( dyn[4] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) + _div( unkR[323] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30])),"Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-109]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[388] = unkR[323] * LPRES__cp(&unkR[30]) * (unkR[244] - unkR[322]) ;
//[E-110]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[405] = _div( unkR[388] , unkR[323],"HeadLoss_Turb.f_in.W") ;
//[E-111]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[297] = unkR[351] + unkR[388] ;
//[E-112]  Pump_O.m.Power =  ZONE[2] (Pump_O.m.Power > 0) -(Gearbox.m_out.Power / Gearbox.eta)	  OTHERS -(Gearbox.m_out.Power * Gearbox.eta)
 if(m_branchZone[1]==0)
	unkR[295] = -(_div( unkR[297] , unkR[293],"Gearbox.eta")) ;
else unkR[295] = -(unkR[297] * unkR[293]) ;
//[E-113]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[391] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[244] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-114]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[392] = unkR[391] * cos(unkR[395] * 3.14159265358979/180.) ;
//[E-115]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[20] = _div( dyn[1] , dyn[2],"CombCha.phi") ;
//[E-116]  CombCha.OF = CombCha.OF_st / CombCha.phi
unkR[9] = _div( unkR[10] , dyn[2],"CombCha.phi") ;
//[E-117]  CombCha.W_O = CombCha.OF * CombCha.W_F
unkR[23] = unkR[9] * dyn[1] ;
//[E-118]  CombCha.W_O = HeadLoss_TO.f_in.W * (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[62] = _div( unkR[23] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-119]  CombCha.W_IO = HeadLoss_TO.f_in.W - CombCha.W_O
unkR[22] = unkR[62] - unkR[23] ;
//[E-120]  ThrustMonitor.g.W = CombCha.W_IO + CombCha.W_O + HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[181] = unkR[22] + unkR[23] + unkR[323] + dyn[4] ;
//[E-121]  Pump_O.tau = -Pump_O.m.Power / HeadLoss_TO.f_in.W
unkR[372] = _div( -unkR[295] , unkR[62],"HeadLoss_TO.f_in.W") ;
//[E-122]  FlowMeter_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid) + Pump_O.f_in.pt
unkR[290] = unkR[372] * unkR[366] * LPRES__rho(&unkR[63]) + unkR[317] ;
//[E-123]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[340] = _div( unkR[290] , unkR[60],"CombCha.f_O.p_c") ;
//[E-124]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[339] = _sqrt(_div( 2. * (_pow( unkR[340] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[339] = 1. ;
else unkR[339] = 0. ;
//[E-125]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[344] = _div( unkR[290] , unkR[341],"Injector_O.PR_sl") ;
}
else 
{
unkR[344] = 0. ;
}
//[E-126]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[344]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-127]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[289] = _div( _div( (unkR[290] - unkR[317]) , LPRES__rho(&unkR[63]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[366],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[315] ;
//[E-128]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[289] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[339] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[289] ;
}
//[E-129]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[62],_div( _div( unkR[336] * LPRES__FGAMMA(&unkR[63]) * unkR[290] , _sqrt(unkR[289] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[339] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[339],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[62],unkR[336] * unkR[338] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[290] - unkR[92]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-130]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[26] = _div( (unkR[23] * LPRES__cp(&unkR[122]) + dyn[1] * LPRES__cp(&unkR[93])) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-131]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-132]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[151] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-133]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-134]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[152] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-135]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-136]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[153] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-137]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-138]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[154] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-139]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-140]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[155] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-141]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-142]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[156] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-143]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-144]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[157] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-145]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-146]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[158] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-147]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-148]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[159] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-149]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-150]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[160] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-151]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-152]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[161] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-153]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-154]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[162] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-155]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-156]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[163] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-157]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-158]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[164] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-159]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-160]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[165] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-161]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-162]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[166] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-163]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-164]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[167] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-165]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-166]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[168] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-167]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-168]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[169] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-169]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-170]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[170] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-171]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-172]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[171] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-173]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-174]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[172] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-175]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-176]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[173] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-177]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-178]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[174] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-179]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-180]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[175] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-181]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-182]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[176] * (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-183]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[2] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[2], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-184]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[208] = _div( (unkR[177] * (unkR[23] + dyn[1]) + unkR[22] + unkR[21]) , unkR[181],"ThrustMonitor.g.W") ;
//[E-185]  ThrustMonitor.g.Tt = (CombCha.f_O.p_c * CombCha.A_th / ThrustMonitor.g.W * LPRES.FGAMMA(ThrustMonitor.g.fluid)) ** 2 / LPRES.R(ThrustMonitor.g.fluid)
unkR[180] = _div( _pow( (_div( unkR[60] * unkR[4] , unkR[181],"ThrustMonitor.g.W") * LPRES__FGAMMA(&unkR[182])) , 2.,"(CombCha.f_O.p_c * CombCha.A_th / ThrustMonitor.g.W * LPRES.FGAMMA(ThrustMonitor.g.fluid))**(2)" ) , LPRES__R(&unkR[182]),"LPRES.R(ThrustMonitor.g.fluid)") ;
//[E-186]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[24] = _div( _sqrt(LPRES__R(&unkR[182]) * unkR[180],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[182]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-187]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[182]) , (9. * LPRES__gamma(&unkR[182]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-188]  CombCha.T_aw = ThrustMonitor.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[14] = unkR[180] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[182]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[182]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-189]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[223] = 1.184e-07 * _pow( LPRES__M(&unkR[182]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-190]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[213] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[223] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[182]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[60] , unkR[24],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-191]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[1] = evalNormResidueInternal(1,unkR[211],unkR[213] * (unkR[14] - unkR[212]) * unkR[5]);
//[E-192]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[2] = evalNormResidueInternal(2,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[182]) , _sqrt(LPRES__gamma(&unkR[182]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[182]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[182]) + 1) , (2 * (LPRES__gamma(&unkR[182]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-193]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[330] = _sqrt(_div( 2. * (_pow( dyn[3] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[330] = 1. ;
else unkR[330] = 0. ;
//[E-194]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[301] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[330] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[301] ;
}
//[E-195]  (1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R * CombCha.T_in = LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( dyn[2] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( dyn[2] , unkR[10],"CombCha.OF_st")) * unkR[26]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-196]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-197]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[3] = evalNormResidueInternal(3,_div( (unkR[23] + dyn[1]) , unkR[181],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (unkR[180] - unkR[15]) + _div( unkR[22] , unkR[181],"ThrustMonitor.g.W") * unkR[91] * (unkR[180] - unkR[61]) + _div( unkR[21] , unkR[181],"ThrustMonitor.g.W") * unkR[58] * (unkR[180] - unkR[28]),0);
//[E-198]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[4] = evalNormResidueInternal(4,unkR[29],_div( _div( unkR[327] * LPRES__FGAMMA(&unkR[30]) * unkR[303] , _sqrt(unkR[301] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[330] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[330],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[4] = evalNormResidueInternal(4,unkR[29],unkR[327] * unkR[329] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[303] - unkR[59]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-199]  Turbine.m.N = Pump_F.U / Pump_F.r_m
unkR[296] = _div( dyn[5] , unkR[359],"Pump_F.r_m") ;
//[E-200]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[294] = _div( unkR[296] , unkR[292],"Gearbox.GR") ;
//[E-201]  Pump_O.U = Pump_O.m.N * Pump_O.r_m
unkR[363] = unkR[294] * unkR[371] ;
//[E-202]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
unkR[369] = _div( unkR[372] , _pow( unkR[363] , 2.,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2") ;
//[E-203]  Pump_O.phi = (1 - Pump_O.psi) / ((1 - Pump_O.psi_d) / Pump_O.phi_d)
unkR[367] = _div( (1. - unkR[369]) , (_div( (1. - unkR[370]) , unkR[368],"Pump_O.phi_d")),"(1 - Pump_O.psi_d) / Pump_O.phi_d") ;
//[E-204]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
res[5] = evalNormResidueInternal(5,unkR[367],_div( unkR[62] , (unkR[361] * unkR[363] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)"));
//[E-205]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[389] = unkR[296] * unkR[403] ;
//[E-206]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[401] = _div( unkR[405] , _pow( unkR[389] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-207]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[398] = _div( (unkR[401] + 1.) , (tan(unkR[395] * 3.14159265358979/180.) - tan(unkR[396] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-208]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[6] = evalNormResidueInternal(6,unkR[398],_div( unkR[392] , unkR[389],"Turbine.U"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition2& m= *DRLPRUEBAS__RL10_partition2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__RL10_partition2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition2::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__RL10_partition2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-210]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[182]) , (_pow( (_div( dyn[7] , unkR[60],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[182]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[182]) * (1. - _pow( (_div( dyn[7] , unkR[60],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[182]) - 1.) , LPRES__gamma(&unkR[182]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[182]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition2& m= *DRLPRUEBAS__RL10_partition2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__RL10_partition2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition2::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__RL10_partition2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-215]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[181] * _sqrt(LPRES__R(&unkR[182]) * unkR[180],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[182]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[182]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[182]) + 1)/2 , (LPRES__gamma(&unkR[182]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition2& m= *DRLPRUEBAS__RL10_partition2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__RL10_partition2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition2::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__RL10_partition2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[63]);
//[E-3]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[251]);
//[E-4]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[251]), &unkR[30]);
//[E-5]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[310] = unkR[309] - unkR[305] ;
//[E-6]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-7]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-8]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-9]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-10]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-11]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-12]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-13]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-14]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-15]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-16]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-17]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-19]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-20]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-22]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-43]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha.fluid_O[Comb_prod] = 0
unkR[148] = 0. ;
//[E-59]  CombCha.fluid_F[Comb_prod] = 0
unkR[119] = 0. ;
//[E-60]  CombCha.fluid_P[Comb_prod_M] =  IF[28] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = unkR[6] ;
}
else 
{
unkR[178] = 0. ;
}
//[E-61]  CombCha.fluid_P[Comb_prod_cp] =  IF[29] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[25] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-62]  CombCha.Q_comb_effective =  ZONE[1] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-63]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-64]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-65]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-66]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-67]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[317] = unkR[316] - unkR[312] ;
//[E-68]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[209] = unkR[178] ;
//[E-69]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[210] = unkR[179] ;
//[E-70]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[233] = _div( 2. * unkR[240] * unkR[241] , (unkR[240] + unkR[241]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-71]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[236] = _div( LPRES__visc(&unkR[251]) * LPRES__cp(&unkR[251]) , LPRES__cond(&unkR[251]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-72]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[231] = unkI[2] * 2. * (unkR[240] + unkR[241]) * unkR[234] ;
//[E-73]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-74]  Injector_F.PR_sl =  IF[30] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[331] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[331] = 0. ;
}
//[E-75]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[232] = _div( 1.3 * _pow( (unkR[240] * unkR[241]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[240] + unkR[241]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-76]  Injector_O.PR_sl =  IF[38] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[341] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[341] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,7,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-209]  CombCha.rho_trans = CombCha.f_O.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha.fluid_P)
unkR[221] = _div( _div( unkR[60] , unkR[180],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[151]),"LPRES.R(CombCha.fluid_P)") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-211]  FlowMeter_F.i.Data[1] = abs(HeadLoss_Junct.f_in.W)
unkR[288] = abs(unkR[29]) ;
//[E-212]  FlowMeter_O.i.Data[1] = abs(HeadLoss_TO.f_in.W)
unkR[291] = abs(unkR[62]) ;
//[E-213]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[228] = unkR[288] + unkR[291] ;
//[E-214]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[214] = unkR[24] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-216]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[382] = _div( unkR[180] , (1. + (LPRES__gamma(&unkR[182]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-217]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[385] = dyn[8] * _sqrt(LPRES__gamma(&unkR[182]) * LPRES__R(&unkR[182]) * unkR[382],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-218]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[384] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[182]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[182]) - 1.) , LPRES__gamma(&unkR[182]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-219]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[383] = LPRES__ISA_Pressure(unkR[348]) ;
//[E-220]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[227] = unkR[181] * unkR[385] + unkR[2] * (unkR[384] - unkR[383]) ;
//[E-221]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[225] = _div( unkR[227] , unkR[228],"ControlPanel.W_tot") ;
//[E-222]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[224] = _div( unkR[225] , unkR[24],"CombCha.c_star") ;
//[E-223]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[226] = unkR[225]/9.80665 ;
//[E-224]  CoolingJacket.rho_trans = SplitFrac.f_in.pt / Junction.f_in1.Tt / LPRES.R(HeadLoss_Turb.f_in.fluid)
unkR[283] = _div( _div( unkR[245] , unkR[244],"Junction.f_in1.Tt") , LPRES__R(&unkR[30]),"LPRES.R(HeadLoss_Turb.f_in.fluid)") ;
//[E-225]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * HeadLoss_Junct.f_in.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[328] = _div( _sqrt(unkR[301] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[303]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[328] = 0. ;
}
//[E-226]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE HeadLoss_Junct.f_in.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[335] = unkR[330] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[335] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[327] * unkR[329]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-227]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[332] = 0. ;
}
else 
{
unkR[332] = _div( LPRES__rho(&unkR[30]) * unkR[335] * unkR[329] * _sqrt(4. * unkR[327]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-228]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * HeadLoss_TO.f_in.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[337] = _div( _sqrt(unkR[289] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[290]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[337] = 0. ;
}
//[E-229]  Injector_O.v_ideal =  IF[44] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE HeadLoss_TO.f_in.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[345] = unkR[339] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[61],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[345] = _div( unkR[62] , (LPRES__rho(&unkR[63]) * unkR[336] * unkR[338]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-230]  Injector_O.Re =  IF[45] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[342] = 0. ;
}
else 
{
unkR[342] = _div( LPRES__rho(&unkR[63]) * unkR[345] * unkR[338] * _sqrt(4. * unkR[336]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-231]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[350] = _div( (unkR[280] - unkR[310]) , (9.80665 * LPRES__rho(&unkR[251])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-232]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[362] = _div( (unkR[290] - unkR[317]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-233]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[229] = unkR[227] ;
//[E-234]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[230] = unkR[288] + unkR[291] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__RL10_partition2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[251])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[251])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[63])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[182])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[384] , unkR[383],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[30])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__RL10_partition2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[295]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= dyn[3] - unkR[331]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= dyn[3] - unkR[331]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[340] - unkR[341]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[340] - unkR[341]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__RL10_partition2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__RL10_partition2::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__RL10_partition2::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__RL10_partition2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__RL10_partition2::initDelays()
{
}


bool DRLPRUEBAS__RL10_partition2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__RL10_partition2 = 97036;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__RL10_partition2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__RL10_partition2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__RL10_partition2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__RL10_partition2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__RL10_partition2;
return true;
}



bool DRLPRUEBAS__RL10_partition2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__RL10_partition2 = 460;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__RL10_partition2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__RL10_partition2[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__RL10_partition2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__RL10_partition2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__RL10_partition2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__RL10_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__RL10_partition2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__RL10_partition2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__RL10_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__RL10_partition2(name,dirInstall);
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
	sprintf(partitionName,"%s","partition2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+r+l10.partition2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

