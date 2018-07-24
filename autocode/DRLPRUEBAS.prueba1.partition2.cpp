//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__prueba1_partition2_CPP
#define DRLPRUEBAS__prueba1_partition2_CPP

#include "DRLPRUEBAS.prueba1.partition2.h"

DRLPRUEBAS__prueba1_partition2* DRLPRUEBAS__prueba1_partition2::s_current= NULL;

DRLPRUEBAS__prueba1_partition2::DRLPRUEBAS__prueba1_partition2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "prueba1";
m_infoPartitionName = "partition2";
m_infoModelName = "DRLPRUEBAS__prueba1_partition2";
m_infoModelFileName = "DRLPRUEBAS.prueba1.partition2";
m_infoModelFileNameExtra = "prueba1.partition2";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 11:15:38.836000";
m_infoPartitionDate = "29/06/2018 11:21:34.304000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[7]; 
int nbx;
for (nbx=0; nbx < 7 ; nbx++)
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
static const char * elmstr9[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", "Gas_valve", NULL } ;
static int elmind9[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;
static int elmind10[] = { 8, 6 } ;
static const char * elmstr11[] = { "All", "Unknown_W", NULL } ;
static int elmind11[] = { 1, 2 } ;
static int elmind12[] = { 1, 5, 6, 7, 9 } ;
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
		{elmstr9,9,elmind9},
		{elmstr9,2,elmind10},
		{elmstr11,2,elmind11},
		{elmstr9,5,elmind12},
		{elmstr9,3,elmind13},
		{elmstr14,2,elmind14}
	} ;
typ= new struct INTEG_enumType[15];
etypecopy(15,typ,tmp_typ);
n_dyn=13;
dyn= new double[13] ;
static double tmp_dynInit[13]={ 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 100, 1, 100 } ;
dynInit= new double[13];
dcopy(13,dynInit,tmp_dynInit);


n_der=4;
der= new double[13] ;
static double tmp_derInit[13]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[13];
dcopy(13,derInit,tmp_derInit);


res= new double[13] ;
ldr= new double[13] ;
boxDyn= new double[13] ;
boxDer= new double[13] ;

static int tmp_frozenVars[4] = { 0,0,0,0 } ;
frozenVars= new int[4];
icopy(4,frozenVars,tmp_frozenVars);

n_unkR=418;
unkR= new double[418] ;
static double tmp_unkRInit[418]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
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
		1, 0, 1, 0, 0, 0, 0, 10, 3275010, 5000000, 1, 0.032, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 3180.93, 0, 0.00100103471, 0.00813274823, 100000, 
		0, 1, 0, 0, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 19.05, 0.567, 5e-05, 0.000583419169, 0.032, 0, 0, 1, 1, 0, 2.43566574, 
		1, 1, 0, 1, 0, 0.001, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 0, 0.001, 
		0, 3254.325, 1500, 0.1, 21.11111, 193053.2, 1, 1200000, 0, 0.001, 0, 5502.016, 1500, 0.1, 98.05556, 320606.2, 
		1, 1200000, 0, 0.001, 0, 124105.6, 1500, 0.1, 1, 1, 1, 1, 1200000, 0, 0.00178349971, 0, 
		0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 
		0, 0, 1, 1, 1, 0, 0.000677279675, 0, 0, 850, 7358000, 0.573907002, 0, 0.0656, 0, 0.2533, 
		0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 0.6508, 0, 0.03027, 0, 0.05393, 0.194281146, 0, 0.001, 0, 
		3219188.99, 1500, 0.1, 1, 1200000, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0.000513113762, 0.1, 
		0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 0.715229315, 
		38172.635, 0 } ;
unkRInit= new double[418];
dcopy(418,unkRInit,tmp_unkRInit);


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
n_nelg= 128;
n_neld= 6;
m_numBoxes= 6;
m_nNonLinearBoxes= 5;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__prueba1_partition2::initInternalModels()
{
}

void DRLPRUEBAS__prueba1_partition2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__prueba1_partition2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


