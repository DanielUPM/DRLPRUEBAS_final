//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_Escalon_CPP
#define DRLPRUEBAS__CC_Cool_OFFD_Escalon_CPP

#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+escalon.h"

DRLPRUEBAS__CC_Cool_OFFD_Escalon* DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current= NULL;

DRLPRUEBAS__CC_Cool_OFFD_Escalon::DRLPRUEBAS__CC_Cool_OFFD_Escalon(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Cool_OFFD";
m_infoPartitionName = "Escalon";
m_infoModelName = "DRLPRUEBAS__CC_Cool_OFFD_Escalon";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+escalon";
m_infoModelFileNameExtra = "+c+c_+cool_+o+f+f+d.+escalon";
m_perfFlag = false;
m_infoComponentDate = "14/06/2018 13:17:50.550000";
m_infoPartitionDate = "14/06/2018 13:51:33.782000";
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
static double tmp_unkRInit[313]={ 56.8879856, 14, 1, 0, 0.0134006297, 2.52112871, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		4000, 3000, 0, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 
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
		1, 1, 0, 1, 0, 0, 0, 0, 10, 5000000, 5000000, 0, 1, 0.032, 0, 0, 
		0, 0, 1.475994, 0, 0, 0, 150, 0, 0.001001035, 0.008132748, 100000, 0, 1, 0, 0, 0, 
		16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 
		10, 5e-05, 0.000583419, 0.058, 0.000478441426, 0, 0.5, 0, 0, 0, 100, 1, 0, 0, 0.000580606872, 0, 
		0.5, 0, 10, 0, 0, 100, 99.1952397, 4597104.18, 0, 0, 31.3343538, 1, 7547798.88, 1, 0, 100000, 
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
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::initInternalModels()
{
}

void DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__CC_Cool_OFFD_Escalon::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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

void DRLPRUEBAS__CC_Cool_OFFD_Escalon::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Cool_OFFD_Escalon::initBlocks( double dyn[], double ldr[], double *_time )
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
	LPRES__Init_fluid(unkI[3], &unkR[242]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[242]), &unkR[31]) ;
	unkR[231] = 500. ;
	unkR[238] = _div( 1. , unkR[271],"CoolingJacket.mfr_ch") ;
	unkR[239] = _div( 1. , (unkR[271] * unkR[230]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-66]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[283] , dyn[4],"Injector_F.PR") ;
//[E-67]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[284]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-68]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[290] = _div( unkR[295] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-69]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[289] = _sqrt(_div( 2. * (_pow( unkR[290] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[289] = 1. ;
else unkR[289] = 0. ;
//[E-70]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[296]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-71]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[286] * LPRES__FGAMMA(&unkR[64]) * unkR[295] , _sqrt(unkR[294] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[289] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[289],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[286] * unkR[288] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[295] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-72]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-73]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[279] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[279] = 1. ;
else unkR[279] = 0. ;
//[E-74]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[276] * LPRES__FGAMMA(&unkR[31]) * unkR[283] , _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[279] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[279],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[276] * unkR[278] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[283] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
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
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Escalon& m= *DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Escalon& m= *DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-151]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[6] = evalNormResidueInternal(6,_div( unkR[2] , unkR[4],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[6] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Escalon& m= *DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-155]  CombCha_1.AR_r = 1 / CombCha_1.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,unkR[1],_div( _div( 1 , dyn[7],"CombCha_1.M_r") * LPRES__FGAMMA(&unkR[181]) , _sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1) * _pow( dyn[7] , 2,"(CombCha_1.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[181]) + 1) , (2 * (LPRES__gamma(&unkR[181]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Escalon& m= *DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-163]  CoolingJacket.Re = LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(CoolingJacket.l.fluid)
unkR[229] = _div( LPRES__rho(&unkR[242]) * dyn[8] * unkR[225] , LPRES__visc(&unkR[242]),"LPRES.visc(CoolingJacket.l.fluid)") ;
//[E-164]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[235] = LPRES__hdc_fric(unkR[224], unkR[273], unkR[229]) ;
//[E-165]  Regulator_1.f_in.pt = LH2_circuit_1.pt - CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(CoolingJacket.l.fluid) * CoolingJacket.v ** 2
res[8] = evalNormResidueInternal(8,unkR[236],unkR[300] - _div( unkR[235] * unkR[226] , unkR[224],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[242]) * _pow( dyn[8] , 2,"(CoolingJacket.v)**(2)" ));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Escalon& m= *DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-180]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[9] = evalNormResidueInternal(9,_div( _div( dyn[5] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[9] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[9] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Cool_OFFD_Escalon& m= *DRLPRUEBAS__CC_Cool_OFFD_Escalon::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Cool_OFFD_Escalon::fcn7, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::fres( double *_time, double dyn[], double der[], double res[] )
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
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[242]), &unkR[31]);
//[E-5]  Regulator_1.f_in.pt = CoolingJacket.rho_trans * LPRES.R(CombCha_1.f_F.fluid) * CoolingJacket.g.Tt
unkR[236] = dyn[2] * LPRES__R(&unkR[31]) * dyn[3] ;
//[E-6]  Injector_F.f_in.pt = Regulator_1.f_in.pt - Regulator_1.dp
unkR[283] = unkR[236] - unkR[303] ;
//[E-7]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[280] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[280] = 0. ;
}
//[E-8]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[284] = _div( unkR[283] , unkR[280],"Injector_F.PR_sl") ;
}
else 
{
unkR[284] = 0. ;
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
unkR[291] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[291] = 0. ;
}
//[E-65]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[296] = _div( unkR[295] , unkR[291],"Injector_O.PR_sl") ;
}
else 
{
unkR[296] = 0. ;
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
unkR[62] = _div( unkR[294] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[289] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[294] ;
}
//[E-147]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) CoolingJacket.g.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE CoolingJacket.g.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( dyn[3] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[279] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
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
LPRES__Init_fluid(unkI[3], &unkR[242]);
//[E-161]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[224] = _div( 1.3 * _pow( (unkR[232] * unkR[233]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[232] + unkR[233]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-162]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[225] = _div( 2. * unkR[232] * unkR[233] , (unkR[232] + unkR[233]),"CoolingJacket.a + CoolingJacket.b") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-166]  CoolingJacket.Pr = LPRES.visc(CoolingJacket.l.fluid) * LPRES.cp(CoolingJacket.l.fluid) / LPRES.cond(CoolingJacket.l.fluid)
unkR[228] = _div( LPRES__visc(&unkR[242]) * LPRES__cp(&unkR[242]) , LPRES__cond(&unkR[242]),"LPRES.cond(CoolingJacket.l.fluid)") ;
//[E-167]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[227] = 0.027 * _pow( unkR[229] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[228] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-168]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(CoolingJacket.l.fluid) / CoolingJacket.D_hy
unkR[237] = _div( unkR[227] * LPRES__cond(&unkR[242]) , unkR[225],"CoolingJacket.D_hy") ;
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
coef[0][1]= -(-(_div( unkR[240] , unkR[274],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[240] , unkR[274],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-172]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - LH2_circuit_1.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[237] * unkR[223]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[212] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[237] * -unkR[298] * unkR[223];

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
unkR[277] = _div( _sqrt(dyn[3] * LPRES__R(&unkR[31]),"CoolingJacket.g.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[283]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[277] = 0. ;
}
//[E-174]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[285] = unkR[279] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[285] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[276] * unkR[278]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-175]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[281] = 0. ;
}
else 
{
unkR[281] = _div( LPRES__rho(&unkR[31]) * unkR[285] * unkR[278] * _sqrt(4. * unkR[276]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-176]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[287] = _div( _sqrt(unkR[294] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[295]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[287] = 0. ;
}
//[E-177]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[297] = unkR[289] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[297] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[286] * unkR[288]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-178]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[292] = 0. ;
}
else 
{
unkR[292] = _div( LPRES__rho(&unkR[64]) * unkR[297] * unkR[288] * _sqrt(4. * unkR[286]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
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
unkR[241] = dyn[8] * unkI[2] * unkR[232] * unkR[233] * LPRES__rho(&unkR[242]) ;
//[E-187]  CoolingJacket.rho_trans' = (CoolingJacket.l.W - CombCha_1.f_F.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (unkR[241] - unkR[30]) , (_div( unkR[275] , (unkR[272] * unkR[238]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-188]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(CombCha_1.f_F.fluid) * (CoolingJacket.l.W * LH2_circuit_1.Tt - CombCha_1.f_F.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(CombCha_1.f_F.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid))
ldr[3] = _div( (_div( (unkR[210] + LPRES__cp(&unkR[31]) * (unkR[241] * unkR[298] - unkR[30] * dyn[3])) , (_div( unkR[275] , (unkR[272] * unkR[239] * unkR[230]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[31]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[31])),"CoolingJacket.rho_trans * LPRES.cv(CombCha_1.f_F.fluid)") ;
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
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[9] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[311] , unkR[310],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[9] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(1 == LPRES__State(&unkR[242])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(CoolingJacket.l.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[4] - unkR[280]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[4] - unkR[280]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[290] - unkR[291]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[290] - unkR[291]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Cool_OFFD_Escalon::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_Cool_OFFD_Escalon::initDelays()
{
}


bool DRLPRUEBAS__CC_Cool_OFFD_Escalon::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_Escalon = 56020;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Escalon = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Escalon[] = 
{
"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",
"NdaX8UnOTzONV/KVhnLa"
};
*size = s_gst_size_DRLPRUEBAS__CC_Cool_OFFD_Escalon;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Escalon;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Escalon;
return true;
}



bool DRLPRUEBAS__CC_Cool_OFFD_Escalon::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_Escalon = 480;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Escalon = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Escalon[] = 
{
"CgAAAD0AAAAGAAAABgAAAAYAAAAGAAAACAAAAAUAAAAGAAAABwAAAAcAAAADAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAEAAAACAAAAAwAAAAQAAAAFAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAACAAAAAMAAAAEAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAoAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAEAAAACAAAAAwAAAAMAAAAEAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_Cool_OFFD_Escalon;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Cool_OFFD_Escalon;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Cool_OFFD_Escalon;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Cool_OFFD_Escalon(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Cool_OFFD_Escalon(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Cool_OFFD_Escalon(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Cool_OFFD_Escalon(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Cool_OFFD_Escalon(name,dirInstall);
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
	sprintf(partitionName,"%s","Escalon");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+escalon");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

