//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_Turb_partition1_CPP
#define DRLPRUEBAS__CC_Cool_Turb_partition1_CPP

#include "DRLPRUEBAS.+c+c_+cool_+turb.partition1.h"

DRLPRUEBAS__CC_Cool_Turb_partition1* DRLPRUEBAS__CC_Cool_Turb_partition1::s_current= NULL;

DRLPRUEBAS__CC_Cool_Turb_partition1::DRLPRUEBAS__CC_Cool_Turb_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_Turb";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__CC_Cool_Turb_partition1";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+turb.partition1";
m_infoModelFileNameExtra = "+c+c_+cool_+turb.partition1";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 10:42:41.546000";
m_infoPartitionDate = "28/06/2018 13:59:25.067000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[6]; 
int nbx;
for (nbx=0; nbx < 6 ; nbx++)
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
n_dyn=6;
dyn= new double[6] ;
static double tmp_dynInit[6]={ 1, 1, 1, 100, 100, 1 } ;
dynInit= new double[6];
dcopy(6,dynInit,tmp_dynInit);


n_der=0;
der= new double[6] ;
static double tmp_derInit[6]={ 0, 0, 0, 0, 0, 0 } ;
derInit= new double[6];
dcopy(6,derInit,tmp_derInit);


res= new double[6] ;
ldr= new double[6] ;
boxDyn= new double[6] ;
boxDer= new double[6] ;

n_unkR=344;
unkR= new double[344] ;
static double tmp_unkRInit[344]={ 56.88798558, 14, 1, 0, 0.0134109877, 0, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 
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
		0, 0, 0, 1.475994, 0, 0, 0, 150, 0, 0.001001035, 0.008132748, 100000, 0, 1, 1, 0, 
		0, 0, 16.09, 31.3343538, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 7547798.88, 2, 10, 0, 5e-05, 0.000583419, 0.058, 0, 0.00178349971, 0, 0, 0.5, 0, 10, 
		0, 0, 1, 1, 0, 0, 0.000580606872, 0, 0, 0.5, 0, 10, 0, 0, 99.1952397, 4597104.18, 
		0, 0, 1, 16.3526821, 0, 100000, 0, 1500, 0.1, 1, 1200000, 0, 0, 0, 0, 0, 
		0, 0.005, 0, 1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 1, 0, 
		0.05, 1.8, 0, 0.7, 0.01, 0, 38172.635, 0 } ;