int DRLPRUEBAS__prueba1_partition2::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__prueba1_partition2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__prueba1_partition2::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi5;
	int _vi6;
	double _vr1;

	_vr1 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[7]) ) {
	_vi6 = setofElem(&typ[7], _vi5) ;
	_vr1 += _div( fluid[_vi6-1] , Chem_M[_vi5-1],"Chem_M[_vi5]") ;
	_vi5 += 1 ;
	}
	return _div( 1 , (_vr1 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr1 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi7;
	int _vi8;
	double _vr2;

	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[7]) ) {
	_vi8 = setofElem(&typ[7], _vi7) ;
	_vr2 += Chem_cp[_vi7-1] * fluid[_vi8-1] ;
	_vi7 += 1 ;
	}
	return _vr2 + fluid[28] * fluid[26] ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__prueba1_partition2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__prueba1_partition2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__visc(double fluid[])
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
	while ( _vi11 <= setofSize(&typ[6]) ) {
	_vi12 = setofElem(&typ[6], _vi11) ;
	_vr4 += Chem_visc[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__prueba1_partition2::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__prueba1_partition2::LPRES__cond(double fluid[])
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
	while ( _vi14 <= setofSize(&typ[6]) ) {
	_vi15 = setofElem(&typ[6], _vi14) ;
	_vr5 += Chem_cond[_vi14-1] * fluid[_vi15-1] ;
	_vi14 += 1 ;
	}
	return _vr5 ;
}


double DRLPRUEBAS__prueba1_partition2::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__prueba1_partition2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__prueba1_partition2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[63]) ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[247]) ;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[180]) ;
	unkI[0] = 1 ;
	dyn[5] = 1. ;
	dyn[4] = unkR[19] ;
	if( unkI[1] == 1 ) {
	dyn[11] = 0.001 ;
	}
	else {
	dyn[11] = 100. ;
	}
	unkR[213] = _div( 1. , unkR[215],"CombCha.mfr_ch") ;
	unkR[214] = _div( 1. , (unkR[215] * unkR[17]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[247]), &unkR[30]) ;
	unkR[236] = 500. ;
	unkR[243] = _div( 1. , unkR[277],"CoolingJacket.mfr_ch") ;
	unkR[244] = _div( 1. , (unkR[277] * unkR[235]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Pump_F.Pump,0)
	dyn[7] = unkR[361] ;
  // init(Pump_O.Pump,0)
	unkR[372] = unkR[373] ;
  // init(Turbine.Turbine,0)
	dyn[8] = unkR[399] ;
	unkR[401] = unkR[402] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__prueba1_partition2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-79]  HeadLoss_Junct.f_in.W = CombCha.W_F / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[29] = _div( dyn[4] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-80]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[20] = _div( dyn[4] , dyn[5],"CombCha.phi") ;
