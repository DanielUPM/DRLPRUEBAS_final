//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_CJ_completa_design_CPP
#define DRLPRUEBAS__CC_CJ_completa_design_CPP

#include "DRLPRUEBAS.+c+c_+c+j_completa.design.h"

DRLPRUEBAS__CC_CJ_completa_design* DRLPRUEBAS__CC_CJ_completa_design::s_current= NULL;

DRLPRUEBAS__CC_CJ_completa_design::DRLPRUEBAS__CC_CJ_completa_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_CJ_completa";
m_infoPartitionName = "design";
m_infoModelName = "DRLPRUEBAS__CC_CJ_completa_design";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+c+j_completa.design";
m_infoModelFileNameExtra = "+c+c_+c+j_completa.design";
m_perfFlag = false;
m_infoComponentDate = "18/06/2018 09:37:37.440000";
m_infoPartitionDate = "18/06/2018 09:39:34.031000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[5]; 
int nbx;
for (nbx=0; nbx < 5 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[2];
int ib;
for (ib=0; ib < 2 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[3]; 
int nibr;
for (nibr=0; nibr < 3 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[45]; 
int nif;
for (nif=0; nif < 45 ; nif++)
	m_branchIf[nif]= -1;

static const char * elmstr0[] = { "LOX", "NTO", "H2O2", "HNO3", "LF2", "RP_1", "LCH4", "LH2", "N2H4", "UDMH", "MMH", "JP_10", "Kerox", "Oil", "H2O", "IPA", 
		"Air", "Ar", "CH4", "CO", "CO2", "H2", "He", "N2", "O2", "MMH_vapour", "Comb_prod", "Comb_prod_M", "Comb_prod_cp", NULL } ;
static int elmind0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 } ;
static const char * elmstr1[] = { "Liquid", "Gas", NULL } ;
static int elmind1[] = { 1, 2 } ;
static const char * elmstr2[] = { "Convergent", "Divergent", NULL } ;
static int elmind2[] = { 1, 2 } ;
static int elmind3[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 } ;
static int elmind4[] = { 1, 7, 8, 11 } ;
static int elmind5[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } ;
static int elmind6[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind7[] = { 1, 4 } ;
static const char * elmstr8[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", NULL } ;
static int elmind8[] = { 1, 2, 3, 4, 5, 6, 7, 8 } ;
static int elmind9[] = { 8, 6 } ;
static const char * elmstr10[] = { "All", "Unknown_W", NULL } ;
static int elmind10[] = { 1, 2 } ;
static int elmind11[] = { 1, 5, 6, 7 } ;
static const char * elmstr12[] = { "Yes", "No", NULL } ;
static int elmind12[] = { 1, 2 } ;
n_typ=13;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,29,elmind0},
		{elmstr1,2,elmind1},
		{elmstr2,2,elmind2},
		{elmstr0,11,elmind3},
		{elmstr0,4,elmind4},
		{elmstr0,16,elmind5},
		{elmstr0,26,elmind6},
		{elmstr8,2,elmind7},
		{elmstr8,8,elmind8},
		{elmstr8,2,elmind9},
		{elmstr10,2,elmind10},
		{elmstr8,4,elmind11},
		{elmstr12,2,elmind12}
	} ;
typ= new struct INTEG_enumType[13];
etypecopy(13,typ,tmp_typ);
n_dyn=5;
dyn= new double[5] ;
static double tmp_dynInit[5]={ 1, 1, 1, 100, 100 } ;
dynInit= new double[5];
dcopy(5,dynInit,tmp_dynInit);


n_der=0;
der= new double[5] ;
static double tmp_derInit[5]={ 0, 0, 0, 0, 0 } ;
derInit= new double[5];
dcopy(5,derInit,tmp_derInit);


res= new double[5] ;
ldr= new double[5] ;
boxDyn= new double[5] ;
boxDer= new double[5] ;

n_unkR=319;
unkR= new double[319] ;
static double tmp_unkRInit[319]={ 56.88798558, 14, 1, 0, 0.0134109877, 0, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 
		0, 4000, 3180.92667, 0, 0, 1000, 0, 0, 0, 0, 3700, 0, 0.99, 1, 2.70069069, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3275010, 1, 16.3526821, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 0, 0, 0, 0, 0, 19.0533728, 5000000, 0, 1.45944999, 0, 0.032, 0, 
		0, 0, 0, 1.475994, 0, 0, 0, 3180.93, 0, 0.00100103471, 0.00813274823, 100000, 0, 1, 1, 0, 
		0, 0, 16.09, 31.3343538, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 7547798.88, 19.05, 0.567, 0, 5e-05, 0.000583419169, 0.058, 0, 0.00178349971, 0, 0, 0.5, 0, 10, 
		0, 0, 1, 0, 0, 0.000580606872, 0, 0, 0.5, 0, 10, 0, 0, 99.1952397, 4597104.18, 0, 
		0, 2.70069069, 16.3526821, 0, 100000, 0, 1500, 0.1, 1200000, 0, 0, 0, 0, 0, 0 } ;
unkRInit= new double[319];
dcopy(319,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=10;
static int tmp_cteIInit[10]={ 1, 1, 1, 8, 1, 1, 2, 2, 1, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=19;
static std::string tmp_cteSInit[19]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 15;
n_neld= 0;
m_numBoxes= 4;
m_nNonLinearBoxes= 4;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_CJ_completa_design::initInternalModels()
{
}

void DRLPRUEBAS__CC_CJ_completa_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi1;
	int _vi2;

	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[0]) ) {
	_vi2 = setofElem(&typ[0], _vi1) ;
	fluid[_vi1-1] = 0. ;
	_vi1 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double DRLPRUEBAS__CC_CJ_completa_design::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[6]) ) {
	_vi4 = setofElem(&typ[6], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


int DRLPRUEBAS__CC_CJ_completa_design::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi5;
	int _vi6;

	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[6]) ) {
	_vi6 = setofElem(&typ[6], _vi5) ;
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


int DRLPRUEBAS__CC_CJ_completa_design::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[5], fluid_name) != 0 ) {
	fluid_state = 1 ;
	}
	else {
	fluid_state = 2 ;
	}
	return fluid_state ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi7;
	int _vi8;
	double _vr2;

	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[6]) ) {
	_vi8 = setofElem(&typ[6], _vi7) ;
	_vr2 += _div( fluid[_vi8-1] , Chem_M[_vi7-1],"Chem_M[_vi7]") ;
	_vi7 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_CJ_completa_design::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__rho(double fluid[])
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
	while ( _vi9 <= setofSize(&typ[5]) ) {
	_vi10 = setofElem(&typ[5], _vi9) ;
	_vr3 += Chem_rho[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[16] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002 };
	int _vi11;
	int _vi12;
	double _vr4;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",273,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi11 = 1 ;
	while ( _vi11 <= setofSize(&typ[5]) ) {
	_vi12 = setofElem(&typ[5], _vi11) ;
	_vr4 += Chem_visc[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__ISA_Pressure(const double & z)
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
	int _vi13;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi13 = 1 ;
	while ( _vi13 <= 7 ) {
	if( h > h_max[_vi13-1] ) {
	if( b[_vi13-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi13-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi13-1] * (h_max[_vi13-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi13-1] * 287./1000.),"a[_vi13] * 287 / 1000")),"((T_0 + a[_vi13] * (h_max[_vi13] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi13] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi13-1] * (h_max[_vi13-1] - h_0)/1000. ;
	h_0 = h_max[_vi13-1] ;
	j = _vi13 + 1 ;
	}
	_vi13 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


int DRLPRUEBAS__CC_CJ_completa_design::LPRES__Vaporisation(double fluid[])
{
	// Local variables:
	int Vapour[4] = { 25,19,22,26 };
	int liquid_name = 1;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",109,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	liquid_name = LPRES__Know_fluid(fluid) ;
	if(!(setofPos(&typ[4], liquid_name) != 0))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",113,".","setofPos(LPRES.LV, liquid_name) != 0","%s","ONLY LIQUIDS IN ENUM LV CAN BE VAPORISED!");

	return Vapour[setofPos(&typ[4], liquid_name)-1] ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__cond(double fluid[])
{
	// Local variables:
	double Chem_cond[16] = { 0.149,0.131,0.353,0.294,0.1,0.137,0.15,0.117,0.488,0.035,0.246,0.11,0.17,0.12,0.607,0.145 };
	int _vi14;
	int _vi15;
	double _vr5;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",253,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr5 = 0. ;
	_vi14 = 1 ;
	while ( _vi14 <= setofSize(&typ[5]) ) {
	_vi15 = setofElem(&typ[5], _vi14) ;
	_vr5 += Chem_cond[_vi14-1] * fluid[_vi15-1] ;
	_vi14 += 1 ;
	}
	return _vr5 ;
}


double DRLPRUEBAS__CC_CJ_completa_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


/* Copy special unkR[] items to dyn[] vector */

void DRLPRUEBAS__CC_CJ_completa_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_CJ_completa_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[183]) ;
	unkI[0] = 1 ;
	unkR[219] = 1. ;
	unkR[20] = unkR[21] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
	unkR[215] = _div( 1. , unkR[217],"CombCha_1.mfr_ch") ;
	unkR[216] = _div( 1. , (unkR[217] * unkR[18]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(LH2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[245]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[245]), &unkR[31]) ;
	unkR[232] = 500. ;
	unkR[240] = _div( 1. , unkR[275],"CoolingJacket.mfr_ch") ;
	unkR[241] = _div( 1. , (unkR[275] * unkR[231]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_CJ_completa_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-133]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[183]) , _sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1) * _pow( dyn[0] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[183]) + 1) , (2 * (LPRES__gamma(&unkR[183]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_CJ_completa_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_CJ_completa_design& m= *DRLPRUEBAS__CC_CJ_completa_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_CJ_completa_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(5, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_CJ_completa_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_CJ_completa_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-144]  ThrustMonitor.g.Tt = (CombCha_1.c_star * LPRES.FGAMMA(ThrustMonitor.g.fluid)) ** 2 / LPRES.R(ThrustMonitor.g.fluid)
unkR[181] = _div( _pow( (dyn[1] * LPRES__FGAMMA(&unkR[183])) , 2.,"(CombCha_1.c_star * LPRES.FGAMMA(ThrustMonitor.g.fluid))**(2)" ) , LPRES__R(&unkR[183]),"LPRES.R(ThrustMonitor.g.fluid)") ;
//[E-145]  CombCha_1.A_th_d = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CombCha_1.p_c
unkR[5] = _div( unkR[182] * _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[61],"CombCha_1.p_c") ;
//[E-146]  CombCha_1.A_r = CombCha_1.A_th_d * CombCha_1.AR_r
unkR[3] = unkR[5] * unkR[1] ;
//[E-147]  CombCha_1.T_aw = ThrustMonitor.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[15] = unkR[181] * _div( (1. + _pow( unkR[12] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[183]) - 1.) * _pow( dyn[0] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[183]) - 1.) * _pow( dyn[0] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-148]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[223] = 1.184e-07 * _pow( LPRES__M(&unkR[183]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-149]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th_d / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th_d / CombCha_1.A_r) ** 0.9
unkR[213] = _div( 0.026 , _pow( _sqrt(4. * unkR[5]/3.14159265358979,"4 * CombCha_1.A_th_d / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th_d / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th_d / 3.14159265358979) ** 0.2") * _div( _pow( unkR[223] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[183]) , _pow( unkR[12] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , dyn[1],"CombCha_1.c_star")) , 0.8,"(CombCha_1.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[5] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th_d / CombCha_1.A_r)**(0.9)" ) ;
//[E-150]  CoolingJacket.h.Q = CombCha_1.h_g * (CombCha_1.T_aw - CoolingJacket.h.T) * CombCha_1.A_wet
unkR[212] = unkR[213] * (unkR[15] - dyn[2]) * unkR[6] ;
//[E-151]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + LH2_circuit.Tt
unkR[232] = _div( _div( unkR[212] , unkR[224],"CoolingJacket.A_wet_cooling") , unkR[239],"CoolingJacket.h_l") + unkR[243] ;
//[E-152]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha_1.A_wet
res[1] = evalNormResidueInternal(1,unkR[212],_div( unkR[242] , unkR[279],"CoolingJacket.t_w") * (dyn[2] - unkR[232]) * unkR[6]);
//[E-153]  Injector_F.f_in.Tt = (CoolingJacket.l.W * LH2_circuit.Tt - -CoolingJacket.h.Q / LPRES.cp(CombCha_1.f_F.fluid)) / Injector_F.W
unkR[237] = _div( (unkR[244] * unkR[243] - _div( -unkR[212] , LPRES__cp(&unkR[31]),"LPRES.cp(CombCha_1.f_F.fluid)")) , unkR[30],"Injector_F.W") ;
//[E-154]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[237] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[286] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[237] ;
}
//[E-155]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[11],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[11],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-156]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[28] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-157]  (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (ThrustMonitor.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha_1.f_F.T) = 0
res[2] = evalNormResidueInternal(2,_div( (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (unkR[181] - unkR[16]) + _div( unkR[24] , unkR[182],"ThrustMonitor.g.W") * unkR[92] * (unkR[181] - unkR[62]) + _div( unkR[23] , unkR[182],"ThrustMonitor.g.W") * unkR[59] * (unkR[181] - unkR[29]),0);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_CJ_completa_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_CJ_completa_design& m= *DRLPRUEBAS__CC_CJ_completa_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_CJ_completa_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(5, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_CJ_completa_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_CJ_completa_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-160]  ThrustMonitor.g.A_out / CombCha_1.A_th_d = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,_div( unkR[2] , unkR[5],"CombCha_1.A_th_d"),_div( LPRES__FGAMMA(&unkR[183]) , (_pow( (_div( dyn[3] , unkR[61],"CombCha_1.p_c")) , (_div( 1 , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[183]) * (1. - _pow( (_div( dyn[3] , unkR[61],"CombCha_1.p_c")) , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[183]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_CJ_completa_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_CJ_completa_design& m= *DRLPRUEBAS__CC_CJ_completa_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_CJ_completa_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(5, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_CJ_completa_design::fcn3, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_CJ_completa_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-178]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[4] = evalNormResidueInternal(4,_div( _div( unkR[182] * _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.p_c"),_sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[4] * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1)/2 * _pow( dyn[4] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[183]) + 1)/2 , (LPRES__gamma(&unkR[183]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_CJ_completa_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_CJ_completa_design& m= *DRLPRUEBAS__CC_CJ_completa_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_CJ_completa_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(5, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_CJ_completa_design::fcn4, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_CJ_completa_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
//[E-2]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[182] = unkR[63] + unkR[30] ;
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  CombCha_1.W_O = Injector_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[25] = unkR[63] * (1. - unkR[90]) ;
//[E-5]  LPRES.Init_fluid(LPRES.Vaporisation(CoolingJacket.l.fluid), CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[245]), &unkR[31]);
//[E-6]  CombCha_1.W_F = Injector_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[20] = unkR[30] * (1. - unkR[57]) ;
//[E-7]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[10] = _div( unkR[25] , unkR[20],"CombCha_1.W_F") ;
//[E-8]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[11] , unkR[10],"CombCha_1.OF") ;
//[E-9]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[22] = _div( unkR[20] , unkR[219],"CombCha_1.phi") ;
//[E-11]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[25] + unkR[94] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-12]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[152] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-13]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[25] + unkR[95] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-16]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[153] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-17]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[25] + unkR[96] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-20]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[154] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-21]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[25] + unkR[97] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-24]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[155] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-25]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[25] + unkR[98] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-28]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[156] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-29]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[25] + unkR[99] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-32]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[157] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-33]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[25] + unkR[100] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-36]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[158] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-37]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[25] + unkR[101] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-40]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[159] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-41]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[25] + unkR[102] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-44]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[160] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-45]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[25] + unkR[103] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-48]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[161] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-49]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[25] + unkR[104] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-52]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[162] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-53]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[25] + unkR[105] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-56]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[163] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-57]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[25] + unkR[106] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-60]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[164] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-61]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-62]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-63]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[25] + unkR[107] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-64]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[165] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-65]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-66]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-67]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[25] + unkR[108] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-68]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[166] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-69]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-70]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-71]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[25] + unkR[109] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-72]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[167] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-73]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-74]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-75]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[25] + unkR[110] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-76]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[168] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-77]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-78]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-79]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[25] + unkR[111] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[169] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-81]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-82]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-83]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[25] + unkR[112] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[170] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-85]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-86]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-87]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[25] + unkR[113] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[171] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-89]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-90]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-91]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[25] + unkR[114] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[172] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-93]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-94]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-95]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[25] + unkR[115] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[173] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-97]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-98]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-99]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[25] + unkR[116] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[174] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-101]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-102]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-103]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[25] + unkR[117] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[175] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-105]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-106]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-107]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[25] + unkR[118] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[176] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-109]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-110]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-111]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[25] + unkR[119] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-112]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[177] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-113]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-114]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-115]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[25] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[22] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[25] + unkR[22])) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-116]  CombCha_1.W_IO = Injector_O.W - CombCha_1.W_O
unkR[24] = unkR[63] - unkR[25] ;
//[E-117]  CombCha_1.W_IF = Injector_F.W - CombCha_1.W_F
unkR[23] = unkR[30] - unkR[20] ;
//[E-118]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[209] = _div( (unkR[178] * (unkR[25] + unkR[20]) + unkR[24] + unkR[23]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-119]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[7] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-120]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[210] = unkR[179] ;
//[E-121]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-122]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[211] = unkR[180] ;
//[E-123]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[14] = unkR[13] ;
else unkR[14] = 0. ;
//[E-124]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-125]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-126]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-127]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-128]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[25] * LPRES__cp(&unkR[123]) + unkR[20] * LPRES__cp(&unkR[94])) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-129]  Injector_O.PR = LO2_circuit.pt / CombCha_1.p_c
unkR[298] = _div( unkR[302] , unkR[61],"CombCha_1.p_c") ;
//[E-130]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[297] = _sqrt(_div( 2. * (_pow( unkR[298] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[297] = 1. ;
else unkR[297] = 0. ;
//[E-131]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[301] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[297] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[301] ;
}
//[E-132]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[183]) , (9. * LPRES__gamma(&unkR[183]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-134]  LPRES.Init_fluid(LH2_circuit.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[3], &unkR[245]);
//[E-135]  CoolingJacket.l.W = Injector_F.W
unkR[244] = unkR[30] ;
//[E-136]  CoolingJacket.v = CoolingJacket.l.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)) / CoolingJacket.N
unkR[281] = _div( _div( unkR[244] , (unkR[233] * unkR[234] * LPRES__rho(&unkR[245])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-137]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[226] = _div( 2. * unkR[233] * unkR[234] , (unkR[233] + unkR[234]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-138]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[230] = _div( LPRES__rho(&unkR[245]) * unkR[281] * unkR[226] , LPRES__visc(&unkR[245]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-139]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__visc(&unkR[245]) * LPRES__cp(&unkR[245]) , LPRES__cond(&unkR[245]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-140]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[228] = 0.027 * _pow( unkR[230] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[229] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-141]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[239] = _div( unkR[228] * LPRES__cond(&unkR[245]) , unkR[226],"CoolingJacket.D_hy") ;
//[E-142]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[224] = unkI[2] * 2. * (unkR[233] + unkR[234]) * unkR[227] ;
//[E-143]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[286] = _sqrt(_div( 2. * (_pow( unkR[287] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[286] = 1. ;
else unkR[286] = 0. ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-158]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th_d
unkR[2] = unkR[0] * unkR[5] ;
//[E-159]  CombCha_1.rho_trans = CombCha_1.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha_1.fluid_P)
unkR[221] = _div( _div( unkR[61] , unkR[181],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[152]),"LPRES.R(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-161]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[214] = dyn[1] ;
//[E-162]  Injector_F.f_in.pt = Injector_F.PR * CombCha_1.p_c
unkR[290] = unkR[287] * unkR[61] ;
//[E-163]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[288] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[288] = 0. ;
}
//[E-164]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[291] = _div( unkR[290] , unkR[288],"Injector_F.PR_sl") ;
}
else 
{
unkR[291] = 0. ;
}
//[E-165]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) * Injector_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[284] = _div( _sqrt(unkR[237] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[290]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[284] = 0. ;
}
//[E-166]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[291]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-167]  Injector_F.A_d =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = _div( unkR[284] * _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[286] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[286],"Injector_F.M_out") ;
}
else 
{
unkR[283] = _div( _div( unkR[30] , unkR[285],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[290] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"),"sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))") ;
}
//[E-168]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[292] = unkR[286] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[292] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[283] * unkR[285]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-169]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[289] = 0. ;
}
else 
{
unkR[289] = _div( LPRES__rho(&unkR[31]) * unkR[292] * unkR[285] * _sqrt(4. * unkR[283]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-170]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[299] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[299] = 0. ;
}
//[E-171]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[303] = _div( unkR[302] , unkR[299],"Injector_O.PR_sl") ;
}
else 
{
unkR[303] = 0. ;
}
//[E-172]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * Injector_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[295] = _div( _sqrt(unkR[301] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[302]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[295] = 0. ;
}
//[E-173]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[303]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-174]  Injector_O.A_d =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[294] = _div( unkR[295] * _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[297] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[297],"Injector_O.M_out") ;
}
else 
{
unkR[294] = _div( _div( unkR[63] , unkR[296],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[302] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)"),"sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))") ;
}
//[E-175]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[304] = unkR[297] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[304] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[294] * unkR[296]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-176]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[300] = 0. ;
}
else 
{
unkR[300] = _div( LPRES__rho(&unkR[64]) * unkR[304] * unkR[296] * _sqrt(4. * unkR[294]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-177]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[316] = LPRES__ISA_Pressure(unkR[307]) ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-179]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[313] = _div( unkR[181] , (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-180]  ThrustMonitor.p_out = CombCha_1.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[317] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-181]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[318] = dyn[4] * _sqrt(LPRES__gamma(&unkR[183]) * LPRES__R(&unkR[183]) * unkR[313],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-182]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[314] = unkR[182] * unkR[318] + unkR[2] * (unkR[317] - unkR[316]) ;
//[E-183]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[315] = unkR[314] ;
//[E-184]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[225] = _div( 1.3 * _pow( (unkR[233] * unkR[234]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[233] + unkR[234]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-185]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[236] = LPRES__hdc_fric(unkR[225], unkR[278], unkR[230]) ;
//[E-186]  Regulator_1.f_in.pt = LH2_circuit.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
unkR[238] = unkR[274] - _div( unkR[236] * unkR[227] , unkR[225],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[245]) * _pow( unkR[281] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-187]  CoolingJacket.rho_trans = Regulator_1.f_in.pt / Injector_F.f_in.Tt / LPRES.R(CombCha_1.f_F.fluid)
unkR[277] = _div( _div( unkR[238] , unkR[237],"Injector_F.f_in.Tt") , LPRES__R(&unkR[31]),"LPRES.R(CombCha_1.f_F.fluid)") ;
//[E-188]  Regulator_1.dp_d = Regulator_1.f_in.pt - Injector_F.f_in.pt
unkR[309] = unkR[238] - unkR[290] ;

//save last residues
memcpy(this->res,res,5*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_CJ_completa_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[183])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[4] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[317] , unkR[316],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[4] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[245])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_CJ_completa_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[287] - unkR[288]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[287] - unkR[288]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[298] - unkR[299]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[298] - unkR[299]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_CJ_completa_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_CJ_completa_design::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_CJ_completa_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_CJ_completa_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 11 ;
	nConstraints= 29;
	nWhen= 2;
	nZones= 3;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha_1.Combustion","OTHERS",
	"LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,5 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[11]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_F.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__CC_CJ_completa_design::initDelays()
{
}


bool DRLPRUEBAS__CC_CJ_completa_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_CJ_completa_design = 51740;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_CJ_completa_design = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_CJ_completa_design[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_CJ_completa_design;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_CJ_completa_design;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_CJ_completa_design;
return true;
}



bool DRLPRUEBAS__CC_CJ_completa_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_CJ_completa_design = 152;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_CJ_completa_design = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_CJ_completa_design[] = 
{
"BQAAAA8AAAAAAAAAAQAAAAMAAAADAAAABAAAAAQAAAABAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAUAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_CJ_completa_design;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_CJ_completa_design;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_CJ_completa_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_CJ_completa_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_CJ_completa_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_CJ_completa_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_CJ_completa_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_CJ_completa_design(name,dirInstall);
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
	sprintf(componentName,"%s","CC_CJ_completa");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+c+j_completa.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

