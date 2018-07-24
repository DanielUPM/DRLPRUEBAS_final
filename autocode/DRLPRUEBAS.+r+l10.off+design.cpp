//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__RL10_offDesign_CPP
#define DRLPRUEBAS__RL10_offDesign_CPP

#include "DRLPRUEBAS.+r+l10.off+design.h"

DRLPRUEBAS__RL10_offDesign* DRLPRUEBAS__RL10_offDesign::s_current= NULL;

DRLPRUEBAS__RL10_offDesign::DRLPRUEBAS__RL10_offDesign(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "RL10";
m_infoPartitionName = "offDesign";
m_infoModelName = "DRLPRUEBAS__RL10_offDesign";
m_infoModelFileName = "DRLPRUEBAS.+r+l10.off+design";
m_infoModelFileNameExtra = "+r+l10.off+design";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 12:56:23.650000";
m_infoPartitionDate = "29/06/2018 12:56:50.878000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[7]; 
int nbx;
for (nbx=0; nbx < 7 ; nbx++)
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
static double tmp_dynInit[13]={ 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 100, 1, 100 } ;
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

n_unkR=403;
unkR= new double[403] ;
static double tmp_unkRInit[403]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 8, 0, 14700000, 0, 0, 0, 
		3300, 3000, 0, 2.7, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 0, 1, 0, 0, 0, 0, 10, 3275010, 5000000, 1, 0.032, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 1.475994, 0, 0, 0, 3180.93, 0, 0.00100103471, 0.00813274823, 100000, 
		0, 1, 0, 0, 0, 16.09, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 19.05, 0.567, 5e-05, 0.000583419169, 0.032, 0, 0, 1, 1, 0, 2.43566574, 
		1, 1, 0, 1, 0, 250000, 1500, 0.1, 1, 1, 1, 1200000, 3254.325, 1500, 0.1, 21.11111, 
		193053.2, 1, 1200000, 5502.016, 1500, 0.1, 98.05556, 320606.2, 1, 1200000, 124105.6, 1500, 0.1, 1, 1, 1, 
		1, 1200000, 0.00178349971, 0, 0.5, 0, 10, 0, 0, 2.70069069, 0, 0, 0.000580606872, 0, 0.5, 0, 
		10, 0, 0, 16.3526821, 0, 0, 1, 1, 1, 0, 0.000677279675, 0, 0, 0, 850, 7358000, 
		0.573907002, 0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 350, 4282000, 0.6508, 0, 0.03027, 0, 0.05393, 
		0.194281146, 0, 3219188.99, 1500, 0.1, 1, 1200000, 1, 1, 1, 1, 0, 0, 0, 0, 0.000513113762, 
		0.1, 0, 0, 10000, 0, 0, 5, 0, 45, -75, 0.7353, 0, 0.05, 1.8, 0, 0.7, 
		0.715229315, 38172.635, 0 } ;
