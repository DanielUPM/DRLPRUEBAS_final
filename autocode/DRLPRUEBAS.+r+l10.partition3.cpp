//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__RL10_partition3_CPP
#define DRLPRUEBAS__RL10_partition3_CPP

#include "DRLPRUEBAS.+r+l10.partition3.h"

DRLPRUEBAS__RL10_partition3* DRLPRUEBAS__RL10_partition3::s_current= NULL;

DRLPRUEBAS__RL10_partition3::DRLPRUEBAS__RL10_partition3(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "RL10";
m_infoPartitionName = "partition3";
m_infoModelName = "DRLPRUEBAS__RL10_partition3";
m_infoModelFileName = "DRLPRUEBAS.+r+l10.partition3";
m_infoModelFileNameExtra = "+r+l10.partition3";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 12:56:23.650000";
m_infoPartitionDate = "29/06/2018 13:04:11.104000";
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
static double tmp_dynInit[9]={ 1, 1, 1, 1, 1, 1, 1, 100, 100 } ;
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
		1, 1, 0, 1, 0, 0, 0, 0, 10, 3275010, 5000000, 1, 0, 0.032, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 3180.93, 0, 0.00100103471, 
		0.00813274823, 100000, 0, 1, 1, 0, 0, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 19.05, 0.567, 0, 5e-05, 0.000583419169, 0.032, 0, 0, 
		1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 
		3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 
		0.1, 1, 1, 1, 1, 1200000, 0.00178349971, 0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 
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
void DRLPRUEBAS__RL10_partition3::initInternalModels()
{
}

void DRLPRUEBAS__RL10_partition3::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__RL10_partition3::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_partition3::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__RL10_partition3::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__RL10_partition3::LPRES__State(double fluid[])
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


double DRLPRUEBAS__RL10_partition3::LPRES__M(double fluid[])
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


double DRLPRUEBAS__RL10_partition3::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__RL10_partition3::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__RL10_partition3::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_partition3::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__RL10_partition3::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__RL10_partition3::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__RL10_partition3::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__RL10_partition3::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__RL10_partition3::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__RL10_partition3::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__RL10_partition3::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__RL10_partition3::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__RL10_partition3::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__RL10_partition3::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[181]) ;
	unkI[0] = 1 ;
	dyn[2] = 1. ;
	dyn[1] = unkR[19] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
	unkR[214] = _div( 1. , unkR[216],"CombCha.mfr_ch") ;
	unkR[215] = _div( 1. , (unkR[216] * unkR[17]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[250]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[63]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[250]), &unkR[30]) ;
	unkR[238] = 500. ;
	unkR[246] = _div( 1. , unkR[280],"CoolingJacket.mfr_ch") ;
	unkR[247] = _div( 1. , (unkR[280] * unkR[237]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Pump_F.Pump,0)
	dyn[4] = unkR[352] ;
  // init(Pump_O.Pump,0)
	unkR[363] = unkR[364] ;
  // init(Turbine.Turbine,0)
	dyn[6] = unkR[387] ;
	unkR[389] = unkR[390] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__RL10_partition3::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-77]  HeadLoss_Junct.f_in.W = CombCha.W_F / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[29] = _div( dyn[1] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-78]  CoolingJacket.v = HeadLoss_Junct.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[286] = _div( _div( unkR[29] , (unkR[239] * unkR[240] * LPRES__rho(&unkR[250])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-79]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[236] = _div( LPRES__rho(&unkR[250]) * unkR[286] * unkR[232] , LPRES__visc(&unkR[250]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-80]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[234] = 0.027 * _pow( unkR[236] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[235] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-81]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[245] = _div( unkR[234] * LPRES__cond(&unkR[250]) , unkR[232],"CoolingJacket.D_hy") ;
//[E-82]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[242] = LPRES__hdc_fric(unkR[231], unkR[283], unkR[236]) ;
//[E-83]  Pump_F.phi = HeadLoss_Junct.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[355] = _div( unkR[29] , (unkR[349] * dyn[4] * LPRES__rho(&unkR[250])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-84]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi
unkR[357] = 1. - _div( (1. - unkR[358]) , unkR[356],"Pump_F.phi_d") * unkR[355] ;
//[E-85]  Pump_F.tau = Pump_F.psi * Pump_F.U ** 2
unkR[360] = unkR[357] * _pow( dyn[4] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-86]  CoolingJacket.l.pt = Pump_F.tau * Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid) + Pump_F.f_in.pt
unkR[279] = unkR[360] * unkR[354] * LPRES__rho(&unkR[250]) + unkR[309] ;
//[E-87]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[244] = unkR[279] - _div( unkR[242] * unkR[233] , unkR[231],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[250]) * _pow( unkR[286] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-88]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[379] = unkR[244] * unkR[378] ;
//[E-89]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[376] = unkR[244] * unkR[378] ;
//[E-90]  Junction.f_in1.pt = Regulator_F.f_in.pt - Regulator_F.dp
unkR[347] = unkR[376] - unkR[373] ;
//[E-91]  HeadLoss_Junct.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[301] = unkR[347] * unkR[346] ;
//[E-92]  Junction.f_in2.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[324] = _div( unkR[301] , unkR[346],"Junction.TPL") ;
//[E-93]  HeadLoss_Turb.f_in.pt = Junction.f_in2.pt + HeadLoss_Turb.dp
unkR[323] = unkR[324] + unkR[318] ;
//[E-94]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[394] = 1. - unkR[397] * (1. - _pow( (_div( unkR[323] , unkR[379],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-95]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[302] = unkR[301] - unkR[297] ;
//[E-96]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[334] = _div( unkR[302] , unkR[331],"Injector_F.PR_sl") ;
}
else 
{
unkR[334] = 0. ;
}
//[E-97]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[249] = _div( _div( (unkR[279] - unkR[309]) , LPRES__rho(&unkR[250]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[354],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[250]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[307] ;
//[E-98]  Pump_F.m.Power = -(Pump_F.tau * HeadLoss_Junct.f_in.W)
unkR[351] = -(unkR[360] * unkR[29]) ;
//[E-99]  HeadLoss_Turb.f_in.W = HeadLoss_Junct.f_in.W - Junction.f_in1.W
unkR[322] = unkR[29] - dyn[3] ;
//[E-100]  CombCha.W_IF = HeadLoss_Turb.f_in.W + Junction.f_in1.W - CombCha.W_F
unkR[21] = unkR[322] + dyn[3] - dyn[1] ;
//[E-101]  Junction.f_in1.Tt = (sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) * Turbine.f_in.pt * Turbine.A_in / HeadLoss_Turb.f_in.W) ** 2 / LPRES.R(HeadLoss_Turb.f_in.fluid)
unkR[243] = _div( _pow( (_div( _sqrt(LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[395] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[30]) + 1.)/2. , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[379] * unkR[386] , unkR[322],"HeadLoss_Turb.f_in.W")) , 2.,"(sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) * Turbine.f_in.pt * Turbine.A_in / HeadLoss_Turb.f_in.W)**(2)" ) , LPRES__R(&unkR[30]),"LPRES.R(HeadLoss_Turb.f_in.fluid)") ;
//[E-102]  CoolingJacket.h.Q = -(LPRES.cp(HeadLoss_Turb.f_in.fluid) * (HeadLoss_Junct.f_in.W * CoolingJacket.l.Tt - HeadLoss_Junct.f_in.W * Junction.f_in1.Tt))
unkR[210] = -(LPRES__cp(&unkR[30]) * (unkR[29] * unkR[249] - unkR[29] * unkR[243])) ;
//[E-103]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + CoolingJacket.l.Tt
unkR[238] = _div( _div( unkR[210] , unkR[230],"CoolingJacket.A_wet_cooling") , unkR[245],"CoolingJacket.h_l") + unkR[249] ;
//[E-104]  CoolingJacket.h.T = CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w) + CoolingJacket.T_w_cold
unkR[211] = _div( _div( unkR[210] , unkR[5],"CombCha.A_wet") , (_div( unkR[248] , unkR[284],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[238] ;
//[E-105]  HeadLoss_Turb.f_in.Tt = Turbine.alpha * Junction.f_in1.Tt
unkR[321] = unkR[394] * unkR[243] ;
//[E-106]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[300] = _div( (-(_div( dyn[3] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[243]) - _div( unkR[322] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[321]) , (_div( dyn[3] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) + _div( unkR[322] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30])),"Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-107]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[388] = unkR[322] * LPRES__cp(&unkR[30]) * (unkR[243] - unkR[321]) ;
//[E-108]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[405] = _div( unkR[388] , unkR[322],"HeadLoss_Turb.f_in.W") ;
//[E-109]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[296] = unkR[351] + unkR[388] ;
//[E-110]  Pump_O.m.Power =  ZONE[2] (Pump_O.m.Power > 0) -(Gearbox.m_out.Power / Gearbox.eta)	  OTHERS -(Gearbox.m_out.Power * Gearbox.eta)
 if(m_branchZone[1]==0)
	unkR[294] = -(_div( unkR[296] , unkR[292],"Gearbox.eta")) ;
else unkR[294] = -(unkR[296] * unkR[292]) ;
//[E-111]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[391] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[243] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-112]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[392] = unkR[391] * cos(unkR[395] * 3.14159265358979/180.) ;
//[E-113]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[20] = _div( dyn[1] , dyn[2],"CombCha.phi") ;
//[E-114]  CombCha.OF = CombCha.OF_st / CombCha.phi
unkR[9] = _div( unkR[10] , dyn[2],"CombCha.phi") ;
//[E-115]  CombCha.W_O = CombCha.OF * CombCha.W_F
unkR[23] = unkR[9] * dyn[1] ;
//[E-116]  HeadLoss_TO.f_in.W = CombCha.W_O / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[62] = _div( unkR[23] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-117]  CombCha.W_IO = HeadLoss_TO.f_in.W - CombCha.W_O
unkR[22] = unkR[62] - unkR[23] ;
//[E-118]  ThrustMonitor.g.W = CombCha.W_IO + CombCha.W_O + HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[180] = unkR[22] + unkR[23] + unkR[322] + dyn[3] ;
//[E-119]  Pump_O.tau = -Pump_O.m.Power / HeadLoss_TO.f_in.W
unkR[372] = _div( -unkR[294] , unkR[62],"HeadLoss_TO.f_in.W") ;
//[E-120]  FlowMeter_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid) + Pump_O.f_in.pt
unkR[289] = unkR[372] * unkR[366] * LPRES__rho(&unkR[63]) + unkR[316] ;
//[E-121]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[344] = _div( unkR[289] , unkR[341],"Injector_O.PR_sl") ;
}
else 
{
unkR[344] = 0. ;
}
//[E-122]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[288] = _div( _div( (unkR[289] - unkR[316]) , LPRES__rho(&unkR[63]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[366],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[314] ;
//[E-123]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[26] = _div( (unkR[23] * LPRES__cp(&unkR[122]) + dyn[1] * LPRES__cp(&unkR[93])) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-124]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-125]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[151] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-126]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-127]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[152] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-128]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-129]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[153] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-130]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-131]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[154] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-132]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-133]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[155] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-134]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-135]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-136]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-137]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-138]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-139]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-140]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-141]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-142]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-143]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-144]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-145]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-146]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-147]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-148]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-149]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-150]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-151]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-152]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-153]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-154]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-155]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-156]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-157]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-158]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-159]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-160]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-161]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-162]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-163]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-164]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-165]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-166]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-167]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-168]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-169]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-170]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-171]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-172]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-173]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[175] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-174]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-175]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[176] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-176]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[2] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[2], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-177]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[177] * (unkR[23] + dyn[1]) + unkR[22] + unkR[21]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-178]  CombCha.f_O.p_c = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CombCha.A_th
unkR[60] = _div( unkR[180] * _div( _sqrt(LPRES__R(&unkR[181]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-179]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[330] = _div( unkR[302] , unkR[60],"CombCha.f_O.p_c") ;
//[E-180]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[329] = _sqrt(_div( 2. * (_pow( unkR[330] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[329] = 1. ;
else unkR[329] = 0. ;
//[E-181]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[300] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[329] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[300] ;
}
//[E-182]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[334]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-183]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[29],_div( _div( unkR[326] * LPRES__FGAMMA(&unkR[30]) * unkR[302] , _sqrt(unkR[300] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[329] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[329],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[29],unkR[326] * unkR[328] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[302] - unkR[59]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-184]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[340] = _div( unkR[289] , unkR[60],"CombCha.f_O.p_c") ;
//[E-185]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[339] = _sqrt(_div( 2. * (_pow( unkR[340] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[339] = 1. ;
else unkR[339] = 0. ;
//[E-186]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[288] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[339] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[288] ;
}
//[E-187]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( dyn[2] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( dyn[2] , unkR[10],"CombCha.OF_st")) * unkR[26]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-188]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-189]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[1] = evalNormResidueInternal(1,_div( (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (dyn[5] - unkR[15]) + _div( unkR[22] , unkR[180],"ThrustMonitor.g.W") * unkR[91] * (dyn[5] - unkR[61]) + _div( unkR[21] , unkR[180],"ThrustMonitor.g.W") * unkR[58] * (dyn[5] - unkR[28]),0);
//[E-190]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[344]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-191]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[2] = evalNormResidueInternal(2,unkR[62],_div( _div( unkR[336] * LPRES__FGAMMA(&unkR[63]) * unkR[289] , _sqrt(unkR[288] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[339] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[339],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[2] = evalNormResidueInternal(2,unkR[62],unkR[336] * unkR[338] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[289] - unkR[92]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-192]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[24] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-193]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-194]  CombCha.T_aw = ThrustMonitor.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[14] = dyn[5] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-195]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-196]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[60] , unkR[24],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-197]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[3] = evalNormResidueInternal(3,unkR[210],unkR[212] * (unkR[14] - unkR[211]) * unkR[5]);
//[E-198]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-199]  Turbine.m.N = Pump_F.U / Pump_F.r_m
unkR[295] = _div( dyn[4] , unkR[359],"Pump_F.r_m") ;
//[E-200]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[293] = _div( unkR[295] , unkR[291],"Gearbox.GR") ;
//[E-201]  Pump_O.U = Pump_O.m.N * Pump_O.r_m
unkR[363] = unkR[293] * unkR[371] ;
//[E-202]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
unkR[369] = _div( unkR[372] , _pow( unkR[363] , 2.,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2") ;
//[E-203]  Pump_O.phi = (1 - Pump_O.psi) / ((1 - Pump_O.psi_d) / Pump_O.phi_d)
unkR[367] = _div( (1. - unkR[369]) , (_div( (1. - unkR[370]) , unkR[368],"Pump_O.phi_d")),"(1 - Pump_O.psi_d) / Pump_O.phi_d") ;
//[E-204]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
res[5] = evalNormResidueInternal(5,unkR[367],_div( unkR[62] , (unkR[361] * unkR[363] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)"));
//[E-205]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[389] = unkR[295] * unkR[403] ;
//[E-206]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[401] = _div( unkR[405] , _pow( unkR[389] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-207]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[398] = _div( (unkR[401] + 1.) , (tan(unkR[395] * 3.14159265358979/180.) - tan(unkR[396] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-208]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[6] = evalNormResidueInternal(6,unkR[398],_div( unkR[392] , unkR[389],"Turbine.U"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition3::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition3& m= *DRLPRUEBAS__RL10_partition3::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__RL10_partition3::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition3::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__RL10_partition3::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-210]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[7] , unkR[60],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[7] , unkR[60],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition3::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition3& m= *DRLPRUEBAS__RL10_partition3::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__RL10_partition3::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition3::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__RL10_partition3::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-215]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[180] * _sqrt(LPRES__R(&unkR[181]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__RL10_partition3::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_partition3& m= *DRLPRUEBAS__RL10_partition3::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__RL10_partition3::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_partition3::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__RL10_partition3::fres( double *_time, double dyn[], double der[], double res[] )
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
LPRES__Init_fluid(unkI[3], &unkR[250]);
//[E-4]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[250]), &unkR[30]);
//[E-5]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[309] = unkR[308] - unkR[304] ;
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
unkR[316] = unkR[315] - unkR[311] ;
//[E-68]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[208] = unkR[178] ;
//[E-69]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[209] = unkR[179] ;
//[E-70]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[232] = _div( 2. * unkR[239] * unkR[240] , (unkR[239] + unkR[240]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-71]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[235] = _div( LPRES__visc(&unkR[250]) * LPRES__cp(&unkR[250]) , LPRES__cond(&unkR[250]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-72]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[230] = unkI[2] * 2. * (unkR[239] + unkR[240]) * unkR[233] ;
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
unkR[231] = _div( 1.3 * _pow( (unkR[239] * unkR[240]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[239] + unkR[240]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
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
unkR[220] = _div( _div( unkR[60] , dyn[5],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[151]),"LPRES.R(CombCha.fluid_P)") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-211]  FlowMeter_F.i.Data[1] = abs(HeadLoss_Junct.f_in.W)
unkR[287] = abs(unkR[29]) ;
//[E-212]  FlowMeter_O.i.Data[1] = abs(HeadLoss_TO.f_in.W)
unkR[290] = abs(unkR[62]) ;
//[E-213]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[227] = unkR[287] + unkR[290] ;
//[E-214]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[213] = unkR[24] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-216]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[382] = _div( dyn[5] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-217]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[385] = dyn[8] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[382],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-218]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[384] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-219]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[383] = LPRES__ISA_Pressure(unkR[348]) ;
//[E-220]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[226] = unkR[180] * unkR[385] + unkR[2] * (unkR[384] - unkR[383]) ;
//[E-221]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[224] = _div( unkR[226] , unkR[227],"ControlPanel.W_tot") ;
//[E-222]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[223] = _div( unkR[224] , unkR[24],"CombCha.c_star") ;
//[E-223]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[225] = unkR[224]/9.80665 ;
//[E-224]  CoolingJacket.rho_trans = SplitFrac.f_in.pt / Junction.f_in1.Tt / LPRES.R(HeadLoss_Turb.f_in.fluid)
unkR[282] = _div( _div( unkR[244] , unkR[243],"Junction.f_in1.Tt") , LPRES__R(&unkR[30]),"LPRES.R(HeadLoss_Turb.f_in.fluid)") ;
//[E-225]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * HeadLoss_Junct.f_in.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[327] = _div( _sqrt(unkR[300] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[302]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[327] = 0. ;
}
//[E-226]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE HeadLoss_Junct.f_in.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[335] = unkR[329] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[335] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[326] * unkR[328]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-227]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[332] = 0. ;
}
else 
{
unkR[332] = _div( LPRES__rho(&unkR[30]) * unkR[335] * unkR[328] * _sqrt(4. * unkR[326]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-228]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * HeadLoss_TO.f_in.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[337] = _div( _sqrt(unkR[288] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[289]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
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
unkR[350] = _div( (unkR[279] - unkR[309]) , (9.80665 * LPRES__rho(&unkR[250])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-232]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[362] = _div( (unkR[289] - unkR[316]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-233]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[228] = unkR[226] ;
//[E-234]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[229] = unkR[287] + unkR[290] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__RL10_partition3::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[250])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[250])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[63])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[384] , unkR[383],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[30])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__RL10_partition3::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[294]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= unkR[330] - unkR[331]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= unkR[330] - unkR[331]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[340] - unkR[341]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[340] - unkR[341]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__RL10_partition3::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__RL10_partition3::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__RL10_partition3::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__RL10_partition3::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__RL10_partition3::initDelays()
{
}


bool DRLPRUEBAS__RL10_partition3::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__RL10_partition3 = 97040;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__RL10_partition3 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__RL10_partition3[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__RL10_partition3;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__RL10_partition3;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__RL10_partition3;
return true;
}



bool DRLPRUEBAS__RL10_partition3::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__RL10_partition3 = 460;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__RL10_partition3 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__RL10_partition3[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__RL10_partition3;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__RL10_partition3;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__RL10_partition3;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__RL10_partition3(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__RL10_partition3(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__RL10_partition3(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__RL10_partition3(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__RL10_partition3(name,dirInstall);
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
	sprintf(partitionName,"%s","partition3");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+r+l10.partition3");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

