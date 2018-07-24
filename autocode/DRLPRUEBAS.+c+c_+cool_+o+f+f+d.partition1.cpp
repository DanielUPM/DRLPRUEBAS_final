//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_partition1_CPP
#define DRLPRUEBAS__CC_Cool_OFFD_partition1_CPP

#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.partition1.h"

DRLPRUEBAS__CC_Cool_OFFD_partition1* DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current= NULL;

DRLPRUEBAS__CC_Cool_OFFD_partition1::DRLPRUEBAS__CC_Cool_OFFD_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_OFFD";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__CC_Cool_OFFD_partition1";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.partition1";
m_infoModelFileNameExtra = "+c+c_+cool_+o+f+f+d.partition1";
m_perfFlag = false;
m_infoComponentDate = "18/06/2018 10:56:52.508000";
m_infoPartitionDate = "18/06/2018 13:05:03.668000";
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_partition1::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_OFFD_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_OFFD_partition1::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_partition1& m= *DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_partition1& m= *DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-151]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_partition1& m= *DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-155]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_partition1& m= *DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-165]  Regulator_1.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_partition1& m= *DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_partition1& m= *DRLPRUEBAS__CC_Cool_OFFD_partition1::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_partition1::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_OFFD_partition1::fres( double *_time, double dyn[], double der[], double res[] )
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::checkAsserts(double *_time)
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_partition1::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_OFFD_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_OFFD_partition1::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_OFFD_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_partition1 = 55912;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_partition1;
return true;
}



bool DRLPRUEBAS__CC_Cool_OFFD_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_partition1 = 480;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_partition1[] = 
{
"CgAAAD0AAAAGAAAABgAAAAYAAAAGAAAACAAAAAUAAAAGAAAABwAAAAcAAAADAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAoAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAEAAAACAAAAAwAAAAMAAAAEAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_OFFD_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_OFFD_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_OFFD_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_OFFD_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_OFFD_partition1(name,dirInstall);
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
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+o+f+f+d.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

