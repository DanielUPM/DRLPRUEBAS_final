//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_desacop_partitionesc_CPP
#define DRLPRUEBAS__CC_Cool_desacop_partitionesc_CPP

#include "DRLPRUEBAS.+c+c_+cool_desacop.partitionesc.h"

DRLPRUEBAS__CC_Cool_desacop_partitionesc* DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current= NULL;

DRLPRUEBAS__CC_Cool_desacop_partitionesc::DRLPRUEBAS__CC_Cool_desacop_partitionesc(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_desacop";
m_infoPartitionName = "partitionesc";
m_infoModelName = "DRLPRUEBAS__CC_Cool_desacop_partitionesc";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_desacop.partitionesc";
m_infoModelFileNameExtra = "+c+c_+cool_desacop.partitionesc";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 10:42:47.020000";
m_infoPartitionDate = "29/06/2018 10:41:44.373000";
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partitionesc::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_desacop_partitionesc::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_desacop_partitionesc::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partitionesc& m= *DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partitionesc& m= *DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partitionesc& m= *DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-153]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partitionesc& m= *DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[272]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[272]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[303], unkR[229]) ;
//[E-165]  Nozzle_1.g.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[266],unkR[332] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[272]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partitionesc& m= *DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partitionesc& m= *DRLPRUEBAS__CC_Cool_desacop_partitionesc::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partitionesc::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::fres( double *_time, double dyn[], double der[], double res[] )
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[351] , unkR[350],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[272])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[237])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",773,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_desacop_partitionesc::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_desacop_partitionesc::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_desacop_partitionesc::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_desacop_partitionesc = 58840;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partitionesc = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partitionesc[] = 
{
"AACMHAAA6+EAAH3pAAC1k+eoodelt8RfcIu12RV/lNeS1MM5swEgG03ZaS3qXkIQsl17DWAvzH6Fy+BnwC2YXyEDd/n/W4LIKBEvXudZj+G4wTC/KOp1jsdF7kerTDdTtO7LepKcBjyVFo7/jDcgun+VRZRl6QmH9lstAyV7Tr4BXKRD1pbbzmpQpyG28k5EncLVgLO7OunDYRAGTBaoMVaJmc+qVqaTcb9bEgyKqwEla4u9sFVjuB5WirUbjyQzmR3+gfJwBXsWtjXjpNIyxSPhwym50+gJ6kb7vvMxrzeKfXDFTrslSnMlQ+GBbWy0Ofo6qpxjmwhDbKxIsut9gtN/Lx7PxUbGMSviG1S8Lnegpr2EfMmZHED4BNtebLrvej7X1hnT3Z+SviX+wW/Tsde+Y8CKzEG/SIHU9NALmxFJgdIPf4itV2T28CXqQxWhS4o36GpfjVYQsA52GJWO1g/LvBaOHjZeoDO7yxyM/YQRoZ9Kv/ltuRaqRfv4tYxWu/7qE8lYdPhLBRcrRVG4XTqpWX55qt5I7QfPjyBWsVkA/XL0gOUFFVPuL0AomSsjc0T+5PKelHGtjjNS7hkwigYrksBpRSQks1ogbJ6cEk1vp/mqpWcF8WhWpMQ6h+bbxDo9veI/HWbaIwAzVmZncZMz9aYPmZ0GazR5/B2WJfA3Q8Sesm/XGwaqxAg4ZyACYzIU5mUoSlTqBTuoU5GmTHowlGoeAyjIhIDZnr52j4zGqpmoNArqhm5IBKAuJhiUTq/Ljj7GDsHY+16PU5uRzJkill65WI2E64Idx8j1rXvMn7xJ5A/HBqTkRW1sDEIUpOEKvuQPrnBKvscsZ6R0xLHh2NeWyBr5w0lgcMkwcsbJ4yGJZ06CQeh2uVk8xFc4jSPF9XA3QKPAJYoS2cosCQXjzn7fjPHUsgQTazNoQQEi9TnBsFPQLjR3DVq7KK6bX+Czj9emaKsWScqpjXWdCAzRQYe8q8Y58TNBbK31okc9MbGguIRZmBwg4NejsziTBR9PZoqfmb4L+jR/98Kekrr8S5k3BboTli1iZ5YQL1rWvMxB9dZU7ug0oOIusnNqiUmnLGSzig8UgAzBj2bYncPgGTZfbWj6a0bwZCbU4ccJ/uTIA/8+uYhn7VNr2WtpeEsmNWexBsIh9VFGbRjRKONM0U+MNf7ZLvD37IpdRaW6Oul07Ov8k+hlWRx8oqtT5U6HPiUr5in2xHmvYghRDNtbftA6uYm6uZdFmz/xd3qRIve6Pd8zjWVOTY4z8xxCdpp1NeeyjSSy2oCWIBY/ts6obys1NuriL5VdlqX3ZGHqBWQNyu30vJcPrqZqNSghWxY5WT+/md6aqDSq6YuKlage5qvIIyAEZJfj5ykSqhagbtAYSUwIOaRomLJV+qmfMh59UmA0s2QFmfj1Yr/prk3Q778peuiDqCEWTZHHD4KaCvc3Radx9PuobK+6spKhPJRiL2lOajS0XxCHedhV8y2yvM3PwnVPYE1hgrLsiM2BXt1GNeGJ4S3BbT7F+sgZtYnNihKLE40wx2+hZdy89qcLAlByBPfVzZbpEYbbkgd/xHn+w9aZYKaieQikI/EagDzP7a+p9kaydHzyI1BJS0wSV3eDuxe1QtZcyroqqcqoTr+ftKDvhpOe0NMOiE/zqb57C6YR+u2vhe4czyJ+Ofdh+nSX6gcN5O6s8ymT/XCXzU8MNWS22xdAeXspVW7y/+UZD8B3rwYxFCFQvdojdGyJ8ZB9N4v8Bs/eIZpsQEXiNDRh5dG9SZQRBLl/1gitjN1czEv3PQcmLXeTGbBm8OgbztEhzRMqPLB4D8SKChs7rJVOFEVORi+Yd7LM25il+vZPDRhetUGExvFnXkeEVlvX1Rd/4KvXhxEbkr54EP6K70vMGxkA1FdWwvcI8z3B+2SNd+iTMcdt57009OqMM+Nlaj3lnEy6lZizWhsUbrtzWheWbT30slnZMDt1K4slQiRLhu4sigJ4KE+o",
"cfLAHvYwwhWv+lG+IJxLB21oWlUH8wh+EgIKAPz3/m7XR2W6CJpw0D2ivY6z+A1IfTIEdgwId6vk+AvydfzKsnxnEX0Ob9jEQG9UjBRvx/RtzVQdJd6x1k3CFW9U/5pGSB48GdU6yfmRQEI9lQ8uynf8ftwsh02Dax/tXOOe6MsMe5s6LtA3HCuB2+G7MEnKXOWXnY+Oq1nqAjQNKrq4hZmKAbT43oJ/tuv5yvz0oBBq/ZaJWt2mGyvjZdjaRJ1wDpB7onU83liT+KfGf5l/VcHJE4J6as7N6A8g4WNBTCtV+DqSq/Xa88LtrCciP+no+y3I54YWIfYuIPK4s/8eVYLwDhL2IpSxmT2P7gYJzH7XWi3mavdYtN6qsRsNjKIMqiQqOcS/vBtVmD2Rib3BwYOVLEJ/UvXDs6Ypy6L2G1+6dZuq0BsgX0swJSuEq2AaXT1lQ5W5hR8IQnB7HUGYxCiBqbyb6wuaJfww1qd5k/kl5dBfp71y7UeFZ4+uWCi3ixJam2vJvW0ayTXVzNVO45WLAgSD9U05q6LZJcsUoQoP5pL8/70qVF6IRa5wgW8lYnvMpLWPCyNio0ggrgegdId9ODSxWAtNknYykTKTNKDWFMQjQjrce8+2fdL+Pf4vVNTE9cSOc3Vnan6sg330mhCfXqgwTB+5UrZ/6TZDQGiRvE3cysIMuo0qSC7z2v69um7yUH1XEM6tr0aW8UPEltkHjVDqiAfGZsbPVwcxw+x0WF4GWOzzzde1q0wne3u0w4gBcMBLpnb2CdHD0de+3fI5DU9JkeIc+ofm3ogCqo242RIvlhKSLEDP+SKe2hrI2hSfxcPHbz8B194aSl2ZrwQ+byeWdQaMFMiMLC9Nkk7CqFeHAA/wyvUnCvUg/I1Tl81jC0UURFvPEeTtpv+nvF/qY58I7WvaMZY41wgrvYBrLtylaOBLt93JS83gIgPhTcyQC0/MPz9BWErJoZhzBCl311ahUkdu4E349oyIuVBM4/LuDKh6/MXIacfYrs4rqWkZPeP3KGtQfZUX8kJMQ5R42ltq1oMEciU30Ye9bW+VFeRKm1/ODBxQZd65s5SYiCRTRh4VIAwteKAGBcAlNRcVtbtlsct9iVRgZcpBCvf5avsKosB+t3DsqAgPIGXSIaXcFJAIcMnsqeyrhuzz6VQqvCnISprXM/4FDSsCn7PEj9akZBpQJVSQxNhzrbZuDAnIvZDOH2z86pp8CyrQohzX5Vcf3sGK0NXmS87L5kjPKUWRbi1dZ80OOU5fmaDTNOyErSDmeo0zYIHmwbfI/ENG9SFtjNwb9x/Q4uIm2LrHLKT9RWvEgW+2YJ5Ch8TsIhPBECeHYso3wrlIjrYkp8ye7ppmFNLiJVzzM0gCvI366CvDQ+Ooc07UXJ/O8Q+sS/BAuaX1LU0YAATG1eEFtp3dqPtXK9qcRNkVtxo/fdJl+52gaPI7q8w+s7zb5Ploq6moeB8YJCbK6FZJyrpP278qOL2Ps6U0XAaA3yALo2WAxmM4vv5SaaEiyS91TUZ7Nov/RkeYw0K9CYQP3zqv7tg4GywTjc/Ex+bzx2ZqyUXpkxqy8z0LZ6oMaC/kgdABacIY+Sn24cPCVnxtEAIBwwqiKpT7unHqwXAI1XKvgH9purKfb9M28aia/aGn/zbvW+WwiPVnLqhe/FkYqwcArZZ7R67dLYYT+cbDIsbKk8pJgpEldCeQk7+5LRA1J/LuNmVSNe3CHc3NrOSRFNxXlYv+HqauT4bk+ow8jwjQLvSJWilM6xQq/mt7RoDMRTjaZJVrcWNjDN3n7s4+wlxStduNYiAoNonrcNQ3y/thY9TTYZT/hKBS1wAYzrJsUwH+ezYrcsi+Xh9Fq5IvUXojPW+we0dARkSGZr4BAK+EBqb5QUIqLo79c+zOZMXIQF+QVdSd1zRRm5/Nmv1HeezrykHJ+kKVK0ZlbSk/0Czdfm2PO6VggqPb+mNGHH4nRpwdA1z11COka+GzU0DC",
"G5EV3fjItzknEQXjj8/ynpLoVM6bKZSNyvxqCUAFMAJ0CzDGXGw/wRmfX/GUT1u5wwGhM+RjAdwjA5OjSGb5pinStrXqQQ5zGjj2kZFMhhBuO9sSQ7T2rCIGk3aC1kl12LJRQ+lC1YEr4OXhb74rr9cbQ4FgMMPg4UMtUNneItUtu0NIWY9lI6SzOZN+fak9E54qloDD4Y7WSVON+ZmBhFGcMGNenkR9VV2YbgVpwBhMHlDYAcV0vh1Fn3supVwWiWNsBgErajyJCmhkDCLDvSD+jr+PAgi24YdYIikJqiv3luKnws6QR3nd4otZk+ASkeMiHZlw7f+a560/zthi2AfxyaQutmWa16lX/fGdUv/RhmSYGvcni60pU/GotSVc8HsCgOtjkKEVtyec2dIqreZctqQmsxnFNekRlfIFlhoedLGmKf4HxOunCyi69N4AYKUOD3IsHvzQcC+nUbKxNMBdyGHVKReEuEhMnIHM7F5BvXWlz+Y0SuOxTiFf0od2VDi5Syd0iwO3YDJj2KpdGgidL0IH+NB4bDIK8FYzsBh/DAwQE1oZu4vmk8lKkFmucjw/mxvVoflsdW+lbQ6zEPntjwL1jHzL4xS/q4+0E1bR6zJjVf72v7ZEn4QEhZHYB6TPDm5b6EUXZeV2YFHuQpsGlRXtm54ANf36P9VJNNCUQqiY0P55T+aufupfe1nIlBzzcOjONVfYotafdL8Rzq/3ElRWTR90/EM55a4dNKhLwQOiaHq7AgQeAugwNj8fHcBK6U023h09m6V8q17OqCdDnOjiTLM3qbgbCTcpXgyy4uuV3gPDhT7urCwALkW9H7XG32YfpfZFlAff/NjGrcuPLuGyBy5mrL5ltimw/OeWFU/hhdM3zMYr/fuIofM5iag33PmopVX2oR+5Kr6OMhO/bOSOhHMu5MJwg+1/TueQA51rt0Gtn7h5hb/cFj++nNg4/hTr5BqlNFHmdg6wIpoZfgXuwSTsR7QoSEMzPvnQysNuIpXvquFAsqkfCJdZfrgW/OcOaGGlcBNFSOLVJGHwTKkCeIRLIFuurc3i7qk8pnlbaWPmjwK6yLthpzJAEddpPSqRQxYXjXvgHKxekKmwxYrNCDBgHzM6Rzik0sZlV02xyJKf8J4oMNHNnlRX99VndL23jAavCIWrvlvLK23mpvv4IDk3rcqS/vHvM99fhaq8luEQjQvc6NuRwaXHbCq2czzPW6Dyxr0RzRWuuqq+imf5mGRzyrbSXEJXsVTokvxSz4n6cqsJSWYAFTvTiiIoOsIgtJa9DsJKoP2Wy+WzD1loh3RsevG6GftgF3ipv4meEK8zkhbzYLxufNprai68WI7iDmbgIM5JB6iQcPHLyQVH5THCe6ZYVPrvJ0Ve1xYjWDNskgBHA04nxIUbO0ChGoBSmOkezdHPzWQ0NwQdP0/31QJNHwzaDb8HESW74nQGv+JA71QzG7ylVtquPJNZzXUcSoyCRBbaPtXSq9AhcUIjvp+YZt9wVg8+GLhClfVvSrfUY7ipFrqHXFj8oN4KCxj2ivV+fn2smCGK3oOV/cNKVJuDoKW+CgivYpQZMcxwuj8O2SkhdTAc2R2PIlCu6yBBsGv3vdAMpe8h6le4eZvyeXsOvHwPxubwx4oRMUGVRzxHmpQU990U5ce1tYGpgijNPwTk1PpArl551e1Vr/3ffQAhO6P8512G09o4xSXE8cTPN/PbG8eNY45CUukGmujAWMTIM65PgOlgvv1C+U4eowwu6pQniCTIa73Cw1edDBkvwv/R7b6jRNkarUkaef6QwmsTb5yYe1Xqr9bnwBCg1tS2HkBtJWx6It2bYdMMll8ZVTwVKUBImNSaTdZkj+d3TILpwyRHD5JcL565U7myzA1PcYPBC65TckjtxN0JARoS5H+4MugKWsVug0YTA6w2KfQlleLe+UKNy5iQXuSi/rcAgqi3e02Q8k2SsyBk1E7/bRnLgkwl442BW4oZ7xyNVCcMX4j4",
"6r4qNNCoQvBWJSZiMt2LrWKNIavVkE8QdED1mgF/z0o+LizsQmfSQCbf/iNPpKcT45NqK1U3n72hscuOeYELNDGzol00MB4kGLU5RpCDAT0l5u72HxZtTh3CpikBQToYozAWLFd6OuugZwNxTAQM2HgrJW7WiPIg62gQMe2t1ZFqTq/9j4pt+NROKy94ePiNgRRUtKmy9yy/zaitJdVXIdMl7nBTX2DoI0rU/8Ab3iyWRAL2L2TnyWR5AICVCLCKSoLKZ+yb7XIiZ2sR5Nqv/z+Mcjh8P7YXI53n8KhvOi+RafwtyrN0MMHw3FvGu9Yl9FMTFDsrTKtt3trd/5GCI1DQ3DvJi9TGdlo8xhrKCa+iP0K/Du2KAF8zp5rMgO//MEZocQc8hUCqYhnuauSxFa4sRiqS5wcsnC8dfq4kDdjbJenCqCO9ocoWgbr0je0sMQgaetAvujUXLWx7bzLMv/vgztKPhS48HDiWQ1XO/51nVeANFNBAnv9R/himyGbBXKk3u2sz1cN+KnRZXL9PCWC0/7QHXHYLd8mggM0Sv2wun7925RrzSO6SDC+ubTsJVZHNZMZejZjAVFvbB7ws2sINQRzHuxgRIwL1Vn7k3LE0CQ9WXJZ4zKq0ZPS32OKOFdCIZdyNeQZgBtQjw2JBwuVJdXeNLEYGF6eQLrKmcgQSbgCDgETz8c16JS0YkAvWmIBiqu3K8LNZskpzqV2p/NYacC+rsiMpAdovcZRfLDSwP5mNxO7poyjXDcSIqcxvlcq6JIvbxONc5OKHz9dU8qhU13xj/Kh/3E6HB4AaCmXG0EIUrKL14lrjznqOM7gBOQ06DyO142GM8GzJX4JT2K8zVgDhAQl1aSQ5mbtD0VLIvh02FI2rdFQk/JWukW8Cu782PQe8s3qrdCOyMAK+LF/ky+fYD4MHvYZxSmsTb/9ttJAHMfe5naXaeOzIppnoDGmbb/qQOEITidx4H9PTEWsi8rJcwiDO9kBySJ2BzYLURbmhfg0Exv2fJxWlrvjoInUr4gLiz86Qf4ZNXWUi8Pt3Ipw+J4HCeTrXJ+H4jWx5nHRBu1k/SjmGCNBLywTgXxP2t5bmibh+h3ksDLg2jwM2Es14YQoG1pICpsHMAYevRZUdqrxNrO6SSSheQCTLy8K7QFRyplW24u+MLhYJ4dyMQf5DWIg/fEz4QZmUa5gDpbOdVEkwlDqArZiIFsGcLPL4ZRD2Q+gzQHUbT4Gwy629f4mku46Efy7d+ObUk18+3gMyAuOw2kK5I2yyhJ0E8WRuhOGymh7Ftfh6b+2Pd5rPvd0mIZ0b38szOkbSNR4+eLH0O+8hB12r5xVOYpWIf81GCdh/Vbx37naYEuW/ZOxTuxX1R6n/1zvj4C+C788xQsf+8XHU2Fl4ISSVg1lR5Sim/q+k/cg9r2sMZnmeJz/EnFe5eYkzH3SNraHjyl0ZvqrxXgdKq4m4nC1Igjmancyr3kyVFDEXkpMt76ZXQbSiqIyCxUYxe3VVhN1rR15qK2YdxXeH9UaBXmNqXTSiLFkrBrWxAynkQ7A6XDJFnCFn0LtDSq5MVyyH3dzjTioLpW/nZqahmsDpAvBcaNRFm0pPWMj6t8cAJHRfRUPhVOWGMtpEOs8Wd8RKYUCICcn4OetnxC4D5XSl3Mp7AgS+Wk5iRZFdHRc78wmegOWI7KHl7hcrt79dv5qVBbY+4/W9VkGye13QCKW88SjX5HfCqnngSzlkFc6xFxg8J2GEc0/TLfTNk/vQnm7RTOrZkcKAkrqZCrvQrB2hoRuG8D4MVZb+zs/dy02ldp/XpfpygHWr+j8XkZYR4J2CHGElYN5R662g2rNxB0283TvU03PS6ItIQcVXqIVIt1+0I6ezbzDhozvoaFAb+iEWGT0tlqe+V7SrYo6NgZLuOOKFpl+cPeoWPeKZpunaFECGO9LteaVqykjTb1q/Pwm7f+WhhqYWwKAhKGsX8Gi2NjBngEUoXCimcMuHkKbzwyGR",
"nCI1+xoiPd5iWNUs02uY2UfqyWeZ/e9tXrGfwNhgFSU0ZagAQyXUH9mJj9MubQNhzaxTxPORFGmSy22gwDG/9kmcfqestd7dDonv7fiT+GGqvbocy5a5kB8ELceAbYuv8pG7smKMp+H6ewlqhOwc1MtcJPDehcJVPi5rAYUY+5SHh7Fy7BLu6yksJhe+/Q6YpSN6rEutMrHtYQj++WGyvZLmGhA6YW16Lewp0lSL3rUOGYO7peDGpz/6ZGDqZIJ6g3+sgPEA7bWJ/DB6EYH/uZEDzXZX6v/3OYyAM+kr6UBDuazu74OohGSwd1Vn9eGMgHMvnT/yqhatp0ig5k7yV5VzOGNgusCh/gNyFn44RnVaKdIDUtT/hWG/jmP3v5zIoSIMnHCH2AIy0VjjjlXu8RPSBGk80O2ftTXz3bVYiWrZra/f97dAmpU7Y94a9WcOZOUQBzqCCiCF0oUmGrvtOs5HwzbMvm/OkIJkWPLN53sDky+Phsn+B8uPMk9yZfCRnzxe8huAwcSGhgfeY35GULS4NXGT6BH3qFw2QSix37ogLHuVJ+7Esz0mZt/JkNrvAdiEKJMAyf5nhDNLiPb7l2mZVxEAKeh511OOGIDIeBXKxUOGoQASf0XSI6RnT8vAnqn0ppDGQ1h2uZdoom4x0l/SvnhApaBkxYunmBBqnRa27nOXFvtqdmckmOpiOXPOXn2GQBVHfCnX7rFs1mgU1fVegGkOOaCwE50GYNH0bfb1G55tfhHiqT0ftIq1UvD19BtEDcnvMCkFQw8+osJYEyhf0vwaJ5d9JWaP5m07n6stY19q7vB2+M1KGvg18X25Z7KQA/bvRzizLiXBdw+eKE1ijQy4vIHGs2TXxZyqaQZdjBJBUhutZxc5FLeD5QK+ZgEn+8OnNataiLaqAjaXOGm4jiam5urxSD3osP1IFXvKW1cakXmMznbG/PnUH4us1JPL8rMk6QIiAKtCty6ZWSYnPMW8kJ/A5DCFoY/1s877mo8bt8Z9QKdKNGq6Ufcb0X1nL5UlDF9w+HZ0G7jJnI0i3YhHK1dov3dghEvSiBihlTLMV4KxJMsiEwYFepDpRf65EJ0xfoROaDCt3JB1JfCUebq8xArYZNwtKIkHx2z9+g+xMTRQzRdbpR2bLHq1NzcNxK/w4QDSkfvvRAxk8BjF6CEvahkiRsoe8KzYWZFg+gm1zSGzy2x6H+nVs8GYlZCkDF7zLjwgfn9NTDnVaGOc9jwsapml1jhp+ABnHETv7DbPVHoUEPDh5M4oFxSKdpKxXjtP41Ov/+W+/tZqs/8nuHFMBETP3rSsk83Fnf0AUx+1O2BNtFjOhxSJv6A8Cf6WyUP5ZaWJF8FxTYtFs7eC133IJ1ovMlTsfEE1uDJzisb8jlbESalRdanJLJo9hinLiYPB1OjfpozpqZXefpJPEXN5gSUcTRQBZ68RKDMQmyPuLuWwzHFhjURLzZFahSTn5v6U/v7YN3tRYiHl6TDXkdk8iU1gmMga5nia7Ljr/nAIQFdTAjyU8YHoGbPj3f8pJzA07DbBLwJ3DTByhXM2v5jK+s3VEK1/1cb98NFLkREQdSTN3Ev4ALdA45O3y8KdB+gXfXUp6V3LfTL2pqws033tY4lJ1ca4Abq0LNbN784wOfiLHcysBCuBvcKyrWDeqNWlfW8l/NEJ8cblwV07qYJdyxE730qf/aYtDdLHeD+/LHSb4eNijFf8KmZyry0rBn6rirK+6KZL9QmACjUFqQ9N0uYKYi1lilPC65FnW0Zv8ifO90vpPGT3ZQ2kDl/e8KTRNemCKhOl4ZqPy9ZfFTlXU5Wpk3CcN9uLxABeRI6TzY0j1pjstRNvwYYB3p0UumAjb2DE8aV8ONjoMydegV2u3/o09NaDBqq5VDBmXeppU69wph7WI2B6aNX7FcjtDeg/meiIUl2xBdj6bSL+h07THBgmxF3L+QetiPhfzIEOeh4IvWaFeieY4rpgscCxvKyackNCANHE",
"cvj5HO3i4HOi1UrIUJD81jVye9kxBmWLcYRwwe4tkcWXHe1TgNpsBydbJ4YnLcspchKj59npHAK65vZGCwA7xjfbVgMXVcSMYEyAzuJ+NZ92eNlw5VGmwaCJC5Ken0XP1A+Mh2E9F5/XDvgRtvSDNZYbPQqjZncQcskRO8mcdNvEgLqbwruqQBsGnPxc0gdHrlqzvgBz8LMoWECt/qBVQHrfqIRDKJvQPuvY6sHKC2XX29X9DO6gTTNIdKxsWCpiX4QQZn2IxD2uCFYHlTG2kanjDFuB0x2Be+4/1gI4y/uYonc+DTuKh8KVizd/Opu8uiLnPZnrH7v6b5/Qw01gkm5Igf49DvQF9hxhLW+KGmWxDahNFnYdQYqml28fpA2hm4hws5DPMTlnBMwQuqHM97yWOq7t1g9rxi31zB4D91g5WPJ9hxacm88NSQMeHrDgFCB4t96DXxVTKoT8DCD0edRVhJe3p2qq6SOUTA61/ZApS5fNqGrF2KLWLbOT0624nzfHlnSjFhI76bIbOMLW9i2Rpuk2MTraC7pLPS/LlRDyz7Gh1g5HiUK/PjZWLWvkozwGvUcQs5V8tR0RA1bjedamielSOWcGaR2FYaOOAovX1k4CNjoVjhemHXIKtlrtwse8T0Hk4GBgPg9uuAoLIODyT9YJZoRzxZ2HNFgWbaQo86FXNJC4SqOVyNxK/2b8VzdzcM9xkXr3jnAVpcoD53CWmBmFdOyNDCXj+l3S7PpJR5was5H3vsj5CkZBuhFCtOu08LM2GPjeTpa418Rxkl77bn+lH3/3mXhVVGynp/0H5qcudsHvXh0VWFTyIMMPim26VO5Q7YvijgqkR1Z8LAd//HpbTa2WtNHVZaRcAvPhEQg2zbomTHj6b9vSBclxsJrJojst4Ng2aTcvppd2h8D8+jcg9X8IwNEH+bBOIQYTvAVsGLQenCT4TYQxo4OSk15l6jvDyUYjh8eVFeIboI6Zxt2P6h6mlWTvKesp+wrgHHEC0447QYIJJPd7BeRy6Cn8LQ5Wbs9Z7PRDjDsWskts9mc39rbXAHigTjsNHwmvMKFpb+uZj3T9XINQaK9AUQQgallkPndejP/yqWcPdShvl+I+yLLu0yIpM4ErqKabjUybXjEXQwvSWl6YAe9fMhIAdAkBhcuDay5rTr5sPBQ9DNnhKl3JtFLFZ/XLV1PKeBi+sikE23XYswGu9N3oD8M592LhohgI9QE0JrlKS+txQdrksjOj6B6n3MAUQLHXXtvL2JC7neHQQLv51/Fhb1iOtqbn8S84PywCBCE3GM3ZSGlNb28z7d9jIqrqv2NjzJgAGaiC7EndEHbj+U0McoAZ/IfaM6nTFJETay2LpysacSUYYNZNn2kB3hNSIittTvxqhUzqPl/JPQIkkfgoCS//lobDQ6ELQ3MHQVAxr8NqkIgw1KXcs0osXBWn1y5uQMK1UFTbbow1xOrMACh/sp0b16yts9Ux9gD1kRQ6VXqE2O7rNxURUQClT9w2qdkFqeCm6sSpXMLaaOSysB9SeHvp/xyIzIlyJdsrQYdU7lZMoicRIqbOn+fdzFo9h5s3j5EPtOeZcwuYM5mpwEjXoZQTPVJj6AYUSSMjNTXlvxzFOfXm9Eup0q1JFMZMO8sXRFHTwiZsRJNk1kQUeZfhcb9uZCPn5fOwHXlU0os7hKYfmwdx92VfvG4EENO3ypZOk+dlWPmtGcT4pyihTGtuSpjxC04OHw50sC6W20DSFqkxtzdm2nQBzXS/AidSO6icDuxkrm4JicO32Dcr31UBKQeTCR1v45zswwTw8hJ5o2qXRr31I8WXFX7Yit+sI3W8zF5EBxJztudBX/JpV+DcBUlJyDKJZqs3x/IN5QZmDP26JbNVV86bi41IyIii38vvx+bDFxE8ZEM87NfulNFBl+QSKxDxbkjerJncwFQslbv4DFh3OZZ+FPX88y56pCTDtIZoJ7MXG/9HjkAu4DabMgf3GmNkzN9gEvw8",
"o0WeGc/Z62l98hHwbDYg8ilcBDRGkR2ZsMlFYfb+9GReRT1KP2tDny6jgTlyFOgvtvCN/D4mm91vetcX0z1Tsf92UlMIVCNm+oNjURZ4vW3G9nGwms77lAvguKa/Df59sg6XK/StBe0R2kptZFTZgJdvIJyxZzzifNhW1/H2ca45evscf0MmB4lYNClW2VFjvB8khzcbtdPB83KIfQYcyB/JtIG5FiiThQhr/C+3zWG1i2MmsU/LjM/fnvoRhhuRCmDqHrdkmEqrRmwUszOvUPuGbngIpNhSLkEwQVEyIs4UQ4GsTKs/R+DZ/woRkYpt3pp0B1UtYBIwpk39U+Q3z2IJwQl+OR7mlAER/C0aUhOIMEwveXNpk6rwIhsFeaH7ZVGH3FrPVP9gDKnL2Fu1pjvVJMpvsnK23f2QKmdkJgXzRXv/DR3Sdc3JdMBmC0WwLfsRQv7tY1Q/dFklUG979YI1gjZyNLRqy26wamkD/n8mqzJZiZWgdTkFQk/bFJi5oUzokLoqHn+w/+zV6pdVOyidSUvM1NnEAG+usvXX1oFEsqhChMX0a0AIr3QXhyX4YRDexsQWEK4h3IcIhxlypjRy6wl5eZvtVh5Bi46yDvO3z2fcgOnv32j9q2H0z78eWuWIRhPkNPNzdHufXk2DMTl/L0wh0GbZIqm4rSlsYuJtnzxb+2J8H0aoZlCK3UmjKdSjXp4RpqySD8Sb6NWOhw1JuslIEA0LZxOu+TljT0tCZOA8RaRB3U99+bj9HUlcH6W6q0x1fSWAXF3sk9XM9hLuQuj8ssYPAH9S9ct+ze0m0F0o+2ndPSwuscC2w4oFYMlu22SFJ3lt0hh7pkeg0xkj08XGx6jvSwEP+x9YSZuj8BHUGKu0rwvaR+I40/6N/D5RyUmJNqPCh6sfoVglaZ+e/DIVC7ayj/jhbIk7nhtygQtIR3pKPi3o0WREM4yx80xL2Gxi1uS8Um74WUb9cz0clM5wupIQ58DKRIXGAZ1GkaNsDE/lD+AN9IUSz3lxcPTJwH59B3vskqGWARKoVh83zVAzpvVtNiB6KTYtFiyMOqOq3MkSS0QwnOZAc2THhM8I696HqJtiYx7RUE83dG2h5amGry/YDDRn/RdgVbNNAXx1XPTK4cHBWBd88RTQGrxKjB49Ob3qBxa7zIKl2C1XajD/bX4vsu5L0/IazpjXu8o2OtC7n9NFmbFSJY6KfpN8P38RQoZ+qOj5QYCZgm9bgbXV3jGe5s4DaNaSJNJr4GPnYMtvGuDnhYXOIRZO5DIVQWzqs3hvvnD/pOGuW8a4KhS3u+VhAy9AvFN0BWSpiMWb7K7zTiCF1pyOWZBkByjoxGMY2I20bOnj2x5PpijAwc4RPG1YJeZwLZq1KgTo8r93ag5czR4zqcJNgznnaT4Pdk5ADlfdPy5Z3I7SCxkSS27X982WrKZBfWATaRwHmkawPHlhtC6Q7FWm693hiDbhWfpMuiJS0qNEhemODUJFjRRlB15AmlPkuBbjvIw++U4cD0Z4qU9iGef1g9RNoNUbYUImPFjvOqaLeMhkh6OxG/6OxtV3kt6q0UP5xFvY/GTrhwrbudxhnszATW3C6GvXs0Z7vZMa8O0VT5PLHNYH5wd51k6QTKMHs1qMYDxUaJRJLdEdycFDJQbzzOkDC7Iv9ZP11CgNi2CTn7mpR+kcuXAEtIAObPmxc2tPxmcqtlyNJC4+7qH/1H3SsrzwmNApEvHZMETNpnAQqhymlDeTNqS07oBcbuDjdu/Vp/qXKdVTlAMmxKgj87OkW0dzpRtU2Ng9qcdisU1+Jd6eaTe9pju1j1Baw1oiaQODP25rl8ZfKUQUw/i6TPPawkwXQp9Rhk/1cYq/qI5TXDaREt16WDtvcSQ6xVTce1klkuh90nTxxKr4Ppnglhy7c/DxxKmyd2QwzIPtpkpMJCiVl9v0JvypM/GUgVWHHAy2hxqsJptMryX1yDCKOD0RXCrjYamDJ7G0NF7+9Uko",
"/oe7pSrYrXqsNrDQgTqaLWKeWcLahrIRlqVkXYEK6Wea0HnAxMVYt3szPoPd/rqlBXVCNFTZ4nz1i3HDgiOU5axNPs4AHA3WHdTe7MNNhhL5ARD39zDyRF2V8b+73pv/iDPgOfy7hdpYdMq0wpsSAh/olNsDsPcfKcTo9cHXgcJ2FlwgERBiyz1pJaXQVUOpA+6e+v+so1WgFkwNCOEDaC0xuTgvX5/tD2pi5fkWPCRmpZXA7VaFNQPPXiRtOcSd0kHnqLTHJgCvrscjtFdt7//ZQyMhsTmHgo4oqZVdCEu/k8R4A0IWkql/dpqrvoLsgiGSZA0H/bEbdTrvE1nytA8VH6u7V65kDiX2VZguR35Y38X7WKqnN0t/U62oa3a1A6osGfi4jcS0scC86okd7+1k6yh82fUEe6WIV7qzVow7hNUVJ3FGtKWR+cEZPIR5z6jH2+arzumNnCx7P2Wdv9ZMkDl4cmkh6obvBxrp89+txfnLn2Z8eusnynpy2qycrBHMQcBg4DOQ8ThNWLr6xzPFQzNFEFrr6XC9In0M0CaS0QiLoO4IIMUfRJ8yGjbnjGOVDecAMfWhcpx9MIIBPhhvS2pWM3gll1aBaGopZjycK+1JYAlFj7Eo7tjS18p96jud+Hr3qK127bTDKwLxF/Z5akPZp0PRDA8h3nHtJ3lQGki4uSFXA109UfN6g3HsftOIulVSuhFhBEHXLxpuV4v+1+Y6/Xd1mbQd0TQ7Asz6+RHuFD0mSLYt5IMCOdIZmOYNASGl9jHG6flkAzL4DwtHZIprrN4/kCf9In6pNENU2vJudpvuW9tR8NZNVTLFF9q8os7Fes2we0+5KK9Mx9CwaB38Kz2qlwV9jVzHRccIs+S3+rQOHlkA+fmfSQkQnkKloukvT3jYitmQCjfpecVbWfeHNgB4OYej3+oCf/wQta4bVWI5UQGad3ScbIwVXlyhmAPEIoYmhoYczmclHfiJGVTbyxDhxKwwMpNSapr9ZHGKNKRRLkwFsvqeEA/OgC74jHb7PhoZx4XcbEiBQqFEx5EexRoNESOLRWCX//AolA6f/x42h/amMtQayIVJVAvljfrHlubE2+CwgLrnpUCyH+3+XRPqFiacTh/IDPuvxFKVqykqwO1Bb/uEI68XO7aL3WwuldPZv3vUz9a/LBpXEWExtWAV9W9FNCWNBSFtLZmFPnwzBtZbYCrfjSfEGPznIKpgcZzUvE2POOTMXf2vN5WxWwI0ZH1acdi6rFV6wP0kQI4EuWRCEzG5GqeJQT2YOmUOrGNBTwo23UzeCfupu6Nu4oxO0ViwQYqtc/YmZuCP52s/uPkWb7yiZE4tdXRuMRKJNVEejJz4WsMymp2JUCWpRqs9Hsawm+Fmu5h9W+92ot9LxzOwSI0iBo5fmO4nPi1iYmJttKmFhqh1QthkX/pKNPMb3ZLAQXQJ2Os7KbXDiH+4504GtiHO1lzH3mNguNOrmPKF4q0DVG7sPbCB5Yjk0xuyhFEDp6ZwBADxts9KH15ZBFimkquXMLL/74nm2KitPkKaCoGTCBFQekb5AP1N/Jfll0UEmZWm5J+UkC8yA1ddmkbOP/6iRZ4MNoVjWnQqjqZJLM2uWpMQNR+7oGpuPB/OWGzf/gyFDxoXsFAP1atKq0m5CGYfkjbS0OLH0r5PLkXYeXkxjBAvkYQaQp/J8EeaSxSFlylR12PIOCcANw+mCvuLQuOxCi4oOd8KjsjhczoFA9nls8Wu2bWImzrwYuiL/qWKrGbOydEoQ1Pb3s5bb0DGIwv+YOoI+bHcWs46X+CzvSxYbXgM9NUn8DnULbH+FmOHgTge2gDjZmEZbn7+35jiZVzJ8Xyh8zN7nZzsX/eCb9o9JmGHM5iKylFAmIUn2wUJp1QHTC3UUioLnv1LGll/yieHB6+E6LJijDS88hGRDbAM3d8R/1qgg4FVhRv0uFH6uGDuIJ0heVLWLjHgfxglerpGyiO8McmH09PpLq0VUiXG",
"EdHEVvejcG/424O2edOp/ccAIG348yINUFgkyQixq1JROGu7oGm2BWHgtpV2pqHtEK/LPCeeeaE7UPW8zMouVMUNNyYgJoT0DWxw2Ke4TzkpCrvlVp3o2/FDhIDOap6hEKMyevImK3VzsxHwkYJpr/+aA5ogrYzj0qlV5cMhlLDFZpKBt2y+frn5X6p8ZFbFdaoenPTy5mx7ifwpGyqMyyudteKUvn7psT5uQxesCaQ6kO+T7xPOrnDJ7E/4eIiiWvRssBJUSfZG529xZz6UFC6R4SFc0NY4jO3x729O+/9ZRtRCPzpkxAjGfjzG1OSKRuwyJV4SDOcl8xSJ72KMiCVPFTfgoOkItAcO99TWd50QpRg/xwRNGc9jY6bLtQXv5wIsIcNaOVcYnXu6ATHfZtFyTS4FLKixGxxnmSyS0Rnis7+Vd8ChWBe78ae8P25tGe6eLnre8/YPyN5xd0A2ry/mLUV1Dw/4duwWRP7WsbrcYqg45Z0MShB3MDtxLppJ9a13XfETKMiV7bqcNRbDxGo5VLHLaeJNEWhH8BVSpn1JZdzibnzhNYRlSQ5VCz6nddthx8w43qRT0Q6Uddf/QgbH0NScoJxuZzZiRjTnZkWAyw7SqcfWoHDnF2WUndWVDx5XdNMSozXl0+n878U+TEipNvcYpMkvhzTsio+Xeoy5Bh96U76YtYrrIeBspcLsEoj47TBWvNlS4RRhHEl1gQMF06+X7HjxqQLJZamYRx5oppQj41WaxSaVfCbrtZtu0/yg6eon9OUojiWQU+FzmCU2kK1VVApKx4wDVncm8p8oP7lU90dMXDQvj5smA9w4jD/uL2FlBu3j0e/3KlPJ3x+cVprgtLhiekASb2Ib102y+QuLR/L5mT7vp1EBwfwC6WS+ing+oikbZOgdLWde+iKMbw4jm6QJcuNqHGr/2lIoQDeiLPNT0lPt74yYBc94Gw/Auv7118bJqifXpMZmqH6AqzY8O6odbV6kmsjledZJgMw92mHs66l//zVnokpy44FbsXvQkFchwZtTjo1ij+0hRuaKUP3dWUEcUEvGvWzcaf/i2vfaPVFMJSISWsH8VFdYnsBSB85CtQNLj3Cvl0PDGcC6i5m3FMnELC7kh6r/wPeboBASt/WV7zwQZECW3mmz3H2BtOn1LXHJR4B1QjRTQePdDIvoA7phOgaZAKshWC2QDhy+e0UthauqYfEWhJ2jjbe3IIrgdWG68UcmFfRXrVuljIbSB1WB7OIgkRFzrbxBoZ1UU5H6At4R6MJ86fHfffyFeu8idaNgSy8r//lrxK9D7QmUe5kEWkX15h5EFN45ZLnobmwSS16rXRs5WYG7Py8r7q2m+b5KYOyLgf261+rT6wKSzOsKJecKWG2tL+HtRt3mPt20bpd6Txn8GwoB2b33152oa/p6KrQtbDis5+FRFp99oBDUzZrFrfZJhn855uWbUNr0uoYi34ri4lAtabaHt+RvcZtOSpNR7PKT9EUlTo3uPmf1D5xi+t5oeIfg21/Sh5BUDV2zJcyc3cgyzdtxq5ndcUwjWgm1zOfnWgKtWw4camuK32WXPZl255B7fr9eThl2ewcM/qFV73bHhKm2uzuykcGzDfnWnLl1hmNVyDosx5Wy5MOknPh6tgAtjrYfLMvCKcfwWpVfstjwa06SX5GtQV/wheX5PKfYh5MPffueFYEaBRgBa/EazfUfkKd8AwfNSRgfCToAg8TXD+3j+EUAMUo/uLCK7W9RM4ptfTJlhAKR3p+Yj3nMMr3PUUUk4oOgivhPeJ5DxvizZZbnTBcajJVK0qan0DVVpiDm40DAnQ3aPfdcjPEv7zUdPisAYj/X+RL3MLR4Ib6hBxDo6sN4IE5U6koe3eeS4Z60Wk/PAjiq0IN0TP8lD/go9W5aOKxFxLno0uHZ17TzaY5xhl5FyPOKTbwZz0umxK4uUl22ffGq9idM1r0ASoZW3bKJEyWT8zDXD57CliETm2IZ1hpagmkR",
"MhZg8ED5jFsQyXnLcm90Qjxp/gANwB04NR3ShQ+rqzX6UZfDCHOEOOi9qfz6MF+U2DdTINBOtpMIAVTMljPmEJrkCdsJFTdsukgbM77AVyNTT8E8D3j+jiQBbn950qnGKLgRJE33F/ssZvRbbNdVBA17DO0NM4T65C9KMTIJGYCXkGdf8p5ifiRkKJxAIogFWsh7w40BUe44AR3Ldn4ztvLRCqkZsnS8yc4u4nlDeCgmB1X3jCq82lD2T+EUGVKOT1jF0BBwM5XJ3TCY0B2RE/TBUA0BCICPcAnFKioiSRF0MzsgqeU5ksA0M81hlo14lMBKU6fAguK9M086iuQwWjZjRS2wDrn+VdOQaEloSCcV8cJ8/ezeDztVObervu32F/RMmanhB6GpQB/ECNxNuPiok4xSY22U6dmR61fEoLjwAAtOtebOe42WNfMCqAE20Xb3Jsd41sfuADCEVNvz5xNlsR3Wqi2XtRgUtnitlvrgQXeYPmeRruUOmEOX+HrFbdCQ0Rlot6JDZx7IcGEAdnQe2af48IBJL1FyH9/31O3VWSkWLbeKFFAhUrLGMKxYvoHgDbc23GKhT7rRnS9TTrQRJlmwCzNTQ5gc2BxLzVF7b9aSfJ9DQaEtPLeNtcSJ0vmhrQGekZW+BP/fFAlKC3Sl7WS+sCooQF37qrI8CuyC9PWBgJcD7OMEFDWN5+N77U50Xi503/9itV7IaStNGEBkkavouSAmzhT99wdzqH/4jmG6H3b+mnLtK1fso7Z1nrGRN55bCrADVDjSYT6wDmeoBne+fYWxofyLmKJRDSDsD2aSyenCrM8MVPJQzSK905e6TViab5VDKvF3ZFdcVRMSXQLWnrtCJclnaVkMYDR047ONu7Gnnj81tepij5Je+uBv7Diadx6QH2OQ9CUgRkzqnuv3sf7cuvi/84k+O34FNCEoWm3C9BSfFBTmddPstReASZHvv2zdSf68k7LF+cSkfIeMah/O4WI6qmbLWVaPj3oCcmWC0tMHnA3cjrN5FvfgCLGwsBNeijYipGPSbXZpMAr3MjmvQPrB2XmN/AV9a4yavDwP+YexOJ+lUYsDKxkaogPJ+uBGBJyb6IMjbxfTjQDWSlkgD/v4bltdGn31zzY/rNTQ6UFcVFz5HM11n9HBDqAH0z0+BwJawgAdTyny3PLJTrwsURXAu9RtWM7igCHbvtneX/c1qf4WpwgZAgWyPTQX+PgqR7pm4+nPtByO2Cjdx7T+Jy1emcO1bDFWMCbsa9psBntYc6DJtWXzrbavXZz0gCW+hPYgHNzjGDQKL19dSk3NFLlFcWDbVoObhLQw8EoCE1+bXL+R0pFDZ0/FARBoPP8Cdug374yNw/zprI0iVhJ3wPllUzb8qTi2fhKEMp5qQda4bY9NHVHdfft0oHC173fRnWTu8aXyGdcAMK1/hV/KiMAYAcfgMUUcqvBSGXo9ZBgVCBJKWa7YE/JMJ0dkXtfxkySQCS8/pQskgdc3xVc7JDCHT7YE91SAeoSUzET6sO9Qd0tT/EE+O7JYMkjKgPjrdBMQg32TeFUyZjRnyxhMtv6zlABz9kiiHVVda2XMVa6tY04C8dCMewjh3jZNysfcphp7n6MHh+Cj8dgRMVfmBec4xnr8kf89Tn0syqU1YMuXHPys1puL0oCEHFxkYSH4EkVPno1qYYMIXibCboumYBd+4cjBpyfVBKaFnvovogBfZWWv6FJjOxLy5Qr+YJGzQsMQUQH/bYiRKC0hoADY0F8aK29SZ+CdolIFmqaPrnBjvtEXLP5A4sEk1gtbV0fwZG/vS6DIhgkW52xA7R+qrhHpmc+foWjq+rau89G9PBeWTFWwnmh+NSQkWqWwg9yTfvwONBK5hE/ScKoMLBJhrWtdmawUOBhFZ9T8PQxmi3C+KrCdrV3r6FU48W1kRvDK+gchKLDib3MOfpAr4SAOaDMQ0313B3MJhOqyZefmdRB/JfLa98548Szbh/XU2l8x6ijp",
"WNkBD/X17Yth/g+aMoVg3OlLsSWtE80BUSr3KhzVegHhwcPpSDrgK0x+cWmrfymO5bSVZkqZ3YzjSDZJ5W9Ce8E2h69zVItYnItBgoDhjWIYVdPcvKFsbyfxocuRa+x9u8GVtbZlmvpCA6sCCnWl97NGdH0iyozWHIZjUFlpi7V4dUcT/hzqrGR4S+G1CXyUnUFLyNQez2cP46OY9h/NDLqQk6rzS3fc2aNRLhzvi4EHvFM0Q1a2iaGaXUHwdxt9d/iqistQJoViCjfxLvb1NDPuVMCWLnBeUfi/jfK5cGmdOYWsKppxQH07Fu2R+huxmEYw+U1z6FE2L8VckRjpos25FvYHJVSuu+XG2uYPLDIYS0i9i2uDmJ5d3SSrRxwWFLp312GaK7/RVRBNU8U+YqqD1OQ9JViMvNO0tiqXj2y3tTrwlT/ux4zlaDslcbK9ARBlILhIJY6d6sAQwV14P06yzi/Rpy15FqNl6tAAZr8AJIE+xSVGndEpbxONPaGOLDk11xVSFZnmjuBH5qGgIp9XSZ2Q1FoHe4yLGtq0tv6vadiajSvJ7BD/Eq56G8sbInLp3CKLW1CGFfhi46BM/Pzl1Vr/PIKOiMmmnx/jse5kX49e/caUTC2zBJXMBfkBIl2YgyJrv8Fx0GqTzRj8wV0jhLRmA+6d9ahQ0RsrkORkUxZEJh2hfD2syIfAPpxPFgify5UAVY89luMzJ6GYLfhu2UWZ/hVhCfM1PhK8qJvK1DyqVMenRUWJZGIPaIfwkmYoz3krmAX17sqj/rttTBCuJVNqHqi2dXWcBqlcz5g6E6OPg2EMf5msHWZRv/Kw2GBXwnaEJoVYRRRt4+YA1Ny9tCUU1oJoEYuHm/stHrE1HPl+g3zNcVDkqVQTle5lxiF2b6ltDHG+Gpl7WOQbuVd4eh3zlr8q7F+hG6YeBUQtoST54sIocCOtJa1KETbrjqIYO9GJZbSNV46P7VWtz2WZWu1B4BjZU4I+M/f8SN7rn6ztpHEcpn2FCeUe124U9eN9+lz7087TAWLOut5UzeHdvHjG35Z+NrRipDrc7OZL13VsV03idwPm9rF0Fwz+FqLGrySi59kPFuDmw0iqsHjz1phjO/lOTFdD2Gnvy6fPPjLLtTJYDcJ7eHYo0KXhqjRDrNmHo7WLeQZVmkQVs6oj224GyDwEBUekTvgGGK03mD+/2NCWswClHNYLv0F8+NrmYeXSJ+BsWUSf5UTUUCo2zYy0PplgQITw00t3ke3WO8GwnKUoqXx7r7vw9YVXhnqyr37qrVXrjG1/XvE/CAGNgNeCeo3YMFIqsqs6P2oQdzgTa9zjUbcz/FCp+KreacCdYIksZWGCi+4L13DTK5HPrBO6rGHWXmZUi39TmmKRh8B7Qaqx7XW1NPjDOlPnWvaoyT+WML/T/j0BLBak0ieuqDbCrqLbDeLDk87QQAzecY7HcodXmZuZo86Io/F+fDAoSz0UtxSyiLqnMgIo5jLDatenXkpgmE3CUnja3koUdoBrwvBU02aFwpAKJ9mjU6QPU/IwpoU4Qy4knZ9KfhM0ePrSI2usGKfcWSgczN1onBl+9JJsiRR3RhGyzRaNdND0SVas8WpJhlJoa0EolNM7ntwN6+dsjJW5HlVsx44QGhQhRgZLEfh20wSbEkcESN+VHguZTjS4mXa8QBQ04fqTtsApmE7/81a5HUpMxUSnF25m8nld82+5gXMidS1vDXE9lmxhj6bMiVXgGkG1IqBYfY9JfovIdkmFFH7VFWx93KDTPQ2MUioHrQ5axFyfqqCkPOBW9FywAxPyxKz6IXjmFMNfrRjKhbR7F4LYU4l3aF25uXIO0ZlP9Mncr+rENKIApqc8CNl9o3mpW7yTBBtWpS2/VI7SBGJUkoaszwSL7TqcxX8ptVB46Tt//KLmL1a4mTjWVeHC+7KgR0odRf0j3y3w1cFW+ZQmOGVodIj+czF6Q81ZfLQH7XGblwc+CzYwZAiei60XPofb",
"pGLuMza2pGmHWn8FgGkmVEcZ0K+puSze8MZwauzE1Z55F2TnMIXIQUWWyLg/YvR8NdoeyPPbRYEm8gu85kZPXarsb9jc0tE5dj/rIXYP+32x9C4RwVoNhfwAyui2O/lFzSOMM0iMY02DflEkxaTwLUmOnYHTheSaez9seRe3EI8Mwb7jU9odc0jsNJnwWaoP5u1JipfLgBMVw+rJ3b8iQy8H23UTdTvLuvxDaeYAMfkDiF7Ykr4q+FTScAXv1VDeRzQ73LH1bu2B0F8TURl0JcLQUjEVtfmSJ8/JtN9dByPurQ45DHPoVO1oZLK6sOEsyNG8EzFlRA04bs+QykoPGmFKf4T+vVcQMrLq6zDRRVPZPoSe9fWEceu94JxlzAoWCRHNZsiGEiZEdHjXg0NwmWYDlRLSd0V31D3bxashlz5LHDSJWBgYt/GLHTTd2ot/FQ1mRX87X5O6GswyO9Qa/ejB9wcyvR3ET7Zm5cXsKjcbmnYUASWUFmtUStp4nMyXnjWDw7H9zpXc8V08y3/LVJu85x3wMZkUwHQ6bgG+362FlC23d5amzkF69UWQFzY1/tFcZRwut6ob0ZzRNry8qxowhVvUF0Ay3XDWvPrV79/1scr3yeiNQTKi6M0DLOY64A6LL3YKauEumzyQ9eDAvQyBKVSyBUVH/DMa/wV9l+QTTm3I6WvGiq7Ssxhd9VVddHxPcy3IDdKK7r6tqYtzOx9qvu62r+/uqVVH0LH4Wace2SYq19FygrEkgjm4TqUHmRVykV4L5YXDmVNSqHwjesgfghV8Adeb+sbbI0gKWRzXzRwahbKHR7y7f2K7P5db3rZkmP4Awi0P5f+SXkKxSmmYwAyVLyUB9MDDRKz2Iue8ix8bBmloDQ0+AaM1zIC7s6BF+NYixGsAQzxV51SP9JYpfvbDeKp5b7f89x1Cav6qgSomA4xqKaqBtXxKXcgW7E6wfDGSbChiRKoNBr9r4fmDaegEKcb2LvJz+tVlsszEWKyXnp6cupBJ4AroD3ZfqI+aTHfftDsgeiq7TJA/6BfDA8NfZetxsS7Oh94yuCheRqZr3T9GzFD4iBru/YhTRLx78qL/NN2czmKlqjecHTl2NLimja6KcGjFdn2E1al/bt15w6EbnmQ19krBQX2CjK3DyldjWO+A3sMPcpFBOkozXUhy6/h7EU0ekyenEEbV1rXs3WCda40D0d6B+PeCf0DSfribxQjEgiHto9GCC/ddPP/uo39wCqGdU1+dpedJaXQdK9LPa7dI3jziZlNGIv+N3e7iWpwbkGb0sGfNDIGt2dINO5LW4dYfIzHh1jQY9aSUff8bY7iu1IyO5j6DRAFDwlMeRH84PnmxPUMxk7asEfD//YnOFzc0Qaq+E4uUKaRoawJqRezLEPIqcwYDLGrKug4b/h34iiYU05vUHXGORqlYQqR6Vi6dZIZMLsy3CEXS7oQLmpKWt+GNZuezyFFKCrKuyK8HEQ/q86rsN5YElBk9sOGd6LEvisytsf/BUiw8axI1Vzv/nyvGDVWh42TzI7epkTIwL16kw+oglfEr3RAGu7Oeybsi6JIDLqqMz3yNuJhq2aCo8YRp7hO4ViSuuI7+5PNs0HaV4XRL2O1QDBjRq+hg7rPmGMX8k2pGKvecMn7DRJKn+QIW4OgHYmOUEU4dWCCgLEZs+w0DLgG3ew/S7eLIQ8biSl7Gmxs87jBfipiDS2xhamSqUi0uuSXmucW2czW/oTKLStT9PjY2714bjiLvgIjHDDAgD93kC1Lk9dASrrDHiZi48q2xfG5dRATlvHA1Ldz4Vt5XNS5UAocj0N79VMs0ghbBG0cUKpv39EO71ZwCcDiZNYZMDE7Exh1cjxmviL22sD926kPXyRNX0VWBNiMr9sQlBYEscxscd8vEfeKy0riLK9CG2qV/YnjWXvA2xECeX+YsZpcw1+PAq+ZL8+8gWsBha92F4LadIlFYqp346n/JxJRXteV403FaSanrjEsN",
"7v/u13cilAwDRqCb/MUgFZfWyR7difGOMSgtJYJgdlrDi1K1kbZscnWC5VxBiA7bXzZLYQudWTJvnEhDLvwP3Joi9qimUv4CKWoNYc8XAf/xtxTPIFg3JoJu2P2RJzZwCFB3ATf7X+C4NOklWUqCVSG4S8fLQ54Hbyxy8S4nTauOQXl4V0g5KgPwOhF8Zwafm1XS1CDVgd/+PfeSsg+OT4WFYbDziCSbEKmikJ0I+Q2M3+icSfE5S3+xvkQzA7yhBEVJFnyutWFJrpr7tTKLtod08HeAFeze/xPE/A2R0dRtoWptVF36Gyk7SDaBTkosJDXV14a6PeQpPmS3f1JQ3zfyn1svi+rY9Bc0xspfG0sEaS9DSnK/69s2Y9JYZnYL3hfNVJ/vyfD1tka4Vi5uC468B3watevzrj05LcVzcgb3pnE+Ek8o17esbiJTWhwu8b34AvhdJLEtvqnWu0VrgvZ80mn7w8SzjA7vogT1Pt2QO+xVWOhNNudCUPV1mGhqXZVQyaoGggW9JZkGj+NipeI30Zl5o2bX6rXCRQOjXo+2zegkzmsaPGWs5sGlpOwZKyMXHHm3tW0RPU69caCYDVqS3Fy2Vh20ilk4WlXaPLfVFQYBDtdOBQ/+HJ3aTZy4CBakwhw9A87RCqMb3HkMZDZ2GE+tgqzerTu04vl08aRTf9unY8c0aV62CYegICCaR9BdLgFN6xQ8T6VrT8TmvK6Z7XKdZB7E711pHXJmU0+UhhL+897ntS+HSpxafuVaGI/k8NugkqbXoeNb55lsTl12w5oS9Fo4GIbHjJZuai967OJSntBWCjzG/FmWyJuiWl9qFGXMjpWZ8CgN4otJ+ijKvboB9NEtNPn5wjgaIsyCH7mzRaU0QWXOXy9HPZO4V+b4XreC/D7ApyXeNaXn7Wg5P9/rSDY1NktrDkmubkUXF8CUo6GF7QdcWBEpviWfYf7N11K5f2LQTjv70UQDxNCY/u8UpdWTC10sIZYzX5mVzZ1L6dnQim/kl6NUv4rMmd7s5iPT+1ptHdBOjX5PIZI2Ahpx4p2NmkXsG/GUtokjPo3P7flqOVVAL+Z/ndDNLxzlUCnkFIK1D35LScJfSjTLO0rg3Rb+fmatulEQDu360Kg8YznRBcOtHIUZOM7M7eS6CSV4rMgZv8bLLgiCPs9h2shdR2/FLbnjmbmCOVSqinHNjB9Fy9vrRgmBr9llcY5+HH/T33+ESjP1QQcA7vBBqeTUyV1fnnu6GcSmurRXS25whO2/EGoSoXZ1EB9Y9CocDu0MD5SCpzCdXma8rKsCAg1IEK2K4oTzHIkHXUwhdPwkL7QAhmnypv1OljYu+rSVL1WUTJMKS4qYS8G7QnZL/dRggtTyUbYDpBpwI3kSajWUoE5SAwbPBWaY4HsoRxfFkE8OF67rtXiEXeOgowjXEfqCCg8fA5t0nvyXsQ3OR93PaZSIbF8lylvphI5jCcXjK47IgGv9CllY2njLlf44L4hgu5rRATKVDOwkkfl6moH3l6C5nkHVTeAfvC/lV4GoXiG8K8IZGrHtvo6RvAUO/n8UOHZ6YPxg1OSg6a5r2wb2J+1WfvxZtvNHmF73ZNsdN1wKSCEU4pqrwZzdqwUyphQNL/wpu880uwgM4vGMimW+iWbUs8yB1Ql0wnv5UCReCI/OFW7tndjVi15Fb3pZ80Mtl2+rwyXf7F7i5t+PtQrfq8+1G+jNX+KNXUugCz+17H9+xibOTbiXNR+HXJ4qgXK6IpROQaNex4kQg+VX0GY/FAe5dtaenGGouFCn98ntg24FwuXiXNJIlEudye5FWY99hDFKmU2sa355kgGAztrVFRbK88+EBbvnIv0erzCNO3BBgldxS1jZS1+tHKTxnrtdOBp+pRSCSWj9ZBbar+trF+VjXJ/r4VyOoLGACK7ATkW7bHw3yVlmEYlgyPKtMvSXUYwYnDotovv3KSQwiZZ6nchlkDHUiO+3LgiWR/jNnFo3fETqXqkN",
"P+rF+fa0+Siy9GsUJSIoBiyZBO913th7fzOsGr3CUfd3BgOslxcshL01BIemK3IBpFToHx3aAZq1NNldtlwFhEUdVbGu1WMF7nm0BY28YdGs95K8m3fcJbk7Aum70ol1avjSA8GZGvOS/nQ9U4BO2QTrKi45gOm80iXtMRPRKBqWmi72nCoaGpKQZSz9YN2S+2cz7/j3CaBHHtVfdiUgTrUNXExzx0Xo5xg2IW11OFHltHx473n8vbsDRIW5Q+EnFAC1wO2/rN+tXwy2NElpW82v/BqqT+YgIbkkuINDuDERqcBMr487ruPYjGFgMr2HFk8lw7fXO5RgrffalWqfpBc0k10Djz/uIT3ByKJyM+JRMrmshAoG5jU4EYHUmZ/VvvPeDV+b9kJNuevOgR/TkGxeiI43VtBQOPUGlASZZruPpP5h5nG0eNrFFSeIAGXI6yU6MtNcM3WjJSa+c9dOLVSvexcDAEcr4sxJiHqaipPTcKEmfqIkeh7a1iYAgu38LZzNa67E5xA5MJbEEadNaU0qBhbvnYFwwZMiZLboTza7D/wYu8tk6nahtM8Ei7Nba07pqMbJXwNOFFS+ijziBn5+RRm2+7vNIqpzPHoZl0aMOrFCnm0aOdNWLTRi82sdvLFJDsedS/BWsTv7RNZSoHeCcrmnKyn/Npys3lbAA9zS29GE1RBH0gagTUnppTT7POKgQkOu8zigebOs4KURCdxzek1NfjeUkTemXUsWIYJQcHMdicp580Xo5DQPfxpecFydD03ICLxiA/WJtLZfQNRVt5C0SaO+CliixCxqwakYfh+EGbihrBSNrad9XIkIgshsrf7mkXWyt2vYB5ho8aNCwOxn6GaTuUoLwsNqYBK9feqDn/R6UkYJPOG1u5LVtxiPmrJEVN2rcYga7wyWzJHkbLbu8bSGkli+BYQWMnE7R0Y5R06nSc4hTaKahJKPAQXD/vzbHeDykw/+jAQ9zdbKxbafRhzMjWU2HDEoFOUaI0A0FKFTiat9ga4l3vFVNw/Nd9k/AcTvE2Q90o+M3WdsVElZV6cdcgA0T3XoNF69k5GxroWmilKW+TY3xxJUnxh0qmV1wcCLvL1Wq3ohaUsl8sG7cGxPFnXK6pwR53dIJtF6Q3AVJYUTN2WgPBFgiRjk7oDMI/QNiNI2QwBoHV8m/Sd/nGhezzev5jA7YKAN6b1S/hKiYDKiDn5NPKLZPiM6aSm4GGJu5Uz8DzNOdrU95qlc5a1Hk2T22fLF4e9vhehxZ7sMwNdd+v0MAOlTvkFqFQtexqvha0zYDF+I2cngw4d9w61K0y+IZFVCLp2JJPdTLBKiDdBpF4YWzLJkIqN5NQzgTL2iUjwa6oObpri4InbNYK77QgIY1vxSJbIw9wuQC1wiZ7dcZWPhnEVrJ6uMxVjUrou1jCJEZsfMc9wrSeZpErNVIQHNoqt++xwx2C3Fz7XRYvcAGQti66Sr8chopoLgisXZ7jopg/jidjivkUGVmTGFYh+40oeruBwODp0AjCaQbcNZ5ha6vGWQj6ZtDesfyVeUU1h0Gm//MCNT7GlXEUE0LVArbZHlxQtKcHqRidlyHNXS4gEc/Bl7MBQ8YpzjP3SBC6BI9qeyAtakK2T62A6uSl5YVirriSAep+xMIp5QOBi4u3lUYmdn7wjjWvrAqTlORz5Alah8B3/yBtSDMjjQ/5vNv+5k6VoR+cbmoJu0BR+SVT8YTNlOomUMjPmjTcU9QkYUAUvFjyyS9pAI77q9ifTj5jhcRx6CZ0+tMNmNkMEXz432uro29mHHImvlGf1/2dMyX+2JrCHhWlI4wCFco25o84E1QPfTDYPLJQjuHiLJatuYX65RriUM63P5nA7Fa1gp5dSTKaavtLWwO34Px5oQEDw55b/TheKkEa9jg0oiUpDOfyLV4lQw0iGMHjDBF4F1RMmbyT+EFrehRwbA3UXGOqmFyZToNgSM57WLakIwzgmPv02AGEosWF0hZfG8LrcI",
"8c4TcKXweOc7zV4jKC0aXQ9LZidSsALV9NcOd1Xq7KEstU/Kufj6t0RsC6JDfgSQKDKZzUYpNk/NVxUf9NY1MGJwRzMWHsatUsRcx9vI7D810BgzDFxQnFknnuFrkJx4/zLg3EzYlmowXUXjQ2FTVDLewm+bp5X2pwxeexrBNFoYJX1UBcyla968m3FhcfLMHvDD5ed3Jp+dZSV8GwzrQSDD5924WifhEENxOrI8gvedBIuiVLx20T4huH4LGmDLb+3mOD7ENIf/Lo7G56xry29lDG/f1uR6RzI4EwDwjCQN2d+Nw2MkFrpr5Abb8ViTzc5Y0PBjsYb6xmyiy34MriKP3Euhl0jziErs///Rk4rTJ7dqaousNIDd6K3/F8u7CpzEckdrTVxYuATAD28rZ25XFM+4m4QmAkT69AiYtnZnEFU1hMc1Fo9Gi/sfPGju+MRQrXZUnQv4qfwV4ZSZIUxCyOY+NdHHuIpw4e4+E97tPVkYB47wXbnMN5Fqkl3MnqM8KJct7nbcbEALgLlUaNDiK75k0lAVdCX4OzzUctlNnU5RdW94rOJ3oQHfS4XRd41br1R7KjuZPv903dXNPwL3XQ1EgRSUSS5ei9RrSQV2zeg+foPMzXEKaMwkYbMn9aLjHGNInDH9g+Ws+KE3Siega/mv9XmjolHVLoMU8aK3t10162FLFXi+K7NoqM7rLs+Xs7edFQDio9azt2efwfyqB+CQbBHNTkp+sIxf1LC1wYgtIdzudc/XXe21eslyZffO1dqDgVbA5pFxxMdgMZJN+ejQMAANvLNfzRSyvCEwR2/i46UnXSdG+JqhB9H4u1lQxO8TAetWb1rfnLLt0G4T1np3ko++Shwdo01h2vclEXR9bVbM3edwAyZD2pKKneNKUXpW8004brPvCNgv0kPZFqK7hMzkK6SpfRiq8oaDjOcVLe+Xd25akCnngyE5bSD3/WDd37ngzrN6lGBDgBd6Yx56mmzCyMrs7HlCFFHKZd3md2nyoNiZl2EhwTTVCTS/gP6Vomcy9MV3/nb43q27aCvc7LlKWt1VKWii/C1v6JzASLacALrrEC3eq8fI6Y/e3AN/A02/Ap+iigzMaAZDavBejFABzOrFj3uemAt8pee12PaQjZ6iUUzmZI0bxT8XPfOdjl4ocU+hLQ7ze49VXEIsmhdSsNzOs7O1q/5az2x+Y3B62RIxzpIWzydhEC2XS7jFrK+kPI8yE+eyCq1qiPPEh2RgJ101mCYyBXg58/7jEqbCLKlTZDGJOAHiC3ouAzSACeZhypdRar7t+HUAUkbpB8yLcPAG8ydZd4fYqzWfP8ciOnfdM0xr70EUClgoWv2e7Koo8zQyOLXmsziu2RoiIQz6jfAxZYoQgHfkjsZJtFwwYNX+otXsmOFB4yHJc11uuQTk1p8KKCpnSflA46dtm89+twJDsimpQN6KLn8ZQi/3iFExcyNnY4xgu2jpmWD73yXcXysK0ggl11GbqLt2RYYNN2DURD9Zj4b1y6vlp39JH5bBtfJlFoM4sykqZIzdaFRCLmHfrKfSumrL2i6Qk5d1ZDuH+CBbeFz6M845gZl51FhOP8/lkqLMPOfpsqJkxy1s75tBxcYp0Ic94rxwHJEs0x5NKaoR9Q6IUVOJ5U7RL77kSG7HZzE6+dIImUpvbbTN2LbuMM7aKtirBPlRC9OwiYnPBQQGGWh3v5xLST2S4Kb8OV2bhUUk80o45Yz9ea4sZGueBvBWEG0dGj9Td4a33EEkXgtIOZyieulXClTJ57EANETeTCSADHtB10aBRpKPJ9+58kvSAXKvNGwvDCbNBFd+vaxFas1ikhnO1lZNkeYYStOiY3sB5zUeeeqjhMD1WRw85nQU75AUFnQIoeuBv9+ahZM6dKTxG2uYYXo+uoQagDhomF+5Z2ZOlvf2TMRmYakt56/jIYMk8AYSjlN4VB3IsrJsUnWvUs2tdC26gKb/FrTFKRCvdmklm44PSW5XXDT+",
"74xQYp16T5YcnfXM+73zVerfXBz/iTLObJaDxx7rZTxHXOx34b/FjFRWei949XrArsPA9ufSDaDZGSCxA5VGZpa5IRnjWTyIUDwbu0P0+qOeLBlkiWoIY4jwRneFomQOHHd+GzE/Z5iToioa/SXSgCP+EMs7SdgYSxFZSEzedf67H+j1LmOio4ftMpgO0G72pVxS2ItlKk5wLpMxFIImkMtm4TfzBKVf0km4VWf+jbGHhnhirAQkdC+E0FcZojXVNAevSjTPjuA34nBpQYdS77oHHKjKtDYPzmu1yugsIFct2Q2Cxpil3VQtKtQwJWI3do5iQF0q8lb+TfPtDFJML21/GpbpH7BHU6s1uzr3B5kRdYGe72fOi0OKstbwGFGJZPH4C891KnHMY0VHvJw9Z/Lg3I6pU0jIf/vQVkgT0Ll+bxbhtblShJodAtGu2Q4r8t1VjT2B5jZl1PIjDxTB/VF++qXoFr5msPVRaASZ6KJOKc/kYkHYNvghLh3Ps0u0tX6QFdzkZjLg1GI4CLxB5rG3cDe9bpU3egnh4dpMfoql/p6fYeDCxwmP3bmWWAjkzrwDqiw03+Z2rvdUsbihCMb0Bbfjnrb3FHldzE4AdOVHCn/rLh3XEwfSpJdHhYZifiFAIWwywXmzQgJXquq+YpSfnUB3OInATj0J4/xcGHY625EnAwK7J0rf8KF9Rl1Io3CRJG3wItcDe26+tgAkqCGZ1+ahsC9xX32TJmsgc3S3XlbYOAVKp01JDkklAF/04EFt0cjtfmOETp1un8RZ1hbl4olnwmirlE7tFNEGn/oAwg57YFBEAIawswscM0YPgWdD19AWuc27Td4QJlIndkdIMg/bITGaZzw1PDc69FrPzz/okC8obYna/EoL2YOM1Q6H7TsvfNm8sJBgSuDCKKEDEb90F6UliWdz7CGl+s2W6GeQrVu9b8fCQFu48gsSJw2XAnmOOXbFCWsAdiz3hDfG2KWpaortnqWNjUjDhpzwiof8P+b4SzM3gIEcJaLTNsxIxXirBlOfJEYY0pmEjFIl5mpw1FKL0XlAEQGYbNtd8I8C3zItz5Gw9LLh+iOPeUvhpr8d4MDLGbza4loIB3ZGBt7lR9LrcYwvEqFXiN7FFF1O/UIoiGum2gYme3PoygwmCgU+cx8+kP7+eW+FDbx17O5uXh3aVPcDU3U4YP73GVFtVNQX0OHbbIOLA/+RjowQjjYObS/X4UG/l95Lu1aTeRyHNXeUPEMNN5jlyQ2LcSF3efvYhGD03+dWM+Uxp1YvU0bwDSXV5zzMgaNmlF2KxgJtKEnEZq3MySlkYfQaUo/s7StFbuz91XNo2tYv6Kq2b6bhOaD9JChdpf7BvqfileI4/wlIC4tcRSSEIAu/h7F0GDKjhrJDiMMWpbtJNksCohugnkUBBNfqHcl0oqmIfhEkPTAdGgNEqN8mfn9M2Tqr95GeulcP5v+tvlYpsJJeITLqsPViMYedXQkcuxj42eYEShB3z0oiJyMU32gznHG1/n9H3gy04hK1lHBHPypTD3yi3I7/rF+eyz+nx6k9JcKVBIlRLnFEBaWmUNZeYNjzdsjHh1hoFJ21nwoFEZrdHFDwqysXJsnFg6587u0w8IjEiOyMmT9WdW5SAvTGhqoZ/o/uVV7QxknxdUzsldwnAkry/YMl+aordVP+tGY+hTnz8Xn+eldX/2w/7626CqBPQMwU/jkN6tIX16qwfyBT63EFmdFcn7eiC5l4i64HfXPRZbBKsPokjSY4oIXALm74Vt3nTC3KULy4RTasTtfk0A6t5yFkbso4SoDR7e/P+ddkZoocHvS5U8/kw/3Ibf5Ixwk+6Lb1/7YXN24wZU3wwNGQoC0YwQ1t6BzhL2qwqYNIChn6iktPeUBqjjAayNN9po0aS027tUBMniiIWfOtWlVEuv3dHKNTpjslEOoE+/Yo9P7RcyAG/5RK+NzkKlCqkuUjOgjlDGb55aOXhLvq2VupNEhSTZi6",
"VQar1lymIhJHHHBMpy0E6FJMk1EysuuQWn4+D2tRt1K20l/8nWI3l81Ixhx4P9sufw7oz+wbtyTKiUMZjhDXJugbNygtTgWzIORnGE5lNB+LGrf7XbQDpzj4QMzNIP5v/2/RD6b1Ce81miO1nCPsWgXZIwoGpsLAgWKhqMWuDn6nqLQnUsmIlBjC9mtvyRD5rMunKVINDsHoLhbb7AIZ5PiOBlwWEPq1KKnnHtRjetMl1es1BmEZSBlSRXdX0kZi628+T6seTjoRcL+IHDEVKqaufI173F1I3xECv8cdop99DnEmwHLNkSvUNLBhxNA4X6CUEOQk3ErffOafeoK8udTJvxasSqmw0dr49IluTI2ye4CF+Iba71gxH8AZyyyyhuGR1/koaG5vKRQMNkBw/6bAiuHgeXZn166SiksIw5AXUCwZxChjbWxluR1EvXOmKAIaOevEvUp3jqs4FR56nh9x8mwX01ocpTv8eTfThKhQBS/TuBKslNYh5fGRAkbHCWn66EzHEu+o8cdEq5f8PN5CUAddFinAKfdLKceLRmyt9q5ju2krVdNRq4jrvN/jU1Lw99g9N8coC8etrnx09Hz+bo/cf2OEh+Um3EmK3mlny3XOrLkyReFk8z57UWWVgHQzkPe3ieR3+eblZmSzxoZtQcX9ighZMLPWrWmIEfqjrzsHAXmsNZn6v6a1OQwFHeHr0zbORvO0a00ZzD1Fwp46o0usL5ktuu/pfEbncCzRdsNX+M6ntZwVFTBtfB4Gvteqy5+vi+s03gynzuMRHICkqlBs2Yn2sx/aQBA79YTMSwx2H/k3c4WaTXG1KLi0wgUT0JIGykRC9NBCWH+Uf7guAQGPKg3ZRA1Tfx7LwXgjICd9ufwXMAZfJYWV8CwoZoN3WPEQ5W2yckeOZX61HiQvO0OV1yUIv9XXFphc68HsjLnyPpO2aMgUONdDoIAfth6isw9GXhJWVtHbMHavzyjy/a0pyJdcyo2gj8Vxql5dk4LEFuHB3EqAT+yM75acUNLcvEYiXM9ZR0cEv2tjWoniymvC1z0M96yrunBTsaPQ7hAIvbh9LTFhrvCpNsVM8gIHLlGoXGpVSUnYzbPIN51cWCjoVDe/PIPHcQ5zzj/6KB/hCyyewdbwO2KmtwdM4ULhZxSMI9WrxIa6LMvUMIZUt1x3dLO9FSNzYGIOr+4Ld2m9Uc5LX/3BmiL+ndBinb+NlwtN2zTjxxAhT1NmWQJOgmj9IaBiWERJKM9nkUa2VlnkWjod2LWGphxnMHMXfzJVMH+5hlZ5f/tKZFcMUVFgFEEjvLFavzdqva5vGQVDfZl/8+JtQuX14kiasFWSkP3OuqgP5VYzC8YSutx6VCLEc56Sw2MXsW2+rIQpKwLyaaXeFxTbG7ysXihkhmKyVA8RIxGahVgjhkNCwAluRkBUvHaMfwkHWrfTuu7Qg89O8Gk0rK8bfGeX2DEhHCp24qtPt54I8cGjo31vfdBCKkWfIVDqsdkxpEgvcOrv/YwMQPbMO6//4/zidPOG2bxbGHZQtRwT5NJDCPi5EBj7lzwOZQXfEPayRTS1muj2FNwOlCytVx/AIxlbiEk4r9qcKQNS9lRBTXM2YrJjgIUE1uXGMWliEH4FzQ7tUkGLqWQSd8EUTF3xy8NbnGLZRS9W+oFy6cCykO7s4DTuY7hlqmn8StJ5Qdz8wrJqaunSFCZ0EQYc2vJvnR6HprqYO8cS4IL2YOtlfKFLTbdvTAM37xcmGf5DE+3dOOWbTnyWQW8fhwvz6YTDP1oaM6XipBwPTFyKQY9Wr10SjgyR/uboS4hlViSUw/C8GE9o5PjGz9vRIb5lpjhOPlKFLh4LoCtatQN7K5WwhJnnp8nfagwoaT6qkjGfxcf1aVHLHj5SoryCePXpQKKqeBnC2i/65PRScMgO/fD4Ss+BpW4ZtBxNoyEJ8iidCsEPto6lG/OJW/4x1q2Sz4ofCM9xl9+udUEXp+qIZhKeroWct0bB",
"ioICfMfuK4ZCysUR2U3gXCqXfJc04So60IVqF3UjadfSG3aJ71so6oUKoYzpskGLh5Jqd7Fa6xWnD4KkxGaEni4JxeWwKRMl1TG9FlJMn/5uLv4BFr3Db4dWd5euk8O7L8EnO3v4hT7ZkfKExMHligoxOOFZ9NRKQYXAwsHcqK0Sg7HrccTR5Gev/R8GfxIZD6LGfSq0dWMndQ843/h0A7eEECMsndygOiV7rzjWo+ehlM4bJdT48O/ZTDcD4MuElG75EjYHFIIhG6+KkPrr+fYd/vXIxq9h/ujlT3S7HrYFz71K81t6AV1FT3d5WltFSKSW8DefGYVcDmnnMVbYLmho2c6eYdVyEfNvBNFReNru8mTPMezetSRgT0NtLFW03kRVMhN1N0NF2+uba3VbDLwa7M0eLwWGjioFB6PUjTcRDbg+nab3bn2RkmfzPwBilR3OISUTXTTvj4jPd38gi3ecUS28hvaf9tfyj+NEEjEgVIf8wp8CTcpaZnPzsyw1ijhSWCzasI3no+LHruEcV1CyqAwVKdfMb7ylmCixSBu+i5OCRzRM5w/otRxHVL+Qn/UMtLwiFkdGzalRPRZqPz2p9T+zWDKSS+DnfDIzHWQeb1t6XbmZuZuaqDMt66+KYuX3/WU3xiRDXUk9A9VCFJ89C56noY6UhgpZeisiSqi2FyJ9HTKaucMamQMqteiRPhvtBO/ADTH3DjtK5P6UNBjxLokNqB6+QykKSL6LetWN8EMaQh2w2pXr52k6EliW7DBcWk7ydAEj1YAOktF6h/Zt7ici/wwrqOW5gpAWxUtfvdymybRayG6c+vPP57nZJVck5guc7stpQBQizes4yx2oOGqJIFm9StaUfVJ80Jv9Y+5J06bqVJ5fVkoCbkruhEQ2tGLNYSaQ8CImM/cmibBJkfZVva0vAmewcyCHJq5Ro68e/qAud/pqX1vm7jT1SRqDlZk3qfhi/OAgKks9g4TtobNtqhNUGHqSmWITOLA7zFhbLe4n1FZ75WTPFQQZGuIwy9YtjVfY5Vz31YsayRH+Lh5Ct4uuODa063a6JZ+yRP6iLOpTTej+Ei6Bkg+22kUfzqheXrLix2zhPaRCo5+ztn6D+QUiVkeHQIw/FSKep201hGr5Yesvbs8JEVCslM0JNss7ScEA3y+NfztzN4KAe0IoTUaw5qnX+xD8cknWxkW2L8SjppaeTI3bjrMYhNlH3x5+PFVknin0qzVHaKSxffJLORfORvdLtjMiSzQuogHXgGLcL/a2ngJnj/IJbZE9Z7s4VIEtZJJ7c+XIdCPKy+JfEkCmLXrIiISOy+IjtDOlH/L1i9bp5D+DCsuNQbOTbrMtBrI3ktG0D3kUgXabdKJ33bFJHmKUXgd2qKgcNDmxWAIMq3vhM7uFNxgHxuN6UeKlWzWbBuIfmSlXY9Dlzr105cCzWW3QyDTyRWHmNYgGhVlS2GjwTof2jLLmps3lWaAAFvF1o8lPZG3ec0CG0vaYFmobFbBA/Ra1BrSLcBZGbWpZy4VvqjAG0zug0nkrJIQYZPef3Gix2u1K3EurCrz2Ckn6gX0S1P2wY2FmDNQkNUNiFzWS6e5JsQc/dzMKLdUXPBmS/5iz1MO0qqKPqe+7btbeKTyRpRZVWVFEnSJUKHGSmca5CFgxAlP7Jfj0XxKK3aclr+qM3HK8BwRRbmEyq+J6AbNSs8Nk8WsAV5/6CsicxhCq5GqE9Oy8TkZSj3aXJEMgQtT4pFSNiorYVYQL67608lhE80WG8u2LoKjogdeNdEDYx+1zFH8yH5Xij/ZODnMr4KmASqA206ZoCQWetukrTDHSlpV/OrhyVWPe4Hh0iDIJc/rFrv75yhDNKyOdusPHnFyIR10O+mpYNNblLu/9JAKLVu+tiC78DE3BUE7ZzvxOz8isqV0fFQNej0kCKOP46g9O2JBu0Z39mtjkVwLhJf2Vuegw2fvOPaGJCHptafIyqEVYsCIRpSNF1WDSRTWPLuPn",
"npmzG5e4Ikh1qwrBKAUBjw07KgHzIVk6orFgYEK7Kvu6UX+aMnfdLfq8BUS/f41Dnfvrz1WmefwmxYhHit/tuQkvVG5BB567CHIcWsuJMI+8VeumyXA2Kh6nnQkl1vyZKvtn92Fnx/7FffXepaZ9/QN3wVowtkXFeCF3gb9clk8NPpMcga0KzPXeqCrk4yg2fz3cQqM9lUE87qInGn2AJvWISUGhXyloy3tlBHimJXo4oNZMrBhdDJKjKE+xYTUpOX49jdHQOF3lRlEHtWz754QwK8lVgwTwTKGKe4z5IiDg5p7dkBebqrMUJDSEdBO3aPm6u3pctqrAwwj79KbuihbG55M58Rc2Y5v7xslRtozUf5lFgsmC6tu1ZTJnNb4E3WiGXt8jqlrjwexqWcgRr6/NUi0blJmtezk5G+GCRBq/7BhyfE9Y11MIHwS8X9JtDjhrfCdzo2zlcci3Nu3Y7mjJuvc4dgMkArYLu03jJ3BImaLjk573LAKVdPpMY9SM9lypcDnqJeUEwFacfEMQngCkW87AZrlt5fK41mL0DlQaEhmiPpFGAF0Z5E6tDlh3C1CbC8S/0c1rHk3pJQOFOLq++bS82nBUzBL+Ni1Pavj8id3XXlhP07+xzEkn0E/xovDzi8UhKw25Xw0ov9O1EXKMQUFkaMlJNkTvutf46NMN2s+Di26p08QhrQ+y/zwZ5T6WMUCvdQ0OyGCJfyESihmzM8Hs05vckNn2ODAOUgvRTXjEpTE83nDT7akx7VXV0znTYR+/I4lY7EYBnNzRQWacWPkYT6fRBGik+9u+vj7uhxArU+jo4xNZpqlAZrF5iTck/kNdh2egoKlnRLiiTmL+OQdEOCb+SVwaOqJB899bvD1OU/FmreQ5BAS4Ki+1Ppf113XBYNmz/AJTrAlCks54HKWcqaEW3z1323yfRh+brg9cOm8mDWog07VAT2iK0uvMsvbtGPkMVjN4nhogXqv/RBTFfgGz6jVcWgL3TzQH8Gd48ehkvqkj7KWYQCwrSQmK16NvYB69RhTzpNxfVFHH0DJH8IT9fxLqAVHJfcggW5m3Xpab7oCEzK3ad9Ub//eCRzF0CGbvrtt2STt2FG7Jid0xiU2AtNvXnkxug/IJUZhNC0xH38mVLVK+20iJozXrFrkp4uRs/l3wBt3bkQWhWaKHlCsJnUV2WULykLZbStviW6hXxOLBnrfrAGAMe5EIDu/1jnMLbEFjrTe+qpgBODglgbONBVilbE+gJQ+5ktnh67eOR4m5EOxCMaqmlAlDaZXxQEj+dG9Uda/jNeS9/tMsvqnSkKfP5UJkzC7mYqrYdxTDRWA3aVBuoV5UoqKkt/xf8b0Hcxk3ASATqITY1mbxFC1A3pxui78T41WGnghmFhD93IlKKGvsEfR3tn0hx63ZJtw3KzLtkcyFkiSD8eCg10p7rpL6mbVlnSPcStO2pqFQlhAQeDwegkW6xH4yik0KhPySLgd6yHYqUReAekft7mj3iYnk/2vsu3ql4rHTp3fnxkdRxR3xxYluUQZjsXVt9fsoK1EtzbBqz+BL2INq5YQIiXL0X6md9Oun0hR6+3mGy2x77H+beVbaOgIZi8y4vkV/7gPRFnhGfjGX8MYWiQuAy4MWw23BQWwhNicCwSe4S6JctYjZ7z/hnYkVg5cpzhBfL8rMa9/rlRCdbsmvDU9Mdy24CTa5wk8hh2m1Dv2ZznQiOh23ahlbwwQdlnhx9cyegozvTE8iZDYJcdUmmDel9JmIYVSqoL0pws6un/p8gYAGPMbwb6vERfyMT2qUo3tYDK6dAb3sFC/FOaaAfD41HkWv3Wps1s23H+9Es7oX4DDc+QBJOhMGFp97tk4aMoUYN+rFCZXUhP4v06IW9+NIyOBCKWlyi3M18VdMA2gVlW6gauQK2LhxzFkO0S9UhYQfmAoYtlRaf0KXxWhZDaEzuAYuiwpinGm9CawtiVGLl0/oinDBDd5355WVktdmqJG01Mk1",
"/LfntYNh2x2yK+cnRm9KAPCjpXpv9RpWspiPXxp0KoV7a7jPqONV1VXMva0FPZ9FQ5D32rNvvW3ruc//X9+pplBGrAdl0zuNhmDzWXSi8Q9zUm/sz75e8tggBSHhBWacmr6Ayyx9szHIDiCfyjC7scPUYMxj78qB0Op3ZsYeJMUTsr6WoqdidmtbTbqO9ngtb/Ir19qcvfo+cModDlTtZinngCXP9z8PrlgJBdGsj+rqe7T1reFTpPF8PSU1fVca+Y6h9+aZ5VEsNbuO5z+I/80KCN90OmR3CTNUrwQEaYI9gY7PcnfKNxVSgJe4Z1HXeoswrRzc4UBET9hfpU42JEGoo7OBTlfA8+2oDLI/2ZPAe2yDvqMJXNySqLB+7P7BR9SanON06hlWoI3XCkRceXzy47Pz55/fUuLJUT+MjnCxO/27asTImk6TEGoFhOCW5d2yWjiCtvI6zPqC4y6wsetmx2Ioy36TnSw9zsyz1m6/n7saWj6VexSj65kYsWUcdS/R7bB7YsB3dmMLNMWLVB8l80KfRGAl6tXM/X80MWwL4zu3igzn5npwo7HEI9imPCVooCuPeSKes4WLGH7ibl39GFuQRDaGpTwzAL9FwBJiNWeGhNjoZfaZIYerNxkmb0j5d6f63dnm1rYU0KmJC4hMboyqGOq8P5Q52JVJsFMhC6/Gl32zi3CTcQFlyqaHLsJEZB3ZgFwfi2RLHGPAuqnZBrEXZabiUMZ92lnI4wkKt23gx2A7Lwla/Sl8Z0+z+9SrNyjK0bEWRtAyInZFCc9I1iIWnOC3OOVb9zdNrse6IQKvBpvsWMBHxNnGPjUgf1hWoNv3IBz559xaqcDKf5Xb6mPtyH9YJNqDz746foQltE0CDx7fW4KIGFM2K/+g9DGigNny2dTKTjtrm+3e0LeoxvKwO4OdkHdpRMmrJZE3PuxnFYBw438CGtSAkqbuawlv7gcujkwmjblrOue8I8HrKE4AZol3JQu8TGg9stE6AOR/AxBXhcH2423NEXyoeVH4jHTF+MvL4SIo9D497jKNuFFRgPEX4OCesyTYgWJb59Ut5DLv80hOTJ3jc8M+QM5ixxUiIJpepHH0McGTUpEPLqiGOn+nn8+TVaPRMNbkBHeIoYlQnKav32MTxtR9nkMQtPbo6ea0O0YA23OG9lM6bXBjz7DDAE60InNfY5Yzxrx42lUEHuDx5Ktvp/1y+on3bO+FlW2J4qH8ixCAXDav4TBnHhckb/zQZ+bahtmWVpOSul+kcbgZuAw+AKllXEMwh+c+KlalKBw0khbVTRu+OHuRbGSh7PqzACLfWc7VH9U1d0mPLayNcHUdY4ru+Gh9PORIMsWv1c+tsc1pRwmUOU2e6khmfVmS2p+/UY+Mh8VRBSAx0330tUruCrFCGA0vSgWV78vC0k/6gsyq/lSXOlhwAsatfrnafvCn8mhweG8ZuxnKTYWN744BXY2GX0Bqh/SucV7AtpR9xWOr15VjsQv1uSpEjn3bgtKrcx7SA2rVXY1PgDluTvKLs1XLFGAjXln1QuQDm7PdDowKN0TrcvgstePXm4imXZHFQ9mrA/PRg0amg6zwum3TiO87KPIXT93NysLaBkAnmp3tiiVhLUjy9JR/1ld7L3TUs3H0Ztz5784tS5exuOw758la4EAmkJrHJYKUOUGNsHNJIC1HYzFM/ztDjhD5GosT/JhdGp7msd7gHFJcxh4PcmWTyP0CvhoidWLOvlFUMTxWQCrNdEtM7qgI0pCNXZQEfpXU2iPCQllkb1apaMva6WZamf0y8Ejo0xGwY4MzWq00NfBZNb+VfwhgeCzntaGahN1f6n6r7hE4zaLSRxU1NKR5P79Dshg7mvercf8YdwrJEiFHV6WygAW0RueAYKNhnx9XceScqkofJ/ZJHWka6+HgurtgLADGAoA8rmOcBT18E7isNDwaORa2PrpJ2sp+FkrF0JZWtJdDqgOMKgCvZhWLCcCEPx7epcwymcbX",
"SoCilP1V4s9fpYQyyGjUaMfy/feaEqRY4dJbYvYi5bL79KIx2Vet/+mDHfMKl65Y6j4FJKjb45pFpx86V0eFow/UvyRq+5gNlEHeA3jBim6tOADVQ23/JknnyTdtUShJtfNPcSEz0oQhsB3YLbU/+vHE6eU781SbQ5HvVV6Z1uUb0ZWGag/iN4XwaOIwBpH3weUf1faw8qDU2iiyGBRjs9TWvD/l2jVfYrnGpeV8pCbUsp9jXnuBEiAex6kiWBfFQXaW9AJ//FxGasPERBFwzTUlkbX3fvm4YDzsE39iMYFr75pYnCnbWxm3MiS+VrAWQlQNm76hki1WguvLHePyryREzO4Xo6P96/n5nNUKORvQAi637JH9Ue7b7m8fQdtYzFy9qAv5YAjbEOKw1LLa4SZJtmusaA0dKwZ1FnNSBZaC2iAM1AwHaSAJa6LxM2KkKZXyNz1GVZNWZCYXKPVpS+TViJ4omgBrBQgW8IEwaNmqtSECNRv6n880/F21sU4QwirkbGbcHmB3eHj59jJiSXNGql0emEKhZlrWKfevakrz6XSWhdyLvJKeyKECqRTnR5z2zL6Pkq3TfPoTpXbWKNkW0yLT+TXIx1xXWE/J+BK68eel2bRyrMogM+A9x1TUNqr37xH7qWTxi0S/JJrI+Pv5adHzqRrYASnkN5ciHe76DxZ0l3WBMz1bd+2hwFLJkoU+GokJXTTC10u9wB3yKDOWIwCW3U+7zun3oLsweLsZ/3HOARZAiI1SNzFMg6lPuh5mdXB5PYou8yJIxzSqwTLSxA3hhaqJMUzYGjJ2k5mcexxgnv57qA7m0nEJa+ewpDbqqzJq5+CCPSewZ2jH6SA9+rHH4nt6BNVr1EVpSWu0dy88RTW95hpyLU5NitpDVyxUDZjlEj4ulo81G5mPIAEQ7LrBjgNsHbwdejS6dEK7FDBzDsAMHg4FNob5PkfGivhiqOj+zB+eEFHWsni3y4serJxL2lcx9Va3Y5s+Wt5DnYN32xeNbr4u9aXSsbrEKeEIJi+7pp0+EZrZwV/xnZ8cOucPSoOM9BODQjYykLfok7UHLd7HL3A2q65nb34zgfQBylMnJeXnjVUDelKFjdLSu9BFQqcfoXtHiQ7NGrFvkzT6PS0vggdHXecu8cDScGei3hXUfbEzabG69HIiDT3R+w/Y51R+95ZI8V99BEJ4YC+Dh2n7mmNG7Nei9d/sheSZXVugAbu6UC6Wflht41x4P9jK4F7UWAUHii0xJ3blVMwg3voJJ52yvwiLemZ+cnxpGOONl5VDeuhjcs5oX3046kELkggBSPAPiKAqpNE6vF/Hw6536MUp0rLh4jfHbZcTo3xh6aACloL0yi9SrhrxLuf1oa+hyQI7oriNA08Dxqc8VK1JMW0oXC59No/L0cJeQAsrzpES3V/BtWVNotW41Zyc/13lo1l+BXVp0CEfqBCuqOlf1d98xcEpKFXsOzx7rE2Wkld8nIeBEzzCrlsbhrsuNsidjw+AU/cXVHJSS7GOKxtfSmz044Q1g89gxs5sx80awm+KyFa46h8pDLuoX2JLbfunk2CigoDRhhC0tNSskdJ1n24lFIqTf6GjwQ6uyI/wAJZ3skfWuqc8A7IQCNLJWgEiBIc01Xcg6gOHCkRwAeypTuAXN0QyxThWxWGdw7JBX91OexAx4FS0kcNJYYi+1LDFfGv77jfVQRYAsmHCX/8Vo3PITp1VRAq324PbuELZdDT8eIZTmS2IzB5C6O5pO9Z7MXZaAhqsK85/gHhMdyn9ggWYeZ8fWlq2A7IexfkK54gkhcll/EaUlwJTOq5W3yzfUPelpMDqLcNWTOL+zIT4b7pfUshg3UaLhIKoS7s9TyTuuJJY4MEvU7pmzRnD5Cros/HZHQQeR4ceutmUPIS/OdLC1bxo6Pf6jIYToRuPJ4tqgLLdsrUbeYgESW5taoJ188Pin357wiCpVQp1cJ4TZT7HVMd5xhUD6hTSNMUl28RA6HRA",
"p1rBdTMMLUo3JVgqefbweCZHJFbXDnpTiLmNiibTXtvE113Mho8lumCeb2SbVLeAtla/SOIoJBanJoHc/HF9rJY+6amzikmGQ/K2VlWZkryZVlOvU2geducNS3kzrsDtQ6R6HdhuShYs+LALBEQgZQpTwnztKN7F62008kRVjhittWl1adeaqcgNbQUMlUj/nthWTUvzAyolDe62QyuPjTVqYZ+/OqKTbpw/TNcT8ksUCQudjW4TVVgNwMUW5z4gc3p4dAwbmtU5xMhvDiTyGeqc/5uF0ZzgW7u9ZPMTORQJZvzMl6A/F19Sn9KvbwJMry0PA1tF5pfHFxDZiXccvC19Ba00Vdp0kwWrm3mgTdmy7Tjowui+E3VSuYJNPyU0q6DchHtD4UGtm42Xz3zyGmKi0tv24dnY2rP1rNf17d6qz9OI8235U1C1l7N2nvc8He/ZV9us1GcNDctapQee23sGFXWysYUjop5r3nn9F/2bO3u4YYmE557GdbXEcztnf9v+qg6WPZP5ADY1b35W8o/mGea7qqNa/ZDay0DzG/rwnMJlKumCzBNlxQpp+7wiMnH7g+fk/j1UBo4enePLeGjztpqgbSPT4rgW9UA4X/hLrbF9gA0iYkTws6qigik0aP9k31HLcejacppuhEVwDvtEmYn8lS70wMRRTIonh8ak0843ygFQwB1EFDZg812Ak/fVan937mhje9FMcIKsDkhphLDPp9jErngfFvP8K4myCj1fO8nR/6b1E5HIGzNMhj8dB8GA9o8gef+jwY+JH9NW8DiTmbFeVGb0jQ4BAa0zyYDZ3im4hMuVxSD27p+58KEwtWIfiPewjQBYzCSGrAlT4ASeyJkJ0VsHV+N/Io1lWN+Wm6SESTTFcC2hdkRefEjqLAZy2wvG71VMgPV1Afnb/88pKqr/gt2hRzLCvxQNCuwUMLBHtBo2D1kvx8QnPHl3F90EpJn8TEVuTJBWET8rsTetBumZ9/2uR5cpjvci7T6pJunlcsBrF3g0kCioE6f/0vP8K/0D0gRIKmlVVe514ZcdX1fFIZ61tzcxFsHv4ITh4s43k5sbQpiU4KYv/SgmGVZwTj7uh22klAHdFeuxCdpS3HGJ4y6oX2+paNTlwpG2sTBJ7DvvF5194otT7F/6gKPC45wQltwQvPByks1y3aT2TVhVV4wUEP3ZQX6ZnSjtsSyaTBiyc38tLqgH0KfmrRBZ6l1LRR5UNiXUjbiTLaOwYQtGOrBBFfs016Lsp41mbrKfwxkFn3AIORUWx5ksMfyjsfa+mWphwxM1ZwZg2oHKKGPHksMg8mnvc8Xo+FcwahOShwzKNezmEfkOOQCJRJLMqvf/TPIvqhkA0ovjm/Ene7ke4AwwyyCEzGO6WY3t9DkYP8LgihPU4Hd3QPmdayTCXDZgPkOvcKBqBcYjmyY4Gsu0ZcnQ0oJWf8owDvzgVkZT9dzsoT3lsgDob5yxNV0c2GcOPS6+GApDyBeL2k4jmxV5G4eZ38WrVEUOoNi3l9hgaXCfbrYqbUGfyEJZS4cQf+ary3g5frd1RKxZqqr7i+aSyuf8RgFv7KjvhBnHwapc2a1Er54JMh3pEBXqhMENRuCNZgiEkw+lCo9Zbi/I2Ui06fZsrgpk4oyLdUs5OJSMSwW+jIiOlYGkhtq679WQKMmpcrESNY5H7Gx6qvrhrPt8RBcMjiXQYOTWZXdDoAi+oWaKR3GKKMnJyXkY9jM50u21GxGSnSrzOo0mWNWr0PmEsHxDW4+ZXNfJHkk5UT6tKNZJQU3guDNEcHgj2VAh/NFWAfHaDiX5g+cliFVktvGUpYC7MzpCzdYWzT64uw/P/JvpKddGPtbwox2He/GbmnVaEPzh37KXDN1SIQh8fK60gm2uTf10xeRojm0dvOGWQp/kfw+xl1QzbU0ejimWOdr27/6ADXdsy+UfQA2PymAvMeEibEDHlzuI1GcsO4ztWyWUWZsAIFEBipKQui3+H+IHe4th",
"wl9PTykzJ+fBry8AyYGJW6VLDcdT94LGoZI4lFnl0MvkoY2bOxpR+77sLWb5WQC2JrJLLFtjnm2de6taFgeQl4xLIFqxuE6SlvFJBjyVjzenKlM8g8CzgSjubHJJXr3jjNURfeMepNcLB4dbueSUq5zAGGuYzceC8LYFNKABR+IRCW1ABcwH2VtLX3YqIToxVoy4dOJR8ch5JawKBbPyDh6y98XSKCpyUX9gMY1J26U8sY6PVCAOp6RsWextop9/i/eruUcTplHJgDWwr572CCHGLKx62mc2VdaEXGRtb8TR1OYmWq/94h0Oy917ztsiipq2Cly6PLBivf3oqENM4kv8NtrnGoPRezr8ioLm78RZ7MTkOdpdNWFEb5iq6J/yIYUTtqamtLU/mixzXWM0PupAeP9VNgqsvBa4Ym8Buo0lIFEs0CwidB1DyT6DjK4pWbrk5kB1DnKAK/LYDGKrSTMFp1X1zOlouCrBOIHMV6S83eYQtNFk6MoS4jbxKXj/vMXKdyqeAZHorHWn8chFCja6074+wga8tlfFPZLLs+NKI8oa01KoXy3rFeeqMxmOTXZYLxGLiagUjsuWnnrDt/VDHmCFrDrEPWQDC6Mffudp5delZEfD0bovU48LcQ2XUCwx9L62OKYtiULEJkSPomsIfDiyzm/cp3NSfdSoCj7JTdB663O4LKuzS9cgQvr7O4wDaa25JLclgfFpvfNCylLtBVMm2oj7/qXUyoayrW7PGlclxBAAzUjvJZpb2b35QM9htGzGUVahNytpYh5FhZx+c3F+IxzTnf8dondvbN2P5csyBdnSt3RFYPWe3gEg19GRVbFwhLgHotcdoYHA2vlgWHWPcCBXjqUcGGjoCKZP0I8CoIIbv9+bBy8GsK2VT3WE66+x4H1rFlSFFXkCqh6qE//DkaHuM9j7aLKbTMMAaXT894MVRQyvDIvj/83gtDyNsTWcCbXnvX0d112568uK+SvO4RXfLjqEZGIcGuer2imb+fqDusA/fgg/Q+8XLJJq+gRKYH9IxVNG8EItP8Lq85NPvFar5q3mQUH+d4GMyncscx9UJqBgZwmqkzQUEI07Cn2mzCVnlGDNE+ua8yvJWzpBBY1HipLu7akSE0P5cOd9ZtdBRe3gwokDqFgDdEQ7f2pn9fym89EjyM4mfEu8MnGtghtCIHMEFwZ27r1jR5mfPyafgXl1LGimQQ7ZNcqfbWjHD4I2tyJ9S0nnwGbu9baS/1Jd9x/xyUC3S8edZmBP0vcUjFtOG4jaND+iZrGJHBA1JOzcdUAEdWQ9tS6b5qyP9lyLcGUvZN9797vc13DrXSclEhGZZLMBH27+tA67A36DDOV1HzcnYtOdZR7C/Mu8MIowLhNS37TTNHcRdjxSMtipL5qCB5xabadmpzeKlqBvWnUdAw8wH/O8eATm/YQ3k6c9OPxZToqpdQ6DUa9/VaOfTsK6u4pJzlGg4QEVrVS82W2u/YGLwIQogq50TZZd8LBpobMBzP0fGBFjhl+p+iYDJPrfgH9LI31HY5FWX/iny0a6myHiS9YZcDJo/yRg8VP03eCImIIVqRnpKcnzccq8IZ2AJhToNznkekjEXb1JVKH9v5hSz0923a2zkZGaIlfSSc9vE3nfl4J5VuTkS5Rxl/DP7UTc6XbxbnStOHLPW31tAvavaoJikeP9QB3cBtmKoW6g01hUfHE7pYoMiDDZZ7/qYJ2MkMhI0UwWG4XLQprgs9xv0fIen7UgyWsv3rYpHpH4v4TAA8KD06KTyKQUlRJWGyGca29jK3gY53ElpZFoZjhZLVaGGJgT3DCHv5XUssqoZO72BwF+DPmkjpzG3VAxjlGEN4C3Jp2fNyr5VSK2EvzgIS4ROLh/dVdaayGJF1FgD6Sas4U+oz8W84brZ1RnpVxcWHoLsNmFPEnOVXsmat6OVvNGoy270uS9wmXpUTZGKJDcSSe5h7e+AfnKfowP4HwYik7Pbi7IHgZ4aCalQvQT",
"S6SgyT6/IjomVh/li0867evhA9AV4zH6sTRmHwRzH2aZeSH5vFRaJATyM4w+TKFNT7/DebT/UHXwREb/uWxNCjQnCXKup2Fzvdscwq/+JXgh1qB2F3GvvpzUEmHuc+Oe6Cg86bP4QOLbs5xv/bIT/23fGPBqx6DwDWy9kaHFNm2hOhRmpM+n/Nzhdc4XHDKdzbM3wrQ+Om1C3BtYl33QAnDDiH0DviGEWfC76yJ2WPViePDSj+l+wXWv+5wir0r4/H1mBNcvy2ke24yBzDt4xz6oALHUM3cUFy2KTKd+FhdeDERInzLsukHF+Wn3HQO7u78mrLob2js/JLJqPERdC0MmFri536quuIOukBr2CW447OmuAcMPN/wB1OgG41F5rKEFNDnakVGMBrMgeKYOHg21Q3h0ZjgX6Q9X9Mni0cYuB0ypOa6tOfb+n6GomU+l5K28+FAHTw9Avy9+qqgmK49lcNRoqpdUIdAXAMgsbW1m6zJkdXk9/X7vQ7e8lCBrJW8xS/jQ8/DCB8O8wiRZ+4wAM0/JjnzFvEPiWSuHKgHl274oRTtN7F0CaVJZ8UYPtMJM1VY1gH88n7p9skrcSp58YeGocJoIxs/4RjKCeF6OWph0cDXFuzIwPamxjxG7CQHtbUYdzlMfQ4D7IQoNHpPghRi4a0FiA49cMqy5HwWykRYkJNI+7//lUlDED72voqw5CSK4DTk9Z0EARsxEOeMn17u46bDbbtmkkXznxlQuVdsgUf0dMWupcFcjAzevggR49XvTxo/QLSALGTeLNqwtA/Gri+TRFEQ1jncuCc/hV6o7Kof0NQrOLXbATWBANrbhOntFSXzbAy4wnc5k1GHOZYX7x+ZnQ4AS+jGElsmXqUuHr0FRTtoNc+xqtPdavcDnB3Dd2YFsQcD4YRGf+TEtv/wXbOJoumCG+3x9Mbrgc9R46l9POrUukoNmjdZRmT4YkqOB6vW5UMjlaWXVlfgZZsVUFN4XOi5T7/k4PWFAODsX/HYSPQbNvSV85DBCfRDOoIhceT3EJ0I9qNrfDbLwYcTN9ncvRifxJMZvR7nDps13DKKtQQ4T0OgGx7GcgOl+O5P/ayQtXUUtn4Y7RBV3zdCqFWqde85+LomjpQndPuESfSRYKcBBCHUuZHIQ3IbWxuL6ISxsFrZH/rJXhSbnQU6WEJfgSf913hv/u8f5tHyh5ORr1mNUDy2l8hp3svXjNgtthpqRyElKtrgQi2Uc9FiQiHNOPDGWU18/96mHQLpELRqbroYBxGFxITHUXnZZ0Fhl1Hislp4iviz0W0+MQo8Fwv+bgyNhGv7xZje/8tYT8ZbpQg6DVv/tsD6mg90T106h2tKw4ktDFOU8kqF+V3Bjw3swN2D0k2mu4h5piPNTXt9p1RFQKDVyY+Pg3tJKfwJpXnF/13zAQfW+dNPrb46hCufh8zFAITz08VSgBIGFnR+W3iY/cNGi3X/fydIqVn9kfAMxMcPdrOmbrAxuva9MIcH7Kbob8iye7W7tgw0SsBI1Io63iBXiHhSgWQILtetjueT6n3FtaXAeTr7egT4H6p7Y9CgZ0ege7cQtLvOtqZSmDCe0Tyep1gzXqqT9njIxI5par7J8AeBstj99Mpfl8u1NYSgb0F1+DXUoYq/3vP8OlugwAM4UYem3FMbo3+NN+0MM7LVK5jUogx4+KK+QCj6cPhB8BlvaP6MbW2hE2R/dDk63Na9oMqaPsUBia8JnR8YqRIvp1afRdaa0Z3SBtwcyBrkXXF1+PU9j3gSb1FyWEDN8OUjKtskbuxdMW8c9vS+DYszrpa20hpep7LZ9BuUekSV6EepqqhsvEjMxMJcXkLGUCkLa069qG4RrYbj+SJtidp9kfWoFQ+0U2D1dS2UttHbEOa1z/SyMcFEinQ/DQuFZB9hnDgVoNsRp9dqAVIsRhHzKdRMLpAj+nnuHfazwUBsHeS08X5iOHM8IqjATorEhfdQ4HkRNmoq2VYQiGvXrrb8Y",
"AOc79ZxSq17ZA2yEP9KGp5tyYtwUblBxGMrMVxlFCSHskKbn0yXp63Qb0ucVTJNpJOZX8Oz1Kv+msWq6jntEAV0MbReaZBVtadTEIwiSZxlhgW/8pzxuvdp1rWmO6a8IcgcBttpXgvOxkOuYm6PP4m47FIUTRJm9BIHQiwqWJLrGAIOgPhLtbMXnQo0NhyITXxoNSCu4+V2kHHtuSE0y6yaFWGjm/+pE2/NRBrc03FGIPaPqu4BLUZh4Onx3fCBj5RSaIOHkSBt3s9ta1aJ5tx86VGC2sJ1pfNHkp/mTsizEuijTHfKdB8ON2eo/miE6BdZIgYkkveOdTECfGyrC/64MUdw3ShNMzgH6w/1PG/eSrWhLkNX8rmN5G5HGG8j74hZxd/3eu5wQ2T5j46ZNZLASS3MH1dBvyEaTv3jUFnUEYO9T9cCTeQmeeWVCFPuMGj9wv3cEOn7NNhjTNDrJJbYLcsgXbB4GILXY4njlqYlQL/mWVOyafg+9fhQ74GF9gknrPCN5zBlh0ikkqa6NgBWmtNE8LHAeEEgPwZKNVYBv8ywNY5sehnnRWJIOEdcxNHsch7BsQsrZcuQ/yQyJntqDyZMbo5WsezaPaLfjKr37EaYaSg0+hT1CgKBSj8ho3mFBNBKtdqIrZKZCRCst35/rz3Hpf9PRraqONK1b/tGDjTEMVRbyn88hgmGN1ekB54MGa91pIsHHFj6QUAD/fJiVWEZ+bR2VYB4ErEsSlLZ0M+tAJWaIiqg+IteCPabtb7sSs9j1BMMUSdk5U5r9K23NKxHB/TLFotE9EUb/NY8m5b3Owx24ICzzrpD6Qm/yM8OGx/CFRNgZd4F+1U7roVKhEn+EIpDGFNCZGOuLmOw1WyGFMich1G23j2XYyTm3LwEbF1x8Zri/QP60a9nFlBtgo8UT4Qmkl5oqlHufWDieGRBeN4vudcvJiINYYVXYfaX0R925j3CnEM4EiIYJ9DhbkUTeIiFu94Q53Oo14cR8gukEZDO7Hvd0oPigfrmG+b10Qc2Ge/05WII8zI8qGwKGW56R9p6N5ypA7gYnpnxP3myho2mzJAoo3ewS5rpqfRQPLLqniKEZCvUKM1Wt9DnPQ6QBmw2zcWsZtDhsQPfSPakS2/GHKKwIyb+DmQjQfRtKvLYYc6OZj3dqhayXxJ6YLv44XcJsStsN1K5yM+kDtbL94mDGvk42MA6Eo4OceZnGGRjpKTvZZnZet4OcKBCuwVIK97m99JaPoGgMhpLNkcq9fytqkFw0NR7K62kJLckC2URWs67eCuIIagfAWgMGDHU/B0n+KZfAtpbjNWzjmZoaEDaZS9i1zzSqFB8PSa3ObYOmRmwlImn7/Hw0YpyXgIZQu93ch4zi5ukrWAyQlsuci2TBs2DbIh1+fdurSKk9e1P2jxzY9LqoROuc6kw8ojecnOElNCGYsr9WnnBUohUHfkkEqXFg2w/6ucmoepgNu6eYF2L+Um8i071Eevj/GYbYLBFCNLA4gFPmh4ScSGkCk1rz/6MQKZHfAFjHrHadhpR5j9NI1T1R+jh9IiO3fqdOIsl+E0lSc+GRRxaNJkG7BXnsNyCwY1IiCxco6ipjePnBubdmpqZB/Ot/waU03MkDl1qxAFYWRtruZOl356aHDToAz7cTk4JM/Wxgp9ENLz4Cgk2Yl9ZjgBg3LDgqhr/48UDDgYITTSvE9UynatFcOEF4XFB3bjkl1YJ95Ic3DSasz6+a4/hRGzW6olds1r+QKtI/d/dhqsJtjbtZDK/CjP5b7KBgH20WjoDl0dIRc5WMtgKr4WxcXs8vjq7sKMvLtl9+SQ5Gf9X+oNsHIWIVDgRjRgPEgbODFHdJ4pPCJRCOABwS8IyTT+uGlOVjUyzohRHr3uy5Yf53VuVMPdV1fSE88tu/E2uGy0Ryw8WFxjlPW8Xees1x56UGSJ0r6jmMgjJ/atLMgprHvorP3mqXoBShfruoNoGLqmh0HfM35lzl8RrvpPQr",
"tJMfgi9UOOJ9DFCznfBaZnlK/ktD1SkaUF3jpt6W1ERnFP4ly79IDKprVZjA0QOKhBFDoqXwgJXDCdkElUkJlcTtSgVzqdY+WmL0Cf90kAGbijtx2SNxDNp9QvT/DBN+mMJteOYqsPzE2ZLQVKIO2zlw04vqZB6zZpTN0IKEwqHXlJkjYLtnZys3ENkpq89espwXn4S0ZfnRvQGUnShJN/zwJp1PpNDuhI7XbWAIB+6gSvdgQZsMZmJ9JNPh+NWBroqWHHJYXH421Y3G0jU7nN4X1bG9S7Ih0IMTB+gfNvnG9WoOWTCUDF04RRRr7ReQRoTsrBYFSJCMO+cOBKNwYq3S34W112PNpCei8VMTZLW/q+qO+S14KoM4LrYoEor+4dAYytTqppGV0ZTLIicLENbBgI0d3P+hZCOCaB3GgpcWNz+PX9jMd0VfZpaVXBMk5lwpoAmRPP4s5QOM21hWo6T59GrWHSjka/T5UWDlnkhS30NqmrZzIZaYYV3dPCxgvb2YOguVbd3FQkElipzj0azhfOnL1fXFsN25X1B95GvtbmuIuGbtLxqCnKj4KORUgzEn/e7Lxk1E7DL7XFVGj+s2KfnEnN3xjNnNKwkD0+wjnYJnUKVwAlVx1Qq87WYk3s/KDUb8xG0vJbzraHPsH4LD7ijW9b4WW3dCLJXn6HSgBloKHLZVI16FnigfpKKYJUCcdqtOVNHVduBg1Sow8HcZILaMeHMfZhQLmFAYIg25xfbskaUi85Pl1AO98CbS7HvGcMNM8lBzBVqSD19T0ZaXw4d/tnsrrQmPulPCwDRzwmczIiv1z4GrIf+DeLcwxGsQGaj/LcubgD9vTBEfRW3XaScpkMQeUQunD35iEYih94kke+NyB1nAR6pxLRrCTAdA9Hrux5+rCYJWDuVNWSGhVPSerzbZEnZgsjiV5zYK8bE8JFWZvCfgXvoCqqIeZalky+r5a6airFO8HqTWKN4kPjySLrH4EgV0cEGYItqUtzznXcjL8+RgxXEKeQWYbkqXnhoXl1q2HyC8RG3H7kdKBjoGSTt96Zab66J1VncO1uEXzsX3xyvX7nLpdDtEcwIT3tFiOtNzf0vhk8Glb2JCXrW16Y9oIUth1lPJ170Red0MWNPnkNh7eSGU+jecF1fkHSrqOnFiIBBJdqiS1ThvKi9hUfPJKiXLD2Phy6ENNPBut82NlOYzSYt5Vw0DXf9pSoCn1dtoHNPmIbpECZnF//KurXe0GOKQI6/heKMi6UVif4IgUE7PYjBXkY1O/FQTOLt880MjH9fXH0o9ey/QUNxGi7v5vUHDdkOIWmAC9M5K5MJJHttMacemw9/SkKNqaXUMJIVWeWRA7r4qnrkyfHZO/Q0LopdAWRTxZMdMVfpSiUaV6Duaz4f6yzKhet/zoqUN3oAJbCRLnanKMtfhWacTOaoxMfTuyOT1xFu+/JmK+zakmQ5mK+tqobSj+a8383p1tCAwiYYnruQG5zVKqSbJYOORsy2YD7d/xINVu5UxQMTqCkC9fvF66GYbw3fEBZSiadZep2IeEGqOEcrfL/tzGnSwGV47P98uwnhYphX7h3L9H93qbFjoD2hm8zLzdmquO9OvB7+iyGb42KEecM47+lje9Y8p0KOJFSqnd9ScghzRgckykwxDITe6Mdgvf3BTFLlRXugELcqy18GE9uOwkEop+gUR7AF9++NDKyn0dau3QRVBNQgkMfzyyAkBXpGgoPPI7YBuVFSDzajAzq5+OzTKbDhyFJyqrPSX5BmFTfsfUoVwDGJzBumStOAppSXyeLQHTZIJM6EqQi657KCzLL0XVH6UUVe5nyG+tlhpm8IjAaDhLM1bcNMmvj2dBrMY/H/6xm8EcI9vocAATUmFeaHJ+ZI5Hi2JSqQPcR/eLan94IZ1CRnJUBljSOoHAAdT9n/qLfe4OLkuFd2LialAlS3FKGZWGerNLsp3/RHboyJR87hKiZa314/zgRivXKok+JzVucSS",
"Rx9ou5uvtlssOa8XYZsfIvf3YEMF6fzU/HUPSjH6lFXZ7QPKMy+LWkU7QwmnPO0rGSlkZ4Rw1ibdGWErhptB/JO49tWCAy6TxueOiuT4A3OUYOBRMahxBL0jRC3FRBFv2dKbmTCCrjF60slvMwzvaSBeBKvYE/XKfmbQrxH8sdmXT63ENzTDbICe5m8S7PBgW4LtHxe4t/2Rgq+hkqE+mCN36+8sr93gmRqKMnmMxhsSCJieTF4aDM5cjVO1zRv01iJ6tjK58GniqQ1OVnxZdVspF6qP6u+5GGMwJvYwt+ymIc8nZI5d/PhxWLEA4HlDJuyLwtqx4m4KhRZMRjZplFysN9WPrnXOLBUtujrF5n0LuP7ykDhMH9zCHYuMyY3lemthP3C+ZWNxPMMLZ4S8aTqXgmPULkpAtJUDidMC9azGw6besNIf2MhMjvN3+okFZMm5jrOjmKK9BFSK/1+N9S+eZvgzqqw7k0H3v7FG9zxN+tRNlam9yKEnEZBUM++eyPG/sVLyhV6+HsC3X67KIEs2mrWyP4ajBXTN/GFc+TqpvpM4DxliTINr2iXRYKXQRyuJfu7ywpR0dENoknp5nkl22Y2mjsU+4wpbsY2XAINeG3R8zEQkpemlD6Pls1iYOfDVcPJ9LcrRLpOzRVVpfllV+9mSu/DHAKkOFsxvAssYiMk6+66YyrPUoUEdWwWhcg7dSiIyG4AyMLlDZAIh4EGgdlRwQC0kODVpGQYUsd1AWL9ZXKmGk2+qDvSOYcpXrXH6QXDtxrPOWnsvEnGN/r8tBGSBUc9X+a+kQW/QvupL+U7k+DrgOm9akVflU8MthGtUI/9JfuGdr9+O+i4UQVq9Q4I/uYRJBK48tNq+iq/qQ3LkXxQWbdBMewQn9/5Y5T4bHNTk/B3vIM7FICHg3ojE1C6eLAcsArqpPneNKou7gxpDsK6KphC6xNRvFNspAO7mVraMT6tRj8na66IjzGHMXJogMc5Uf5D2OrLeOZ6jXjq15L/jImEE1liXkGfPbN3f3ljOgbkfXyPK88prgsBZtWF6I5Qb6xn7H2bmp6EP6pRR8cHSWeOD+Io+H6Ewjxi7Hva5p8a+TyuepRr8eaybi8krU2qadNtIFNWurhlwGBkSyB+3JW1oBKLoN3MAo4sSg0dxDI6lzAnDIoUfMvIAFRh6J4W+e2OKZH/h+XcKWKpu3TQfMlugDIn+1B3I1W2tmJJ+YtOqoRdSh1LXvf0Q5/Qm452/swRG86xQCX/8LI34PeB5zaGBelQROz8agMampCyPd6edl/nG6GyUUAJ/hqK8xslHnC+JOh2lLFGo50MaAUn2cxxhZJjXHpVhHl79i+4tXnlmFVih9DtTmRMblpBll/uwE379JauLT3pPLtVPJvVAMuOS/7Ois8UWMO8Pywwib7s/xTxmz4Thil19Iu0MnVmwEjGFDaGE6j2IR7sjHTeedsOykLM2tGsf2TUz3lZw2AZW71klvHZTpUmF9SKfX2qJVikRPH8aisfbPR23JcS7DMcRR5+MwQ1sBo+y6z6Z/ZhXicLnF3ccI8O2030dRI2EKkk8S9utX84jRWZ/e+7Qo7OdEbtPc6AA07WRTzG5beE1c8VFzke4yvzeWaCrpmZk06q7nNjVcEV79HoUUiJoZXgsBp8T45vuOf9gzY+4CVa4lXUgZObzQvNODBjYMnAQ7iiyH0uRUvQ+aQlOHOpm2WUyuyOAwfHS4ymnxfJw1kwIvEulUyhpPYxg4fLyiX4be5yC5QSeCgox3Vm8OZ8kosPRSKy+gDRWaulLak0r5n2JMUrvNBAWABWIuqlkMsVtPxRWfqqkZrsj1EYoaCsdHPr6TnPAcihxW4haullp7u8f1n0089dgj4BtYHJoW1wlDI83INrO5kSPU7SSves+RtAGWZdiEaV5+2rEvLEOQmPGwVeJiqVhXBjQB9zGGmKIgN7to46dP5x37d4fEGclDkyz69gkz2t//MNRMUlSc14QK7UJ",
"mvPEpC4yfvDDbbbvgCyWNxK9X5lXbe1AhiqFDG1um7i/Cf7x6/k1ZHKzPcHLdceFwhG0SUWpI7YOcSfG6M62PDddIo9Tj60LtjxFYiiVqtwwAfXnytIObcyOu/6zmmHEXYaUAyaPt7FuTBJY/vAJS4gzr4aIZon/xGlu2iPl+qjVkQQiCw2DUN+U84JAkL3wWvhAJ+sJOTSozfO5LNJuPYfvPP+SzB8i4+gxQ1fZW6/dlt6rz/D2n8v/bC35bKRFrRqnf2iHJiMgpAnkKl5iiPaqGA859UHJgpz/qulWloIqHxW0qSJMe1aOr3LDGZnsICAvB8g5rcxOIRXCcZkT8L+8R8ER1mqf2sJYsGiseDn+PqkxAvbat3JMjAIIVOF4EDgAU/3P52kc+Xo4NLqYH8JlDR5e1CLU5z6ScQPMz46Eaec9RnLT07CFWTGvPiDVoA3jlzLuymq/i3XVY4fYwcCI/wfVE1uXJyI0pchKBIOsQMTPN5SsicH2OJZebnHuZDXSvoooOWlW6YqrFrd1HmKXKFeCv9qh0PbxD4yGIjV1HlvyHF5IW+KJ0e6RqMbTHiiMNdRUMwge/JK3Y2TxmbG525k9qRCcorOvhCKRCHsQ1eBJ+6IzAyiaQeBNKDBUZ/8HqN6XQbnIM4fIbiJngIm8sk0pyvhahRmtVbXGwqfzcwXclr2k8n9fQX6c15sBwW1w13Yf1J/LB2rp5Cx3bHKm27XOiyE/lV0IIiuWfb8vsaxYdjBHKcDiAo8x6OZ/60YuFRmxpsZvQNhqIHfcbKFxrenox2szevYhW12V2BDjp9aU3QwJZiyzrnRl7Oo126phls6DaHhfN41IFdvX1nCVTeW5FqIa8JzE4IfvmMcSy6gsAeRs1ABipwMc07b/8hDIEiX/L3TwRe5MfJjCeaOBNAOXBQTlM/29JOx7WN1F6POmqh4DyaG9Afrzh9i94eApq7d89rR+D6W3bKQKYl6x5CrH5LDR/Oj6gFRseV8eukQeEbbN6zEG+ue3by7C4l/AQwEbZ0RZe1SRcpbUcT5RLMPDafsyh7k6NOmY9FJW3FELJqiReYB+4sva2YeaJEHPRN4qIdVBowvczNFWvqqA9w9jboVNziZh0Y4U5ldaY72W7yLuimnIfsJXKH1zJTG8JpsR89oPgMg1mM3GJSmpdRdMh98te9+66pnTd7Rkrotyujg+KVO84sNgA/Esli3UbvTYZ1d0ykBo18NrkZGyJMwF7O73IKvvz6s3T9FeLncoYiPLcFly722NopX4WEVKHiinscnJFfAPPtU2rE2x4CW4uTzL8X8Y7V79617Fgn5y7js1LZo5mQQ0aHCTfXkn2uSsqywtBroHL+DkSUdf9a/8m1Y2FJcrzd//96v7s/jDd0E+t+v5QgC0yS+fPR8gZWSIuL5jH07KxMnkqerv70SZybIDx9xBnx9GGbtCiKA+LF/cyUpC7i+z8AC1Q695su5aCJ2o+0xKXnEXP9Lm0KpU58VzYnmnluneOCYGpCrl7MxHlnT9a+v8TwVhbdQDcJvRnNS072lcneVfmFhcvcxXQlkBtegvJIJwGaleSo74JnJb7VBJPd+j5CgsdzWu6DGlw/XkajgekoYKXzv/tNRpfpv5T4itvKxlfpEbI3UswwKqt14DhKcEHeNt+Me2eiVlZXtDdE/yrnAxUw2ovg3jQbbqehkd2TJvcSJikp2Vo3SxiNmrT4X6ArASCpN57/dUIoT1r6mibyQV38UdgGgpxqpfTUgG4W/VgR4waxS1IwmttuBB1Y3hVeOF4GURZTYRTvFy9sRjQSIYEGoJi78bdT8VGdvdaYd49ApanbdIEti6K61tncb9uhKjT07ERw9nBO3Q0jHTmWjjDwh+ndHyWfcipvyq3Qv5BNY8q2Asxz/it/4q0KtgXwN1XnYZlaG7fC9X04V6DgGxaU8rTD//qPFe0Obe5p7xkQESVTszbi1OHl930YiIKBzunR4qa1rUtAlGhjZ5",
"w1MVIon1v75praZF1YCDX2Y/go6NYKxlB/xrKcmo+uQbgamf0g0grVb5JnhmULyJIgx1tlmVHe57+baPaz+5Hx5P6B+MIb62wLBbfklg27c3KyjK5qlqji+sJ4R76gzRrtx+l0HxjnZZfis3VCv7daC0P8deEhn0r5fRA8sdy/AThs3lfdEYo+7yQo0p545/6pdULtqCaNVpa8PRXCHMuY4elNyxu2oGRv1ylBIRkXA0P9PsKxpmy1HwAeNg/VH0TxL9rDnn1kKVUE6wlXn+dwf1B3OMqrTy2T6UQHap+f/iqQdg49q2oU3wtrD/PbBW8jKem6GSqLH/Y7AdGJWmRxU1TNURp4l7XvgZqdUxQAJ10WokX4HPdz8kfbEWQ+8FdX7jvXg85cXYAiV54Y4yHl+V6vr7oa98tPCDo9q57qZ1AcbXsARfuOFwSe3oOZVeTA6CD/5TWoS9OCmjvsM+qsmNVJFTma9onTGiSdjGU/enuhBGhnI5bYJE7W91YX2H6wlAqapcg//2u5qwn6tzpo10/5nzhkb0HWo/x31ZqBnsrMAGXZ2RoDUfNSYc18pLb1szNqJ8VEOcskdnNVtto8wdnQdjfqJEswlGM+aKoeDVK/kUJgQIMHyZSEIf6maGGKh6qT9iaCgxrLlT81wCjBJkeSbIHB6VQQe6F65ukivxFLscK+C94/rKyjnvqGiwpkCgEbJ+40xdt5bS09tvOQiIOY7eGegNkMi0Qu3tZ+7ciodjkq+YxqZ1EnnDxwt4/eMGjeJvAR93zA3a7mPwE1aYF/zE9Ud3jTrAutRrVv6sFtBjptjSe94O9RXequC52+/Uh0eKMy6fKgCno4aUdbQ+TP2rtEkOJ+5FOyFOu/L2HkibTkpYdeA492QThn5xkgAqkO6I8mr4D++hZWk7NiL28P+2uheUBgXVw1BSK0Yhrung8FdaO6Ut619vsblUR53dn+YirZFP91gTNc5hF+0YwZ/dw6QYfnbvjdtyE3dl8SEej4m+K9BI9kFUteMaCjMz46F1QsV6SeDJCDnduMYsl0b53YH2UR47eJjebXMp7aBmQhrdgaYc/9awN5LkBWydQqrvdl0m4nMtyqtCvGswAmsfcWmRbj4tCRMTWfd1+Z1w7jU8IO6c91m5fevae8Vm5zPMLN+zmlb6SxHnIBU66cEGzjdREYdvWEKuUNKwBoejuKd2Juy8zvGYjNjMJCbGwE48fXf1Xd9xBr00DFDC5C2w5FtjsbZ37xslIMW/8P78ZTBv7jlMj8EFI40p1eNpeeHgVPAKjo+N6+ZVIu0j2ArSBU2Ygvfg1zXEeZSDUAPsrS6P8nqhngGJjw2G6L/ME3AKht1rXEtxPdFmhmdkznB/eQ2B5g5JZ3lbVl47QAqmUuW1/XcgGTY8xGYSYpgpJuf/9fJPfaT389/zLFvg5m0phwiHSHHbO6flftiJ8MS45VGpj3OUPQKOLjPh3nmqVC7oe7Gb/JBx018WLXJyMv74osypnSuxPL8vvPZLQHNA4G9B8tYSpF6hXgAz+6Zgqnak8LYodLyLbeRYy/QXkfWZvRib8/fBQ1Y4WZlfrFJLsxoGdVcCTiH97MxYiVRYrYUPC07WONSNzx7DHCR/pPdltK0WZyDC9hghZDj4vGy4KG/yFyrJ/9LRm+wKfbINza3t8fsG+/zQt4OUae7lTltcJqf8VcJW3dD49otS9CclRHbhR5HwTkgVmitpKvoyqzrTrp5FjG4NAqMorLQZI3vSF5ewPCs0rjbIkNNRu7A24XxEP/P+3xYpWmBytuR6Mp6wmw26u5bwghKSEM7DfCELZ3OnkDG7c1wciRPEdoEpwp57t0YwUbgnIOxCcoDoPtaLkKyS9HZ9MpZWP4z8FKPlej9zCrned7jb+8Xf9h4F6ojS9/1tsBsz4c3Ljp3Och5SnxvGNsEh1F0CGuiZdHH2fo/YVIsZVFNMTGt+jjuKalNABeE1IJnuvtTEFROZgcn0AM7fZFtF",
"WEHXxTObrM7wlV50BiQehlnK0ZD+gjH0cNwGEYS+9XpZkiU41g66uFQbD2PnDY9FKfpQiMnKOvbhb+QZ5A+t8QuYdzWLnlDPJHGg9Qb/4u6ypIybGD+GEKHG7mAGb9pDNmXJyLswb9QE+zsG1sCAt7PnSTwjARDfYbL2Zhk9W1fxMCbOWcl9N33FAPHnGL/i1wvALuXABEFz0MbmOU2YpKPXt8OMidZMfWxO4YtvbUeUnAZzsvnGQDNTb9bYbmnziw2kr/6+GNhjL4VtB6Nw0/9ucIDMXLZTCuQOmBViR5oFDYjyVWBASYWJ7ou3OM3WqKnLNyssQhtb5L5vCoxAz6ppp4lnhtMLv532Zb0Cxnic/n2VR0BcZa26Fn3cVh/xrLWHPNH57uu00rk5BQFTh+H7yLvQkrHSPda5vmudSgzk5HWQSvXldTvAoFcRlnxjbaxTHvZSb+BVXjh7+pSj6tW24UwW5Cju6jwbM0ASBodJNdbnqcRjtCnimpnHIvohgOq0/eknCEBBGeRB3rtOi9QMeNQNSO2rO9ElDEiK+30EOMOQ4y85nLuKsJgv0EY0RaKQTn1tGivNAI+rSqxL3Ywdze0c3Rx7uRVdGqkMs0gfsyl5jcFp+qX/6Ffl1Af+ZokLroBrrP0ixoOI0QsP+OYoDcIXQtGNMW/G2W5DU8NdTd67Ir3AaInzMKenxr99bPFoL11s7MFvPhdtzNi8hZQfM/F7mBOx6BqBWOpSkdqYKpIv/j4zHI4wy4CkmNTbSmx3zZc/3apJTpsW03RjSsjsl2WnTBOnNrhLkrXuoamvIJtp5NGdjPk0Npx9sPJLWXLu2HzG"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_desacop_partitionesc;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partitionesc;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partitionesc;
return true;
}



bool DRLPRUEBAS__CC_Cool_desacop_partitionesc::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_desacop_partitionesc = 392;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partitionesc = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partitionesc[] = 
{
"CgAAACwAAAAGAAAABAAAAAQAAAADAAAACAAAAAMAAAAEAAAABQAAAAUAAAADAAAABQAAAAEAAAACAAAABQAAAAYAAAABAAAAAgAAAAUAAAAGAAAAAwAAAAQAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAkAAAABAAAAAgAAAAUAAAABAAAAAgAAAAUAAAAGAAAAAQAAAAIAAAAFAAAABgAAAAcAAAABAAAAAgAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAABQAAAAYAAAAKAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_desacop_partitionesc;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partitionesc;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partitionesc;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_desacop_partitionesc(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_desacop_partitionesc(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_desacop_partitionesc(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_desacop_partitionesc(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_desacop_partitionesc(name,dirInstall);
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
	sprintf(partitionName,"%s","partitionesc");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_desacop.partitionesc");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

