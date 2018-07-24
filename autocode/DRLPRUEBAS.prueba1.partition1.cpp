//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__prueba1_partition1_CPP
#define DRLPRUEBAS__prueba1_partition1_CPP

#include "DRLPRUEBAS.prueba1.partition1.h"

DRLPRUEBAS__prueba1_partition1* DRLPRUEBAS__prueba1_partition1::s_current= NULL;

DRLPRUEBAS__prueba1_partition1::DRLPRUEBAS__prueba1_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "prueba1";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__prueba1_partition1";
m_infoModelFileName = "DRLPRUEBAS.prueba1.partition1";
m_infoModelFileNameExtra = "prueba1.partition1";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 09:44:00.544000";
m_infoPartitionDate = "28/06/2018 09:51:04.240000";
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
		0.00813274823, 100000, 0, 1, 0, 0, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 19.05, 0.567, 0, 5e-05, 0.000583419169, 0.032, 0, 0, 1, 
		1, 0, 2.43566574, 1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 3254.325, 
		1500, 0.1, 21.11111, 193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 0.1, 
		1, 1, 1, 1, 1200000, 0.00178349971, 0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 0.000580606872, 
		0, 0.5, 0, 10, 0, 0, 16.3526821, 0, 0, 1, 1, 1, 0, 0.000677279675, 0, 0, 
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
void DRLPRUEBAS__prueba1_partition1::initInternalModels()
{
}

void DRLPRUEBAS__prueba1_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__prueba1_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


int DRLPRUEBAS__prueba1_partition1::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__prueba1_partition1::LPRES__State(double fluid[])
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


