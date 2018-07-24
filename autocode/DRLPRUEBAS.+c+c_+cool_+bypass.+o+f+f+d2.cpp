//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_Bypass_OFFD2_CPP
#define DRLPRUEBAS__CC_Cool_Bypass_OFFD2_CPP

#include "DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d2.h"

DRLPRUEBAS__CC_Cool_Bypass_OFFD2* DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current= NULL;

DRLPRUEBAS__CC_Cool_Bypass_OFFD2::DRLPRUEBAS__CC_Cool_Bypass_OFFD2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_Bypass";
m_infoPartitionName = "OFFD2";
m_infoModelName = "DRLPRUEBAS__CC_Cool_Bypass_OFFD2";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d2";
m_infoModelFileNameExtra = "+c+c_+cool_+bypass.+o+f+f+d2";
m_perfFlag = false;
m_infoComponentDate = "20/06/2018 13:21:02.565000";
m_infoPartitionDate = "20/06/2018 13:22:50.531000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[9]; 
int nbx;
for (nbx=0; nbx < 9 ; nbx++)
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
n_dyn=12;
dyn= new double[12] ;
static double tmp_dynInit[12]={ 0, 1, 0, 1, 1, 10, 1, 1, 100, 1, 1, 100 } ;
dynInit= new double[12];
dcopy(12,dynInit,tmp_dynInit);


n_der=4;
der= new double[12] ;
static double tmp_derInit[12]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[12];
dcopy(12,derInit,tmp_derInit);


res= new double[12] ;
ldr= new double[12] ;
boxDyn= new double[12] ;
boxDer= new double[12] ;

static int tmp_frozenVars[4] = { 0,0,0,0 } ;
frozenVars= new int[4];
icopy(4,frozenVars,tmp_frozenVars);

n_unkR=348;
unkR= new double[348] ;
static double tmp_unkRInit[348]={ 56.88798558, 14, 1, 0, 0.0134064493, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		4000, 3180.92667, 0, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 0, 1, 0, 0, 0, 0, 19.0533728, 3275010, 5000000, 0, 1.45944999, 0.032, 0, 0, 
		0, 0, 1.475994, 0, 0, 0, 150, 0, 0.001001035, 0.008132748, 100000, 0, 1, 0, 0, 0, 
		16.09, 31.3343538, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		7547798.88, 2, 10, 5e-05, 0.000583419, 0.058, 0.00175958778, 0, 0.5, 0, 10, 0, 0, 2.70069069, 1, 1, 
		0, 0, 0.000580606872, 0, 0.5, 0, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 1, 1, 1, 
		1, 1, 1, 16.3526821, 0, 374105.846, 1500, 0.1, 1, 1200000, 3472119.35, 1500, 0.1, 1, 1200000, 1, 
		1, 0, 0, 0, 0, 0, 0, 0.000511105991922416, 1, 0, 0, 10000, 0, 0, 5, 0, 
		45, -75, 0.7353, 1, 0, 0.05, 1.8, 0, 0.7, 0.717359814, 38172.635, 0 } ;
unkRInit= new double[348];
dcopy(348,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=13;
static int tmp_cteIInit[13]={ 1, 4, 1, 8, 4, 4, 2, 2, 6, 6, 1, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 89;
n_neld= 6;
m_numBoxes= 8;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD2::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[181]) ;
	unkI[0] = 1 ;
	unkR[219] = 1. ;
	unkR[19] = unkR[20] ;
	if( unkI[1] == 1 ) {
	dyn[9] = 0.001 ;
	}
	else {
	dyn[9] = 100. ;
	}
	unkR[214] = _div( 1. , unkR[216],"CombCha_1.mfr_ch") ;
	unkR[215] = _div( 1. , (unkR[216] * unkR[17]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[243]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[243]), &unkR[31]) ;
	unkR[231] = 500. ;
	unkR[238] = _div( 1. , unkR[273],"CoolingJacket.mfr_ch") ;
	unkR[239] = _div( 1. , (unkR[273] * unkR[230]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Turbine_1.Turbine,0)
	dyn[4] = unkR[328] ;
	unkR[330] = unkR[331] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-15]  Junction.f_in2.W * sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (Turbine_1.f_in.pt * Turbine_1.A_in) = sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine_1.M_2, 1) * cos(Turbine_1.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine_1.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))
