//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_Bypass_OFFD_CPP
#define DRLPRUEBAS__CC_Cool_Bypass_OFFD_CPP

#include "DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d.h"

DRLPRUEBAS__CC_Cool_Bypass_OFFD* DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current= NULL;

DRLPRUEBAS__CC_Cool_Bypass_OFFD::DRLPRUEBAS__CC_Cool_Bypass_OFFD(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_Bypass";
m_infoPartitionName = "OFFD";
m_infoModelName = "DRLPRUEBAS__CC_Cool_Bypass_OFFD";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d";
m_infoModelFileNameExtra = "+c+c_+cool_+bypass.+o+f+f+d";
m_perfFlag = false;
m_infoComponentDate = "21/06/2018 11:18:37.375000";
m_infoPartitionDate = "21/06/2018 11:19:03.146000";
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
n_dyn=13;
dyn= new double[13] ;
static double tmp_dynInit[13]={ 0, 1, 0, 1, 1, 1, 10, 1, 1, 100, 1, 1, 100 } ;
dynInit= new double[13];
dcopy(13,dynInit,tmp_dynInit);


n_der=4;
der= new double[13] ;
static double tmp_derInit[13]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
derInit= new double[13];
dcopy(13,derInit,tmp_derInit);


res= new double[13] ;
ldr= new double[13] ;
boxDyn= new double[13] ;
boxDer= new double[13] ;

static int tmp_frozenVars[4] = { 0,0,0,0 } ;
frozenVars= new int[4];
icopy(4,frozenVars,tmp_frozenVars);

n_unkR=347;
unkR= new double[347] ;
static double tmp_unkRInit[347]={ 56.88798558, 14, 1, 0, 0.0134064493, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		3300, 3180.92667, 0, 0, 2.7, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 
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
		1, 1, 16.3526821, 0, 374105.846, 1500, 0.1, 1, 1200000, 3472119.35, 1500, 0.1, 1, 1200000, 1, 1, 
		0, 0, 0, 0, 0, 0, 0.000511105991922416, 0.1, 0, 0, 10000, 0, 0, 5, 0, 45, 
		-75, 0.7353, 1, 0, 0.05, 1.8, 0, 0.7, 0.717359814, 38172.635, 0 } ;
unkRInit= new double[347];
dcopy(347,unkRInit,tmp_unkRInit);


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
n_nelg= 104;
n_neld= 6;
m_numBoxes= 8;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_Bypass_OFFD::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_Bypass_OFFD::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_Bypass_OFFD::initBlocks( double dyn[], double ldr[], double *_time )
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
	dyn[10] = 0.001 ;
	}
	else {
	dyn[10] = 100. ;
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
	dyn[5] = unkR[327] ;
	unkR[329] = unkR[330] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-15]  Turbine_1.m.Power = Junction.f_in2.W * LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.g.Tt - Junction.f_in2.Tt)
