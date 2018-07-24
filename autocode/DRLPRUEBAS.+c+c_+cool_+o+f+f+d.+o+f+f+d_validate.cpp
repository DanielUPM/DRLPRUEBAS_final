//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate_CPP
#define DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate_CPP

#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+o+f+f+d_validate.h"

DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate* DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current= NULL;

DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_OFFD";
m_infoPartitionName = "OFFD_validate";
m_infoModelName = "DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+o+f+f+d_validate";
m_infoModelFileNameExtra = "+c+c_+cool_+o+f+f+d.+o+f+f+d_validate";
m_perfFlag = false;
m_infoComponentDate = "18/06/2018 10:56:52.508000";
m_infoPartitionDate = "18/06/2018 11:26:17.264000";
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

m_branchZone= new int[3]; 
int nibr;
for (nibr=0; nibr < 3 ; nibr++)
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
static int elmind11[] = { 1, 5, 6, 7 } ;
static const char * elmstr12[] = { "Yes", "No", NULL } ;
static int elmind12[] = { 1, 2 } ;
n_typ=13;
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
		{elmstr8,4,elmind11},
		{elmstr12,2,elmind12}
	} ;
typ= new struct INTEG_enumType[13];
etypecopy(13,typ,tmp_typ);
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

n_unkR=313;
unkR= new double[313] ;
static double tmp_unkRInit[313]={ 56.88798558, 14, 1, 0, 0.0134261153, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
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
		7547798.88, 2, 10, 5e-05, 0.000583419, 0.058, 0.00186104204, 0, 0.5, 0, 0, 0, 2.70069069, 1, 0, 0, 
		0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 1, 16.3526821, 0, 3469188.99, 
		1500, 0.1, 1200000, 0, 0, 0, 0, 0, 0 } ;
