//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_TBOFFD_partition2_CPP
#define DRLPRUEBAS__CC_Cool_TBOFFD_partition2_CPP

#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition2.h"

DRLPRUEBAS__CC_Cool_TBOFFD_partition2* DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current= NULL;

DRLPRUEBAS__CC_Cool_TBOFFD_partition2::DRLPRUEBAS__CC_Cool_TBOFFD_partition2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_TBOFFD";
m_infoPartitionName = "partition2";
m_infoModelName = "DRLPRUEBAS__CC_Cool_TBOFFD_partition2";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition2";
m_infoModelFileNameExtra = "+c+c_+cool_+t+b+o+f+f+d.partition2";
m_perfFlag = false;
m_infoComponentDate = "19/06/2018 13:24:42.742000";
m_infoPartitionDate = "20/06/2018 10:17:48.725000";
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
n_dyn=11;
dyn= new double[11] ;
static double tmp_dynInit[11]={ 0, 1, 0, 1, 10, 1, 100, 1, 1, 100, 1 } ;
dynInit= new double[11];
dcopy(11,dynInit,tmp_dynInit);


n_der=4;
der= new double[11] ;
static double tmp_derInit[11]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[11];
dcopy(11,derInit,tmp_derInit);


res= new double[11] ;
ldr= new double[11] ;
boxDyn= new double[11] ;
boxDer= new double[11] ;

static int tmp_frozenVars[4] = { 0,0,0,0 } ;
frozenVars= new int[4];
icopy(4,frozenVars,tmp_frozenVars);

n_unkR=338;
unkR= new double[338] ;
static double tmp_unkRInit[338]={ 56.88798558, 14, 1, 0, 0.0134064493, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
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
		7547798.88, 2, 10, 5e-05, 0.000583419, 0.058, 0.00175958778, 0, 0.5, 0, 0, 0, 2.70069069, 1, 1, 0, 
		0, 0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 1, 16.3526821, 0, 
		374105.846, 1500, 0.1, 1, 1200000, 0, 0, 0, 0, 0, 0, 0.005, 0, 1, 0, 0, 
		10000, 0, 0, 5, 0, 45, -75, 0.7353, 1, 0, 0.05, 1.8, 0, 0.7, 0.01, 0, 
		38172.635, 0 } ;
unkRInit= new double[338];
dcopy(338,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=12;
static int tmp_cteIInit[12]={ 1, 4, 1, 8, 4, 4, 2, 2, 6, 1, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 67;
n_neld= 6;
m_numBoxes= 8;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition2::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
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
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[243]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[243]), &unkR[31]) ;
	unkR[231] = 500. ;
	unkR[238] = _div( 1. , unkR[273],"CoolingJacket.mfr_ch") ;
	unkR[239] = _div( 1. , (unkR[273] * unkR[230]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Turbine.Turbine,0)
	unkR[318] = unkR[317] ;
	dyn[10] = unkR[320] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-69]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[286] , dyn[4],"Injector_F.PR") ;
//[E-70]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[287]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-71]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[293] = _div( unkR[298] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-72]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[292] = _sqrt(_div( 2. * (_pow( unkR[293] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[292] = 1. ;
else unkR[292] = 0. ;
//[E-73]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[299]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-74]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[289] * LPRES__FGAMMA(&unkR[64]) * unkR[298] , _sqrt(unkR[297] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[292] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[292],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[289] * unkR[291] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[298] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-75]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-76]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[281] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[281] = 1. ;
else unkR[281] = 0. ;
//[E-77]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[278] * LPRES__FGAMMA(&unkR[31]) * unkR[286] , _sqrt(unkR[285] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[281],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[278] * unkR[280] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[286] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
}
//[E-78]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-79]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-80]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-81]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-82]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-83]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-85]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-86]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-87]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-89]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-91]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-95]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-105]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-106]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-107]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-109]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[4] = evalNormResidueInternal(4,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-114]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-139]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-140]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-141]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[5] = evalNormResidueInternal(5,dyn[5],_div( unkR[61] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-154]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-158]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-167]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-168]  Turbine.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-186]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(7);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Residues function for box 8*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fbox8(double *_time,double dyn[],double ldr[],double res[])
{
//[E-198]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[332] = _div( unkR[337] , _pow( dyn[10] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-199]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[329] = _div( (unkR[332] + 1.) , (tan(unkR[325] * 3.14159265358979/180.) - tan(unkR[326] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-200]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[10] = evalNormResidueInternal(10,unkR[329],_div( unkR[322] , dyn[10],"Turbine.U"));
}


