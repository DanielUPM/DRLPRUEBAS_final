//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_TBOFFD_partition3_CPP
#define DRLPRUEBAS__CC_Cool_TBOFFD_partition3_CPP

#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3.h"

DRLPRUEBAS__CC_Cool_TBOFFD_partition3* DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current= NULL;

DRLPRUEBAS__CC_Cool_TBOFFD_partition3::DRLPRUEBAS__CC_Cool_TBOFFD_partition3(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_TBOFFD";
m_infoPartitionName = "partition3";
m_infoModelName = "DRLPRUEBAS__CC_Cool_TBOFFD_partition3";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3";
m_infoModelFileNameExtra = "+c+c_+cool_+t+b+o+f+f+d.partition3";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 11:16:22.922000";
m_infoPartitionDate = "29/06/2018 12:37:20.473000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[9]; 
int nbx;
for (nbx=0; nbx < 9 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[3];
int ib;
for (ib=0; ib < 3 ; ib++)
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
static const char * elmstr9[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", "Gas_valve", NULL } ;
static int elmind9[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;
static int elmind10[] = { 8, 6 } ;
static const char * elmstr11[] = { "All", "Unknown_W", NULL } ;
static int elmind11[] = { 1, 2 } ;
static int elmind12[] = { 1, 5, 6, 7, 9 } ;
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
		{elmstr9,9,elmind9},
		{elmstr9,2,elmind10},
		{elmstr11,2,elmind11},
		{elmstr9,5,elmind12},
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

n_unkR=341;
unkR= new double[341] ;
static double tmp_unkRInit[341]={ 56.88798558, 14, 1, 0, 0.0134064493, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
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
		16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 
		10, 5e-05, 0.000583419, 0.058, 0.00175958778, 0, 0.5, 0, 0, 0, 2.70069069, 1, 1, 0, 0, 0.000580606872, 
		0, 0.5, 0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 31.3343538, 1, 7547798.88, 16.3526821, 0, 
		0.001, 0, 374105.846, 1500, 0.1, 1, 1200000, 0, 0, 0, 0, 0, 0, 0, 0.000667064834, 0, 
		1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 1, 0, 0.05, 1.8, 0, 
		0.7, 0.715093436, 0, 38172.635, 0 } ;
unkRInit= new double[341];
dcopy(341,unkRInit,tmp_unkRInit);


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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition3::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::initBlocks( double dyn[], double ldr[], double *_time )
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
	LPRES__Init_fluid(unkI[3], &unkR[242]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[242]), &unkR[31]) ;
	unkR[231] = 500. ;
	unkR[238] = _div( 1. , unkR[271],"CoolingJacket.mfr_ch") ;
	unkR[239] = _div( 1. , (unkR[271] * unkR[230]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Turbine.Turbine,0)
	unkR[321] = unkR[320] ;
	dyn[10] = unkR[323] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-69]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[284] , dyn[4],"Injector_F.PR") ;
//[E-70]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[285]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-71]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[291] = _div( unkR[296] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-72]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[290] = _sqrt(_div( 2. * (_pow( unkR[291] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[290] = 1. ;
else unkR[290] = 0. ;
//[E-73]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[297]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-74]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[287] * LPRES__FGAMMA(&unkR[64]) * unkR[296] , _sqrt(unkR[295] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[290] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[290],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[287] * unkR[289] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[296] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-75]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-76]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[279] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[279] = 1. ;
else unkR[279] = 0. ;
//[E-77]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[276] * LPRES__FGAMMA(&unkR[31]) * unkR[284] , _sqrt(unkR[283] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[279] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[279],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[276] * unkR[278] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[284] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-154]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-158]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[242]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[242]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-167]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[273], unkR[229]) ;
//[E-168]  Turbine.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[236],unkR[301] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[242]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-188]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Residues function for box 8*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fbox8(double *_time,double dyn[],double ldr[],double res[])
{
//[E-200]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[335] = _div( unkR[340] , _pow( dyn[10] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-201]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[332] = _div( (unkR[335] + 1.) , (tan(unkR[328] * 3.14159265358979/180.) - tan(unkR[329] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-202]  Turbine.phi = Turbine.V_z2 / Turbine.U
res[10] = evalNormResidueInternal(10,unkR[332],_div( unkR[325] , dyn[10],"Turbine.U"));
}


/* Wrapper to call the residues's box 8 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn8(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition3::s_current;
	m.printDbgInfoForModel(8,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox8(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(8,false);
}


/* Wrapper for the non-linear solver in box 8*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fhyb8(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fcn8, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 8);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::fres( double *_time, double dyn[], double der[], double res[] )
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
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[242]), &unkR[31]);
//[E-5]  Turbine.f_in.pt = CoolingJacket.rho_trans * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt
unkR[236] = dyn[2] * LPRES__R(&unkR[31]) * dyn[3] ;
//[E-6]  Regulator_1.f_in.pt = Turbine.f_in.pt / Turbine.pi
unkR[309] = _div( unkR[236] , unkR[334],"Turbine.pi") ;
//[E-7]  Injector_F.f_in.pt = Regulator_1.f_in.pt - Regulator_1.dp
unkR[284] = unkR[309] - unkR[306] ;
//[E-8]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (Regulator_1.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)))
unkR[327] = 1. - unkR[330] * (1. - _pow( (_div( unkR[309] , unkR[236],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Regulator_1.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" )) ;
//[E-9]  Injector_F.f_in.Tt = Turbine.alpha * CoolingJacket.g.Tt
unkR[283] = unkR[327] * dyn[3] ;
//[E-10]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[280] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[280] = 0. ;
}
//[E-11]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[285] = _div( unkR[284] , unkR[280],"Injector_F.PR_sl") ;
}
else 
{
unkR[285] = 0. ;
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
unkR[292] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[292] = 0. ;
}
//[E-68]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[297] = _div( unkR[296] , unkR[292],"Injector_O.PR_sl") ;
}
else 
{
unkR[297] = 0. ;
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
unkR[62] = _div( unkR[295] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[290] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[295] ;
}
//[E-150]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[283] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[279] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[283] ;
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
LPRES__Init_fluid(unkI[3], &unkR[242]);
//[E-164]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-165]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-169]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[242]) * LPRES__cp(&unkR[242]) , LPRES__cond(&unkR[242]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-170]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-171]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[237] = _div( unkR[227] * LPRES__cond(&unkR[242]) , unkR[225],"CoolingJacket.D_hy") ;
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
coef[0][1]= -(-(_div( unkR[240] , unkR[274],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[240] , unkR[274],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-175]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[237] * unkR[223]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[212] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[237] * -unkR[299] * unkR[223];

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
unkR[241] = dyn[8] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[242]) ;
//[E-177]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - CombCha_1.f_F.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[241] - unkR[30]) , (_div( unkR[275] , (unkR[272] * unkR[238]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-178]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - CombCha_1.f_F.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(CombCha_1.f_F.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[31]) * (unkR[241] * unkR[299] - unkR[30] * dyn[3])) , (_div( unkR[275] , (unkR[272] * unkR[239] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[31]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[31])),"CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid)") ;
//[E-179]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[277] = _div( _sqrt(unkR[283] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[284]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[277] = 0. ;
}
//[E-180]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[286] = unkR[279] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[286] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[276] * unkR[278]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-181]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[281] = 0. ;
}
else 
{
unkR[281] = _div( LPRES__rho(&unkR[31]) * unkR[286] * unkR[278] * _sqrt(4. * unkR[276]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-182]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[288] = _div( _sqrt(unkR[295] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[296]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[288] = 0. ;
}
//[E-183]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[298] = unkR[290] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[298] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[287] * unkR[289]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-184]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[293] = 0. ;
}
else 
{
unkR[293] = _div( LPRES__rho(&unkR[64]) * unkR[298] * unkR[289] * _sqrt(4. * unkR[287]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-185]  Regulator_1.M_g = 0
unkR[305] = 0. ;
//[E-186]  Regulator_1.rho_g = 0
unkR[311] = 0. ;
//[E-187]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[315] = LPRES__ISA_Pressure(unkR[303]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-189]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[312] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-190]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[316] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[9] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-191]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[317] = dyn[9] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[312],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-192]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[313] = dyn[5] * unkR[317] + unkR[2] * (unkR[316] - unkR[315]) ;
//[E-193]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[314] = unkR[313] ;
//[E-194]  Turbine.m.Power = CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.g.Tt - Injector_F.f_in.Tt)
unkR[322] = unkR[30] * LPRES__cp(&unkR[31]) * (dyn[3] - unkR[283]) ;
//[E-195]  Turbine.M_2 = MATH.min(Turbine.M, 1)
unkR[321] = MATH__min(unkR[320], 1.) ;
//[E-196]  Turbine.A_in_d = CombCha_1.f_F.W * sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Turbine.f_in.pt
unkR[319] = _div( _div( unkR[30] * _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)") , (_sqrt(LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)") * MATH__min(unkR[321], 1.) * cos(unkR[328] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( MATH__min(unkR[321], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[31]) + 1.)/2. , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"(1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" )),"sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))") , unkR[236],"Turbine.f_in.pt") ;
//[E-197]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[324] = unkR[321] * _sqrt(_div( LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[321] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-198]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[325] = unkR[324] * cos(unkR[328] * 3.14159265358979/180.) ;
//[E-199]  Turbine.tau = Turbine.m.Power / CombCha_1.f_F.W
unkR[340] = _div( unkR[322] , unkR[30],"CombCha_1.f_F.W") ;

if( restartB || m_solveInternalBox[8] ) 
    fhyb8(dyn,ldr,TOLERANCE,1,50);
else fbox8(_time,dyn,ldr,res) ;

//[E-203]  Turbine.m.N = Turbine.rpm * 2 * 3.14159265358979 / 60
unkR[331] = unkR[339] * 2. * 3.14159265358979/60. ;
//[E-204]  Turbine.r_m_d = Turbine.U / Turbine.m.N
unkR[338] = _div( dyn[10] , unkR[331],"Turbine.m.N") ;
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[242])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[316] , unkR[315],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(CombCha_1.f_F.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[4] - unkR[280]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[4] - unkR[280]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[291] - unkR[292]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[291] - unkR[292]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_TBOFFD_partition3::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_TBOFFD_partition3::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition3 = 63472;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition3 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition3[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition3;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition3;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition3;
return true;
}



bool DRLPRUEBAS__CC_Cool_TBOFFD_partition3::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition3 = 524;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition3 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition3[] = 
{
"CwAAAEMAAAAGAAAABgAAAAYAAAAGAAAACAAAAAUAAAAGAAAABwAAAAcAAAADAAAABwAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAIAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAgAAAADAAAABAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAALAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAQAAAAIAAAADAAAAAwAAAAQAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition3;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition3;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition3;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_TBOFFD_partition3(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_TBOFFD_partition3(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_TBOFFD_partition3(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_TBOFFD_partition3(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_TBOFFD_partition3(name,dirInstall);
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
	sprintf(partitionName,"%s","partition3");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

