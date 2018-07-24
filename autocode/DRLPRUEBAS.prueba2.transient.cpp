//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__prueba2_transient_CPP
#define DRLPRUEBAS__prueba2_transient_CPP

#include "DRLPRUEBAS.prueba2.transient.h"

DRLPRUEBAS__prueba2_transient* DRLPRUEBAS__prueba2_transient::s_current= NULL;

DRLPRUEBAS__prueba2_transient::DRLPRUEBAS__prueba2_transient(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "prueba2";
m_infoPartitionName = "transient";
m_infoModelName = "DRLPRUEBAS__prueba2_transient";
m_infoModelFileName = "DRLPRUEBAS.prueba2.transient";
m_infoModelFileNameExtra = "prueba2.transient";
m_perfFlag = false;
m_infoComponentDate = "01/06/2018 12:20:20.920000";
m_infoPartitionDate = "01/06/2018 12:22:01.955000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[9]; 
int nbx;
for (nbx=0; nbx < 9 ; nbx++)
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
n_dyn=11;
dyn= new double[11] ;
static double tmp_dynInit[11]={ 0, 0, 1, 1, 1, 1, 100, 100, 1, 1, 1 } ;
dynInit= new double[11];
dcopy(11,dynInit,tmp_dynInit);


n_der=2;
der= new double[11] ;
static double tmp_derInit[11]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[11];
dcopy(11,derInit,tmp_derInit);


res= new double[11] ;
ldr= new double[11] ;
boxDyn= new double[11] ;
boxDer= new double[11] ;

static int tmp_frozenVars[2] = { 0,0 } ;
frozenVars= new int[2];
icopy(2,frozenVars,tmp_frozenVars);

n_unkR=405;
unkR= new double[405] ;
static double tmp_unkRInit[405]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		0, 4000, 3180.93, 0, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0, 0.99, 1, 
		2.70069069, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 16.3526821, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 19.05, 3275010, 5000000, 0, 0.567, 0.032, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 0, 
		0.00100103471, 0.00813274823, 100000, 0, 1, 1, 1, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 0, 1, 1, 0, 2.43566574, 
		1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 3254.325, 1500, 0.1, 21.11111, 
		193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 0.1, 1, 1, 1200000, 
		0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 0, 0.05, 0, 0, 0.5, 0, 10, 
		0, 0, 0, 0, 1, 1, 1, 0, 0.01, 0, 0, 0, 500, 7358000, 0.573907002, 0.0656, 
		0, 0.2533, 0.05, 0, 0, 0.01, 0, 0, 500, 4282000, 0.6508, 0.03027, 0, 0.05393, 0.05, 0, 
		0, 3219188.99, 0, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 0, 0, 0, 0, 0.005, 
		0, 1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 
		0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[405];
dcopy(405,unkRInit,tmp_unkRInit);


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
n_nelg= 45;
n_neld= 2;
m_numBoxes= 8;
m_nNonLinearBoxes= 8;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__prueba2_transient::initInternalModels()
{
}

void DRLPRUEBAS__prueba2_transient::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__prueba2_transient::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__prueba2_transient::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


int DRLPRUEBAS__prueba2_transient::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__prueba2_transient::LPRES__State(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::LPRES__M(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__prueba2_transient::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__prueba2_transient::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__prueba2_transient::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__prueba2_transient::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__prueba2_transient::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__prueba2_transient::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__prueba2_transient::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__prueba2_transient::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__prueba2_transient::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[183]) ;
	unkI[0] = 1 ;
	unkR[221] = 1. ;
	if( 1 ) {
	unkR[63] = unkR[220] ;
	}
	dyn[1] = unkR[17] ;
	unkR[20] = unkR[21] ;
	if( unkI[1] == 1 ) {
	dyn[3] = 0.001 ;
	}
	else {
	dyn[3] = 100. ;
	}
	unkR[216] = _div( 1. , unkR[218],"CombCha.mfr_ch") ;
	unkR[217] = _div( 1. , (unkR[218] * unkR[18]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[250]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[66]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[250]), &unkR[33]) ;
	unkR[239] = 500. ;
  // init(Pump_F.Pump,0)
	dyn[8] = unkR[348] ;
  // init(Pump_O.Pump,0)
	dyn[9] = unkR[360] ;
  // init(Turbine.Turbine,0)
	unkR[386] = unkR[385] ;
	dyn[10] = unkR[388] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__prueba2_transient::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-98]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-99]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-100]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-101]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-102]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-103]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-104]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-105]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-106]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-107]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-108]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-109]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-110]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-111]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[178] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[179] * (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[209] = _div( (unkR[180] * (unkR[25] + unkR[20]) + unkR[24] + unkR[23]) , dyn[2],"ThrustMonitor.g.W") ;
//[E-125]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.T_trans) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[26] = _div( _sqrt(LPRES__R(&unkR[183]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.T_trans") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-126]  ThrustMonitor.g.W = CombCha.f_O.p_c * CombCha.A_th / CombCha.c_star
res[2] = evalNormResidueInternal(2,dyn[2],_div( unkR[63] * unkR[4] , unkR[26],"CombCha.c_star"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__prueba2_transient::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__prueba2_transient::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-148]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,unkR[1],_div( _div( 1 , dyn[3],"CombCha.M_r") * LPRES__FGAMMA(&unkR[183]) , _sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1) * _pow( dyn[3] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[183]) + 1) , (2 * (LPRES__gamma(&unkR[183]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__prueba2_transient::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__prueba2_transient::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-158]  Junction.f_in1.W = Injector_F.W - HeadLoss_Turb.f_in.W
unkR[341] = unkR[32] - dyn[5] ;
//[E-159]  HeadLoss_TF.f_in.W = HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[245] = dyn[5] + unkR[341] ;
//[E-160]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[282] = _div( _div( unkR[245] , (unkR[240] * unkR[241] * LPRES__rho(&unkR[250])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-161]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[238] = _div( LPRES__rho(&unkR[250]) * unkR[282] * unkR[234] , LPRES__visc(&unkR[250]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-162]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[236] = 0.027 * _pow( unkR[238] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[237] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-163]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[247] = _div( unkR[236] * LPRES__cond(&unkR[250]) , unkR[234],"CoolingJacket.D_hy") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[243] = LPRES__hdc_fric(unkR[233], unkR[280], unkR[238]) ;
//[E-165]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[246] = unkR[279] - _div( unkR[243] * unkR[235] , unkR[233],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[250]) * _pow( unkR[282] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-166]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[376] = unkR[246] * unkR[375] ;
//[E-167]  HeadLoss_Turb.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[317] = _div( unkR[376] , unkR[398],"Turbine.pi") ;
//[E-168]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[392] = 1. - unkR[395] * (1. - _pow( (_div( unkR[317] , unkR[376],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[33]) - 1.) , LPRES__gamma(&unkR[33]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-169]  Junction.f_in1.Tt = HeadLoss_Turb.f_in.Tt / Turbine.alpha
unkR[244] = _div( dyn[4] , unkR[392],"Turbine.alpha") ;
//[E-170]  CoolingJacket.h.Q = HeadLoss_TF.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - CoolingJacket.l.Tt)
unkR[212] = unkR[245] * LPRES__cp(&unkR[33]) * (unkR[244] - unkR[249]) ;
//[E-171]  CoolingJacket.h.T = CombCha.T_aw - CoolingJacket.h.Q / CombCha.A_wet / CombCha.h_g
unkR[213] = unkR[15] - _div( _div( unkR[212] , unkR[5],"CombCha.A_wet") , unkR[214],"CombCha.h_g") ;
//[E-172]  CoolingJacket.T_w_cold = CoolingJacket.h.T - CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w)
unkR[239] = unkR[213] - _div( _div( unkR[212] , unkR[5],"CombCha.A_wet") , (_div( unkR[248] , unkR[281],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") ;
//[E-173]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - CoolingJacket.l.Tt) * CoolingJacket.A_wet_cooling
res[4] = evalNormResidueInternal(4,unkR[212],unkR[247] * (unkR[239] - unkR[249]) * unkR[232]);
//[E-174]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[387] = dyn[5] * LPRES__cp(&unkR[33]) * (unkR[244] - dyn[4]) ;
//[E-175]  Pump_F.m.Power = Gearbox.m_out.Power - Turbine.m.Power
unkR[347] = unkR[292] - unkR[387] ;
//[E-176]  Pump_F.tau = -Pump_F.m.Power / HeadLoss_TF.f_in.W
res[5] = evalNormResidueInternal(5,unkR[356],_div( -unkR[347] , unkR[245],"HeadLoss_TF.f_in.W"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__prueba2_transient::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__prueba2_transient::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-188]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[183]) , (_pow( (_div( dyn[6] , unkR[63],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[183]) * (1. - _pow( (_div( dyn[6] , unkR[63],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[183]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__prueba2_transient::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn4, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__prueba2_transient::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-193]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.T_trans) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[7] = evalNormResidueInternal(7,_div( _div( dyn[2] * _sqrt(LPRES__R(&unkR[183]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.T_trans") , unkR[2],"ThrustMonitor.g.A_out") , unkR[63],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[7] * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1)/2 * _pow( dyn[7] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[183]) + 1)/2 , (LPRES__gamma(&unkR[183]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__prueba2_transient::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn5, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__prueba2_transient::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-221]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
res[8] = evalNormResidueInternal(8,unkR[352],_div( unkR[356] , _pow( dyn[8] , 2,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__prueba2_transient::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn6, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__prueba2_transient::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-226]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
res[9] = evalNormResidueInternal(9,unkR[364],_div( unkR[368] , _pow( dyn[9] , 2,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__prueba2_transient::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Residues function for box 8*/
void DRLPRUEBAS__prueba2_transient::fbox8(double *_time,double dyn[],double ldr[],double res[])
{
//[E-237]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[399] = _div( unkR[404] , _pow( dyn[10] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-238]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[396] = _div( (unkR[399] + 1.) , (tan(unkR[393] * 3.14159265358979/180.) - tan(unkR[394] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-239]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[10] = evalNormResidueInternal(10,unkR[396],_div( unkR[390] , dyn[10],"Turbine.U"));
}


/* Wrapper to call the residues's box 8 function from the non-linear solver */
void DRLPRUEBAS__prueba2_transient::fcn8(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_transient& m= *DRLPRUEBAS__prueba2_transient::s_current;
	m.printDbgInfoForModel(8,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox8(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(8,false);
}


/* Wrapper for the non-linear solver in box 8*/
void DRLPRUEBAS__prueba2_transient::fhyb8(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(8);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_transient::fcn8, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 8);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__prueba2_transient::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(2,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[66]);
//[E-3]  CombCha.W_O = Injector_O.W * (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[25] = unkR[65] * (1. - unkR[92]) ;
//[E-4]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[250]), &unkR[33]);
//[E-5]  CombCha.W_F = Injector_F.W * (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[20] = unkR[32] * (1. - unkR[59]) ;
//[E-6]  CombCha.R_univ_R = (CombCha.W_O * 8314 / CombCha.M_oxid + CombCha.W_F * 8314 / CombCha.M_fuel) / (CombCha.W_O + CombCha.W_F)
unkR[14] = _div( (_div( unkR[25] * 8314. , unkR[8],"CombCha.M_oxid") + _div( unkR[20] * 8314. , unkR[7],"CombCha.M_fuel")) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
//[E-7]  CombCha.f_O.p_c = CombCha.rho_trans * CombCha.R_univ_R * CombCha.T_trans
unkR[63] = dyn[0] * unkR[14] * dyn[1] ;
//[E-8]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-9]  CombCha.OF = CombCha.W_O / CombCha.W_F
unkR[9] = _div( unkR[25] , unkR[20],"CombCha.W_F") ;
//[E-10]  CombCha.phi = CombCha.OF_st / CombCha.OF
unkR[221] = _div( unkR[10] , unkR[9],"CombCha.OF") ;
//[E-11]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-12]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[22] = _div( unkR[20] , unkR[221],"CombCha.phi") ;
//[E-13]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[96] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[25] + unkR[96] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-14]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-15]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-16]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[97] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[25] + unkR[97] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-17]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-19]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[98] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[25] + unkR[98] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-20]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-22]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[99] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[25] + unkR[99] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-23]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[100] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[25] + unkR[100] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-26]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[101] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[25] + unkR[101] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-29]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[102] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[25] + unkR[102] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-32]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[103] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[25] + unkR[103] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-35]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[104] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[25] + unkR[104] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-38]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[105] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[25] + unkR[105] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-41]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-43]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[106] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[25] + unkR[106] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-44]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[107] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[25] + unkR[107] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-47]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[108] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[25] + unkR[108] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-50]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[109] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[25] + unkR[109] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-53]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[110] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[25] + unkR[110] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-56]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[111] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[25] + unkR[111] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-59]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-61]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[112] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[25] + unkR[112] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-62]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-63]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-64]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[113] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[25] + unkR[113] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-65]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-66]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-67]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[114] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[25] + unkR[114] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-68]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-69]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-70]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[115] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[25] + unkR[115] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-71]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-72]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-73]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[116] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[25] + unkR[116] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-74]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-75]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-76]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[117] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[25] + unkR[117] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-77]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-78]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-79]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[118] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[25] + unkR[118] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-80]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-81]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-82]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[119] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[25] + unkR[119] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-83]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[149] = _div( unkR[90] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-84]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[120] = _div( unkR[57] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-85]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[120] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[178] = _div( (unkR[149] * unkR[25] + unkR[120] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-86]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[150] = _div( unkR[91] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-87]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[121] = _div( unkR[58] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-88]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[179] = _div( (unkR[150] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[121] * MATH__max(unkR[221] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[179] = _div( (unkR[150] * unkR[25] + unkR[121] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-89]  CombCha.fluid_O[Comb_prod] = 0
unkR[151] = 0. ;
//[E-90]  CombCha.fluid_F[Comb_prod] = 0
unkR[122] = 0. ;
//[E-91]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = _div( (unkR[151] * MATH__max(1. - unkR[221], 0.) * unkR[25] + unkR[122] * MATH__max(unkR[221] - 1., 0.) * unkR[22] + (1. - MATH__max(1. - unkR[221], 0.)) * (unkR[25] + unkR[22])) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[180] = 0. ;
}
//[E-92]  CombCha.W_IO = Injector_O.W - CombCha.W_O
unkR[24] = unkR[65] - unkR[25] ;
//[E-93]  CombCha.W_IF = Injector_F.W - CombCha.W_F
unkR[23] = unkR[32] - unkR[20] ;
//[E-94]  CombCha.fluid_P[Comb_prod_M] =  IF[28] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[181] = unkR[6] ;
}
else 
{
unkR[181] = 0. ;
}
//[E-95]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[210] = unkR[181] ;
//[E-96]  CombCha.fluid_P[Comb_prod_cp] =  IF[29] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[182] = unkR[27] ;
}
else 
{
unkR[182] = 0. ;
}
//[E-97]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[211] = unkR[182] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-127]  CombCha.rho_trans' = (Injector_O.W + Injector_F.W - ThrustMonitor.g.W) / (CombCha.temp_ch / (CombCha.rho_ch * CombCha.k_1))
ldr[0] = _div( (unkR[65] + unkR[32] - dyn[2]) , (_div( unkR[223] , (unkR[222] * unkR[216]),"CombCha.rho_ch * CombCha.k_1")),"CombCha.temp_ch / (CombCha.rho_ch * CombCha.k_1)") ;
//[E-128]  CombCha.Q_comb_effective =  ZONE[1] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-129]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[152] = 0. ;
//[E-130]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[153] = 0. ;
//[E-131]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[123] = 0. ;
//[E-132]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[124] = 0. ;
//[E-133]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[28] = _div( (unkR[25] * LPRES__cp(&unkR[125]) + unkR[20] * LPRES__cp(&unkR[96])) , (unkR[25] + unkR[20]),"CombCha.W_O + CombCha.W_F") ;
//[E-134]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[312] = unkR[311] - unkR[307] ;
//[E-135]  FlowMeter_O.f_in.pt = Pump_O.dp + Pump_O.f_in.pt
unkR[285] = unkR[361] + unkR[312] ;
//[E-136]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[284] = _div( _div( (unkR[285] - unkR[312]) , LPRES__rho(&unkR[66]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[362],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[66]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[310] ;
//[E-137]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[335] = _div( unkR[285] , unkR[63],"CombCha.f_O.p_c") ;
//[E-138]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[334] = _sqrt(_div( 2. * (_pow( unkR[335] , (_div( (LPRES__gamma(&unkR[66]) - 1.) , LPRES__gamma(&unkR[66]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[66]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[334] = 1. ;
else unkR[334] = 0. ;
//[E-139]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[64] = _div( unkR[284] , (1. + (LPRES__gamma(&unkR[66]) - 1.)/2. * _pow( unkR[334] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[64] = unkR[284] ;
}
//[E-140]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[305] = unkR[304] - unkR[300] ;
//[E-141]  CoolingJacket.l.pt = Pump_F.dp + Pump_F.f_in.pt
unkR[279] = unkR[349] + unkR[305] ;
//[E-142]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[250]);
//[E-143]  Pump_F.tau = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[356] = _div( (unkR[279] - unkR[305]) , (unkR[350] * LPRES__rho(&unkR[250])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-144]  Pump_O.tau = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[368] = _div( (unkR[285] - unkR[312]) , (unkR[362] * LPRES__rho(&unkR[66])),"Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-145]  Pump_O.m.Power = -(Pump_O.tau * Injector_O.W)
unkR[290] = -(unkR[368] * unkR[65]) ;
//[E-146]  Gearbox.m_out.Power =  ZONE[2] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[1]==0)
	unkR[292] = -unkR[290] * unkR[288] ;
else unkR[292] = _div( -unkR[290] , unkR[288],"Gearbox.eta") ;
//[E-147]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[183]) , (9. * LPRES__gamma(&unkR[183]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-149]  CombCha.T_aw = CombCha.T_trans * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[15] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[183]) - 1.) * _pow( dyn[3] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[183]) - 1.) * _pow( dyn[3] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-150]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[224] = 1.184e-07 * _pow( LPRES__M(&unkR[183]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-151]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-152]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[214] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[224] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[183]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[63] , unkR[26],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-153]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[234] = _div( 2. * unkR[240] * unkR[241] , (unkR[240] + unkR[241]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-154]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[237] = _div( LPRES__visc(&unkR[250]) * LPRES__cp(&unkR[250]) , LPRES__cond(&unkR[250]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-155]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[249] = _div( _div( (unkR[279] - unkR[305]) , LPRES__rho(&unkR[250]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[350],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[250]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[303] ;
//[E-156]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[232] = unkI[2] * 2. * (unkR[240] + unkR[241]) * unkR[235] ;
//[E-157]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[233] = _div( 1.3 * _pow( (unkR[240] * unkR[241]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[240] + unkR[241]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,2,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-177]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[296] = _div( (-(_div( unkR[341] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33]) * -unkR[244]) - _div( dyn[5] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33]) * -dyn[4]) , (_div( unkR[341] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33]) + _div( dyn[5] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33])),"Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-178]  Junction.f_in2.pt = HeadLoss_Turb.f_in.pt - HeadLoss_Turb.dp
unkR[318] = unkR[317] - unkR[314] ;
//[E-179]  HeadLoss_Junct.f_in.pt = Junction.f_in2.pt * Junction.TPL
unkR[297] = unkR[318] * unkR[340] ;
//[E-180]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[298] = unkR[297] - unkR[293] ;
//[E-181]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[325] = _div( unkR[298] , unkR[63],"CombCha.f_O.p_c") ;
//[E-182]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[324] = _sqrt(_div( 2. * (_pow( unkR[325] , (_div( (LPRES__gamma(&unkR[33]) - 1.) , LPRES__gamma(&unkR[33]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[324] = 1. ;
else unkR[324] = 0. ;
//[E-183]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[31] = _div( unkR[296] , (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( unkR[324] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[31] = unkR[296] ;
}
//[E-184]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[125]) * unkR[64] + _div( unkR[221] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[96]) * unkR[31]) , ((1. + _div( unkR[221] , unkR[10],"CombCha.OF_st")) * unkR[28]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-185]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[30] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[28] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[154]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-186]  CombCha.cv_R = CombCha.cp_R - CombCha.R_univ_R
unkR[29] = unkR[28] - unkR[14] ;
//[E-187]  CombCha.T_trans' = ((CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (CombCha.T_trans - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (CombCha.T_trans - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (CombCha.T_trans - CombCha.f_F.T)) / (CombCha.temp_ch / (CombCha.mfr_ch * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch) * CombCha.rho_trans * CombCha.cv_R)
ldr[1] = _div( (_div( (unkR[25] + unkR[20]) , dyn[2],"ThrustMonitor.g.W") * LPRES__cp(&unkR[154]) * (dyn[1] - unkR[16]) + _div( unkR[24] , dyn[2],"ThrustMonitor.g.W") * unkR[94] * (dyn[1] - unkR[64]) + _div( unkR[23] , dyn[2],"ThrustMonitor.g.W") * unkR[61] * (dyn[1] - unkR[31])) , (_div( unkR[223] , (unkR[218] * unkR[222] * unkR[217] * unkR[18]),"CombCha.mfr_ch * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch") * dyn[0] * unkR[29]),"CombCha.temp_ch / (CombCha.mfr_ch * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch) * CombCha.rho_trans * CombCha.cv_R") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-189]  FlowMeter_F.i.Data[1] = abs(HeadLoss_TF.f_in.W)
unkR[283] = abs(unkR[245]) ;
//[E-190]  FlowMeter_O.i.Data[1] = abs(Injector_O.W)
unkR[286] = abs(unkR[65]) ;
//[E-191]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[229] = unkR[283] + unkR[286] ;
//[E-192]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[215] = unkR[26] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-194]  ThrustMonitor.T_out = CombCha.T_trans / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[379] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[7] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-195]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[382] = dyn[7] * _sqrt(LPRES__gamma(&unkR[183]) * LPRES__R(&unkR[183]) * unkR[379],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-196]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[381] = _div( unkR[63] , _pow( (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[7] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-197]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[380] = LPRES__ISA_Pressure(unkR[343]) ;
//[E-198]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[228] = dyn[2] * unkR[382] + unkR[2] * (unkR[381] - unkR[380]) ;
//[E-199]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[226] = _div( unkR[228] , unkR[229],"ControlPanel.W_tot") ;
//[E-200]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[225] = _div( unkR[226] , unkR[26],"CombCha.c_star") ;
//[E-201]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[227] = unkR[226]/9.80665 ;
//[E-202]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[291] = unkR[403] * 2. * 3.14159265358979/60. ;
//[E-203]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[289] = _div( unkR[291] , unkR[287],"Gearbox.GR") ;
//[E-204]  Injector_F.PR_sl =  IF[30] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[326] = _pow( ((LPRES__gamma(&unkR[33]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[33]) , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[326] = 0. ;
}
//[E-205]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[328] = _div( unkR[298] , unkR[326],"Injector_F.PR_sl") ;
}
else 
{
unkR[328] = 0. ;
}
//[E-206]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * Injector_F.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[322] = _div( _sqrt(unkR[296] * LPRES__R(&unkR[33]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[32] , (LPRES__FGAMMA(&unkR[33]) * unkR[298]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[322] = 0. ;
}
//[E-207]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[62] = MATH__max(unkR[63], unkR[328]) ;
}
else 
{
unkR[62] = unkR[63] ;
}
//[E-208]  Injector_F.A_d =  IF[35] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[321] = _div( unkR[322] * _pow( (_div( (2. + (LPRES__gamma(&unkR[33]) - 1.) * _pow( unkR[324] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[33]) + 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[33]) + 1.) , (2. * (LPRES__gamma(&unkR[33]) - 1.)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[324],"Injector_F.M_out") ;
}
else 
{
unkR[321] = _div( _div( unkR[32] , unkR[323],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[33]) * (unkR[298] - unkR[62]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"),"sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))") ;
}
//[E-209]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[329] = unkR[324] * _sqrt(LPRES__gamma(&unkR[33]) * LPRES__R(&unkR[33]) * unkR[31],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[329] = _div( unkR[32] , (LPRES__rho(&unkR[33]) * unkR[321] * unkR[323]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-210]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[327] = 0. ;
}
else 
{
unkR[327] = _div( LPRES__rho(&unkR[33]) * unkR[329] * unkR[323] * _sqrt(4. * unkR[321]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[33]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-211]  Injector_O.PR_sl =  IF[38] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[336] = _pow( ((LPRES__gamma(&unkR[66]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[66]) , (LPRES__gamma(&unkR[66]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[336] = 0. ;
}
//[E-212]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[338] = _div( unkR[285] , unkR[336],"Injector_O.PR_sl") ;
}
else 
{
unkR[338] = 0. ;
}
//[E-213]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * Injector_O.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[332] = _div( _sqrt(unkR[284] * LPRES__R(&unkR[66]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[65] , (LPRES__FGAMMA(&unkR[66]) * unkR[285]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[332] = 0. ;
}
//[E-214]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[95] = MATH__max(unkR[63], unkR[338]) ;
}
else 
{
unkR[95] = unkR[63] ;
}
//[E-215]  Injector_O.A_d =  IF[43] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[331] = _div( unkR[332] * _pow( (_div( (2. + (LPRES__gamma(&unkR[66]) - 1.) * _pow( unkR[334] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[66]) + 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[66]) + 1.) , (2. * (LPRES__gamma(&unkR[66]) - 1.)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[334],"Injector_O.M_out") ;
}
else 
{
unkR[331] = _div( _div( unkR[65] , unkR[333],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[66]) * (unkR[285] - unkR[95]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))") ;
}
//[E-216]  Injector_O.v_ideal =  IF[44] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[339] = unkR[334] * _sqrt(LPRES__gamma(&unkR[66]) * LPRES__R(&unkR[66]) * unkR[64],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[339] = _div( unkR[65] , (LPRES__rho(&unkR[66]) * unkR[331] * unkR[333]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-217]  Injector_O.Re =  IF[45] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[337] = 0. ;
}
else 
{
unkR[337] = _div( LPRES__rho(&unkR[66]) * unkR[339] * unkR[333] * _sqrt(4. * unkR[331]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[66]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-218]  Junction.f_in1.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[342] = _div( unkR[297] , unkR[340],"Junction.TPL") ;
//[E-219]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[346] = _div( (unkR[279] - unkR[305]) , (9.80665 * LPRES__rho(&unkR[250])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-220]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi_d
unkR[352] = 1. - _div( (1. - unkR[353]) , unkR[351],"Pump_F.phi_d") * unkR[351] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-222]  Pump_F.r_m_d = Pump_F.U / Turbine.m.N
unkR[355] = _div( dyn[8] , unkR[291],"Turbine.m.N") ;
//[E-223]  Pump_F.A_in_d = HeadLoss_TF.f_in.W / Pump_F.phi_d / LPRES.rho(HeadLoss_TF.f_in.fluid) / Pump_F.U
unkR[345] = _div( _div( _div( unkR[245] , unkR[351],"Pump_F.phi_d") , LPRES__rho(&unkR[250]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") , dyn[8],"Pump_F.U") ;
//[E-224]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[359] = _div( (unkR[285] - unkR[312]) , (9.80665 * LPRES__rho(&unkR[66])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-225]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi_d
unkR[364] = 1. - _div( (1. - unkR[365]) , unkR[363],"Pump_O.phi_d") * unkR[363] ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-227]  Pump_O.r_m_d = Pump_O.U / Pump_O.m.N
unkR[367] = _div( dyn[9] , unkR[289],"Pump_O.m.N") ;
//[E-228]  Pump_O.A_in_d = Injector_O.W / Pump_O.phi_d / LPRES.rho(HeadLoss_TO.f_in.fluid) / Pump_O.U
unkR[358] = _div( _div( _div( unkR[65] , unkR[363],"Pump_O.phi_d") , LPRES__rho(&unkR[66]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") , dyn[9],"Pump_O.U") ;
//[E-229]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[373] = unkR[246] * unkR[375] ;
//[E-230]  Regulator_F.dp_d = Regulator_F.f_in.pt - Junction.f_in1.pt
unkR[370] = unkR[373] - unkR[342] ;
//[E-231]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[230] = unkR[228] ;
//[E-232]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[386] = MATH__min(unkR[385], 1.) ;
//[E-233]  Turbine.A_in_d = HeadLoss_Turb.f_in.W * sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Turbine.f_in.pt
unkR[384] = _div( _div( dyn[5] * _sqrt(unkR[244] * LPRES__R(&unkR[33]),"Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (_sqrt(LPRES__gamma(&unkR[33]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(unkR[386], 1.) * cos(unkR[393] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( MATH__min(unkR[386], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[33]) + 1.)/2. , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" )),"sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))") , unkR[376],"Turbine.f_in.pt") ;
//[E-234]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[404] = _div( unkR[387] , dyn[5],"HeadLoss_Turb.f_in.W") ;
//[E-235]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[389] = unkR[386] * _sqrt(_div( LPRES__gamma(&unkR[33]) * LPRES__R(&unkR[33]) * unkR[244] , (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( unkR[386] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-236]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[390] = unkR[389] * cos(unkR[393] * 3.14159265358979/180.) ;

if( restartB || m_solveInternalBox[8] ) 
    fhyb8(dyn,ldr,TOLERANCE,1,50);
else fbox8(_time,dyn,ldr,res) ;

//[E-240]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[402] = _div( dyn[10] , unkR[291],"Turbine.m.N") ;
//[E-241]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[231] = unkR[283] + unkR[286] ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);

if( restartB )
     dcopy(2,der,ldr);

//save last residues
memcpy(this->res,res,11*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__prueba2_transient::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[250])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",69,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[250])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[66])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[183])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[7] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[381] , unkR[380],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[7] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[33])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__prueba2_transient::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[290]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[33]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= unkR[325] - unkR[326]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[33]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= unkR[325] - unkR[326]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[66]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[335] - unkR[336]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[66]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[335] - unkR[336]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__prueba2_transient::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__prueba2_transient::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__prueba2_transient::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__prueba2_transient::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__prueba2_transient::initDelays()
{
}


bool DRLPRUEBAS__prueba2_transient::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__prueba2_transient = 91564;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__prueba2_transient = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__prueba2_transient[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__prueba2_transient;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__prueba2_transient;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__prueba2_transient;
return true;
}



bool DRLPRUEBAS__prueba2_transient::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__prueba2_transient = 384;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__prueba2_transient = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__prueba2_transient[] = 
{
"CwAAAC0AAAACAAAAAwAAAAYAAAADAAAABAAAAAYAAAAGAAAABAAAAAQAAAABAAAAAQAAAAcAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABwAAAAEAAAACAAAAAwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAsAAAABAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAACAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__prueba2_transient;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__prueba2_transient;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__prueba2_transient;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__prueba2_transient(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__prueba2_transient(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__prueba2_transient(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__prueba2_transient(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__prueba2_transient(name,dirInstall);
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
	sprintf(componentName,"%s","prueba2");
	sprintf(partitionName,"%s","transient");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.prueba2.transient");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