unkRInit= new double[403];
dcopy(403,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 180, 8, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=23;
static int tmp_cteIInit[23]={ 1, 4, 1, 1, 1, 1, 8, 1, 1, 6, 6, 6, 6, 4, 4, 4, 
		4, 6, 2, 2, 1, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=21;
static std::string tmp_cteSInit[21]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "W/(m·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", 
		"m^2", "m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 128;
n_neld= 6;
m_numBoxes= 6;
m_nNonLinearBoxes= 5;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__RL10_offDesign::initInternalModels()
{
}

void DRLPRUEBAS__RL10_offDesign::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_offDesign::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__RL10_offDesign::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__RL10_offDesign::LPRES__State(double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::LPRES__M(double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__RL10_offDesign::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__RL10_offDesign::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_offDesign::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__RL10_offDesign::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__RL10_offDesign::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__RL10_offDesign::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__RL10_offDesign::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__RL10_offDesign::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__RL10_offDesign::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__RL10_offDesign::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha.","CombCha.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[180]) ;
	unkI[0] = 1 ;
	dyn[5] = 1. ;
	dyn[4] = unkR[19] ;
	if( unkI[1] == 1 ) {
	dyn[11] = 0.001 ;
	}
	else {
	dyn[11] = 100. ;
	}
	unkR[213] = _div( 1. , unkR[215],"CombCha.mfr_ch") ;
	unkR[214] = _div( 1. , (unkR[215] * unkR[17]),"CombCha.mfr_ch * CombCha.T_ch") ;
  // init(Tank_F.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[247]) ;
  // init(Tank_O.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[63]) ;
  // init(CoolingJacket.CoolingJacket,90)
	LPRES__Init_fluid(LPRES__Vaporisation(&unkR[247]), &unkR[30]) ;
	unkR[236] = 500. ;
	unkR[243] = _div( 1. , unkR[277],"CoolingJacket.mfr_ch") ;
	unkR[244] = _div( 1. , (unkR[277] * unkR[235]),"CoolingJacket.mfr_ch * CoolingJacket.T_ch") ;
  // init(Pump_F.Pump,0)
	unkR[349] = unkR[350] ;
  // init(Pump_O.Pump,0)
	dyn[7] = unkR[361] ;
  // init(Turbine.Turbine,0)
	dyn[8] = unkR[384] ;
	unkR[386] = unkR[387] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__RL10_offDesign::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-78]  HeadLoss_Junct.f_in.W = CombCha.W_F / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[29] = _div( dyn[4] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-79]  CombCha.W_F_st = CombCha.W_F / CombCha.phi
unkR[20] = _div( dyn[4] , dyn[5],"CombCha.phi") ;
//[E-80]  CombCha.OF = CombCha.OF_st / CombCha.phi
unkR[9] = _div( unkR[10] , dyn[5],"CombCha.phi") ;
//[E-81]  CombCha.W_O = CombCha.OF * CombCha.W_F
unkR[23] = unkR[9] * dyn[4] ;
//[E-82]  HeadLoss_TO.f_in.W = CombCha.W_O / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[62] = _div( unkR[23] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-83]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[364] = _div( unkR[62] , (unkR[359] * dyn[7] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-84]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi
unkR[366] = 1. - _div( (1. - unkR[367]) , unkR[365],"Pump_O.phi_d") * unkR[364] ;
//[E-85]  Pump_O.tau = Pump_O.psi * Pump_O.U ** 2
unkR[369] = unkR[366] * _pow( dyn[7] , 2.,"(Pump_O.U)**(2)" ) ;
//[E-86]  FlowMeter_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid) + Pump_O.f_in.pt
unkR[285] = unkR[369] * unkR[363] * LPRES__rho(&unkR[63]) + unkR[312] ;
//[E-87]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[340] = _div( unkR[285] , unkR[337],"Injector_O.PR_sl") ;
}
else 
{
unkR[340] = 0. ;
}
//[E-88]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[284] = _div( _div( (unkR[285] - unkR[312]) , LPRES__rho(&unkR[63]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[363],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[310] ;
//[E-89]  Pump_O.m.Power = -(Pump_O.tau * HeadLoss_TO.f_in.W)
unkR[290] = -(unkR[369] * unkR[62]) ;
//[E-90]  Gearbox.m_out.Power =  ZONE[2] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[1]==0)
	unkR[292] = -unkR[290] * unkR[288] ;
else unkR[292] = _div( -unkR[290] , unkR[288],"Gearbox.eta") ;
//[E-91]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-92]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-93]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-94]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-95]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-96]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-97]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-98]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-99]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-100]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-101]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-102]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-103]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-104]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-105]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-106]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-107]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-108]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-109]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-110]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-111]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-112]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-113]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-114]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-115]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-116]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-117]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[5] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[5], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-118]  CombCha.f_O.p_c = CombCha.rho_trans * LPRES.R(CombCha.fluid_P) * CombCha.g.Tt
unkR[60] = dyn[0] * LPRES__R(&unkR[151]) * dyn[1] ;
//[E-119]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[326] = _div( unkR[298] , unkR[60],"CombCha.f_O.p_c") ;
//[E-120]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[325] = _sqrt(_div( 2. * (_pow( unkR[326] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[325] = 1. ;
else unkR[325] = 0. ;
//[E-121]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[330]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-122]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[336] = _div( unkR[285] , unkR[60],"CombCha.f_O.p_c") ;
//[E-123]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[335] = _sqrt(_div( 2. * (_pow( unkR[336] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[335] = 1. ;
else unkR[335] = 0. ;
//[E-124]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[340]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-125]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[4] = evalNormResidueInternal(4,unkR[62],_div( _div( unkR[332] * LPRES__FGAMMA(&unkR[63]) * unkR[285] , _sqrt(unkR[284] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[335] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[335],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[4] = evalNormResidueInternal(4,unkR[62],unkR[332] * unkR[334] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[285] - unkR[92]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-126]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[282] = _div( _div( dyn[6] , (unkR[237] * unkR[238] * LPRES__rho(&unkR[247])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-127]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[234] = _div( LPRES__rho(&unkR[247]) * unkR[282] * unkR[230] , LPRES__visc(&unkR[247]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-128]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[240] = LPRES__hdc_fric(unkR[229], unkR[279], unkR[234]) ;
//[E-129]  CoolingJacket.l.pt = SplitFrac.f_in.pt + CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[276] = unkR[241] + _div( unkR[240] * unkR[231] , unkR[229],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[247]) * _pow( unkR[282] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-130]  Pump_F.tau = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[358] = _div( (unkR[276] - unkR[305]) , (unkR[352] * LPRES__rho(&unkR[247])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-131]  Pump_F.m.Power = -(Pump_F.tau * HeadLoss_TF.f_in.W)
unkR[348] = -(unkR[358] * dyn[6]) ;
//[E-132]  Turbine.m.Power = Gearbox.m_out.Power - Pump_F.m.Power
unkR[385] = unkR[292] - unkR[348] ;
//[E-133]  HeadLoss_Turb.f_in.W = Turbine.m.Power / (CoolingJacket.g.Tt - HeadLoss_Turb.f_in.Tt) / LPRES.cp(HeadLoss_Turb.f_in.fluid)
unkR[318] = _div( _div( unkR[385] , (dyn[3] - unkR[317]),"CoolingJacket.g.Tt - HeadLoss_Turb.f_in.Tt") , LPRES__cp(&unkR[30]),"LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-134]  Junction.f_in1.W = HeadLoss_Junct.f_in.W - HeadLoss_Turb.f_in.W
unkR[343] = unkR[29] - unkR[318] ;
//[E-135]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -CoolingJacket.g.Tt) - HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[296] = _div( (-(_div( unkR[343] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -dyn[3]) - _div( unkR[318] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[317]) , (_div( unkR[343] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) + _div( unkR[318] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30])),"Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-136]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[5] = evalNormResidueInternal(5,unkR[29],_div( _div( unkR[322] * LPRES__FGAMMA(&unkR[30]) * unkR[298] , _sqrt(unkR[296] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[325] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[325],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[5] = evalNormResidueInternal(5,unkR[29],unkR[322] * unkR[324] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[298] - unkR[59]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-137]  HeadLoss_Turb.f_in.W * sqrt(CoolingJacket.g.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (Turbine.f_in.pt * Turbine.A_in) = sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))
res[6] = evalNormResidueInternal(6,_div( unkR[318] * _sqrt(dyn[3] * LPRES__R(&unkR[30]),"CoolingJacket.g.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (unkR[376] * unkR[383]),"Turbine.f_in.pt * Turbine.A_in"),_sqrt(LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[8], 1.) * cos(unkR[392] * 3.14159265358979/180.) * _pow( (1 + (LPRES__gamma(&unkR[30]) - 1)/2 * _pow( MATH__min(dyn[8], 1.) , 2,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[30]) + 1)/2 , (LPRES__gamma(&unkR[30]) - 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ));
//[E-138]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[402] = _div( unkR[385] , unkR[318],"HeadLoss_Turb.f_in.W") ;
//[E-139]  Pump_O.m.N = Pump_O.U / Pump_O.r_m
unkR[289] = _div( dyn[7] , unkR[368],"Pump_O.r_m") ;
//[E-140]  Turbine.m.N = Gearbox.GR * Pump_O.m.N
unkR[291] = unkR[287] * unkR[289] ;
//[E-141]  Pump_F.U = Turbine.m.N * Pump_F.r_m
unkR[349] = unkR[291] * unkR[357] ;
//[E-142]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
unkR[355] = _div( unkR[358] , _pow( unkR[349] , 2.,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2") ;
//[E-143]  Pump_F.phi = (1 - Pump_F.psi) / ((1 - Pump_F.psi_d) / Pump_F.phi_d)
unkR[353] = _div( (1. - unkR[355]) , (_div( (1. - unkR[356]) , unkR[354],"Pump_F.phi_d")),"(1 - Pump_F.psi_d) / Pump_F.phi_d") ;
//[E-144]  Pump_F.phi = HeadLoss_TF.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid))
res[7] = evalNormResidueInternal(7,unkR[353],_div( dyn[6] , (unkR[346] * unkR[349] * LPRES__rho(&unkR[247])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)"));
//[E-145]  Turbine.U = Turbine.m.N * Turbine.r_m
unkR[386] = unkR[291] * unkR[400] ;
//[E-146]  Turbine.psi = Turbine.tau / Turbine.U ** 2
unkR[398] = _div( unkR[402] , _pow( unkR[386] , 2.,"(Turbine.U)**(2)" ),"Turbine.U ** 2") ;
//[E-147]  Turbine.phi = (Turbine.psi + 1) / (tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180))
unkR[395] = _div( (unkR[398] + 1.) , (tan(unkR[392] * 3.14159265358979/180.) - tan(unkR[393] * 3.14159265358979/180.)),"tan(Turbine.alpha_2 * 3.14159265358979 / 180) - tan(Turbine.alpha_4r * 3.14159265358979 / 180)") ;
//[E-148]  Turbine.V_z2 = Turbine.phi * Turbine.U
unkR[389] = unkR[395] * unkR[386] ;
//[E-149]  Turbine.V_2 = Turbine.V_z2 / cos(Turbine.alpha_2 * 3.14159265358979 / 180)
unkR[388] = _div( unkR[389] , cos(unkR[392] * 3.14159265358979/180.),"cos(Turbine.alpha_2 * 3.14159265358979 / 180)") ;
//[E-150]  Turbine.V_2 = Turbine.M_2 * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2))
res[8] = evalNormResidueInternal(8,unkR[388],dyn[8] * _sqrt(_div( LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * dyn[3] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( dyn[8] , 2.,"(Turbine.M_2)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2"),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CoolingJacket.g.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Turbine.M_2 ** 2)"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__RL10_offDesign::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_offDesign& m= *DRLPRUEBAS__RL10_offDesign::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__RL10_offDesign::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[5];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_offDesign::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__RL10_offDesign::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-155]  ThrustMonitor.g.fluid[LOX] = CombCha.fluid_P[LOX] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[180] = _div( unkR[151] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-156]  ThrustMonitor.g.fluid[NTO] = CombCha.fluid_P[NTO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-157]  ThrustMonitor.g.fluid[H2O2] = CombCha.fluid_P[H2O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-158]  ThrustMonitor.g.fluid[HNO3] = CombCha.fluid_P[HNO3] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-159]  ThrustMonitor.g.fluid[LF2] = CombCha.fluid_P[LF2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-160]  ThrustMonitor.g.fluid[RP_1] = CombCha.fluid_P[RP_1] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-161]  ThrustMonitor.g.fluid[LCH4] = CombCha.fluid_P[LCH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-162]  ThrustMonitor.g.fluid[LH2] = CombCha.fluid_P[LH2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-163]  ThrustMonitor.g.fluid[N2H4] = CombCha.fluid_P[N2H4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-164]  ThrustMonitor.g.fluid[UDMH] = CombCha.fluid_P[UDMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-165]  ThrustMonitor.g.fluid[MMH] = CombCha.fluid_P[MMH] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-166]  ThrustMonitor.g.fluid[JP_10] = CombCha.fluid_P[JP_10] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-167]  ThrustMonitor.g.fluid[Kerox] = CombCha.fluid_P[Kerox] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-168]  ThrustMonitor.g.fluid[Oil] = CombCha.fluid_P[Oil] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-169]  ThrustMonitor.g.fluid[H2O] = CombCha.fluid_P[H2O] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-170]  ThrustMonitor.g.fluid[IPA] = CombCha.fluid_P[IPA] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-171]  ThrustMonitor.g.fluid[Air] = CombCha.fluid_P[Air] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-172]  ThrustMonitor.g.fluid[Ar] = CombCha.fluid_P[Ar] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-173]  ThrustMonitor.g.fluid[CH4] = CombCha.fluid_P[CH4] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-174]  ThrustMonitor.g.fluid[CO] = CombCha.fluid_P[CO] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-175]  ThrustMonitor.g.fluid[CO2] = CombCha.fluid_P[CO2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-176]  ThrustMonitor.g.fluid[H2] = CombCha.fluid_P[H2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-177]  ThrustMonitor.g.fluid[He] = CombCha.fluid_P[He] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-178]  ThrustMonitor.g.fluid[N2] = CombCha.fluid_P[N2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-179]  ThrustMonitor.g.fluid[O2] = CombCha.fluid_P[O2] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-180]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha.fluid_P[MMH_vapour] * (CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-181]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha.fluid_P[Comb_prod] * (CombCha.W_O + CombCha.W_F) + CombCha.W_IO + CombCha.W_IF) / ThrustMonitor.g.W
unkR[206] = _div( (unkR[177] * (unkR[23] + dyn[4]) + unkR[22] + unkR[21]) , dyn[9],"ThrustMonitor.g.W") ;
//[E-182]  ThrustMonitor.g.W = CombCha.f_O.p_c * CombCha.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[9] = evalNormResidueInternal(9,dyn[9],_div( unkR[60] * unkR[4] , (_div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__RL10_offDesign::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_offDesign& m= *DRLPRUEBAS__RL10_offDesign::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__RL10_offDesign::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__RL10_offDesign::fcn2, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__RL10_offDesign::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-195]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[10] = evalNormResidueInternal(10,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[180]) , (_pow( (_div( dyn[10] , unkR[60],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[180]) * (1. - _pow( (_div( dyn[10] , unkR[60],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[180]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__RL10_offDesign::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_offDesign& m= *DRLPRUEBAS__RL10_offDesign::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__RL10_offDesign::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_offDesign::fcn3, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__RL10_offDesign::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-198]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[11] = evalNormResidueInternal(11,unkR[1],_div( _div( 1 , dyn[11],"CombCha.M_r") * LPRES__FGAMMA(&unkR[180]) , _sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1) * _pow( dyn[11] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[180]) + 1) , (2 * (LPRES__gamma(&unkR[180]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__RL10_offDesign::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_offDesign& m= *DRLPRUEBAS__RL10_offDesign::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__RL10_offDesign::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_offDesign::fcn4, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__RL10_offDesign::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-215]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[12] = evalNormResidueInternal(12,_div( _div( dyn[9] * _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[12] * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1)/2 * _pow( dyn[12] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[180]) + 1)/2 , (LPRES__gamma(&unkR[180]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__RL10_offDesign::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_offDesign& m= *DRLPRUEBAS__RL10_offDesign::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[12],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[12]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__RL10_offDesign::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_offDesign::fcn6, n, &dyn[12], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__RL10_offDesign::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha.AR * CombCha.A_th
unkR[2] = unkR[0] * unkR[4] ;
//[E-2]  LPRES.Init_fluid(Tank_O.fluid, HeadLoss_TO.f_in.fluid) %%% (OUT VAR)HeadLoss_TO.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[63]);
//[E-3]  LPRES.Init_fluid(LPRES.Vaporisation(HeadLoss_TF.f_in.fluid), HeadLoss_Turb.f_in.fluid) %%% (OUT VAR)HeadLoss_Turb.f_in.fluid 
LPRES__Init_fluid(LPRES__Vaporisation(&unkR[247]), &unkR[30]);
//[E-4]  SplitFrac.f_in.pt = CoolingJacket.rho_trans * LPRES.R(HeadLoss_Turb.f_in.fluid) * CoolingJacket.g.Tt
unkR[241] = dyn[2] * LPRES__R(&unkR[30]) * dyn[3] ;
//[E-5]  CoolingJacket.D_eq = 1.3 * (CoolingJacket.a * CoolingJacket.b) ** 0.625 / (CoolingJacket.a + CoolingJacket.b) ** 0.25
unkR[229] = _div( 1.3 * _pow( (unkR[237] * unkR[238]) , 0.625,"(CoolingJacket.a * CoolingJacket.b)**(0.625)" ) , _pow( (unkR[237] + unkR[238]) , 0.25,"(CoolingJacket.a + CoolingJacket.b)**(0.25)" ),"(CoolingJacket.a + CoolingJacket.b) ** 0.25") ;
//[E-6]  LPRES.Init_fluid(Tank_F.fluid, HeadLoss_TF.f_in.fluid) %%% (OUT VAR)HeadLoss_TF.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[247]);
//[E-7]  CoolingJacket.D_hy = 2 * CoolingJacket.a * CoolingJacket.b / (CoolingJacket.a + CoolingJacket.b)
unkR[230] = _div( 2. * unkR[237] * unkR[238] , (unkR[237] + unkR[238]),"CoolingJacket.a + CoolingJacket.b") ;
//[E-8]  Pump_F.f_in.pt = Tank_F.pt - HeadLoss_TF.dp
unkR[305] = unkR[304] - unkR[300] ;
//[E-9]  Turbine.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[376] = unkR[241] * unkR[375] ;
//[E-10]  Regulator_F.f_in.pt = SplitFrac.f_in.pt * SplitFrac.TPL
unkR[373] = unkR[241] * unkR[375] ;
//[E-11]  Junction.f_in1.pt = Regulator_F.f_in.pt - Regulator_F.dp
unkR[344] = unkR[373] - unkR[370] ;
//[E-12]  HeadLoss_Junct.f_in.pt = Junction.f_in1.pt * Junction.TPL
unkR[297] = unkR[344] * unkR[342] ;
//[E-13]  Junction.f_in2.pt = HeadLoss_Junct.f_in.pt / Junction.TPL
unkR[320] = _div( unkR[297] , unkR[342],"Junction.TPL") ;
//[E-14]  HeadLoss_Turb.f_in.pt = Junction.f_in2.pt + HeadLoss_Turb.dp
unkR[319] = unkR[320] + unkR[314] ;
//[E-15]  Turbine.alpha = 1 - Turbine.eta_d * (1 - (HeadLoss_Turb.f_in.pt / Turbine.f_in.pt) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)))
unkR[391] = 1. - unkR[394] * (1. - _pow( (_div( unkR[319] , unkR[376],"Turbine.f_in.pt")) , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(HeadLoss_Turb.f_in.pt / Turbine.f_in.pt)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" )) ;
//[E-16]  HeadLoss_Turb.f_in.Tt = Turbine.alpha * CoolingJacket.g.Tt
unkR[317] = unkR[391] * dyn[3] ;
//[E-17]  Pump_O.f_in.pt = Tank_O.pt - HeadLoss_TO.dp
unkR[312] = unkR[311] - unkR[307] ;
//[E-18]  CombCha.fluid_O[LOX] = HeadLoss_TO.f_in.fluid[LOX] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-19]  Injector_F.f_in.pt = HeadLoss_Junct.f_in.pt - HeadLoss_Junct.dp
unkR[298] = unkR[297] - unkR[293] ;
//[E-20]  Injector_F.PR_sl =  IF[30] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[327] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_Turb.f_in.fluid) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[327] = 0. ;
}
//[E-21]  Injector_F.p_out_ch =  IF[31] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[330] = _div( unkR[298] , unkR[327],"Injector_F.PR_sl") ;
}
else 
{
unkR[330] = 0. ;
}
//[E-22]  CombCha.fluid_F[LOX] = HeadLoss_Turb.f_in.fluid[LOX] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha.fluid_O[NTO] = HeadLoss_TO.f_in.fluid[NTO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha.fluid_F[NTO] = HeadLoss_Turb.f_in.fluid[NTO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha.fluid_O[H2O2] = HeadLoss_TO.f_in.fluid[H2O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha.fluid_F[H2O2] = HeadLoss_Turb.f_in.fluid[H2O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha.fluid_O[HNO3] = HeadLoss_TO.f_in.fluid[HNO3] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha.fluid_F[HNO3] = HeadLoss_Turb.f_in.fluid[HNO3] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha.fluid_O[LF2] = HeadLoss_TO.f_in.fluid[LF2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha.fluid_F[LF2] = HeadLoss_Turb.f_in.fluid[LF2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha.fluid_O[RP_1] = HeadLoss_TO.f_in.fluid[RP_1] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha.fluid_F[RP_1] = HeadLoss_Turb.f_in.fluid[RP_1] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha.fluid_O[LCH4] = HeadLoss_TO.f_in.fluid[LCH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha.fluid_F[LCH4] = HeadLoss_Turb.f_in.fluid[LCH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha.fluid_O[LH2] = HeadLoss_TO.f_in.fluid[LH2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha.fluid_F[LH2] = HeadLoss_Turb.f_in.fluid[LH2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha.fluid_O[N2H4] = HeadLoss_TO.f_in.fluid[N2H4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha.fluid_F[N2H4] = HeadLoss_Turb.f_in.fluid[N2H4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha.fluid_O[UDMH] = HeadLoss_TO.f_in.fluid[UDMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha.fluid_F[UDMH] = HeadLoss_Turb.f_in.fluid[UDMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha.fluid_O[MMH] = HeadLoss_TO.f_in.fluid[MMH] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha.fluid_F[MMH] = HeadLoss_Turb.f_in.fluid[MMH] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-43]  CombCha.fluid_O[JP_10] = HeadLoss_TO.f_in.fluid[JP_10] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha.fluid_F[JP_10] = HeadLoss_Turb.f_in.fluid[JP_10] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha.fluid_O[Kerox] = HeadLoss_TO.f_in.fluid[Kerox] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha.fluid_F[Kerox] = HeadLoss_Turb.f_in.fluid[Kerox] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha.fluid_O[Oil] = HeadLoss_TO.f_in.fluid[Oil] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha.fluid_F[Oil] = HeadLoss_Turb.f_in.fluid[Oil] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha.fluid_O[H2O] = HeadLoss_TO.f_in.fluid[H2O] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha.fluid_F[H2O] = HeadLoss_Turb.f_in.fluid[H2O] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha.fluid_O[IPA] = HeadLoss_TO.f_in.fluid[IPA] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha.fluid_F[IPA] = HeadLoss_Turb.f_in.fluid[IPA] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha.fluid_O[Air] = HeadLoss_TO.f_in.fluid[Air] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha.fluid_F[Air] = HeadLoss_Turb.f_in.fluid[Air] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha.fluid_O[Ar] = HeadLoss_TO.f_in.fluid[Ar] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha.fluid_F[Ar] = HeadLoss_Turb.f_in.fluid[Ar] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha.fluid_O[CH4] = HeadLoss_TO.f_in.fluid[CH4] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha.fluid_F[CH4] = HeadLoss_Turb.f_in.fluid[CH4] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-59]  CombCha.fluid_O[CO] = HeadLoss_TO.f_in.fluid[CO] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-60]  CombCha.fluid_F[CO] = HeadLoss_Turb.f_in.fluid[CO] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-61]  CombCha.fluid_O[CO2] = HeadLoss_TO.f_in.fluid[CO2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-62]  CombCha.fluid_F[CO2] = HeadLoss_Turb.f_in.fluid[CO2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-63]  CombCha.fluid_O[H2] = HeadLoss_TO.f_in.fluid[H2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-64]  CombCha.fluid_F[H2] = HeadLoss_Turb.f_in.fluid[H2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-65]  CombCha.fluid_O[He] = HeadLoss_TO.f_in.fluid[He] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-66]  CombCha.fluid_F[He] = HeadLoss_Turb.f_in.fluid[He] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-67]  CombCha.fluid_O[N2] = HeadLoss_TO.f_in.fluid[N2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-68]  CombCha.fluid_F[N2] = HeadLoss_Turb.f_in.fluid[N2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-69]  CombCha.fluid_O[O2] = HeadLoss_TO.f_in.fluid[O2] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-70]  CombCha.fluid_F[O2] = HeadLoss_Turb.f_in.fluid[O2] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-71]  CombCha.fluid_O[MMH_vapour] = HeadLoss_TO.f_in.fluid[MMH_vapour] / (1 - HeadLoss_TO.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - HeadLoss_TO.f_in.fluid[Comb_prod]") ;
//[E-72]  CombCha.fluid_F[MMH_vapour] = HeadLoss_Turb.f_in.fluid[MMH_vapour] / (1 - HeadLoss_Turb.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[56]),"1 - HeadLoss_Turb.f_in.fluid[Comb_prod]") ;
//[E-73]  CombCha.fluid_O[Comb_prod] = 0
unkR[148] = 0. ;
//[E-74]  CombCha.fluid_F[Comb_prod] = 0
unkR[119] = 0. ;
//[E-75]  CombCha.fluid_P[Comb_prod_M] =  IF[28] (CombCha.Combustion) CombCha.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = unkR[6] ;
}
else 
{
unkR[178] = 0. ;
}
//[E-76]  CombCha.fluid_P[Comb_prod_cp] =  IF[29] (CombCha.Combustion) CombCha.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[25] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-77]  Injector_O.PR_sl =  IF[38] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2) ** (LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[337] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1")),"((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / 2)**(LPRES.gamma(HeadLoss_TO.f_in.fluid) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[337] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,5,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-151]  CombCha.W_IO = HeadLoss_TO.f_in.W - CombCha.W_O
unkR[22] = unkR[62] - unkR[23] ;
//[E-152]  CombCha.W_IF = HeadLoss_Junct.f_in.W - CombCha.W_F
unkR[21] = unkR[29] - dyn[4] ;
//[E-153]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha.fluid_P[Comb_prod_M]
unkR[207] = unkR[178] ;
//[E-154]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha.fluid_P[Comb_prod_cp]
unkR[208] = unkR[179] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-183]  CombCha.rho_trans' = (HeadLoss_TO.f_in.W + HeadLoss_Junct.f_in.W - ThrustMonitor.g.W) / (CombCha.temp_ch / (CombCha.rho_ch * CombCha.k_1))
ldr[0] = _div( (unkR[62] + unkR[29] - dyn[9]) , (_div( unkR[219] , (unkR[218] * unkR[213]),"CombCha.rho_ch * CombCha.k_1")),"CombCha.temp_ch / (CombCha.rho_ch * CombCha.k_1)") ;
//[E-184]  CombCha.Q_comb_effective =  ZONE[1] (CombCha.Combustion) CombCha.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-185]  CombCha.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-186]  CombCha.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-187]  CombCha.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-188]  CombCha.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-189]  CombCha.cp_R = (CombCha.W_O * LPRES.cp(CombCha.fluid_O) + CombCha.W_F * LPRES.cp(CombCha.fluid_F)) / (CombCha.W_O + CombCha.W_F)
unkR[26] = _div( (unkR[23] * LPRES__cp(&unkR[122]) + dyn[4] * LPRES__cp(&unkR[93])) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
//[E-190]  CombCha.f_O.T =  IF[42] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE FlowMeter_O.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[284] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[335] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[284] ;
}
//[E-191]  CombCha.f_F.T =  IF[34] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) HeadLoss_Junct.f_in.Tt / (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE HeadLoss_Junct.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[296] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[325] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[296] ;
}
//[E-192]  CombCha.T_in = (LPRES.cp(CombCha.fluid_O) * CombCha.f_O.T + CombCha.phi / CombCha.OF_st * LPRES.cp(CombCha.fluid_F) * CombCha.f_F.T) / ((1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( dyn[5] , unkR[10],"CombCha.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( dyn[5] , unkR[10],"CombCha.OF_st")) * unkR[26]),"(1 + CombCha.phi / CombCha.OF_st) * CombCha.cp_R") ;
//[E-193]  CombCha.T_c = (CombCha.eta_d * CombCha.Q_comb_effective / ((1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)) + CombCha.cp_R * (CombCha.T_in - 298.15)) / LPRES.cp(CombCha.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha.OF, CombCha.OF_st)")),"(1 + CombCha.OF) / MATH.min(CombCha.OF, CombCha.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha.fluid_P)") + 298.15 ;
//[E-194]  CombCha.g.Tt' = (((CombCha.W_O + CombCha.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha.fluid_P) * (CombCha.g.Tt - CombCha.T_c) + CombCha.W_IO / ThrustMonitor.g.W * HeadLoss_TO.f_in.fluid[Comb_prod_cp] * (CombCha.g.Tt - CombCha.f_O.T) + CombCha.W_IF / ThrustMonitor.g.W * HeadLoss_Turb.f_in.fluid[Comb_prod_cp] * (CombCha.g.Tt - CombCha.f_F.T)) / -(CombCha.temp_ch / (ThrustMonitor.g.W * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch)) - CombCha.g.Tt * LPRES.cv(CombCha.fluid_P) * CombCha.rho_trans') / (CombCha.rho_trans * LPRES.cv(CombCha.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[23] + dyn[4]) , dyn[9],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (dyn[1] - unkR[15]) + _div( unkR[22] , dyn[9],"ThrustMonitor.g.W") * unkR[91] * (dyn[1] - unkR[61]) + _div( unkR[21] , dyn[9],"ThrustMonitor.g.W") * unkR[58] * (dyn[1] - unkR[28])) , -(_div( unkR[219] , (dyn[9] * unkR[218] * unkR[214] * unkR[17]),"ThrustMonitor.g.W * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch")),"-(CombCha.temp_ch / (ThrustMonitor.g.W * CombCha.rho_ch * CombCha.k_2 * CombCha.T_ch))") - dyn[1] * LPRES__cv(&unkR[151]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[151])),"CombCha.rho_trans * LPRES.cv(CombCha.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-196]  CombCha.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[24] = _div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-197]  CombCha.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[180]) , (9. * LPRES__gamma(&unkR[180]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-199]  CombCha.T_aw = CombCha.g.Tt * (1 + CombCha.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[180]) - 1.) * _pow( dyn[11] , 2.,"(CombCha.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[180]) - 1.) * _pow( dyn[11] , 2.,"(CombCha.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2") ;
//[E-200]  CombCha.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha.T_aw ** 0.6
unkR[220] = 1.184e-07 * _pow( LPRES__M(&unkR[180]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha.T_aw)**(0.6)" ) ;
//[E-201]  CombCha.A_r = CombCha.A_th * CombCha.AR_r
unkR[3] = unkR[4] * unkR[1] ;
//[E-202]  CombCha.h_g = 0.026 / sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2 * CombCha.visc_r ** 0.2 * LPRES.cp(ThrustMonitor.g.fluid) / CombCha.Pr_r ** 0.6 * (CombCha.f_O.p_c / CombCha.c_star) ** 0.8 * (CombCha.A_th / CombCha.A_r) ** 0.9
unkR[211] = _div( 0.026 , _pow( _sqrt(4. * unkR[4]/3.14159265358979,"4 * CombCha.A_th / 3.14159265358979") , 0.2,"(sqrt(4 * CombCha.A_th / 3.14159265358979))**(0.2)" ),"sqrt(4 * CombCha.A_th / 3.14159265358979) ** 0.2") * _div( _pow( unkR[220] , 0.2,"(CombCha.visc_r)**(0.2)" ) * LPRES__cp(&unkR[180]) , _pow( unkR[11] , 0.6,"(CombCha.Pr_r)**(0.6)" ),"CombCha.Pr_r ** 0.6") * _pow( (_div( unkR[60] , unkR[24],"CombCha.c_star")) , 0.8,"(CombCha.f_O.p_c / CombCha.c_star)**(0.8)" ) * _pow( (_div( unkR[4] , unkR[3],"CombCha.A_r")) , 0.9,"(CombCha.A_th / CombCha.A_r)**(0.9)" ) ;
//[E-203]  CoolingJacket.Pr = LPRES.visc(HeadLoss_TF.f_in.fluid) * LPRES.cp(HeadLoss_TF.f_in.fluid) / LPRES.cond(HeadLoss_TF.f_in.fluid)
unkR[233] = _div( LPRES__visc(&unkR[247]) * LPRES__cp(&unkR[247]) , LPRES__cond(&unkR[247]),"LPRES.cond(HeadLoss_TF.f_in.fluid)") ;
//[E-204]  CoolingJacket.Nu = 0.027 * CoolingJacket.Re ** 0.8 * CoolingJacket.Pr ** 0.33
unkR[232] = 0.027 * _pow( unkR[234] , 0.8,"(CoolingJacket.Re)**(0.8)" ) * _pow( unkR[233] , 0.33,"(CoolingJacket.Pr)**(0.33)" ) ;
//[E-205]  CoolingJacket.h_l = CoolingJacket.Nu * LPRES.cond(HeadLoss_TF.f_in.fluid) / CoolingJacket.D_hy
unkR[242] = _div( unkR[232] * LPRES__cond(&unkR[247]) , unkR[230],"CoolingJacket.D_hy") ;
//[E-206]  CoolingJacket.l.Tt = (CoolingJacket.l.pt - Pump_F.f_in.pt) / LPRES.rho(HeadLoss_TF.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(HeadLoss_TF.f_in.fluid) + Tank_F.Tt
unkR[246] = _div( _div( (unkR[276] - unkR[305]) , LPRES__rho(&unkR[247]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[352],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[247]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[303] ;
//[E-207]  CoolingJacket.A_wet_cooling = CoolingJacket.N * 2 * (CoolingJacket.a + CoolingJacket.b) * CoolingJacket.L
unkR[228] = unkI[2] * 2. * (unkR[237] + unkR[238]) * unkR[231] ;
//-------------------------------------------------------------
// BOX 5 SOLVED LINEARLY
//-------------------------------------------------------------
{
double coef[3][3], indep[3];
int n= 3,nrhs= 1 ,ipiv[3],info;
//[E-208]  CoolingJacket.h.Q = CombCha.h_g * (CombCha.T_aw - CoolingJacket.h.T) * CombCha.A_wet
coef[0][0]= 0;// CoolingJacket.T_w_cold
coef[1][0]= 1;// CoolingJacket.h.Q
coef[2][0]= -(-unkR[211] * unkR[5]);// CoolingJacket.h.T
//[E-209]  CoolingJacket.h.Q = CoolingJacket.k_w / CoolingJacket.t_w * (CoolingJacket.h.T - CoolingJacket.T_w_cold) * CombCha.A_wet
coef[0][1]= -(-(_div( unkR[245] , unkR[280],"CoolingJacket.t_w")) * unkR[5]);// CoolingJacket.T_w_cold
coef[1][1]= 1;// CoolingJacket.h.Q
coef[2][1]= -(_div( unkR[245] , unkR[280],"CoolingJacket.t_w") * unkR[5]);// CoolingJacket.h.T
//[E-210]  CoolingJacket.h.Q = CoolingJacket.h_l * (CoolingJacket.T_w_cold - CoolingJacket.l.Tt) * CoolingJacket.A_wet_cooling
coef[0][2]= -(unkR[242] * unkR[228]);// CoolingJacket.T_w_cold
coef[1][2]= 1;// CoolingJacket.h.Q
coef[2][2]= 0;// CoolingJacket.h.T
// Independent terms
indep[0]= unkR[211] * unkR[14] * unkR[5];
indep[1]= 0;
indep[2]= unkR[242] * -unkR[246] * unkR[228];

   // solve the linear system,check output and put the results back into system vars
wDGESV(&n,&nrhs,(double*)coef,&n,ipiv,indep,&n,&info);
checkErrorInDgesv(info,5);

unkR[236] = indep[0];
unkR[209] = indep[1];
unkR[210] = indep[2];
}
//-------------------------------------------------------------
// END OF BOX 5
//-------------------------------------------------------------
//[E-211]  FlowMeter_F.i.Data[1] = abs(HeadLoss_TF.f_in.W)
unkR[283] = abs(dyn[6]) ;
//[E-212]  FlowMeter_O.i.Data[1] = abs(HeadLoss_TO.f_in.W)
unkR[286] = abs(unkR[62]) ;
//[E-213]  ControlPanel.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[225] = unkR[283] + unkR[286] ;
//[E-214]  ControlPanel.i_Comb.Data[1] = CombCha.c_star
unkR[212] = unkR[24] ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-216]  ThrustMonitor.T_out = CombCha.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[379] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[12] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-217]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[382] = dyn[12] * _sqrt(LPRES__gamma(&unkR[180]) * LPRES__R(&unkR[180]) * unkR[379],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-218]  ThrustMonitor.p_out = CombCha.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[381] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[12] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-219]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[380] = LPRES__ISA_Pressure(unkR[345]) ;
//[E-220]  ControlPanel.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[224] = dyn[9] * unkR[382] + unkR[2] * (unkR[381] - unkR[380]) ;
//[E-221]  ControlPanel.Isp = ControlPanel.Thrust / ControlPanel.W_tot
unkR[222] = _div( unkR[224] , unkR[225],"ControlPanel.W_tot") ;
//[E-222]  ControlPanel.C_E = ControlPanel.Isp / CombCha.c_star
unkR[221] = _div( unkR[222] , unkR[24],"CombCha.c_star") ;
//[E-223]  ControlPanel.Isp_0 = ControlPanel.Isp / 9.80665
unkR[223] = unkR[222]/9.80665 ;
//[E-224]  CoolingJacket.rho_trans' = (HeadLoss_TF.f_in.W - HeadLoss_Junct.f_in.W) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1))
ldr[2] = _div( (dyn[6] - unkR[29]) , (_div( unkR[281] , (unkR[278] * unkR[243]),"CoolingJacket.rho_ch * CoolingJacket.k_1")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_1)") ;
//[E-225]  CoolingJacket.g.Tt' = ((CoolingJacket.h.Q + LPRES.cp(HeadLoss_Turb.f_in.fluid) * (HeadLoss_TF.f_in.W * CoolingJacket.l.Tt - HeadLoss_Junct.f_in.W * CoolingJacket.g.Tt)) / (CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)) - CoolingJacket.g.Tt * LPRES.cv(HeadLoss_Turb.f_in.fluid) * CoolingJacket.rho_trans') / (CoolingJacket.rho_trans * LPRES.cv(HeadLoss_Turb.f_in.fluid))
ldr[3] = _div( (_div( (unkR[209] + LPRES__cp(&unkR[30]) * (dyn[6] * unkR[246] - unkR[29] * dyn[3])) , (_div( unkR[281] , (unkR[278] * unkR[244] * unkR[235]),"CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch")),"CoolingJacket.temp_ch / (CoolingJacket.rho_ch * CoolingJacket.k_2 * CoolingJacket.T_ch)") - dyn[3] * LPRES__cv(&unkR[30]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[30])),"CoolingJacket.rho_trans * LPRES.cv(HeadLoss_Turb.f_in.fluid)") ;
//[E-226]  Injector_F.A_sl =  IF[32] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) * HeadLoss_Junct.f_in.W / (LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[323] = _div( _sqrt(unkR[296] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[298]),"LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[323] = 0. ;
}
//[E-227]  Injector_F.v_ideal =  IF[36] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T)	 ELSE HeadLoss_Junct.f_in.W / (LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[331] = unkR[325] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(HeadLoss_Turb.f_in.fluid) * LPRES.R(HeadLoss_Turb.f_in.fluid) * CombCha.f_F.T") ;
}
else 
{
unkR[331] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[322] * unkR[324]),"LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-228]  Injector_F.Re =  IF[37] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_Turb.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(HeadLoss_Turb.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[328] = 0. ;
}
else 
{
unkR[328] = _div( LPRES__rho(&unkR[30]) * unkR[331] * unkR[324] * _sqrt(4. * unkR[322]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(HeadLoss_Turb.f_in.fluid)") ;
}
//[E-229]  Injector_O.A_sl =  IF[40] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) * HeadLoss_TO.f_in.W / (LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[333] = _div( _sqrt(unkR[284] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[285]),"LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt") ;
}
else 
{
unkR[333] = 0. ;
}
//[E-230]  Injector_O.v_ideal =  IF[44] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T)	 ELSE HeadLoss_TO.f_in.W / (LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[341] = unkR[335] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[61],"LPRES.gamma(HeadLoss_TO.f_in.fluid) * LPRES.R(HeadLoss_TO.f_in.fluid) * CombCha.f_O.T") ;
}
else 
{
unkR[341] = _div( unkR[62] , (LPRES__rho(&unkR[63]) * unkR[332] * unkR[334]),"LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-231]  Injector_O.Re =  IF[45] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(HeadLoss_TO.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(HeadLoss_TO.f_in.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[338] = 0. ;
}
else 
{
unkR[338] = _div( LPRES__rho(&unkR[63]) * unkR[341] * unkR[334] * _sqrt(4. * unkR[332]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(HeadLoss_TO.f_in.fluid)") ;
}
//[E-232]  Pump_F.H = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[347] = _div( (unkR[276] - unkR[305]) , (9.80665 * LPRES__rho(&unkR[247])),"9.80665 * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-233]  Pump_O.H = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / (9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[360] = _div( (unkR[285] - unkR[312]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-234]  ControlPanel.i_Thrust.Data[1] = ControlPanel.Thrust
unkR[226] = unkR[224] ;
//[E-235]  ControlPanel.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[227] = unkR[283] + unkR[286] ;
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
void DRLPRUEBAS__RL10_offDesign::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[247])))
		issueErrorAssert(215,99,24,98,"LPRES_CompHeat.el",72,"CoolingJacket.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN ENTER TO THE COOLING JACKET!");
if(!(1 == LPRES__State(&unkR[247])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(HeadLoss_TF.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[63])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(HeadLoss_TO.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[180])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[12] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[381] , unkR[380],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[12] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[30])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",179,"Turbine.","Gas == LPRES.State(HeadLoss_Turb.f_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__RL10_offDesign::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha.Combustion
    ev[3]= unkR[290]; //Pump_O.m.Power > 0
    ev[4]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[5]= unkR[326] - unkR[327]; //Injector_F.PR < Injector_F.PR_sl
    ev[6]= LPRES__State(&unkR[30]) - 2; //LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas
    ev[7]= unkR[326] - unkR[327]; //Injector_F.PR >= Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[9]= unkR[336] - unkR[337]; //Injector_O.PR < Injector_O.PR_sl
    ev[10]= LPRES__State(&unkR[63]) - 2; //LPRES.State(HeadLoss_TO.f_in.fluid) == Gas
    ev[11]= unkR[336] - unkR[337]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__RL10_offDesign::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__RL10_offDesign::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__RL10_offDesign::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha.Q_comb_effective =  ZONE (CombCha.Combustion) CombCha.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Gearbox.m_out.Power =  ZONE (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta OTHERS -Pump_O.m.Power / Gearbox.eta
     branchZone[1] = (cont[3] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[8]  && cont[9] ) ? 0 : (cont[10]  && cont[11] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__RL10_offDesign::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 12 ;
	nConstraints= 31;
	nWhen= 2;
	nZones= 4;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0",
		"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha.Combustion","OTHERS",
	"Pump_O.m.Power > 0","OTHERS",
	"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[12]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha.Combustion"},{ ZONE,GT_OP,0,0,"Pump_O.m.Power > 0"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(HeadLoss_TO.f_in.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__RL10_offDesign::initDelays()
{
}


bool DRLPRUEBAS__RL10_offDesign::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__RL10_offDesign = 96868;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__RL10_offDesign = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__RL10_offDesign[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__RL10_offDesign;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__RL10_offDesign;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__RL10_offDesign;
return true;
}



bool DRLPRUEBAS__RL10_offDesign::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__RL10_offDesign = 872;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__RL10_offDesign = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__RL10_offDesign[] = 
{
"DQAAAIAAAAAGAAAACgAAAAoAAAAJAAAACwAAAAkAAAAJAAAACQAAAAkAAAAJAAAACgAAAAsAAAALAAAACwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAwAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAADAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAANAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__RL10_offDesign;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__RL10_offDesign;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__RL10_offDesign;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__RL10_offDesign(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__RL10_offDesign(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__RL10_offDesign(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__RL10_offDesign(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__RL10_offDesign(name,dirInstall);
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
	sprintf(componentName,"%s","RL10");
	sprintf(partitionName,"%s","offDesign");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+r+l10.off+design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