unkRInit= new double[344];
dcopy(344,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=12;
static int tmp_cteIInit[12]={ 1, 1, 1, 8, 1, 1, 2, 2, 1, 1, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 19;
n_neld= 0;
m_numBoxes= 5;
m_nNonLinearBoxes= 5;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_Turb_partition1::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_Turb_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_Turb_partition1::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_Cool_Turb_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_Turb_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
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
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[245]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[245]), &unkR[31]) ;
	unkR[232] = 500. ;
	unkR[240] = _div( 1. , unkR[275],"CoolingJacket.mfr_ch") ;
	unkR[241] = _div( 1. , (unkR[275] * unkR[231]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Turbine.Turbine,0)
	unkR[324] = unkR[323] ;
	dyn[5] = unkR[326] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-143]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,unkR[1],_div( _div( 1 , dyn[0],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[183]) , _sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1) * _pow( dyn[0] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[183]) + 1) , (2 * (LPRES__gamma(&unkR[183]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Turb_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Turb_partition1& m= *DRLPRUEBAS__CC_Cool_Turb_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Turb_partition1::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.Tt = (CombCha_1.c_star * LPRES.FGAMMA(ThrustMonitor.g.fluid)) ** 2 / LPRES.R(ThrustMonitor.g.fluid)
unkR[181] = _div( _pow( (dyn[1] * LPRES__FGAMMA(&unkR[183])) , 2.,"(CombCha_1.c_star * LPRES.FGAMMA(ThrustMonitor.g.fluid))**(2)" ) , LPRES__R(&unkR[183]),"LPRES.R(ThrustMonitor.g.fluid)") ;
//[E-150]  CombCha_1.A_th_d = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CombCha_1.p_c
unkR[5] = _div( unkR[182] * _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[61],"CombCha_1.p_c") ;
//[E-151]  CombCha_1.A_r = CombCha_1.A_th_d * CombCha_1.AR_r
unkR[3] = unkR[5] * unkR[1] ;
//[E-152]  CombCha_1.T_aw = ThrustMonitor.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[15] = unkR[181] * _div( (1. + _pow( unkR[12] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[183]) - 1.) * _pow( dyn[0] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[183]) - 1.) * _pow( dyn[0] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-153]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[223] = 1.184e-07 * _pow( LPRES__M(&unkR[183]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-154]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th_d / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th_d / CombCha_1.A_r) ** 0.9
unkR[213] = _div( 0.026 , _pow( _sqrt(4. * unkR[5]/3.14159265358979,"4 * CombCha_1.A_th_d / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th_d / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th_d / 3.14159265358979) ** 0.2") * _div( _pow( unkR[223] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[183]) , _pow( unkR[12] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , dyn[1],"CombCha_1.c_star")) , 0.8,"(CombCha_1.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[5] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th_d / CombCha_1.A_r)**(0.9)" ) ;
//[E-155]  CoolingJacket.h.Q = CombCha_1.h_g * (CombCha_1.T_aw - CoolingJacket.h.T) * CombCha_1.A_wet
unkR[212] = unkR[213] * (unkR[15] - dyn[2]) * unkR[6] ;
//[E-156]  CoolingJacket.T_w_cold = CoolingJacket.h.Q / CoolingJacket.A_wet_cooling / CoolingJacket.h_l + LH2_circuit_1.Tt
unkR[232] = _div( _div( unkR[212] , unkR[224],"CoolingJacket.A_wet_cooling") , unkR[239],"CoolingJacket.h_l") + unkR[243] ;
//[E-157]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha_1.A_wet
res[1] = evalNormResidueInternal(1,unkR[212],_div( unkR[242] , unkR[279],"CoolingJacket.t_w") * (dyn[2] - unkR[232]) * unkR[6]);
//[E-158]  Turbine.f_in.Tt = (CoolingJacket.l.W * LH2_circuit_1.Tt - -CoolingJacket.h.Q / LPRES.cp(CombCha_1.f_F.fluid)) / Injector_F.W
unkR[237] = _div( (unkR[244] * unkR[243] - _div( -unkR[212] , LPRES__cp(&unkR[31]),"LPRES.cp(CombCha_1.f_F.fluid)")) , unkR[30],"Injector_F.W") ;
//[E-159]  Injector_F.f_in.Tt = Turbine.alpha * Turbine.f_in.Tt
unkR[290] = unkR[330] * unkR[237] ;
//[E-160]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[290] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[286] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[290] ;
}
//[E-161]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[11],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[11],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-162]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[28] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-163]  (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (ThrustMonitor.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha_1.f_F.T) = 0
res[2] = evalNormResidueInternal(2,_div( (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (unkR[181] - unkR[16]) + _div( unkR[24] , unkR[182],"ThrustMonitor.g.W") * unkR[92] * (unkR[181] - unkR[62]) + _div( unkR[23] , unkR[182],"ThrustMonitor.g.W") * unkR[59] * (unkR[181] - unkR[29]),0);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Turb_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Turb_partition1& m= *DRLPRUEBAS__CC_Cool_Turb_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Turb_partition1::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  ThrustMonitor.g.A_out / CombCha_1.A_th_d = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,_div( unkR[2] , unkR[5],"CombCha_1.A_th_d"),_div( LPRES__FGAMMA(&unkR[183]) , (_pow( (_div( dyn[3] , unkR[61],"CombCha_1.p_c")) , (_div( 1 , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[183]) * (1. - _pow( (_div( dyn[3] , unkR[61],"CombCha_1.p_c")) , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[183]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Turb_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Turb_partition1& m= *DRLPRUEBAS__CC_Cool_Turb_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Turb_partition1::fcn3, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-186]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[4] = evalNormResidueInternal(4,_div( _div( unkR[182] * _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.p_c"),_sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[4] * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1)/2 * _pow( dyn[4] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[183]) + 1)/2 , (LPRES__gamma(&unkR[183]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Turb_partition1::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Turb_partition1& m= *DRLPRUEBAS__CC_Cool_Turb_partition1::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Turb_partition1::fcn4, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-198]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[338] = _div( unkR[343] , _pow( dyn[5] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-199]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[335] = _div( (unkR[338] + 1.) , (tan(unkR[331] * 3.14159265358979/180.) - tan(unkR[332] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-200]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[5] = evalNormResidueInternal(5,unkR[335],_div( unkR[328] , dyn[5],"Turbine.U"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Turb_partition1::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Turb_partition1& m= *DRLPRUEBAS__CC_Cool_Turb_partition1::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Turb_partition1::fcn5, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_Turb_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[182] = unkR[63] + unkR[30] ;
//[E-2]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
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
unkR[299] = _div( unkR[303] , unkR[61],"CombCha_1.p_c") ;
//[E-130]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[298] = _sqrt(_div( 2. * (_pow( unkR[299] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[298] = 1. ;
else unkR[298] = 0. ;
//[E-131]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[302] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[298] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[302] ;
}
//[E-132]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[225] = _div( 1.3 * _pow( (unkR[233] * unkR[234]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[233] + unkR[234]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-133]  LPRES.Init_fluid(LH2_circuit_1.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[3], &unkR[245]);
//[E-134]  CoolingJacket.l.W = Injector_F.W
unkR[244] = unkR[30] ;
//[E-135]  CoolingJacket.v = CoolingJacket.l.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)) / CoolingJacket.N
unkR[281] = _div( _div( unkR[244] , (unkR[233] * unkR[234] * LPRES__rho(&unkR[245])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-136]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[226] = _div( 2. * unkR[233] * unkR[234] , (unkR[233] + unkR[234]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-137]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[230] = _div( LPRES__rho(&unkR[245]) * unkR[281] * unkR[226] , LPRES__visc(&unkR[245]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-138]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[236] = LPRES__hdc_fric(unkR[225], unkR[278], unkR[230]) ;
//[E-139]  Turbine.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
unkR[238] = unkR[274] - _div( unkR[236] * unkR[227] , unkR[225],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[245]) * _pow( unkR[281] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-140]  Regulator_1.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[313] = _div( unkR[238] , unkR[337],"Turbine.pi") ;
//[E-141]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (Regulator_1.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)))
unkR[330] = 1. - unkR[333] * (1. - _pow( (_div( unkR[313] , unkR[238],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Regulator_1.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" )) ;
//[E-142]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[183]) , (9. * LPRES__gamma(&unkR[183]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-144]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__visc(&unkR[245]) * LPRES__cp(&unkR[245]) , LPRES__cond(&unkR[245]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-145]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[228] = 0.027 * _pow( unkR[230] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[229] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-146]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[239] = _div( unkR[228] * LPRES__cond(&unkR[245]) , unkR[226],"CoolingJacket.D_hy") ;
//[E-147]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[224] = unkI[2] * 2. * (unkR[233] + unkR[234]) * unkR[227] ;
//[E-148]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[286] = _sqrt(_div( 2. * (_pow( unkR[287] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[286] = 1. ;
else unkR[286] = 0. ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-164]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th_d
unkR[2] = unkR[0] * unkR[5] ;
//[E-165]  CombCha_1.rho_trans = CombCha_1.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha_1.fluid_P)
unkR[221] = _div( _div( unkR[61] , unkR[181],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[152]),"LPRES.R(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-167]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[214] = dyn[1] ;
//[E-168]  CoolingJacket.rho_trans = Turbine.f_in.pt / Turbine.f_in.Tt / LPRES.R(CombCha_1.f_F.fluid)
unkR[277] = _div( _div( unkR[238] , unkR[237],"Turbine.f_in.Tt") , LPRES__R(&unkR[31]),"LPRES.R(CombCha_1.f_F.fluid)") ;
//[E-169]  Injector_F.f_in.pt = Injector_F.PR * CombCha_1.p_c
unkR[291] = unkR[287] * unkR[61] ;
//[E-170]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[288] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[288] = 0. ;
}
//[E-171]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[292] = _div( unkR[291] , unkR[288],"Injector_F.PR_sl") ;
}
else 
{
unkR[292] = 0. ;
}
//[E-172]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) * Injector_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[284] = _div( _sqrt(unkR[290] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[291]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[284] = 0. ;
}
//[E-173]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[292]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-174]  Injector_F.A_d =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = _div( unkR[284] * _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[286] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[286],"Injector_F.M_out") ;
}
else 
{
unkR[283] = _div( _div( unkR[30] , unkR[285],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[291] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"),"sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))") ;
}
//[E-175]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[293] = unkR[286] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[293] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[283] * unkR[285]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-176]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[289] = 0. ;
}
else 
{
unkR[289] = _div( LPRES__rho(&unkR[31]) * unkR[293] * unkR[285] * _sqrt(4. * unkR[283]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-177]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[300] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[300] = 0. ;
}
//[E-178]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[304] = _div( unkR[303] , unkR[300],"Injector_O.PR_sl") ;
}
else 
{
unkR[304] = 0. ;
}
//[E-179]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * Injector_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[296] = _div( _sqrt(unkR[302] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[303]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[296] = 0. ;
}
//[E-180]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[304]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-181]  Injector_O.A_d =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[295] = _div( unkR[296] * _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[298] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[298],"Injector_O.M_out") ;
}
else 
{
unkR[295] = _div( _div( unkR[63] , unkR[297],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[303] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)"),"sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))") ;
}
//[E-182]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[305] = unkR[298] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[305] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[295] * unkR[297]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-183]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[301] = 0. ;
}
else 
{
unkR[301] = _div( LPRES__rho(&unkR[64]) * unkR[305] * unkR[297] * _sqrt(4. * unkR[295]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-184]  Regulator_1.dp_d = Regulator_1.f_in.pt - Injector_F.f_in.pt
unkR[310] = unkR[313] - unkR[291] ;
//[E-185]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[318] = LPRES__ISA_Pressure(unkR[308]) ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-187]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[315] = _div( unkR[181] , (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-188]  ThrustMonitor.p_out = CombCha_1.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[319] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[4] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-189]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[320] = dyn[4] * _sqrt(LPRES__gamma(&unkR[183]) * LPRES__R(&unkR[183]) * unkR[315],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-190]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[316] = unkR[182] * unkR[320] + unkR[2] * (unkR[319] - unkR[318]) ;
//[E-191]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[317] = unkR[316] ;
//[E-192]  Turbine.m.Power = Injector_F.W * LPRES.cp(CombCha_1.f_F.fluid) * (Turbine.f_in.Tt - Injector_F.f_in.Tt)
unkR[325] = unkR[30] * LPRES__cp(&unkR[31]) * (unkR[237] - unkR[290]) ;
//[E-193]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[324] = MATH__min(unkR[323], 1.) ;
//[E-194]  Turbine.A_in_d = Injector_F.W * sqrt(Turbine.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Turbine.f_in.pt
unkR[322] = _div( _div( unkR[30] * _sqrt(unkR[237] * LPRES__R(&unkR[31]),"Turbine.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") , (_sqrt(LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)") * MATH__min(unkR[324], 1.) * cos(unkR[331] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( MATH__min(unkR[324], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[31]) + 1.)/2. , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"(1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" )),"sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))") , unkR[238],"Turbine.f_in.pt") ;
//[E-195]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * Turbine.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[327] = unkR[324] * _sqrt(_div( LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[237] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[324] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * Turbine.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-196]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[328] = unkR[327] * cos(unkR[331] * 3.14159265358979/180.) ;
//[E-197]  Turbine.tau = Turbine.m.Power / Injector_F.W
unkR[343] = _div( unkR[325] , unkR[30],"Injector_F.W") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-201]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[334] = unkR[342] * 2. * 3.14159265358979/60. ;
//[E-202]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[341] = _div( dyn[5] , unkR[334],"Turbine.m.N") ;

//save last residues
memcpy(this->res,res,6*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[245])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[183])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[4] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[319] , unkR[318],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[4] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(CombCha_1.f_F.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[287] - unkR[288]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[287] - unkR[288]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[299] - unkR[300]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[299] - unkR[300]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_Turb_partition1::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_Turb_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_Turb_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_Turb_partition1::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_Turb_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_Turb_partition1 = 58712;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_Turb_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_Turb_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_Turb_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_Turb_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_Turb_partition1;
return true;
}



bool DRLPRUEBAS__CC_Cool_Turb_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_Turb_partition1 = 184;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_Turb_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_Turb_partition1[] = 
{
"BgAAABMAAAAAAAAAAQAAAAMAAAADAAAABAAAAAQAAAAEAAAAAQAAAAEAAAACAAAAAwAAAAEAAAACAAAAAwAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAAFAAAAAQAAAAIAAAADAAAABgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_Turb_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_Turb_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_Turb_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_Turb_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_Turb_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_Turb_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_Turb_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_Turb_partition1(name,dirInstall);
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
	sprintf(componentName,"%s","CC_Cool_Turb");
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+turb.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

