//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_desacop_partition2_CPP
#define DRLPRUEBAS__CC_Cool_desacop_partition2_CPP

#include "DRLPRUEBAS.+c+c_+cool_desacop.partition2.h"

DRLPRUEBAS__CC_Cool_desacop_partition2* DRLPRUEBAS__CC_Cool_desacop_partition2::s_current= NULL;

DRLPRUEBAS__CC_Cool_desacop_partition2::DRLPRUEBAS__CC_Cool_desacop_partition2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_desacop";
m_infoPartitionName = "partition2";
m_infoModelName = "DRLPRUEBAS__CC_Cool_desacop_partition2";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_desacop.partition2";
m_infoModelFileNameExtra = "+c+c_+cool_desacop.partition2";
m_perfFlag = false;
m_infoComponentDate = "22/06/2018 13:23:54.609000";
m_infoPartitionDate = "25/06/2018 09:15:33.723000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[8]; 
int nbx;
for (nbx=0; nbx < 8 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[3];
int ib;
for (ib=0; ib < 3 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[4]; 
int nibr;
for (nibr=0; nibr < 4 ; nibr++)
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
static const char * elmstr11[] = { "Yes", "No", NULL } ;
static int elmind11[] = { 1, 2 } ;
n_typ=12;
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
		{elmstr11,2,elmind11}
	} ;
typ= new struct INTEG_enumType[12];
etypecopy(12,typ,tmp_typ);
n_dyn=10;
dyn= new double[10] ;
static double tmp_dynInit[10]={ 0, 1, 0, 1, 10, 1, 100, 1, 1, 100 } ;
dynInit= new double[10];
dcopy(10,dynInit,tmp_dynInit);


n_der=4;
der= new double[10] ;
static double tmp_derInit[10]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[10];
dcopy(10,derInit,tmp_derInit);


res= new double[10] ;
ldr= new double[10] ;
boxDyn= new double[10] ;
boxDer= new double[10] ;

static int tmp_frozenVars[4] = { 0,0,0,0 } ;
frozenVars= new int[4];
icopy(4,frozenVars,tmp_frozenVars);

n_unkR=353;
unkR= new double[353] ;
static double tmp_unkRInit[353]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
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
		0, 0, 1.475994, 0, 0, 0, 150, 0, 0.001001035, 0.008132748, 100000, 0, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 16.09, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 10, 5e-05, 
		0.000583419, 0.058, 0.00178349971, 0, 0.5, 0, 0, 0, 2.70069069, 151.106354, 3494748.63, 0, 0, 0.000580606872, 0, 0.5, 
		0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 2.70069069, 31.3343538, 1, 7547798.88, 16.3526821, 0, 0.000471775733, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0 } ;
unkRInit= new double[353];
dcopy(353,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=6;
unkI= new int[6] ;
static int tmp_unkIInit[6]={ 0, 2, 180, 22, 8, 1 } ;
unkIInit= new int[6];
icopy(6,unkIInit,tmp_unkIInit);


n_cteI=12;
static int tmp_cteIInit[12]={ 1, 4, 1, 8, 4, 4, 2, 2, 2, 4, 1, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=19;
static std::string tmp_cteSInit[19]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 44;
n_neld= 6;
m_numBoxes= 7;
m_nNonLinearBoxes= 6;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_desacop_partition2::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition2::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_desacop_partition2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_desacop_partition2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[5], &unkR[64]) ;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[181]) ;
	unkI[0] = 1 ;
	unkR[219] = 1. ;
	unkR[19] = unkR[20] ;
	if( unkI[1] == 1 ) {
	dyn[7] = 0.001 ;
	}
	else {
	dyn[7] = 100. ;
	}
	unkR[214] = _div( 1. , unkR[216],"CombCha_1.mfr_ch") ;
	unkR[215] = _div( 1. , (unkR[216] * unkR[17]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(LH2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[31]) ;
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[272]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[272]), &unkR[237]) ;
	unkR[231] = 500. ;
	unkR[268] = _div( 1. , unkR[301],"CoolingJacket.mfr_ch") ;
	unkR[269] = _div( 1. , (unkR[301] * unkR[230]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Nozzle_1.Nozzle,0)
	unkR[266] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-64]  CombCha_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[61] = _div( unkR[314] , dyn[4],"Injector_F.PR") ;