unkRInit= new double[313];
dcopy(313,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=10;
static int tmp_cteIInit[10]={ 1, 4, 1, 8, 4, 4, 2, 2, 6, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=19;
static std::string tmp_cteSInit[19]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 61;
n_neld= 6;
m_numBoxes= 7;
m_nNonLinearBoxes= 6;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::initBlocks( double dyn[], double ldr[], double *_time )
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
	dyn[7] = 0.001 ;
	}
	else {
	dyn[7] = 100. ;
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
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-66]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[285] , dyn[4],"Injector_F.PR") ;
//[E-67]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[286]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-68]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[292] = _div( unkR[297] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-69]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[291] = _sqrt(_div( 2. * (_pow( unkR[292] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[291] = 1. ;
else unkR[291] = 0. ;
//[E-70]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[298]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-71]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[288] * LPRES__FGAMMA(&unkR[64]) * unkR[297] , _sqrt(unkR[296] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[291] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[291],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[288] * unkR[290] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[297] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-72]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-73]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[281] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[281] = 1. ;
else unkR[281] = 0. ;
//[E-74]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[278] * LPRES__FGAMMA(&unkR[31]) * unkR[285] , _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[281],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[278] * unkR[280] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[285] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
}
//[E-75]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-76]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-77]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-78]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-79]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-81]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-82]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-83]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-85]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-86]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-87]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-89]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-91]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-95]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-105]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-106]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[4] = evalNormResidueInternal(4,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate& m= *DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-111]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[5],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[5] = evalNormResidueInternal(5,dyn[5],_div( unkR[61] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate& m= *DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-151]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate& m= *DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-155]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate& m= *DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-165]  Regulator_1.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate& m= *DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate& m= *DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::fres( double *_time, double dyn[], double der[], double res[] )
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
//[E-5]  Regulator_1.f_in.pt = CoolingJacket.rho_trans * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt
unkR[236] = dyn[2] * LPRES__R(&unkR[31]) * dyn[3] ;
//[E-6]  Injector_F.f_in.pt = Regulator_1.f_in.pt - Regulator_1.dp
unkR[285] = unkR[236] - unkR[303] ;
//[E-7]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[282] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[282] = 0. ;
}
//[E-8]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[286] = _div( unkR[285] , unkR[282],"Injector_F.PR_sl") ;
}
else 
{
unkR[286] = 0. ;
}
//[E-9]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-60]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-61]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-62]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-63]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-64]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[293] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[293] = 0. ;
}
//[E-65]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[298] = _div( unkR[297] , unkR[293],"Injector_O.PR_sl") ;
}
else 
{
unkR[298] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-107]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[63] - unkR[24] ;
//[E-108]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-109]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-110]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-139]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[5]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-140]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-141]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-142]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-143]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-144]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-145]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-146]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[296] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[291] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[296] ;
}
//[E-147]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE CoolingJacket.g.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = dyn[3] ;
}
//[E-148]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-149]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-150]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[5],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[5],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[5],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[5] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-152]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-153]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
//[E-154]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-156]  CombCha_1.T_aw = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[7] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-157]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-158]  CombCha_1.A_r = CombCha_1.A_th * CombCha_1.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-159]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.f_O.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th / CombCha_1.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha_1.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , unkR[25],"CombCha_1.c_star")) , 0.8,"(CombCha_1.f_O.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th / CombCha_1.A_r)**(0.9)" ) ;
//[E-160]  LPRES.Init_fluid(LH2_circuit_1.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[3], &unkR[243]);
//[E-161]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-162]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-166]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[243]) * LPRES__cp(&unkR[243]) , LPRES__cond(&unkR[243]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-167]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-168]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[237] = _div( unkR[227] * LPRES__cond(&unkR[243]) , unkR[225],"CoolingJacket.D_hy") ;
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
coef[0][1]= -(-(_div( unkR[240] , unkR[276],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[240] , unkR[276],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-172]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
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
//[E-173]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[279] = _div( _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[285]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[279] = 0. ;
}
//[E-174]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[287] = unkR[281] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[287] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[278] * unkR[280]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-175]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = 0. ;
}
else 
{
unkR[283] = _div( LPRES__rho(&unkR[31]) * unkR[287] * unkR[280] * _sqrt(4. * unkR[278]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-176]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[289] = _div( _sqrt(unkR[296] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[297]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[289] = 0. ;
}
//[E-177]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[299] = unkR[291] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[299] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[288] * unkR[290]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-178]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[294] = 0. ;
}
else 
{
unkR[294] = _div( LPRES__rho(&unkR[64]) * unkR[299] * unkR[290] * _sqrt(4. * unkR[288]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-179]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[310] = LPRES__ISA_Pressure(unkR[302]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-181]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[307] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-182]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[311] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-183]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[312] = dyn[9] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[307],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-184]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[308] = dyn[5] * unkR[312] + unkR[2] * (unkR[311] - unkR[310]) ;
//[E-185]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[309] = unkR[308] ;
//[E-186]  CoolingJacket.l.W = CoolingJacket.v * CoolingJacket.N * CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)
unkR[242] = dyn[8] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[243]) ;
//[E-187]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - CombCha_1.f_F.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[242] - unkR[30]) , (_div( unkR[277] , (unkR[274] * unkR[238]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-188]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - CombCha_1.f_F.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(CombCha_1.f_F.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[31]) * (unkR[242] * unkR[241] - unkR[30] * dyn[3])) , (_div( unkR[277] , (unkR[274] * unkR[239] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[31]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[31])),"CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid)") ;
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
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[311] , unkR[310],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[4] - unkR[282]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[4] - unkR[282]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[292] - unkR[293]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[292] - unkR[293]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate = 55912;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate;
return true;
}



bool DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate = 480;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate[] = 
{
"CgAAAD0AAAAGAAAABgAAAAYAAAAGAAAACAAAAAUAAAAGAAAABwAAAAcAAAADAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAoAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAEAAAACAAAAAwAAAAMAAAAEAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_OFFD_OFFD_validate(name,dirInstall);
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
	sprintf(componentName,"%s","CC_Cool_OFFD");
	sprintf(partitionName,"%s","OFFD_validate");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+o+f+f+d_validate");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