//[E-81]  CombCha.OF = CombCha.OF_st / CombCha.phi
unkR[9] = _div( unkR[10] , dyn[5],"CombCha.phi") ;
//[E-82]  CombCha.W_O = CombCha.OF * CombCha.W_F
unkR[23] = unkR[9] * dyn[4] ;
//[E-83]  HeadLoss_TO.f_in.W = CombCha.W_O / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[62] = _div( unkR[23] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-84]  CombCha.fluid_P[LOX] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-85]  CombCha.fluid_P[NTO] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-86]  CombCha.fluid_P[H2O2] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-87]  CombCha.fluid_P[HNO3] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-88]  CombCha.fluid_P[LF2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-89]  CombCha.fluid_P[RP_1] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-90]  CombCha.fluid_P[LCH4] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-91]  CombCha.fluid_P[LH2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-92]  CombCha.fluid_P[N2H4] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-93]  CombCha.fluid_P[UDMH] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-94]  CombCha.fluid_P[MMH] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-95]  CombCha.fluid_P[JP_10] =  IF[28] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-96]  CombCha.fluid_P[Kerox] =  IF[29] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-97]  CombCha.fluid_P[Oil] =  IF[30] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-98]  CombCha.fluid_P[H2O] =  IF[31] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-99]  CombCha.fluid_P[IPA] =  IF[32] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-100]  CombCha.fluid_P[Air] =  IF[33] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-101]  CombCha.fluid_P[Ar] =  IF[34] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-102]  CombCha.fluid_P[CH4] =  IF[35] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-103]  CombCha.fluid_P[CO] =  IF[36] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-104]  CombCha.fluid_P[CO2] =  IF[37] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-105]  CombCha.fluid_P[H2] =  IF[38] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-106]  CombCha.fluid_P[He] =  IF[39] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-107]  CombCha.fluid_P[N2] =  IF[40] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-108]  CombCha.fluid_P[O2] =  IF[41] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-109]  CombCha.fluid_P[MMH_vapour] =  IF[42] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-110]  CombCha.fluid_P[Comb_prod] =  IF[43] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[5] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[5], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-111]  CombCha.f_O.p_c = CombCha.rho_trans * LPRES.R(CombCha.fluid_P) * CombCha.g.Tt
unkR[60] = dyn[0] * LPRES__R(&unkR[151]) * dyn[1] ;
//[E-112]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[338] = _div( unkR[300] , unkR[60],"CombCha.f_O.p_c") ;
//[E-113]  Injector_F.M_out =  ZONE[2] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[2] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[337] = _sqrt(_div( 2. * (_pow( unkR[338] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[337] = 1. ;
else unkR[337] = 0. ;
//[E-114]  CombCha.f_F.p =  IF[4] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[342]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-115]  Pump_F.phi = HeadLoss_TF.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[364] = _div( dyn[6] , (unkR[358] * dyn[7] * LPRES__rho(&unkR[247])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-116]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi
unkR[366] = 1. - _div( (1. - unkR[367]) , unkR[365],"Pump_F.phi_d") * unkR[364] ;
//[E-117]  Pump_F.tau = Pump_F.psi * Pump_F.U ** 2
unkR[369] = unkR[366] * _pow( dyn[7] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-118]  CoolingJacket.l.pt = Pump_F.tau * Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid) + Pump_F.f_in.pt
unkR[276] = unkR[369] * unkR[363] * LPRES__rho(&unkR[247]) + unkR[310] ;
//[E-119]  Pump_F.m.Power = -(Pump_F.tau * HeadLoss_TF.f_in.W)
unkR[360] = -(unkR[369] * dyn[6]) ;
//[E-120]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[282] = _div( _div( dyn[6] , (unkR[237] * unkR[238] * LPRES__rho(&unkR[247])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-121]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[234] = _div( LPRES__rho(&unkR[247]) * unkR[282] * unkR[230] , LPRES__visc(&unkR[247]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-122]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[240] = LPRES__hdc_fric(unkR[229], unkR[279], unkR[234]) ;
//[E-123]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
res[4] = evalNormResidueInternal(4,unkR[241],unkR[276] - _div( unkR[240] * unkR[231] , unkR[229],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[247]) * _pow( unkR[282] , 2,"(CoolingJacket.v)**(2)" ));
//[E-124]  Turbine.m.N = Pump_F.U / Pump_F.r_m
unkR[291] = _div( dyn[7] , unkR[368],"Pump_F.r_m") ;
//[E-125]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[289] = _div( unkR[291] , unkR[287],"Gearbox.GR") ;
//[E-126]  Pump_O.U = Pump_O.m.N * Pump_O.r_m
unkR[372] = unkR[289] * unkR[380] ;
//[E-127]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[376] = _div( unkR[62] , (unkR[370] * unkR[372] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-128]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi
unkR[378] = 1. - _div( (1. - unkR[379]) , unkR[377],"Pump_O.phi_d") * unkR[376] ;
//[E-129]  Pump_O.tau = Pump_O.psi * Pump_O.U ** 2
unkR[381] = unkR[378] * _pow( unkR[372] , 2.,"(Pump_O.U)**(2)" ) ;
//[E-130]  FlowMeter_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid) + Pump_O.f_in.pt
unkR[285] = unkR[381] * unkR[375] * LPRES__rho(&unkR[63]) + unkR[320] ;
//[E-131]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[284] = _div( _div( (unkR[285] - unkR[320]) , LPRES__rho(&unkR[63]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[375],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[318] ;
//[E-132]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[348] = _div( unkR[285] , unkR[60],"CombCha.f_O.p_c") ;
//[E-133]  Injector_O.M_out =  ZONE[3] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[347] = _sqrt(_div( 2. * (_pow( unkR[348] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[347] = 1. ;
else unkR[347] = 0. ;
//[E-134]  Injector_O.p_out_ch =  IF[10] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[352] = _div( unkR[285] , unkR[349],"Injector_O.PR_sl") ;
}
else 
{
unkR[352] = 0. ;
}
//[E-135]  CombCha.f_O.p =  IF[12] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[352]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-136]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[5] = evalNormResidueInternal(5,unkR[62],_div( _div( unkR[344] * LPRES__FGAMMA(&unkR[63]) * unkR[285] , _sqrt(unkR[284] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[347] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[347],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[5] = evalNormResidueInternal(5,unkR[62],unkR[344] * unkR[346] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[285] - unkR[92]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-137]  Pump_O.m.Power = -(Pump_O.tau * HeadLoss_TO.f_in.W)
unkR[290] = -(unkR[381] * unkR[62]) ;
//[E-138]  Gearbox.m_out.Power =  ZONE[1] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[0]==0)
	unkR[292] = -unkR[290] * unkR[288] ;