/* Wrapper to call the residues's box 8 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn8(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition2& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition2::s_current;
	m.printDbgInfoForModel(8,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox8(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(8,false);
}


/* Wrapper for the non-linear solver in box 8*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fhyb8(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(8);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fcn8, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 8);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  LPRES.Init_fluid(LPRES.Vaporisation(CoolingJacket.l.fluid), CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[243]), &unkR[31]);
//[E-5]  Turbine.f_in.pt = CoolingJacket.rho_trans * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt
unkR[236] = dyn[2] * LPRES__R(&unkR[31]) * dyn[3] ;
//[E-6]  Regulator_1.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[307] = _div( unkR[236] , unkR[331],"Turbine.pi") ;
//[E-7]  Injector_F.f_in.pt = Regulator_1.f_in.pt - Regulator_1.dp
unkR[286] = unkR[307] - unkR[304] ;
//[E-8]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (Regulator_1.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)))
unkR[324] = 1. - unkR[327] * (1. - _pow( (_div( unkR[307] , unkR[236],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Regulator_1.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" )) ;
//[E-9]  Injector_F.f_in.Tt = Turbine.alpha * CoolingJacket.g.Tt
unkR[285] = unkR[324] * dyn[3] ;
//[E-10]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[282] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[282] = 0. ;
}
//[E-11]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[287] = _div( unkR[286] , unkR[282],"Injector_F.PR_sl") ;
}
else 
{
unkR[287] = 0. ;
}
//[E-12]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-60]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-61]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-62]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-63]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-64]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-65]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-66]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-67]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[294] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[294] = 0. ;
}
//[E-68]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[299] = _div( unkR[298] , unkR[294],"Injector_O.PR_sl") ;
}
else 
{
unkR[299] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-110]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[63] - unkR[24] ;
//[E-111]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-112]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-113]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-142]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[5]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-143]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-144]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-145]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-146]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-147]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-148]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-149]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[297] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[292] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[297] ;
}
//[E-150]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[285] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[285] ;
}
//[E-151]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-152]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-153]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[5],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[5],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[5] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-155]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-156]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
//[E-157]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-159]  CombCha_1.T_aw = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-160]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-161]  CombCha_1.A_r = CombCha_1.A_th * CombCha_1.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-162]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.f_O.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th / CombCha_1.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha_1.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , unkR[25],"CombCha_1.c_star")) , 0.8,"(CombCha_1.f_O.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th / CombCha_1.A_r)**(0.9)" ) ;
//[E-163]  LPRES.Init_fluid(LH2_circuit_1.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[3], &unkR[243]);
//[E-164]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-165]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-169]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[243]) * LPRES__cp(&unkR[243]) , LPRES__cond(&unkR[243]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-170]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-171]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[237] = _div( unkR[227] * LPRES__cond(&unkR[243]) , unkR[225],"CoolingJacket.D_hy") ;
//[E-172]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[223] = unkI[2] * 2. * (unkR[232] + unkR[233]) * unkR[226] ;
//-------------------------------------------------------------
// BOX 6 SOLVED LINEARLY
//-------------------------------------------------------------
{
double coef[3][3], indep[3];
int n= 3,nrhs= 1 ,ipiv[3],info;
//[E-173]  CoolingJacket.h.Q = CombCha_1.h_g * (CombCha_1.T_aw - CoolingJacket.h.T) * CombCha_1.A_wet
coef[0][0]= 0;// CoolingJacket.T_w_cold
coef[1][0]= 1;// CoolingJacket.h.Q
coef[2][0]= -(-unkR[212] * unkR[5]);// CoolingJacket.h.T
//[E-174]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha_1.A_wet
coef[0][1]= -(-(_div( unkR[240] , unkR[276],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[240] , unkR[276],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-175]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[237] * unkR[223]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[212] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[237] * -unkR[241] * unkR[223];

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
//[E-176]  CoolingJacket.l.W = CoolingJacket.v * CoolingJacket.N * CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)
unkR[242] = dyn[8] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[243]) ;
//[E-177]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - CombCha_1.f_F.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[242] - unkR[30]) , (_div( unkR[277] , (unkR[274] * unkR[238]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-178]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - CombCha_1.f_F.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(CombCha_1.f_F.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[31]) * (unkR[242] * unkR[241] - unkR[30] * dyn[3])) , (_div( unkR[277] , (unkR[274] * unkR[239] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[31]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[31])),"CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid)") ;
//[E-179]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[279] = _div( _sqrt(unkR[285] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[286]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[279] = 0. ;
}
//[E-180]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[288] = unkR[281] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[288] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[278] * unkR[280]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-181]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = 0. ;
}
else 
{
unkR[283] = _div( LPRES__rho(&unkR[31]) * unkR[288] * unkR[280] * _sqrt(4. * unkR[278]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-182]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[290] = _div( _sqrt(unkR[297] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[298]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[290] = 0. ;
}
//[E-183]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[300] = unkR[292] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[300] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[289] * unkR[291]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-184]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[295] = 0. ;
}
else 
{
unkR[295] = _div( LPRES__rho(&unkR[64]) * unkR[300] * unkR[291] * _sqrt(4. * unkR[289]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-185]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[312] = LPRES__ISA_Pressure(unkR[303]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-187]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[309] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-188]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[313] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-189]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[314] = dyn[9] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[309],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-190]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[310] = dyn[5] * unkR[314] + unkR[2] * (unkR[313] - unkR[312]) ;
//[E-191]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[311] = unkR[310] ;
//[E-192]  Turbine.m.Power = CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.g.Tt - Injector_F.f_in.Tt)
unkR[319] = unkR[30] * LPRES__cp(&unkR[31]) * (dyn[3] - unkR[285]) ;
//[E-193]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[318] = MATH__min(unkR[317], 1.) ;
//[E-194]  Turbine.A_in_d = CombCha_1.f_F.W * sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Turbine.f_in.pt
unkR[316] = _div( _div( unkR[30] * _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)") , (_sqrt(LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)") * MATH__min(unkR[318], 1.) * cos(unkR[325] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( MATH__min(unkR[318], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[31]) + 1.)/2. , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"(1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" )),"sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))") , unkR[236],"Turbine.f_in.pt") ;
//[E-195]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[321] = unkR[318] * _sqrt(_div( LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[318] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-196]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[322] = unkR[321] * cos(unkR[325] * 3.14159265358979/180.) ;
//[E-197]  Turbine.tau = Turbine.m.Power / CombCha_1.f_F.W
unkR[337] = _div( unkR[319] , unkR[30],"CombCha_1.f_F.W") ;

if( restartB || m_solveInternalBox[8] ) 
    fhyb8(dyn,ldr,TOLERANCE,1,50);
else fbox8(_time,dyn,ldr,res) ;

//[E-201]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[328] = unkR[336] * 2. * 3.14159265358979/60. ;
//[E-202]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[335] = _div( dyn[10] , unkR[328],"Turbine.m.N") ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);
res[2]= evalNormResidueInternal(2,der[2],ldr[2]);
res[3]= evalNormResidueInternal(3,der[3],ldr[3]);

if( restartB )
     dcopy(4,der,ldr);

//save last residues
memcpy(this->res,res,11*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[313] , unkR[312],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(CombCha_1.f_F.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[4] - unkR[282]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[4] - unkR[282]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[293] - unkR[294]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[293] - unkR[294]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_TBOFFD_partition2::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition2::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_TBOFFD_partition2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition2 = 62844;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition2;
return true;
}



bool DRLPRUEBAS__CC_Cool_TBOFFD_partition2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition2 = 524;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition2[] = 
{
"CwAAAEMAAAAGAAAABgAAAAYAAAAGAAAACAAAAAUAAAAGAAAABwAAAAcAAAADAAAABwAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAIAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAgAAAADAAAABAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAALAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAQAAAAIAAAADAAAAAwAAAAQAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_TBOFFD_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_TBOFFD_partition2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_TBOFFD_partition2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_TBOFFD_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_TBOFFD_partition2(name,dirInstall);
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
	sprintf(componentName,"%s","CC_Cool_TBOFFD");
	sprintf(partitionName,"%s","partition2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