unkR[328] = dyn[4] * LPRES__cp(&unkR[31]) * (dyn[3] - unkR[303]) ;
//[E-16]  Turbine_1.tau = Turbine_1.m.Power / Junction.f_in2.W
unkR[346] = _div( unkR[328] , dyn[4],"Junction.f_in2.W") ;
//[E-17]  Turbine_1.psi = Turbine_1.tau / Turbine_1.U ** 2
unkR[342] = _div( unkR[346] , _pow( unkR[329] , 2.,"(Turbine_1.U)**(2)" ),"Turbine_1.U ** 2") ;
//[E-18]  Turbine_1.phi = (Turbine_1.psi + 1) / (tan(Turbine_1.alpha_2 * 3.14159265358979 / 180) - tan(Turbine_1.alpha_4r * 3.14159265358979 / 180))
unkR[339] = _div( (unkR[342] + 1.) , (tan(unkR[335] * 3.14159265358979/180.) - tan(unkR[336] * 3.14159265358979/180.)),"tan(Turbine_1.alpha_2 * 3.14159265358979 / 180) - tan(Turbine_1.alpha_4r * 3.14159265358979 / 180)") ;
//[E-19]  Turbine_1.V_z2 = Turbine_1.phi * Turbine_1.U
unkR[332] = unkR[339] * unkR[329] ;
//[E-20]  Turbine_1.V_2 = Turbine_1.V_z2 / cos(Turbine_1.alpha_2 * 3.14159265358979 / 180)
unkR[331] = _div( unkR[332] , cos(unkR[335] * 3.14159265358979/180.),"cos(Turbine_1.alpha_2 * 3.14159265358979 / 180)") ;
//[E-21]  Turbine_1.V_2 = Turbine_1.M_2 * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine_1.M_2 ** 2))
res[4] = evalNormResidueInternal(4,unkR[331],dyn[5] * _sqrt(_div( LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( dyn[5] , 2.,"(Turbine_1.M_2)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine_1.M_2 ** 2"),"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine_1.M_2 ** 2)"));
//[E-22]  Junction.f_in2.W * sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (Turbine_1.f_in.pt * Turbine_1.A_in) = sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine_1.M_2, 1) * cos(Turbine_1.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine_1.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( dyn[4] * _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)") , (unkR[319] * unkR[326]),"Turbine_1.f_in.pt * Turbine_1.A_in"),_sqrt(LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)") * MATH__min(dyn[5], 1.) * cos(unkR[335] * 3.14159265358979/180.) * _pow( (1 + (LPRES__gamma(&unkR[31]) - 1)/2 * _pow( MATH__min(dyn[5], 1.) , 2,"(MATH.min(Turbine_1.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[31]) + 1)/2 , (LPRES__gamma(&unkR[31]) - 1),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"(1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine_1.M_2, 1) ** 2)**(-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-82]  CombCha_1.f_O.p_c = LO2_circuit.pt / Injector_O.PR
unkR[61] = _div( unkR[298] , dyn[6],"Injector_O.PR") ;
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
	unkR[293] = _sqrt(_div( 2. * (_pow( dyn[6] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
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
unkR[30] = dyn[7] + dyn[4] ;
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
res[6] = evalNormResidueInternal(6,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
//[E-123]  Injector_F.f_in.Tt = (-(Junction.f_in1.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) * -CoolingJacket.g.Tt) - Junction.f_in2.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) * -Junction.f_in2.Tt) / (Junction.f_in1.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) + Junction.f_in2.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid))
unkR[286] = _div( (-(_div( dyn[7] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31]) * -dyn[3]) - _div( dyn[4] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31]) * -unkR[303]) , (_div( dyn[7] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31]) + _div( dyn[4] , unkR[30],"CombCha_1.f_F.W") * LPRES__cp(&unkR[31])),"Junction.f_in1.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) + Junction.f_in2.W / CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid)") ;
//[E-124]  CombCha_1.f_F.W =  IF (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
res[7] = evalNormResidueInternal(7,unkR[30],_div( _div( unkR[278] * LPRES__FGAMMA(&unkR[31]) * unkR[287] , _sqrt(unkR[286] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[31]) - 1) * _pow( unkR[281] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1) , (2 * (LPRES__gamma(&unkR[31]) - 1)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[281],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[7] = evalNormResidueInternal(7,unkR[30],unkR[278] * unkR[280] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[287] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"));
}
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn2, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-129]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-139]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-140]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-141]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-142]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-143]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-144]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-145]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-146]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-147]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-148]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-149]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-150]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-151]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-152]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-153]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-154]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-155]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[8],"ThrustMonitor.g.W") ;
//[E-156]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[8] = evalNormResidueInternal(8,dyn[8],_div( unkR[61] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn3, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-169]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[9] = evalNormResidueInternal(9,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[9] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[9] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn4, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-173]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[10] = evalNormResidueInternal(10,unkR[1],_div( _div( 1 , dyn[10],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[10] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(5);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn5, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-181]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[11] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-182]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-183]  SplitFrac.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[11] = evalNormResidueInternal(11,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[11] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn6, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 8*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fbox8(double *_time,double dyn[],double ldr[],double res[])
{
//[E-198]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[12] = evalNormResidueInternal(12,_div( _div( dyn[8] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[12] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[12] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 8 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn8(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_Bypass_OFFD& m= *DRLPRUEBAS__CC_Cool_Bypass_OFFD::s_current;
	m.printDbgInfoForModel(8,true);
	dcopy(*n,&m.boxDyn[12],x);
	m.fbox8(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[12]);
	m.printDbgInfoForModel(8,false);
}


