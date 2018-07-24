//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__prueba2_design_CPP
#define DRLPRUEBAS__prueba2_design_CPP

#include "DRLPRUEBAS.prueba2.design.h"

DRLPRUEBAS__prueba2_design* DRLPRUEBAS__prueba2_design::s_current= NULL;

DRLPRUEBAS__prueba2_design::DRLPRUEBAS__prueba2_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "prueba2";
m_infoPartitionName = "design";
m_infoModelName = "DRLPRUEBAS__prueba2_design";
m_infoModelFileName = "DRLPRUEBAS.prueba2.design";
m_infoModelFileNameExtra = "prueba2.design";
m_perfFlag = false;
m_infoComponentDate = "04/06/2018 10:13:19.121000";
m_infoPartitionDate = "04/06/2018 10:14:08.811000";
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
n_dyn=8;
dyn= new double[8] ;
static double tmp_dynInit[8]={ 1, 1, 1, 100, 100, 1, 1, 1 } ;
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

n_unkR=408;
unkR= new double[408] ;
static double tmp_unkRInit[408]={ 56.88798558, 14, 1, 0, 0.0134109877, 0, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 
		0, 0, 4000, 3180.93, 0, 1, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0, 
		0.99, 1, 2.70069069, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 3275010, 1, 16.3526821, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 19.05, 5000000, 0, 
		0.567, 0, 0.032, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 
		0, 0, 0, 0.00100103471, 0.00813274823, 100000, 0, 1, 1, 1, 0, 16.09, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5e-05, 0.000583419169, 0, 0, 1, 
		1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 3254.325, 
		1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 0.1, 
		1, 1, 1200000, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 0, 0, 0.05, 0, 0, 
		0.5, 0, 10, 0, 0, 0, 0, 1, 1, 1, 0, 0.01, 0, 0, 0, 500, 
		7358000, 0.573907002, 0.0656, 0, 0.2533, 0.05, 0, 0, 0.01, 0, 0, 500, 4282000, 0.6508, 0.03027, 0, 
		0.05393, 0.05, 0, 0, 3219188.99, 0, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 0, 0, 
		0, 0, 0.005, 0, 1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 
		0.05, 1.8, 0, 0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[408];
dcopy(408,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 1, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 1, 1, 1, 
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
n_nelg= 21;
n_neld= 0;
m_numBoxes= 7;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__prueba2_design::initInternalModels()
{
}

void DRLPRUEBAS__prueba2_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__prueba2_design::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__prueba2_design::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__prueba2_design::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


int DRLPRUEBAS__prueba2_design::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__prueba2_design::LPRES__State(double fluid[])
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


double DRLPRUEBAS__prueba2_design::LPRES__M(double fluid[])
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


double DRLPRUEBAS__prueba2_design::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__prueba2_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__prueba2_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__prueba2_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__prueba2_design::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__prueba2_design::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__prueba2_design::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__prueba2_design::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__prueba2_design::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__prueba2_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__prueba2_design::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__prueba2_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__prueba2_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[186]) ;
	unkI[0] = 1 ;
	unkR[223] = 1. ;
	if( 0 ) {
	unkR[65] = unkR[222] ;
	}
	unkR[21] = unkR[18] ;
	unkR[22] = unkR[23] ;
	if( unkI[1] == 1 ) {
	dyn[0] = 0.001 ;
	}
	else {
	dyn[0] = 100. ;
	}
	unkR[219] = _div( 1. , unkR[221],"CombCha.mfr_ch") ;
	unkR[220] = _div( 1. , (unkR[221] * unkR[19]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[253]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[68]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[253]), &unkR[35]) ;
	unkR[242] = 500. ;
  // init(Pump_F.Pump,0)
	dyn[5] = unkR[351] ;
  // init(Pump_O.Pump,0)
	dyn[6] = unkR[363] ;
  // init(Turbine.Turbine,0)
	unkR[389] = unkR[388] ;
	dyn[7] = unkR[391] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__prueba2_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-146]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[186]) , _sqrt(LPRES__gamma(&unkR[186]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[186]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[186]) + 1) , (2 * (LPRES__gamma(&unkR[186]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__prueba2_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__prueba2_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  Junction.f_in1.W = Injector_F.W - HeadLoss_Turb.f_in.W
unkR[344] = unkR[34] - dyn[2] ;
//[E-150]  HeadLoss_TF.f_in.W = HeadLoss_Turb.f_in.W + Junction.f_in1.W
unkR[248] = dyn[2] + unkR[344] ;
//[E-151]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[285] = _div( _div( unkR[248] , (unkR[243] * unkR[244] * LPRES__rho(&unkR[253])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-152]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[241] = _div( LPRES__rho(&unkR[253]) * unkR[285] * unkR[237] , LPRES__visc(&unkR[253]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-153]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[239] = 0.027 * _pow( unkR[241] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[240] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-154]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[250] = _div( unkR[239] * LPRES__cond(&unkR[253]) , unkR[237],"CoolingJacket.D_hy") ;
//[E-155]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[246] = LPRES__hdc_fric(unkR[236], unkR[283], unkR[241]) ;
//[E-156]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[249] = unkR[282] - _div( unkR[246] * unkR[238] , unkR[236],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[253]) * _pow( unkR[285] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-157]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[379] = unkR[249] * unkR[378] ;
//[E-158]  HeadLoss_Turb.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[320] = _div( unkR[379] , unkR[401],"Turbine.pi") ;
//[E-159]  Junction.f_in2.pt = HeadLoss_Turb.f_in.pt - HeadLoss_Turb.dp
unkR[321] = unkR[320] - unkR[317] ;
//[E-160]  HeadLoss_Junct.f_in.pt = Junction.f_in2.pt * Junction.TPL
unkR[300] = unkR[321] * unkR[343] ;
//[E-161]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[301] = unkR[300] - unkR[296] ;
//[E-162]  Injector_F.PR = Injector_F.f_in.pt / CombCha.p_c
unkR[328] = _div( unkR[301] , unkR[65],"CombCha.p_c") ;
//[E-163]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[327] = _sqrt(_div( 2. * (_pow( unkR[328] , (_div( (LPRES__gamma(&unkR[35]) - 1.) , LPRES__gamma(&unkR[35]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[35]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[327] = 1. ;
else unkR[327] = 0. ;
//[E-164]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[395] = 1. - unkR[398] * (1. - _pow( (_div( unkR[320] , unkR[379],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[35]) - 1.) , LPRES__gamma(&unkR[35]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-165]  Junction.f_in1.Tt = HeadLoss_Turb.f_in.Tt / Turbine.alpha
unkR[247] = _div( dyn[1] , unkR[395],"Turbine.alpha") ;
//[E-166]  CoolingJacket.h.Q = HeadLoss_TF.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - CoolingJacket.l.Tt)
unkR[215] = unkR[248] * LPRES__cp(&unkR[35]) * (unkR[247] - unkR[252]) ;
//[E-167]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + CoolingJacket.l.Tt
unkR[242] = _div( _div( unkR[215] , unkR[235],"CoolingJacket.A_wet_cooling") , unkR[250],"CoolingJacket.h_l") + unkR[252] ;
//[E-168]  CoolingJacket.h.T = CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w) + CoolingJacket.T_w_cold
unkR[216] = _div( _div( unkR[215] , unkR[6],"CombCha.A_wet") , (_div( unkR[251] , unkR[284],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[242] ;
//[E-169]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[299] = _div( (-(_div( unkR[344] , unkR[34],"Injector_F.W") * LPRES__cp(&unkR[35]) * -unkR[247]) - _div( dyn[2] , unkR[34],"Injector_F.W") * LPRES__cp(&unkR[35]) * -dyn[1]) , (_div( unkR[344] , unkR[34],"Injector_F.W") * LPRES__cp(&unkR[35]) + _div( dyn[2] , unkR[34],"Injector_F.W") * LPRES__cp(&unkR[35])),"Junction.f_in1.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / Injector_F.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-170]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[33] = _div( unkR[299] , (1. + (LPRES__gamma(&unkR[35]) - 1.)/2. * _pow( unkR[327] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[33] = unkR[299] ;
}
//[E-171]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[20] = _div( (LPRES__cp(&unkR[127]) * unkR[66] + _div( unkR[223] , unkR[11],"CombCha.OF_st") * LPRES__cp(&unkR[98]) * unkR[33]) , ((1. + _div( unkR[223] , unkR[11],"CombCha.OF_st")) * unkR[30]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-172]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[17] = _div( (_div( unkR[32] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[30] * (unkR[20] - 298.15)) , LPRES__cp(&unkR[156]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-173]  ThrustMonitor.g.Tt = (-((CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * -CombCha.T_c + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * -CombCha.f_O.T) - CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * -CombCha.f_F.T) / ((CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp])
unkR[21] = _div( (-(_div( (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") * LPRES__cp(&unkR[156]) * -unkR[17] + _div( unkR[26] , unkR[185],"ThrustMonitor.g.W") * unkR[96] * -unkR[66]) - _div( unkR[25] , unkR[185],"ThrustMonitor.g.W") * unkR[63] * -unkR[33]) , (_div( (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") * LPRES__cp(&unkR[156]) + _div( unkR[26] , unkR[185],"ThrustMonitor.g.W") * unkR[96] + _div( unkR[25] , unkR[185],"ThrustMonitor.g.W") * unkR[63]),"(CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp]") ;
//[E-174]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[28] = _div( _sqrt(LPRES__R(&unkR[186]) * unkR[21],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[186]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-175]  CombCha.A_th_d = ThrustMonitor.g.W * CombCha.c_star / CombCha.p_c
unkR[5] = _div( unkR[185] * unkR[28] , unkR[65],"CombCha.p_c") ;
//[E-176]  CombCha.A_r = CombCha.A_th_d * CombCha.AR_r
unkR[3] = unkR[5] * unkR[1] ;
//[E-177]  CombCha.T_aw = ThrustMonitor.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[16] = unkR[21] * _div( (1. + _pow( unkR[12] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[186]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[186]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-178]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[227] = 1.184e-07 * _pow( LPRES__M(&unkR[186]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[16] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-179]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th_d / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th_d / CombCha.A_r) ** 0.9
unkR[217] = _div( 0.026 , _pow( _sqrt(4. * unkR[5]/3.14159265358979,"4 * CombCha.A_th_d / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th_d / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th_d / 3.14159265358979) ** 0.2") * _div( _pow( unkR[227] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[186]) , _pow( unkR[12] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[65] , unkR[28],"CombCha.c_star")) , 0.8,"(CombCha.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[5] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th_d / CombCha.A_r)**(0.9)" ) ;
//[E-180]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[1] = evalNormResidueInternal(1,unkR[215],unkR[217] * (unkR[16] - unkR[216]) * unkR[6]);
//[E-181]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[390] = dyn[2] * LPRES__cp(&unkR[35]) * (unkR[247] - dyn[1]) ;
//[E-182]  Pump_F.m.Power = Gearbox.m_out.Power - Turbine.m.Power
unkR[350] = unkR[295] - unkR[390] ;
//[E-183]  Pump_F.tau = -Pump_F.m.Power / HeadLoss_TF.f_in.W
res[2] = evalNormResidueInternal(2,unkR[359],_div( -unkR[350] , unkR[248],"HeadLoss_TF.f_in.W"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__prueba2_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__prueba2_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-188]  ThrustMonitor.g.A_out / CombCha.A_th_d = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,_div( unkR[2] , unkR[5],"CombCha.A_th_d"),_div( LPRES__FGAMMA(&unkR[186]) , (_pow( (_div( dyn[3] , unkR[65],"CombCha.p_c")) , (_div( 1 , LPRES__gamma(&unkR[186]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[186]) * (1. - _pow( (_div( dyn[3] , unkR[65],"CombCha.p_c")) , (_div( (LPRES__gamma(&unkR[186]) - 1.) , LPRES__gamma(&unkR[186]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[186]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__prueba2_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn3, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__prueba2_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-193]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[4] = evalNormResidueInternal(4,_div( _div( unkR[185] * _sqrt(LPRES__R(&unkR[186]) * unkR[21],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[65],"CombCha.p_c"),_sqrt(LPRES__gamma(&unkR[186]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[4] * _pow( (1 + (LPRES__gamma(&unkR[186]) - 1)/2 * _pow( dyn[4] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[186]) + 1)/2 , (LPRES__gamma(&unkR[186]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__prueba2_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn4, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__prueba2_design::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-221]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
res[5] = evalNormResidueInternal(5,unkR[355],_div( unkR[359] , _pow( dyn[5] , 2,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__prueba2_design::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn5, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__prueba2_design::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-226]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
res[6] = evalNormResidueInternal(6,unkR[367],_div( unkR[371] , _pow( dyn[6] , 2,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2"));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__prueba2_design::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn6, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__prueba2_design::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-237]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[402] = _div( unkR[407] , _pow( dyn[7] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-238]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[399] = _div( (unkR[402] + 1.) , (tan(unkR[396] * 3.14159265358979/180.) - tan(unkR[397] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-239]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[7] = evalNormResidueInternal(7,unkR[399],_div( unkR[393] , dyn[7],"Turbine.U"));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__prueba2_design::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba2_design& m= *DRLPRUEBAS__prueba2_design::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__prueba2_design::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(8, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba2_design::fcn7, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__prueba2_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[308] = unkR[307] - unkR[303] ;
//[E-2]  CoolingJacket.l.pt = Pump_F.dp + Pump_F.f_in.pt
unkR[282] = unkR[352] + unkR[308] ;
//[E-3]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[253]);
//[E-4]  Pump_F.tau = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[359] = _div( (unkR[282] - unkR[308]) , (unkR[353] * LPRES__rho(&unkR[253])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-5]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[315] = unkR[314] - unkR[310] ;
//[E-6]  FlowMeter_O.f_in.pt = Pump_O.dp + Pump_O.f_in.pt
unkR[288] = unkR[364] + unkR[315] ;
//[E-7]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[68]);
//[E-8]  Pump_O.tau = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[371] = _div( (unkR[288] - unkR[315]) , (unkR[365] * LPRES__rho(&unkR[68])),"Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-9]  Pump_O.m.Power = -(Pump_O.tau * Injector_O.W)
unkR[293] = -(unkR[371] * unkR[67]) ;
//[E-10]  Gearbox.m_out.Power =  ZONE[2] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[1]==0)
	unkR[295] = -unkR[293] * unkR[291] ;
else unkR[295] = _div( -unkR[293] , unkR[291],"Gearbox.eta") ;
//[E-11]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[253]), &unkR[35]);
//[E-12]  CombCha.W_O = Injector_O.W * (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[27] = unkR[67] * (1. - unkR[94]) ;
//[E-13]  CombCha.W_F = Injector_F.W * (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[22] = unkR[34] * (1. - unkR[61]) ;
//[E-14]  CombCha.OF = CombCha.W_O / CombCha.W_F
unkR[10] = _div( unkR[27] , unkR[22],"CombCha.W_F") ;
//[E-15]  CombCha.phi = CombCha.OF_st / CombCha.OF
unkR[223] = _div( unkR[11] , unkR[10],"CombCha.OF") ;
//[E-16]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-17]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-19]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-20]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-22]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[149] = _div( unkR[90] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[150] = _div( unkR[91] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[151] = _div( unkR[92] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[152] = _div( unkR[93] , (1. - unkR[94]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_O[Comb_prod] = 0
unkR[153] = 0. ;
//[E-43]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[154] = 0. ;
//[E-44]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[155] = 0. ;
//[E-45]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-59]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-61]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-62]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-63]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-64]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-65]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-66]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-67]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[120] = _div( unkR[57] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-68]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[121] = _div( unkR[58] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-69]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[59] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-70]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[60] , (1. - unkR[61]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-71]  CombCha.fluid_F[Comb_prod] = 0
unkR[124] = 0. ;
//[E-72]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[125] = 0. ;
//[E-73]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[126] = 0. ;
//[E-74]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[30] = _div( (unkR[27] * LPRES__cp(&unkR[127]) + unkR[22] * LPRES__cp(&unkR[98])) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
//[E-75]  CombCha.Q_comb_effective =  ZONE[1] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[14] = unkR[13] ;
else unkR[14] = 0. ;
//[E-76]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[24] = _div( unkR[22] , unkR[223],"CombCha.phi") ;
//[E-77]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[98] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[27] + unkR[98] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-78]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[99] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[27] + unkR[99] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-79]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[100] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[27] + unkR[100] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-80]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[101] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[27] + unkR[101] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-81]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[102] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[27] + unkR[102] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-82]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[103] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[27] + unkR[103] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-83]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[104] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[27] + unkR[104] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-84]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[105] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[27] + unkR[105] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-85]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[106] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[27] + unkR[106] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-86]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[107] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[27] + unkR[107] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-87]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[108] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[27] + unkR[108] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-88]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[109] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[27] + unkR[109] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-89]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[110] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[27] + unkR[110] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-90]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[111] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[27] + unkR[111] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-91]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[112] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[27] + unkR[112] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-92]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[113] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[27] + unkR[113] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-93]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[114] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[27] + unkR[114] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-94]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[115] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[27] + unkR[115] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-95]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[116] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[27] + unkR[116] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-96]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[117] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[27] + unkR[117] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-97]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[118] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[27] + unkR[118] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-98]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[119] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[27] + unkR[119] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-99]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[120] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[178] = _div( (unkR[149] * unkR[27] + unkR[120] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-100]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[179] = _div( (unkR[150] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[121] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[179] = _div( (unkR[150] * unkR[27] + unkR[121] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-101]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[180] = _div( (unkR[151] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[122] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[180] = _div( (unkR[151] * unkR[27] + unkR[122] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-102]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[181] = _div( (unkR[152] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[123] * MATH__max(unkR[223] - 1., 0.) * unkR[24]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[181] = _div( (unkR[152] * unkR[27] + unkR[123] * unkR[22]) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-103]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[182] = _div( (unkR[153] * MATH__max(1. - unkR[223], 0.) * unkR[27] + unkR[124] * MATH__max(unkR[223] - 1., 0.) * unkR[24] + (1. - MATH__max(1. - unkR[223], 0.)) * (unkR[27] + unkR[24])) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[182] = 0. ;
}
//[E-104]  CombCha.fluid_P[Comb_prod_M] =  IF[28] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[183] = unkR[7] ;
}
else 
{
unkR[183] = 0. ;
}
//[E-105]  CombCha.fluid_P[Comb_prod_cp] =  IF[29] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[184] = unkR[29] ;
}
else 
{
unkR[184] = 0. ;
}
//[E-106]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[185] = unkR[67] + unkR[34] ;
//[E-107]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-108]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-109]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-110]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-111]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[175] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[176] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[177] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[178] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[209] = _div( unkR[179] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[210] = _div( unkR[180] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[211] = _div( unkR[181] * (unkR[27] + unkR[22]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-133]  CombCha.W_IO = Injector_O.W - CombCha.W_O
unkR[26] = unkR[67] - unkR[27] ;
//[E-134]  CombCha.W_IF = Injector_F.W - CombCha.W_F
unkR[25] = unkR[34] - unkR[22] ;
//[E-135]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[212] = _div( (unkR[182] * (unkR[27] + unkR[22]) + unkR[26] + unkR[25]) , unkR[185],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[213] = unkR[183] ;
//[E-137]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[214] = unkR[184] ;
//[E-138]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[287] = _div( _div( (unkR[288] - unkR[315]) , LPRES__rho(&unkR[68]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[365],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[68]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[313] ;
//[E-139]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.p_c
unkR[338] = _div( unkR[288] , unkR[65],"CombCha.p_c") ;
//[E-140]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[337] = _sqrt(_div( 2. * (_pow( unkR[338] , (_div( (LPRES__gamma(&unkR[68]) - 1.) , LPRES__gamma(&unkR[68]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[68]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[337] = 1. ;
else unkR[337] = 0. ;
//[E-141]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[66] = _div( unkR[287] , (1. + (LPRES__gamma(&unkR[68]) - 1.)/2. * _pow( unkR[337] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[66] = unkR[287] ;
}
//[E-142]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[236] = _div( 1.3 * _pow( (unkR[243] * unkR[244]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[243] + unkR[244]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-143]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[237] = _div( 2. * unkR[243] * unkR[244] , (unkR[243] + unkR[244]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-144]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[252] = _div( _div( (unkR[282] - unkR[308]) , LPRES__rho(&unkR[253]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[353],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[253]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[306] ;
//[E-145]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[186]) , (9. * LPRES__gamma(&unkR[186]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-147]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[240] = _div( LPRES__visc(&unkR[253]) * LPRES__cp(&unkR[253]) , LPRES__cond(&unkR[253]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-148]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[235] = unkI[2] * 2. * (unkR[243] + unkR[244]) * unkR[238] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-184]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th_d
unkR[2] = unkR[0] * unkR[5] ;
//[E-185]  CombCha.R_univ_R = (CombCha.W_O * 8314 / CombCha.M_oxid + CombCha.W_F * 8314 / CombCha.M_fuel) / (CombCha.W_O + CombCha.W_F)
unkR[15] = _div( (_div( unkR[27] * 8314. , unkR[9],"CombCha.M_oxid") + _div( unkR[22] * 8314. , unkR[8],"CombCha.M_fuel")) , (unkR[27] + unkR[22]),"CombCha.W_O + CombCha.W_F") ;
//[E-186]  CombCha.rho_trans = CombCha.p_c / ThrustMonitor.g.Tt / CombCha.R_univ_R
unkR[225] = _div( _div( unkR[65] , unkR[21],"ThrustMonitor.g.Tt") , unkR[15],"CombCha.R_univ_R") ;
//[E-187]  CombCha.cv_R = CombCha.cp_R - CombCha.R_univ_R
unkR[31] = unkR[30] - unkR[15] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-189]  FlowMeter_F.i.Data[1] = abs(HeadLoss_TF.f_in.W)
unkR[286] = abs(unkR[248]) ;
//[E-190]  FlowMeter_O.i.Data[1] = abs(Injector_O.W)
unkR[289] = abs(unkR[67]) ;
//[E-191]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[232] = unkR[286] + unkR[289] ;
//[E-192]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[218] = unkR[28] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-194]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[382] = _div( unkR[21] , (1. + (LPRES__gamma(&unkR[186]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-195]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[385] = dyn[4] * _sqrt(LPRES__gamma(&unkR[186]) * LPRES__R(&unkR[186]) * unkR[382],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-196]  ThrustMonitor.p_out = CombCha.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[384] = _div( unkR[65] , _pow( (1. + (LPRES__gamma(&unkR[186]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[186]) - 1.) , LPRES__gamma(&unkR[186]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-197]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[383] = LPRES__ISA_Pressure(unkR[346]) ;
//[E-198]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[231] = unkR[185] * unkR[385] + unkR[2] * (unkR[384] - unkR[383]) ;
//[E-199]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[229] = _div( unkR[231] , unkR[232],"ControlPanel.W_tot") ;
//[E-200]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[228] = _div( unkR[229] , unkR[28],"CombCha.c_star") ;
//[E-201]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[230] = unkR[229]/9.80665 ;
//[E-202]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[294] = unkR[406] * 2. * 3.14159265358979/60. ;
//[E-203]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[292] = _div( unkR[294] , unkR[290],"Gearbox.GR") ;
//[E-204]  Injector_F.PR_sl =  IF[30] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[329] = _pow( ((LPRES__gamma(&unkR[35]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[35]) , (LPRES__gamma(&unkR[35]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[329] = 0. ;
}
//[E-205]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[331] = _div( unkR[301] , unkR[329],"Injector_F.PR_sl") ;
}
else 
{
unkR[331] = 0. ;
}
//[E-206]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * Injector_F.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[325] = _div( _sqrt(unkR[299] * LPRES__R(&unkR[35]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[34] , (LPRES__FGAMMA(&unkR[35]) * unkR[301]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[325] = 0. ;
}
//[E-207]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.p_c, Injector_F.p_out_ch)	 ELSE CombCha.p_c
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[64] = MATH__max(unkR[65], unkR[331]) ;
}
else 
{
unkR[64] = unkR[65] ;
}
//[E-208]  Injector_F.A_d =  IF[35] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[324] = _div( unkR[325] * _pow( (_div( (2. + (LPRES__gamma(&unkR[35]) - 1.) * _pow( unkR[327] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[35]) + 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[35]) + 1.) , (2. * (LPRES__gamma(&unkR[35]) - 1.)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[327],"Injector_F.M_out") ;
}
else 
{
unkR[324] = _div( _div( unkR[34] , unkR[326],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[35]) * (unkR[301] - unkR[64]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"),"sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))") ;
}
//[E-209]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[332] = unkR[327] * _sqrt(LPRES__gamma(&unkR[35]) * LPRES__R(&unkR[35]) * unkR[33],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[332] = _div( unkR[34] , (LPRES__rho(&unkR[35]) * unkR[324] * unkR[326]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-210]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[35]) == 2 ) 
{
unkR[330] = 0. ;
}
else 
{
unkR[330] = _div( LPRES__rho(&unkR[35]) * unkR[332] * unkR[326] * _sqrt(4. * unkR[324]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[35]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-211]  Injector_O.PR_sl =  IF[38] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[339] = _pow( ((LPRES__gamma(&unkR[68]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[68]) , (LPRES__gamma(&unkR[68]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[339] = 0. ;
}
//[E-212]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[341] = _div( unkR[288] , unkR[339],"Injector_O.PR_sl") ;
}
else 
{
unkR[341] = 0. ;
}
//[E-213]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * Injector_O.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[335] = _div( _sqrt(unkR[287] * LPRES__R(&unkR[68]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[67] , (LPRES__FGAMMA(&unkR[68]) * unkR[288]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[335] = 0. ;
}
//[E-214]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.p_c, Injector_O.p_out_ch)	 ELSE CombCha.p_c
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[97] = MATH__max(unkR[65], unkR[341]) ;
}
else 
{
unkR[97] = unkR[65] ;
}
//[E-215]  Injector_O.A_d =  IF[43] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[334] = _div( unkR[335] * _pow( (_div( (2. + (LPRES__gamma(&unkR[68]) - 1.) * _pow( unkR[337] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[68]) + 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[68]) + 1.) , (2. * (LPRES__gamma(&unkR[68]) - 1.)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[337],"Injector_O.M_out") ;
}
else 
{
unkR[334] = _div( _div( unkR[67] , unkR[336],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[68]) * (unkR[288] - unkR[97]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"),"sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))") ;
}
//[E-216]  Injector_O.v_ideal =  IF[44] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[342] = unkR[337] * _sqrt(LPRES__gamma(&unkR[68]) * LPRES__R(&unkR[68]) * unkR[66],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[342] = _div( unkR[67] , (LPRES__rho(&unkR[68]) * unkR[334] * unkR[336]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-217]  Injector_O.Re =  IF[45] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[68]) == 2 ) 
{
unkR[340] = 0. ;
}
else 
{
unkR[340] = _div( LPRES__rho(&unkR[68]) * unkR[342] * unkR[336] * _sqrt(4. * unkR[334]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[68]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-218]  Junction.f_in1.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[345] = _div( unkR[300] , unkR[343],"Junction.TPL") ;
//[E-219]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[349] = _div( (unkR[282] - unkR[308]) , (9.80665 * LPRES__rho(&unkR[253])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-220]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi_d
unkR[355] = 1. - _div( (1. - unkR[356]) , unkR[354],"Pump_F.phi_d") * unkR[354] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-222]  Pump_F.r_m_d = Pump_F.U / Turbine.m.N
unkR[358] = _div( dyn[5] , unkR[294],"Turbine.m.N") ;
//[E-223]  Pump_F.A_in_d = HeadLoss_TF.f_in.W / Pump_F.phi_d / LPRES.rho(HeadLoss_TF.f_in.fluid) / Pump_F.U
unkR[348] = _div( _div( _div( unkR[248] , unkR[354],"Pump_F.phi_d") , LPRES__rho(&unkR[253]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") , dyn[5],"Pump_F.U") ;
//[E-224]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[362] = _div( (unkR[288] - unkR[315]) , (9.80665 * LPRES__rho(&unkR[68])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-225]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi_d
unkR[367] = 1. - _div( (1. - unkR[368]) , unkR[366],"Pump_O.phi_d") * unkR[366] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-227]  Pump_O.r_m_d = Pump_O.U / Pump_O.m.N
unkR[370] = _div( dyn[6] , unkR[292],"Pump_O.m.N") ;
//[E-228]  Pump_O.A_in_d = Injector_O.W / Pump_O.phi_d / LPRES.rho(HeadLoss_TO.f_in.fluid) / Pump_O.U
unkR[361] = _div( _div( _div( unkR[67] , unkR[366],"Pump_O.phi_d") , LPRES__rho(&unkR[68]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") , dyn[6],"Pump_O.U") ;
//[E-229]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[376] = unkR[249] * unkR[378] ;
//[E-230]  Regulator_F.dp_d = Regulator_F.f_in.pt - Junction.f_in1.pt
unkR[373] = unkR[376] - unkR[345] ;
//[E-231]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[233] = unkR[231] ;
//[E-232]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[389] = MATH__min(unkR[388], 1.) ;
//[E-233]  Turbine.A_in_d = HeadLoss_Turb.f_in.W * sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Turbine.f_in.pt
unkR[387] = _div( _div( dyn[2] * _sqrt(unkR[247] * LPRES__R(&unkR[35]),"Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (_sqrt(LPRES__gamma(&unkR[35]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(unkR[389], 1.) * cos(unkR[396] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[35]) - 1.)/2. * _pow( MATH__min(unkR[389], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[35]) + 1.)/2. , (LPRES__gamma(&unkR[35]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" )),"sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))") , unkR[379],"Turbine.f_in.pt") ;
//[E-234]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[407] = _div( unkR[390] , dyn[2],"HeadLoss_Turb.f_in.W") ;
//[E-235]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[392] = unkR[389] * _sqrt(_div( LPRES__gamma(&unkR[35]) * LPRES__R(&unkR[35]) * unkR[247] , (1. + (LPRES__gamma(&unkR[35]) - 1.)/2. * _pow( unkR[389] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-236]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[393] = unkR[392] * cos(unkR[396] * 3.14159265358979/180.) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-240]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[405] = _div( dyn[7] , unkR[294],"Turbine.m.N") ;
//[E-241]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[234] = unkR[286] + unkR[289] ;

//save last residues
memcpy(this->res,res,8*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__prueba2_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[253])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",69,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[253])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[68])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[186])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[4] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[384] , unkR[383],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[4] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[35])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__prueba2_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121] + unkR[151] * unkR[122] + unkR[152] * unkR[123]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121] + unkR[151] * unkR[122] + unkR[152] * unkR[123]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[293]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[35]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= unkR[328] - unkR[329]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[35]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= unkR[328] - unkR[329]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[68]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[338] - unkR[339]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[68]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[338] - unkR[339]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__prueba2_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__prueba2_design::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__prueba2_design::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__prueba2_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__prueba2_design::initDelays()
{
}


bool DRLPRUEBAS__prueba2_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__prueba2_design = 89956;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__prueba2_design = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__prueba2_design[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__prueba2_design;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__prueba2_design;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__prueba2_design;
return true;
}



bool DRLPRUEBAS__prueba2_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__prueba2_design = 216;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__prueba2_design = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__prueba2_design[] = 
{
"CAAAABUAAAAAAAAAAQAAAAMAAAADAAAABAAAAAQAAAABAAAAAQAAAAQAAAABAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__prueba2_design;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__prueba2_design;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__prueba2_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__prueba2_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__prueba2_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__prueba2_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__prueba2_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__prueba2_design(name,dirInstall);
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
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.prueba2.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