//[E-65]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[315]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-66]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[321] = _div( unkR[326] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-67]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[320] = _sqrt(_div( 2. * (_pow( unkR[321] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[320] = 1. ;
else unkR[320] = 0. ;
//[E-68]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[327]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-69]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[317] * LPRES__FGAMMA(&unkR[64]) * unkR[326] , _sqrt(unkR[325] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[320] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[320],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[317] * unkR[319] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[326] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-70]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-71]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[309] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[309] = 1. ;
else unkR[309] = 0. ;
//[E-72]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt / sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[306] * LPRES__FGAMMA(&unkR[31]) * unkR[314] , _sqrt(unkR[313] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[309] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[309],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[306] * unkR[308] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[314] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)") ;
}
//[E-73]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-74]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-75]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-76]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-77]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-78]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-79]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-81]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-82]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-83]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-85]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-86]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-87]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-89]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-91]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-95]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-104]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[4] = evalNormResidueInternal(4,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition2& m= *DRLPRUEBAS__CC_Cool_desacop_partition2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition2::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-109]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-110]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-111]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[5] = evalNormResidueInternal(5,dyn[5],_div( unkR[61] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition2& m= *DRLPRUEBAS__CC_Cool_desacop_partition2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition2::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition2& m= *DRLPRUEBAS__CC_Cool_desacop_partition2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition2::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-153]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition2& m= *DRLPRUEBAS__CC_Cool_desacop_partition2::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition2::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[272]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[272]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[303], unkR[229]) ;
//[E-165]  Nozzle_1.g.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[266],unkR[332] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[272]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition2& m= *DRLPRUEBAS__CC_Cool_desacop_partition2::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition2::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition2& m= *DRLPRUEBAS__CC_Cool_desacop_partition2::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition2::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_desacop_partition2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[5], &unkR[64]);
//[E-2]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  LPRES.Init_fluid(LH2_circuit.fluid, CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(unkI[3], &unkR[31]);
//[E-5]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[310] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[310] = 0. ;
}
//[E-6]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[315] = _div( unkR[314] , unkR[310],"Injector_F.PR_sl") ;
}
else 
{
unkR[315] = 0. ;
}
//[E-7]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-8]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-9]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-59]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-60]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-61]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-62]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[322] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[322] = 0. ;
}
//[E-63]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[327] = _div( unkR[326] , unkR[322],"Injector_O.PR_sl") ;
}
else 
{
unkR[327] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-105]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[63] - unkR[24] ;
//[E-106]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-107]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-108]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-137]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[5]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-138]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-139]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-140]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-141]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-142]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-143]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-144]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[325] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[320] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[325] ;
}
//[E-145]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[313] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[309] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[313] ;
}
//[E-146]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-147]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-148]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[5],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[5],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[5] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-150]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-151]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
//[E-152]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-154]  CombCha_1.T_aw = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-155]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-156]  CombCha_1.A_r = CombCha_1.A_th * CombCha_1.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-157]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.f_O.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th / CombCha_1.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha_1.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , unkR[25],"CombCha_1.c_star")) , 0.8,"(CombCha_1.f_O.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th / CombCha_1.A_r)**(0.9)" ) ;
//[E-158]  LPRES.Init_fluid(LH2_circuit_1.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[4], &unkR[272]);
//[E-159]  LPRES.Init_fluid(LPRES.Vaporisation(CoolingJacket.l.fluid), Nozzle_1.g.fluid) %%% (OUT VAR)Nozzle_1.g.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[272]), &unkR[237]);
//[E-160]  Nozzle_1.g.pt = CoolingJacket.rho_trans * LPRES.R(Nozzle_1.g.fluid) * CoolingJacket.g.Tt
unkR[266] = dyn[2] * LPRES__R(&unkR[237]) * dyn[3] ;
//[E-161]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-162]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-166]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[272]) * LPRES__cp(&unkR[272]) , LPRES__cond(&unkR[272]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-167]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-168]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[267] = _div( unkR[227] * LPRES__cond(&unkR[272]) , unkR[225],"CoolingJacket.D_hy") ;
//[E-169]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[223] = unkI[2] * 2. * (unkR[232] + unkR[233]) * unkR[226] ;
//-------------------------------------------------------------
// BOX 6 SOLVED LINEARLY
//-------------------------------------------------------------
{
double coef[3][3], indep[3];
int n= 3,nrhs= 1 ,ipiv[3],info;
//[E-170]  CoolingJacket.h.Q = CombCha_1.h_g * (CombCha_1.T_aw - CoolingJacket.h.T) * CombCha_1.A_wet
coef[0][0]= 0;// CoolingJacket.T_w_cold
coef[1][0]= 1;// CoolingJacket.h.Q
coef[2][0]= -(-unkR[212] * unkR[5]);// CoolingJacket.h.T
//[E-171]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha_1.A_wet
coef[0][1]= -(-(_div( unkR[270] , unkR[304],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[270] , unkR[304],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-172]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[267] * unkR[223]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[212] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[267] * -unkR[330] * unkR[223];

   // solve the linear system,check output and put the results back into system vars
wDGESV(&n,&nrhs,(double*)coef,&n,ipiv,indep,&n,&info);
checkErrorInDgesv(info,6);

unkR[231] = indep[0];
unkR[210] = indep[1];
unkR[211] = indep[2];
}
//-------------------------------------------------------------
// END OF BOX 6
//-------------------------------------------------------------
//[E-173]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[307] = _div( _sqrt(unkR[313] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[314]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[307] = 0. ;
}
//[E-174]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[316] = unkR[309] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[316] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[306] * unkR[308]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-175]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[311] = 0. ;
}
else 
{
unkR[311] = _div( LPRES__rho(&unkR[31]) * unkR[316] * unkR[308] * _sqrt(4. * unkR[306]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-176]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[318] = _div( _sqrt(unkR[325] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[326]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[318] = 0. ;
}
//[E-177]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[328] = unkR[320] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[328] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[317] * unkR[319]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-178]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[323] = 0. ;
}
else 
{
unkR[323] = _div( LPRES__rho(&unkR[64]) * unkR[328] * unkR[319] * _sqrt(4. * unkR[317]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-179]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[350] = LPRES__ISA_Pressure(unkR[334]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-181]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[347] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-182]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[351] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-183]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[352] = dyn[9] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[347],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-184]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[348] = dyn[5] * unkR[352] + unkR[2] * (unkR[351] - unkR[350]) ;
//[E-185]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[349] = unkR[348] ;
//[E-186]  CoolingJacket.l.W = CoolingJacket.v * CoolingJacket.N * CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)
unkR[271] = dyn[8] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[272]) ;
//[E-187]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[343] = LPRES__ISA_Pressure(unkR[334]) ;
//[E-188]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[338] = _div( unkR[266] , unkR[343],"Nozzle_1.p_amb") ;
//[E-189]  Nozzle_1.M_out =  ZONE[4] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))	  OTHERS 1
 if(m_branchZone[3]==0)
	unkR[337] = _sqrt(_div( 2. * (_pow( unkR[338] , (_div( (LPRES__gamma(&unkR[237]) - 1.) , LPRES__gamma(&unkR[237]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" ) - 1.) , (LPRES__gamma(&unkR[237]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)") ;
else unkR[337] = 1. ;
//[E-190]  Nozzle_1.A_sl = Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))
unkR[336] = _div( unkR[335] * unkR[337] , _pow( (_div( (2. + (LPRES__gamma(&unkR[237]) - 1.) * _pow( unkR[337] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[237]) + 1.),"LPRES.gamma(Nozzle_1.g.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[237]) + 1.) , (2. * (LPRES__gamma(&unkR[237]) - 1.)),"2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)")),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1))**((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))" ),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))") ;
//[E-191]  Nozzle_1.g.W = Nozzle_1.A_sl * LPRES.FGAMMA(Nozzle_1.g.fluid) * Nozzle_1.g.pt / sqrt(CoolingJacket.g.Tt * LPRES.R(Nozzle_1.g.fluid))
unkR[236] = _div( unkR[336] * LPRES__FGAMMA(&unkR[237]) * unkR[266] , _sqrt(dyn[3] * LPRES__R(&unkR[237]),"CoolingJacket.g.Tt * LPRES.R(Nozzle_1.g.fluid)"),"sqrt(CoolingJacket.g.Tt * LPRES.R(Nozzle_1.g.fluid))") ;
//[E-192]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - Nozzle_1.g.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[271] - unkR[236]) , (_div( unkR[305] , (unkR[302] * unkR[268]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-193]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(Nozzle_1.g.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - Nozzle_1.g.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(Nozzle_1.g.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(Nozzle_1.g.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[237]) * (unkR[271] * unkR[330] - unkR[236] * dyn[3])) , (_div( unkR[305] , (unkR[302] * unkR[269] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[237]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[237])),"CoolingJacket.rho_trans * LPRES.cv(Nozzle_1.g.fluid)") ;
//[E-194]  Nozzle_1.PR_sl = ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2) ** (LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))
unkR[339] = _pow( ((LPRES__gamma(&unkR[237]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[237]) , (LPRES__gamma(&unkR[237]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1")),"((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2)**(LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))" ) ;
//[E-195]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[345] = _div( unkR[266] , unkR[339],"Nozzle_1.PR_sl") ;
//[E-196]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[344] = MATH__max(unkR[343], unkR[345]) ;
//[E-197]  Nozzle_1.T_out = CoolingJacket.g.Tt / (1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[340] = _div( dyn[3] , (1. + (LPRES__gamma(&unkR[237]) - 1.)/2. * _pow( unkR[337] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-198]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out)
unkR[346] = unkR[337] * _sqrt(LPRES__gamma(&unkR[237]) * LPRES__R(&unkR[237]) * unkR[340],"LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out") ;
//[E-199]  Nozzle_1.Thrust = Nozzle_1.g.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[341] = unkR[236] * unkR[346] + unkR[335] * (unkR[344] - unkR[343]) ;
//[E-200]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[342] = unkR[341] ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);
res[2]= evalNormResidueInternal(2,der[2],ldr[2]);
res[3]= evalNormResidueInternal(3,der[3],ldr[3]);

if( restartB )
     dcopy(4,der,ldr);

//save last residues
memcpy(this->res,res,10*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[351] , unkR[350],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[272])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[237])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",754,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[4] - unkR[310]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[4] - unkR[310]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[321] - unkR[322]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[321] - unkR[322]; //Injector_O.PR >= Injector_O.PR_sl
    ev[11]= unkR[338] - unkR[339]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_desacop_partition2::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_desacop_partition2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)) OTHERS 1
     branchZone[3] = (cont[11] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_desacop_partition2::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 12 ;
	nConstraints= 31;
	nWhen= 2;
	nZones= 4;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha_1.Combustion","OTHERS",
	"LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"Nozzle_1.PR < Nozzle_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,5,8 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_F.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
,{ ZONE,LT_OP,0,0,"Nozzle_1.PR < Nozzle_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__CC_Cool_desacop_partition2::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_desacop_partition2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_desacop_partition2 = 58840;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_desacop_partition2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition2;
return true;
}



bool DRLPRUEBAS__CC_Cool_desacop_partition2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_desacop_partition2 = 392;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition2[] = 
{
"CgAAACwAAAAGAAAABAAAAAQAAAADAAAACAAAAAMAAAAEAAAABQAAAAUAAAADAAAABQAAAAEAAAACAAAABQAAAAYAAAABAAAAAgAAAAUAAAAGAAAAAwAAAAQAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAkAAAABAAAAAgAAAAUAAAABAAAAAgAAAAUAAAAGAAAAAQAAAAIAAAAFAAAABgAAAAcAAAABAAAAAgAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAABQAAAAYAAAAKAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_desacop_partition2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_desacop_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_desacop_partition2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_desacop_partition2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_desacop_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_desacop_partition2(name,dirInstall);
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
	sprintf(componentName,"%s","CC_Cool_desacop");
	sprintf(partitionName,"%s","partition2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_desacop.partition2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