unkR[304] = _div( _sqrt(LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)") * MATH__min(dyn[4], 1.) * cos(unkR[336] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( MATH__min(dyn[4], 1.) , 2.,"(MATH.min(Turbine_1.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[31]) + 1.)/2. , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"(1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine_1.M_2, 1) ** 2)**(-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) * unkR[320] * unkR[327] , _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid))") ;
//[E-16]  Turbine_1.m.Power = Junction.f_in2.W * LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.g.Tt - Junction.f_in2.Tt)
unkR[329] = unkR[304] * LPRES__cp(&unkR[31]) * (dyn[3] - unkR[303]) ;
//[E-17]  Turbine_1.tau = Turbine_1.m.Power / Junction.f_in2.W
unkR[347] = _div( unkR[329] , unkR[304],"Junction.f_in2.W") ;
//[E-18]  Turbine_1.psi = Turbine_1.tau / Turbine_1.U ** 2
unkR[343] = _div( unkR[347] , _pow( unkR[330] , 2.,"(Turbine_1.U)**(2)" ),"Turbine_1.U ** 2") ;
//[E-19]  Turbine_1.psi = Turbine_1.phi * (tan(Turbine_1.alpha_2 * 3.14159265358979 / 180) - tan(Turbine_1.alpha_4r * 3.14159265358979 / 180)) - 1
unkR[340] = _div( (unkR[343] + 1.) , (tan(unkR[336] * 3.14159265358979/180.) - tan(unkR[337] * 3.14159265358979/180.)),"tan(Turbine_1.alpha_2 * 3.14159265358979 / 180) - tan(Turbine_1.alpha_4r * 3.14159265358979 / 180)") ;
//[E-20]  Turbine_1.phi = Turbine_1.V_z2 / Turbine_1.U
unkR[333] = unkR[340] * unkR[330] ;
//[E-21]  Turbine_1.V_z2 = Turbine_1.V_2 * cos(Turbine_1.alpha_2 * 3.14159265358979 / 180)
unkR[332] = _div( unkR[333] , cos(unkR[336] * 3.14159265358979/180.),"cos(Turbine_1.alpha_2 * 3.14159265358979 / 180)") ;
//[E-22]  Turbine_1.V_2 = Turbine_1.M_2 * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine_1.M_2 ** 2))
res[4] = evalNormResidueInternal(4,unkR[332],dyn[4] * _sqrt(_div( LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( dyn[4] , 2.,"(Turbine_1.M_2)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine_1.M_2 ** 2"),"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine_1.M_2 ** 2)"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-82]  CombCha_1.f_O.p_c = LO2_circuit.pt / Injector_O.PR
unkR[61] = _div( unkR[298] , dyn[5],"Injector_O.PR") ;
//[E-83]  Injector_F.PR = Injector_F.f_in.pt / CombCha_1.f_O.p_c
unkR[282] = _div( unkR[287] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-84]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[281] = _sqrt(_div( 2. * (_pow( unkR[282] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[281] = 1. ;
else unkR[281] = 0. ;
//[E-85]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[288]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-86]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[299]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-87]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[293] = _sqrt(_div( 2. * (_pow( dyn[5] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[293] = 1. ;
else unkR[293] = 0. ;
//[E-88]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[290] * LPRES__FGAMMA(&unkR[64]) * unkR[298] , _sqrt(unkR[297] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[293] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[293],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[290] * unkR[292] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[298] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-89]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-90]  CombCha_1.f_F.W = Junction.f_in1.W + Junction.f_in2.W
unkR[30] = dyn[6] + unkR[304] ;
//[E-91]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-92]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-93]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-94]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-95]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-105]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-106]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-107]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-109]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-110]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-111]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-112]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-113]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-114]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-115]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-116]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-117]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-118]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-119]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-120]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-121]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-122]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[5] = evalNormResidueInternal(5,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
//[E-123]  Injector_F.f_in.Tt = (-(Junction.f_in1.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) * -CoolingJacket.g.Tt) - Junction.f_in2.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) * -Junction.f_in2.Tt) / (Junction.f_in1.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) + Junction.f_in2.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid))
unkR[286] = _div( (-(_div( dyn[6] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31]) * -dyn[3]) - _div( unkR[304] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31]) * -unkR[303]) , (_div( dyn[6] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31]) + _div( unkR[304] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31])),"Junction.f_in1.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) + Junction.f_in2.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid)") ;
//[E-124]  CombCha_1.f_F.W =  IF (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
res[6] = evalNormResidueInternal(6,unkR[30],_div( _div( unkR[278] * LPRES__FGAMMA(&unkR[31]) * unkR[287] , _sqrt(unkR[286] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[31]) - 1) * _pow( unkR[281] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1) , (2 * (LPRES__gamma(&unkR[31]) - 1)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[281],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[6] = evalNormResidueInternal(6,unkR[30],unkR[278] * unkR[280] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[287] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"));
}
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-129]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-139]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-140]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-141]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-142]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-143]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-144]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-145]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-146]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-147]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-148]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-149]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-150]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-151]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-152]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-153]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-154]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-155]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-156]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[7] = evalNormResidueInternal(7,dyn[7],_div( unkR[61] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn3, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-169]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[8] = evalNormResidueInternal(8,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[8] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[8] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn4, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-173]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[9] = evalNormResidueInternal(9,unkR[1],_div( _div( 1 , dyn[9],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[9] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn5, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-181]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[10] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-182]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-183]  SplitFrac.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[10] = evalNormResidueInternal(10,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[10] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn6, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 8*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fbox8(double *_time,double dyn[],double ldr[],double res[])
{
//[E-198]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[11] = evalNormResidueInternal(11,_div( _div( dyn[7] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[11] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[11] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 8 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn8(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD2& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD2::s_current;
	m.printDbgInfoForModel(8,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox8(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(8,false);
}


/* Wrapper for the non-linear solver in box 8*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fhyb8(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(8);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(12, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fcn8, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 8);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
//[E-2]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  LPRES.Init_fluid(LPRES.Vaporisation(CoolingJacket.l.fluid), CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[243]), &unkR[31]);
//[E-5]  SplitFrac.f_in.pt = CoolingJacket.rho_trans * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt
unkR[236] = dyn[2] * LPRES__R(&unkR[31]) * dyn[3] ;
//[E-6]  Regulator_1_1.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[317] = unkR[236] * unkR[319] ;
//[E-7]  Junction.f_in1.pt = Regulator_1_1.f_in.pt - Regulator_1_1.dp
unkR[302] = unkR[317] - unkR[314] ;
//[E-8]  Injector_F.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[287] = unkR[302] * unkR[301] ;
//[E-9]  Turbine_1.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[320] = unkR[236] * unkR[319] ;
//[E-10]  Junction.f_in2.pt = Injector_F.f_in.pt / Junction.TPL
unkR[305] = _div( unkR[287] , unkR[301],"Junction.TPL") ;
//[E-11]  Regulator_1.f_in.pt = Junction.f_in2.pt + Regulator_1.dp
unkR[312] = unkR[305] + unkR[309] ;
//[E-12]  Turbine_1.alpha = 1 - Turbine_1.eta_d * (1 - (Regulator_1.f_in.pt / Turbine_1.f_in.pt) ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)))
unkR[335] = 1. - unkR[338] * (1. - _pow( (_div( unkR[312] , unkR[320],"Turbine_1.f_in.pt")) , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Regulator_1.f_in.pt / Turbine_1.f_in.pt)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" )) ;
//[E-13]  Junction.f_in2.Tt = Turbine_1.alpha * CoolingJacket.g.Tt
unkR[303] = unkR[335] * dyn[3] ;
//[E-14]  Turbine_1.U = Turbine_1.m.N * Turbine_1.r_m
unkR[330] = unkR[339] * unkR[345] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-23]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[283] = 0. ;
}
//[E-24]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[288] = _div( unkR[287] , unkR[283],"Injector_F.PR_sl") ;
}
else 
{
unkR[288] = 0. ;
}
//[E-25]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-60]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-61]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-62]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-63]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-64]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-65]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-66]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-67]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-68]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-69]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-70]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-71]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-72]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-73]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-74]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-75]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-76]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-77]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-78]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-79]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-80]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[294] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[294] = 0. ;
}
//[E-81]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[299] = _div( unkR[298] , unkR[294],"Injector_O.PR_sl") ;
}
else 
{
unkR[299] = 0. ;
}

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-125]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[63] - unkR[24] ;
//[E-126]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-127]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-128]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-157]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[7]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-158]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-159]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-160]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-161]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-162]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-163]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-164]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[297] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[293] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[297] ;
}
//[E-165]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[286] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[286] ;
}
//[E-166]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-167]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-168]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[7],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[7],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[7] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-170]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-171]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
//[E-172]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-174]  CombCha_1.T_aw = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-175]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-176]  CombCha_1.A_r = CombCha_1.A_th * CombCha_1.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-177]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.f_O.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th / CombCha_1.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha_1.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , unkR[25],"CombCha_1.c_star")) , 0.8,"(CombCha_1.f_O.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th / CombCha_1.A_r)**(0.9)" ) ;
//[E-178]  LPRES.Init_fluid(LH2_circuit_1.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[3], &unkR[243]);
//[E-179]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-180]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-184]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[243]) * LPRES__cp(&unkR[243]) , LPRES__cond(&unkR[243]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-185]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-186]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[237] = _div( unkR[227] * LPRES__cond(&unkR[243]) , unkR[225],"CoolingJacket.D_hy") ;
//[E-187]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[223] = unkI[2] * 2. * (unkR[232] + unkR[233]) * unkR[226] ;
//-------------------------------------------------------------
// BOX 7 SOLVED LINEARLY
//-------------------------------------------------------------
{
double coef[3][3], indep[3];
int n= 3,nrhs= 1 ,ipiv[3],info;
//[E-188]  CoolingJacket.h.Q = CombCha_1.h_g * (CombCha_1.T_aw - CoolingJacket.h.T) * CombCha_1.A_wet
coef[0][0]= 0;// CoolingJacket.T_w_cold
coef[1][0]= 1;// CoolingJacket.h.Q
coef[2][0]= -(-unkR[212] * unkR[5]);// CoolingJacket.h.T
//[E-189]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha_1.A_wet
coef[0][1]= -(-(_div( unkR[240] , unkR[276],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[240] , unkR[276],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-190]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[237] * unkR[223]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[212] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[237] * -unkR[241] * unkR[223];

   // solve the linear system,check output and put the results back into system vars
wDGESV(&n,&nrhs,(double*)coef,&n,ipiv,indep,&n,&info);
checkErrorInDgesv(info,7);

unkR[231] = indep[0];
unkR[210] = indep[1];
unkR[211] = indep[2];
}
//-------------------------------------------------------------
// END OF BOX 7
//-------------------------------------------------------------
//[E-191]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[279] = _div( _sqrt(unkR[286] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[287]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[279] = 0. ;
}
//[E-192]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[289] = unkR[281] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[289] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[278] * unkR[280]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-193]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[284] = 0. ;
}
else 
{
unkR[284] = _div( LPRES__rho(&unkR[31]) * unkR[289] * unkR[280] * _sqrt(4. * unkR[278]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-194]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[291] = _div( _sqrt(unkR[297] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[298]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[291] = 0. ;
}
//[E-195]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[300] = unkR[293] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[300] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[290] * unkR[292]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-196]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[295] = 0. ;
}
else 
{
unkR[295] = _div( LPRES__rho(&unkR[64]) * unkR[300] * unkR[292] * _sqrt(4. * unkR[290]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-197]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[324] = LPRES__ISA_Pressure(unkR[308]) ;

if( restartB || m_solveInternalBox[8] ) 
    fhyb8(dyn,ldr,TOLERANCE,1,50);
else fbox8(_time,dyn,ldr,res) ;

//[E-199]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[321] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[11] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-200]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[325] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[11] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-201]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[326] = dyn[11] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[321],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-202]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[322] = dyn[7] * unkR[326] + unkR[2] * (unkR[325] - unkR[324]) ;
//[E-203]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[323] = unkR[322] ;
//[E-204]  CoolingJacket.l.W = CoolingJacket.v * CoolingJacket.N * CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)
unkR[242] = dyn[10] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[243]) ;
//[E-205]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - CombCha_1.f_F.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[242] - unkR[30]) , (_div( unkR[277] , (unkR[274] * unkR[238]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-206]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - CombCha_1.f_F.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(CombCha_1.f_F.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[31]) * (unkR[242] * unkR[241] - unkR[30] * dyn[3])) , (_div( unkR[277] , (unkR[274] * unkR[239] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[31]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[31])),"CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid)") ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);
res[2]= evalNormResidueInternal(2,der[2],ldr[2]);
res[3]= evalNormResidueInternal(3,der[3],ldr[3]);

if( restartB )
     dcopy(4,der,ldr);

//save last residues
memcpy(this->res,res,12*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[11] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[325] , unkR[324],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[11] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine_1.","Gas == LPRES.State(CombCha_1.f_F.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[282] - unkR[283]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[282] - unkR[283]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= dyn[5] - unkR[294]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= dyn[5] - unkR[294]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_Bypass_OFFD2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_Bypass_OFFD2::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_Bypass_OFFD2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD2 = 71612;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD2;
return true;
}



bool DRLPRUEBAS__CC_Cool_Bypass_OFFD2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD2 = 652;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD2[] = 
{
"DAAAAFkAAAAGAAAACAAAAAgAAAAIAAAACgAAAAMAAAAHAAAABwAAAAgAAAAJAAAACQAAAAMAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAALAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAKAAAACwAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAoAAAADAAAABAAAAAsAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAwAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAQAAAAIAAAADAAAAAwAAAAQAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_Bypass_OFFD2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_Bypass_OFFD2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_Bypass_OFFD2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_Bypass_OFFD2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_Bypass_OFFD2(name,dirInstall);
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
	sprintf(componentName,"%s","CC_Cool_Bypass");
	sprintf(partitionName,"%s","OFFD2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