/* Wrapper for the non-linear solver in box 8*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fhyb8(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(8);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_Bypass_OFFD::fcn8, n, &dyn[12], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 8);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::fres( double *_time, double dyn[], double der[], double res[] )
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
unkR[316] = unkR[236] * unkR[318] ;
//[E-7]  Junction.f_in1.pt = Regulator_1_1.f_in.pt - Regulator_1_1.dp
unkR[302] = unkR[316] - unkR[313] ;
//[E-8]  Injector_F.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[287] = unkR[302] * unkR[301] ;
//[E-9]  Turbine_1.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[319] = unkR[236] * unkR[318] ;
//[E-10]  Junction.f_in2.pt = Injector_F.f_in.pt / Junction.TPL
unkR[304] = _div( unkR[287] , unkR[301],"Junction.TPL") ;
//[E-11]  Regulator_1.f_in.pt = Junction.f_in2.pt + Regulator_1.dp
unkR[311] = unkR[304] + unkR[308] ;
//[E-12]  Turbine_1.alpha = 1 - Turbine_1.eta_d * (1 - (Regulator_1.f_in.pt / Turbine_1.f_in.pt) ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)))
unkR[334] = 1. - unkR[337] * (1. - _pow( (_div( unkR[311] , unkR[319],"Turbine_1.f_in.pt")) , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Regulator_1.f_in.pt / Turbine_1.f_in.pt)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" )) ;
//[E-13]  Junction.f_in2.Tt = Turbine_1.alpha * CoolingJacket.g.Tt
unkR[303] = unkR[334] * dyn[3] ;
//[E-14]  Turbine_1.U = Turbine_1.m.N * Turbine_1.r_m
unkR[329] = unkR[338] * unkR[344] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,2,50);
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
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[8]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
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
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[8],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[8],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[8],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[8] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

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
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[10] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[10] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
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
unkR[323] = LPRES__ISA_Pressure(unkR[307]) ;

if( restartB || m_solveInternalBox[8] ) 
    fhyb8(dyn,ldr,TOLERANCE,1,50);
else fbox8(_time,dyn,ldr,res) ;

//[E-199]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[320] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[12] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-200]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[324] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[12] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-201]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[325] = dyn[12] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[320],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-202]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[321] = dyn[8] * unkR[325] + unkR[2] * (unkR[324] - unkR[323]) ;
//[E-203]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[322] = unkR[321] ;
//[E-204]  CoolingJacket.l.W = CoolingJacket.v * CoolingJacket.N * CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)
unkR[242] = dyn[11] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[243]) ;
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
memcpy(this->res,res,13*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[12] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[324] , unkR[323],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[12] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine_1.","Gas == LPRES.State(CombCha_1.f_F.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[282] - unkR[283]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[282] - unkR[283]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= dyn[6] - unkR[294]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= dyn[6] - unkR[294]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_Bypass_OFFD::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_Bypass_OFFD::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_Bypass_OFFD::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD = 72236;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD;
return true;
}



bool DRLPRUEBAS__CC_Cool_Bypass_OFFD::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD = 744;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD[] = 
{
"DQAAAGgAAAAGAAAACQAAAAkAAAAJAAAACwAAAAQAAAAEAAAACAAAAAgAAAAJAAAACgAAAAoAAAADAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAADAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAsAAAAMAAAAAwAAAAQAAAAFAAAABgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAsAAAADAAAABAAAAAwAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAANAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_Bypass_OFFD;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_Bypass_OFFD;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_Bypass_OFFD;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_Bypass_OFFD(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_Bypass_OFFD(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_Bypass_OFFD(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_Bypass_OFFD(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_Bypass_OFFD(name,dirInstall);
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
	sprintf(partitionName,"%s","OFFD");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