double DRLPRUEBAS__prueba1_partition1::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi5;
	int _vi6;
	double _vr1;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",233,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr1 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[6]) ) {
	_vi6 = setofElem(&typ[6], _vi5) ;
	_vr1 += Chem_rho[_vi5-1] * fluid[_vi6-1] ;
	_vi5 += 1 ;
	}
	return _vr1 ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__prueba1_partition1::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi10;
	int _vi9;
	double _vr3;

	_vr3 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[7]) ) {
	_vi10 = setofElem(&typ[7], _vi9) ;
	_vr3 += _div( fluid[_vi10-1] , Chem_M[_vi9-1],"Chem_M[_vi9]") ;
	_vi9 += 1 ;
	}
	return _div( 1 , (_vr3 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr3 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__prueba1_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__prueba1_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__prueba1_partition1::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__prueba1_partition1::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__prueba1_partition1::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__prueba1_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__prueba1_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__prueba1_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[63]) ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[249]) ;
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
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[249]), &unkR[30]) ;
	unkR[238] = 500. ;
	unkR[245] = _div( 1. , unkR[279],"CoolingJacket.mfr_ch") ;
	unkR[246] = _div( 1. , (unkR[279] * unkR[237]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
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
void DRLPRUEBAS__prueba1_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-76]  SplitFrac.f_in.W = CombCha.W_F / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[29] = _div( dyn[1] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-77]  Pump_F.phi = SplitFrac.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[355] = _div( unkR[29] , (unkR[349] * dyn[4] * LPRES__rho(&unkR[249])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-78]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi
unkR[357] = 1. - _div( (1. - unkR[358]) , unkR[356],"Pump_F.phi_d") * unkR[355] ;
//[E-79]  Pump_F.tau = Pump_F.psi * Pump_F.U ** 2
unkR[360] = unkR[357] * _pow( dyn[4] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-80]  CoolingJacket.l.pt = Pump_F.tau * Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid) + Pump_F.f_in.pt
unkR[278] = unkR[360] * unkR[354] * LPRES__rho(&unkR[249]) + unkR[308] ;
//[E-81]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[248] = _div( _div( (unkR[278] - unkR[308]) , LPRES__rho(&unkR[249]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[354],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[249]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[306] ;
//[E-82]  CoolingJacket.h.Q = -(LPRES.cp(HeadLoss_Turb.f_in.fluid) * (SplitFrac.f_in.W * CoolingJacket.l.Tt - SplitFrac.f_in.W * Junction.f_in1.Tt))
unkR[210] = -(LPRES__cp(&unkR[30]) * (unkR[29] * unkR[248] - unkR[29] * dyn[3])) ;
//[E-83]  Pump_F.m.Power = -(Pump_F.tau * SplitFrac.f_in.W)
unkR[351] = -(unkR[360] * unkR[29]) ;
//[E-84]  CombCha.W_IF = SplitFrac.f_in.W - CombCha.W_F
unkR[21] = unkR[29] - dyn[1] ;
//[E-85]  CoolingJacket.v = SplitFrac.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[285] = _div( _div( unkR[29] , (unkR[239] * unkR[240] * LPRES__rho(&unkR[249])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-86]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[236] = _div( LPRES__rho(&unkR[249]) * unkR[285] * unkR[232] , LPRES__visc(&unkR[249]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-87]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[234] = 0.027 * _pow( unkR[236] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[235] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-88]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[244] = _div( unkR[234] * LPRES__cond(&unkR[249]) , unkR[232],"CoolingJacket.D_hy") ;
//[E-89]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + CoolingJacket.l.Tt
unkR[238] = _div( _div( unkR[210] , unkR[230],"CoolingJacket.A_wet_cooling") , unkR[244],"CoolingJacket.h_l") + unkR[248] ;
//[E-90]  CoolingJacket.h.T = CoolingJacket.h.Q / CombCha.A_wet / (CoolingJacket.k_w / CoolingJacket.t_w) + CoolingJacket.T_w_cold
unkR[211] = _div( _div( unkR[210] , unkR[5],"CombCha.A_wet") , (_div( unkR[247] , unkR[283],"CoolingJacket.t_w")),"CoolingJacket.k_w / CoolingJacket.t_w") + unkR[238] ;
//[E-91]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[242] = LPRES__hdc_fric(unkR[231], unkR[282], unkR[236]) ;
//[E-92]  SplitFrac.f_in.pt = CoolingJacket.l.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[243] = unkR[278] - _div( unkR[242] * unkR[233] , unkR[231],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[249]) * _pow( unkR[285] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-93]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[379] = unkR[243] * unkR[378] ;
//[E-94]  HeadLoss_Turb.f_in.W = sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) * Turbine.f_in.pt * Turbine.A_in / sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))
unkR[321] = _div( _sqrt(LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[6], 1.) * cos(unkR[395] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( MATH__min(dyn[6], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[30]) + 1.)/2. , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) * unkR[379] * unkR[386] , _sqrt(dyn[3] * LPRES__R(&unkR[30]),"Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(Junction.f_in1.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") ;
//[E-95]  Junction.f_in1.W = SplitFrac.f_in.W - HeadLoss_Turb.f_in.W
unkR[346] = unkR[29] - unkR[321] ;
//[E-96]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[376] = unkR[243] * unkR[378] ;
//[E-97]  Junction.f_in1.pt = Regulator_F.f_in.pt - Regulator_F.dp
unkR[347] = unkR[376] - unkR[373] ;
//[E-98]  HeadLoss_Junct.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[300] = unkR[347] * unkR[345] ;
//[E-99]  Junction.f_in2.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[323] = _div( unkR[300] , unkR[345],"Junction.TPL") ;
//[E-100]  HeadLoss_Turb.f_in.pt = Junction.f_in2.pt + HeadLoss_Turb.dp
unkR[322] = unkR[323] + unkR[317] ;
//[E-101]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[394] = 1. - unkR[397] * (1. - _pow( (_div( unkR[322] , unkR[379],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-102]  HeadLoss_Turb.f_in.Tt = Turbine.alpha * Junction.f_in1.Tt
unkR[320] = unkR[394] * dyn[3] ;
//[E-103]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / SplitFrac.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -Junction.f_in1.Tt) - HeadLoss_Turb.f_in.W / SplitFrac.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / SplitFrac.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / SplitFrac.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[299] = _div( (-(_div( unkR[346] , unkR[29],"SplitFrac.f_in.W") * LPRES__cp(&unkR[30]) * -dyn[3]) - _div( unkR[321] , unkR[29],"SplitFrac.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[320]) , (_div( unkR[346] , unkR[29],"SplitFrac.f_in.W") * LPRES__cp(&unkR[30]) + _div( unkR[321] , unkR[29],"SplitFrac.f_in.W") * LPRES__cp(&unkR[30])),"Junction.f_in1.W / SplitFrac.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / SplitFrac.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-104]  Turbine.m.Power = HeadLoss_Turb.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * (Junction.f_in1.Tt - HeadLoss_Turb.f_in.Tt)
unkR[388] = unkR[321] * LPRES__cp(&unkR[30]) * (dyn[3] - unkR[320]) ;
//[E-105]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[405] = _div( unkR[388] , unkR[321],"HeadLoss_Turb.f_in.W") ;
//[E-106]  Gearbox.m_out.Power = Pump_F.m.Power + Turbine.m.Power
unkR[295] = unkR[351] + unkR[388] ;
//[E-107]  Pump_O.m.Power =  ZONE[1] (Pump_O.m.Power > 0) -(Gearbox.m_out.Power / Gearbox.eta)	  OTHERS -(Gearbox.m_out.Power * Gearbox.eta)
 if(m_branchZone[0]==0)
	unkR[293] = -(_div( unkR[295] , unkR[291],"Gearbox.eta")) ;
else unkR[293] = -(unkR[295] * unkR[291]) ;
//[E-108]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[301] = unkR[300] - unkR[296] ;
//[E-109]  Injector_F.p_out_ch =  IF[2] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[333] = _div( unkR[301] , unkR[330],"Injector_F.PR_sl") ;
}
else 
{
unkR[333] = 0. ;
}
//[E-110]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[20] = _div( dyn[1] , dyn[2],"CombCha.phi") ;
//[E-111]  CombCha.OF = CombCha.OF_st / CombCha.phi
unkR[9] = _div( unkR[10] , dyn[2],"CombCha.phi") ;
//[E-112]  CombCha.W_O = CombCha.OF * CombCha.W_F
unkR[23] = unkR[9] * dyn[1] ;
//[E-113]  HeadLoss_TO.f_in.W = CombCha.W_O / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[62] = _div( unkR[23] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-114]  Pump_O.tau = -Pump_O.m.Power / HeadLoss_TO.f_in.W
unkR[372] = _div( -unkR[293] , unkR[62],"HeadLoss_TO.f_in.W") ;
//[E-115]  FlowMeter_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid) + Pump_O.f_in.pt
unkR[288] = unkR[372] * unkR[366] * LPRES__rho(&unkR[63]) + unkR[315] ;
//[E-116]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[287] = _div( _div( (unkR[288] - unkR[315]) , LPRES__rho(&unkR[63]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[366],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[313] ;
//[E-117]  Injector_O.p_out_ch =  IF[10] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[343] = _div( unkR[288] , unkR[340],"Injector_O.PR_sl") ;
}
else 
{
unkR[343] = 0. ;
}
//[E-118]  CombCha.W_IO = HeadLoss_TO.f_in.W - CombCha.W_O
unkR[22] = unkR[62] - unkR[23] ;
//[E-119]  ThrustMonitor.g.W = CombCha.W_IO + CombCha.W_O + SplitFrac.f_in.W
unkR[180] = unkR[22] + unkR[23] + unkR[29] ;
//[E-120]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[26] = _div( (unkR[23] * LPRES__cp(&unkR[122]) + dyn[1] * LPRES__cp(&unkR[93])) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
//[E-121]  CombCha.fluid_P[LOX] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-122]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[151] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-123]  CombCha.fluid_P[NTO] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-124]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[152] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-125]  CombCha.fluid_P[H2O2] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-126]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[153] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-127]  CombCha.fluid_P[HNO3] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-128]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[154] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-129]  CombCha.fluid_P[LF2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-130]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[155] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-131]  CombCha.fluid_P[RP_1] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-132]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-133]  CombCha.fluid_P[LCH4] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-134]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-135]  CombCha.fluid_P[LH2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-136]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-137]  CombCha.fluid_P[N2H4] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-138]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-139]  CombCha.fluid_P[UDMH] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-140]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-141]  CombCha.fluid_P[MMH] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-142]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-143]  CombCha.fluid_P[JP_10] =  IF[28] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-144]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-145]  CombCha.fluid_P[Kerox] =  IF[29] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-146]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-147]  CombCha.fluid_P[Oil] =  IF[30] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-148]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-149]  CombCha.fluid_P[H2O] =  IF[31] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-150]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-151]  CombCha.fluid_P[IPA] =  IF[32] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-152]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-153]  CombCha.fluid_P[Air] =  IF[33] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-154]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-155]  CombCha.fluid_P[Ar] =  IF[34] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-156]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-157]  CombCha.fluid_P[CH4] =  IF[35] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-158]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-159]  CombCha.fluid_P[CO] =  IF[36] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-160]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-161]  CombCha.fluid_P[CO2] =  IF[37] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-162]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-163]  CombCha.fluid_P[H2] =  IF[38] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-164]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-165]  CombCha.fluid_P[He] =  IF[39] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-166]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-167]  CombCha.fluid_P[N2] =  IF[40] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-168]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-169]  CombCha.fluid_P[O2] =  IF[41] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-170]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[175] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-171]  CombCha.fluid_P[MMH_vapour] =  IF[42] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[2] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[1]) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-172]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[176] * (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-173]  CombCha.fluid_P[Comb_prod] =  IF[43] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[2], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[2] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[2], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[1]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-174]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[177] * (unkR[23] + dyn[1]) + unkR[22] + unkR[21]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-175]  CombCha.f_O.p_c = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CombCha.A_th
unkR[60] = _div( unkR[180] * _div( _sqrt(LPRES__R(&unkR[181]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[4],"CombCha.A_th") ;
//[E-176]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[329] = _div( unkR[301] , unkR[60],"CombCha.f_O.p_c") ;
//[E-177]  Injector_F.M_out =  ZONE[2] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[2] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[328] = _sqrt(_div( 2. * (_pow( unkR[329] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[328] = 1. ;
else unkR[328] = 0. ;
//[E-178]  CombCha.f_F.T =  IF[5] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[299] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[328] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[299] ;
}
//[E-179]  CombCha.f_F.p =  IF[4] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[333]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-180]  SplitFrac.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[0] = evalNormResidueInternal(0,unkR[29],_div( _div( unkR[325] * LPRES__FGAMMA(&unkR[30]) * unkR[301] , _sqrt(unkR[299] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[328] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[328],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[0] = evalNormResidueInternal(0,unkR[29],unkR[325] * unkR[327] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[301] - unkR[59]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-181]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[339] = _div( unkR[288] , unkR[60],"CombCha.f_O.p_c") ;
//[E-182]  Injector_O.M_out =  ZONE[3] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[338] = _sqrt(_div( 2. * (_pow( unkR[339] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[338] = 1. ;
else unkR[338] = 0. ;
//[E-183]  CombCha.f_O.T =  IF[13] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[287] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[338] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[287] ;
}
//[E-184]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( dyn[2] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( dyn[2] , unkR[10],"CombCha.OF_st")) * unkR[26]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-185]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-186]  (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (ThrustMonitor.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha.f_F.T) = 0
res[1] = evalNormResidueInternal(1,_div( (unkR[23] + dyn[1]) , unkR[180],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (dyn[5] - unkR[15]) + _div( unkR[22] , unkR[180],"ThrustMonitor.g.W") * unkR[91] * (dyn[5] - unkR[61]) + _div( unkR[21] , unkR[180],"ThrustMonitor.g.W") * unkR[58] * (dyn[5] - unkR[28]),0);
//[E-187]  CombCha.f_O.p =  IF[12] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[343]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-188]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[2] = evalNormResidueInternal(2,unkR[62],_div( _div( unkR[335] * LPRES__FGAMMA(&unkR[63]) * unkR[288] , _sqrt(unkR[287] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[338] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[338],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[2] = evalNormResidueInternal(2,unkR[62],unkR[335] * unkR[337] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[288] - unkR[92]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-189]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[24] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-190]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-191]  CombCha.T_aw = ThrustMonitor.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[14] = dyn[5] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[0] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-192]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-193]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[60] , unkR[24],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-194]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
res[3] = evalNormResidueInternal(3,unkR[210],unkR[212] * (unkR[14] - unkR[211]) * unkR[5]);
//[E-195]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[1],_div( _div( 1 , dyn[0],"CombCha.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[0] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
//[E-196]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[391] = dyn[6] * _sqrt(_div( LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * dyn[3] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( dyn[6] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * Junction.f_in1.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-197]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[392] = unkR[391] * cos(unkR[395] * 3.14159265358979/180.) ;
//[E-198]  Turbine.m.N = Pump_F.U / Pump_F.r_m
unkR[294] = _div( dyn[4] , unkR[359],"Pump_F.r_m") ;
//[E-199]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[292] = _div( unkR[294] , unkR[290],"Gearbox.GR") ;
//[E-200]  Pump_O.U = Pump_O.m.N * Pump_O.r_m
unkR[363] = unkR[292] * unkR[371] ;
//[E-201]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
unkR[369] = _div( unkR[372] , _pow( unkR[363] , 2.,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2") ;
//[E-202]  Pump_O.phi = (1 - Pump_O.psi) / ((1 - Pump_O.psi_d) / Pump_O.phi_d)
unkR[367] = _div( (1. - unkR[369]) , (_div( (1. - unkR[370]) , unkR[368],"Pump_O.phi_d")),"(1 - Pump_O.psi_d) / Pump_O.phi_d") ;
//[E-203]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
res[5] = evalNormResidueInternal(5,unkR[367],_div( unkR[62] , (unkR[361] * unkR[363] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)"));
//[E-204]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[389] = unkR[294] * unkR[403] ;
//[E-205]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[401] = _div( unkR[405] , _pow( unkR[389] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-206]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[398] = _div( (unkR[401] + 1.) , (tan(unkR[395] * 3.14159265358979/180.) - tan(unkR[396] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-207]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[6] = evalNormResidueInternal(6,unkR[398],_div( unkR[392] , unkR[389],"Turbine.U"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition1& m= *DRLPRUEBAS__prueba1_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__prueba1_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[7];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition1::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__prueba1_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-218]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[7] , unkR[60],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[7] , unkR[60],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition1& m= *DRLPRUEBAS__prueba1_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__prueba1_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition1::fcn2, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__prueba1_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-220]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( unkR[180] * _sqrt(LPRES__R(&unkR[181]) * dyn[5],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__prueba1_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__prueba1_partition1& m= *DRLPRUEBAS__prueba1_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__prueba1_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(9, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__prueba1_partition1::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__prueba1_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[63]);
//[E-2]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[308] = unkR[307] - unkR[303] ;
//[E-3]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[249]), &unkR[30]);
//[E-4]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[231] = _div( 1.3 * _pow( (unkR[239] * unkR[240]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[239] + unkR[240]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-5]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[249]);
//[E-6]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[232] = _div( 2. * unkR[239] * unkR[240] , (unkR[239] + unkR[240]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-7]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[315] = unkR[314] - unkR[310] ;
//[E-8]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-9]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-10]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-11]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-12]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-13]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-14]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-15]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-16]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-17]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-19]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-20]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-22]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-43]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-59]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_O[Comb_prod] = 0
unkR[148] = 0. ;
//[E-61]  CombCha.fluid_F[Comb_prod] = 0
unkR[119] = 0. ;
//[E-62]  CombCha.fluid_P[Comb_prod_M] =  IF[44] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = unkR[6] ;
}
else 
{
unkR[178] = 0. ;
}
//[E-63]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[208] = unkR[178] ;
//[E-64]  CombCha.fluid_P[Comb_prod_cp] =  IF[45] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[25] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-65]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[209] = unkR[179] ;
//[E-66]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[235] = _div( LPRES__visc(&unkR[249]) * LPRES__cp(&unkR[249]) , LPRES__cond(&unkR[249]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-67]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[230] = unkI[2] * 2. * (unkR[239] + unkR[240]) * unkR[233] ;
//[E-68]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-69]  Injector_O.PR_sl =  IF[9] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[340] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[340] = 0. ;
}
//[E-70]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-71]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-72]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-73]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-74]  CombCha.Q_comb_effective =  ZONE[4] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-75]  Injector_F.PR_sl =  IF[1] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[330] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[330] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,7,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-208]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[350] = _div( (unkR[278] - unkR[308]) , (9.80665 * LPRES__rho(&unkR[249])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-209]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[362] = _div( (unkR[288] - unkR[315]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-210]  Injector_F.A_sl =  IF[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * SplitFrac.f_in.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[326] = _div( _sqrt(unkR[299] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[301]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[326] = 0. ;
}
//[E-211]  Injector_F.v_ideal =  IF[7] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE SplitFrac.f_in.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[334] = unkR[328] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[334] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[325] * unkR[327]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-212]  Injector_F.Re =  IF[8] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[331] = 0. ;
}
else 
{
unkR[331] = _div( LPRES__rho(&unkR[30]) * unkR[334] * unkR[327] * _sqrt(4. * unkR[325]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-213]  Injector_O.A_sl =  IF[11] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * HeadLoss_TO.f_in.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[336] = _div( _sqrt(unkR[287] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[288]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[336] = 0. ;
}
//[E-214]  Injector_O.v_ideal =  IF[15] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE HeadLoss_TO.f_in.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[344] = unkR[338] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[61],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[344] = _div( unkR[62] , (LPRES__rho(&unkR[63]) * unkR[335] * unkR[337]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-215]  Injector_O.Re =  IF[16] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[341] = 0. ;
}
else 
{
unkR[341] = _div( LPRES__rho(&unkR[63]) * unkR[344] * unkR[337] * _sqrt(4. * unkR[335]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-216]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-217]  CombCha.rho_trans = CombCha.f_O.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha.fluid_P)
unkR[220] = _div( _div( unkR[60] , dyn[5],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[151]),"LPRES.R(CombCha.fluid_P)") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-219]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[383] = LPRES__ISA_Pressure(unkR[348]) ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-221]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[382] = _div( dyn[5] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-222]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[384] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-223]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[385] = dyn[8] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[382],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-224]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[226] = unkR[180] * unkR[385] + unkR[2] * (unkR[384] - unkR[383]) ;
//[E-225]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[228] = unkR[226] ;
//[E-226]  FlowMeter_O.i.Data[1] = abs(HeadLoss_TO.f_in.W)
unkR[289] = abs(unkR[62]) ;
//[E-227]  FlowMeter_F.i.Data[1] = abs(SplitFrac.f_in.W)
unkR[286] = abs(unkR[29]) ;
//[E-228]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[227] = unkR[286] + unkR[289] ;
//[E-229]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[213] = unkR[24] ;
//[E-230]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[224] = _div( unkR[226] , unkR[227],"ControlPanel.W_tot") ;
//[E-231]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[223] = _div( unkR[224] , unkR[24],"CombCha.c_star") ;
//[E-232]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[225] = unkR[224]/9.80665 ;
//[E-233]  CoolingJacket.rho_trans = SplitFrac.f_in.pt / Junction.f_in1.Tt / LPRES.R(HeadLoss_Turb.f_in.fluid)
unkR[281] = _div( _div( unkR[243] , dyn[3],"Junction.f_in1.Tt") , LPRES__R(&unkR[30]),"LPRES.R(HeadLoss_Turb.f_in.fluid)") ;
//[E-234]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[229] = unkR[286] + unkR[289] ;

