//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_TBOFFD_partition1_CPP
#define DRLPRUEBAS__CC_Cool_TBOFFD_partition1_CPP

#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition1.h"

DRLPRUEBAS__CC_Cool_TBOFFD_partition1* DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current= NULL;

DRLPRUEBAS__CC_Cool_TBOFFD_partition1::DRLPRUEBAS__CC_Cool_TBOFFD_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_TBOFFD";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__CC_Cool_TBOFFD_partition1";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition1";
m_infoModelFileNameExtra = "+c+c_+cool_+t+b+o+f+f+d.partition1";
m_perfFlag = false;
m_infoComponentDate = "21/06/2018 10:58:18.464000";
m_infoPartitionDate = "21/06/2018 11:02:04.461000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[8]; 
int nbx;
for (nbx=0; nbx < 8 ; nbx++)
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
n_dyn=11;
dyn= new double[11] ;
static double tmp_dynInit[11]={ 0, 1, 0, 1, 10, 1, 1, 100, 1, 1, 100 } ;
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

n_unkR=336;
unkR= new double[336] ;
static double tmp_unkRInit[336]={ 56.88798558, 14, 1, 0, 0.0134064493, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
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
		374105.846, 1500, 0.1, 1, 1200000, 0, 0, 0, 0, 0, 0, 0.000667064834, 1, 0, 0, 10000, 
		0, 0, 5, 0, 45, -75, 0.7353, 1, 0, 0.05, 1.8, 0, 0.7, 0.715093436, 38172.635, 0 } ;
