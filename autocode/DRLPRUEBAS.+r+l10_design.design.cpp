//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__RL10_design_design_CPP
#define DRLPRUEBAS__RL10_design_design_CPP

#include "DRLPRUEBAS.+r+l10_design.design.h"

DRLPRUEBAS__RL10_design_design* DRLPRUEBAS__RL10_design_design::s_current= NULL;

DRLPRUEBAS__RL10_design_design::DRLPRUEBAS__RL10_design_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "RL10_design";
m_infoPartitionName = "design";
m_infoModelName = "DRLPRUEBAS__RL10_design_design";
m_infoModelFileName = "DRLPRUEBAS.+r+l10_design.design";
m_infoModelFileNameExtra = "+r+l10_design.design";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 10:43:50.627000";
m_infoPartitionDate = "28/06/2018 10:45:22.414000";
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
n_dyn=8;
dyn= new double[8] ;
static double tmp_dynInit[8]={ 1, 1, 1, 1, 1, 1, 100, 100 } ;
dynInit= new double[8];
dcopy(8,dynInit,tmp_dynInit);


n_der=0;
der= new double[8] ;
static double tmp_derInit[8]={ 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[8];
dcopy(8,derInit,tmp_derInit);


res= new double[8] ;
ldr= new double[8] ;
boxDyn= new double[8] ;
boxDer= new double[8] ;

n_unkR=413;
unkR= new double[413] ;
static double tmp_unkRInit[413]={ 56.88798558, 14, 1, 0, 0.05, 0, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 
		0, 4000, 3000, 0, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 2.70069069, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3275010, 1, 
		16.3526821, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 10, 5000000, 0, 1, 0, 
		0.032, 0, 0, 0, 0, 1.475994, 0, 0, 0, 3180.93, 0, 0.00100103471, 0.00813274823, 100000, 0, 1, 
		1, 0, 0, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 19.05, 0.567, 0, 5e-05, 0.000583419169, 0.032, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 1, 1, 0, 2.43566574, 1, 1, 0, 1, 0, 5502.016, 1500, 0.1, 98.05556, 
		320606.2, 1, 1200000, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 250000, 1500, 0.1, 1, 1, 1, 
		1200000, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 0, 0.05, 0, 0, 0.5, 0, 
		10, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0.01, 0, 0, 0, 500, 
		7358000, 0.573907002, 0.0656, 0, 0.2533, 0.05, 0, 0, 0.01, 0, 0, 500, 4282000, 0.6508, 0.03027, 0, 
		0.05393, 0.05, 0, 0, 100000, 0, 1500, 0.1, 1, 1200000, 124105.6, 1500, 0.1, 1, 1200000, 1, 
		1, 1, 1, 0, 0, 0, 0, 0.005, 0, 1, 0, 0, 10000, 0, 0, 5, 
		0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[413];
dcopy(413,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 1, 1, 8, 1, 1, 1, 1, 1, 6, 6, 6, 1, 1, 1, 1, 
		1, 6, 2, 2, 1, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 21;
n_neld= 0;
m_numBoxes= 7;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__RL10_design_design::initInternalModels()
{
}

void DRLPRUEBAS__RL10_design_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


int DRLPRUEBAS__RL10_design_design::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi3;
	int _vi4;

	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[7]) ) {
	_vi4 = setofElem(&typ[7], _vi3) ;
	if( fluid[_vi4-1] != 0 ) {
	fluid_name = _vi4 ;
	}
	_vi3 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int DRLPRUEBAS__RL10_design_design::LPRES__State(double fluid[])
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


double DRLPRUEBAS__RL10_design_design::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi5;
	int _vi6;
	double _vr1;

	_vr1 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[7]) ) {
	_vi6 = setofElem(&typ[7], _vi5) ;
	_vr1 += Chem_cp[_vi5-1] * fluid[_vi6-1] ;
	_vi5 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__M(double fluid[])
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


double DRLPRUEBAS__RL10_design_design::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__RL10_design_design::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi10;
	int _vi9;
	double _vr3;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",233,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr3 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[6]) ) {
	_vi10 = setofElem(&typ[6], _vi9) ;
	_vr3 += Chem_rho[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__RL10_design_design::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__RL10_design_design::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__RL10_design_design::LPRES__cond(double fluid[])
{
	// Local variables:
	double Chem_cond[16] = { 0.149,0.131,0.353,0.294,0.1,0.137,0.15,0.117,0.488,0.035,0.246,0.11,0.17,0.12,0.607,0.145 };
	int _vi11;
	int _vi12;
	double _vr4;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",253,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[6]) ) {
	_vi12 = setofElem(&typ[6], _vi11) ;
	_vr4 += Chem_cond[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__RL10_design_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__RL10_design_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__RL10_design_design::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__RL10_design_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__RL10_design_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Tank_LOX.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[65]) ;
  // init(Tank_LH2.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[246]) ;
  // init(CC.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CC.","CC.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[184]) ;
	unkI[0] = 1 ;
	unkR[221] = 1. ;
	unkR[20] = unkR[21] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
	unkR[217] = _div( 1. , unkR[219],"CC.mfr_ch") ;
	unkR[218] = _div( 1. , (unkR[219] * unkR[18]),"CC.mfr_ch * CC.T_ch") ;
  // init(CJ.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[246]), &unkR[32]) ;
	unkR[234] = 500. ;
	unkR[242] = _div( 1. , unkR[276],"CJ.mfr_ch") ;
	unkR[243] = _div( 1. , (unkR[276] * unkR[233]),"CJ.mfr_ch * CJ.T_ch") ;
  // init(Turbine.Turbine,0)
	unkR[394] = unkR[393] ;
	dyn[3] = unkR[396] ;
  // init(Pump_LOX.Pump,0)
	dyn[4] = unkR[363] ;
  // init(Pump_LH2.Pump,0)
	dyn[5] = unkR[351] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__RL10_design_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-142]  CC.AR_r = 1 / CC.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CC.M_r") * LPRES__FGAMMA(&unkR[184]) , _sqrt(LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[184]) - 1) * _pow( dyn[0] , 2,"(CC.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[184]) + 1) , (2 * (LPRES__gamma(&unkR[184]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__RL10_design_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__RL10_design_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  Junct.f_in1.W = Inj_LH2.W - Junct.f_in2.W
unkR[343] = unkR[31] - dyn[2] ;
//[E-150]  HeadLoss_2.f_in.W = Junct.f_in1.W + Junct.f_in2.W
unkR[239] = unkR[343] + dyn[2] ;
//[E-151]  Pump_LH2.m.Power = -(Pump_LH2.tau * HeadLoss_2.f_in.W)
unkR[350] = -(unkR[359] * unkR[239]) ;
//[E-152]  Turbine.m.Power = Gearbox.m_out.Power - Pump_LH2.m.Power
unkR[395] = unkR[299] - unkR[350] ;
//[E-153]  Junct.f_in1.Tt = Junct.f_in2.Tt - Turbine.m.Power / (Junct.f_in1.W * LPRES.cp(HeadLoss_3.f_in.fluid))
unkR[342] = dyn[1] - _div( unkR[395] , (unkR[343] * LPRES__cp(&unkR[32])),"Junct.f_in1.W * LPRES.cp(HeadLoss_3.f_in.fluid)") ;
//[E-154]  Turbine.alpha = Junct.f_in1.Tt / Junct.f_in2.Tt
unkR[400] = _div( unkR[342] , dyn[1],"Junct.f_in2.Tt") ;
//[E-155]  HeadLoss_3.f_in.Tt = (-(Junct.f_in1.W / Inj_LH2.W * LPRES.cp(HeadLoss_3.f_in.fluid) * -Junct.f_in1.Tt) - Junct.f_in2.W / Inj_LH2.W * LPRES.cp(HeadLoss_3.f_in.fluid) * -Junct.f_in2.Tt) / (Junct.f_in1.W / Inj_LH2.W * LPRES.cp(HeadLoss_3.f_in.fluid) + Junct.f_in2.W / Inj_LH2.W * LPRES.cp(HeadLoss_3.f_in.fluid))
unkR[317] = _div( (-(_div( unkR[343] , unkR[31],"Inj_LH2.W") * LPRES__cp(&unkR[32]) * -unkR[342]) - _div( dyn[2] , unkR[31],"Inj_LH2.W") * LPRES__cp(&unkR[32]) * -dyn[1]) , (_div( unkR[343] , unkR[31],"Inj_LH2.W") * LPRES__cp(&unkR[32]) + _div( dyn[2] , unkR[31],"Inj_LH2.W") * LPRES__cp(&unkR[32])),"Junct.f_in1.W / Inj_LH2.W * LPRES.cp(HeadLoss_3.f_in.fluid) + Junct.f_in2.W / Inj_LH2.W * LPRES.cp(HeadLoss_3.f_in.fluid)") ;
//[E-156]  CJ.h.Q = -(LPRES.cp(HeadLoss_3.f_in.fluid) * (HeadLoss_2.f_in.W * CJ.l.Tt - HeadLoss_2.f_in.W * Junct.f_in2.Tt))
unkR[213] = -(LPRES__cp(&unkR[32]) * (unkR[239] * unkR[245] - unkR[239] * dyn[1])) ;
//[E-157]  CJ.v = HeadLoss_2.f_in.W / (CJ.a * CJ.b * LPRES.rho(HeadLoss_2.f_in.fluid)) / CJ.N
unkR[282] = _div( _div( unkR[239] , (unkR[235] * unkR[236] * LPRES__rho(&unkR[246])),"CJ.a * CJ.b * LPRES.rho(HeadLoss_2.f_in.fluid)") , unkI[2],"CJ.N") ;
//[E-158]  CJ.Re = LPRES.rho(HeadLoss_2.f_in.fluid) * CJ.v * CJ.D_hy / LPRES.visc(HeadLoss_2.f_in.fluid)
unkR[232] = _div( LPRES__rho(&unkR[246]) * unkR[282] * unkR[228] , LPRES__visc(&unkR[246]),"LPRES.visc(HeadLoss_2.f_in.fluid)") ;
//[E-159]  CJ.Nu = 0.027 * CJ.Re ** 0.8 * CJ.Pr ** 0.33
unkR[230] = 0.027 * _pow( unkR[232] , 0.8,"(CJ.Re)**(0.8)" ) * _pow( unkR[231] , 0.33,"(CJ.Pr)**(0.33)" ) ;
//[E-160]  CJ.h_l = CJ.Nu * LPRES.cond(HeadLoss_2.f_in.fluid) / CJ.D_hy
unkR[241] = _div( unkR[230] * LPRES__cond(&unkR[246]) , unkR[228],"CJ.D_hy") ;
//[E-161]  CJ.T_w_cold = CJ.h.Q / CJ.A_wet_cooling / CJ.h_l + CJ.l.Tt
unkR[234] = _div( _div( unkR[213] , unkR[226],"CJ.A_wet_cooling") , unkR[241],"CJ.h_l") + unkR[245] ;
//[E-162]  CJ.h.T = CJ.h.Q / CC.A_wet / (CJ.k_w / CJ.t_w) + CJ.T_w_cold
unkR[214] = _div( _div( unkR[213] , unkR[6],"CC.A_wet") , (_div( unkR[244] , unkR[280],"CJ.t_w")),"CJ.k_w / CJ.t_w") + unkR[234] ;
//[E-163]  CJ.f = LPRES.hdc_fric(CJ.D_eq, CJ.rug, CJ.Re)
unkR[238] = LPRES__hdc_fric(unkR[227], unkR[279], unkR[232]) ;
//[E-164]  SF.f_in.pt = CJ.l.pt - CJ.f * CJ.L / CJ.D_eq * 0.5 * LPRES.rho(HeadLoss_2.f_in.fluid) * CJ.v ** 2
unkR[240] = unkR[275] - _div( unkR[238] * unkR[229] , unkR[227],"CJ.D_eq") * 0.5 * LPRES__rho(&unkR[246]) * _pow( unkR[282] , 2.,"(CJ.v)**(2)" ) ;
//[E-165]  Turbine.f_in.pt = SF.f_in.pt * SF.TPL
unkR[384] = unkR[240] * unkR[383] ;
//[E-166]  Regulator_2.f_in.pt = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid))) * Turbine.f_in.pt
unkR[381] = _pow( (1. - _div( (1. - unkR[400]) , unkR[403],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[32]) - 1.) , LPRES__gamma(&unkR[32]),"LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)))" ) * unkR[384] ;
//[E-167]  Turbine.pi = Turbine.f_in.pt / Regulator_2.f_in.pt
res[1] = evalNormResidueInternal(1,unkR[406],_div( unkR[384] , unkR[381],"Regulator_2.f_in.pt"));
//[E-168]  Junct.f_in1.pt = Regulator_2.f_in.pt - Regulator_2.dp
unkR[344] = unkR[381] - unkR[378] ;
//[E-169]  HeadLoss_3.f_in.pt = Junct.f_in1.pt * Junct.TPL
unkR[318] = unkR[344] * unkR[341] ;
//[E-170]  Inj_LH2.f_in.pt = HeadLoss_3.f_in.pt - HeadLoss_3.dp
unkR[319] = unkR[318] - unkR[314] ;
//[E-171]  Inj_LH2.PR = Inj_LH2.f_in.pt / CC.p_c
unkR[326] = _div( unkR[319] , unkR[62],"CC.p_c") ;
//[E-172]  Inj_LH2.M_out =  ZONE[3] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl) sqrt(2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[325] = _sqrt(_div( 2. * (_pow( unkR[326] , (_div( (LPRES__gamma(&unkR[32]) - 1.) , LPRES__gamma(&unkR[32]),"LPRES.gamma(HeadLoss_3.f_in.fluid)")),"(Inj_LH2.PR)**((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[32]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1"),"2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[325] = 1. ;
else unkR[325] = 0. ;
//[E-173]  CC.f_F.T =  IF[34] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) HeadLoss_3.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Inj_LH2.M_out ** 2)	 ELSE HeadLoss_3.f_in.Tt
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[30] = _div( unkR[317] , (1. + (LPRES__gamma(&unkR[32]) - 1.)/2. * _pow( unkR[325] , 2.,"(Inj_LH2.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Inj_LH2.M_out ** 2") ;
}
else 
{
unkR[30] = unkR[317] ;
}
//[E-174]  CC.T_in = (LPRES.cp(CC.fluid_O) * CC.f_O.T + CC.phi / CC.OF_st * LPRES.cp(CC.fluid_F) * CC.f_F.T) / ((1 + CC.phi / CC.OF_st) * CC.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[124]) * unkR[63] + _div( unkR[221] , unkR[11],"CC.OF_st") * LPRES__cp(&unkR[95]) * unkR[30]) , ((1. + _div( unkR[221] , unkR[11],"CC.OF_st")) * unkR[28]),"(1 + CC.phi / CC.OF_st) * CC.cp_R") ;
//[E-175]  CC.T_c = (CC.eta_d * CC.Q_comb_effective / ((1 + CC.OF) / MATH.min(CC.OF, CC.OF_st)) + CC.cp_R * (CC.T_in - 298.15)) / LPRES.cp(CC.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[29] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CC.OF, CC.OF_st)")),"(1 + CC.OF) / MATH.min(CC.OF, CC.OF_st)") + unkR[28] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[153]),"LPRES.cp(CC.fluid_P)") + 298.15 ;
//[E-176]  ThrustMonitor.g.Tt = (-((CC.W_O + CC.W_F) / ThrustMonitor.g.W * LPRES.cp(CC.fluid_P) * -CC.T_c + CC.W_IO / ThrustMonitor.g.W * HeadLoss_1.f_in.fluid[Comb_prod_cp] * -CC.f_O.T) - CC.W_IF / ThrustMonitor.g.W * HeadLoss_3.f_in.fluid[Comb_prod_cp] * -CC.f_F.T) / ((CC.W_O + CC.W_F) / ThrustMonitor.g.W * LPRES.cp(CC.fluid_P) + CC.W_IO / ThrustMonitor.g.W * HeadLoss_1.f_in.fluid[Comb_prod_cp] + CC.W_IF / ThrustMonitor.g.W * HeadLoss_3.f_in.fluid[Comb_prod_cp])
unkR[182] = _div( (-(_div( (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") * LPRES__cp(&unkR[153]) * -unkR[16] + _div( unkR[24] , unkR[183],"ThrustMonitor.g.W") * unkR[93] * -unkR[63]) - _div( unkR[23] , unkR[183],"ThrustMonitor.g.W") * unkR[60] * -unkR[30]) , (_div( (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") * LPRES__cp(&unkR[153]) + _div( unkR[24] , unkR[183],"ThrustMonitor.g.W") * unkR[93] + _div( unkR[23] , unkR[183],"ThrustMonitor.g.W") * unkR[60]),"(CC.W_O + CC.W_F) / ThrustMonitor.g.W * LPRES.cp(CC.fluid_P) + CC.W_IO / ThrustMonitor.g.W * HeadLoss_1.f_in.fluid[Comb_prod_cp] + CC.W_IF / ThrustMonitor.g.W * HeadLoss_3.f_in.fluid[Comb_prod_cp]") ;
//[E-177]  CC.A_th_d = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CC.p_c
unkR[5] = _div( unkR[183] * _div( _sqrt(LPRES__R(&unkR[184]) * unkR[182],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[184]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[62],"CC.p_c") ;
//[E-178]  CC.A_r = CC.A_th_d * CC.AR_r
unkR[3] = unkR[5] * unkR[1] ;
//[E-179]  CC.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[26] = _div( _sqrt(LPRES__R(&unkR[184]) * unkR[182],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[184]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-180]  CC.T_aw = ThrustMonitor.g.Tt * (1 + CC.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2)
unkR[15] = unkR[182] * _div( (1. + _pow( unkR[12] , 0.33,"(CC.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[184]) - 1.) * _pow( dyn[0] , 2.,"(CC.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[184]) - 1.) * _pow( dyn[0] , 2.,"(CC.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CC.M_r ** 2 / 2") ;
//[E-181]  CC.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CC.T_aw ** 0.6
unkR[225] = 1.184e-07 * _pow( LPRES__M(&unkR[184]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CC.T_aw)**(0.6)" ) ;
//[E-182]  CC.h_g = 0.026 / sqrt(4 * CC.A_th_d / 3.14159265358979) ** 0.2 * CC.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CC.Pr_r ** 0.6 * (CC.p_c / CC.c_star) ** 0.8 * (CC.A_th_d / CC.A_r) ** 0.9
unkR[215] = _div( 0.026 , _pow( _sqrt(4. * unkR[5]/3.14159265358979,"4 * CC.A_th_d / 3.14159265358979") , 0.2,"(sqrt(4 * CC.A_th_d / 3.14159265358979))**(0.2)" ),"sqrt(4 * CC.A_th_d / 3.14159265358979) ** 0.2") * _div( _pow( unkR[225] , 0.2,"(CC.visc_r)**(0.2)" ) * LPRES__cp(&unkR[184]) , _pow( unkR[12] , 0.6,"(CC.Pr_r)**(0.6)" ),"CC.Pr_r ** 0.6") * _pow( (_div( unkR[62] , unkR[26],"CC.c_star")) , 0.8,"(CC.p_c / CC.c_star)**(0.8)" ) * _pow( (_div( unkR[5] , unkR[3],"CC.A_r")) , 0.9,"(CC.A_th_d / CC.A_r)**(0.9)" ) ;
//[E-183]  CJ.h.Q = CC.h_g * (CC.T_aw - CJ.h.T) * CC.A_wet
res[2] = evalNormResidueInternal(2,unkR[213],unkR[215] * (unkR[15] - unkR[214]) * unkR[6]);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__RL10_design_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__RL10_design_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-189]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[407] = _div( unkR[412] , _pow( dyn[3] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-190]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[404] = _div( (unkR[407] + 1.) , (tan(unkR[401] * 3.14159265358979/180.) - tan(unkR[402] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-191]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[3] = evalNormResidueInternal(3,unkR[404],_div( unkR[398] , dyn[3],"Turbine.U"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__RL10_design_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn3, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__RL10_design_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-196]  Pump_LOX.psi = Pump_LOX.tau / Pump_LOX.U ** 2
res[4] = evalNormResidueInternal(4,unkR[367],_div( unkR[371] , _pow( dyn[4] , 2,"(Pump_LOX.U)**(2)" ),"Pump_LOX.U ** 2"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__RL10_design_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn4, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__RL10_design_design::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-202]  Pump_LH2.psi = Pump_LH2.tau / Pump_LH2.U ** 2
res[5] = evalNormResidueInternal(5,unkR[355],_div( unkR[359] , _pow( dyn[5] , 2,"(Pump_LH2.U)**(2)" ),"Pump_LH2.U ** 2"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__RL10_design_design::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn5, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__RL10_design_design::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-207]  ThrustMonitor.g.A_out / CC.A_th_d = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CC.p_out_ch / CC.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[5],"CC.A_th_d"),_div( LPRES__FGAMMA(&unkR[184]) , (_pow( (_div( dyn[6] , unkR[62],"CC.p_c")) , (_div( 1 , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CC.p_out_ch / CC.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[184]) * (1. - _pow( (_div( dyn[6] , unkR[62],"CC.p_c")) , (_div( (LPRES__gamma(&unkR[184]) - 1.) , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CC.p_out_ch / CC.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[184]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CC.p_out_ch / CC.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CC.p_out_ch / CC.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__RL10_design_design::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn6, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__RL10_design_design::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-213]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CC.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[7] = evalNormResidueInternal(7,_div( _div( unkR[183] * _sqrt(LPRES__R(&unkR[184]) * unkR[182],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[62],"CC.p_c"),_sqrt(LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[7] * _pow( (1 + (LPRES__gamma(&unkR[184]) - 1)/2 * _pow( dyn[7] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[184]) + 1)/2 , (LPRES__gamma(&unkR[184]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__RL10_design_design::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_design_design& m= *DRLPRUEBAS__RL10_design_design::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__RL10_design_design::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_design_design::fcn7, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__RL10_design_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(Tank_LOX.fluid, HeadLoss_1.f_in.fluid) %%% (OUT VAR)HeadLoss_1.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[65]);
//[E-2]  LPRES.Init_fluid(Tank_LH2.fluid, HeadLoss_2.f_in.fluid) %%% (OUT VAR)HeadLoss_2.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[246]);
//[E-3]  Pump_LH2.f_in.pt = Tank_LH2.pt - HeadLoss_2.dp
unkR[312] = unkR[311] - unkR[307] ;
//[E-4]  CJ.l.pt = Pump_LH2.dp + Pump_LH2.f_in.pt
unkR[275] = unkR[352] + unkR[312] ;
//[E-5]  Pump_LH2.tau = (CJ.l.pt - Pump_LH2.f_in.pt) / (Pump_LH2.eta_d * LPRES.rho(HeadLoss_2.f_in.fluid))
unkR[359] = _div( (unkR[275] - unkR[312]) , (unkR[353] * LPRES__rho(&unkR[246])),"Pump_LH2.eta_d * LPRES.rho(HeadLoss_2.f_in.fluid)") ;
//[E-6]  Pump_LOX.f_in.pt = Tank_LOX.pt - HeadLoss_1.dp
unkR[305] = unkR[304] - unkR[300] ;
//[E-7]  FlowMeter_LOX.f_in.pt = Pump_LOX.dp + Pump_LOX.f_in.pt
unkR[292] = unkR[364] + unkR[305] ;
//[E-8]  Pump_LOX.tau = (FlowMeter_LOX.f_in.pt - Pump_LOX.f_in.pt) / (Pump_LOX.eta_d * LPRES.rho(HeadLoss_1.f_in.fluid))
unkR[371] = _div( (unkR[292] - unkR[305]) , (unkR[365] * LPRES__rho(&unkR[65])),"Pump_LOX.eta_d * LPRES.rho(HeadLoss_1.f_in.fluid)") ;
//[E-9]  Pump_LOX.m.Power = -(Pump_LOX.tau * Inj_LOX.W)
unkR[297] = -(unkR[371] * unkR[64]) ;
//[E-10]  Gearbox.m_out.Power =  ZONE[1] (Pump_LOX.m.Power > 0) -Pump_LOX.m.Power * Gearbox.eta	  OTHERS -Pump_LOX.m.Power / Gearbox.eta
 if(m_branchZone[0]==0)
	unkR[299] = -unkR[297] * unkR[295] ;
else unkR[299] = _div( -unkR[297] , unkR[295],"Gearbox.eta") ;
//[E-11]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_2.f_in.fluid), HeadLoss_3.f_in.fluid) %%% (OUT VAR)HeadLoss_3.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[246]), &unkR[32]);
//[E-12]  CJ.D_eq = 1.3 * (CJ.a * CJ.b) ** 0.625 / (CJ.a + CJ.b) ** 0.25
unkR[227] = _div( 1.3 * _pow( (unkR[235] * unkR[236]) , 0.625,"(CJ.a * CJ.b)**(0.625)" ) , _pow( (unkR[235] + unkR[236]) , 0.25,"(CJ.a + CJ.b)**(0.25)" ),"(CJ.a + CJ.b) ** 0.25") ;
//[E-13]  CJ.D_hy = 2 * CJ.a * CJ.b / (CJ.a + CJ.b)
unkR[228] = _div( 2. * unkR[235] * unkR[236] , (unkR[235] + unkR[236]),"CJ.a + CJ.b") ;
//[E-14]  CC.W_O = Inj_LOX.W * (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[25] = unkR[64] * (1. - unkR[91]) ;
//[E-15]  CC.W_F = Inj_LH2.W * (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[20] = unkR[31] * (1. - unkR[58]) ;
//[E-16]  CC.OF = CC.W_O / CC.W_F
unkR[10] = _div( unkR[25] , unkR[20],"CC.W_F") ;
//[E-17]  CC.phi = CC.OF_st / CC.OF
unkR[221] = _div( unkR[11] , unkR[10],"CC.OF") ;
//[E-18]  CC.fluid_O[LOX] = HeadLoss_1.f_in.fluid[LOX] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-19]  CC.fluid_O[NTO] = HeadLoss_1.f_in.fluid[NTO] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-20]  CC.fluid_O[H2O2] = HeadLoss_1.f_in.fluid[H2O2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-21]  CC.fluid_O[HNO3] = HeadLoss_1.f_in.fluid[HNO3] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-22]  CC.fluid_O[LF2] = HeadLoss_1.f_in.fluid[LF2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-23]  CC.fluid_O[RP_1] = HeadLoss_1.f_in.fluid[RP_1] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-24]  CC.fluid_O[LCH4] = HeadLoss_1.f_in.fluid[LCH4] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-25]  CC.fluid_O[LH2] = HeadLoss_1.f_in.fluid[LH2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-26]  CC.fluid_O[N2H4] = HeadLoss_1.f_in.fluid[N2H4] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-27]  CC.fluid_O[UDMH] = HeadLoss_1.f_in.fluid[UDMH] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-28]  CC.fluid_O[MMH] = HeadLoss_1.f_in.fluid[MMH] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-29]  CC.fluid_O[JP_10] = HeadLoss_1.f_in.fluid[JP_10] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-30]  CC.fluid_O[Kerox] = HeadLoss_1.f_in.fluid[Kerox] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-31]  CC.fluid_O[Oil] = HeadLoss_1.f_in.fluid[Oil] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-32]  CC.fluid_O[H2O] = HeadLoss_1.f_in.fluid[H2O] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-33]  CC.fluid_O[IPA] = HeadLoss_1.f_in.fluid[IPA] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-34]  CC.fluid_O[Air] = HeadLoss_1.f_in.fluid[Air] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-35]  CC.fluid_O[Ar] = HeadLoss_1.f_in.fluid[Ar] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-36]  CC.fluid_O[CH4] = HeadLoss_1.f_in.fluid[CH4] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-37]  CC.fluid_O[CO] = HeadLoss_1.f_in.fluid[CO] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-38]  CC.fluid_O[CO2] = HeadLoss_1.f_in.fluid[CO2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-39]  CC.fluid_O[H2] = HeadLoss_1.f_in.fluid[H2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-40]  CC.fluid_O[He] = HeadLoss_1.f_in.fluid[He] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-41]  CC.fluid_O[N2] = HeadLoss_1.f_in.fluid[N2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-42]  CC.fluid_O[O2] = HeadLoss_1.f_in.fluid[O2] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-43]  CC.fluid_O[MMH_vapour] = HeadLoss_1.f_in.fluid[MMH_vapour] / (1 - HeadLoss_1.f_in.fluid[Comb_prod])
unkR[149] = _div( unkR[90] , (1. - unkR[91]),"1 - HeadLoss_1.f_in.fluid[Comb_prod]") ;
//[E-44]  CC.fluid_O[Comb_prod] = 0
unkR[150] = 0. ;
//[E-45]  CC.fluid_O[Comb_prod_M] = 0
unkR[151] = 0. ;
//[E-46]  CC.fluid_O[Comb_prod_cp] = 0
unkR[152] = 0. ;
//[E-47]  CC.fluid_F[LOX] = HeadLoss_3.f_in.fluid[LOX] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-48]  CC.fluid_F[NTO] = HeadLoss_3.f_in.fluid[NTO] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-49]  CC.fluid_F[H2O2] = HeadLoss_3.f_in.fluid[H2O2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-50]  CC.fluid_F[HNO3] = HeadLoss_3.f_in.fluid[HNO3] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-51]  CC.fluid_F[LF2] = HeadLoss_3.f_in.fluid[LF2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-52]  CC.fluid_F[RP_1] = HeadLoss_3.f_in.fluid[RP_1] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-53]  CC.fluid_F[LCH4] = HeadLoss_3.f_in.fluid[LCH4] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-54]  CC.fluid_F[LH2] = HeadLoss_3.f_in.fluid[LH2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-55]  CC.fluid_F[N2H4] = HeadLoss_3.f_in.fluid[N2H4] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-56]  CC.fluid_F[UDMH] = HeadLoss_3.f_in.fluid[UDMH] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-57]  CC.fluid_F[MMH] = HeadLoss_3.f_in.fluid[MMH] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-58]  CC.fluid_F[JP_10] = HeadLoss_3.f_in.fluid[JP_10] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-59]  CC.fluid_F[Kerox] = HeadLoss_3.f_in.fluid[Kerox] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-60]  CC.fluid_F[Oil] = HeadLoss_3.f_in.fluid[Oil] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-61]  CC.fluid_F[H2O] = HeadLoss_3.f_in.fluid[H2O] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-62]  CC.fluid_F[IPA] = HeadLoss_3.f_in.fluid[IPA] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-63]  CC.fluid_F[Air] = HeadLoss_3.f_in.fluid[Air] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-64]  CC.fluid_F[Ar] = HeadLoss_3.f_in.fluid[Ar] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-65]  CC.fluid_F[CH4] = HeadLoss_3.f_in.fluid[CH4] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-66]  CC.fluid_F[CO] = HeadLoss_3.f_in.fluid[CO] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-67]  CC.fluid_F[CO2] = HeadLoss_3.f_in.fluid[CO2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-68]  CC.fluid_F[H2] = HeadLoss_3.f_in.fluid[H2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-69]  CC.fluid_F[He] = HeadLoss_3.f_in.fluid[He] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-70]  CC.fluid_F[N2] = HeadLoss_3.f_in.fluid[N2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-71]  CC.fluid_F[O2] = HeadLoss_3.f_in.fluid[O2] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-72]  CC.fluid_F[MMH_vapour] = HeadLoss_3.f_in.fluid[MMH_vapour] / (1 - HeadLoss_3.f_in.fluid[Comb_prod])
unkR[120] = _div( unkR[57] , (1. - unkR[58]),"1 - HeadLoss_3.f_in.fluid[Comb_prod]") ;
//[E-73]  CC.fluid_F[Comb_prod] = 0
unkR[121] = 0. ;
//[E-74]  CC.fluid_F[Comb_prod_M] = 0
unkR[122] = 0. ;
//[E-75]  CC.fluid_F[Comb_prod_cp] = 0
unkR[123] = 0. ;
//[E-76]  CC.cp_R = (CC.W_O * LPRES.cp(CC.fluid_O) + CC.W_F * LPRES.cp(CC.fluid_F)) / (CC.W_O + CC.W_F)
unkR[28] = _div( (unkR[25] * LPRES__cp(&unkR[124]) + unkR[20] * LPRES__cp(&unkR[95])) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
//[E-77]  CC.Q_comb_effective =  ZONE[2] (CC.Combustion) CC.Q_comb	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[14] = unkR[13] ;
else unkR[14] = 0. ;
//[E-78]  CC.W_F_st = CC.W_F / CC.phi
unkR[22] = _div( unkR[20] , unkR[221],"CC.phi") ;
//[E-79]  CC.fluid_P[LOX] =  IF[1] (CC.Combustion) (CC.fluid_O[LOX] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[LOX] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[LOX] * CC.W_O + CC.fluid_F[LOX] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[95] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[25] + unkR[95] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-80]  CC.fluid_P[NTO] =  IF[2] (CC.Combustion) (CC.fluid_O[NTO] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[NTO] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[NTO] * CC.W_O + CC.fluid_F[NTO] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[96] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[25] + unkR[96] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-81]  CC.fluid_P[H2O2] =  IF[3] (CC.Combustion) (CC.fluid_O[H2O2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[H2O2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[H2O2] * CC.W_O + CC.fluid_F[H2O2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[97] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[25] + unkR[97] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-82]  CC.fluid_P[HNO3] =  IF[4] (CC.Combustion) (CC.fluid_O[HNO3] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[HNO3] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[HNO3] * CC.W_O + CC.fluid_F[HNO3] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[98] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[25] + unkR[98] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-83]  CC.fluid_P[LF2] =  IF[5] (CC.Combustion) (CC.fluid_O[LF2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[LF2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[LF2] * CC.W_O + CC.fluid_F[LF2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[99] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[25] + unkR[99] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-84]  CC.fluid_P[RP_1] =  IF[6] (CC.Combustion) (CC.fluid_O[RP_1] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[RP_1] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[RP_1] * CC.W_O + CC.fluid_F[RP_1] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[100] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[25] + unkR[100] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-85]  CC.fluid_P[LCH4] =  IF[7] (CC.Combustion) (CC.fluid_O[LCH4] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[LCH4] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[LCH4] * CC.W_O + CC.fluid_F[LCH4] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[101] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[25] + unkR[101] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-86]  CC.fluid_P[LH2] =  IF[8] (CC.Combustion) (CC.fluid_O[LH2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[LH2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[LH2] * CC.W_O + CC.fluid_F[LH2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[102] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[25] + unkR[102] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-87]  CC.fluid_P[N2H4] =  IF[9] (CC.Combustion) (CC.fluid_O[N2H4] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[N2H4] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[N2H4] * CC.W_O + CC.fluid_F[N2H4] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[103] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[25] + unkR[103] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-88]  CC.fluid_P[UDMH] =  IF[10] (CC.Combustion) (CC.fluid_O[UDMH] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[UDMH] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[UDMH] * CC.W_O + CC.fluid_F[UDMH] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[104] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[25] + unkR[104] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-89]  CC.fluid_P[MMH] =  IF[11] (CC.Combustion) (CC.fluid_O[MMH] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[MMH] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[MMH] * CC.W_O + CC.fluid_F[MMH] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[105] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[25] + unkR[105] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-90]  CC.fluid_P[JP_10] =  IF[12] (CC.Combustion) (CC.fluid_O[JP_10] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[JP_10] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[JP_10] * CC.W_O + CC.fluid_F[JP_10] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[106] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[25] + unkR[106] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-91]  CC.fluid_P[Kerox] =  IF[13] (CC.Combustion) (CC.fluid_O[Kerox] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[Kerox] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[Kerox] * CC.W_O + CC.fluid_F[Kerox] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[107] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[25] + unkR[107] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-92]  CC.fluid_P[Oil] =  IF[14] (CC.Combustion) (CC.fluid_O[Oil] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[Oil] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[Oil] * CC.W_O + CC.fluid_F[Oil] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[108] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[25] + unkR[108] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-93]  CC.fluid_P[H2O] =  IF[15] (CC.Combustion) (CC.fluid_O[H2O] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[H2O] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[H2O] * CC.W_O + CC.fluid_F[H2O] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[109] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[25] + unkR[109] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-94]  CC.fluid_P[IPA] =  IF[16] (CC.Combustion) (CC.fluid_O[IPA] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[IPA] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[IPA] * CC.W_O + CC.fluid_F[IPA] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[110] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[25] + unkR[110] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-95]  CC.fluid_P[Air] =  IF[17] (CC.Combustion) (CC.fluid_O[Air] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[Air] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[Air] * CC.W_O + CC.fluid_F[Air] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[111] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[25] + unkR[111] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-96]  CC.fluid_P[Ar] =  IF[18] (CC.Combustion) (CC.fluid_O[Ar] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[Ar] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[Ar] * CC.W_O + CC.fluid_F[Ar] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[112] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[25] + unkR[112] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-97]  CC.fluid_P[CH4] =  IF[19] (CC.Combustion) (CC.fluid_O[CH4] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[CH4] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[CH4] * CC.W_O + CC.fluid_F[CH4] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[113] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[25] + unkR[113] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-98]  CC.fluid_P[CO] =  IF[20] (CC.Combustion) (CC.fluid_O[CO] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[CO] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[CO] * CC.W_O + CC.fluid_F[CO] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[114] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[25] + unkR[114] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-99]  CC.fluid_P[CO2] =  IF[21] (CC.Combustion) (CC.fluid_O[CO2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[CO2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[CO2] * CC.W_O + CC.fluid_F[CO2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[115] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[25] + unkR[115] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-100]  CC.fluid_P[H2] =  IF[22] (CC.Combustion) (CC.fluid_O[H2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[H2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[H2] * CC.W_O + CC.fluid_F[H2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[116] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[25] + unkR[116] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-101]  CC.fluid_P[He] =  IF[23] (CC.Combustion) (CC.fluid_O[He] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[He] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[He] * CC.W_O + CC.fluid_F[He] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[117] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[25] + unkR[117] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-102]  CC.fluid_P[N2] =  IF[24] (CC.Combustion) (CC.fluid_O[N2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[N2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[N2] * CC.W_O + CC.fluid_F[N2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[118] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[25] + unkR[118] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-103]  CC.fluid_P[O2] =  IF[25] (CC.Combustion) (CC.fluid_O[O2] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[O2] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[O2] * CC.W_O + CC.fluid_F[O2] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[119] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[25] + unkR[119] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-104]  CC.fluid_P[MMH_vapour] =  IF[26] (CC.Combustion) (CC.fluid_O[MMH_vapour] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[MMH_vapour] * MATH.max(CC.phi - 1, 0) * CC.W_F_st) / (CC.W_O + CC.W_F)	 ELSE (CC.fluid_O[MMH_vapour] * CC.W_O + CC.fluid_F[MMH_vapour] * CC.W_F) / (CC.W_O + CC.W_F)
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[120] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[178] = _div( (unkR[149] * unkR[25] + unkR[120] * unkR[20]) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
//[E-105]  CC.fluid_P[Comb_prod] =  IF[27] (CC.Combustion) (CC.fluid_O[Comb_prod] * MATH.max(1 - CC.phi, 0) * CC.W_O + CC.fluid_F[Comb_prod] * MATH.max(CC.phi - 1, 0) * CC.W_F_st + (1 - MATH.max(1 - CC.phi, 0)) * (CC.W_O + CC.W_F_st)) / (CC.W_O + CC.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = _div( (unkR[150] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[121] * MATH__max(unkR[221] - 1., 0.) * unkR[22] + (1. - MATH__max(1. - unkR[221], 0.)) * (unkR[25] + unkR[22])) , (unkR[25] + unkR[20]),"CC.W_O + CC.W_F") ;
}
else 
{
unkR[179] = 0. ;
}
//[E-106]  CC.fluid_P[Comb_prod_M] =  IF[28] (CC.Combustion) CC.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[7] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-107]  CC.fluid_P[Comb_prod_cp] =  IF[29] (CC.Combustion) CC.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[181] = unkR[27] ;
}
else 
{
unkR[181] = 0. ;
}
//[E-108]  ThrustMonitor.g.W = Inj_LOX.W + Inj_LH2.W
unkR[183] = unkR[64] + unkR[31] ;
//[E-109]  CJ.l.Tt = (CJ.l.pt - Pump_LH2.f_in.pt) / LPRES.rho(HeadLoss_2.f_in.fluid) * (1 / Pump_LH2.eta_d - 1) / LPRES.cp(HeadLoss_2.f_in.fluid) + Tank_LH2.Tt
unkR[245] = _div( _div( (unkR[275] - unkR[312]) , LPRES__rho(&unkR[246]),"LPRES.rho(HeadLoss_2.f_in.fluid)") * (_div( 1. , unkR[353],"Pump_LH2.eta_d") - 1.) , LPRES__cp(&unkR[246]),"LPRES.cp(HeadLoss_2.f_in.fluid)") + unkR[310] ;
//[E-110]  ThrustMonitor.g.fluid[LOX] = CC.fluid_P[LOX] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[153] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-111]  ThrustMonitor.g.fluid[NTO] = CC.fluid_P[NTO] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[154] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[H2O2] = CC.fluid_P[H2O2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[155] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[HNO3] = CC.fluid_P[HNO3] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[156] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[LF2] = CC.fluid_P[LF2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[157] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[RP_1] = CC.fluid_P[RP_1] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[158] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[LCH4] = CC.fluid_P[LCH4] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[159] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[LH2] = CC.fluid_P[LH2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[160] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[N2H4] = CC.fluid_P[N2H4] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[161] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[UDMH] = CC.fluid_P[UDMH] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[162] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[MMH] = CC.fluid_P[MMH] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[163] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[JP_10] = CC.fluid_P[JP_10] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[164] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[Kerox] = CC.fluid_P[Kerox] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[165] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[Oil] = CC.fluid_P[Oil] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[166] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[H2O] = CC.fluid_P[H2O] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[167] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[IPA] = CC.fluid_P[IPA] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[168] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[Air] = CC.fluid_P[Air] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[169] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[Ar] = CC.fluid_P[Ar] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[170] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[CH4] = CC.fluid_P[CH4] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[171] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CO] = CC.fluid_P[CO] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[172] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[CO2] = CC.fluid_P[CO2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[173] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[H2] = CC.fluid_P[H2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[174] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[He] = CC.fluid_P[He] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[175] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[N2] = CC.fluid_P[N2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[176] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[O2] = CC.fluid_P[O2] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[177] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[MMH_vapour] = CC.fluid_P[MMH_vapour] * (CC.W_O + CC.W_F) / ThrustMonitor.g.W
unkR[209] = _div( unkR[178] * (unkR[25] + unkR[20]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-136]  CC.W_IO = Inj_LOX.W - CC.W_O
unkR[24] = unkR[64] - unkR[25] ;
//[E-137]  CC.W_IF = Inj_LH2.W - CC.W_F
unkR[23] = unkR[31] - unkR[20] ;
//[E-138]  ThrustMonitor.g.fluid[Comb_prod] = (CC.fluid_P[Comb_prod] * (CC.W_O + CC.W_F) + CC.W_IO + CC.W_IF) / ThrustMonitor.g.W
unkR[210] = _div( (unkR[179] * (unkR[25] + unkR[20]) + unkR[24] + unkR[23]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-139]  ThrustMonitor.g.fluid[Comb_prod_M] = CC.fluid_P[Comb_prod_M]
unkR[211] = unkR[180] ;
//[E-140]  ThrustMonitor.g.fluid[Comb_prod_cp] = CC.fluid_P[Comb_prod_cp]
unkR[212] = unkR[181] ;
//[E-141]  CC.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[184]) , (9. * LPRES__gamma(&unkR[184]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-143]  CJ.Pr = LPRES.visc(HeadLoss_2.f_in.fluid) * LPRES.cp(HeadLoss_2.f_in.fluid) / LPRES.cond(HeadLoss_2.f_in.fluid)
unkR[231] = _div( LPRES__visc(&unkR[246]) * LPRES__cp(&unkR[246]) , LPRES__cond(&unkR[246]),"LPRES.cond(HeadLoss_2.f_in.fluid)") ;
//[E-144]  CJ.A_wet_cooling = CJ.N * 2 * (CJ.a + CJ.b) * CJ.L
unkR[226] = unkI[2] * 2. * (unkR[235] + unkR[236]) * unkR[229] ;
//[E-145]  FlowMeter_LOX.f_in.Tt = (FlowMeter_LOX.f_in.pt - Pump_LOX.f_in.pt) / LPRES.rho(HeadLoss_1.f_in.fluid) * (1 / Pump_LOX.eta_d - 1) / LPRES.cp(HeadLoss_1.f_in.fluid) + Tank_LOX.Tt
unkR[291] = _div( _div( (unkR[292] - unkR[305]) , LPRES__rho(&unkR[65]),"LPRES.rho(HeadLoss_1.f_in.fluid)") * (_div( 1. , unkR[365],"Pump_LOX.eta_d") - 1.) , LPRES__cp(&unkR[65]),"LPRES.cp(HeadLoss_1.f_in.fluid)") + unkR[303] ;
//[E-146]  Inj_LOX.PR = FlowMeter_LOX.f_in.pt / CC.p_c
unkR[336] = _div( unkR[292] , unkR[62],"CC.p_c") ;
//[E-147]  Inj_LOX.M_out =  ZONE[4] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl) sqrt(2 * (Inj_LOX.PR ** ((LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_1.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[335] = _sqrt(_div( 2. * (_pow( unkR[336] , (_div( (LPRES__gamma(&unkR[65]) - 1.) , LPRES__gamma(&unkR[65]),"LPRES.gamma(HeadLoss_1.f_in.fluid)")),"(Inj_LOX.PR)**((LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_1.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[65]) - 1.),"LPRES.gamma(HeadLoss_1.f_in.fluid) - 1"),"2 * (Inj_LOX.PR ** ((LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_1.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[335] = 1. ;
else unkR[335] = 0. ;
//[E-148]  CC.f_O.T =  IF[42] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) FlowMeter_LOX.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) / 2 * Inj_LOX.M_out ** 2)	 ELSE FlowMeter_LOX.f_in.Tt
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[63] = _div( unkR[291] , (1. + (LPRES__gamma(&unkR[65]) - 1.)/2. * _pow( unkR[335] , 2.,"(Inj_LOX.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) / 2 * Inj_LOX.M_out ** 2") ;
}
else 
{
unkR[63] = unkR[291] ;
}

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-184]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[394] = MATH__min(unkR[393], 1.) ;
//[E-185]  Turbine.A_in_d = Junct.f_in1.W * sqrt(Junct.f_in2.Tt * LPRES.R(HeadLoss_3.f_in.fluid)) / (sqrt(LPRES.gamma(HeadLoss_3.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))) / Turbine.f_in.pt
unkR[392] = _div( _div( unkR[343] * _sqrt(dyn[1] * LPRES__R(&unkR[32]),"Junct.f_in2.Tt * LPRES.R(HeadLoss_3.f_in.fluid)") , (_sqrt(LPRES__gamma(&unkR[32]),"LPRES.gamma(HeadLoss_3.f_in.fluid)") * MATH__min(unkR[394], 1.) * cos(unkR[401] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[32]) - 1.)/2. * _pow( MATH__min(unkR[394], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[32]) + 1.)/2. , (LPRES__gamma(&unkR[32]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))" )),"sqrt(LPRES.gamma(HeadLoss_3.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))") , unkR[384],"Turbine.f_in.pt") ;
//[E-186]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * Junct.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[397] = unkR[394] * _sqrt(_div( LPRES__gamma(&unkR[32]) * LPRES__R(&unkR[32]) * dyn[1] , (1. + (LPRES__gamma(&unkR[32]) - 1.)/2. * _pow( unkR[394] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * Junct.f_in2.Tt / (1 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-187]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[398] = unkR[397] * cos(unkR[401] * 3.14159265358979/180.) ;
//[E-188]  Turbine.tau = Turbine.m.Power / Junct.f_in1.W
unkR[412] = _div( unkR[395] , unkR[343],"Junct.f_in1.W") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-192]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[298] = unkR[411] * 2. * 3.14159265358979/60. ;
//[E-193]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[410] = _div( dyn[3] , unkR[298],"Turbine.m.N") ;
//[E-194]  Pump_LOX.H = (FlowMeter_LOX.f_in.pt - Pump_LOX.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_1.f_in.fluid))
unkR[362] = _div( (unkR[292] - unkR[305]) , (9.80665 * LPRES__rho(&unkR[65])),"9.80665 * LPRES.rho(HeadLoss_1.f_in.fluid)") ;
//[E-195]  Pump_LOX.psi = 1 - (1 - Pump_LOX.psi_d) / Pump_LOX.phi_d * Pump_LOX.phi_d
unkR[367] = 1. - _div( (1. - unkR[368]) , unkR[366],"Pump_LOX.phi_d") * unkR[366] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-197]  Pump_LOX.m.N = Turbine.m.N / Gearbox.GR
unkR[296] = _div( unkR[298] , unkR[294],"Gearbox.GR") ;
//[E-198]  Pump_LOX.r_m_d = Pump_LOX.U / Pump_LOX.m.N
unkR[370] = _div( dyn[4] , unkR[296],"Pump_LOX.m.N") ;
//[E-199]  Pump_LOX.A_in_d = Inj_LOX.W / Pump_LOX.phi_d / LPRES.rho(HeadLoss_1.f_in.fluid) / Pump_LOX.U
unkR[361] = _div( _div( _div( unkR[64] , unkR[366],"Pump_LOX.phi_d") , LPRES__rho(&unkR[65]),"LPRES.rho(HeadLoss_1.f_in.fluid)") , dyn[4],"Pump_LOX.U") ;
//[E-200]  Pump_LH2.H = (CJ.l.pt - Pump_LH2.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_2.f_in.fluid))
unkR[349] = _div( (unkR[275] - unkR[312]) , (9.80665 * LPRES__rho(&unkR[246])),"9.80665 * LPRES.rho(HeadLoss_2.f_in.fluid)") ;
//[E-201]  Pump_LH2.psi = 1 - (1 - Pump_LH2.psi_d) / Pump_LH2.phi_d * Pump_LH2.phi_d
unkR[355] = 1. - _div( (1. - unkR[356]) , unkR[354],"Pump_LH2.phi_d") * unkR[354] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-203]  Pump_LH2.r_m_d = Pump_LH2.U / Turbine.m.N
unkR[358] = _div( dyn[5] , unkR[298],"Turbine.m.N") ;
//[E-204]  Pump_LH2.A_in_d = HeadLoss_2.f_in.W / Pump_LH2.phi_d / LPRES.rho(HeadLoss_2.f_in.fluid) / Pump_LH2.U
unkR[348] = _div( _div( _div( unkR[239] , unkR[354],"Pump_LH2.phi_d") , LPRES__rho(&unkR[246]),"LPRES.rho(HeadLoss_2.f_in.fluid)") , dyn[5],"Pump_LH2.U") ;
//[E-205]  ThrustMonitor.g.A_out = CC.AR * CC.A_th_d
unkR[2] = unkR[0] * unkR[5] ;
//[E-206]  CC.rho_trans = CC.p_c / ThrustMonitor.g.Tt / LPRES.R(CC.fluid_P)
unkR[223] = _div( _div( unkR[62] , unkR[182],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[153]),"LPRES.R(CC.fluid_P)") ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-208]  FlowMeter_LOX.i.Data[1] = abs(Inj_LOX.W)
unkR[293] = abs(unkR[64]) ;
//[E-209]  FlowMeter_LH2.i.Data[1] = abs(HeadLoss_2.f_in.W)
unkR[290] = abs(unkR[239]) ;
//[E-210]  CJ.rho_trans = SF.f_in.pt / Junct.f_in2.Tt / LPRES.R(HeadLoss_3.f_in.fluid)
unkR[278] = _div( _div( unkR[240] , dyn[1],"Junct.f_in2.Tt") , LPRES__R(&unkR[32]),"LPRES.R(HeadLoss_3.f_in.fluid)") ;
//[E-211]  ControlPanel.W_tot = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[287] = unkR[290] + unkR[293] ;
//[E-212]  ControlPanel.i_Comb.Data[1] = CC.c_star
unkR[216] = unkR[26] ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-214]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[387] = _div( unkR[182] , (1. + (LPRES__gamma(&unkR[184]) - 1.)/2. * _pow( dyn[7] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-215]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[390] = dyn[7] * _sqrt(LPRES__gamma(&unkR[184]) * LPRES__R(&unkR[184]) * unkR[387],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-216]  ThrustMonitor.p_out = CC.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[389] = _div( unkR[62] , _pow( (1. + (LPRES__gamma(&unkR[184]) - 1.)/2. * _pow( dyn[7] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[184]) - 1.) , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-217]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[388] = LPRES__ISA_Pressure(unkR[346]) ;
//[E-218]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[286] = unkR[183] * unkR[390] + unkR[2] * (unkR[389] - unkR[388]) ;
//[E-219]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[284] = _div( unkR[286] , unkR[287],"ControlPanel.W_tot") ;
//[E-220]  ControlPanel.C_E = ControlPanel.Isp / CC.c_star
unkR[283] = _div( unkR[284] , unkR[26],"CC.c_star") ;
//[E-221]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[285] = unkR[284]/9.80665 ;
//[E-222]  Inj_LH2.PR_sl =  IF[30] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_3.f_in.fluid) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[327] = _pow( ((LPRES__gamma(&unkR[32]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[32]) , (LPRES__gamma(&unkR[32]) - 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_3.f_in.fluid) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[327] = 0. ;
}
//[E-223]  Inj_LH2.p_out_ch =  IF[31] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) Inj_LH2.f_in.pt / Inj_LH2.PR_sl	 ELSE 0
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[329] = _div( unkR[319] , unkR[327],"Inj_LH2.PR_sl") ;
}
else 
{
unkR[329] = 0. ;
}
//[E-224]  Inj_LH2.A_sl =  IF[32] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) sqrt(HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)) * Inj_LH2.W / (LPRES.FGAMMA(HeadLoss_3.f_in.fluid) * Inj_LH2.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[323] = _div( _sqrt(unkR[317] * LPRES__R(&unkR[32]),"HeadLoss_3.f_in.Tt * LPRES.R(HeadLoss_3.f_in.fluid)") * unkR[31] , (LPRES__FGAMMA(&unkR[32]) * unkR[319]),"LPRES.FGAMMA(HeadLoss_3.f_in.fluid) * Inj_LH2.f_in.pt") ;
}
else 
{
unkR[323] = 0. ;
}
//[E-225]  CC.f_F.p =  IF[33] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) MATH.max(CC.p_c, Inj_LH2.p_out_ch)	 ELSE CC.p_c
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[61] = MATH__max(unkR[62], unkR[329]) ;
}
else 
{
unkR[61] = unkR[62] ;
}
//[E-226]  Inj_LH2.A_d =  IF[35] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) Inj_LH2.A_sl * ((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1))) / Inj_LH2.M_out	 ELSE Inj_LH2.W / Inj_LH2.C_D / sqrt(2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p))
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[322] = _div( unkR[323] * _pow( (_div( (2. + (LPRES__gamma(&unkR[32]) - 1.) * _pow( unkR[325] , 2.,"(Inj_LH2.M_out)**(2)" )) , (LPRES__gamma(&unkR[32]) + 1.),"LPRES.gamma(HeadLoss_3.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[32]) + 1.) , (2. * (LPRES__gamma(&unkR[32]) - 1.)),"2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) * Inj_LH2.M_out ** 2) / (LPRES.gamma(HeadLoss_3.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_3.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)))" ) , unkR[325],"Inj_LH2.M_out") ;
}
else 
{
unkR[322] = _div( _div( unkR[31] , unkR[324],"Inj_LH2.C_D") , _sqrt(2. * LPRES__rho(&unkR[32]) * (unkR[319] - unkR[61]),"2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p)"),"sqrt(2 * LPRES.rho(HeadLoss_3.f_in.fluid) * (Inj_LH2.f_in.pt - CC.f_F.p))") ;
}
//[E-227]  Inj_LH2.v_ideal =  IF[36] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) Inj_LH2.M_out * sqrt(LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * CC.f_F.T)	 ELSE Inj_LH2.W / (LPRES.rho(HeadLoss_3.f_in.fluid) * Inj_LH2.A_d * Inj_LH2.C_D)
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[330] = unkR[325] * _sqrt(LPRES__gamma(&unkR[32]) * LPRES__R(&unkR[32]) * unkR[30],"LPRES.gamma(HeadLoss_3.f_in.fluid) * LPRES.R(HeadLoss_3.f_in.fluid) * CC.f_F.T") ;
}
else 
{
unkR[330] = _div( unkR[31] , (LPRES__rho(&unkR[32]) * unkR[322] * unkR[324]),"LPRES.rho(HeadLoss_3.f_in.fluid) * Inj_LH2.A_d * Inj_LH2.C_D") ;
}
//[E-228]  Inj_LH2.Re =  IF[37] (LPRES.State(HeadLoss_3.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_3.f_in.fluid) * Inj_LH2.v_ideal * Inj_LH2.C_D * sqrt(4 * Inj_LH2.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_3.f_in.fluid)
if( LPRES__State(&unkR[32]) == 2 ) 
{
unkR[328] = 0. ;
}
else 
{
unkR[328] = _div( LPRES__rho(&unkR[32]) * unkR[330] * unkR[324] * _sqrt(4. * unkR[322]/3.14159265358979,"4 * Inj_LH2.A_d / 3.14159265358979") , LPRES__visc(&unkR[32]),"LPRES.visc(HeadLoss_3.f_in.fluid)") ;
}
//[E-229]  Inj_LOX.PR_sl =  IF[38] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_1.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_1.f_in.fluid) / (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[337] = _pow( ((LPRES__gamma(&unkR[65]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[65]) , (LPRES__gamma(&unkR[65]) - 1.),"LPRES.gamma(HeadLoss_1.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_1.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_1.f_in.fluid) / (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[337] = 0. ;
}
//[E-230]  Inj_LOX.p_out_ch =  IF[39] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) FlowMeter_LOX.f_in.pt / Inj_LOX.PR_sl	 ELSE 0
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[339] = _div( unkR[292] , unkR[337],"Inj_LOX.PR_sl") ;
}
else 
{
unkR[339] = 0. ;
}
//[E-231]  Inj_LOX.A_sl =  IF[40] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) sqrt(FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_1.f_in.fluid)) * Inj_LOX.W / (LPRES.FGAMMA(HeadLoss_1.f_in.fluid) * FlowMeter_LOX.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[333] = _div( _sqrt(unkR[291] * LPRES__R(&unkR[65]),"FlowMeter_LOX.f_in.Tt * LPRES.R(HeadLoss_1.f_in.fluid)") * unkR[64] , (LPRES__FGAMMA(&unkR[65]) * unkR[292]),"LPRES.FGAMMA(HeadLoss_1.f_in.fluid) * FlowMeter_LOX.f_in.pt") ;
}
else 
{
unkR[333] = 0. ;
}
//[E-232]  CC.f_O.p =  IF[41] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) MATH.max(CC.p_c, Inj_LOX.p_out_ch)	 ELSE CC.p_c
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[94] = MATH__max(unkR[62], unkR[339]) ;
}
else 
{
unkR[94] = unkR[62] ;
}
//[E-233]  Inj_LOX.A_d =  IF[43] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) Inj_LOX.A_sl * ((2 + (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(HeadLoss_1.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_1.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1))) / Inj_LOX.M_out	 ELSE Inj_LOX.W / Inj_LOX.C_D / sqrt(2 * LPRES.rho(HeadLoss_1.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CC.f_O.p))
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[332] = _div( unkR[333] * _pow( (_div( (2. + (LPRES__gamma(&unkR[65]) - 1.) * _pow( unkR[335] , 2.,"(Inj_LOX.M_out)**(2)" )) , (LPRES__gamma(&unkR[65]) + 1.),"LPRES.gamma(HeadLoss_1.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[65]) + 1.) , (2. * (LPRES__gamma(&unkR[65]) - 1.)),"2 * (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) * Inj_LOX.M_out ** 2) / (LPRES.gamma(HeadLoss_1.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_1.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1)))" ) , unkR[335],"Inj_LOX.M_out") ;
}
else 
{
unkR[332] = _div( _div( unkR[64] , unkR[334],"Inj_LOX.C_D") , _sqrt(2. * LPRES__rho(&unkR[65]) * (unkR[292] - unkR[94]),"2 * LPRES.rho(HeadLoss_1.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CC.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_1.f_in.fluid) * (FlowMeter_LOX.f_in.pt - CC.f_O.p))") ;
}
//[E-234]  Inj_LOX.v_ideal =  IF[44] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) Inj_LOX.M_out * sqrt(LPRES.gamma(HeadLoss_1.f_in.fluid) * LPRES.R(HeadLoss_1.f_in.fluid) * CC.f_O.T)	 ELSE Inj_LOX.W / (LPRES.rho(HeadLoss_1.f_in.fluid) * Inj_LOX.A_d * Inj_LOX.C_D)
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[340] = unkR[335] * _sqrt(LPRES__gamma(&unkR[65]) * LPRES__R(&unkR[65]) * unkR[63],"LPRES.gamma(HeadLoss_1.f_in.fluid) * LPRES.R(HeadLoss_1.f_in.fluid) * CC.f_O.T") ;
}
else 
{
unkR[340] = _div( unkR[64] , (LPRES__rho(&unkR[65]) * unkR[332] * unkR[334]),"LPRES.rho(HeadLoss_1.f_in.fluid) * Inj_LOX.A_d * Inj_LOX.C_D") ;
}
//[E-235]  Inj_LOX.Re =  IF[45] (LPRES.State(HeadLoss_1.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_1.f_in.fluid) * Inj_LOX.v_ideal * Inj_LOX.C_D * sqrt(4 * Inj_LOX.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_1.f_in.fluid)
if( LPRES__State(&unkR[65]) == 2 ) 
{
unkR[338] = 0. ;
}
else 
{
unkR[338] = _div( LPRES__rho(&unkR[65]) * unkR[340] * unkR[334] * _sqrt(4. * unkR[332]/3.14159265358979,"4 * Inj_LOX.A_d / 3.14159265358979") , LPRES__visc(&unkR[65]),"LPRES.visc(HeadLoss_1.f_in.fluid)") ;
}
//[E-236]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[288] = unkR[286] ;
//[E-237]  Regulator_1.f_in.pt = SF.f_in.pt * SF.TPL
unkR[376] = unkR[240] * unkR[383] ;
//[E-238]  Junct.f_in2.pt = HeadLoss_3.f_in.pt / Junct.TPL
unkR[345] = _div( unkR[318] , unkR[341],"Junct.TPL") ;
//[E-239]  Regulator_1.dp_d = Regulator_1.f_in.pt - Junct.f_in2.pt
unkR[373] = unkR[376] - unkR[345] ;
//[E-240]  ControlPanel.i_W.Data[1] = FlowMeter_LH2.i.Data[1] + FlowMeter_LOX.i.Data[1]
unkR[289] = unkR[290] + unkR[293] ;

//save last residues
memcpy(this->res,res,8*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__RL10_design_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[32])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_3.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(1 == LPRES__State(&unkR[65])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_LOX.","Liquid == LPRES.State(HeadLoss_1.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[246])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_LH2.","Liquid == LPRES.State(HeadLoss_2.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[246])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CJ.","Liquid == LPRES.State(HeadLoss_2.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[184])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[7] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[389] , unkR[388],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[7] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__RL10_design_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120]; //(CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120]; //(CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[297]; //Pump_LOX.m.Power > 0
    ev[3]= unkI[0] - 1; //CC.Combustion
    ev[4]= LPRES__State(&unkR[32]) - 2; //LPRES.State(HeadLoss_3.f_in.fluid) == Gas
    ev[5]= unkR[326] - unkR[327]; //Inj_LH2.PR < Inj_LH2.PR_sl
    ev[6]= LPRES__State(&unkR[32]) - 2; //LPRES.State(HeadLoss_3.f_in.fluid) == Gas
    ev[7]= unkR[326] - unkR[327]; //Inj_LH2.PR >= Inj_LH2.PR_sl
    ev[8]= LPRES__State(&unkR[65]) - 2; //LPRES.State(HeadLoss_1.f_in.fluid) == Gas
    ev[9]= unkR[336] - unkR[337]; //Inj_LOX.PR < Inj_LOX.PR_sl
    ev[10]= LPRES__State(&unkR[65]) - 2; //LPRES.State(HeadLoss_1.f_in.fluid) == Gas
    ev[11]= unkR[336] - unkR[337]; //Inj_LOX.PR >= Inj_LOX.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__RL10_design_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__RL10_design_design::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__RL10_design_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Gearbox.m_out.Power =  ZONE (Pump_LOX.m.Power > 0) -Pump_LOX.m.Power * Gearbox.eta OTHERS -Pump_LOX.m.Power / Gearbox.eta
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // CC.Q_comb_effective =  ZONE (CC.Combustion) CC.Q_comb OTHERS 0
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Inj_LH2.M_out =  ZONE (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl) sqrt(2 * (Inj_LH2.PR ** ((LPRES.gamma(HeadLoss_3.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_3.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_3.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Inj_LOX.M_out =  ZONE (LPRES.State(HeadLoss_1.f_in.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl) sqrt(2 * (Inj_LOX.PR ** ((LPRES.gamma(HeadLoss_1.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_1.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_1.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_1.f_in.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__RL10_design_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 12 ;
	nConstraints= 31;
	nWhen= 2;
	nZones= 4;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) != 0",
		"(CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "Pump_LOX.m.Power > 0","OTHERS",
	"CC.Combustion","OTHERS",
	"LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR < Inj_LH2.PR_sl","LPRES.State(HeadLoss_3.f_in.fluid) == Gas AND Inj_LH2.PR >= Inj_LH2.PR_sl","OTHERS",
	"LPRES.State(HeadLoss_1.f_in.fluid) == Gas AND Inj_LOX.PR < Inj_LOX.PR_sl","LPRES.State(HeadLoss_1.f_in.fluid) == Gas AND Inj_LOX.PR >= Inj_LOX.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"(CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CC.fluid_O[LOX] * CC.fluid_F[LOX] + CC.fluid_O[NTO] * CC.fluid_F[NTO] + CC.fluid_O[H2O2] * CC.fluid_F[H2O2] + CC.fluid_O[HNO3] * CC.fluid_F[HNO3] + CC.fluid_O[LF2] * CC.fluid_F[LF2] + CC.fluid_O[RP_1] * CC.fluid_F[RP_1] + CC.fluid_O[LCH4] * CC.fluid_F[LCH4] + CC.fluid_O[LH2] * CC.fluid_F[LH2] + CC.fluid_O[N2H4] * CC.fluid_F[N2H4] + CC.fluid_O[UDMH] * CC.fluid_F[UDMH] + CC.fluid_O[MMH] * CC.fluid_F[MMH] + CC.fluid_O[JP_10] * CC.fluid_F[JP_10] + CC.fluid_O[Kerox] * CC.fluid_F[Kerox] + CC.fluid_O[Oil] * CC.fluid_F[Oil] + CC.fluid_O[H2O] * CC.fluid_F[H2O] + CC.fluid_O[IPA] * CC.fluid_F[IPA] + CC.fluid_O[Air] * CC.fluid_F[Air] + CC.fluid_O[Ar] * CC.fluid_F[Ar] + CC.fluid_O[CH4] * CC.fluid_F[CH4] + CC.fluid_O[CO] * CC.fluid_F[CO] + CC.fluid_O[CO2] * CC.fluid_F[CO2] + CC.fluid_O[H2] * CC.fluid_F[H2] + CC.fluid_O[He] * CC.fluid_F[He] + CC.fluid_O[N2] * CC.fluid_F[N2] + CC.fluid_O[O2] * CC.fluid_F[O2] + CC.fluid_O[MMH_vapour] * CC.fluid_F[MMH_vapour]) == 0"},{ ZONE,GT_OP,0,0,"Pump_LOX.m.Power > 0"},{ ZONE,EQ_OP,0,0,"CC.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_3.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Inj_LH2.PR < Inj_LH2.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_3.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Inj_LH2.PR >= Inj_LH2.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_1.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Inj_LOX.PR < Inj_LOX.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_1.f_in.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Inj_LOX.PR >= Inj_LOX.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__RL10_design_design::initDelays()
{
}


bool DRLPRUEBAS__RL10_design_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__RL10_design_design = 87716;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__RL10_design_design = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__RL10_design_design[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__RL10_design_design;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__RL10_design_design;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__RL10_design_design;
return true;
}



bool DRLPRUEBAS__RL10_design_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__RL10_design_design = 216;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__RL10_design_design = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__RL10_design_design[] = 
{
"CAAAABUAAAAAAAAAAQAAAAMAAAADAAAABAAAAAEAAAABAAAABAAAAAQAAAABAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABwAAAAEAAAACAAAAAwAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__RL10_design_design;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__RL10_design_design;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__RL10_design_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__RL10_design_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__RL10_design_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__RL10_design_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__RL10_design_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__RL10_design_design(name,dirInstall);
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
	sprintf(componentName,"%s","RL10_design");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+r+l10_design.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

