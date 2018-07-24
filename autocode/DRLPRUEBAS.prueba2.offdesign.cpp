//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__prueba2_offdesign_CPP
#define DRLPRUEBAS__prueba2_offdesign_CPP

#include "DRLPRUEBAS.prueba2.offdesign.h"

DRLPRUEBAS__prueba2_offdesign* DRLPRUEBAS__prueba2_offdesign::s_current= NULL;

DRLPRUEBAS__prueba2_offdesign::DRLPRUEBAS__prueba2_offdesign(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "prueba2";
m_infoPartitionName = "offdesign";
m_infoModelName = "DRLPRUEBAS__prueba2_offdesign";
m_infoModelFileName = "DRLPRUEBAS.prueba2.offdesign";
m_infoModelFileNameExtra = "prueba2.offdesign";
m_perfFlag = false;
m_infoComponentDate = "01/06/2018 12:20:20.920000";
m_infoPartitionDate = "01/06/2018 12:42:17.526000";
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

n_unkR=407;
unkR= new double[407] ;
static double tmp_unkRInit[407]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		0, 4000, 3180.93, 0, 1, 0, 1000, 0, 0, 0, 0, 3700, 0, 0, 0.99, 1, 
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
		1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 19.05, 3275010, 5000000, 0, 0.567, 
		0, 0.032, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 0, 
		0, 0, 0.00100103471, 0.00813274823, 100000, 0, 1, 1, 1, 0, 16.09, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 0, 1, 1, 
		0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 3254.325, 1500, 
		0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 0.1, 1, 
		1, 1200000, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 0, 0.05, 0, 0, 0.5, 
		0, 10, 0, 0, 0, 0, 1, 1, 1, 0, 0.01, 0, 0, 0, 500, 7358000, 
		0.573907002, 0.0656, 0, 0.2533, 0.05, 0, 0, 0.01, 0, 0, 500, 4282000, 0.6508, 0.03027, 0, 0.05393, 
		0.05, 0, 0, 3219188.99, 0, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 0, 0, 0, 
		0, 0.005, 0, 1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 0.05, 
		1.8, 0, 0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[407];
dcopy(407,unkRInit,tmp_unkRInit);


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
void DRLPRUEBAS__prueba2_offdesign::initInternalModels()
{
}

void DRLPRUEBAS__prueba2_offdesign::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__prueba2_offdesign::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


int DRLPRUEBAS__prueba2_offdesign::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__prueba2_offdesign::LPRES__State(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__M(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__prueba2_offdesign::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__prueba2_offdesign::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__prueba2_offdesign::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__prueba2_offdesign::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__prueba2_offdesign::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__prueba2_offdesign::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__prueba2_offdesign::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__prueba2_offdesign::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[184]) ;
	unkI[0] = 1 ;
	unkR[222] = 1. ;
	if( 1 ) {
	unkR[63] = unkR[221] ;
	}
	unkR[20] = unkR[17] ;
	unkR[21] = unkR[22] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
	unkR[217] = _div( 1. , unkR[219],"CombCha.mfr_ch") ;
	unkR[218] = _div( 1. , (unkR[219] * unkR[18]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[252]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[66]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[252]), &unkR[33]) ;
	unkR[241] = 500. ;
  // init(Pump_F.Pump,0)
	dyn[6] = unkR[350] ;
  // init(Pump_O.Pump,0)
	dyn[7] = unkR[362] ;
  // init(Turbine.Turbine,0)
	unkR[388] = unkR[387] ;
	dyn[8] = unkR[390] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__prueba2_offdesign::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-147]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[184]) , _sqrt(LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[184]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[184]) + 1) , (2 * (LPRES__gamma(&unkR[184]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__prueba2_offdesign::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__prueba2_offdesign::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-148]  CombCha.f_O.p_c = ThrustMonitor.g.W * CombCha.c_star / CombCha.A_th
unkR[63] = _div( unkR[183] * dyn[1] , unkR[4],"CombCha.A_th") ;
//[E-149]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[337] = _div( unkR[287] , unkR[63],"CombCha.f_O.p_c") ;
//[E-150]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[336] = _sqrt(_div( 2. * (_pow( unkR[337] , (_div( (LPRES__gamma(&unkR[66]) - 1.) , LPRES__gamma(&unkR[66]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[66]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[336] = 1. ;
else unkR[336] = 0. ;
//[E-151]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[64] = _div( unkR[286] , (1. + (LPRES__gamma(&unkR[66]) - 1.)/2. * _pow( unkR[336] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[64] = unkR[286] ;
}
//[E-152]  ThrustMonitor.g.Tt = (CombCha.c_star * LPRES.FGAMMA(ThrustMonitor.g.fluid)) ** 2 / LPRES.R(ThrustMonitor.g.fluid)
unkR[20] = _div( _pow( (dyn[1] * LPRES__FGAMMA(&unkR[184])) , 2.,"(CombCha.c_star * LPRES.FGAMMA(ThrustMonitor.g.fluid))**(2)" ) , LPRES__R(&unkR[184]),"LPRES.R(ThrustMonitor.g.fluid)") ;
//[E-153]  CombCha.T_aw = ThrustMonitor.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[15] = unkR[20] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[184]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[184]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-154]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[226] = 1.184e-07 * _pow( LPRES__M(&unkR[184]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-155]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[215] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[226] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[184]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[63] , dyn[1],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-156]  Junction.f_in1.W = Injector_F.W - HeadLoss_Turb.f_in.W
unkR[343] = unkR[32] - dyn[3] ;
//[E-157]  HeadLoss_TF.f_in.W = HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[247] = dyn[3] + unkR[343] ;
//[E-158]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[284] = _div( _div( unkR[247] , (unkR[242] * unkR[243] * LPRES__rho(&unkR[252])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-159]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[240] = _div( LPRES__rho(&unkR[252]) * unkR[284] * unkR[236] , LPRES__visc(&unkR[252]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-160]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[238] = 0.027 * _pow( unkR[240] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[239] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-161]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[249] = _div( unkR[238] * LPRES__cond(&unkR[252]) , unkR[236],"CoolingJacket.D_hy") ;
//[E-162]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[245] = LPRES__hdc_fric(unkR[235], unkR[282], unkR[240]) ;
//[E-163]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[248] = unkR[281] - _div( unkR[245] * unkR[237] , unkR[235],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[252]) * _pow( unkR[284] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-164]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[378] = unkR[248] * unkR[377] ;
//[E-165]  HeadLoss_Turb.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[319] = _div( unkR[378] , unkR[400],"Turbine.pi") ;
//[E-166]  Junction.f_in2.pt = HeadLoss_Turb.f_in.pt - HeadLoss_Turb.dp
unkR[320] = unkR[319] - unkR[316] ;
//[E-167]  HeadLoss_Junct.f_in.pt = Junction.f_in2.pt * Junction.TPL
unkR[299] = unkR[320] * unkR[342] ;
//[E-168]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[300] = unkR[299] - unkR[295] ;
//[E-169]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[327] = _div( unkR[300] , unkR[63],"CombCha.f_O.p_c") ;
//[E-170]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[326] = _sqrt(_div( 2. * (_pow( unkR[327] , (_div( (LPRES__gamma(&unkR[33]) - 1.) , LPRES__gamma(&unkR[33]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[326] = 1. ;
else unkR[326] = 0. ;
//[E-171]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[394] = 1. - unkR[397] * (1. - _pow( (_div( unkR[319] , unkR[378],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[33]) - 1.) , LPRES__gamma(&unkR[33]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-172]  Junction.f_in1.Tt = HeadLoss_Turb.f_in.Tt / Turbine.alpha
unkR[246] = _div( dyn[2] , unkR[394],"Turbine.alpha") ;
//[E-173]  CoolingJacket.h.Q = HeadLoss_TF.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - CoolingJacket.l.Tt)
unkR[213] = unkR[247] * LPRES__cp(&unkR[33]) * (unkR[246] - unkR[251]) ;
//[E-174]  CoolingJacket.h.T = CombCha.T_aw - CoolingJacket.h.Q / CombCha.A_wet / CombCha.h_g
unkR[214] = unkR[15] - _div( _div( unkR[213] , unkR[5],"CombCha.A_wet") , unkR[215],"CombCha.h_g") ;
//[E-175]  CoolingJacket.T_w_cold = CoolingJacket.h.T - CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w)
unkR[241] = unkR[214] - _div( _div( unkR[213] , unkR[5],"CombCha.A_wet") , (_div( unkR[250] , unkR[283],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") ;
//[E-176]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - CoolingJacket.l.Tt) * CoolingJacket.A_wet_cooling
res[1] = evalNormResidueInternal(1,unkR[213],unkR[249] * (unkR[241] - unkR[251]) * unkR[234]);
//[E-177]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[298] = _div( (-(_div( unkR[343] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33]) * -unkR[246]) - _div( dyn[3] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33]) * -dyn[2]) , (_div( unkR[343] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33]) + _div( dyn[3] , unkR[32],"Injector_F.W") * LPRES__cp(&unkR[33])),"Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-178]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[31] = _div( unkR[298] , (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( unkR[326] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[31] = unkR[298] ;
}
//[E-179]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[125]) * unkR[64] + _div( unkR[222] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[96]) * unkR[31]) , ((1. + _div( unkR[222] , unkR[10],"CombCha.OF_st")) * unkR[28]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-180]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[30] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[28] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[154]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-181]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[2] = evalNormResidueInternal(2,_div( (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") * LPRES__cp(&unkR[154]) * (unkR[20] - unkR[16]) + _div( unkR[25] , unkR[183],"ThrustMonitor.g.W") * unkR[94] * (unkR[20] - unkR[64]) + _div( unkR[24] , unkR[183],"ThrustMonitor.g.W") * unkR[61] * (unkR[20] - unkR[31]),0);
//[E-182]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[389] = dyn[3] * LPRES__cp(&unkR[33]) * (unkR[246] - dyn[2]) ;
//[E-183]  Pump_F.m.Power = Gearbox.m_out.Power - Turbine.m.Power
unkR[349] = unkR[294] - unkR[389] ;
//[E-184]  Pump_F.tau = -Pump_F.m.Power / HeadLoss_TF.f_in.W
res[3] = evalNormResidueInternal(3,unkR[358],_div( -unkR[349] , unkR[247],"HeadLoss_TF.f_in.W"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__prueba2_offdesign::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[3];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__prueba2_offdesign::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-188]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[184]) , (_pow( (_div( dyn[4] , unkR[63],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[184]) * (1. - _pow( (_div( dyn[4] , unkR[63],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[184]) - 1.) , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[184]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__prueba2_offdesign::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__prueba2_offdesign::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-193]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( unkR[183] * _sqrt(LPRES__R(&unkR[184]) * unkR[20],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[63],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[184]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[184]) + 1)/2 , (LPRES__gamma(&unkR[184]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__prueba2_offdesign::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__prueba2_offdesign::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-221]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
res[6] = evalNormResidueInternal(6,unkR[354],_div( unkR[358] , _pow( dyn[6] , 2,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__prueba2_offdesign::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn5, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__prueba2_offdesign::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-226]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
res[7] = evalNormResidueInternal(7,unkR[366],_div( unkR[370] , _pow( dyn[7] , 2,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__prueba2_offdesign::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn6, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__prueba2_offdesign::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-237]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[401] = _div( unkR[406] , _pow( dyn[8] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-238]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[398] = _div( (unkR[401] + 1.) , (tan(unkR[395] * 3.14159265358979/180.) - tan(unkR[396] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-239]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[8] = evalNormResidueInternal(8,unkR[398],_div( unkR[392] , dyn[8],"Turbine.U"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__prueba2_offdesign::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_offdesign& m= *DRLPRUEBAS__prueba2_offdesign::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__prueba2_offdesign::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_offdesign::fcn7, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__prueba2_offdesign::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[183] = unkR[65] + unkR[32] ;
//[E-3]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[66]);
//[E-4]  CombCha.W_O = Injector_O.W * (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[26] = unkR[65] * (1. - unkR[92]) ;
//[E-5]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[252]), &unkR[33]);
//[E-6]  CombCha.W_F = Injector_F.W * (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[21] = unkR[32] * (1. - unkR[59]) ;
//[E-7]  CombCha.W_IO = Injector_O.W - CombCha.W_O
unkR[25] = unkR[65] - unkR[26] ;
//[E-8]  CombCha.W_IF = Injector_F.W - CombCha.W_F
unkR[24] = unkR[32] - unkR[21] ;
//[E-9]  CombCha.OF = CombCha.W_O / CombCha.W_F
unkR[9] = _div( unkR[26] , unkR[21],"CombCha.W_F") ;
//[E-10]  CombCha.phi = CombCha.OF_st / CombCha.OF
unkR[222] = _div( unkR[10] , unkR[9],"CombCha.OF") ;
//[E-11]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[23] = _div( unkR[21] , unkR[222],"CombCha.phi") ;
//[E-12]  CombCha.Q_comb_effective =  ZONE[1] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-13]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-14]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-15]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[96] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[26] + unkR[96] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-16]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-17]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[97] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[26] + unkR[97] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-19]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-20]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[98] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[26] + unkR[98] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-22]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[99] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[26] + unkR[99] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-25]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[100] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[26] + unkR[100] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-28]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[101] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[26] + unkR[101] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-31]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[102] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[26] + unkR[102] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-34]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[103] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[26] + unkR[103] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-37]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[104] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[26] + unkR[104] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-40]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[105] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[26] + unkR[105] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-43]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[106] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[26] + unkR[106] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-46]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[107] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[26] + unkR[107] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-49]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[108] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[26] + unkR[108] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-52]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[109] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[26] + unkR[109] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-55]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[110] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[26] + unkR[110] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-58]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-59]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[111] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[26] + unkR[111] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-61]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-62]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-63]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[112] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[26] + unkR[112] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-64]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-65]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-66]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[113] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[26] + unkR[113] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-67]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-68]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-69]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[114] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[26] + unkR[114] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-70]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-71]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-72]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[115] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[26] + unkR[115] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-73]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-74]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-75]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[116] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[26] + unkR[116] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-76]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-77]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-78]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[117] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[26] + unkR[117] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-79]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-80]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-81]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[118] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[26] + unkR[118] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-82]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-83]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-84]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[119] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[26] + unkR[119] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-85]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[149] = _div( unkR[90] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-86]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[120] = _div( unkR[57] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-87]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[120] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[178] = _div( (unkR[149] * unkR[26] + unkR[120] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-88]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[150] = _div( unkR[91] , (1. - unkR[92]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-89]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[121] = _div( unkR[58] , (1. - unkR[59]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-90]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[179] = _div( (unkR[150] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[121] * MATH__max(unkR[222] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[179] = _div( (unkR[150] * unkR[26] + unkR[121] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-91]  CombCha.fluid_O[Comb_prod] = 0
unkR[151] = 0. ;
//[E-92]  CombCha.fluid_F[Comb_prod] = 0
unkR[122] = 0. ;
//[E-93]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = _div( (unkR[151] * MATH__max(1. - unkR[222], 0.) * unkR[26] + unkR[122] * MATH__max(unkR[222] - 1., 0.) * unkR[23] + (1. - MATH__max(1. - unkR[222], 0.)) * (unkR[26] + unkR[23])) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[180] = 0. ;
}
//[E-94]  CombCha.fluid_P[Comb_prod_M] =  IF[28] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[181] = unkR[6] ;
}
else 
{
unkR[181] = 0. ;
}
//[E-95]  CombCha.fluid_P[Comb_prod_cp] =  IF[29] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[182] = unkR[27] ;
}
else 
{
unkR[182] = 0. ;
}
//[E-96]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[307] = unkR[306] - unkR[302] ;
//[E-97]  CoolingJacket.l.pt = Pump_F.dp + Pump_F.f_in.pt
unkR[281] = unkR[351] + unkR[307] ;
//[E-98]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[252]);
//[E-99]  Pump_F.tau = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[358] = _div( (unkR[281] - unkR[307]) , (unkR[352] * LPRES__rho(&unkR[252])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-100]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[314] = unkR[313] - unkR[309] ;
//[E-101]  FlowMeter_O.f_in.pt = Pump_O.dp + Pump_O.f_in.pt
unkR[287] = unkR[363] + unkR[314] ;
//[E-102]  Pump_O.tau = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[370] = _div( (unkR[287] - unkR[314]) , (unkR[364] * LPRES__rho(&unkR[66])),"Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-103]  Pump_O.m.Power = -(Pump_O.tau * Injector_O.W)
unkR[292] = -(unkR[370] * unkR[65]) ;
//[E-104]  Gearbox.m_out.Power =  ZONE[2] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[1]==0)
	unkR[294] = -unkR[292] * unkR[290] ;
else unkR[294] = _div( -unkR[292] , unkR[290],"Gearbox.eta") ;
//[E-105]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[152] = 0. ;
//[E-106]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[153] = 0. ;
//[E-107]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[123] = 0. ;
//[E-108]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[124] = 0. ;
//[E-109]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[28] = _div( (unkR[26] * LPRES__cp(&unkR[125]) + unkR[21] * LPRES__cp(&unkR[96])) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
//[E-110]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[286] = _div( _div( (unkR[287] - unkR[314]) , LPRES__rho(&unkR[66]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[364],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[66]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[312] ;
//[E-111]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[154] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[155] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[175] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[176] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[177] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[178] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[209] = _div( unkR[179] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[210] = _div( (unkR[180] * (unkR[26] + unkR[21]) + unkR[25] + unkR[24]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[211] = unkR[181] ;
//[E-139]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[212] = unkR[182] ;
//[E-140]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[235] = _div( 1.3 * _pow( (unkR[242] * unkR[243]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[242] + unkR[243]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-141]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[236] = _div( 2. * unkR[242] * unkR[243] , (unkR[242] + unkR[243]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-142]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[251] = _div( _div( (unkR[281] - unkR[307]) , LPRES__rho(&unkR[252]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[352],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[252]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[305] ;
//[E-143]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[239] = _div( LPRES__visc(&unkR[252]) * LPRES__cp(&unkR[252]) , LPRES__cond(&unkR[252]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-144]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[234] = unkI[2] * 2. * (unkR[242] + unkR[243]) * unkR[237] ;
//[E-145]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[184]) , (9. * LPRES__gamma(&unkR[184]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-146]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;


if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,3,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-185]  CombCha.R_univ_R = (CombCha.W_O * 8314 / CombCha.M_oxid + CombCha.W_F * 8314 / CombCha.M_fuel) / (CombCha.W_O + CombCha.W_F)
unkR[14] = _div( (_div( unkR[26] * 8314. , unkR[8],"CombCha.M_oxid") + _div( unkR[21] * 8314. , unkR[7],"CombCha.M_fuel")) , (unkR[26] + unkR[21]),"CombCha.W_O + CombCha.W_F") ;
//[E-186]  CombCha.rho_trans = CombCha.f_O.p_c / ThrustMonitor.g.Tt / CombCha.R_univ_R
unkR[224] = _div( _div( unkR[63] , unkR[20],"ThrustMonitor.g.Tt") , unkR[14],"CombCha.R_univ_R") ;
//[E-187]  CombCha.cv_R = CombCha.cp_R - CombCha.R_univ_R
unkR[29] = unkR[28] - unkR[14] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-189]  FlowMeter_F.i.Data[1] = abs(HeadLoss_TF.f_in.W)
unkR[285] = abs(unkR[247]) ;
//[E-190]  FlowMeter_O.i.Data[1] = abs(Injector_O.W)
unkR[288] = abs(unkR[65]) ;
//[E-191]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[231] = unkR[285] + unkR[288] ;
//[E-192]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[216] = dyn[1] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-194]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[381] = _div( unkR[20] , (1. + (LPRES__gamma(&unkR[184]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-195]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[384] = dyn[5] * _sqrt(LPRES__gamma(&unkR[184]) * LPRES__R(&unkR[184]) * unkR[381],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-196]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[383] = _div( unkR[63] , _pow( (1. + (LPRES__gamma(&unkR[184]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[184]) - 1.) , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-197]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[382] = LPRES__ISA_Pressure(unkR[345]) ;
//[E-198]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[230] = unkR[183] * unkR[384] + unkR[2] * (unkR[383] - unkR[382]) ;
//[E-199]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[228] = _div( unkR[230] , unkR[231],"ControlPanel.W_tot") ;
//[E-200]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[227] = _div( unkR[228] , dyn[1],"CombCha.c_star") ;
//[E-201]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[229] = unkR[228]/9.80665 ;
//[E-202]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[293] = unkR[405] * 2. * 3.14159265358979/60. ;
//[E-203]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[291] = _div( unkR[293] , unkR[289],"Gearbox.GR") ;
//[E-204]  Injector_F.PR_sl =  IF[30] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[328] = _pow( ((LPRES__gamma(&unkR[33]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[33]) , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[328] = 0. ;
}
//[E-205]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[330] = _div( unkR[300] , unkR[328],"Injector_F.PR_sl") ;
}
else 
{
unkR[330] = 0. ;
}
//[E-206]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * Injector_F.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[324] = _div( _sqrt(unkR[298] * LPRES__R(&unkR[33]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[32] , (LPRES__FGAMMA(&unkR[33]) * unkR[300]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[324] = 0. ;
}
//[E-207]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[62] = MATH__max(unkR[63], unkR[330]) ;
}
else 
{
unkR[62] = unkR[63] ;
}
//[E-208]  Injector_F.A_d =  IF[35] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[323] = _div( unkR[324] * _pow( (_div( (2. + (LPRES__gamma(&unkR[33]) - 1.) * _pow( unkR[326] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[33]) + 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[33]) + 1.) , (2. * (LPRES__gamma(&unkR[33]) - 1.)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[326],"Injector_F.M_out") ;
}
else 
{
unkR[323] = _div( _div( unkR[32] , unkR[325],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[33]) * (unkR[300] - unkR[62]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"),"sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))") ;
}
//[E-209]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[331] = unkR[326] * _sqrt(LPRES__gamma(&unkR[33]) * LPRES__R(&unkR[33]) * unkR[31],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[331] = _div( unkR[32] , (LPRES__rho(&unkR[33]) * unkR[323] * unkR[325]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-210]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[329] = 0. ;
}
else 
{
unkR[329] = _div( LPRES__rho(&unkR[33]) * unkR[331] * unkR[325] * _sqrt(4. * unkR[323]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[33]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-211]  Injector_O.PR_sl =  IF[38] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[338] = _pow( ((LPRES__gamma(&unkR[66]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[66]) , (LPRES__gamma(&unkR[66]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[338] = 0. ;
}
//[E-212]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[340] = _div( unkR[287] , unkR[338],"Injector_O.PR_sl") ;
}
else 
{
unkR[340] = 0. ;
}
//[E-213]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * Injector_O.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[334] = _div( _sqrt(unkR[286] * LPRES__R(&unkR[66]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[65] , (LPRES__FGAMMA(&unkR[66]) * unkR[287]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[334] = 0. ;
}
//[E-214]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[95] = MATH__max(unkR[63], unkR[340]) ;
}
else 
{
unkR[95] = unkR[63] ;
}
//[E-215]  Injector_O.A_d =  IF[43] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[333] = _div( unkR[334] * _pow( (_div( (2. + (LPRES__gamma(&unkR[66]) - 1.) * _pow( unkR[336] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[66]) + 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[66]) + 1.) , (2. * (LPRES__gamma(&unkR[66]) - 1.)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[336],"Injector_O.M_out") ;
}
else 
{
unkR[333] = _div( _div( unkR[65] , unkR[335],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[66]) * (unkR[287] - unkR[95]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))") ;
}
//[E-216]  Injector_O.v_ideal =  IF[44] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[341] = unkR[336] * _sqrt(LPRES__gamma(&unkR[66]) * LPRES__R(&unkR[66]) * unkR[64],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[341] = _div( unkR[65] , (LPRES__rho(&unkR[66]) * unkR[333] * unkR[335]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-217]  Injector_O.Re =  IF[45] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[339] = 0. ;
}
else 
{
unkR[339] = _div( LPRES__rho(&unkR[66]) * unkR[341] * unkR[335] * _sqrt(4. * unkR[333]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[66]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-218]  Junction.f_in1.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[344] = _div( unkR[299] , unkR[342],"Junction.TPL") ;
//[E-219]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[348] = _div( (unkR[281] - unkR[307]) , (9.80665 * LPRES__rho(&unkR[252])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-220]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi_d
unkR[354] = 1. - _div( (1. - unkR[355]) , unkR[353],"Pump_F.phi_d") * unkR[353] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-222]  Pump_F.r_m_d = Pump_F.U / Turbine.m.N
unkR[357] = _div( dyn[6] , unkR[293],"Turbine.m.N") ;
//[E-223]  Pump_F.A_in_d = HeadLoss_TF.f_in.W / Pump_F.phi_d / LPRES.rho(HeadLoss_TF.f_in.fluid) / Pump_F.U
unkR[347] = _div( _div( _div( unkR[247] , unkR[353],"Pump_F.phi_d") , LPRES__rho(&unkR[252]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") , dyn[6],"Pump_F.U") ;
//[E-224]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[361] = _div( (unkR[287] - unkR[314]) , (9.80665 * LPRES__rho(&unkR[66])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-225]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi_d
unkR[366] = 1. - _div( (1. - unkR[367]) , unkR[365],"Pump_O.phi_d") * unkR[365] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-227]  Pump_O.r_m_d = Pump_O.U / Pump_O.m.N
unkR[369] = _div( dyn[7] , unkR[291],"Pump_O.m.N") ;
//[E-228]  Pump_O.A_in_d = Injector_O.W / Pump_O.phi_d / LPRES.rho(HeadLoss_TO.f_in.fluid) / Pump_O.U
unkR[360] = _div( _div( _div( unkR[65] , unkR[365],"Pump_O.phi_d") , LPRES__rho(&unkR[66]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") , dyn[7],"Pump_O.U") ;
//[E-229]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[375] = unkR[248] * unkR[377] ;
//[E-230]  Regulator_F.dp_d = Regulator_F.f_in.pt - Junction.f_in1.pt
unkR[372] = unkR[375] - unkR[344] ;
//[E-231]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[232] = unkR[230] ;
//[E-232]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[388] = MATH__min(unkR[387], 1.) ;
//[E-233]  Turbine.A_in_d = HeadLoss_Turb.f_in.W * sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Turbine.f_in.pt
unkR[386] = _div( _div( dyn[3] * _sqrt(unkR[246] * LPRES__R(&unkR[33]),"Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (_sqrt(LPRES__gamma(&unkR[33]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(unkR[388], 1.) * cos(unkR[395] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( MATH__min(unkR[388], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[33]) + 1.)/2. , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" )),"sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))") , unkR[378],"Turbine.f_in.pt") ;
//[E-234]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[406] = _div( unkR[389] , dyn[3],"HeadLoss_Turb.f_in.W") ;
//[E-235]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[391] = unkR[388] * _sqrt(_div( LPRES__gamma(&unkR[33]) * LPRES__R(&unkR[33]) * unkR[246] , (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( unkR[388] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-236]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[392] = unkR[391] * cos(unkR[395] * 3.14159265358979/180.) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-240]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[404] = _div( dyn[8] , unkR[293],"Turbine.m.N") ;
//[E-241]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[233] = unkR[285] + unkR[288] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__prueba2_offdesign::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[252])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",69,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[252])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[66])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[184])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[383] , unkR[382],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[33])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__prueba2_offdesign::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[292]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[33]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= unkR[327] - unkR[328]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[33]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= unkR[327] - unkR[328]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[66]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[337] - unkR[338]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[66]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[337] - unkR[338]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__prueba2_offdesign::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__prueba2_offdesign::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__prueba2_offdesign::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__prueba2_offdesign::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__prueba2_offdesign::initDelays()
{
}


bool DRLPRUEBAS__prueba2_offdesign::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__prueba2_offdesign = 90656;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__prueba2_offdesign = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__prueba2_offdesign[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__prueba2_offdesign;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__prueba2_offdesign;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__prueba2_offdesign;
return true;
}



bool DRLPRUEBAS__prueba2_offdesign::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__prueba2_offdesign = 272;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__prueba2_offdesign = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__prueba2_offdesign[] = 
{
"CQAAAB4AAAAAAAAAAQAAAAQAAAAEAAAABAAAAAUAAAAFAAAAAQAAAAEAAAAFAAAAAQAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAYAAAAHAAAACAAAAAEAAAACAAAAAwAAAAQAAAAJAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__prueba2_offdesign;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__prueba2_offdesign;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__prueba2_offdesign;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__prueba2_offdesign(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__prueba2_offdesign(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__prueba2_offdesign(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__prueba2_offdesign(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__prueba2_offdesign(name,dirInstall);
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
	sprintf(partitionName,"%s","offdesign");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.prueba2.offdesign");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