unkRInit= new double[336];
dcopy(336,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=12;
static int tmp_cteIInit[12]={ 1, 4, 1, 8, 4, 4, 2, 2, 6, 1, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 76;
n_neld= 6;
m_numBoxes= 7;
m_nNonLinearBoxes= 6;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_TBOFFD_partition1::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::initBlocks( double dyn[], double ldr[], double *_time )
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
	dyn[8] = 0.001 ;
	}
	else {
	dyn[8] = 100. ;
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
	dyn[5] = unkR[316] ;
	unkR[318] = unkR[319] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-65]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[281] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[281] = 1. ;
else unkR[281] = 0. ;
//[E-66]  CombCha_1.f_F.W * sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (Turbine.f_in.pt * Turbine.A_in) = sqrt(LPRES.gamma(CombCha_1.f_F.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))
unkR[30] = _div( _sqrt(LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)") * MATH__min(dyn[5], 1.) * cos(unkR[324] * 3.14159265358979/180.) * _pow( (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( MATH__min(dyn[5], 1.) , 2.,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[31]) + 1.)/2. , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"(1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2 / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) * unkR[236] * unkR[315] , _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid))") ;
//[E-67]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-68]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2))
unkR[320] = dyn[5] * _sqrt(_div( LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( dyn[5] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Turbine.M_2 ** 2)") ;
//[E-69]  Turbine.V_z2 = Turbine.V_2 * cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[321] = unkR[320] * cos(unkR[324] * 3.14159265358979/180.) ;
//[E-70]  Turbine.phi = Turbine.V_z2 / Turbine.U
unkR[328] = _div( unkR[321] , unkR[318],"Turbine.U") ;
//[E-71]  Turbine.psi = Turbine.phi * (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)) - 1
unkR[331] = unkR[328] * (tan(unkR[324] * 3.14159265358979/180.) - tan(unkR[325] * 3.14159265358979/180.)) - 1. ;
//[E-72]  Turbine.tau = Turbine.psi * Turbine.U ** 2
unkR[335] = unkR[331] * _pow( unkR[318] , 2.,"(Turbine.U)**(2)" ) ;
//[E-73]  Turbine.m.Power = Turbine.tau * CombCha_1.f_F.W
unkR[317] = unkR[335] * unkR[30] ;
//[E-74]  Injector_F.f_in.Tt = CoolingJacket.g.Tt - Turbine.m.Power / (CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid))
unkR[285] = dyn[3] - _div( unkR[317] , (unkR[30] * LPRES__cp(&unkR[31])),"CombCha_1.f_F.W * LPRES.cp(CombCha_1.f_F.fluid)") ;
//[E-75]  Turbine.alpha = Injector_F.f_in.Tt / CoolingJacket.g.Tt
unkR[323] = _div( unkR[285] , dyn[3],"CoolingJacket.g.Tt") ;
//[E-76]  Regulator_1.f_in.pt = (1 - (1 - Turbine.alpha) / Turbine.eta_d) ** (1 / ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))) * Turbine.f_in.pt
unkR[307] = _pow( (1. - _div( (1. - unkR[323]) , unkR[326],"Turbine.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)")),"(1 - (1 - Turbine.alpha) / Turbine.eta_d)**(1 / ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)))" ) * unkR[236] ;
//[E-77]  Injector_F.f_in.pt = Regulator_1.f_in.pt - Regulator_1.dp
unkR[286] = unkR[307] - unkR[304] ;
//[E-78]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[286] , dyn[4],"Injector_F.PR") ;
//[E-79]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[293] = _div( unkR[298] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-80]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[292] = _sqrt(_div( 2. * (_pow( unkR[293] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[292] = 1. ;
else unkR[292] = 0. ;
//[E-81]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[299]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-82]  CombCha_1.f_O.W =  IF (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[289] * LPRES__FGAMMA(&unkR[64]) * unkR[298] , _sqrt(unkR[297] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[292] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[292],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[289] * unkR[291] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[298] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-83]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-84]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-85]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-86]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-87]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-89]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-91]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-95]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-105]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-106]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-107]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-109]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-110]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-111]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-112]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-113]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-114]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[4] = evalNormResidueInternal(4,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
//[E-115]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[287] = _div( unkR[286] , unkR[282],"Injector_F.PR_sl") ;
}
else 
{
unkR[287] = 0. ;
}
//[E-116]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[287]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-117]  CombCha_1.f_F.W =  IF (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
res[5] = evalNormResidueInternal(5,unkR[30],_div( _div( unkR[278] * LPRES__FGAMMA(&unkR[31]) * unkR[286] , _sqrt(unkR[285] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[31]) - 1) * _pow( unkR[281] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1) , (2 * (LPRES__gamma(&unkR[31]) - 1)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[281],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[5] = evalNormResidueInternal(5,unkR[30],unkR[278] * unkR[280] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[286] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"));
}
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-122]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-137]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-138]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-139]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-140]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-141]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-142]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-143]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-144]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-145]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-146]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-147]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-148]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-149]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[6] = evalNormResidueInternal(6,dyn[6],_div( unkR[61] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn2, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-162]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn3, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[8] = evalNormResidueInternal(8,unkR[1],_div( _div( 1 , dyn[8],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[8] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn4, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-174]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[9] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-175]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-176]  Turbine.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[9] = evalNormResidueInternal(9,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[9] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn5, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-194]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[10] = evalNormResidueInternal(10,_div( _div( dyn[6] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[10] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[10] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1& m= *DRLPRUEBAS__CC_Cool_TBOFFD_partition1::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::fres( double *_time, double dyn[], double der[], double res[] )
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
//[E-6]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[282] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[282] = 0. ;
}
//[E-7]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[318] = unkR[327] * unkR[333] ;
//[E-8]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-9]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-60]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-61]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-62]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-63]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[294] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[294] = 0. ;
}
//[E-64]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[299] = _div( unkR[298] , unkR[294],"Injector_O.PR_sl") ;
}
else 
{
unkR[299] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,2,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-118]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[63] - unkR[24] ;
//[E-119]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-120]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-121]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-150]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[6]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-151]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-152]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-153]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-154]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-155]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-156]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-157]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[297] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[292] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[297] ;
}
//[E-158]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[285] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[285] ;
}
//[E-159]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-160]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-161]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[6],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[6],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[6] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-163]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-164]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
//[E-165]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-167]  CombCha_1.T_aw = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( dyn[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-168]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.T_aw ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.T_aw)**(0.6)" ) ;
//[E-169]  CombCha_1.A_r = CombCha_1.A_th * CombCha_1.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-170]  CombCha_1.h_g = 0.026 / sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2 * CombCha_1.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha_1.Pr_r ** 0.6 * (CombCha_1.f_O.p_c / CombCha_1.c_star) ** 0.8 * (CombCha_1.A_th / CombCha_1.A_r) ** 0.9
unkR[212] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha_1.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha_1.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha_1.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[222] , 0.2,"(CombCha_1.visc_r)**(0.2)" ) * LPRES__cp(&unkR[181]) , _pow( unkR[11] , 0.6,"(CombCha_1.Pr_r)**(0.6)" ),"CombCha_1.Pr_r ** 0.6") * _pow( (_div( unkR[61] , unkR[25],"CombCha_1.c_star")) , 0.8,"(CombCha_1.f_O.p_c / CombCha_1.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha_1.A_r")) , 0.9,"(CombCha_1.A_th / CombCha_1.A_r)**(0.9)" ) ;
//[E-171]  LPRES.Init_fluid(LH2_circuit_1.fluid, CoolingJacket.l.fluid) %%% (OUT VAR)CoolingJacket.l.fluid 
LPRES__Init_fluid(unkI[3], &unkR[243]);
//[E-172]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-173]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-177]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[243]) * LPRES__cp(&unkR[243]) , LPRES__cond(&unkR[243]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-178]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-179]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[237] = _div( unkR[227] * LPRES__cond(&unkR[243]) , unkR[225],"CoolingJacket.D_hy") ;
//[E-180]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[223] = unkI[2] * 2. * (unkR[232] + unkR[233]) * unkR[226] ;
//-------------------------------------------------------------
// BOX 6 SOLVED LINEARLY
//-------------------------------------------------------------
{
double coef[3][3], indep[3];
int n= 3,nrhs= 1 ,ipiv[3],info;
//[E-181]  CoolingJacket.h.Q = CombCha_1.h_g * (CombCha_1.T_aw - CoolingJacket.h.T) * CombCha_1.A_wet
coef[0][0]= 0;// CoolingJacket.T_w_cold
coef[1][0]= 1;// CoolingJacket.h.Q
coef[2][0]= -(-unkR[212] * unkR[5]);// CoolingJacket.h.T
//[E-182]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha_1.A_wet
coef[0][1]= -(-(_div( unkR[240] , unkR[276],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[240] , unkR[276],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-183]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
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
//[E-184]  CoolingJacket.l.W = CoolingJacket.v * CoolingJacket.N * CoolingJacket.a * CoolingJacket.b * LPRES.rho(CoolingJacket.l.fluid)
unkR[242] = dyn[9] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[243]) ;
//[E-185]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - CombCha_1.f_F.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[242] - unkR[30]) , (_div( unkR[277] , (unkR[274] * unkR[238]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-186]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - CombCha_1.f_F.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(CombCha_1.f_F.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[31]) * (unkR[242] * unkR[241] - unkR[30] * dyn[3])) , (_div( unkR[277] , (unkR[274] * unkR[239] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[31]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[31])),"CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid)") ;
//[E-187]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[279] = _div( _sqrt(unkR[285] * LPRES__R(&unkR[31]),"Injector_F.f_in.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[286]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[279] = 0. ;
}
//[E-188]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[288] = unkR[281] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[288] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[278] * unkR[280]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-189]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = 0. ;
}
else 
{
unkR[283] = _div( LPRES__rho(&unkR[31]) * unkR[288] * unkR[280] * _sqrt(4. * unkR[278]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-190]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[290] = _div( _sqrt(unkR[297] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[298]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[290] = 0. ;
}
//[E-191]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[300] = unkR[292] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[300] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[289] * unkR[291]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-192]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[295] = 0. ;
}
else 
{
unkR[295] = _div( LPRES__rho(&unkR[64]) * unkR[300] * unkR[291] * _sqrt(4. * unkR[289]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-193]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[312] = LPRES__ISA_Pressure(unkR[303]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-195]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[309] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[10] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-196]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[313] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[10] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-197]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[314] = dyn[10] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[309],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-198]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[310] = dyn[6] * unkR[314] + unkR[2] * (unkR[313] - unkR[312]) ;
//[E-199]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[311] = unkR[310] ;
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[243])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[10] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[313] , unkR[312],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[10] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(CombCha_1.f_F.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_TBOFFD_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_TBOFFD_partition1::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_TBOFFD_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition1 = 63852;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition1;
return true;
}



bool DRLPRUEBAS__CC_Cool_TBOFFD_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition1 = 572;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition1[] = 
{
"CwAAAEwAAAAGAAAABwAAAAcAAAAHAAAACQAAAAYAAAAGAAAABwAAAAgAAAAIAAAAAwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACQAAAAMAAAAEAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAALAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAQAAAAIAAAADAAAAAwAAAAQAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_TBOFFD_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_TBOFFD_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_TBOFFD_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_TBOFFD_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_TBOFFD_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_TBOFFD_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_TBOFFD_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_TBOFFD_partition1(name,dirInstall);
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
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