//save last residues
memcpy(this->res,res,9*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__prueba1_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[249])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[63])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[384] , unkR[383],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[30])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(1 == LPRES__State(&unkR[249])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__prueba1_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[293]; //Pump_O.m.Power > 0
    ev[3]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[4]= unkR[329] - unkR[330]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[6]= unkR[329] - unkR[330]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[8]= unkR[339] - unkR[340]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[10]= unkR[339] - unkR[340]; //Injector_O.PR >= Injector_O.PR_sl
    ev[11]= unkI[0] - 1; //CombCha.Combustion
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__prueba1_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__prueba1_partition1::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__prueba1_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__prueba1_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__prueba1_partition1::initDelays()
{
}


bool DRLPRUEBAS__prueba1_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__prueba1_partition1 = 97008;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__prueba1_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__prueba1_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__prueba1_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__prueba1_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__prueba1_partition1;
return true;
}



bool DRLPRUEBAS__prueba1_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__prueba1_partition1 = 460;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__prueba1_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__prueba1_partition1[] = 
{
"CQAAAEEAAAAAAAAABwAAAAcAAAAHAAAABwAAAAcAAAAHAAAABwAAAAgAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__prueba1_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__prueba1_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__prueba1_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__prueba1_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__prueba1_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__prueba1_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__prueba1_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__prueba1_partition1(name,dirInstall);
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
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.prueba1.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