else unkR[292] = _div( -unkR[290] , unkR[288],"Gearbox.eta") ;
//[E-139]  Turbine.m.Power = Gearbox.m_out.Power - Pump_F.m.Power
unkR[400] = unkR[292] - unkR[360] ;
//[E-140]  HeadLoss_Turb.f_in.W = Turbine.m.Power / (CoolingJacket.g.Tt - HeadLoss_Turb.f_in.Tt) / LPRES.cp(HeadLoss_Turb.f_in.fluid)
unkR[329] = _div( _div( unkR[400] , (dyn[3] - unkR[328]),"CoolingJacket.g.Tt - HeadLoss_Turb.f_in.Tt") , LPRES__cp(&unkR[30]),"LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-141]  HeadLoss_Turb.f_in.W + Junction.f_in1.W = HeadLoss_Junct.f_in.W
unkR[355] = unkR[29] - unkR[329] ;
//[E-142]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -CoolingJacket.g.Tt) - HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[298] = _div( (-(_div( unkR[355] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -dyn[3]) - _div( unkR[329] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[328]) , (_div( unkR[355] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) + _div( unkR[329] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30])),"Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-143]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[6] = evalNormResidueInternal(6,unkR[29],_div( _div( unkR[334] * LPRES__FGAMMA(&unkR[30]) * unkR[300] , _sqrt(unkR[298] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[337] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[337],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[6] = evalNormResidueInternal(6,unkR[29],unkR[334] * unkR[336] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[300] - unkR[59]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-144]  HeadLoss_Turb.f_in.W * sqrt(CoolingJacket.g.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (Turbine.f_in.pt * Turbine.A_in) = sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))
res[7] = evalNormResidueInternal(7,_div( unkR[329] * _sqrt(dyn[3] * LPRES__R(&unkR[30]),"CoolingJacket.g.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (unkR[391] * unkR[398]),"Turbine.f_in.pt * Turbine.A_in"),_sqrt(LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[8], 1.) * cos(unkR[407] * 3.14159265358979/180.) * _pow( (1 + (LPRES__gamma(&unkR[30]) - 1)/2 * _pow( MATH__min(dyn[8], 1.) , 2,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[30]) + 1)/2 , (LPRES__gamma(&unkR[30]) - 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ));
//[E-145]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[417] = _div( unkR[400] , unkR[329],"HeadLoss_Turb.f_in.W") ;
//[E-146]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[401] = unkR[291] * unkR[415] ;
//[E-147]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[413] = _div( unkR[417] , _pow( unkR[401] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-148]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[410] = _div( (unkR[413] + 1.) , (tan(unkR[407] * 3.14159265358979/180.) - tan(unkR[408] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-149]  Turbine.V_z2 = Turbine.phi * Turbine.U
unkR[404] = unkR[410] * unkR[401] ;
//[E-150]  Turbine.V_2 = Turbine.V_z2 / cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[403] = _div( unkR[404] , cos(unkR[407] * 3.14159265358979/180.),"cos(Turbine.alpha_2 * 3.14159265358979 / 180)") ;
//[E-151]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
res[8] = evalNormResidueInternal(8,unkR[403],dyn[8] * _sqrt(_div( LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * dyn[3] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( dyn[8] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition2& m= *DRLPRUEBAS__prueba1_partition2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__prueba1_partition2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition2::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__prueba1_partition2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-174]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[180] = _div( unkR[151] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-175]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-176]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-177]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-178]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-179]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-180]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-181]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-182]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-183]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-184]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-185]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-186]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-187]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-188]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-189]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-190]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-191]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-192]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-193]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-194]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-195]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-196]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-197]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-198]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-199]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-200]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[206] = _div( (unkR[177] * (unkR[23] + dyn[4]) + unkR[22] + unkR[21]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-201]  ThrustMonitor.g.W = CombCha.f_O.p_c * CombCha.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[9] = evalNormResidueInternal(9,dyn[9],_div( unkR[60] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition2& m= *DRLPRUEBAS__prueba1_partition2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__prueba1_partition2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition2::fcn2, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__prueba1_partition2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-212]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[10] = evalNormResidueInternal(10,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[180]) , (_pow( (_div( dyn[10] , unkR[60],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[180]) * (1. - _pow( (_div( dyn[10] , unkR[60],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[180]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition2& m= *DRLPRUEBAS__prueba1_partition2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__prueba1_partition2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition2::fcn3, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__prueba1_partition2::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-215]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[11] = evalNormResidueInternal(11,unkR[1],_div( _div( 1 , dyn[11],"CombCha.M_r") * LPRES__FGAMMA(&unkR[180]) , _sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1) * _pow( dyn[11] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[180]) + 1) , (2 * (LPRES__gamma(&unkR[180]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition2::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition2& m= *DRLPRUEBAS__prueba1_partition2::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__prueba1_partition2::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition2::fcn4, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__prueba1_partition2::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-228]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[12] = evalNormResidueInternal(12,_div( _div( dyn[9] * _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[12] * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1)/2 * _pow( dyn[12] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[180]) + 1)/2 , (LPRES__gamma(&unkR[180]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition2::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition2& m= *DRLPRUEBAS__prueba1_partition2::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[12],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[12]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__prueba1_partition2::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition2::fcn6, n, &dyn[12], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__prueba1_partition2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[63]);
//[E-2]  HeadLoss_TF.M_g = 0
unkR[304] = 0. ;
//[E-3]  HeadLoss_TF.rho_g = 0
unkR[312] = 0. ;
//[E-4]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[310] = unkR[309] - unkR[305] ;
//[E-5]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[247]), &unkR[30]);
//[E-6]  SplitFrac.f_in.pt = CoolingJacket.rho_trans * LPRES.R(HeadLoss_Turb.f_in.fluid) * CoolingJacket.g.Tt
unkR[241] = dyn[2] * LPRES__R(&unkR[30]) * dyn[3] ;
//[E-7]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[229] = _div( 1.3 * _pow( (unkR[237] * unkR[238]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[237] + unkR[238]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-8]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[247]);
//[E-9]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[391] = unkR[241] * unkR[390] ;
//[E-10]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[387] = unkR[241] * unkR[390] ;
//[E-11]  Junction.f_in1.pt = Regulator_F.f_in.pt - Regulator_F.dp
unkR[356] = unkR[387] - unkR[384] ;
//[E-12]  HeadLoss_Junct.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[299] = unkR[356] * unkR[354] ;
//[E-13]  Junction.f_in2.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[331] = _div( unkR[299] , unkR[354],"Junction.TPL") ;
//[E-14]  HeadLoss_Turb.f_in.pt = Junction.f_in2.pt + HeadLoss_Turb.dp
unkR[330] = unkR[331] + unkR[325] ;
//[E-15]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[406] = 1. - unkR[409] * (1. - _pow( (_div( unkR[330] , unkR[391],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-16]  HeadLoss_Turb.f_in.Tt = Turbine.alpha * CoolingJacket.g.Tt
unkR[328] = unkR[406] * dyn[3] ;
//[E-17]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[320] = unkR[319] - unkR[315] ;
//[E-18]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-19]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[300] = unkR[299] - unkR[295] ;
//[E-20]  Injector_F.PR_sl =  IF[1] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[339] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[339] = 0. ;
}
//[E-21]  Injector_F.p_out_ch =  IF[2] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[342] = _div( unkR[300] , unkR[339],"Injector_F.PR_sl") ;
}
else 
{
unkR[342] = 0. ;
}
//[E-22]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-43]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-59]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-61]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-62]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-63]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-64]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-65]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-66]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-67]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-68]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-69]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-70]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-71]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-72]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-73]  CombCha.fluid_O[Comb_prod] = 0
unkR[148] = 0. ;
//[E-74]  CombCha.fluid_F[Comb_prod] = 0
unkR[119] = 0. ;
//[E-75]  CombCha.fluid_P[Comb_prod_M] =  IF[44] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = unkR[6] ;
}
else 
{
unkR[178] = 0. ;
}
//[E-76]  CombCha.fluid_P[Comb_prod_cp] =  IF[45] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[25] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-77]  Injector_O.PR_sl =  IF[9] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[349] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[349] = 0. ;
}
//[E-78]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[230] = _div( 2. * unkR[237] * unkR[238] , (unkR[237] + unkR[238]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,5,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-152]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[359] = _div( (unkR[276] - unkR[310]) , (9.80665 * LPRES__rho(&unkR[247])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-153]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[246] = _div( _div( (unkR[276] - unkR[310]) , LPRES__rho(&unkR[247]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[363],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[247]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[308] ;
//[E-154]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[371] = _div( (unkR[285] - unkR[320]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-155]  Regulator_F.M_g = 0
unkR[383] = 0. ;
//[E-156]  Regulator_F.rho_g = 0
unkR[389] = 0. ;
//[E-157]  HeadLoss_Turb.M_g = 0
unkR[324] = 0. ;
//[E-158]  HeadLoss_Turb.rho_g = 0
unkR[333] = 0. ;
//[E-159]  HeadLoss_Junct.M_g = 0
unkR[294] = 0. ;
//[E-160]  HeadLoss_Junct.rho_g = 0
unkR[302] = 0. ;
//[E-161]  Injector_F.A_sl =  IF[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * HeadLoss_Junct.f_in.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[335] = _div( _sqrt(unkR[298] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[300]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[335] = 0. ;
}
//[E-162]  CombCha.f_F.T =  IF[5] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[298] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[337] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[298] ;
}
//[E-163]  Injector_F.v_ideal =  IF[7] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE HeadLoss_Junct.f_in.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[343] = unkR[337] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[343] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[334] * unkR[336]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-164]  Injector_F.Re =  IF[8] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[340] = 0. ;
}
else 
{
unkR[340] = _div( LPRES__rho(&unkR[30]) * unkR[343] * unkR[336] * _sqrt(4. * unkR[334]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-165]  Injector_O.A_sl =  IF[11] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * HeadLoss_TO.f_in.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[345] = _div( _sqrt(unkR[284] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[285]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[345] = 0. ;
}
//[E-166]  CombCha.f_O.T =  IF[13] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[284] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[347] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[284] ;
}
//[E-167]  Injector_O.v_ideal =  IF[15] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE HeadLoss_TO.f_in.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[353] = unkR[347] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[61],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[353] = _div( unkR[62] , (LPRES__rho(&unkR[63]) * unkR[344] * unkR[346]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-168]  Injector_O.Re =  IF[16] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[350] = 0. ;
}
else 
{
unkR[350] = _div( LPRES__rho(&unkR[63]) * unkR[353] * unkR[346] * _sqrt(4. * unkR[344]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-169]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-170]  CombCha.W_IO = HeadLoss_TO.f_in.W - CombCha.W_O
unkR[22] = unkR[62] - unkR[23] ;
//[E-171]  CombCha.W_IF = HeadLoss_Junct.f_in.W - CombCha.W_F
unkR[21] = unkR[29] - dyn[4] ;
//[E-172]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[207] = unkR[178] ;
//[E-173]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[208] = unkR[179] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-202]  CombCha.rho_trans' = (HeadLoss_TO.f_in.W + HeadLoss_Junct.f_in.W - ThrustMonitor.g.W) / (CombCha.temp_ch / (CombCha.rho_ch * CombCha.k_1))
ldr[0] = _div( (unkR[62] + unkR[29] - dyn[9]) , (_div( unkR[219] , (unkR[218] * unkR[213]),"CombCha.rho_ch * CombCha.k_1")),"CombCha.temp_ch / (CombCha.rho_ch * CombCha.k_1)") ;
//[E-203]  CombCha.Q_comb_effective =  ZONE[4] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-204]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-205]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-206]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-207]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-208]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[26] = _div( (unkR[23] * LPRES__cp(&unkR[122]) + dyn[4] * LPRES__cp(&unkR[93])) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
//[E-209]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( dyn[5] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( dyn[5] , unkR[10],"CombCha.OF_st")) * unkR[26]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-210]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-211]  CombCha.g.Tt' = (((CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (CombCha.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (CombCha.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (CombCha.g.Tt - CombCha.f_F.T)) / -(CombCha.temp_ch / (ThrustMonitor.g.W * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch)) - CombCha.g.Tt * LPRES.cv(CombCha.fluid_P) * CombCha.rho_trans') / (CombCha.rho_trans * LPRES.cv(CombCha.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (dyn[1] - unkR[15]) + _div( unkR[22] , dyn[9],"ThrustMonitor.g.W") * unkR[91] * (dyn[1] - unkR[61]) + _div( unkR[21] , dyn[9],"ThrustMonitor.g.W") * unkR[58] * (dyn[1] - unkR[28])) , -(_div( unkR[219] , (dyn[9] * unkR[218] * unkR[214] * unkR[17]),"ThrustMonitor.g.W * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch")),"-(CombCha.temp_ch / (ThrustMonitor.g.W * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch))") - dyn[1] * LPRES__cv(&unkR[151]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[151])),"CombCha.rho_trans * LPRES.cv(CombCha.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-213]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[24] = _div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-214]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[180]) , (9. * LPRES__gamma(&unkR[180]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-216]  CombCha.T_aw = CombCha.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[180]) - 1.) * _pow( dyn[11] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[180]) - 1.) * _pow( dyn[11] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-217]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[220] = 1.184e-07 * _pow( LPRES__M(&unkR[180]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-218]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-219]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[211] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[220] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[180]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[60] , unkR[24],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-220]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[233] = _div( LPRES__visc(&unkR[247]) * LPRES__cp(&unkR[247]) , LPRES__cond(&unkR[247]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-221]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[232] = 0.027 * _pow( unkR[234] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[233] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-222]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[242] = _div( unkR[232] * LPRES__cond(&unkR[247]) , unkR[230],"CoolingJacket.D_hy") ;
//[E-223]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[228] = unkI[2] * 2. * (unkR[237] + unkR[238]) * unkR[231] ;
//-------------------------------------------------------------
// BOX 5 SOLVED LINEARLY
//-------------------------------------------------------------
{
double coef[3][3], indep[3];
int n= 3,nrhs= 1 ,ipiv[3],info;
//[E-224]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
coef[0][0]= 0;// CoolingJacket.T_w_cold
coef[1][0]= 1;// CoolingJacket.h.Q
coef[2][0]= -(-unkR[211] * unkR[5]);// CoolingJacket.h.T
//[E-225]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha.A_wet
coef[0][1]= -(-(_div( unkR[245] , unkR[280],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[245] , unkR[280],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-226]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - CoolingJacket.l.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[242] * unkR[228]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[211] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[242] * -unkR[246] * unkR[228];

   // solve the linear system,check output and put the results back into system vars
wDGESV(&n,&nrhs,(double*)coef,&n,ipiv,indep,&n,&info);
checkErrorInDgesv(info,5);

unkR[236] = indep[0];
unkR[209] = indep[1];
unkR[210] = indep[2];
}
//-------------------------------------------------------------
// END OF BOX 5
//-------------------------------------------------------------
//[E-227]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[395] = LPRES__ISA_Pressure(unkR[357]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-229]  ThrustMonitor.T_out = CombCha.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[394] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[12] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-230]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[396] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[12] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-231]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[397] = dyn[12] * _sqrt(LPRES__gamma(&unkR[180]) * LPRES__R(&unkR[180]) * unkR[394],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-232]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[224] = dyn[9] * unkR[397] + unkR[2] * (unkR[396] - unkR[395]) ;
//[E-233]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[226] = unkR[224] ;
//[E-234]  FlowMeter_O.i.Data[1] = abs(HeadLoss_TO.f_in.W)
unkR[286] = abs(unkR[62]) ;
//[E-235]  FlowMeter_F.i.Data[1] = abs(HeadLoss_TF.f_in.W)
unkR[283] = abs(dyn[6]) ;
//[E-236]  HeadLoss_TO.M_g = 0
unkR[314] = 0. ;
//[E-237]  HeadLoss_TO.rho_g = 0
unkR[322] = 0. ;
//[E-238]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[225] = unkR[283] + unkR[286] ;
//[E-239]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[212] = unkR[24] ;
//[E-240]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[222] = _div( unkR[224] , unkR[225],"ControlPanel.W_tot") ;
//[E-241]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[221] = _div( unkR[222] , unkR[24],"CombCha.c_star") ;
//[E-242]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[223] = unkR[222]/9.80665 ;
//[E-243]  CoolingJacket.rho_trans' = (HeadLoss_TF.f_in.W - HeadLoss_Junct.f_in.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (dyn[6] - unkR[29]) , (_div( unkR[281] , (unkR[278] * unkR[243]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-244]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(HeadLoss_Turb.f_in.fluid) * (HeadLoss_TF.f_in.W * CoolingJacket.l.Tt - HeadLoss_Junct.f_in.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(HeadLoss_Turb.f_in.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(HeadLoss_Turb.f_in.fluid))
ldr[3] = _div( (_div( (unkR[209] + LPRES__cp(&unkR[30]) * (dyn[6] * unkR[246] - unkR[29] * dyn[3])) , (_div( unkR[281] , (unkR[278] * unkR[244] * unkR[235]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[30]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[30])),"CoolingJacket.rho_trans * LPRES.cv(HeadLoss_Turb.f_in.fluid)") ;
//[E-245]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[227] = unkR[283] + unkR[286] ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);
res[2]= evalNormResidueInternal(2,der[2],ldr[2]);
res[3]= evalNormResidueInternal(3,der[3],ldr[3]);

if( restartB )
     dcopy(4,der,ldr);

//save last residues
memcpy(this->res,res,13*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__prueba1_partition2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[247])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[63])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[180])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[12] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[396] , unkR[395],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[12] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[30])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(1 == LPRES__State(&unkR[247])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__prueba1_partition2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[290]; //Pump_O.m.Power > 0
    ev[3]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[4]= unkR[338] - unkR[339]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[6]= unkR[338] - unkR[339]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[8]= unkR[348] - unkR[349]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[10]= unkR[348] - unkR[349]; //Injector_O.PR >= Injector_O.PR_sl
    ev[11]= unkI[0] - 1; //CombCha.Combustion
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__prueba1_partition2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__prueba1_partition2::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__prueba1_partition2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Gearbox.m_out.Power =  ZONE (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta OTHERS -Pump_O.m.Power / Gearbox.eta
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
     // CombCha.Q_comb_effective =  ZONE (CombCha.Combustion) CombCha.Q_comb OTHERS 0
     branchZone[3] = (cont[11] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__prueba1_partition2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
	static const char* zoneTxtTable[] = { "Pump_O.m.Power > 0","OTHERS",
	"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"CombCha.Combustion","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,5,8 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0"},{ ZONE,GT_OP,0,0,"Pump_O.m.Power > 0"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
,{ ZONE,EQ_OP,0,0,"CombCha.Combustion"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__prueba1_partition2::initDelays()
{
}


bool DRLPRUEBAS__prueba1_partition2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__prueba1_partition2 = 99196;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__prueba1_partition2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__prueba1_partition2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__prueba1_partition2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__prueba1_partition2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__prueba1_partition2;
return true;
}



bool DRLPRUEBAS__prueba1_partition2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__prueba1_partition2 = 872;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__prueba1_partition2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__prueba1_partition2[] = 
{
"DQAAAIAAAAAGAAAACgAAAAoAAAAJAAAACwAAAAkAAAAJAAAACQAAAAkAAAAJAAAACgAAAAsAAAALAAAACwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAwAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAADAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAANAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__prueba1_partition2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__prueba1_partition2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__prueba1_partition2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__prueba1_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__prueba1_partition2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__prueba1_partition2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__prueba1_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__prueba1_partition2(name,dirInstall);
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
	sprintf(componentName,"%s","prueba1");
	sprintf(partitionName,"%s","partition2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.prueba1.partition2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

