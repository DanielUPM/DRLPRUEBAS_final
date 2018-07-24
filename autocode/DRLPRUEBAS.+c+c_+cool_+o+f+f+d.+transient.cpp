//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_Transient_CPP
#define DRLPRUEBAS__CC_Cool_OFFD_Transient_CPP

#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+transient.h"

DRLPRUEBAS__CC_Cool_OFFD_Transient* DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current= NULL;

DRLPRUEBAS__CC_Cool_OFFD_Transient::DRLPRUEBAS__CC_Cool_OFFD_Transient(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_OFFD";
m_infoPartitionName = "Transient";
m_infoModelName = "DRLPRUEBAS__CC_Cool_OFFD_Transient";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+transient";
m_infoModelFileNameExtra = "+c+c_+cool_+o+f+f+d.+transient";
m_perfFlag = false;
m_infoComponentDate = "19/06/2018 13:24:39.701000";
m_infoPartitionDate = "20/06/2018 10:13:35.780000";
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
		7547798.88, 2, 10, 5e-05, 0.000583419, 0.058, 0.00186104204, 0, 0.5, 0, 10, 0, 0, 2.70069069, 1, 0, 
		0, 0.000580606872, 0, 0.5, 0, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 1, 16.3526821, 0, 3469188.99, 
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Transient::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_OFFD_Transient::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_OFFD_Transient::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-66]  CombCha_1.f_O.p_c = LO2_circuit.pt / Injector_O.PR
unkR[61] = _div( unkR[297] , dyn[4],"Injector_O.PR") ;
//[E-67]  Injector_F.PR = Injector_F.f_in.pt / CombCha_1.f_O.p_c
unkR[282] = _div( unkR[286] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-68]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[281] = _sqrt(_div( 2. * (_pow( unkR[282] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[281] = 1. ;
else unkR[281] = 0. ;
//[E-69]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[287]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-70]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[278] * LPRES__FGAMMA(&unkR[31]) * unkR[286] , _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[281] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[281],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[278] * unkR[280] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[286] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
}
//[E-71]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-72]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[298]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-73]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[292] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[292] = 1. ;
else unkR[292] = 0. ;
//[E-74]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[289] * LPRES__FGAMMA(&unkR[64]) * unkR[297] , _sqrt(unkR[296] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[292] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[292],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[289] * unkR[291] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[297] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-75]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Transient& m= *DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Transient& m= *DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-151]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Transient& m= *DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-155]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Transient& m= *DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[243]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[243]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[275], unkR[229]) ;
//[E-165]  Regulator_1.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[236],unkR[272] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[243]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Transient& m= *DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Transient& m= *DRLPRUEBAS__CC_Cool_OFFD_Transient::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Transient::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_OFFD_Transient::fres( double *_time, double dyn[], double der[], double res[] )
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
unkR[286] = unkR[236] - unkR[303] ;
//[E-7]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[283] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[283] = 0. ;
}
//[E-8]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[287] = _div( unkR[286] , unkR[283],"Injector_F.PR_sl") ;
}
else 
{
unkR[287] = 0. ;
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
unkR[62] = _div( unkR[296] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[292] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
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
unkR[279] = _div( _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[286]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[279] = 0. ;
}
//[E-174]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[288] = unkR[281] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[288] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[278] * unkR[280]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-175]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[284] = 0. ;
}
else 
{
unkR[284] = _div( LPRES__rho(&unkR[31]) * unkR[288] * unkR[280] * _sqrt(4. * unkR[278]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-176]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[290] = _div( _sqrt(unkR[296] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[297]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[290] = 0. ;
}
//[E-177]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[299] = unkR[292] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[299] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[289] * unkR[291]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-178]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[294] = 0. ;
}
else 
{
unkR[294] = _div( LPRES__rho(&unkR[64]) * unkR[299] * unkR[291] * _sqrt(4. * unkR[289]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::checkAsserts(double *_time)
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[282] - unkR[283]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[282] - unkR[283]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= dyn[4] - unkR[293]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= dyn[4] - unkR[293]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_Transient::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_OFFD_Transient::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_OFFD_Transient::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_OFFD_Transient::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_Transient = 55912;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Transient = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Transient[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_Transient;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Transient;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Transient;
return true;
}



bool DRLPRUEBAS__CC_Cool_OFFD_Transient::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_Transient = 480;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Transient = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Transient[] = 
{
"CgAAAD0AAAAGAAAABgAAAAYAAAAGAAAACAAAAAUAAAAGAAAABwAAAAcAAAADAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAoAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAEAAAACAAAAAwAAAAMAAAAEAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_Transient;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Transient;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Transient;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_OFFD_Transient(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_OFFD_Transient(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_OFFD_Transient(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_OFFD_Transient(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_OFFD_Transient(name,dirInstall);
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
	sprintf(partitionName,"%s","Transient");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+transient");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

