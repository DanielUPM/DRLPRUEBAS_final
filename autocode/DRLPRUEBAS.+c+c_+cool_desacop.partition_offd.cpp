//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_desacop_partition_offd_CPP
#define DRLPRUEBAS__CC_Cool_desacop_partition_offd_CPP

#include "DRLPRUEBAS.+c+c_+cool_desacop.partition_offd.h"

DRLPRUEBAS__CC_Cool_desacop_partition_offd* DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current= NULL;

DRLPRUEBAS__CC_Cool_desacop_partition_offd::DRLPRUEBAS__CC_Cool_desacop_partition_offd(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_desacop";
m_infoPartitionName = "partition_offd";
m_infoModelName = "DRLPRUEBAS__CC_Cool_desacop_partition_offd";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_desacop.partition_offd";
m_infoModelFileNameExtra = "+c+c_+cool_desacop.partition_offd";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 10:42:47.020000";
m_infoPartitionDate = "28/06/2018 13:57:03.910000";
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
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 16.09, 31.3343538, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7547798.88, 2, 
		10, 5e-05, 0.000583419, 0.058, 0.00178349971, 0, 0.5, 0, 0, 0, 2.70069069, 151.106354, 3494748.63, 0, 0, 0.000580606872, 
		0, 0.5, 0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 2.70069069, 1, 16.3526821, 0, 0.000471775733, 
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
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_desacop_partition_offd::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_desacop_partition_offd::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_desacop_partition_offd::initBlocks( double dyn[], double ldr[], double *_time )
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
	LPRES__Init_fluid(unkI[4], &unkR[273]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[273]), &unkR[237]) ;
	unkR[231] = 500. ;
	unkR[268] = _div( 1. , unkR[303],"CoolingJacket.mfr_ch") ;
	unkR[269] = _div( 1. , (unkR[303] * unkR[230]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Nozzle_1.Nozzle,0)
	unkR[266] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-64]  CombCha_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[61] = _div( unkR[316] , dyn[4],"Injector_F.PR") ;
//[E-65]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[317]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-66]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[323] = _div( unkR[328] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-67]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[322] = _sqrt(_div( 2. * (_pow( unkR[323] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[322] = 1. ;
else unkR[322] = 0. ;
//[E-68]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[329]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-69]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[319] * LPRES__FGAMMA(&unkR[64]) * unkR[328] , _sqrt(unkR[327] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[322] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[322],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[319] * unkR[321] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[328] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-70]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-71]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[311] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[311] = 1. ;
else unkR[311] = 0. ;
//[E-72]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt / sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[308] * LPRES__FGAMMA(&unkR[31]) * unkR[316] , _sqrt(unkR[315] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[311] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[311],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[308] * unkR[310] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[316] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)") ;
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
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition_offd& m= *DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition_offd& m= *DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition_offd& m= *DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-153]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition_offd& m= *DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[273]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[273]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[305], unkR[229]) ;
//[E-165]  Nozzle_1.g.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[266],unkR[302] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[273]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition_offd& m= *DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_desacop_partition_offd& m= *DRLPRUEBAS__CC_Cool_desacop_partition_offd::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_desacop_partition_offd::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::fres( double *_time, double dyn[], double der[], double res[] )
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
unkR[312] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[312] = 0. ;
}
//[E-6]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[317] = _div( unkR[316] , unkR[312],"Injector_F.PR_sl") ;
}
else 
{
unkR[317] = 0. ;
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
unkR[324] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[324] = 0. ;
}
//[E-63]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[329] = _div( unkR[328] , unkR[324],"Injector_O.PR_sl") ;
}
else 
{
unkR[329] = 0. ;
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
unkR[62] = _div( unkR[327] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[322] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[327] ;
}
//[E-145]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[315] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[311] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[315] ;
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
LPRES__Init_fluid(unkI[4], &unkR[273]);
//[E-159]  LPRES.Init_fluid(LPRES.Vaporisation(CoolingJacket.l.fluid), Nozzle_1.g.fluid) %%% (OUT VAR)Nozzle_1.g.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[273]), &unkR[237]);
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
unkR[228] = _div( LPRES__visc(&unkR[273]) * LPRES__cp(&unkR[273]) , LPRES__cond(&unkR[273]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-167]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-168]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[267] = _div( unkR[227] * LPRES__cond(&unkR[273]) , unkR[225],"CoolingJacket.D_hy") ;
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
coef[0][1]= -(-(_div( unkR[270] , unkR[306],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[270] , unkR[306],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-172]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[267] * unkR[223]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[212] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[267] * -unkR[271] * unkR[223];

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
unkR[309] = _div( _sqrt(unkR[315] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[316]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[309] = 0. ;
}
//[E-174]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[318] = unkR[311] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[318] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[308] * unkR[310]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-175]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[313] = 0. ;
}
else 
{
unkR[313] = _div( LPRES__rho(&unkR[31]) * unkR[318] * unkR[310] * _sqrt(4. * unkR[308]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-176]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[320] = _div( _sqrt(unkR[327] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[328]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[320] = 0. ;
}
//[E-177]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[330] = unkR[322] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[330] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[319] * unkR[321]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-178]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[325] = 0. ;
}
else 
{
unkR[325] = _div( LPRES__rho(&unkR[64]) * unkR[330] * unkR[321] * _sqrt(4. * unkR[319]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
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
unkR[272] = dyn[8] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[273]) ;
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
ldr[2] = _div( (unkR[272] - unkR[236]) , (_div( unkR[307] , (unkR[304] * unkR[268]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-193]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(Nozzle_1.g.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - Nozzle_1.g.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(Nozzle_1.g.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(Nozzle_1.g.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[237]) * (unkR[272] * unkR[271] - unkR[236] * dyn[3])) , (_div( unkR[307] , (unkR[304] * unkR[269] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[237]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[237])),"CoolingJacket.rho_trans * LPRES.cv(Nozzle_1.g.fluid)") ;
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
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[351] , unkR[350],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[273])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[237])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",773,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[4] - unkR[312]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[4] - unkR[312]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[323] - unkR[324]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[323] - unkR[324]; //Injector_O.PR >= Injector_O.PR_sl
    ev[11]= unkR[338] - unkR[339]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_desacop_partition_offd::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_desacop_partition_offd::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_desacop_partition_offd::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_desacop_partition_offd = 58656;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition_offd = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition_offd[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_desacop_partition_offd;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition_offd;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition_offd;
return true;
}



bool DRLPRUEBAS__CC_Cool_desacop_partition_offd::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_desacop_partition_offd = 392;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition_offd = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition_offd[] = 
{
"CgAAACwAAAAGAAAABAAAAAQAAAADAAAACAAAAAMAAAAEAAAABQAAAAUAAAADAAAABQAAAAEAAAACAAAABQAAAAYAAAABAAAAAgAAAAUAAAAGAAAAAwAAAAQAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAkAAAABAAAAAgAAAAUAAAABAAAAAgAAAAUAAAAGAAAAAQAAAAIAAAAFAAAABgAAAAcAAAABAAAAAgAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAABQAAAAYAAAAKAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_desacop_partition_offd;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_desacop_partition_offd;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_desacop_partition_offd;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_desacop_partition_offd(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_desacop_partition_offd(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_desacop_partition_offd(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_desacop_partition_offd(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_desacop_partition_offd(name,dirInstall);
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
	sprintf(partitionName,"%s","partition_offd");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_desacop.partition_offd");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

