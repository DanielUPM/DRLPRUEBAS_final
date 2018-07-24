//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__RL10_respuesta_cargas_CPP
#define DRLPRUEBAS__RL10_respuesta_cargas_CPP

#include "DRLPRUEBAS.+r+l10.respuesta_cargas.h"

DRLPRUEBAS__RL10_respuesta_cargas* DRLPRUEBAS__RL10_respuesta_cargas::s_current= NULL;

DRLPRUEBAS__RL10_respuesta_cargas::DRLPRUEBAS__RL10_respuesta_cargas(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "RL10";
m_infoPartitionName = "respuesta_cargas";
m_infoModelName = "DRLPRUEBAS__RL10_respuesta_cargas";
m_infoModelFileName = "DRLPRUEBAS.+r+l10.respuesta_cargas";
m_infoModelFileNameExtra = "+r+l10.respuesta_cargas";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 12:56:23.650000";
m_infoPartitionDate = "29/06/2018 13:16:27.152000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[7]; 
int nbx;
for (nbx=0; nbx < 7 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[2];
int ib;
for (ib=0; ib < 2 ; ib++)
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
		10, 0, 0, 16.3526821, 0, 0, 1, 1, 1, 0, 0.000677279675, 0, 0, 850, 7358000, 0.573907002, 
		0, 0.0656, 0, 0.2533, 0.208304833, 0, 0.0014118924, 0, 0, 350, 4282000, 0.6508, 0, 0.03027, 0, 0.05393, 
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
void DRLPRUEBAS__RL10_respuesta_cargas::initInternalModels()
{
}

void DRLPRUEBAS__RL10_respuesta_cargas::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__RL10_respuesta_cargas::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__RL10_respuesta_cargas::LPRES__State(double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__M(double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__RL10_respuesta_cargas::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


int DRLPRUEBAS__RL10_respuesta_cargas::LPRES__Vaporisation(double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__cond(double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__hdc_fric(const double & D,const double & rug,const double & Re)
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


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__RL10_respuesta_cargas::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__RL10_respuesta_cargas::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__RL10_respuesta_cargas::initBlocks( double dyn[], double ldr[], double *_time )
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
	dyn[7] = unkR[349] ;
  // init(Pump_O.Pump,0)
	unkR[360] = unkR[361] ;
  // init(Turbine.Turbine,0)
	dyn[8] = unkR[384] ;
	unkR[386] = unkR[387] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__RL10_respuesta_cargas::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
//[E-83]  CombCha.fluid_P[LOX] =  IF[1] (CombCha.Combustion) (CombCha.fluid_O[LOX] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LOX] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LOX] * CombCha.W_O + CombCha.fluid_F[LOX] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-84]  CombCha.fluid_P[NTO] =  IF[2] (CombCha.Combustion) (CombCha.fluid_O[NTO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[NTO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[NTO] * CombCha.W_O + CombCha.fluid_F[NTO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-85]  CombCha.fluid_P[H2O2] =  IF[3] (CombCha.Combustion) (CombCha.fluid_O[H2O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O2] * CombCha.W_O + CombCha.fluid_F[H2O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-86]  CombCha.fluid_P[HNO3] =  IF[4] (CombCha.Combustion) (CombCha.fluid_O[HNO3] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[HNO3] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[HNO3] * CombCha.W_O + CombCha.fluid_F[HNO3] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-87]  CombCha.fluid_P[LF2] =  IF[5] (CombCha.Combustion) (CombCha.fluid_O[LF2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LF2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LF2] * CombCha.W_O + CombCha.fluid_F[LF2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-88]  CombCha.fluid_P[RP_1] =  IF[6] (CombCha.Combustion) (CombCha.fluid_O[RP_1] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[RP_1] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[RP_1] * CombCha.W_O + CombCha.fluid_F[RP_1] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-89]  CombCha.fluid_P[LCH4] =  IF[7] (CombCha.Combustion) (CombCha.fluid_O[LCH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LCH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LCH4] * CombCha.W_O + CombCha.fluid_F[LCH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-90]  CombCha.fluid_P[LH2] =  IF[8] (CombCha.Combustion) (CombCha.fluid_O[LH2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[LH2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[LH2] * CombCha.W_O + CombCha.fluid_F[LH2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-91]  CombCha.fluid_P[N2H4] =  IF[9] (CombCha.Combustion) (CombCha.fluid_O[N2H4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2H4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2H4] * CombCha.W_O + CombCha.fluid_F[N2H4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-92]  CombCha.fluid_P[UDMH] =  IF[10] (CombCha.Combustion) (CombCha.fluid_O[UDMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[UDMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[UDMH] * CombCha.W_O + CombCha.fluid_F[UDMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-93]  CombCha.fluid_P[MMH] =  IF[11] (CombCha.Combustion) (CombCha.fluid_O[MMH] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH] * CombCha.W_O + CombCha.fluid_F[MMH] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-94]  CombCha.fluid_P[JP_10] =  IF[12] (CombCha.Combustion) (CombCha.fluid_O[JP_10] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[JP_10] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[JP_10] * CombCha.W_O + CombCha.fluid_F[JP_10] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-95]  CombCha.fluid_P[Kerox] =  IF[13] (CombCha.Combustion) (CombCha.fluid_O[Kerox] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Kerox] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Kerox] * CombCha.W_O + CombCha.fluid_F[Kerox] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-96]  CombCha.fluid_P[Oil] =  IF[14] (CombCha.Combustion) (CombCha.fluid_O[Oil] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Oil] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Oil] * CombCha.W_O + CombCha.fluid_F[Oil] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-97]  CombCha.fluid_P[H2O] =  IF[15] (CombCha.Combustion) (CombCha.fluid_O[H2O] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2O] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2O] * CombCha.W_O + CombCha.fluid_F[H2O] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-98]  CombCha.fluid_P[IPA] =  IF[16] (CombCha.Combustion) (CombCha.fluid_O[IPA] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[IPA] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[IPA] * CombCha.W_O + CombCha.fluid_F[IPA] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-99]  CombCha.fluid_P[Air] =  IF[17] (CombCha.Combustion) (CombCha.fluid_O[Air] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Air] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Air] * CombCha.W_O + CombCha.fluid_F[Air] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-100]  CombCha.fluid_P[Ar] =  IF[18] (CombCha.Combustion) (CombCha.fluid_O[Ar] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Ar] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[Ar] * CombCha.W_O + CombCha.fluid_F[Ar] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-101]  CombCha.fluid_P[CH4] =  IF[19] (CombCha.Combustion) (CombCha.fluid_O[CH4] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CH4] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CH4] * CombCha.W_O + CombCha.fluid_F[CH4] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-102]  CombCha.fluid_P[CO] =  IF[20] (CombCha.Combustion) (CombCha.fluid_O[CO] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO] * CombCha.W_O + CombCha.fluid_F[CO] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-103]  CombCha.fluid_P[CO2] =  IF[21] (CombCha.Combustion) (CombCha.fluid_O[CO2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[CO2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[CO2] * CombCha.W_O + CombCha.fluid_F[CO2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-104]  CombCha.fluid_P[H2] =  IF[22] (CombCha.Combustion) (CombCha.fluid_O[H2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[H2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[H2] * CombCha.W_O + CombCha.fluid_F[H2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-105]  CombCha.fluid_P[He] =  IF[23] (CombCha.Combustion) (CombCha.fluid_O[He] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[He] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[He] * CombCha.W_O + CombCha.fluid_F[He] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-106]  CombCha.fluid_P[N2] =  IF[24] (CombCha.Combustion) (CombCha.fluid_O[N2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[N2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[N2] * CombCha.W_O + CombCha.fluid_F[N2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-107]  CombCha.fluid_P[O2] =  IF[25] (CombCha.Combustion) (CombCha.fluid_O[O2] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[O2] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[O2] * CombCha.W_O + CombCha.fluid_F[O2] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-108]  CombCha.fluid_P[MMH_vapour] =  IF[26] (CombCha.Combustion) (CombCha.fluid_O[MMH_vapour] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st) / (CombCha.W_O + CombCha.W_F)	 ELSE (CombCha.fluid_O[MMH_vapour] * CombCha.W_O + CombCha.fluid_F[MMH_vapour] * CombCha.W_F) / (CombCha.W_O + CombCha.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
//[E-109]  CombCha.fluid_P[Comb_prod] =  IF[27] (CombCha.Combustion) (CombCha.fluid_O[Comb_prod] * MATH.max(1 - CombCha.phi, 0) * CombCha.W_O + CombCha.fluid_F[Comb_prod] * MATH.max(CombCha.phi - 1, 0) * CombCha.W_F_st + (1 - MATH.max(1 - CombCha.phi, 0)) * (CombCha.W_O + CombCha.W_F_st)) / (CombCha.W_O + CombCha.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[5] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[5], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[4]),"CombCha.W_O + CombCha.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-110]  CombCha.f_O.p_c = CombCha.rho_trans * LPRES.R(CombCha.fluid_P) * CombCha.g.Tt
unkR[60] = dyn[0] * LPRES__R(&unkR[151]) * dyn[1] ;
//[E-111]  Injector_F.PR = Injector_F.f_in.pt / CombCha.f_O.p_c
unkR[326] = _div( unkR[298] , unkR[60],"CombCha.f_O.p_c") ;
//[E-112]  Injector_F.M_out =  ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)) ZONE[3] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[325] = _sqrt(_div( 2. * (_pow( unkR[326] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_Turb.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[325] = 1. ;
else unkR[325] = 0. ;
//[E-113]  CombCha.f_F.p =  IF[33] (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[330]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-114]  CoolingJacket.v = HeadLoss_TF.f_in.W / (CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)) / CoolingJacket.N
unkR[282] = _div( _div( dyn[6] , (unkR[237] * unkR[238] * LPRES__rho(&unkR[247])),"CoolingJacket.a * CoolingJacket.b * LPRES.rho(HeadLoss_TF.f_in.fluid)") , unkI[2],"CoolingJacket.N") ;
//[E-115]  CoolingJacket.Re = LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v * CoolingJacket.D_hy / LPRES.visc(HeadLoss_TF.f_in.fluid)
unkR[234] = _div( LPRES__rho(&unkR[247]) * unkR[282] * unkR[230] , LPRES__visc(&unkR[247]),"LPRES.visc(HeadLoss_TF.f_in.fluid)") ;
//[E-116]  CoolingJacket.f = LPRES.hdc_fric(CoolingJacket.D_eq, CoolingJacket.rug, CoolingJacket.Re)
unkR[240] = LPRES__hdc_fric(unkR[229], unkR[279], unkR[234]) ;
//[E-117]  CoolingJacket.l.pt = SplitFrac.f_in.pt + CoolingJacket.f * CoolingJacket.L / CoolingJacket.D_eq * 0.5 * LPRES.rho(HeadLoss_TF.f_in.fluid) * CoolingJacket.v ** 2
unkR[276] = unkR[241] + _div( unkR[240] * unkR[231] , unkR[229],"CoolingJacket.D_eq") * 0.5 * LPRES__rho(&unkR[247]) * _pow( unkR[282] , 2.,"(CoolingJacket.v)**(2)" ) ;
//[E-118]  Pump_F.tau = (CoolingJacket.l.pt - Pump_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid))
unkR[357] = _div( (unkR[276] - unkR[305]) , (unkR[351] * LPRES__rho(&unkR[247])),"Pump_F.eta_d * LPRES.rho(HeadLoss_TF.f_in.fluid)") ;
//[E-119]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
unkR[354] = _div( unkR[357] , _pow( dyn[7] , 2.,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2") ;
//[E-120]  Pump_F.phi = (1 - Pump_F.psi) / ((1 - Pump_F.psi_d) / Pump_F.phi_d)
unkR[352] = _div( (1. - unkR[354]) , (_div( (1. - unkR[355]) , unkR[353],"Pump_F.phi_d")),"(1 - Pump_F.psi_d) / Pump_F.phi_d") ;
//[E-121]  Pump_F.phi = HeadLoss_TF.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid))
res[4] = evalNormResidueInternal(4,unkR[352],_div( dyn[6] , (unkR[346] * dyn[7] * LPRES__rho(&unkR[247])),"Pump_F.A_in * Pump_F.U * LPRES.rho(HeadLoss_TF.f_in.fluid)"));
//[E-122]  Pump_F.m.Power = -(Pump_F.tau * HeadLoss_TF.f_in.W)
unkR[348] = -(unkR[357] * dyn[6]) ;
//[E-123]  Turbine.m.N = Pump_F.U / Pump_F.r_m
unkR[291] = _div( dyn[7] , unkR[356],"Pump_F.r_m") ;
//[E-124]  Pump_O.m.N = Turbine.m.N / Gearbox.GR
unkR[289] = _div( unkR[291] , unkR[287],"Gearbox.GR") ;
//[E-125]  Pump_O.U = Pump_O.m.N * Pump_O.r_m
unkR[360] = unkR[289] * unkR[368] ;
//[E-126]  Pump_O.phi = HeadLoss_TO.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid))
unkR[364] = _div( unkR[62] , (unkR[358] * unkR[360] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
//[E-127]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi
unkR[366] = 1. - _div( (1. - unkR[367]) , unkR[365],"Pump_O.phi_d") * unkR[364] ;
//[E-128]  Pump_O.tau = Pump_O.psi * Pump_O.U ** 2
unkR[369] = unkR[366] * _pow( unkR[360] , 2.,"(Pump_O.U)**(2)" ) ;
//[E-129]  FlowMeter_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(HeadLoss_TO.f_in.fluid) + Pump_O.f_in.pt
unkR[285] = unkR[369] * unkR[363] * LPRES__rho(&unkR[63]) + unkR[312] ;
//[E-130]  Injector_O.PR = FlowMeter_O.f_in.pt / CombCha.f_O.p_c
unkR[336] = _div( unkR[285] , unkR[60],"CombCha.f_O.p_c") ;
//[E-131]  Injector_O.M_out =  ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)) ZONE[4] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[335] = _sqrt(_div( 2. * (_pow( unkR[336] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(HeadLoss_TO.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) / LPRES.gamma(HeadLoss_TO.f_in.fluid)) - 1) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[335] = 1. ;
else unkR[335] = 0. ;
//[E-132]  Injector_O.p_out_ch =  IF[39] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) FlowMeter_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[340] = _div( unkR[285] , unkR[337],"Injector_O.PR_sl") ;
}
else 
{
unkR[340] = 0. ;
}
//[E-133]  CombCha.f_O.p =  IF[41] (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) MATH.max(CombCha.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[340]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-134]  FlowMeter_O.f_in.Tt = (FlowMeter_O.f_in.pt - Pump_O.f_in.pt) / LPRES.rho(HeadLoss_TO.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(HeadLoss_TO.f_in.fluid) + Tank_O.Tt
unkR[284] = _div( _div( (unkR[285] - unkR[312]) , LPRES__rho(&unkR[63]),"LPRES.rho(HeadLoss_TO.f_in.fluid)") * (_div( 1. , unkR[363],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(HeadLoss_TO.f_in.fluid)") + unkR[310] ;
//[E-135]  HeadLoss_TO.f_in.W =  IF (LPRES.State(HeadLoss_TO.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(HeadLoss_TO.f_in.fluid) * FlowMeter_O.f_in.pt / sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[5] = evalNormResidueInternal(5,unkR[62],_div( _div( unkR[332] * LPRES__FGAMMA(&unkR[63]) * unkR[285] , _sqrt(unkR[284] * LPRES__R(&unkR[63]),"FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid)"),"sqrt(FlowMeter_O.f_in.Tt * LPRES.R(HeadLoss_TO.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[335] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1)))" ) , unkR[335],"Injector_O.M_out")),"((2 + (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_TO.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_TO.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[5] = evalNormResidueInternal(5,unkR[62],unkR[332] * unkR[334] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[285] - unkR[92]),"2 * LPRES.rho(HeadLoss_TO.f_in.fluid) * (FlowMeter_O.f_in.pt - CombCha.f_O.p)"));
}
//[E-136]  Pump_O.m.Power = -(Pump_O.tau * HeadLoss_TO.f_in.W)
unkR[290] = -(unkR[369] * unkR[62]) ;
//[E-137]  Gearbox.m_out.Power =  ZONE[2] (Pump_O.m.Power > 0) -Pump_O.m.Power * Gearbox.eta	  OTHERS -Pump_O.m.Power / Gearbox.eta
 if(m_branchZone[1]==0)
	unkR[292] = -unkR[290] * unkR[288] ;
else unkR[292] = _div( -unkR[290] , unkR[288],"Gearbox.eta") ;
//[E-138]  Turbine.m.Power = Gearbox.m_out.Power - Pump_F.m.Power
unkR[385] = unkR[292] - unkR[348] ;
//[E-139]  HeadLoss_Turb.f_in.W = Turbine.m.Power / (CoolingJacket.g.Tt - HeadLoss_Turb.f_in.Tt) / LPRES.cp(HeadLoss_Turb.f_in.fluid)
unkR[318] = _div( _div( unkR[385] , (dyn[3] - unkR[317]),"CoolingJacket.g.Tt - HeadLoss_Turb.f_in.Tt") , LPRES__cp(&unkR[30]),"LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-140]  Junction.f_in1.W = HeadLoss_Junct.f_in.W - HeadLoss_Turb.f_in.W
unkR[343] = unkR[29] - unkR[318] ;
//[E-141]  HeadLoss_Junct.f_in.Tt = (-(Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -CoolingJacket.g.Tt) - HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) * -HeadLoss_Turb.f_in.Tt) / (Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid))
unkR[296] = _div( (-(_div( unkR[343] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -dyn[3]) - _div( unkR[318] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) * -unkR[317]) , (_div( unkR[343] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30]) + _div( unkR[318] , unkR[29],"HeadLoss_Junct.f_in.W") * LPRES__cp(&unkR[30])),"Junction.f_in1.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid) + HeadLoss_Turb.f_in.W / HeadLoss_Junct.f_in.W * LPRES.cp(HeadLoss_Turb.f_in.fluid)") ;
//[E-142]  HeadLoss_Junct.f_in.W =  IF (LPRES.State(HeadLoss_Turb.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(HeadLoss_Turb.f_in.fluid) * Injector_F.f_in.pt / sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[6] = evalNormResidueInternal(6,unkR[29],_div( _div( unkR[322] * LPRES__FGAMMA(&unkR[30]) * unkR[298] , _sqrt(unkR[296] * LPRES__R(&unkR[30]),"HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)"),"sqrt(HeadLoss_Junct.f_in.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[325] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1))**((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1)))" ) , unkR[325],"Injector_F.M_out")),"((2 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1)) ** ((LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / (2 * (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[6] = evalNormResidueInternal(6,unkR[29],unkR[322] * unkR[324] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[298] - unkR[59]),"2 * LPRES.rho(HeadLoss_Turb.f_in.fluid) * (Injector_F.f_in.pt - CombCha.f_F.p)"));
}
//[E-143]  HeadLoss_Turb.f_in.W * sqrt(CoolingJacket.g.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)) / (Turbine.f_in.pt * Turbine.A_in) = sqrt(LPRES.gamma(HeadLoss_Turb.f_in.fluid)) * MATH.min(Turbine.M_2, 1) * cos(Turbine.alpha_2 * 3.14159265358979 / 180) * (1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2) ** (-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))
res[7] = evalNormResidueInternal(7,_div( unkR[318] * _sqrt(dyn[3] * LPRES__R(&unkR[30]),"CoolingJacket.g.Tt * LPRES.R(HeadLoss_Turb.f_in.fluid)") , (unkR[376] * unkR[383]),"Turbine.f_in.pt * Turbine.A_in"),_sqrt(LPRES__gamma(&unkR[30]),"LPRES.gamma(HeadLoss_Turb.f_in.fluid)") * MATH__min(dyn[8], 1.) * cos(unkR[392] * 3.14159265358979/180.) * _pow( (1 + (LPRES__gamma(&unkR[30]) - 1)/2 * _pow( MATH__min(dyn[8], 1.) , 2,"(MATH.min(Turbine.M_2, 1))**(2)" )) , (_div( -(LPRES__gamma(&unkR[30]) + 1)/2 , (LPRES__gamma(&unkR[30]) - 1),"LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1")),"(1 + (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1) / 2 * MATH.min(Turbine.M_2, 1) ** 2)**(-(LPRES.gamma(HeadLoss_Turb.f_in.fluid) + 1) / 2 / (LPRES.gamma(HeadLoss_Turb.f_in.fluid) - 1))" ));
//[E-144]  Turbine.tau = Turbine.m.Power / HeadLoss_Turb.f_in.W
unkR[402] = _div( unkR[385] , unkR[318],"HeadLoss_Turb.f_in.W") ;
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
void DRLPRUEBAS__RL10_respuesta_cargas::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_respuesta_cargas& m= *DRLPRUEBAS__RL10_respuesta_cargas::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__RL10_respuesta_cargas::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_respuesta_cargas::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__RL10_respuesta_cargas::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__RL10_respuesta_cargas::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_respuesta_cargas& m= *DRLPRUEBAS__RL10_respuesta_cargas::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__RL10_respuesta_cargas::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_respuesta_cargas::fcn2, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__RL10_respuesta_cargas::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-195]  ThrustMonitor.g.A_out / CombCha.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[10] = evalNormResidueInternal(10,_div( unkR[2] , unkR[4],"CombCha.A_th"),_div( LPRES__FGAMMA(&unkR[180]) , (_pow( (_div( dyn[10] , unkR[60],"CombCha.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[180]) * (1. - _pow( (_div( dyn[10] , unkR[60],"CombCha.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha.p_out_ch / CombCha.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[180]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha.p_out_ch / CombCha.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha.p_out_ch / CombCha.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__RL10_respuesta_cargas::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_respuesta_cargas& m= *DRLPRUEBAS__RL10_respuesta_cargas::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__RL10_respuesta_cargas::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_respuesta_cargas::fcn3, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__RL10_respuesta_cargas::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-198]  CombCha.AR_r = 1 / CombCha.M_r * LPRES.FGAMMA(ThrustMonitor.g.fluid) / sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2) ** ((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[11] = evalNormResidueInternal(11,unkR[1],_div( _div( 1 , dyn[11],"CombCha.M_r") * LPRES__FGAMMA(&unkR[180]) , _sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)"),"sqrt(LPRES.gamma(ThrustMonitor.g.fluid))") * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1) * _pow( dyn[11] , 2,"(CombCha.M_r)**(2)" )/2) , (_div( (LPRES__gamma(&unkR[180]) + 1) , (2 * (LPRES__gamma(&unkR[180]) - 1)),"2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha.M_r ** 2 / 2)**((LPRES.gamma(ThrustMonitor.g.fluid) + 1) / (2 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__RL10_respuesta_cargas::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_respuesta_cargas& m= *DRLPRUEBAS__RL10_respuesta_cargas::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__RL10_respuesta_cargas::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_respuesta_cargas::fcn4, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__RL10_respuesta_cargas::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-215]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt) / ThrustMonitor.g.A_out / CombCha.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[12] = evalNormResidueInternal(12,_div( _div( dyn[9] * _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[12] * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1)/2 * _pow( dyn[12] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[180]) + 1)/2 , (LPRES__gamma(&unkR[180]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__RL10_respuesta_cargas::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__RL10_respuesta_cargas& m= *DRLPRUEBAS__RL10_respuesta_cargas::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[12],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[12]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__RL10_respuesta_cargas::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__RL10_respuesta_cargas::fcn6, n, &dyn[12], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__RL10_respuesta_cargas::fres( double *_time, double dyn[], double der[], double res[] )
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
unkR[246] = _div( _div( (unkR[276] - unkR[305]) , LPRES__rho(&unkR[247]),"LPRES.rho(HeadLoss_TF.f_in.fluid)") * (_div( 1. , unkR[351],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[247]),"LPRES.cp(HeadLoss_TF.f_in.fluid)") + unkR[303] ;
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
unkR[359] = _div( (unkR[285] - unkR[312]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(HeadLoss_TO.f_in.fluid)") ;
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
void DRLPRUEBAS__RL10_respuesta_cargas::checkAsserts(double *_time)
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
void DRLPRUEBAS__RL10_respuesta_cargas::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__RL10_respuesta_cargas::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha.fluid_O[LOX] * CombCha.fluid_F[LOX] + CombCha.fluid_O[NTO] * CombCha.fluid_F[NTO] + CombCha.fluid_O[H2O2] * CombCha.fluid_F[H2O2] + CombCha.fluid_O[HNO3] * CombCha.fluid_F[HNO3] + CombCha.fluid_O[LF2] * CombCha.fluid_F[LF2] + CombCha.fluid_O[RP_1] * CombCha.fluid_F[RP_1] + CombCha.fluid_O[LCH4] * CombCha.fluid_F[LCH4] + CombCha.fluid_O[LH2] * CombCha.fluid_F[LH2] + CombCha.fluid_O[N2H4] * CombCha.fluid_F[N2H4] + CombCha.fluid_O[UDMH] * CombCha.fluid_F[UDMH] + CombCha.fluid_O[MMH] * CombCha.fluid_F[MMH] + CombCha.fluid_O[JP_10] * CombCha.fluid_F[JP_10] + CombCha.fluid_O[Kerox] * CombCha.fluid_F[Kerox] + CombCha.fluid_O[Oil] * CombCha.fluid_F[Oil] + CombCha.fluid_O[H2O] * CombCha.fluid_F[H2O] + CombCha.fluid_O[IPA] * CombCha.fluid_F[IPA] + CombCha.fluid_O[Air] * CombCha.fluid_F[Air] + CombCha.fluid_O[Ar] * CombCha.fluid_F[Ar] + CombCha.fluid_O[CH4] * CombCha.fluid_F[CH4] + CombCha.fluid_O[CO] * CombCha.fluid_F[CO] + CombCha.fluid_O[CO2] * CombCha.fluid_F[CO2] + CombCha.fluid_O[H2] * CombCha.fluid_F[H2] + CombCha.fluid_O[He] * CombCha.fluid_F[He] + CombCha.fluid_O[N2] * CombCha.fluid_F[N2] + CombCha.fluid_O[O2] * CombCha.fluid_F[O2] + CombCha.fluid_O[MMH_vapour] * CombCha.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__RL10_respuesta_cargas::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__RL10_respuesta_cargas::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__RL10_respuesta_cargas::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__RL10_respuesta_cargas::initDelays()
{
}


bool DRLPRUEBAS__RL10_respuesta_cargas::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__RL10_respuesta_cargas = 96956;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__RL10_respuesta_cargas = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__RL10_respuesta_cargas[] = 
{
"AABqdAAAduUAABG/AABpb3TnI47ddgj47DDG0vZ1aaexS3awwcj0RC6Po2txQtCS2SZktz4GRjtFAQDnrRafPfWdntuJcXoKQ+JY5Mo3UuUP6P0v4XszrWgfKoglEWzWgwjC8j2qCABRm14llo4nj1kl5WsGM4+UhdsFqxo25GAzB2uST1NQwvByCOLAn2xa+quH9iuFJZAy3EzewiOndu1IITprIM/RZNkNFnEJ3qDAY6WXZ9HN9Qnot6rpqljP60fwQMqX0L6OnUL4xnLuf9FE9aNTPiixcwuTZYl7yzl2RES7yw8oSZkgutBXXX8/fjUFE++P0jrOqbXp86bl5AyOuZ8lCD55HHPoiraLKntSSwUX8ODUMT0MZII/ZF/O2n8R/OO/wcwSSrjRk7L3MPrreQ3AABqUgga77tjwwvBzuMZj9KAXTMVsn+/UZSwxOBPBuwLSdTtC8FoxMiRI2oPb52DkXlOrhbdzG/gCcGZ+uJIi2SuFlE+5loBtztTUwkJQevHqOXNML4gWj/teH1Y4fz+cw1O4c45cUyhQ0jc8j9qS/rhnxai+5bMqXLY5icz401hU2EI1RE67e/ZEHl5MIdC+n861Sy9eTHmAgae0tumAjdyzlamQmzqK/PFKxncXwuzzY+FPQUplF5lbfFLmWRJFm4OzgiE9sFnSr1LsBSEokbbnKtWn9OMrOuPINFajBWD5mIjvdYKhYeDheCr9h4RANYdvVBgCMDsdcqZwtmQ4KkdKxhmhwy1v4R6u3yIzxtlVuKhA/1jccQT7Ecaxn8kH55F766HU2vb4Cn759r6BOevN5d7ndO1novSRJSAhBbJsTUCRcWimjs8GInu/mVuAycCyDssKYecQ4ykMY9tBO1cESeUSTNjOsZGD3Q0SKaUFn2rju3P2034mNGSonCXvgeXdGMX7bedUxtHvzMQ1wUICGnZp/vFUITCCaADtdfdtxtdt8sv1rifUOI8ylm+KCMM1FCjqZX5kwt1oyXR1Lhy/HnHKekFnO4+itj/XeNfFP1TvNj9UbaJHJ0v4gA7ARM5tH1c8Sv7abXyGOcEvWzVv/rJ2Zut0gd1i5GfZgmKkpAI/7IQ096c7DaMzGi8MUKWckty68BAoVZzKyI6RW6HfjMBjCknX6jfRTkbJUFF5IVQFh8HJcW1Bm1Q0dcZiFw8j8TocZKtdystYUF10lgEgRE5Ecn7FJkv9WidPC7Dj1m7oO9XFcX6XzsMyIVrWj+PfRndvqjg75g6O88S2Tqu4BAN/wHfIle5affzlaPC6GFsgnRnIzvtdIPLoNjMa4Nqxa/JK3e7Dv24K864MrQZDHqMGBuMQn9vG0JmPkZAWEslHg8NhqAn8yPKQpAE9CebyGEFoI4WgldJMaExu3GjHvczNosuqGKzLloUcu+K/wnDfmj/JkD5EtdHUjkLPH7vQAalYiDd3Eyw1Y+RXyStdq8d/NRXwcmWdCpwPz79Z/RRSYMiq++m4FyKMvi5O81YItSfZV6TNU9GiaIKNvABYcRmJ64N6cnPQ/tgJDN2cAskOIu1k70qHDWRqaZi/lug8nLpkGodnmWy2Byh+HAZUXnkbM8TGtuR3H2Li8jtpkNDHBeT991AHQ7X6rSUeFJ1cz0dmd3zekSHFdRR05ersIYvHxXNe7pxT/wEsVvrB2RgoVujnuvJJHe3IlQ67hBV0S4WNypNEK1fDeUjROUFQ4PbncXrR0ZNsjieUhlg0poZf4Ol+SP6+kf8kC+gg5fxW/L3lD6ThSrK4SzB6IVqoZVpafpb51JBTZoL2u4/IDdkUwmLkF64Bc+MZmqqMEgwqUNrsN8HMtgq1poIw6aPBWVfp0/x+sFerlFW6l315zhE0n8SnSUujPr56LeobdWTf8G5BJuZM3u94e41SXNkHNWvuR+dH8CVlcvyuhGHNWc5/oVxdYDrdIxPm+G5FJl7jD9Mzlf6Uyck4kEfji12iKTvURLejDstU/USXSAoLBX7oVPwo",
"6H5B795HtlJ1CxruziOid0IjXST8t4pF+zuNHbAy20qghtKh/3JLVb1JF6z9vfIolGJM/3vP0P1p2xf5wJxyNTU66VeWiR6e1rNEpxXAgUHAmdXlY7OBpmRq4+rhAG7Qnm3wArDqCpyeJBSAak99JQrMwP+TSluzh/w9uUPXgiDzgWeQ1YK4Nlwszv7imWxAMYRXOD3ttePTNRXuoYTd+c4PzTbs3VoEajbm+lPuubCwpgcNHiWgi51D5P3FjwM1ikTPlsIhcVwMU4MwosP33ic6T9PYkmlz9nRRhQ5a0iR0WFvcZr1sbcROBHNxvoy7RTiIET53rhvXf3i1+ZvO/YvVb8mSdEuUlLUkyEZVcv7p5e2e5J1orxnaXn7OFrTD2Ff+L5ifu2xL4xoPaevR7FDtQD5+E7oE4iwRBGv8uEdy8chGg/c5v5VsNLfAoHF/WHrEo25wxXzDO5sgjV9gk2mq9r1oI0j25u10QWXqvKk1TYTpGsjtD7z5pxPhFSj1J8XSPVuF4SzLSgZ+Pa/1kMmQyJJU7coMKqHtHjtaGXrfBfu7bK4ggweGdAX8WXg4DGct9RiT1uL0ozz9eTxuSUfybUo/J7LXmJgf0Lyub8lBNQMpuCjOwQ47tN/cB9/fs/1zwhforkG2JB0BiLDheVyUoSIpPzANoD1BbRjN93TapGwmYbFFfzw7leTvpm43O1jy9tpYu6P54617QTVg+mE6NTxeGQCZ6MARK257QNkJ1fJa7NlC9iq064at9QLKsWfWGv+FWHlKHVVriVtrX8g/jUoUqx1JjEkKsKnFqYe0wPFQKW0BZkWbx9q03onOAHotONC0BvonAtUqU6ptOAqGXjzuKtKt7T4yHI32coCx3JB5DVG/aPwTvV+ByTuWjuwCtMckLujVx9tewnuRn2fOrlyEPT8jJlTQPHxF20bDTUOliWlHAiyEvqDMkyquDgNu3L1Q7bIVIN3Ic2qk7AadaiBq39kA7xob+tBWqR9BBGYs0p4qU6khSKIuVp5ScdI+rclON9iFM73IN2MLQkX+RBnFC4vkNDBWfs46b6cBQBPBonYR/l7n4qmBImkuGgiteQ4xuQwk6ebxFOIQY2mFjiMnFG+VGyyh11YUD4Hro6+FJQaHNWYJnLhZ5Iqlh14AvoSlfA4Ce3BzgddoBIkuJNtL4OfLUGZIE+yTcDRi6c52ULGODRTl2af5tTooFhJJPi+m+1+Pw4FQX1G/SANNoodzZZ1hsKbe/cRpUewF0M3LqGowSnGWoP1AfYG+T5F8LH+lYP2d3jhEPye7WTs9/Q95iE3L40KYaurZL7OAB/X9HYRtDMIDd+/h1M8AYW2QfCCq6hCKka2DYSiHN9diXzGfP/i+iJZC3bdyrlw/MPcBQLJjbnS6a4lSBjCjMWqo6K5HnlJm2JMxNs7Qfg6yl3IsKHw6Eh2WKVVtmC+LIbeDk/mhKee1dVAbTsbQ4z0GIpWEJNVtwTkXbPbaNRJI/41BmFZCaYKHHri4elxQVAhu46fuA+wR41HuBoR6BV91OrXv01yLuevNjVc5/m+EjUyMRYX7rpPe5qe7df77wM51QiAPaWvPV9dXyyg4jANG5DPDcrChu21FwxWRs8LsXMUKu4tX41Y/ZLbG7gOQkiwNh3BOGEWdooC/9JK4ZBeFTfmxw6zz0bKnhAr7PXI8vryf2hGaJugk0N1L8Z8/ks6PelRif7O2bim6BOd+X9b1kBmrDkQwuhiNf5OLf/Aan/mSKg59BobxDnb6PSfrFCFNqjnG4LlHtHZfelyTdflJBPvOWxCrNmeag6n8Hy7QfyfEQbWKZ4/fi7oa0/UGLhXdiAoljKE+cDo8hfeZimu5sSzcsu+Jxe1R9fmCjiYEgcQ+6edtZd2Nl9dZYKYmK0Um3bmOkMOASv354lwjMtPUiNvCRTIHTILjYwvtCtJ1wRrc8mwPDj9J2NDYtf9NQKdzSBvNuecL4oz9RrxiVN+Xgc/4RqVg41a5",
"xSE3siftOq5+DtdFsHiGSSzV3rfSR6kgzTbFV2TyTXvWWGwmystqCuJf6WsqTO0d90+BkuFICV9TgCuKdwTEA7rGBNEpGvrRuGcu07eFtevLMoVIuRmaclHOHigxWqKOQgPVjkPrQba5JcHM1lZyG/KnygS0Ob4CImDQ65e8396bsPQiRx9+H2AGme9QLd3oMopwEv3wjQl+jq3RakwRq3BMlqgmdUtrkDpE0hzJbV5DwL9js03kRE/HV83VtShLygxBawPRPyz1lHiH4ZgPu3vxOkAkcy3bhtjSJ5DVKzfMV3jvEzfooJgZHn8geFw0SE26rMEylZR7daSECmOHbAzoHFJ/f6Bx8V6V0M8DpAa9cnkNiwMdNU6DdkVO+gdMQy5YS2EHR9yDmqVcNVso1ZASJ+dwm0V7s8Hxu1qSt4tdFWw+B4P3LD4ih7uJgBw+OWS3oscy2RHIhR3KaApXW+UE79nGAfhzuSpgu2UNG/L2a706n+Rmqgjl3qNbeVaeFwTwqSZRYPnXmpseV8evwqld/8AOwYO99zQ0S7rkLTRy4tQpXO5pjeJb9OVkHLiKlj4CPGnEkH8NqQrHQeg+h86kD30SZ7g5dWYNgBywNciIOr5AsD0BfYQYTYuC2kdalZqDOsLEy5XehLsxjwok/3CmEQNwoiucYQj4qOitUz0YByqs09TqvjhSlfNg7Ijh7rB8gIm8yC1CEVP5k7jxIRnjr5DpaaqFf+ZX9aU1JCJI8ECQyUibigDft0HoJcktNLk6oRrptNZvqb+BfqxR0hEA0SHpoU002T8eaQVCLVawiVjJtOFCTgVCRVD8OvFfRkVm1/JP6nKJRZ2EiM1EtUbyAhk5xC9w7V5Sw3PAVq6SUyti6vYKqyfey2t2UowwXnZ7T9oBcmH0Q1YNw4jZ5rYqxZykCuTgdxG0qucKBqYbF/kPXBv3bjFNwyPZb8x32jXAOU/I2CuuGzWMo234/h38+dt5RK0J4/ZTk/B8HASnDk+tfal5ZtprRR/FsOQd8mpK3359n/P0uDJaLvJnS2p9BOL21d8YwFG2D3IaVpKjD6NX3cGjFAvuMBsIa6vhnQazXIyyQ5Mq8IgHzxzt1qY2DciTzfIPylxVxENuebHhI23eqUtd+QgtqP1F06ZPwG8W7N0LTbgdnClg+sKKql7bdUsCUDpQZfzHpMv0K1XDzH8/5KlPyyFGJAvBEsaS8rbmMnO9yx9/7HJjwpucAH2eEQtnc5CC0kj9dVYdBInXlM/7uHOlZT35mDY0wy3xarGP469u277FtDnTUrk+E1VyTCzGK5z69nzfOoo5EB3KGltYdaxFcVeAGdGx0Y3Mx3FrwdMpy19wCZTd4qbB6/NlStU6YM3wlw2VYxub8xWnqcmCAG9fvQPiH6fvdihB4F60BLoJy2GUkecy+y+KoL6US0+eByyP5SmK0Qm2X/TgxaqPTzJ5esALdgHCLOhGuDQ3LQz4XowehZJHf1oDT4vjkB5ouGxg5+QllGaZvfG8TED9p+JqD1AfKeA1sQT1GlzfSU1saiq5B9hBkqJPOxPSdC6b23xUiUDaKJ7FoTGAYEpDmtjQyzfHZajjxNvMYaPb9JkHjitAk1HqAvDb1XCtWk2XLJm28i1rHy7YBrV77rJzRve1RwWsLWKzMfeGao8Ux/xFXHOlr6yD4t+pxFZ/K0KuTMLEzWo+um5dkDqlPuVaT5ASSwFmvXr5S15YHdLLyti2SYx2nmRQKcbNvYWs7u6jbSTlbw6zAND+ktzmdm2VCUbwixiEaoP9m3F+heE/tu8byaaxdDK4bLgdo2r344azUY93a52NgpNjFd5pqJ74ZeKl1Zc0FTJ8IvnTOcCIG7phwEHCbY5dVQmsbyXet0X5TMiyQk7kuOZ5Y0e8cuqNKaKnn36r0rqynggOCaU3P8ujN3AyhDbR5GCigzSDzWo3KpJa7eai+QnoLHd+d6CJkWEutu57SULLqVr3ZAG5otaA0xT2KGTN",
"JgG+4U0zgCXVJct6mv6DvMMpBxKZAYEQmE3X8ufeLfCtn6pzB0//CpG/5+R4h2MFi5+MHhCSbAuXc1xzHCVzeba4NlLNiib3H92VM7imveGLzcByaUOf5WHq4gdRYyg6cNQdLGliFl4iJDaf0y7ehCGOUXiob9DVftnsJOb0wq+usBl4/TjBYe+GI0oO5muOochVVQZsHH2rbHMWz2fqT7fJwVVStWo3LDfBUe0cAgGR8BwP5XYGVHdRkjCiafuUIqjqeyl7xlKshESi5IfTCg0cD5k0thQFZI7Hm05FC3BhsneKlOuuiyp3Dlu2mie+TAdnbbEXkspZy3VDE6k0tsLLnhEOfjj+khTMWwfMgsdpvQPigKucT953DAj9kc3cdX3tkjiA8hFui4W5PPx6uCVIZlRo324ydk/ujotOM9cKWh8iZQww19ovLidh1bKQcqWtjN5N47Hs5+y+LYY4AcCgcnU4XrJGGTCKm7nngI1PN/ByXWdLV3PV/6D6KTiCH1OM9I1ngNNBgl+9SSqDHkNrWc8j1lb2JFrTo7iHWVUoBHEpXAh/r5FoiHh13VylnQOYvWVmjDm1TJ1Nc/yFCa8ZQsrTSCHFsjSRAEOdC/5AQbeTgoucEvAAW9OYF3FTJJN+Ug8nxorlpIW/+qcOFRqMR4w4RzBeTTWmh+HC7Ng84/RwZAya8DEbQnbUWMSUwBFHntybqjdlinVvLODoNaLRVbGsInK9eVDRpInDe/84EDRtbh9/ioS2iRfd+Bc5umvvQZd1+RXbrwIoLhcD9dSM3HDmYFgutFjQ3fAK7UnScgN2lt3CIbT9PlUjWB3RFSWQp1jB3zuCjYO8fTMv7+SIlptVE/KV/2sA4lsT91rUqe/kTI/WYUzV5/vlBaUhHshH6m66605zbtkHSb8djCdtkJESEcWOYLwOk+stuD3PxTOXGh4zXK6ydPTkZ4UgjwJ7dqi52g/DswhfFw1vyvzboGqOrX9BOXI/smfhuXutliRSjGNecAHs2h7BA9wXNEhj59ByosBF0pais9jHB+EPke84TIt7QeH/okJE0ygQTjqyp0vYwnmW4F1dky88FQD11PehtYhPtbpEaXgZIclZwS66omxImU4Zl6vTo/mvtpWNQy6mKw124VfiwuzavCmyHK1WkeyikaMmLxYJDyxdiLu740Q4kpl6AVg/nJD58ANGGdQU1u2NX8rNC7k3vjAjZyAViIw+4bbtYyCjelTNLUjfoIx++Z8FkA6H+764kkL2RaCD7uSo7KtA76qTCYzn6C/OEaNwj8XfKRO2oVOwg4BYVYRHk8iZ0Jt2gByOQOo9X7opo32zzGYR7P06wb1OemH0NmX34UYu8UsOvPt6g4moII+H2eIwSbcZKkBXuIKRUBD9dVj/xsz0dPtIeYgFM0RPL48K0VrfPFN65ouuuL8uO/VgII/HkUuKqBb0ZUP9ysDcl32f2GyTBdrqkx6UzYpo8oa4YfDB9uO6YDOYGJEsRSQXUieFJ/QJq2GsTVjx6TMVAfFBaUqkGKR0tvRz8umQ5M0xGlGa8ay/tqUGfA6C0fl3bxDkp/h1/FveqCVs6FDbaNSnMNgESj+dMDOR03nfdTp5g8h8ZnryfC17QR07+/J/fMXwYmBbPMj2O1W9h8KHAxxWAPsIgOTkoC7hgllAhJKR0r6iA0H42OpxztqWbHsoGEUUt7fKtAtLrOFGXW/PbhMuGppHJvQuQDYHoKwToH6ej9Pjk9EquSVw5/OcdUp6SB9uZ2fbzXRBbbQd+FZ+O8PpNxnuzRSGUMNM9DUF3oHRyOAhcOD58CMZMmNPe+8XKEO2C6P2tENfHKlnQpjPh0wShcmkOiCLYVKOQiRj9HmwqihRMn1ZB+6W/B5sQ6p0/Y2z97uQ2ShmLe8V8uhsGZGEfCLHsUsp8K9s3D46b6ZbDXjJPR9W3wCftkFQr1c2Lg5A2wMhRBFj12YimvBscKC5+IHRkro1HnZZXsNY4sSvNqxe",
"yRUVBCxSrnVsfBGobHrWHZkpsoDoOwF0fqEieuXMAPmmafJAfvvcrpPYWKOQfl/6thxABYzt81XvZuNoDAlJ0uqlP6YmR3KQNobJgNfF3vV6f3zyLydYAtAis9IGuOy8u6zZFmTW52qe2ZZG03seScpwCSmtjCF1NId8E4HsdmyK0YVPJETWZGPu52uKhkORlq/g8S/07vwnI7KF9V5gTd51Gu8MzsuZcKtu5SgMIvM9y/wnC3jUq80lIZVo0KzPldS/+M8BZSpdH/p2qM38EubHtuARfBv23zHcA/fJf97Ek4N/D68ZQXhhJyc7u3AGHee4SFJzTN5LH8oN4/DkgjHfcn4YI5/5Pv/oF0nuLGvOMKtb3a6+w9VyejxI4Q2vrol9oi2WrL/oDuxJOdKo4ZrMTjGX0t9YkhHWZCSsrRczdDbhjkH+AIuoEFGJJviVaU/+mIQ3v6G+L/0HgtiOyPv04DAAEcO5cZP3aIbNJJzfm4QwJbXhhR05vbNNSGfq0BetdIE5lrB7tjV8Sj9lgE4FQYKrAxayu2G6uXiZJd9TJ/KOHPR23xvzIjt7zd3pi+2EyV9BqE1L7JzsUI33vPNKf0TgyDFNsqrGS+Y8TrKLfZx7ODcOIydkKYzmfahAMBHRcpt2xMoLpJQj609BkIEmmzsiu5GJkfZOeMN8NJb4TWjaRoVMXvVEXK7yGQ1odByIOTxfg9mvFOtIFoseU40gO+pl7ftg+r+HAA16+u7YSmtdI2qfnFRcAS8NdryoIJtb9OabL3Unf447UMG1lYfesCD7t9bgelu/SPW0HlkPDl5ccrcSb60t5CiDJKySxeCzihPYXUglwGSeozPMUha9xCeuZlmWXtcaEwNCnrCt3L/Eb2GcKXfOHv73VC/mCaD0/CZrJg9VRWxssziV2Wy5xkjJxNfOK3D72R2yILedzjtmerz3yAhUHhfzfO7ApgI1xmpnegd4W6jK53YDTB5kfW8RlxF4rSfUQOfELT2nW6nE89BgRJxDdDQq4myt7tOGI4Df2yHqIV7/B+BKjh2p2VsIp820kxaKApoLipQaQzyABvMdEWfp0I1XenW3H/gMkYhX9ngmm+wZ5XT67ZYiBE+zyiajxzskPM8kwtCT4/ggmJNWkFVjVZKaXAydKaxnFPDQNSID3CoL2xsSFKg2usaRHxAgepnLCNBUrbVrlAVUiibpajWZnFntr234j6T1l3DNmCVjthIQ78LeQW3xeGQNjyNmuvcwiXtkWg2+D51ciOCqPeg1gW3V7j4No+ZusnOvZ2RY9Bkd2m8/ryrMovemVuwjgRyYa141aW+/UtGRwXGqSGe/YPGEsz8eVxRBilQ/n/l2Yfx5QvxKU42wxr+el41oM+il8nnxLtU/sxZnxDAcJjLkL6Jf3hE54woEHVFCiQF0wzLmnY3Vh+vqMmCvpTSc6elxpY5sUW41ZF8hX+OOeyatXn0waTYPlY49OYQC7cT2dtm/X11K6eYEnt1yR4x8SwOyaW6Wd2/pADiok2vhr8ceMuA+0QDcaw8T3YaVrF27CRe1k5WgGMTci/jZj+f9gFe5RBi6nNOKndMktEry/xVvEoJukKzNzgLRPXyPq1oME05dv705eh+Dkb6KqE50vbyY8zryebUhXyx43+2ymC3kfHkOpA5Y2Ycpj7907eSyDG9mrULmaThDgQmRuwNzAv7VHHvv+PvT1rjaP6hx+50cTQzPTeupl0e410vJyrDF2EMZXKMaUCKUVy78ZjIsnzAVma4gc1WHoVKBjIE6GyvbsDlNbOlgLR9t1il097kkEJP7l5lB3tWQxeB6V+0zNHuH5MGbmaEJLldd/UGqAu/0v11E/rMTCHEyBDRZ6TRy/NAa8+M24ooQO6KsOhA5EoDgWxkUirRJGVeVuiVCiRD7pcLp8WWBT/ucfkLOHqWaSjIEuDgkBhnMaIIqay3L2SlvKbI+Mp/VNe5JhYkDq7szUxYvn10OzoFPU6x9Vjo77mAw",
"o0zXZ//WLN4lG9/ThOwCknqbSDsTnZPIT0MY8lE+SGOx4emGOXgdJd7VTS1ZXxG8cXlIwweMb7yN5gryv2Wo9YhYpnn3PsuFbMZygQNdFIC/Jp0McrYmZvL6QQIrolWskpzhdqw8Ad5Dfo2tS8PO46PWSVtrvLGPsGhUKdYu6nFJQitjuhRMsLr9KNIt59Z+xsDxNOi3BDUMhipqCU743vngmZN1hjiB77BCbkwCGdw2LGIa3irfZ4qLlSLjX+1eRgSLXlZo/7jnZ1o2oLIySKIGVMupyBWVQTm7gtmKSEYs+MVaf0StlolBOGvpBU73mXbkyx2zNcRYIAAINBTrW5SHPuZYMvGwJ/cg+dGQUSyZfki4boVM+lNdGvaqX03hIvR00V2X8sMI7vg2Ax8+lei1tajP8o8f9xc7EW2JsdAx3d2KuUV5pox4yObncL+DXwdm1e3PJ2/A41Hl85P0p6OGiOzCUpu32a/v0AuPc8RTsi2PVZu3DpNiQUuFaVjEjCTM75AK1jx82ct8itQhc3I2kkHjhys3nTXv61FlkVyPcYFMzQfAYSQeotyIbBO+6pSp4UGO+4ZZEefrdrIaCbCqjMsXB3FqnmYxhzEZ6HEFem6NG+VpR5sueqEUKbvgU14+gm5ZCiLdKvcBQTxkqd1n76adI04uKWHKMZpofSGa49/nbK9uH0PKZGxHzXCua7Hz3xNjyu9rvxPXe5pKdbmRlCi1b9rNNe/AiRTBO5hCjrgR3k80gq0qnOtD0bkbHYrDxHi3uXsBYCuu6TDjf6dFzcYLO442cS0z2psWm1MPicFVbGJrfNUcn8HE7zqqR+GR49wjO7r1S4ZYk2+3erE3AxQEZc7s9TbVzxydztIIn7kidAKqfb87h+7kh7aKQl9RvHEHosOvZaL5qpNnabA6iYQ6l8vhRV77ZTexv1qZBvA76dzInYdYc7bmYMwhiEXeRkXaLJJY0jBn67y9qADRsNWUICLyAdFZ6ysqrwR0pdiTKkgNl8YoIpSkSD1yL9SJya7HHWs91fs+yrpnVDKdBzW4qsXDjYZssWCLF7+UuQY0nfhMNWwSjpKlS844bArfSNDlow9j4zTci9SD2xCNwiJHv9tUolkRFELVxqZYVaQJIqMReyemx9nrAkOY2NxgpN/i8lo4NsMvf+dSNQf2MuyNy7EFct/SlrwDBo3hgFhg03c3yC8uj0EQL9r22oNhHbPq6f4w71c6aJlButo0OTs5XT3VZ8ZQhTk7ZBhagjGaNDmgtVT6Qcxpi+/0VBJFYXEFJWekLROQvb5FZ/tPYB3okSF00Prl3rFaf2aTN7aW4RYsU19sIeDZb+/M9oZTornrfWIxpmsnelIGX6g0mxshtrTe0ktihPdGWERk8LXxWylfENXAOqk5mIAdJPmNThyEXzSdfx4/1tL7F0+I1E3eRXKAyODx5SuQ4Hx5GNEhgNmOT+xMNugoPpi5nzbtV+MuuWU0vEai4jiR7/osGahhGEBayulZwzb5TN7KG6ve0wQl2cdZBT2e4qSnQz7Bi32hDRlczp8Odh27V0GX9/6iS8Jb2MY+d23zCD4ekMtyKmz8RirzinhuRLbi1R3wM1gzsgi5Ve5rJvFtRyBuC/mun2POETvsliNZ7OH0YuTYwlSaySyvdzSAOJ1LIutVOf+DZg4Kxs28nnLt2rK3V6X8NTMFI5LYRzjvpUvptiOzYqx78EuvjQy6PAMisuwinPGtV1F1BH07AhpS205IHHXR+3Mx809nlBsDf8kSmzwb0QYqCACws+cuq787i143FNt9ZrALGTb+sQFrzJ9fd4Vs51NP5hpeHVAxRp3gKbrTTWhvfrE5G1w6npanUn9NJNZbe+aLrK5IoZFUUYL7Y4kW4aOa7lI5DYmMCnZeSqpRSTK46dg4EeRr+HXlBLsZuVxGUA2K4hPL+xGRTiCIMPPcJNhCKYaAdVhE+BuYVwCgd+lsQJ7QCgX4EumOth+I3RsagabYeUpc",
"Yriqt58rq5Lt0pCNUWJ/JnNYHM/QxwAuM5Mzs2diHmkLXCYrIOqSaqXKSLFnVgPjPuDfRMAMSeVYvkvw0CVb6k6rTcUhoJy0//A3et99JyNZXnrW2zZJIxUeMpCd+3i2bCCYkzYMJKen5pqrhkqhpaqcrAa51vmbK55QUxaIj3hR/GzIRKtzGsIoTmj6R2Rpy1nsSF86mrZPV+ymtk/hUo+a+eL6+X62FQE0uW0+uBz+RxmPep3LcGbWyfqw2B5vz3Xp5QsCxkCOQXUVTPfaf3o2KaibOZYRBfdyMLYw23Y7Xw7YTTb5HZIwpYeYfhWNKUPF2h6fz/rVqV8fi6s7Z4lTO7OSitzRX4OLLz5C9WAxQSaZMcSRt+1scBPmP0op/FkLIS6d0GnwHxLfRQwAMau7X4pyecama1COVxXa5toG+XhAXyL3t3fIWTKMfDinkZkCCXH0mAsUiNMLZTcGRyFjUIKL/IQuJgn2fgwJUVblEP3qtCBOPjWJd38L28h3LRFDUL6XsYi6qcjcxNbUIaHoyXYvNh7+iYXnkd94mIBjWajHK7wbyHBekqypBohv1iwFYPtP7cc5PdaZD8EhGItYPrT2CPFxFjAWhF7ViNr1aMMDjz+CBAGW/V4/sQNVeHjUIlQ1wPh0raznJwmJH62GHDqDKaKJi6Mg2VybNW7DxJ3GsxxGcyHJyHvgj4Q/LNejerA4ivyg5lxF3/A938DS2n9DHTZHtl9XANoVy8SO0MnZRBHdCDLNsruhYy1RRiowGyWozGTgcdjmvCiZSXiIiDZlM3FpzW846Cv69hOewGJN6unjz0zRpRbEmc2gW9aePDGKxt2aNZUBP/v0c2BvjV8jfF/5t2NvruA6KDyzuJIdYKh/5w+y6os1jnzi/zANbfn36QcRh7Boapjg3MrBoVHBFu6nZdTDbBcC/p6zZRPSXwGARo0c5IgbI5fPbCv0KIiOPnwUb30dhR0hdzdsy0Vc69juE3SaFZOr1J4f446VakTfrzGHDLyMICsnGdhhDjWQNOq95fep9xr8dkGkb6mwooMnFoO7CrFaa69MMCeHRgcTTnApO5PEQr4ogXTOSGcedntcyrrnV3ZQYq1n3cVIhZK8CrNcMDFzXpIqHP1h2PCpSFXk/+4usV6EnIQhLZ7MtATtw0G1ybMslc8yKoWZXQLvT/TcyxTQcc1HpHMkGFCv2yaAEXvn/pfY2gBYkTbBiFjxsW6pDcFVZ+V3BJCYOZfKJHHxwzeXbFKOUKrV9W9QVuxCK2nAz8UL65LucARTBf0i8AV3oBCSBeyx1avVnUDEGY0CPsUt1u5/GHyPet1Mp+r9raGELSlRKGLEZJ8pB3BEpVX2Px34W35/2eRIKYcAyTMeZOFOCJrXZ53UmCyCqWoRL6AcDUUUeJsYMQTWx/f6AbZg+fpHSBlDInwNjfaohlNFSZEmXxs7Bauo2TsQzKKkjECW/fUxiimeQEvPNzjitXRnE553JHimlOFeJrCitkQNAo4HEA3h/4RuI449AFkyOKRPuyIkfIIQdxl9+9dXZzv9HjkltLwv7SUeakaZTTnBAeNuQOeC6dnsinsyIp3VjRVOp9MNDk9fFENJLQ/o/iThMof+xN20j88F+d7kfNukQeGTi/8PqxZhH+yDDRLtZwBox1Yfz9IqQFIw/ENStIM5/drXHIujUnwVzmqmwatHMOXBzFQjMX78E0yUz7GSh2qbFEmISfpHC4lEuaZi6ZR/Vu3upjyPKJPFjA2xu4NPkUCo8LhadIsXUsta+B0QXaGWtyRNnJTMdarLWtbKN7mE8uppTa2iFhrp7T1D9AnWI4NUMUWv+7czf1bxCuX9sqsf2aoSwGJpyyvVfI6zrFXhClkdFEzJ61kpPc14X/eTnSz29MzcpL1Fs5xjAKs/ID/J+6c+Jh/KdnwpnVw3ECEQlMAZ5I5GqEJrGdBlMtnRm/sGvnp3QeGUVBA4dJxxQBdEARhvlnhW2ZCSY/lq5h6c",
"mN6j8I2NTRl6JQ1B8vzYHqddn2qLojjAdGj4Vq3nq6PJzbpouNaqDEusbTs9qONd7rP7HOEZDG5FBYB6mEMh55hnYrnReptR3kbSp8RkPtuTFM7AOxWE9qcEs1iiuPh0fx+yTuhA9AQ35qbDX5z7s+D5oV3hE1OSzZwRUpWDN09u7IMejZ737WvS7IFtN27IJ1H1QcjQtPOtqX8CwFM0rwOvI6Cf6m6Bwi6ZecKG/BT5MGl+DPFk5Og2lO3wtlfRk17M3pkxXSo00FciAZgCv9BE3SrTrOfTft5k19LXmiMYmCRPwwgLn9ov56SzLJgFj+oWLePHop+rDosABBS5MGhOeXBb6nvLKttTJg+tLcYQ7lVk0wUpZny7ruMlQp269zITgIe4tfvDZGYaW5zrIWaXrJQn752GgC0yU/doHE6H6ixJJUtimsUys6Qql7UIaXdmeckm3FH/jI+OOckeuygENNDXfpS9TczxOTyfX8RlJGWJ7hAWgHDGKPJqo4Om1zfhREyhuB8Bmy4yo2JOCUBLrp2lwnkwjBZHzhdO+KsOaXIuK8BxGkr3V0inODUmQD1X/2KU7+bvWzzd3kmeJuNE6ksRC6qpxYHLcbrcuRfEoIQLa3RoFc1CLEN7aNe7lVT1PBAERbT9SbBs8OkSFcdQ8IDl9fNj9bcqd5mo5A0b+dVlmura+N3vnSrPF675h3mFGzUM1qoXDDwFFwCfW/5F0dHHcTIl17hY4b/bZOhvjxOIHNgO6l7jIfZ8DBqcbmggszVwFYdbSJBjjEvV9/Zx5DkYBJZhzrHUersIffnbVUfOQU3fk/MrR/K8wh5h8B/GxyHncfROxP7A+39OvRMyHwvp/LXgdmJELqLTUYIblkR1yDRQhuXSha6uEKvMamkJjK7AF8MnTWSdKkDa3pJGl7joNve3osFyt1jWHRajr3T3di2Rc66090VA1xDHPgcz6kOiyuonLHtDL2BSKxCeoyPLXVBOA7tjCmajYwWA5HTtLIBfya4UIpESjFmrEg60oUTyz9wIP13yAF+eO0fdhcwi9ik4+l15Tai2uIA9ZLbUKzpnY//p1GE7YJV1HTAyMowpJ3S/wyFNuJgvKu5qcj0nqDT1DjZmCuaFD6XBZcTlkUI9unepG169Ob2KB8Hyfv9tADnyd5yvAc7eX2YUBST4K6NvJkKDefIt8MNAnjeiA5/UOkkgb2cYNMWAJebUMaxDqfH2RucIYcBrCRAFtIeXevUdE/9xFIGhVeG4dAXwN2e5pzvMFul3C8u2YK2V7HtZoYivC6XLreiIVhBgDFVcERIq5/r8TFyJpAum0CIx2GMM/aMzIxGG1kktFIe4kmydUv5Nlj0fiWMVOv7fqDH6MO3WUBot0o9K0jdB58d9wEw4+WX3AGsO6F6U4vl4GPysKQw33bzDHA9xBVEBh+JCuYCspNyL+ACUSygqUeCkAgTkBdfL+W9XveK0Nf+wBGkflS3yiz0+jTQNnx3CWrtqd0CKZNERluYE4kIHjY1/jo/eSBv9D2DI4JN0vgnjd3/KZB3vBE0IeZaSFeWeAqqtuqIOmlbkTvKQu1qTilXsh8ajJ6pQc9tEcfMEXMQQEIfQP8hIYbeVLJmLsQmvdY3RGhatp1SjQ4z9J2NGwwJOJP5U5g03HyGu/xZDy8E4Vh4stmvsHk1DEY2OtUZM0z9sCsO7nITH2270SSf9txQx9u47VzXn7KZPykDj+eFGwyrsTZmqsSJFB/HDIFBzdzjf38aJsrOpsBE8NN8fAS5Jt5hQis5+dkM6ooUwcLl5OZfCvXYPULQgcCgiUC41U9aBEqp1gUdUDkRRPcX6w9pVN7aa/vzBD+SYgZz/Dcb+wQZbZi9q+VGiQQKW5zES8VD+qkpW3QxFv46C6xgrVOOqMr6HJJ1cYv8V2UGUZ8NuL6QY4lMfWhfi1bYkmAdj8j1v3sKRG3D6X93kXubm5XiWONiYKNFWDaQibnIDjqpWDgivEKJlB8D3",
"fJQjtY9lO1NjZmVPkkBVSWW4NrjLhrDC8abB4ciTiWuQmeteZNXE3sVXC7lpNon3rxeEcOmQfqUSmOAlIMXvyybPbXyXERcX3qfmKW4sjjHagl0wIvITyqneA7wmzX5SWH7PJh8PwvJbZw3LNs0DkiRgI1iqOpvuyPb7lHEsLcJFRJM2MUIqYpbTXx8QfSo/6LQ3BmKccPtrYM2eRI7kFKaylRAdEnltGky3OULWSBytzJWfy/4fJoM/CBpvxt5P0znPvF0nJ6aDzAdUJ0Nuixj9Waiub/uT6/4c5x+DZaHfdbcbJw9aq/LllcyxTVVTtdE6DO+EBogklsjTZa19fRiSlo0OCheVM97t969D2KwASt2H3Hoa7Ft4EevG4wMIWjU4o6tYD21DT0zKBBHPWiAulwC5cV+/rt8t8iyci94aTLUMiU0AL58m9RA7sNKUSkih+kOexM3s+RVMAFwt3XblulVOkLOhzxGVOZhw+w2TXo4gpXMgil0k3qyUuaY4L2Bje9IWlAZ76qR57U3RT4bLAKkX46RHWl1wJUHvT0knodxqrMxST8+becqrE1FiaVkOCzm84FbPUlLQfNOAtPbGjdiEyxKpkltIpCiuCC7Zklm39KvZiDQi3XJK0JWGPyPeh01oJeBk8QU8L/hiArXZipJlomST46g8e2BAVvgmxu205M8tFsg7Yo+MsCXHhp7wfL7vgsmcByCu06RAYGUG1GTlJdSpV6smt+yiAcFaVX4nbYO8yNHKbmUEBbkFd7SxwTWTCrKJn6CuwKbu5tok5IxpNVnNEaw5dHCQpVIzjD930G8adEYzwAxKzLiG7kur+0kjPHH8CnSGQtMCoezM+w+8punqnLjaC+JnEwygjI03EcrtknUCM+tEylVlowgjVMty+0I7Svj0SuJKmlbYlW3AfTd7DQHmsYzQLqZFyIwfAk3Yd98PPJyWZ0bOXbnbh2e6VX9iiyE9vd1IK4Mm9HnP9sVOtwE+qARtqZI2cx+bLHH5lsO/fCe50XNuzR5m4HMwv1aYWNl6hb4V4vOepB3E3PMTgO2Yt47F/Jzky9nS4T6B8YrWtjtiLoaGGpHFlYo+hcOwj8NyswjfKy9Y4+yH64slgVYJlBS4PlUi5UQwqiw66vdYwBALDQchzgDBjiRJzeIUSt+86NGK8MC2M3et9n2h2cvSZIhh9O5H0cYtmAQaPLW2M8JkP9qOG0FRXH23vVkcb2iGvtDOplnFyxlla/mrd+hFEzUbvvxYX8pFiSd1tqn0y7m0SUzXrxHvR/pFnehYUQZ9KqewSA8WAeKIVV10NCHLJhwKcciAr7NpM3tYnKmMSaIaHKgvoSbwI+KnBRZlpD1v9Nz4HV7lguWaGqzt+3Goy800OXgpQy/ZaCXVVJnJFi3S/YBzqL0oStjo4d6yvOZNx/vGG6O0vaovVxLswUimVyOeWqJwceXX7rdmTYs4PUtlxwjEenUyk8jFBx5qEf1abTiyUEb1KQFagu2EaXyZCXrPlI35J2Ai9EGmjPdWFYls+rinT6lUuZgB3elUBrrGjOsd6ESUaHjsvkH8ryAj4kknx+JeyvYVAmfr4lYx/gDmv/WxtsAcD8T2pUTcLOjQRDizuydPpHjmaDlh+2FHo0QPfTnp9whz7SPAY/7pUOcTvwlQ8yJR7tTk/eBbcgq1vkQXLXeCdVU1mGPHEJTuXvIAZS4PwKZCMnEtNxxBZ6tj4lO8xV59FMT8y6GNkQQOP6161mSefdCLA7GDYqDXzJUkeSsIvY6Dp4QY3Z73uRg/HpDTSCYf9dRsc0S6XC2sxHZ7mXxGIj0fD5kYbnLFKBbavUpcpPPEJQdLEwIHTQcmc6qoS48pT2+JaakH7JS4E2P+wCWeC0dQBS3g6jalwnBZSk1cpHxAv74FNavtqNRzN+5WEFpQoNwiCIsFV+bHEhTI0aWx7Dq7cwDDK7eSP8I76cOMW1NZZ6OV05zgdiDaQtEdidvYheUvaj/63grB",
"OBrkqKkOgr5TO44NKe9tklEOl1E91jxqYllCv6Mi3tSjSDq0UV/kIsNjeWNGmCv62b6/bjdMg101L6ijfnGbLcltuzxb52UuUQ1/WF98+OnBL6DNldErUhYpQOsm3kfEWHpiCJgSJUuh+9awrG5iuEutTfQt580171GGl5ytUBQqQ3p5vAe+btKLbp4YBxVLQq3b8jM64XPs3BX+5uBJtzckzRwJNCtHmyur86OFQXKjfVicnOEs9o3qgFwztW8HXwHVL7UuE0onibk4bf0AzhMOu7ksNviHtkEw40DnPnFc+sffO7jLHzAznkqpPMdDgAZ7Nmm5iS1TeAnn6ZYkfplt5cIIbUwZ78Ylk6xxJT3mXjhVCsswcAc6MO5bQ2xihlCx2QNXymLL4Ci6CNzAENYCm/0egQPM7M9JvOFJDO5zv6DSOlOxNMOrO+24OUdVtx7Os1jZyyiRfg8gSM1ea7nUAOLwVf2R1iGuDXMrzsCReBfT41uQ+wIQY0eE+GaKeFt/ehv/oLWLOrxnzkBqWhPQBj5jsEi2DXD3erdfHNMF9lPvfcc4TNw9T21+Ncrbdfro2o07bl5mXtANkCuO2a+pmLQERlMg7GY36VTAia15cbG2huc5CH/JqHjW2NkP2fb/6UJJQadsetcmN44Knqz7TYBAkXcdIbbzDOwhzDcx6PJCNvTb3/T9X2NaF0WGdN5pO63td92Gpr5veyD/9yQvA8g84KYYKzxmGj9N0IeChrjJA8Qb1ZOBzkgqfOYno+wWv8NmV5kjL6jDUk0to0SPHnqcAsnIYeKdWKwcoYv1vOAwR2gOBwW9cIa6Icb+3f+YO2Wzn6rDGtP/ynrjDl5waTrHXiYLbzHbRhvIERfHsdOt7UEDPezTYj6tDsAFbnlY9iLpmNvDbWoIKZXe9eESn46hHxpEEZCtzTWU6Tdam0ttaZB8qNrWfka+uSWp1XxuS4NhuFJENM7lDIRQFmsd9QGLB18k2CsOx1Fy538RSB4ZKyjv+JNU8tpusi72BKhiPGADPSnqkBMoKEMfnDTRxxFD8Ntxr4snXwqY8tMbkXNDpP+iuD8oZKs5GRuTxP8jq4MvRR+1kwb7idlj4QkIzM7xHQUEcGuq6QssqXlbmLfKeUehoel1J0kQneVjQ9U96+B0t6YMCRKerTALr1gMMopb2e1Bj6V8HOMwjZ69jid9id2/jP5qq5MgHfmWsqP1dc5/42Zrgr643V8O4+6Hl+/HB7+Xytgib50IwLgZNREUk6yin5bzKDcnirb9m6SV3BH8VgsYdG4Tfr7mDobu1eiOrOCuhQj/2OTlkn6ujgu5BpBn+Vr8wmMMT7KTOL/I80qnwAFIMOfQkjcDWv8OWuhyh/PSHV3MdFqWAWjFON2QV9ryDTDqXhs0GrIYTBtHoEN2OIv4utElotePBzusguEHzcdia3gaRO//EE7rmWcD3MRGU0HdqsqQOfbFZp2qicGah+RvdpwURzyfYPLixo451rD4g5ZPaE3k7MDqUpWhhS3RKSOTRuP7gEJJLGFEo3gop3/0+Xu01IWkefYiAioyXUp8gL2X63faPb1cYB2t7q7JxgLJjG9fSQYUa9UlJmRlIjtbL4BoBa43SvMLc5K3rgU8VZlqNxCPq3QcyG44067W+jW+mgf88L+uHqE2JyKLcwVYzqL6bqnB69QJUVFli1R/kn6IH7YD4tiENg7AOYzav3fVeZwW5xK133W9Bv8BXCDGYN+xq4x2aWtWOSsmUbmc07+EForzkWZd5ggmL098vGkGU60wAL0X9ATh92AO69rywlD0Q5mbOoGUCOY715BLNdyNVfLVist42f9bwuPk442rhhOfCLEMgrzByylgMOASFPeDBfeigtEVnh79AlS+K9bU78WQGNuJJcSk7DFAS4VqGg6wZ7AXaWOJaW/HtIQSGPRrejmMwdQwioXD+QbUubUJ9+id5MBz+ynDUYvRi+N7tEhI6Co51NnOeuKSs3GV61w/",
"QlY2ET9IW2oYnDGCM/LyhFYrAdkGqk5cvXXlZ3ApkEFXplv6dV2DEe1DgiZzvle1UIKn+/gpF0+e0m4oWUTMSIcasJ/2/V4K8RKIq8yqXQoJOMV1Wsn64e4kLrIwBKqGGhZ5eQGFP/tje0lv3uCR3Kf/F9BF9bW7S1lq8/eEeVpeZ7u95rYEyAjG26nzWsjStIgT6uC8sr3yFBJKqXTi7gkhFbxeFmk/qBRErCxiX1/La/I7qkORKwLU72RLEP2CbAh33j5GYrMBROiGdXiemcU6jALVBPLzN+4znGWCYYsu54NlFvxTWxcH/dgKlVd6FgNysY9lOlt0DeLSJ52lIAUzPBPBGn6M1m8AO2EvYzFGQbYwqKLeXhK0LYeRlLd5kVaf/MjKTCi9Ao4i+JnkoQd8ZS2T+nN0ceVyfjrod6IVrRImbk5Rez4m3YN2Vz/4FsDW/D2Y5xmhHjfzsqMwoG8aqGHRK7o7+xfRqWuIkEfZyBS2DIIHy23Au+hJOsSLKZceQJVdlmru6omB5vyl+6OWConJ9bi2WUZt6Nsetgs8xRqQSn34JseALj6Z6gZvRcShXoiMeD71Yqp9sKf8Cz4yG1t8+xivr0jCreVo3T4p4zbPYHy1XqrrnynwuDKldg097EzL0lpobP075cUtcBE2D2Bo5/jxqKtvlT2WznexctZK0graRYIxtfwlK/9GCBfybxL5WbcqXX7GpIX4OqrSRcUhMG1WjRS9MMXzVlM8BWH2cy4J1p3T+JJoARM4fMXqd8+1eV7Zvkp+xOTYAixqdiIZPvntwDzdkOoGL6D4fD/l1ka/lWwRet6xd/8aBWpRXY8zTzttfYN+i2M+Tu30/G58cDQAW5mLMJjGzMMSZQa+zCZC7YoNZoQXyIZga/1JYWYLVS/3d9fsg56j7b6pNONRjba2WB5bR/cOSuqNf5sAasfBsA7ZnLp42Kuuw2eRgNmvECozAsrkdrgsRO4Se7nOd50yu0HwlHaLpqjkmLXjHblv+HO6RnBoadsZ1NMMUO3fjwyrwXjjWDEqCD1DDh91hj6g66RVk+5WvIFfQhJeYM+k4H/D/74ab7nR5EqOSxRo4MuJ65drk9D49ilCLcAEDeW1QAmPKRDEBLzxMBvPAKV/oh5+K63g8/2/j9H5unUU73DLlNuYgOmg9kSIH/vqi/7JEUN1NEtxMuQTulxWoyJIJywoF1kMLjVt5tnVwHK9Z3lJta16/N3uAvquehe/gs78khWX/3KXRKzJE1qlb7H6ja6c+1Zrs8hyqoAB7l9SOi4wgG5EoXxdODD+fvd9e3Pjq2ifoFSU2CXP3sA/eg+9WwshxXKNbJpxdSS20zVVOvejR2PPTn/NIlO63LhwFmosUoeSD4jOuh+ZE7yYMds40s/z1MqR+hE1DMYpegCmuZQIr0MaBCagiUfNzAwG92yis4rESrqF1ANajUAzgYbQby7QQoXyOpEzwvOJX7u6iwQDr8qDwaYcucgugPdCyraavK3Vy9MP2jlcS5V08aIVSjg4TZDKOJxVTuzSlVTPMHLHV0pXid7Ch5UUgzBLX7ClmwIXJiYTEeTIXbbT8oSEf9yqGvGTdRRZxFU1YStnxZgRbuwbbzeYgdr77iJ6BwUMTNNm/mgDkMrso4EdHrw2SDnRlZgCatf/neo0ccEC+olnT2UfpZ8rwBIJ2NKBjSu5i1lqWdEwTBaqGRk6gS1jDo9Qu8bM/dQhv6VLnscw4wpeYJYoeaMS2IMXg5U2UIxfVKJyjVbOX6lRTlR6b0swIjjokGSgb/lAuX7KIMShi+d6F8VOGTNbzW8pNyTbjnKQxksYNOMqu9FpxBJBJOBjoJ7NIM7jvOS0LH2mL0YyGODIgw+foLfnCGg09yBv5ZbVWCMjw3VvdbguqWq+KbK/ccIGQeMAfce4+7JenHQgwjUIgsgOzu6wDHPB0gNYc1J8IvAo34vSbn7jDpjPscpDJc2VYqP+w4PLa1SR+We9T+ND5jMN",
"9qpRMHli3ae1Nu6KYdrNO9wNC/XNQkq+H+U+ME0xeF4sSPKWFNZCWaMsTY3Zz0ChbvAs5/W8mO67hJatrHVc4aGi7U834QAZnStJoNqK94T+HE/PnigL8rrJKG5Nz+YQRbf52X1HjqwDM0C6pQML6QqK+9enaMAwNcUZyrwO69OL2cwOYdbvSWfxBnl53DCaTNSu+3altsHMt82F0xsIPOrRPOVVDAkdbk7i7wsi2IYXblp4m1PLDFLg7NWRKDvLsVx3sKpwFQ0sqOUeqA8S1iM9C25A4kX2uUAuQ8MOnL38Q0Z9wv/bfJ/1hA9EHvhXn2RzXcXqpcBOosw8fF/ftzHGiJpYj/NB3NoZjmiwfALR186FL3pHww3EQJZksf0/WKCwg+hQ3tL4Jv6PYLVcJmUJa7rbuerryJTfeIc24y6s/ZFBJ1mA4VyIl+WWP5y+8nQ3omY1V76DOs/3X3wddepEDcBvAQaeNG+EAWK69s50j5g2XpPDN2STWtOuiDhA5OZP18XAU/9MJT20kqsTtjePflWsISRtI2N9DdVfdzs4vb2xvQA93SS9n6cXLzUEksjhbloy0bDxfXtjt3up2Ng782psSV5kN5Ot9PKU8sxKtRre8dk0urF8ak4u6262CXJzmVgxxMrPQHlHua6La3cj7qaeULxY0tr50p5j339W05ESh+0qtL0OJTgsIxSKRJbrfEFVq7he8Tb4Wr8x7z4FbQTtip62hDhRLundF5YZdKDpchFjrQqnEqVm6Ffv1w3PclYegOsehtuqvOZ9QoxJnNyqKkbnEKTPJ2wGDDG3RyFgsnDP+XizWqz1nRT/VlXIalBPxHfSKXe4fxlE11vDNRjMi9n+turHNmA7WqtXCkyiqJvdXsZ8tQNTrt1ro7qwMEb5lKbngxz/pCaV80iweNUFFynwT7cfKnoGjmkYLTqBjCYKM0JJCkJA9mqVc9RpnUfhiWzdu/N6USPNZbkOUMrozwS9rm+SvKkuh/Yc0fVfPYV+JMT5DSBWIm7kh27LFWBqGkEdqA2t/h3nBgIM9AGUP1xAwmgFkb1HfuK5o9qrwfD01LumblTTvzHucgI3muJKf4skc8BDLTsS5IG4AMVPoTyDT47vmHV3WrbH9qbuFtBgo6++OIIFm9oEdDOv3N1K6MDjFTYgoNX0IqEx6AkCb+gGQvgeOINHab6VcGphL2AtXrIB2Ilt7rKIAXt0srBA/EKDlQfrkOIMWpIMwKyZUUjt8h6N8SWBonJ2sqWV5kiH1AA3Zr7ROcgi5nUKZ1p571HjMmmLgvAWrNk5H3ymv3hrSdLZqjPgtHD2LQJrl+WrFoQWMBtl/pV8QVHscbhd4SHp4jMwRY+1x+vjy5MOMnvEsr/DOuHbv7mODZKywMAULFXMDIf4EaCqm0pH74nzl3NEfgOIvlPB+VrZ0z45mIIzXOCkUlysu6ElcP+I1VXzer8Qy9JIolr5Kb2NgyDLHmDgOmE/Kmm+UlzFa3+TDbQ6l+X3UHQW7JhgowR4bvvX9IOAoWsG8wYlDrp+PxuDdb0isPZjDcJgf/cq7ZHh0FQD5NUxHky0UFPu1Jff0mZIpUd4CQbh2kYH1SPPKRjIF9r34nSXpqixmsLbRxhHd4LnS7ypN+lkwvm/pUSef9SYDw9t341qh/+32JoKdwnCeirdpCvkm/e5vY0hz3TuoP0KdUxSm1zWvHdlcVkin66DI4Hnhaxb5jVbhQE60NpYOF2eqJ1CgDJxE3Cuf3WqgIBAnoabyW+oRdvWgNISwZ64chZngzx6unfdnflEnF2y+OO/TKeruEj0zJzd+V2MXhnmTVAbDIv2dEYFdmdGBGYYf/XO6DD6ky7I2P/btPyRk/zKl6Aun328LK2h7Ffn7aB23Gk1Yw9nxQHbHD2XJIqFoohtri3OQnMvecCCrngMmWFmHsPKLXibfs8pIVmIH95X88ShXePCEsdgGwid90/r4V8w241T7e7zdyY24iQ/ZA3LLtou",
"cxQUR/SDVNDgIsB3IaQURoxtedS46n+1hY1qoHcaUDKzPOFKCiz8OkosQfKevLw1m+JTZXnp/UTJYUQoAnQfdEpboudtXEYx1vtBWharrlEfCwj4WMmy+vyCw4lhJWdMsAvQ6duxDxmmfmJKA4c2kMQ3/EgwAgrKAwnroBIghWFbBm09/5klfSNK4LWId0dWGrBEbX4jAhF+toy3f5TfWyHlxRW1y0EZzFj3aUW6d9Jh0af0feAqs5fQ7ipTIsdGq92k/LwXPfApfRbCWevu4870vtCBDx+zRw/55iRQuw2rFx8nziDyfW2cO6/tO4xM1uktLEgU7odX+uCom9iymW0vyWYdjh8oAWfL0CTCzL7ugksJWbqk7CU+khVOTCwsm7zGbY1Dm1x7C4hTZBHyuEhGqNxS+Imn9OzRIlGnRAtZXd7sYZngHJaGjJEmo6XE5CBUF/Kc8kjN6bdh+B1efU2jZ4uVr3PRSGF2aefxOB+mHAWOJkBD+l/enqvAdlwgNVW5eck/ikOgAg88ziI6Rl9bjeA81uUMy7IsjB5GaC9/6Fbdcu0jlfmPRL4Qcy/na4FRpofyzVCrEqxAi4XPheen6gdmh6hR8YbLy1C4fkOf7s5tP7P/cIjcLV+qCLXm1AoCOfcWYmTD0aeR62fdNh6bmoFvLu6pw7OsRtaGhj2/3J6tiIX72j/6MhhujEeLV2WCiFv7krrl1fpth9FfG4p1JfRnqAbE9+W908kVkygCynRJyJYo9q0KJJaNUXkH0iI/ghjvLvWHkpn2a4tr2UKBNv8onecD21gQFv0bh6OE5+U4Q7JrbYQH2PzR0jrOxF1eIhcp1XL3i+qyAC9bFmG3g0gNAJqvjqie8oD6XGz6DJSqHQzwg5VQ/+t87LvAihASzn9CT2irLwN2iZ4ep7o+nD9yYk+K+HIOLE2VdbwBwe8XAsg6tHRPUUfoplOldk6UhfO/YPqK0FfPSvpcNNyENwqHWoL12YU477sFwt2mA8fvhlr+i0Ori3JaICDrZsSSkGiXpdYbFCQTUTHYt9rkY9OLepvJUPyAoyDHqGPrdGMSleM4IngiydolaG9COJxK2l5wWsbvjnteO5cchl6Fye7da68t1YZeVTjF1iNmxt2F8iGb+SXxliwUjiOyS0pyjtRAgyBS6Q/5fBhd9ddsxHvqPveDio1fl6ry3WXFLyHUJNOfPwWf6mzqNtofxGRzP3xPlpOyTcI/PqCXjwUhoLe/NvfhgJTFLdwkkAd+QkoV9YCCBXZtLWtpDy7U+ML1T8PDabiQfZ687ARsXovlrrntijxjv2zyed0ZunyySsX7HAbOgincL0RYMjOzpqIoij/sN8Oh94bLYicvcIH3pGsgTiu8EZ1WeqG6LpBXFV+U4KS7PL3uUAFYfO85woxKSe6FZ5jAwMWCkICbp3MVQZFFQNMZKDkFcrOGM6wDhA3ukYqAZPGvqVOjJ1+aWwpQoz6QKydLDxII+2VfJkIxq09qx6awPYS0qtjexhSU66wT9rXJJ3sZCWxvadcxGbCp81rB7BoGz7cvp2rdOsD9oEw6MpxrLD1rltXqFhY7r4SD12iHZ0sAyzg2DMVydrEyqJKgulV4ce+lYEqkurRUWqIgDYucFGGq0CtzYNfafOoHNJNufFirID09aHqgUG982sNhyuQIYPM0oUm2Y4TfQp1CY1xSnJRI+j0NmdryBrdJuQkU9ZIPmeV/CZQaSBHmbFocii0cCZb3NA9r2zOtezBLlJ2fk3mvWPgs/y9txYHKmCQoMeCGFycDuKHkS9bi9BSM625Mdrx+EpDGBFMoM2f0pC0Gho+FPiEhpaEfxRUn6jk8GAbuVZWdS7jTcpsu0g3Rqy1cpFGu/ldLHgIhLLKK5M1sAUmGZqpjVkndFsL23SDJkR53O4Ot1nHmM9Ul+E8W/+uEP73lH/qpf7tUn05ouqbu/+eKsD2zdhbRxGkvan/8uz24tSaxpHnKLU6HQUBjovA6KYWh",
"lEtxxFzMtlEP5KhuvJveN0CMvYrePrkD+sMbfGP+Z24xInmziHbBUYpCqcMi970HcQfD9DGC8EXjMRoJQx895G8lWUvtfj1mYEdY/zP2r+yKUipUIuuB2hN8q9cl3sOG545pB4PtaUwryk52PZbAzMxYJKIGmnss+W0qc1nbAmTXcUXVSW+y43g/BC5brkBqROaoas2Av88Rpc7M6j9OU9urZLI96QgOxwnMtVgvB8RqRrw+cRR8B93P0Rb/iNztwiNBX2bj9Lg8feymm302oVLn+UuN9NiP4arg36HPUKyzlqR6OXgnWBlpZSluv3O/xq5wAgsfvLjTUUMQiD4ArWhyU4toIyo/UQyefWRHOGB7RIkSU1ofHAWWBj4c4ZPY1arb8PJQFUIZdu8+Gy+jgM+lMuXeQLDEmchvWyiFhAH0mVFzDaYHj37Cf2myHwZilempeZTl5/MDRQwSUHiXQHKQml+ayer8evdacqWdMsI87bTa0a5PZ81WvltI/yZScehwVpIu7hpm1zb2UGIhx+FfN6PXQLOWISYyZQQLDMDLyMxJR1nLV3lM91/gCT5gRo2il1e2fBrHjpCqVYNaIh9zdhiPb3f32qf+gAQ8rtkUt4ZIZP5cBp5m3AaD7zBB9kNvPWWVCnOwXacAvu/0UPKjSUTQUyJ8MSchcPMFDTReMgUZsNfYPoiZCDJl0jVoNOYIL7wpdA6kZ+8cdVW41njDXEUBoj04Eg2mINF6rAouclbc/LYxg1t3CSkp27KUKcJj0K0yWQikPd/rlcyyfKn1kLAO2O6S5uBMFOr/1HnSOsennMKwdBt8VC6BKrqx2HhG0NAMHXF0Gw9B/DwNzp+3OhAzjg49Xvar4K49SGNCVaBHA3dITZoQ2j/B7+Ku9ReV/GQoMt/2EE585XQVqHZwU83mlfNcmTIR9vcQK8C0C1TspujB+FRDx2ljMftt4m1+z0vedk2crpHj1VfACcELn5ZWctTsiwCItpIe6uOTnxwU58Cxt6TPCcwbmQiWipjeit8mzH1p3hWFSg8q5yuasD+dCTffs8+K5OphliKve0xu+tFg8GLOTfpUVLh/zqd1tRy/PaaeIAlk/8J2fEdASXkHT2AoGqVLQ2NEWN1qLrGPA4ySV0ifT5h7TOldQzXpk3Svs+y2VX/lzNRHL28+ohaljKaIIXwfGAZapbG9+bs7jvDjEBEgF0J5UumJTqmcmXBI8po9XyvpwOr/1PG62KB0CxqlHITwkNinZeA9mI5rtAaw9T5rxzUYaU1URKcOf3QEPpe6hk4WaFzBCQBFstA73sI3tsSx7fFuJyxUG28NZNN0THqgMgH6pHFQjhonlfFuL+Op5YEj+AMo6x4FMRauweNQZWluuP4hE8eviIQi/RIH/2N0hNZhpRA7EeN03vq2nILiCx5Asx/pqVs95t9DbhVigAZDYH5KQ1eClOqV50nzd0iNSQQzXIlu1gBoylLdJfzzHGLRlNv2UCD7Q+ul5FNbVrU4UPuP6InWSBGQkc973HTw1G6Pg3Q86EpQluOpcd/MfTyRGm8LBeahzwcTGoafv3KbLYBJo/mi+dqD5ftLVtxpk4iCJavebHS8l+oLm5pVl04T+H4r5i0/+ovIhJR+5+ixx7tebRB+qbbzj8+Cw836jcNCbi/4c+JPWeiO70LwMufv6JYAiFuNNGnLUb2b6ERP4OXc8RSDBUi32HAxf6Kt6CkxtOBSI+Ibjb6BOvj2nLyBZqTNh/q/W8AXj3tUyb6T1s9+G8/49lx7aY358AHu8JnDfTkPL8F3XOr4/ivLIBF1NxKxUZNg41SwaJ1TPTe7MpYjjnd72nSVsIR+eEGFMczqSDTNMpXCURE2HHf0DfnFB33pPSlM0sQ+zGKJKuSVX6OsqXJFTUHdJyT9eFlfox2zNk/jgwibNytwiXEqbBkDcxCLOPjpct8cSt15vZlegmL1Y3YueAshbMxCa2TWenY5Iwgr4ZE9fmyHwr7CPWrh",
"Kiv8AUfT8bKprVqD42R/yh+7rj1eSR2JmQUxaKhyT86fWPHM77IXCpb/g4D6kjpQNtGomueTM+f5Xx+7bqPGTwRfoxTj8Kywif52hnNqXlPRKOW5V7Aw/cRM6fCyBNzlErOhBPV7QdFGQb6ZieYpZRf+VFnneAOUsFAssXMEQOD7cOmruFi7wMNCm2tpIhfMbTHd/oAeDW149g98gPPOES4F2BnRfhexUW+pXy21jIq49BvyQfDZzB16DYdSXWISJzFpoejoUkuEaHC0M+i4nNNDJcKm1GfFY1ojGKTVWEh8KBNaWsbSPmWFTaF/mBl5cGL/3rGr+gnC0BBplWs7DySkuhVHSY5KSPVXJYXaN4qbwwi67Ivgvg2CDV60DXZ37f/a3IWdpzUc507DeA1lrI/JxT8WIWTVEWkM1RmzkLJ+SIab/1w/h5lD2//pDpQ01KdX+xaDtfi4W9tR3VN1tbrNcV0l9V7/Y8FWSQNPDa9PB91XuB6ge3Xrm7LhqVqUYctbvaUS/av3BvpUVoC4PZStHiBlGgjKETHXfyNawqaNyoy/Pt3S62u3SiS6HGcY2TarkDLVHGo63tatYZcDCtuuxWJZjsjcxgiCiTOeeFsE8nmvllgcZhCMvGTbQrSMfRyfBNVurMglD2HuSCBSmpThyPe10W5/CLXDXQphPMktheu2+I/dB5qQ5LNIocuubEtwbxJp060WLzvw5Bf7O86qOKbt8Ob35wsiqO0UrM1Lf8sYofONNdpXG+wNKt0hE+RDT1FYzmZ+cHdgjQu1vKxM4xdlsM5ooXd7EvvtgqasuRxoR9d07Q+nJdIGScO0vjXHBL0AdUDNO7bwJMBpbhQ9j3J7/nN4cpY0/lakNHvo39za+5os46Q0q4Rhn/aFqFZN9K95/9DYSZ3L3ZF8WjPz+ajd0A0xQ6bqW6792wi6AGvPIJGZlNgG/xf4CZPoGZoqaS0EFgoQbemcPgPq4b3ZgGP418EsstA8ujuHIB0LgCIUzLb62yvcrPIdIX4yLUq4Ncr1nA+QMMv3KifzttYFl5loS92QDt3BUB066bxApoA1Il9fQ/JHX8tNNG4zWrwGy7ah46DWXCL+iqrJnx5UVFDpqY6Pu44bnEFRZ/4F2zfmV7GO0OlzNxhDmJ2K+1anK3353CKAgyo44RnMnDuRBUN/2zba54IVEBrqftO32y3GeO/IgqQfwo6UhETzKp7cZoetse2xydcKM8SNnomGRI0wKAnECSQmKN0/1XzmifJgFwXUGb/BU+Ye9Q41lE8LajG9p23HFvaMNNKI19NlXT6Uqwmg9kCWRdZLMaVUyW8npGUXTTNkkAkoX2+9v/ozSRcHlLnJqzW+kqHM23Lob0PMvLPReuL0bdKHEX87L3AXK/6LU7X5k45+hIPXRYHyBcvHsBfyu4i2E3BR3XaxUWVXMJDIdK0OTo3fkfNvf6hCQ06JBG/m9YN3TmHDxs3u41CWCw0XJmYPCSWdTQoDjOanrK2OkP4p3wjmtbLkM1Y5ZTmtfK6hYvjpdQ2YfpDuZGBXIIowjtC6/MC3rg9AepXHQ6EQa0o760AjAUIxyTisFZQNlCwLxXfDzVTQmE1PeEQUv5hEFoABr69gYiQaRT/GgwCOMgm3aXqAMvHbYecg5X+zP6tn8+I1koDh4El9nEVcud5aAMnYeejNx24sqm7g6/UbQi91HNWEiAPH2tcrXOJ0l9jtGhC77TU0t+6w1Sn8v+twfttRs5Q/WhLvBN+6Hg0cYjfZLSKQZggi2ygAezgZi6ru7ZmhiB9638bGvA8uE3z0iH08D64OHOfjp4C03l3ymSmEftOxbl++yGe3R5RshS5H2QPqkcXR5AW/LmBmCsWYEiB+m6956BiPwXyrwZv/idMYLhjI4xXkqncoJz1o8ohOEcc6w7wE8anYfWg1TL+cxobPFhu5ek8qghlO4wIi/yBNgOnRzHgrS776UBEfCRr/w7NjTpEc9Iocv+kj2GKIVZ6t",
"idfwSIs+W45MdRMQ3SckVj5OUNmg3UJcMEXHYpUlXFWPs7Zg6oLsF+8B5wvFt8GSyalMuZ2bHI11exMo9hNEKE9dxTGWVVrL2XNDwAAUS8OGpiXUKDlfxckeOkOnIFKFIzvECMXX7GziMkUsw3KXDzeVdzsBZT8PcfZeHMSrlwL5wGvmf05KJ67Zr451x4FkX/iLUZ+9I3p4UTXYszWN3PzZ12Pe/9lWt6xraEZxdA4z8aRIqLr8192Zq9/0ns15EH0kBgh0+/XZCS1E/k9MzuxUIPFH8iIRUF9lCxrUTnwbxmYoY6inp0fa2dUAEK+bsIiA1+G/Dn6sFztKj+IG5ma205KGIuYQupfQX3qrd/l4ZeyPpKI7gM/mw689h8lTpGfo186BJ3EXMLDacOit5WVPmTNIRJKNetZbRf/M3SXuRZyJiYkNaXRfFVZxWG7wRxpb+HipFfUWaLJLH1qfDuXfrKh5dYJWPTpqsg5nQGTQpQC/7qbQIYrXzdL5Vjbhbd0H1Lflea+r0B/MpUQIykTwZljsZZJVczrNTQUgpPxXmXTO0w8ew1OukNe0sNANbkdN7qXafpOmlX1CWeuHMEuippQydOZSjh17nOJOsR0rvR+K3c6KznPrbt6VZpBAAxkswJ4l/t+KjtVU/S7UC/2Sn3FTYxY62VunbS1VN13HO93zOefs/02apmb1YoYVA9HW7HM5iah9FeLWQbAvWZ2AoMH/AQbhEvlScZ+CLZ5MQ2EAnNC7YNY2FNNSVR1ozkCBPm5OKUasCyfOi6ZYub3SzyFR0rT57p+mRrpiKdaU1SB0BEPeTWXdIpTYwtmHk/mHmbNyjqv3uld43j7juZO59gEN8vT56Nan6W4pF4OaWn7en+H3DuAktSu2GT97G0m8dzN1WvIDipjz0r+lg6ZY0WyC7o9i9i4OmADqSV1uzGJQYezFVDZkdCgVpVDMZhMnQy10g14HvWclQJRXIbX5LoXHS0D8crRn9ztAddQ97ArFQr/N9M4YnKtcH8N3EeAgyIEAflvsLd76G0ocJynqc5vA0L7rgVYt9Kdt1DPuZmFTpNGvR8gncZgpmpAplmU2BNrfecWw59Abh/B+OiKRgL2Aia5Pd+RTUwAoI/+NlXn7A7oNu9aMHntAASG7RN2fbRDca94O9eMi9+UGSMGUw4CMFJUntmgE+X5H6iWA16aPXQPebP0Z9fNZzuFOggIm0kQ7wKajQ2Us/akBTGlNRxe83EgfKHcHBIreZmruqvoSiBEI7D4jfxdT4p0k14rcM7siucZ/zbgLB3kGvHlUBCbMx4sqy5tTbuqqmANxptAd20Hp+ImHz7EjTibTgpSKNCWHnYpSzT1i6tV8VVumWnce+Km0zbQiiexAFzTkXY/GizXiPQ82UKRI5SoFYGT9QWlqZktpvpQ+6JundbHxqEfZWpQ0PuInOA8+zFbbpXoMPJVca4KDA7D2OF8RepUq3Elz9eyTBJ+UXZEwwtnXA/MJy8wr0+Agq/umIAm7PT15VRemCW7lN/MQeRxRljn3DOdK/JqcCyoVpOi4aeT1KAHaRmvcy5YZ+J+gV/f+X5dUV+i6AI2fEFbfeNORKXXyFIksBVXDVSPPlVOBP3W7E+AiVWpuKsfsYFPW0bP0V+igcd4GO8Vl7GWayImwncdoArOPxCW1qOTYDL5syDmCKBCLRRCCvRNxPGfAC1rfzruztjVKTIF7Z1XNKPWkdIIDlS0V+VuwW0N6lfhhzhMAVWueds3Q/4L9iwyYkDrHOxUTJDUtHePQK54aOWJZy4Oz+rAzSk5AnNYwLQ6OXJzzuUM/7Ks19TxAJ6uf8ju9bhV6BL4+Kc867kfiVKkYagkm6D6M0tia9yw4IHX49Gnj7gWkKxWerC1fFHdlRPT8R8jQxuRwvUWF7hFWSE+dPFZSkTRxcedDvssmqhG4vw+LZDcfsRqa6UK1ogcc+OnRyTbb98P9VU/ip3ptTTAbvuRibGFc3KCTXFix",
"GZ5gxLshcMVLhmup1UhlfoBjqdqW4cUKt19rM8Mbh6vMyY+zO1mi/ZxxrebKD/smLGeAdn1tDdOisrSFYuml5opCkJYmIkTU7Wfq0otnFptX4GbKDp1VhsHQqj6w7xqo3B/8etPmV6UwC1MjS+LESONBsTaN5OQpnVwniFnu0pXVNJxlv94b5Tg0HTN96F7E7PkwJaw0Kp6oF9tpd3nq+iFj74p9e/PDsNIlqxs5TT6eO5D5pVzeK4jxgFbFJOK6BRa71w66AOoMWQH2+1mfOZEA+e1cpB45DUrlt1zI8O044otN+ALX+J/LXODTno8aIiJIOQlw7JC94kco8ysSlkRCTeEjMBqca4NaaphgsJ3fspxcFc861yEQmxgWd5+PUlJEsIYVp3VUxQB3fqY5iO4brNsWjLIhBtyq4qYXqTMkiC4mbA/BPaeek2BbyUq5NK9SrTrz8RoIbHusPkLGGBWczDfKVCCKJMqbYE/gnCvBzArlyjUkpCPCowNFsk4D1ta7ETHYfmzUxul35ppMHPr6sEC+MoxHI+agNhKIWYsXBA3ai5RGjZFK/4fnkdIQxr/MFMpropEubrK3qQZeIO4F33Tf+uYpqniv0OyXVJfkCwPb8DZnZ7MEWku/pgAN1udG2S/Qy3sXcHau2/SxAUqwz/mxRTspw6HJ4dCcjlEx5ve/UpWIX9ZTAU1R+UP32ybjE3BSAWyS6M7AHHJhJeoI73/cFBJID1Ego314dQKCeakFXGqKnOMH2lP8FpFKUY53cKou3tv+WCIBUGcIXXofxtSyw9QAsB6VPUAM/mIf9peUVs+VoR80/GJ60hONEOD6TfAbkmqRC502d5MLGUvsZDR/kgEIKB+X3/TD86wM+FwzTxfYeFQo1gY/rZPU4ScTyncUzdjctjVqaqUIpbt5PL2HvhFzAj2QdOITo3fYBJ4Thd0pi/GRLBlW9+EGRoJ42jXAY1oo74v/7JfH6DfFQHosq9vhcz611dDEWFeYMioZgyS7gKEWttRdYgyDcul9WkjD9pYFK9mqofMHV5s+mU0OteIdqv5yFufrH9zboq3Jr4ZBrY3Kht63z0QGGIi+O4cC99dawP99YN4z/B/NWnJOHD6Qqq/+vQx7rhb+WJYH+jFYCQ2w886N2RQ+32J81eUEbHRwHmtFQ9O6elwUpLHqv3H+guX762hyUuXDU2NM8M0QXx9TOiv50Klb2CAs3lZVe4sOfI6TlrpEQZAqy0A6ExsPkU8uqyxaQKGvOCWiofn6Q2C3LR0yTj59RENcd3UnjdDpQJGtvO97gOnJYif94JrFpMhfNrETsP7i6m3jyCibtbnvKr53VRyhhz9W+5hazy3jL/uolG0FiIhliM9VuhvBIv46b5AeSlHa5+fteti8zDzWBEFdGUxfaZ10/5qGAHmzO/c8ZJl+Ux+/Ae3HL5XIHeDYvI8+Avm99cJTn4nzfObCvgdFTR8zBatZXYuKEYzqqCtz/2V10+CAZ95/A0god40ProYfSz9YGLVwvtChtI0dwQaoIhxc2UW1gyEHma5VvD+/tZp1rj+nHtH+HQercfcPW/FN4RISExuvNPLpM3liE8oCCEGHQf+5MXpKUjix3/wiwukTMk7dKkFu5iQ9LthX5IF7uGoC1khvfUK5+oygmO/n1kwg7eVQ8OPdNyo+HM4tEl0KV9XhE1wmTMIKIRCva6Lp6kJ7Z4eJL3U49TGR6dXYhpO0vTGOEIeBwipaJeoECDyNr5KcZDfCVFIrK8TqJyPamwdFFPthobbK5Hkfnm51BXxbImH6TZUm/IiyVGz3guLo5v/f9E24kJgbUkS2L2XuVPGopxV30p+/1Ud7rV7x8zpg3ERFqIXglCKu/0g/Lt92M2HsWbyUDe8tnjRaQ1lYsBWUyfHGkafsxYu5425dUKCYCJJHOTfkUPggBwWJskada6LgFNUw2r+P2yMLAtSnllWai9sKynxqqkPXTj5XeRF/I9A/Sdgm8k8O/Tb7",
"Rlckl9dqc9L7R1jz/ez1F0GGruA8sKsZIYO3R0QAXeoeloJw+6JVLtrw4dkx1CW1vwNqFaZp83knqfC+YKo7LsaMW+azXngf00YWyIfDNj6ca2AXRW7fOKauBcilCF5sUWWkGhAY3aOTKM29iWi28lPVEon3LLTIGNAfCHOu0rgl3yq/5osheTUG6hXT/On05Ju8kX6YWuhJmKjrgn9cxZ7q6AmwjAndZZqJlng//48AF+reVbtaYxWvt8XOjGmfgixWhzhQtMXkYM1lJqw13kixWxN7Nm3RLljwKGlaHXtaznx78wT92zcGSrsq8m/k/pMrdPCg2mOkKjZuq1zV+L6eR1rLiZqj0b/2cnpvmygfenx1N5H1Cut7M1IH3hx5I1lCkWmmdKqy+Hx85huNAUli4v6u9EAMNRyjCjg2MSvF82O1yzEbzAct9qDIdmOBnY6jPnCqM1fMrePKi7cvI24AXXQNzcDaBdX3vZD+uFRIRPlOwK3dV3M20q7u+P9sgq0Y9YOdUrhjTCXiF84NudCupiDCvsYI1jxPJZKxPpUSYYIDEnMiGmCQfpMAV/8U7L17zYrSP4hkj2v5WWKyOQWiear+61VGEDwPgIwiPruXZU28+xVPEHW6wAGUSQiqKRnqXiPiYaS619px/xYas7znWIy2DIKYvqYblw1Ri4Iw1hAVwR53XO2Rul1HWWadq5TaASLjESOCrQlaWLVZxI5F63iF0kMrbE9YpujgSZqX9wqSbXuhIGN+DkLgMmT3RKBeNgmCVWSv6Hs1QGqGMHXtBoRm/uAkkU82viPFVufLN/x35a5e1MWAd2WuKPBLfXz7EV04jy2SQk/EI4nPbhO/kMCx+7Hxe3m7cGmPBUKrAXXKUgTh/7c/FfEdhAWwxR8snrDBbleCJx93KEiAXck+NZqqWnC0jtI1amLbUixzjkJH048howvtMulqyf+Ub6fAdDq0mPY8kkp0KYPje4YGIGzI9SlBOw7dLOT5jGhum3Vgx6yv2tusnFw3Ssl+wlrnnH5RbgNw19RPRoVL8xQC3/xAa3g+lzIYMWdUaCtG5sUcWbJJUbpYEeJziQlSNy9Sda17JVY3NO61dZk3jSOZXVM527rQ6XNVfPjrqNLNPiqmVRxYJH7qQ7pcyg1uCxucmtPhc5Oyp4w0YBMyC1v8AY4zb7owcoTITZwpqPaBYSYhTW4PFCizcZg/O2GkF75Rsy0AC0CXJmUdgn6MPvqauso+l1gGeXky3PLbsyJhw8ClPxG+hPbd0FWfDn2VKlC8o56TXMW9jipBktShTBq3atnK60p4x+44lybcjSZJn2wwQR3KQA0MjRlrD+Jow18uOe2oQgTFiX/JntyUXdM7ZQXYyuFHQBfaRw6pIpnCdlSuVc7fwkIQVxhjqfa0R9dLrqAqBeeK+tpJ6L8StWhOWHqQiLBtHR6VHru8kgRtQCcQo8TLKLZnBfjFeRhA5ghzpwLOfwIki4eSLDssdMMTruQZwsrlUra9dfE+yxrhyrGh7xOluBbdieuXViGsoaygcPxRZDlrh78ez9/bLQqjuYOwxAModKVMoIntJGjfs0tKAL0q52x1HIz1FndYGjTRPqNapX7rD5VvwZXIQm6pIec4ujvTR+sPJ8T3sSILM5Xumf3YwQRKvi0OHBRGxmif8SLK42cdAxDE1njbUaUNtHLP3I/mnDJAtvg5tYYRCZ5OGgb+nmp44Pgj4lnYc6j2o/xkmb3+SwxQKG/GBKBMMCKDIdk3jv+UAZFuiMAKpYvo45ROtY+x6hzc0TTKw1GRpWTGj3Hhh9coglG9IqZK/8qnV/Jlys+vO4wKr1taQG4DK9PPC62bpN5qhtcc3FUwbUohYA5oRK46SFNd5+6bcVQXGy3vkmb4n3eiesv5risabA5BDOthtsud9ncqfr1nxjVxhUXqyFLFdfIW+QhaMstzeloTyp86r67S0uhZWduIaPAp5oi8CuXF6EWtm5kA6i2btqEgufnM",
"r5/KIh905fO4zcvaZr6VkR7Gs1KLjMfiXBIB1dDD6y9Rb21dPLPeiJua1WXdD7QTeBFLPeE/Xmki9bb/4RlroGW22tA8CzwrEdjdz2N4Y9fXpkarATWTgj0cYCK56aPDKiQuwWx61YzmaTRCbxHtX/bIUlYVC9UwqgkNRPzKIaQD2UPx7zskq03hTJzrnY5zCaPr+eavU9kzz+QtIHzjrdZ+D+u7XuM2aCxh6MXZdxhitZyJKsW1dnE9zovIj8Z1jseu51+1dF3rfnBrnndfyzqM2Rp1BpuBFFkO+Frya/+dE3dhQT63Qw81K7jSlK1d+Yfs3fSLfvIr3TMV8OTpG0o7VWoAGWvpjhrAsbM1CT2PsrKRTd9HWu13NgIUHcMLbTUIT8iY/iUumP3C2Dji3ganpudiDkc8c3LLJ4c2tRg6GnpcELcVDhWH0+NHpOHEvEu9dUJrr1qxWbY99+AfrUD+FU7lZlPP0S+gcTC0T+gPqvUZgrMu65qVpAvLd+Ng13lM2Hk0Ed1Ur/9JT/QdaDp+w29cGdg4InAZRS4aMx12gV0BKKFCQiuvWVp1WmAor4eMzv75MwMjqhkvroc3fobiGmeDQ0FDJAdMrVT1worVAimLyBVe+6a0WExzF5XcltGif/EgXoey1naYBTgaMCD2auNt1jb7VYNIjKdOorgm1JUvrNgaK8U144EqM6ArvxtHQ+CDNWyrnxTI8yizGvkWeUsYizc23+NIXTeupHxeoIz/HcPKwCSr9/Fj7rVGH7OjnPvcKZ2YfcBwLpVtD/kJRyGNBAx5R+fGQvrVk19D7bH2HtBQ0TBb53p2q1kki8G4Ge5+0/weevsWCnJ+ZQWj3prpeTy/Dm/5p10we3zMEeE5W8dTgC6bsxzFdJRJ08PuWmr9eB9TjAaaw4uXr6rqBEvtt3JRw8etZCJ88mpLXn2dG19Aopx+K1rG5dlSSt2k+ydbu9rCMFf7PN2LvFX0A2hiWKxAMzu4z7H+8uy3j5z56S8uY/jZLzdmmDcLnBWM6xzPnA6h17V/Qa1Zd2PT/eup1h+uMnNkgmhaHLNuUv1h2C5lRfMqA4Y9W8MwaxyzXgziiXUtVBGoY/oDOk5y6Uolrkawh8T2da/hp6xSrM6VTYIcgAvSdBr3lOIfinIHw6e9oqZGL4mDz8U7/aWkqKJpqE9p4Aq0sMM//E4uh+f+Y8EYjVZ9Lclqgnnq41LqzgRHxNyMEV0Ta8LZ48Ez4GHIqzO2ETbM65fffSTZtAQ5W7+mJR7SyRAU6uRYBaIScKeh3vc0a9vMkwj7h9PqUR3VuDVimp//MdUEFAW1oG+h6kJ1hLzC9dfhV7byqpniBOG7V02/XYo2XQqYuOA1dLtcw3fhYYdKtO/d01sgsRrBk3i6DRf6ST2+AhRRNAqXvE+91nW///homcXL2MMvHTn1NsAHtgNkJBMa53zLipd4Z0KGs5DwuKlH5Gtq2eIvDbV6RSB8dVqBOU250kn24t8NVxUxQjHJ4UGhj8V7DS8tjBCHjKMArzLxqK2vXtwnGtv5APzlAYEJ0u7ssO57a11F4pnFcoEB3jjJ+PTGV+xLwF0fbpNPK3Gpo3IKDdFpVFZm2zoCtyjWVVnomdQXGebHwpAL1SWSc729rBm6T2W5f/mm4ToWFrVufqU9r4RQEzqiW/j3xA08wC6l0jWh2r2P3HPX37y746ffNf1c85hZAKCibItqvFQV2OisiuSy0Y/swpUS4XHGe6NiA3GCRmnU/y2VsFUY7FmcO6yLp3Tk9zKXr3v4eF7F27V09EnyM0lp5695d/5fGbz86mVSOn1SOZ/JwO9/kjXlmtj3Wyvbv9qYBc2Pps8hFRJVp7KmwKeUPwmYvrRSb9DR/HF6ps4Bb39otm6InKky19eGYiA9jGVBPh3vMEvR9ppxDWlkwrjwU1pgBFu8HH61NSE6e5R0GmGbS4+9J8dNuaCVWro3rVwgz9BzLd/1hxpPzsEeRsEQci6VUIQ6",
"c258hMclH8FkBgJYVfdo7lk5dYRAdCXNPp5Kq2s4NZolNGszCGFQdJ9OeZd8nehXxrSfl5IE7ucN5X10zELw8u7m3Mz4mItAzqTlsnhRiIyGSwHbUJRrDPBCNal2SF8rWOdZXocuJ5a164+2tC3xvAm/aQfE68X4dr2d71hWN329L0U8LkUToUzrDB4FBV/gzmrmj1KG0DCY4UkcuhxnjLg5M5YEiZpr2LmHM+yDyTqp6J/OvGfjGcQMP2Hxze13+mLmZ9QjCwc+yaPljpapeVixgnqRRcTJQGlJuzYH+PyZ0+H5srZu2Sisi/jcM1fUd8pfs5mQw3OZq4idGr1avUUc+GBHa/EPJLBfg5PPfLdjBqCf+R7OggYkIXGd1JNIiA6Q3lmVYs9EQgJbK3jNKoy2j5jHXof0xMlFSgvwlzYnp68oqfZZ5pgOixann3sJYQ5SZfNZGmvsfcJUtb1e0uwLToSsfsRf9jozVapSatJWI05FySjVR8WU6e7g/rfk4y81q0DAsTXesJU5o0re5R0GlthNzuImMWqLkoMJmgu8Ykcty7mWX1/uKqOnVKQgQiryaCwdZq5iM3mfM0o4MgHC4heODX9iZ76i+8PJqUAqboJddyMtaxjmb3q2w+9SusIRv0/JwmHA62jfVX8XmqbvKMuvDZ7XNqBHHB3ByZP4zFHShxXVznZzp+RV36w/j8HTWTmdSVKyU5mg8SO/FQjBmjjcs/B7DW1hz/oT+CsTAAzQg11r4EOPUuIM3AnCm4Kqhwx18lUcgxuVNSe5ygwLk0CnAT3Rc3DAddbnM6o3Yzg4a1gHM8QMFIIHenLGnnvICPHsRcmAoBz/PqPpo3RWTINTgDX72dIl2Ng1cJbVNiQ7j47touhKUgGJUza2Y+0CpQoMkzhwaru1q7+0PW6JDkoyTp2eSBCAW+si0T8dHbF5msGpTES/mXWPW9INj1OKbQe/Zo5QAogkie9v3rq1TkisHir7Vi/h8Uuj8xO/egSANH2kaABBcFy6IA4sMVeiNtn7YWzS8FQ+ULwAMHRS9vqiJ5eqTo+hh3kYU8tUn5JjopmwqeMclJJlBPIdDMHlHgUhwm+C3PhQ0Wu6OQhZlO/Sb6w63XmmqgMwkBbQ385NN+XOsdlz0gbwj8wugPDKVtpSWJQh/grOzZa/5zLQvIDHMAGYOsw5l95VOIafgIRQ9buHeOzeZqHb5sqe2Ie9LlGQMBY6eHrW0Fw2iKdcUdPv3GI33WKkeihpuwtJaIihQ5kawCmgxcliW3YfmwHZdkISJUPK1BElXixH00DNomsz3bv3oxVXSvsg1u/TmB/ciNt23vMESSBKwFmwKXKf7Ec/stpVjp32ejLGU8hgOG9eB9IZBvUbxgRAZlecYPIDvWTmHszRTFh6M/+vMLtUFe+LsDjGwK+A/hCkYXisSfCG3nv2hvR8FqdCrlgj1mkd+QWp4bDgp0Z7OUYjdPM4BSZ7HG5Pff1nbkD08VIaJeq7hJDuRyA5QJbyu0GM6nt/Qh1Qq1DQQ950AGQbdVpG+RCiOxj0B1EaAshS46yZVLuoRvR4oyu/zNecUUtXjEzl1U1ljsRUMtNYHrxKyOjx9AN+W5kAD1oToqFTh6v62fBcoOEsYZ5rKB43h77dAG8MroWKiNvvhT3RdtWnn+fwbKFAVdXNCgAuU6S/MmoZewAdcxNDtJtOd+RtynzDjkaljiJDcwZwcQePAFU1dFv7dGQqQxMlHe83KuiRoYOpw2d1pRHnC5iMfqbYszGP9iC1L6Nc0HLOrh1Jf37AkmKNbgQm5Wp69mBB3X1G81sqvdm1+qQ0Emg/7X7Nu9duHQ+Ei+3PufVpPAhq0BSv5HtCz7h6ZOkQabSGUbkgiDNWCnQhrqbmkps90vtfyYhx0ArP+mOzbBegD2QkNEwEJ2ZK76U5bo1ekUiynUR7s8LnG0ZAMyg3iQOmjGaRP2UYS4Fh9Bt3Jqeb8wcd6UbZ2BnUb+tObo51HiAZ",
"aLDXRqOEzNIKrCPVIa3a9NZkDKGd5STxvGBwVdDB1e6q1O92aC0rS0OFcTSoK34pfrUSVgOKTbdg2yWxliXx4RLDIjrxZ3ygtK4JQJCNG5DfSicctgCtBNW5+hN5AQILSEN2+5DgtgYjxOOQRdXARTSfLGTKd/MCUHCJOAJCiCug3YTyuMBjV8OvWUSEwKni8+4b6GMtdG5/I6XK8v94SAYzH2VzmpSF8Lz52oKk2aGBE7MVX3+DpF0rvqpmyPE65aCKUvW4AYy3DRUsqNZWqMl5KFG7E1XKydGkVOYyvVoQVPqrQxnHlITH7tlPQYPM1JYDpS19JoVsEXjy7yMYSMDixHJgcvvBxd6OJgk10kYwHezQcAnKsowO3aOXNQL2EC2MHpvXw65DQ6Ip8EgPSZPInv7hwzCjr2H/tUclZeZsUftx3vYM5+Dd3PNehVeV56HcQIJflMB5txZHLSRkvyS//WMQELR/3tCgNkFlqJ4b5Ss0FVoVeobHEcT89jdS4jqFdudbbdLbBK+NHISjZ0yYI/HCCt5ReYB+phH7WQuZHtJy0MZfRWWAwrqX4gi5XCvjESIUQ0ot7v3oXWE4iwaO1W8leKIDb28zrwnlwuHOrmR2fXFTze1FSVOaroPBfIfpSPbosFg6vftyQLvMVIuJecr26rPjz5bePGCGJjDkVbTK2P5yjZo2GqwnJTQAvxXQxaD3Au2Cb1TN46wyngBtTJ9ePg0F7CG99ttmsJ/eggXDBovRT4xHRpuPEs3sd3yCb6x9dT135xhYuK32T92hnB5NAeV0QhECsba/0wMxj1whKKc6UVpBeR4bs47+JQp/1PS9VuTIW7i+J0osPI0h5LRw1ccRwf+trfA0/E4ZNgxqLRa3el6NhYt2XrduQ/uKvWndj8+tA4wCOnbws/xMSng2SBv/laN4lf/h7wDfSkgEtb1qtr9rW8WIZrolOnbKXj1R1V0S6Tix6qpCf/YkTPwmqEKRGHcHxbwK2yf6NQXxLDL828yP89B7hgcNIN8LiaJSyuUN7KNjDSjDGPYETupgLnrLg//ZpGTTo8/a5r9k2jg+U9S6YW+DH5m2FbXU1hS6jur7Eg7scym0MW1op98IBzNGdNU7E7oluhKPWBaZfcYaADlWB64de8g+WoKVQzDqIAPflx5SNL77/+2hflyZlZtY66xRCSm/MxjoU+GUGaZaPhKv0///nE/+K6YIV7cNMGz/74/uJQ+k3DGRvuOqx4r5Z7EAF8ZApXDxfneRiFmgvS3Nq4IE3IrYLNPR32D/XdBHt5a4kxvg0mGFXywduI0lrl4Ax0nHusYyAH3uF4/nsjYNqzqPrki19LRHmh2wvzg0b4em7WOSEB/zu6P5SQtr3sSYPBv1ywV49LzuAejZ+2lsBSz1ruRjsXPmcWd314rMvqhRI9gbQn+50lRLadScwrPAHLY0wGBr/k7s3UND+Ud8WJOY1Hv3RNRXuo9Vdf+snrKnJX4khfh56SIzdv67M3bPnMY1vzAE9N3YRVz9aPGBjw2FLkUWIZlh4g/aqBD2DXMNf1Pm+W+vhHQmbK6is/yBMdc469xdXdOBTckeBqyjfVF/izujFq50vAVjlytLuFUiG4uKYPSpnkY1azZJB5Gqc6bPt78GkNI4ZPe986qZwIT7z4amO9WJD/dR44ws+F5vVU4G3OiGeZQqzjjmiIC6S62iobPKNcLzurD+pzSfM3tDZHLyAvcA/Ix/7hC5Xpv/UbX7/vlbPsTq4Gcx8OlRoSo3PUv93e7fH3fIjTwFcvM155q93Ettnga2svFMKtJAbcaRjKDTY6DPY8WW0Li23LQ2/FCqaD+liERAvHHOCzplm7NbYTd8LzwTP83p14YC7KIEnEh69NntCVKT1XetshwabZFpAUsMFJ41QHZuvMJfRa3Iy0AjaUIN8kQs/gkMT06EaB/usouynTbS9EVvUUrx8urhGj5WwsR0afRefUvl1CRrpWBvV+amLftbd16s",
"SbXvYLf8gO6HtZSbRyaNYS1sHD20oeDq6MrDc8W3wHmppfEhz2JOvx3aPXxdpslrsONQyb1tMIBcBwI+S73BZGU7/JNeDZQJhcj0zWq4L+9gBXUDy4NgnLrm8w4hMZNyOXi0zZygkYnCt/Iir9g5cSh5l+taRr3Fjvyz9rNK1l70yOI4w+RgDBCNNQIxFrcxahK0HtyAu7iRgyZnro06N1cse4dR4fW+Qeq3Bbo218IArmJpLHDXYzuStZcRNuKMmxmaXOzPXcUhDXVKTBfPfSz/VQLyVY5F89f9NT6acdMTnNw2ouWiK48Bi8BQEuvxqGlhM7zb/F0C1Z2GP81uvxHmO8DodcJ7j9yEN93/IybswDSZIeBxbcvwiae2FHsTXyMY+41dbANW3WuLtztCREh8msek9uA7xEEFTW9KHFRONot8gvd15LGADlxCGhYzVyUaxTMAIwZgO/Bdi0XSGIgrkuzl9p35RFsRpSrpDCK8l18+GOgBpCowgLsEuQkhyoE8XHqhskRpms7Uy+0QcYxSux4FkgCdsncHB3t9Vlv1/qg/D3Oke8cqxYefAaaO3shmYmdR5wM0SRBKQbs1GWXrmhGmxXDLRPa9CCgLuFPL9OE1j7n7C6E8R6kk1GKcL+J1p1neiZ5aAdHcqBukDvkdGp3qQR2BwihsjDakoyoNeU/ZsJjOtK2hYLMVL209MSjCH3KWxDjTxLr2sD9SID0vBNu8B7B35Gyht3w0E/HQZboVBr6OwgWtV4/ukO5JQxB2N03WJD8O9/B9ZpYmGBgkSvknmsx9fScgP3QDL+kq97UWjN7Sm4/0f/bQY+X4A187sPEYI37NdKB/g0ihI3iWcNekacT+eijQjq50/I3Ur8wHI8wGLFB7dGsI1hiwLkrwo91q8q+6NLqflQZuguHHfXg2OjLKUP/T/F9zTsJmNeWcsWWKF6RgyfdUPAz5RUXpeLqgtMkmkbP42+Ccsi/MUC+H60khX8AEaF0cKn9Zp3UPf+Kltn04uMUQxRiA5yItpH4g3D8RRVVfo7dOio6QEk8U6wA48wKtA1Yuivj7q+DzObwyRUS7RrtFQ0xZHkvk+QDzLwuLfodkLny/go/8AQMh0EAYdc6ZU0ni97UqLSLNxiF3NETITY9wgX8EgTQRTtDKrhs/e5U3/ebcNu48r0ljYJHFPGCGFnyHPsjMP3ds/k+CI/Mtcnmvm0dh22RMeZKj33xd8hd154F5fP1YB9qi3NEcvUk1pJCR+3HVgNkn6rk96hPnzWR9XSYcv2WaRDdijrzjp4Y9slRySi/6BTP0fQ4lTdo6TjRWIZtX9hib6wvHApgaivjSeiACzoRStGvBzKc/IkhaL1opg1aoIvXnBFF9mDAMOI5XjZruQAhNa2TsrKnk1ksKB2oB3zjQFiQjAlBtkcpQ7wCQ3crsDTsKrjRrAktqMfiIPV+NzYBmT4SzGE9I8i06LLkqatxyirje3eJ6pK/Nf2M+0f9o8t2cGDItHB30r0rxvyFFLBpuKdFqjltOrmc+1tY/6k1ZXaccrKYSLD5BM8re+1wg0Da0kwjrMIey+xQpkS3K7pR7l17EiVOTAIMaHFLOV2QTTdJbgGUsY02nAbevrR3kXgsjCIkERI5dEFKZ5JNJYkoVP0sZDqe5rEpedRoEO028ehp/ngBva3ubpZIEH5WjE9QI39VFXdSz4+Cr6klBX3Zws0soPtPil7CBHC9zAAeOLKmbTVSZ+CyROwirfqJ67EcTyFUD1GqEioPNZ10oyOBoFp0DZtn7IR8LdIHwHD2Az6c3lnBfHMSwgq8Dp5F57U+HsX1sVLWXcCWpzyW2xbcRE3ES9vpu+0hYrbg3FoXWBQ4nsYBX0aSSALP/hGanWyfuIwvVqhLVPF4fVwTDB/FSu0IQNP8f2ZxnstMFQ+2JashZdJV4dSQtKYsWHJb50RFkN2U+MULyzHsMHgDAWM08SLWTwnTMwymth5h8K6tp+Fs+PB11M76P",
"KMaaqVM+xNXz4fILebcQ82TLEuqtYV6Ri1afuY1+UJKFOq3YYE4c5TjJupcbckGD6ng2Q1rIIQgoscwUNvTIhDLht6EGE7Pzv5ZaUfrJqCrIGuKLyr3PTbCoQlGcVVkppJq1lLTQ6d8D0mkaqAwCIidtd49OI64nc5ToqiTEsHk/WmucFodjLbvg+BbPZIt1LK/RcMurqigTUp0rwFkhtfFDptZ6agfbsYmIP7Q6yNzfr27Wygr9vYml73ZDCt1zq/SZ2EVnzwskjbUAf4OHMMLiPn20/99EkiMNAsvd0MV1bTCuXsEX2pca9mu4v0EwvPyYsd2IQ+7dwkI8nVn5/rPTPpRXkLYow7xGjwA4mkUeBJG9PFOm7tVaUsw1sMrCQBk7R2JiaIvuHLjvXzU8xRdGKp6+mE9SjS99YbHE44RLYu1B6QYz0Du9VfKjK4qRXJHo2b20jHS/fkq2rOg5eWraDW8TYiEUK9lAE5ZOOiBeoKFHyCkkpwGmh2yXpoC01zX799FfSAfNUiiHlzchpeIQwcNDx3cMI6LxTwJxG39t+7p2/+UytPbPXYAFusEw1LlCoXTSC8+g91iwu8Nuz8UsTtENvun0iur/bOU8+hv6sOZBhBa+rW2QA9HhztAIvMkqld6X1UEiThqpPM+zkhtxaZE8GFtGHgWVxihvH/s5IDVoK1TmDVrA1iKydT2WKRp6Ct1RmlOhTTvtWvAFms1ixdf9Xt6HuIsNpddmszzsgv9kAgLW4Efeju4elJYOFqn8COr+8506ICDBjhJHvh8w2lEbMQvw5Oe4njJCHSqDUNRoN1CSl83gvpvKsqHQ7TlqqZlBKpcjoQT4Maeb4kduuiHQFVFc0jVLb92NworocLcCL+xZGj4tq6+jC2NraXTwyGZ9ehqVOTaxSnpMCf/2Qp4MGJlPvntXwwJ03zw4A2Npn+61dmKw6Wxjqas5ybOum570bwI6UP1jGHgO4vNw2r03niV4Vsu9DE/CflvoZl6oWHHtfMThsC820aH7xwveGiexYFVly79Ak9pOSgTdK3A8dmPnnCqvOnqQ+N/G3spaXmTpMe1WVbyGpjMrhuMJtqaMIm0HBAU9zuxV3hsCqVr/uLCGnKvLv5ij6QmnOG0LI8/QHTZfZxKUrlG2yFwOQFPMGFzQI61xVvOVL9kroJbccdwk4kGoCAM+jnnWLHArM91kuccInt4rIh6oUKJEUNJmo5dNnOIe6fCuoeVEY856jlVG7hiNzdftOUAPjUgtARS1nrNNlHHlkBqtYZYnWwD5yV3iMRkRSw9O/KwFBUZhCrUdqMwTZ/S4DZgBgesjKKm7DHNfxH4Q3EK5ipBmgBAqTZML7cJExfw6mHle8+cHeik6NTBffxijo7NIta8KJHcJ5hRlIZxiRucBrU33rfSs2smfK7CCsmXL4SSiK8GgBVyvdLUi18AUnK5f/fbXzI6UrBUnDQAZwOt9mjby7F6JJfridSjgrRuqL6WuG427B7OGaFWW75CeKP7lFXMeaV9974CJgeWp13kopb+BT+CcnHOdqCej4mKgxpz6uBQMTNpWI8NzwwcdU61wPZy5531YRgL+7k5c4QPL37xMb6tXI1BXgxd1vcTAWrN6TkyGu2MagaL9lzThdli/qCmzs4Xni9PP7F2C7AsKhGYAkYTONBBmf7ZS9CStRpAKip+rD9/4v5iKaZppbkycP+X07oOoBWbW2mh1HgzrbLOGnq4tW6Zjqul7qajqskAaG2f2XuWolzUshytWnwYa9uaYVUiIeZMgnpAEIkBImokDiZYHzGFtc37lO//Dvr9ADW1y+DEgCTMU670q1Tcgw+0F9Mk8eBAVwZbFtbiwfaUPDwMYAQNLGJIO0+zZPZCwfXl+15PALESoF1jth6PRsYL0ZIqWoIrRTVi4QSxmV1UoNldYFknOqhhqEa5FYO4WKGmMlPbNZ8HWzEcKCQRvJxBaqiiVm8xFrGQqYNxFV3PNqsfI7H4dCanY",
"+NSGz3+Q31Y/sZQNJ1tDXKVqPjPHhhJikSq88jCCMh7OvbtkJM+e096z9zoN+o5K19ACy2Z+GPDHQOMIsl3IDNFhhr6oKCERK7VSD2xkvk1DehERHUXj0dkt2I4m13+KaWaYOkcmP6RJtsc8MOizdrlsX4QIZF65Wqp1eUayQHfGAyv3Dla5cfG6Xchp9O/PDD2A+ezeavB+M3cTkvFKHOSLV3/Y+c+xUqZ56vBMasOSf5f+DVlMror3f13b3ifugbwHBtjfMQWHgVFMZIL5uHEE8qm6qsXw6EdMezDrNaOEcEINv9F7dTbXOhcr2uKqN4oYM+Olq+/KaUXiZHlIoVOXBH2y7hGwYHTI3L5I+dEuZbIjgJj0SMtZ3aYo+SJcyRDD9D4j9XLjALlpXBd2INWn6347le1mV0QzpXIW6MinmqeVSIhdHxyxXpTgl0ZavSOCysg/RzM6CySY77K7heVbJp63XuS4tttdWvM1JOyufV8gGeszOVbdMyTBDzeXzENoNDY7gtODzPbUjoPdZKGw0qs9bRk30KhE//Dh5ZG0yRXB+yfMhmeEt7kk+Ssc2MNaTXBFf1afc2R8OqGGOYPeP5374eP+rMjMyPS+vtfjtgd9vdGAQpRy5IDBqyhIXNBCmcAygtM1igTffBqo4jcZxsefflMNDTrDR/WEFvMAPpgelOjR0rO+5siQz7SeFm8o3wkRCb1NvCxYPyC4QFT1g4NgNm+/UrKQ5cIu0tF8t3VcSPJTlFuze+/XiKx7vOqjRnvUsarn+ajLiX/j/Ea/T5OP0uPOqq3HQhcMoThIH1Cy48Rg1gXFY8MqkBl9ZG3kFtBMqBt1D80S/5bqt2791SWrK5N4CxaA56qKjEluvdB0Mv11ZR0Umr9EBqI6mi+/E7iBQ3z5AB4pAQ70nDHjfqr3t8b7jd1kwUaVN+0v7VXnLJPIdjjN3Y9gfJmO0pyoFu4/Qh6yK+8DAIppGVaqDD2v9rnwEW/Q5OhDRlk3ezQKvUMTQUkyo+CCKKq4x/GBwmwJLEA75nYQD2xk/bOnNfd8kczNeUHgEM4gDOh2D0eDNZSpugrqWnjr/2lBthA+/ZxVpcV0UN9RQ2WwmUhwueuSYJodw1+eYqFxp5By1YtGbh4/SyXBMd6x9ee4Q+xI1frXshANiirUvADgOhnjH+BPhamx7u0twCmk7SH1z9z8a935nuNK9UdWPOlVH5T3QE6Cj89LNBFDNS5nTvRuZQIZK/KyrxFgzx861IPkl4nUT67IZa/1PV91piRHmpFpNJLhBXQdLX15KT4ynzo/QZM8vEPmQA0Uo/uOJtFEr+dH6+5RoAfZf3/twqprkVHozsWXNNb3JNa/fNFVynPVTERw6G+CjGaVv1IMUkYryizPVGjL9EfioafXLZyvVx912FVuKm6gfeIK83SLtYRXMAgMf74J6ocbIzVGlaZecwLG3gdaSq7hORpjXSl7u4dwznsDgrT0s+LUsF14k045I6Mj98WZBs7FGXv8RXx3PRZYZqG0Eez2yyP9HPqUqdX19M+YWcc11zQWXK2eZBimXcVlVz9AJzMWUcRKWedvCJOoIiaDXoKO6kZij/CAnYjBfAPps7RRcn/TwcxcsdcJO78+Uxgzo9SoZmtOWpIpHe2131KojpbgPwgUStgWmQJpqIVna+r9BYDj0GdvRSkFAyphGKUqE+zca6ScBv+ZGJP4jOMM9NsefiVAr+qlAti8Xr9hRucDjtpenxk9R7HbiZDxY/dokv+8z9QjQUfg7ypDzw2E5FK/R9o4A41K54kMv1YyPKpQwf1MUEkRKpeP9U0sL3G1tUmqcoaxQUuhUSIYcBsyAaOaA6XwQYmfJ108dGjP2sX/y/psvQJhBchyiTR666Y1PUsnTP59FSYWclUFyGZpwzRNW76ynEzn9FNRG7JTPZotVygyGHiD4OAa8WxQhtL2mSg/aBnA0HSXBN2Zq30o2HnYwQ0Y1vnkpWnEIHFcF5MWDGxw",
"/bfPHnpDdSm4YqkBvg7koYCje0/EvhfqX8ucu2oml1bN19ir4mTgdFU21T3arkrQQWFMjXRmjals9SSvYDHwt8eLtrznK/EvGZqXLFmKZ3Eni6YBT6C0VJP0N5nCWO553ux5IXexGd66PDHb1b882LcCaDm4yGbu/SkNUKGQuyYI5hTngV/QSz9QHK5fuD5K0sUzyBajHjhgqXr/LUA9eCGBooN3vUFSxLqL6ZSbqFcrmnx2QIViejfbxsx50QFREojIzoj0NJt+t/LFmOdZ7jbezRG+4+t1a4ubkRG8HGASVMQBD00Y0g+DVWPmIc4epK0oefMPU4Msenit5OORoviOq35JJ9etMtmO5gozklvoAr9UDEyRdHRQguMV4tD7oCvqIZtzuuPfQ6X7LnWgsVNP7y4cszckyz4jYY5AeAq9B6YIfdcfNfcsLBjNb8825fADryyAYFKBoZaRDdpOPzCD8j2F3Hr17AGxttH2cGCtCLWNQm6vFQ+rxqKriTRJAvD2HmmmoKRcIZnh4Kn8rCwkkL2KkTknulatQT8x3DOW1nPW33ltG9KHqXth7R+/X3cRplHRsHXBDrW17soPSqGwEhaYouGlMp6LSNDQw5nBwQFaY86MzTPe9xghHlM+LQnXaru+q9GUi3RKV7THGQ0HPzJ05L7wAf2bom1c61B/ISObsyl7y8o/A8ATgcy6T7LAA3xgtrl5GrpILtPYH2DUGIrHY0T+Ioyjvq4NkDMqZmFbflGmbz8WRLTbT2AfH/GCv/XVgwOjuFCduOr3JaGYILyWWpG0GzHPQLZtrOEN4OUe3CFNzG2U1EC5RUHCaQLvSpEna9Mp51dNssGebSw3Xw/c+6kIDAalrYbfT1vt8YTNzNE338+C1XuZzYr7zj1r4QYoZqz1GIecjbtanGAsAtZXfLZ1ia40QrTLqSud5600YJLGQmz2ZdDlqi3EKoFeRibQGeEu0gRNED9tEM39Vjvmkf4XC3Dv6D8BAOGXoDcZEV4xx/wT6FOLyeHX5a/Dc+PSuf7CZI6dIMZsD4/JRGbmfJ9bPASi7O7FQgOOVIPoHt7xbR1APyqBtimCyfl/z4PI7YJp5Wh1F4eLqPJyDQHWzmWNGV2xTAYDu2KGupLyeuNdDCZ84Ufu8v0oG3h+R0DE/GD4VhVFU9Qk4IuI8gq9GAMI2J19a52o8cu6Volwf4741UoeCwWo2nJDdeiVVndbiGUkjX17cb6ktcWgkimKRJ8u07+rpsCMxYZW2nKHwsqod3muHYHmEENq6AwCVufAeI0b++4culRzgNfjrAgdXGWjwPl3pcSxMw0tQmoqpTDYlAMvg0kIRWk26c1j127vxeJi2DVOVv69uAf2DZQ1gJYlGoqxMH65nIBzjfSH4exU6f05AN3ZfixTM6/ukZqsEN3tFFF0PvmYUJskeb0ay2XZn1OUzWYav+bR2oITKS+4NyJEoi9nh+kFvx/Qe8TDnFanl96DSzUhjRhMjG8opJofqHEaiLHaMFiqwc+j5QBhSBpayymObsl8N20W2Q7vB2h4185mySD7gdonreFBpEJBzmb6yZe+w3bLB7Mpf4TtK4pPg4CDT2QEjluc0LLe7YBpbrKV6n9GnhdHDhIgyh4iZD0j9XIV3S4LbPN28Bz0lgj2yw8/xLdkco+3hmci/1ZSIOBuwD58JYoOOlc+evsbbcaFOhRJ8Fv3/MXk9sCcatYW21RvvqRY3m7ewJjpSw4yJeVKl1kaoXN2nvcuiLSg9V0k/I02IGCEJXXN654VBuC9iP+1IUBd5TW3ClVLT6eXdp/mKaKVimd4ha0a5c7xkG/Ia5tW5gDL93zIwqTYAxibUfWjJENZJFZzj7c/k0ndBNsXGnP2Sij7cZies3VkZwQ85AQbZAssRhgLbYt/PuQu76JWrmnOu+m8f0LDsO0HkhPmnJgnE2XJ+VIiCW9EM1GnOOo47tfS/n4dGUFbDXN2UP5bhwPT8tmTePuiWaomU4sE",
"CuT2Atolkbra2YUgHeC0FirIigjFOHIcByncEyYj2lumWt5O9YmEtIYqcZIwL/bk3j8Q5MYf172E69XOL+acXOJUxiBdiyjON3oyBSkGJI6KG+ocSxxfHfC74LHldWgOwqfHr4u86B1Luzw8BU/GGF003S2DQLzDwqlEpKozV9LVP8dG0r+kFeXXu3joCS1gyDu/lrnBMcpOrr3jTWiJ8xVGVhv7JKSA2CnmH89acIoi9b5stwdO82K6uD+jSmMam03FujPRi92DTNm2jWZDTj0lOS6ZSsHw6Jd851OtcYPktzrllQd/3VQc3tFWnnVpV6QgP6NkBmalWLvGiTFFtTmU8BK8uJdijvtdxZMUgFit66fQaINN3zo47H3CDr5CUS1aZT+dwTGEOw/AsUFAsxUWS7hpCwj19ufB7ZE7TINb+KggicwaylWWEANOpc4qexEpra2M26d+wa7Bs4SVrFFtXmI7tEknmR3dw0OyBD/SY2F419vVSFueL5gcZh/9Ixrl9uVyJGXSyUmnYtDNWUxXbXJHcVif4VHZBzqaCbdNkN4XFjXfJ5kb2mKCypfa2mozk2SgukNOwq8DehCGnV3HYoM9zspzkWkFmptP0SUoJ2bBwkSAqRHS4q4SebSr9xZEXJMEcxsWUoBtjUu3LfQWLz8HSVIgb2XIGxec8he+enJTpv0vXeVg2/lhhKJengGDKIre4wvtLGBwibQOr2Dyw6zzJ98XvYUOPegM46voE2FWSdNjq3fAVZF+AhYg8V3oloxr+ezSU3BKim4jOnD2ZwHHFIAuqwGe/2Bbt0tovrfGVqWLdlFWvkNOXDfVNUkWhRuJOLRom7Ydhka4jzcuTWlYRz39fdJO/Iki013zLZSMBCWWv2mLa3kwOPyAulbSRsqvxu8L1MKW+WDReuD4/9JQANGDyT8djFVwnEFW/9z/FKO0teT5eiR++jzB4hqxzJrkY1vRqyZlafgmo8EExNx7vuBJTtuuVyuxrEGUTfHRCdWt8Qm4E6XegoOLvQEeuq9+lGd3wmUmVXCaolqulWlyVDZivdfeXrp8OJ2bhrqsO8eC+kBY4so9F8rNFcfnt6TCD9BpA5UmVtnKCeYqIqMPxnm3LOHFU6LaJslKJQ5L8A+H37QApMDFPdvOSf2O1u535iwDSFNif2pDO3tQ4F99XRVjrQljhzlK4+dGErnrXcFqTCnS6HuSiNdt+97idpHvjFwFAt2BqdwXb6wIIwMbSot5XGfUNrHvAsmLf4lU7D2LVJIP4jjL8Hdc6G2rbjaFKOz3gpS4XZ7eu1H3w4agheRxrCnXX6qm2LN5MNZD7SPrT2/k1eEpJX7w7rmaz4rKO+ITQyIeMg/0WguLDTbSzTiwuvE19grufWWJqdLjYpZfklq7RlYBdzKYgczMoZOLmI7IczqYsQHj9sgMBtEIIwtkswPRt7BZu+bwXO13aKnvXDffk6IDfsvaKvL26uQskW0Tuc61vMUj2aDAlv4GhtE4jl4iK7lGvpOMONEertnJXLh8IKy3ZFELPvVnCT2d9HTJmV1vUA9sPSYhkm4izmXlgFCgd29Dw5iTJVpAfx8oTFe+alDu/KEqyBOIIzUsz7koR6ra+AXYvO1dcKU6xqjjWYOtwnI/vdPYdkj/yl6JWbFQZ9v/CREsXfvShB4jORPc4QaMvWfCZ5PTkp5iFPn4Pfo+ZBxrnbpsCtVPL1G/slxfE7rLtSGipEIf5HyMeqp3mRrG4YXdVq/IGjjKWxVPIZ9R+CBl3z98dWz+4hV5gZF1HIpONth2lUh4v/YM3IYKKe9gKYNzBVscm8SR7ScQ3V90GLwgQ3AH6pejsPpJqM5zfLxXcqdPdXMrQVjbh6kdjU4my7xhGDQ8hjCYTR0lsbHb/ZY9XvtOyuSqOGirwRC4mnWlupU55htt7MtyUmk+RZB8/kUS+77ArMI8xApPx8poY3/9yrO7UI2DalML95TFldnpa0OAPlmfxNBnoLIuKyn0",
"PWyxc+TAEhubcpXU9e8PCRJQ+LNtZvG2whUYSQqtGiR5IuHIxp3s9uikN+/Y1DGtJj8v0PeW5Eg/9i5hdeTHCn92Q8XcAS0zxBUbiPbKzYKfq1VK9V6VZCrVCXgW0ci/YhU7ZgOx2+LlJCfYJGGg587QvDxN9ToI4G0JV3oAwpJ9WPASj/TuPXJsSIY7V5UOxA8P8+ll4rBUJslO3mduJR0MDmZiej9cYmyz86WXho7tsZU8s4gBlRDSWIni8ZwmVTDbgumyaWZvLMKrMizOIqNmKakhmpxarOBam3vi7eO2pLjozPfxZf4F0AfKw6NDDujSrqQaOX+vlTvylYO1t1fQxRUAWCz+QFWagAyEc7rNVI2Vj3tw+gI8vHDtwwl5qVP13+sa1lNXxzbF/c/hB0Rt1GPMFeV7nlNHEuUWk6SV4lDnDtOLhN3+ZDLR0pXSlx+tJf9jhwCQyeL/+RKiYTNBaWjvet+IjXyMumXW3Z40p09t4n0nfie3pM2nXxNKRVlSzP+sl5Lx23OSSGZY9GKVdwiN6vNA1BRMoGU/jib82LVRao8L60cZGDn2cweSpuMqQvUNa+rKmJ5Y2pnZlPW0+RYIIkhujX3Lyja5dUwrc7+DmuhN4phtDMdp8FzjksI5d1MXOTaBycjLD4fCLL0HN2yitw6T+FO4qoRRwD+MWEpSApa5v076bxNQwNv0kZC36oPAqjU8KpYLD4chRKgM+VOu5aBtNR/CHf9sPRPnom3jWt6xF3OW0NbtzwS08gjQVbbExLs7UcpVjTKqf5f9kiRkR5iwRLlkk8hle+AUfKrDHUYmIGfC5Jst2duBknYIKBE8pxx4bMIYsO59VlvGH8uyoZtJ0oC3O6Zjz1dGYkgR+U78OG1030N2zr7fGP9D1gMcx5eGr7vga/LN9cayn6fywmiKWqtXG4Zo3XBfTfpGVzq1Jh/+kl/QE0xTqvBWahP4fYwxfFh6lDRI7+DKDmwB5gGMe/y/vcp/xwAMdDC9sGEAltIkvrSfnl+rPJlY8wig/l88BNiglweT5EtQhyP3tGvMOTqHAj0EvArszVnUlWZY7WdV26+mDu/vVX+5hDeqbYCF6Vl9qECy5pdT7F1g+yXUH4gSxctUeP/Lp+mnfDPTqB3T0w0GPrGp+9Iu29xYEFXnOdL9uknw2VdHPBV1TVmw6IQYZ1My/yeGbzlXJbDfc5U24g/uNPSCadYmh2nHNSJG4EfvVxAfgvP5Vht6qc+rZGBuf0ceTvW8TmEgvFm/WwXhvJoOngTG6D1CwRTRu36d8+DATDy1r84BTZ0/FM0yMF/N/QEQIWaKIGUNLqynanOipFu3i7ExVp8Ov9VMXS0jAgNO1Ogf19JBOrWTFC/5l752z5DIBF8PgP+e9a9yd7sEmvVEGPp4NBwXNz/zKUrrNuQrZzE1Alowe+nOED1cz7F1naNvIUlF2Xk2Wm4PreouXC5zJ06Np4ijQ6dtOoGhl41Ylh+E8B+tY2cGa1+QxQMpJQj2Xkh32h9Yxq7aMewB4xcTrJyUQ2tro1Yq1jumenUcceThPeMxC3/Qwr5HAF/rqQjpoZp6dz8BMZA3XeeaPSnAVORxxa9XsHdQE+h01Qe8Zpw3QhDsFfVPf1+ir84oJ0aaSn0QeHGR8dOM7fvw3/MiWy6Eafyjvqv1pl0E/6qOynlDSaGjzIwwEjG9rymMCXTRJKbwZraJvQYUHqBhu3YelILqQ5AUlU5HPBb740YlIedqvGFzWYtofM7553SpD81L8H2QhJ1IndAodxzz6d4Iw1vtT1wVq/nqXKUMQtztKd4LS7A8apRcgA6H0C+85rlm6lCgbEhKuNm/GNIn6qva2xFUb8oDr5OAJGQpmDopITvu91ny31zIfUfNpEKQi5DGKJkXj9N8RqCyce9k6mHxwncsqhnqjZKPf00P1nrmQMl6zFyCjwjVRrzybn1eLOhl6s/IEGyShIro+jt6nQjGNagtF9m/kOcdjWZILZoS",
"A9/p/PSAObCx0xIM9cdSIO9jzyWLX9NWygFU4DsnXJFRoI3KlfQEVDXaqlrTGYU97SOWQG8qhke8ygG1QqcVAUs9uiPC4ZVLVt+Ltdyd7cPg0T/NbfAoWOurQ63J161lOJNFdFUQjvMTqNgu9l5AYMnl0oSuMm2TldsHx8qJgKiuF9DK9sXYPEJJ65Fd6rZFr3TIHkSWByvIs22E9JNeQsd5BKFMXHRw+veLNAQK1vDRcFSoFtzaQ68rNyZPi6/HP/rZ9Y5fsgNqSH0LlEDAzLfag8b/7Akt8M6xdb6IE14tz0V5PYbf2TXCFDNfKOFOG7TcNxNc6QmJfbFUAdlz0bq04Pw68lUUALtuhudbXxgARIsiDySc/BRoDdfOYU4o5Cmk/ASKdocyPkK8Qset6pN+gARknu3jsumIeEPeljNH8ec1+c4cRyC34RQo5GWSCBlOoUoxt3EtcUgcl8v7wzPNhbVAAZm4/XEnOfHDJFSFcPFuyOuQivI8nSi+3W7JTsOo7XB+iaZoB1whgRLd+M69TJs0iRrnQdeOXsvpNoiHuxnBvVakkAdG1asc6ksWCvY4J4xv+I10D+1yFeIoCPa3a86YbjjSTp2lL2X3bk4G9ZInlxU0v1sJKgQ4K9y41VFLvgSUI/XeBRHPOwDYe0HUwnNjlBYD5F24LR8bzfqgDJo15y9emc+vw/nzfZHi23VNNdDFUT87em1V6avEOXDdTF7oG1gi+3/qdZm6z/O3Fc5V+0lbvZSqmn0Wv89VHIbwtkW+VgY2+p/7udRuArSOHcH4tBndCwMPD5sGosGCFs0P47T92eqRr8YNEXq1GNQzaxTP17hJbHqKf27eJj2Y4QmPoukV/ccsdTLfN0aNDL2oCM2gN5Iuzyv2KU0Mcjifkvl4VidJLsQPKGeLL3c0UglCrag2CsdE22SBE7ABoY/vKdoayy/f6uDDM1CBczQIHbsqHZT+qAEDRBQa4PF1uBjTi44DTpVWbCZwh+2/VZSE7grPBR+WAznC1vFmM5tnrChT494AIQrsI60k6d42VRawQH8pf2WsZ8QUd3PAI+SDnE9zG3cId8yau8eduDtbP3D0EBGCtu/ipGmx1+udrMsW+nWFTdJm5pb8DiycOExjWjx5kQfs7iQgh9kNo0MXXE8/eBqXNNvoR0HyKlJU/S2ZMzrc35/25WN1qQqo4bK0AxopvKAxDtwbecQbfUfMQFPJ2QCHb9sT6DqFZEksxn6kejYkXwRJ46I//jVwG58Q74aQw+Dc11RzbO64fqIlA2fJOXiK/hvSA7sIOoVmx+wiLytryhFvtavPyH5t8IhyCfuon1qFo0WOpujWW98okkYq/RFAAN26FvU8szAnWf0nOnnriwGFnrcyYxCywYuCnujJoWHpQHyncDR6PZYv9f6jPeNyprZjcuuI37/zar0kOykWREajneAkeGDxrQnAN7XwWV5Y4Ms3P578FcctHKNWm2bcOvOrNGgq5XmZCg7GKzI6A0Ets8hyF6/+n3ZwnUa+Ji53a0iraNsdNd4+rtofkv8lWLRcaMgwNNHCZCWy+8+o6Nl8rN0U7WZDbn6t0LDClMcING5ujKHuD9pPTtRzm2tLMLWrVXWZFPYeymMG8FoqAucXj55TPXbLPDkXjEqmiflMqnUFehGkmvYYI8I2kH3XYjvm6AQ8YWOxqQadBWLR+7pQQ79nMEbSdSJ9/jKZd8KhPpcChUzb0BpA1wGRclFWCcrOZUPOkOvmMd+o3oiSyW3GBxHsrrBjPUnLbTyRZWzZE2EQ3/N+I39pP2geCrizhshFIzs8mIt/lQ9bmkLpovjQHwRUIOYBt0gTOKU7GZxx/6jRfoknCoC53d737STOc/U8OcgezHRwb5UbAHRN/7/eicYsHhq+DPnvM3jmHb/VvJP0yOsJ9ENFiBLmtWbNE6KFXpiqIgREkoXlSHdCf4gQUe/z65YNdZoxK/8JaidFX5yMp3Hq7ED2sfy234Z+/uLv",
"nonH+t6Isn3PdXLeiBBtw00Ni5e7dnx9lIv+FZaRJJ7WCEKdd7jlpb38lfpRxkiJBDTIXv2YQ7OQY7bIRuRDlV8HPvXD7fMHdUGPrbeICF35phytTQZtPuHzFZRPo6hBjtnbydcm4bOu2Nmm61T8OSvXyfHOBqg+kQZJYihdwir3DJboQ2wOLou8FPZlchoHjiTE13M20u8yiUC25yknzZ4Sf0hEMVOLhjnwN4JhnN+ZpFcPNxdhYtAV+LMCudKyNz4pOEsvFObtgKjwNw+3LnTgUVBMEOjkYQr8TvAo/WA0NGE0wZmq8VBpRAeT79fQEnwyBsu2xKOGfFC8UB0jEl9noOSWV6bZOd4CGS73sMVPBFRA5VoyTDYKVTVS4gAmIEhIX9nmrI9GSRvpL9TuK0ZKgmZJSh/+b/q/90ivg4sjoi7M4nlXJXoF9ncsBibFZCI7Add4JmpD3FcnWjX3X3JtfJLnzcE11emNyUvgiJc+5qpSe1xT4L/NvPl9dyiCmEWnYWI1eNyqRV6/grSHCGN0N5lv8QC0gpxBUry1enkuYshO9RtDTIAWJdeScjXKLoFL2MoImu49kCWujMuBTGsSNRrehrmTcWM59Y4TYV8cMGOD17cYNzJO5dJVZ9r8kAxMdEB188TitKo/om28PaGbkdG6B3mYZfePXGlgZtpIqiNwA+PLw49WX/5i/Np422Up3+toALwDI+Buij+JLtJJ5kHDmu+C87/pc4tSGcUowDjyQjOfEQhd+w9CphuUi4PAXUZDi+LSqaTtNbJhGWiloHJUVtjW3B7+Fo+QgALyQdBzpN4VBLvARAmMJ0ZgR8Lyxo2ZQEv9t72ziV5ELxBk4uEGS7Y5RIuowgmQHpDwR6sq3RuB2ECQ9Ivqv/7xXO7J4JprBEJDMHzbCPI55Ks4S1mSI9YXJEbIQbqrD/i6lGQKfX5u9/4leKdm5ndfnOUvvEEUKjzFnuYJjDlaF79AVWH56ETEGAWH58/Z83Diss6v4B7vGRv9B51df2v81K0ouGMYBbfnU87xkVk/fovOKrzZxVUPt25AfElSkQRwISpH68kTV7TJ0DjQfsXMZRivLZwdrLt6fSZo6Ok/LVhNQP4U3tIOtnpvA2U17dHsdyJQ+O3cV4PJZ/kophkZi72Y1zqig3APs1yRlc4n9KtZUEizZ3MCjvn2a+kocZhhk2ZUGfGUGggBfOs65UXuzU5af3yZCwa/3c5Xz3Su/KcMOchc4iInMEWr/ACujk7w6gubEHxf3ApUl0I0JvjpRRvHHY9IE8tX2X2yuXYWxiQFdo7g6d99G8weC0Ygc86qW+XtPY20FMvEeVBBJVEpDQ4SSGbLV94Z2J+UeKE7ifHZUANqmb7JPhVt2RbDMFb3CW6lFHX321T5aCyYv02aXlPzPG638c7nrReoKLJ+02dWBOkmYi8k9qBYaO1v7U2Z0RWmW58zguzE0kWGhz0j17pih+pNsLiDWabvyCyBjHSZAzkyv/Gezn8mUuTa66LKk0dCwfCE4uQ9t+JBve7EGAZtbz288ZrA+SAyO+/nqK3xdaRltcoAE2DBPyXiOFUBqZnqKwqI4Nc9xQoYVFfKfEIv3NLRzANul1p6uRUaA9i04Z4Pm5+ntc452DYG2Yp0CgOO3SAYYTrrMhDO9ma4JzPVbH54cOhkAgiSGm8HFde02P/EJHi3oB2/ENEjvaJgeMZR3D5xt6a6QY5hFebwhwY6as895NE2U0bE9rwTOUgECN9vR3P/j/ib4R5h2PJXR0Eo5617lYZJXEmB9YE/Wh9XCFeroYjizEwXsJ8U5keckPUDF+dvatlnUesJW28go9sZK7QLPasELkP9pzjKFij4WTuYgLEKnkITH494030rAFe58iIQoAIIaW+1q2b3zYxGSoYoNT7sqALXpS3tfF2CGb5qUZpzKVjUdYD2kbmiuLnnPxbdi7ra0SmRVgueUaDDtZ1fdHnQx0/FEoGwqXtYw0xROs6XH45W",
"mZmE7dR0oEOM5r368GTPHHdNP9q0UxJGQi3SzWztnxTiZQF78/uDPfGgUEQNlxLZ5EaFESvzlHEG/hPm3bfYUgxRE1dBm0Q4bUOn2vhyUsRAtHlCST7QeblliqR8ENWxLxeFlZZk51fD4xce+6vM3p+sTUxWj2Kr2EH1MI0zcJrgu5jxvuF4sjyEW35EXwFD6xNoU6kew+mB+X44inM1+yptQs3RTyXYCf69lbKFwuA7jo6mE0S7NHjg7DafLf5FAn0cghJT1/HneAyHsG4Z5qGWHg7PZM4/9cIwZ1Fv0ygqZ/TgRU6T9k9QC+LvtJcSqHUgvJQiWcz0KMsYvTRlC7PoMWGUgUyoLa0kbz8YyaMJfmsCe53sJB7K0nFeQ0V3BlL7x/DMkBjzw1KFPE9o5JvhrQj+i/HIB+ZbbEDe3+fqwCAiPPhoOk9DO7bNLtuEYZ8riMk6xTMt8QPzOAW/kbIZo5hil6tpeGG1uNgbvbI0QrX/YuHZZ1hNHXspThWIVMQbGC3db0n495TES6EdkkaGZf9W2AceWiPnHr11xaaCV2x6YvgrFKIevn5wr43BG8G3A4rY74xex6PQqOLgNfC8eeflbFXgDNyMBvPkCc3Oaj4B2oRWzjdnLwVhTs44aE/51I7BY2+tJReRWbhLbXRZHe8a0kO6z5Q6j9bPioNoAkqjQdowjQibzbOLNPoLmWVUwoTgQON/lIx72g2M56gI80b+mQERP6s4bEI1k94DPAoj7GMvd6jrCdcJr6OaDvNkBe5T8KrRn3O3PvIRKnFeMxr/aWvFCzcZmVYDTlG80uOd8YxtdKDQLwjnukvdkNuSbxbXdUz9ZunKRRGVbqCzanHe8ES9Pn7QL3hT5/YdzyXv1dHTmUMlGsCHi8WNpA8Y7kkOxhhNLYgNqVeXl69zO6O2iaq/dNXXmjEb0C+CDav3OqJqq9ZUMQoaUABra5ZJT7jCm2Jd3EcUFkK913RDQkaE/oVrF/4oJk/v58d0PFc9S0Lp9F2fg5vf10auY5cuXtnpHZvO6Pg5SkWmsMeAL/iTVZIJO04WowH79rStWjZjUmfg7uXo/bGxZzpTdw93EwS3soeF5qM1KixcAbytqi2wpvQtK4/XQjIGZVpfjmrRJ1mu/cyKMLBlmMYPFl+jEjDxf1BnKWbL70lEX6X55lsLb60EyjdIep4pBhvFEMqyI+xbtvkMIzuhBgwLR/4mhFqh6gX54Ho2lF31hrzajnTRy0Onxbs3dtmaColCwCusBFzxdIPBxuV18KWS5TqSdyDxF5aMocrEglv60LZWqDiFQr8c5ATBq3tRSEBipl2iL0vjK1VAXTZ+NWwyZQGpsUSpB4dTvQnetnSNluj1Juru+RcOjYjmLYvYi1HIKqKntPW9AKOcqXKtOpQlnafpkvh9nohzlpaRNGY89uDKtDFGiRXN+2VHC0uItotn5+TPac1VIaUp/eagFbb6QguwXcsfMlmdmZbFaDuyRzYcPU1tjATQ5UuExahCmvjcBOcRjoEIgRw5wgkWh7/NORaOsGH6Uqs9A4D9DxU8e68C+fh2GpCiU/KsjntJrVuB/GKSYMXULr+CBG9q9PJYUjJ5YerDzw33kwDRCKb9dQZm+2du+Cd2+WXyWQPmIE/X2ERO2i/1O4TBc85J6YSXhqBmcEqJnczcbRzg7z9sQMZsi0LHiU5fHHKGRWOt45xHzb1rHAEtWVBnRTAwwRgh51w+lJ/w0k07sIA8B0plkqvQ2OIU7GgzcjYRu8BwXRDXMTy9lQb9geJvinNFNCJQlUhh7KSQbG/IatLT4BusJLJutRQbTo5J3j1HqeeiHkGfRItLY+k6Dw4+bYBtA7mmflMoFHFBudvwrY4tE6qrc8wqp8sMNFEGHCH970An4l966lA+t3jOwmxBkRT+EeYko4zdmjSTdO75/svPHWBjwygLJeGrDo7Nk6otYweFMlTIGo4+GE1kRbiIkktncQgkf60IXW2gC6lZNk/U",
"eBi+a7LjnqDwaUzbbfVOjbLzQgoyYUMUOsx/vL4fcmlBjTuav/vqkb5ATlXoyTjAXHk5V/XpORzx7+tS/tJdyJOHt9TJthdD93UwvEwPc4yYqiVO5hL3/4Id+6wQlxWWpieg4yCVQU2AyTio2dRpVaJuWfCtG8h0zuKGt0JHdywhs8IokHIsf9htb5geETwbNajpfAZSjdMqvsaPta2bt5wvz++kq4QzV89rVko2ZY9rfMaPmchbip+dBX6XDDf97ojjioMrjrOedoOSztRUwnHSz3vpnRBp54/nYr2z/6HtVYw0e2+hTOKxjzpHbgKFddrBmJ0Hnhs3oShCaK00aaiSBy5XT8qTUf+NcVnx0mZuMhjIyIFf6JGMsdH7b/dHocE4WRx2/soPiZuWvC5pIbFCV0/v5BAx/hCayG/Dmyf7yp2EEkc/UI4h3wAszDAMewaakJqLeBTvSdSJbBRhu7HqP5JjbNsRAWSnrVdc9orpyBLxBXP9GG8y39cHF1mVmUUSUOv1dVoP0DH1qXXlIlKiCDA4Cw2z/MnUwyCDc0x8nKfA01ogAWkmQUrDMBFFYAj/my7L3H+/Zp6stFDNvYvXUeQQZSnZv5ugK+riTZUa8R0UrrYGD32tHkvxN29WWWgSlRE5z6oljp+JXYpp1YdLclphZyPiiKHrZ6D6/JtTuwc8HtJ8ITdyWvj6PzLKk9i8dPPVmbXmDxnu3O7wd1AfK0AaBQkgUNupV2dTr3n6S/Kj0Hxk7iGPI5eL3CGqOcs9EuISN06o7W2qn5xP1KOGrgl1qdIgkteIgP93UBmi8NA/61lO5/yZVKQQben6xo+vsFen8oWIFj1N5IUQRboeRa+anoyRP1ki32useDY2o77KZUVQOzjRahXcL83t65YaNG/unx/qdJ2Q61jQPI7NDDRMVAWBAJQFua8HWvRIaSAWa22ZWQ9od7M201iHr0tWgz1RCwapDeuU4iKJcoKCMaOsSdhE0gXk+br+usS/0kEkjF0LRVPwdGPA0PxTE/VBXApGyyZtahKjcw2gdNLe20f1FKXuVMjyActK6/5E5cbmEMcD01hEgMR6RCb8AuMvtG78ZM6iP0UV3DB2HZqVPj1ZzeDnDhgQ3odtCiWSfcvzAQHv8rlngSYHgd96gMXA6fq7wkWVBGxBm9V+8t7I4R/2qXn4QpuLL8cXBU6Q7ewV74V+BCM8aVrNTQFVa/1z5X6JtU/H1GpsqlIQvkdim/hOxWszC89nBS/ToejQnNfQMDhBQRK4C+5pBqC0EsSHjv27InFwHdQE7dYUW/bhwNPNFbWxkFsr1odsKKB3ZIuqc78FLcNU9+QW/nb3xi5LHrrKQBBWJ+Aprz8nhYsO6nGZAAG65zdlYu91KeqFLUilKyYllk374PI1fDzA4CHuBiYDMeuK9W0OkkCBSWkJDtNIODgXlZVuB8OMJHPW6fY/7v0U9yBtjbweMmN6ifIA5I4g6lMXAVXfCt0hzFpsiQ+uwI70RCQrDo7DiT8HewoPohdsn06KRvDdJJqRZMpiVvlRmLPFHD4icYVwB+k0yIS6RIjoAkYF8Ww7dSJU5CJvEJxOKK6Vx7QphdHQfNSRdIwcCRZVBl8CT7nD4/RMdHX6RLBDHpWbzQGySsPLV+GSirtiCYaZMUyyDz8qL/zd4LNPbyOuJHVWKqbFdcPanL+Rr1liZXpf4meV07WGL2AVImTJKZyrwX2/d2/xGcgSYqrcl48Vg1+SHiOHwD2AWE0bVnSHYNAv40XSEe4SDsRACGwJF4DnE1EHvZzJcu0KgzWaZpt2UDv/HFjCV3MUxpwMoBnYS1QSMMC2gVXyrsUnpCFp+cC9lkh751EMSq3YpDnK87b7xLfMi9Lzl0SSyxxoAiT5+rSib5qE27fdRQv1HpD+jYi6fb1nAPHtToVZc6ve+/X5YoKlZDxmeFN/CmARLEXqoD8UQq837wRU/p0rh6EPgcDrd4vuW8nNlxtdir1Py2/YiTON",
"/0hjpXgNQPVTPcW8J/M5uv/2IHPRE9aN21iteV8/Pj5cBXbjOJNVLOA07mxHhw3reZZvBGg1B0uqyEyX+vZ1TribcLdyHms8pgrOUhkcqglIfcXe7rZ93Md8gGIafj8/t1oLXcL9U87/w7zGCFJQQn8+RSeKKCFWn8oKIUlEopgJohkvrBBq4Me21SJQfy/NMVu5VmQ6GqUJ9pjEEpm+m1WQHaH/kCuX9zlNAGtGtxGaQClNq2QjN7nqhV5FtRxh5SzuK5zSiiIRIHUyR/+It7B4iCzzrQGNb56F/9E9BGqIM7emv/s3jr1pnoYvJVWNXQUrDqcLMEQPODP/YSRfmWrP+vutr189VdWxSTrxo8RU0qy9QWfayeyNkK6rljDCSNdGwWpN3J4Kj+7hFHacg1ltTq6LqxC09a7CSSO2WKbcAlV+suHgwf2NTDtJd6gl8DUxag1+82gwjTz9HnxIUdRdBRsOZFKSKCZQ++jBb1WRHYCdYtLgtNbwhmCYSIWrIg/f7yblmN5q5hfqTu9Q1eXoNOvPuCUCugrIYxmyXrVT4Ge+jFDMiD8LfS84iYtnFBr646SWCVFW40m2lfsKLSRQoj9Wow4ODLHlJQ7nZaO50oURsvraKAHwQFbPZfpGAxNlSBk8qSvR1W44ezgclHJ6jONDWhmpIxAllKPqzWV1vlPLNv6xPfvq8Ot/VVoxPX9rFqZswdzIPRAMJD8LxmwchbCa2BgBfHTZh4LkMpM6C5SiT2jkeCCDcWsxr8CXTB/h/2t0AJpKr4/H44ZZHT8NhmqsZWyUeGOH4nCBVL7O6sMs8mSsUSuZ+10KMwFOM8DSfbuguNRIUgJoCMw4Ob9RZCjZMwf5QLaLckSX4C90mqCC8MPiKILowKHJZw9dZ5KuShwG8UE7CqrM0ZYThsIB8RPfir/CJQUkjsf5Wf8gfWXDmX38vjLOuMuMwzZg1Ef9cO7JOWgLAaH2u57jRK98AHP355EOZ1C9kjkRGFlDMoyU3afBS4g2UxmsQh9eqs/ovfOcobO+sLDzOWVM4SOBAsiib8OJvmTdhB6usXD8MF8qZQlwPc/UMhF6q/CS3IBKiEUEZv5qT84+qrrqGqKCX/rkkxRFXAtb0gt7xoBy7R+5xWhvtiFDMl3MOsHaMlTmJeyYmoAOeUzZGk7mNTRQaqD0kaM/ORAuwf+ZQN9fNGjUMTb5/Cb+sEZhI3AAF4W9Yd5aIyztCI/QXDeKZSG78lqk9sBAmtjkBjRW8pbgUTnNxHmSehn9yAJEZGnKepd2NFlpy4bwDoxznEeFySS5Zdf2477zTKCw0e1pLc0bFY65UWrCWVVANzrsbDeUGaE6wsk7+RRHm9hJC1xs/GeIN9XLLsbj+j5Qh+jkEoU/l9h/sJswg3oqlCLhWrTX5rcZ0Xllim/RxYHn0l2aBeydLon5Tdz8A5VVTzky0P+giMndcHVNG+F7FNOjUAf4dpbAevKtZYPTYl7wUp+EyX0nCoPimC6+mRruvQaTEwPg69oZ2iKEWCvyzhsn0vQ67Kv3Av1BOt2pa4LToKX+R2JnqqOv+X3/a1nfChviVcWZwAA0Gbl22jASXPRB6N2kyDbRl2hk/hb0vbYjlNxZRROzBB/GMPXME1ZTv2gBleeAivynvQ4aW3+lnkeqXQq3i/goONYkglMOSu9V/Lnui1VhE/39967hRV5JcDTZDTc547mlIgRS5/LBZ+oaqblk2i3n2NelwqdR1qkC/1Bl7301geqKhAPxHupPwz2rYi9lnvz7IEy08xg0lsQymyd79AVg85zcXKT4yKgOfU5R/bl6ieoN5vXJJZPmaD+E++FzoYZaZFVuJbDC09CLzR8Y8OJdH9FYold0xntTlpuUtLLxA6ab7N7JhFsvObGuAh1imfQhzoLnovEvAwtpXnX/7Qj2eJfUg2TU2tz5ifcpe4s07JiK/zSX1tyRU6yQLd7yq+8a1Btp4UsMs1QhGwMH+N8K8BqLyYAMubJ1",
"oaZeY0u/on9AgHKibwjukOxBR71oIMnS8ac727z5lMKd7eHdmuHPeihw/jf4hMIJKUMMqqcWJsHG05sM89o0TzmcirsRAtAOh5LtWeVRU/u2miJuMVdIpLV2sSGkwJ8dE7gzZ+8w56yViW3jTDpAtfihEvN4KU+fPLD13LnNq0bSzJ09bKX1tZ1NFiJQ/KH9h9uVbvzpWr1mJnlQwoW72oK4ei/8uptsRQ2S+IjPbU4IfNa7ScTIC3s+3TRb9Ii9lV33xVJ4jUHiSXR6/geXSeRM1G1czLR6mId8POBBELSlVZ0WCDRpGdGcuJ24ZJIVIhOGG2VpCAgUBToPDW7Eq0GQ87iMsdeAKIsHpEyhWwYuSH3XmeEyUTMrz4x/WuTVhdVIgSAmxLrHEjxH8Pf5NjoRsiwDBN7BmcByTzE/N9YJnGeklVPuKNwJRd8MMz34DN6H0xaULEr/gg21wx4oyzOxKVRY3AhpefcxLtoiGUTKc2RLn6Ncgt+ChPAFlUgkqsugnN95C9LIzJlTej42PkwQPs8btg8V6SeB0PrgAs89tVgZ8jOXkGhtMc04jW3MBcRTqBvSEVbPTupnjn0LXBfuYWK0EkluGPFNzFmBfDXiIHs2/G9+/0uiXlYLfD472+WwlgJQVO0VusT6G6/XsmDKfPS9RdgScw5WZBU7OpJCoFI7wNf5kO0sOroodBCma4nZ8uW8HK9sGsiVTQZFGL2vwJeckJfYMOAjMgVW4CMhAtIjzXKyRV6QeFkaw87gBIy1o/GqP7Sys2PVWtJPMuEhAXCDThDftSMSqRYQkrF9nMTWASqKF/jiRa+Ry8KxXKf2FwmSewD8YgfP19vgKAVhBZKaa6b/sQjBHd2EiIw3G/u9gWC66o8EeVSFAPeI6ul6ZgM5sbnGTlnj6OXLc4Eqi2FowCeYP9eboMdJDECMsioKDUwfXdIbH+0mPkq5pmjNC/IhN1TfWD6WUhaStpoNC5aon/ZV2HjNjUe89wdMjoT8vLukHV3wcv+NkOExHA+dyjIbsgQHWkvpa4JU6V2FHx7Tpl2/iykCAwc9092Gr65MJEhMVPx74SzdP6fyb7Z4KcStwHzcA+oT6GoYxX62NceJe952s+UqiIJs9pWeNz3waKq0quubWFY33P5EgtuJfU531/ysaJC7g40z1LLa9ajjlY/PXGt3o5V0mWYq0HYx6Ewhc+QGtlS8CEO7+4ccs76bHs37g5VqkML03GVVVG4Bm2ewaPFtKHZmVQyZf2HATrR6D5SjULkJmfrTtOgS3f1UpCOJYuNYNkFGCbPNyU4Oa9p3BcF8C20Oi10i36Nd2K1WPZ2H9SnJ1kzJgaph4B1te9QslvKazF7LJ9gWhpJNNSL477Ls8uWD4sy7QOC/UwiRrumhDco4l4VXEq+3YCyy5SzIXh7/2bc3KHho6cCwmSEXNWOtmt0oTyTga/19SIWbKuU4NEK9OWm1zwxSzo+w4Zud0paSrAu2UtIjLbwMaVbPucLbYRUJNRVGnn5FfWZH3uWlN0yAzjUuXOfyP+mtqNHLUqxhs8PQd02I/K+2GCVwx9wDTj8ZgofiTiBMVuH/HNgF82aYbk3IBWiZ4XlGBAPgiD1ABpax++awA3nQhCuG0VNdH90yxrTf9DxyiFXEtEkMduhV0pv1QOUwKloxalapiUfZhtJyh8XIpsw8nyGrL5Nkqji9bEc3OPNhJripSZrBD8ipn1361bs4TimnoAx4PM2sgAgQ9AuDFrOsckDbzXskpymcj17hBjdkNvUpU9jFIOUkgzHD31HgIQANZbLbp7EvkXj1+dJeAyWtt4cIRxZ1KIHEy5qpTalVJHaCOSR9cp7hZB0ysCEe05QFRPA0rUQLvRn43T9aevoyr4RmeER0vtYcR2swMW+1U8OV4k2CgT7ALtQSsuubro8QMj2NvicXuSqhwHch6kYkV4mLpsb/+OBL1TwMcgDIg6Yv7kTW7uUFDHh7UoY8QsKNPXcOq2Z4",
"vpVJXkjCr21ypAut6iNRKWkMMM9b7SYQm2pssHm9VKgPKuGQ18pkpHiSCtjrWp63C/uDCqk+uI8vi9W/H+1OAhehGqjtqpsfUBwaXI4HGb7VvpyLOCb05OscApn6oyOVxcVWsPMC7d63YAcjqWGXFw2pALVezz+yywJwxMLZeCZMuO04cj01AcBNRSAletHRXq3eBvGJGEJTQNxnJgClGqNszalBwlL5QAMcVDluB+BLqMbxJMlv5X3M4THiOHdwfSZ3qdonlgl/7Nzy5GqlpixVlDEslJkDySPAqFDp4YCCXg8VDuxrpMqIVhD73uiTGn39Uesy/gLvF6aGXa8GQgBkp2VDLjL0O/Q/xlUOSez5rAU1eQsMHmZqxr+3zM1zWRJ5rUE90iQGXvSDi5MsqWMwOxH/7BXSue3pmMYR/EenmSUK1aiiRiX3+XCsbHtuQ+x8gBTZnu+eDeFVQLAi3acQzHVmeGihpe1Orb5O7em04rB7LyQvNPeYX+knqix1ev3Uftmv6XJngerOIpfMu6sWIdA9xG/fCvHVWiHj2f6wQK+7OjD0Pze08NDV0QaHfB4P97glJygjXDUMQtvMWDYXjh3bzapGjjeyMenLzBajn9dC48o9BRv5zDSkjDwRBDcnTj7JNdUtpXeVaGHSEusKkPm262CEttVvpZ2nrdJurDFjxbHgAcUXX1rBjvJ2SIBtOA4II9e/zBNaxaW733jYAu4WvFGQdKpwfq8qjPAai8v+lmPEN9Qn9z+Q0y85xuQAMfOBgXDfTfHqSOBpeKLdi52FEr5nOlailAVxSorwnHslfj696/2kIKDOHAOQzi+U6owNhN7LnzTJ2xCLOsz+MFFyeQbrurLiLD8n9py+g2kW1uJzOXtBlCcZiOkdfegNvQlvSESgh+pRzz4zpXjy9L6jeltQ0pQtzM9prJP6I42b/D8PKzntpRsxBvu7jTlvKNDsj4Ax5oz1K+uIwegUiwDJeTPnKlnSEGnVjW5x14JBTv2JWmvi1CePUrTHcSqKaAg51x8mLpxVe1hKnQDASt0WANd1UZl0orgBiEU3qj/WlYfb0VylUd3CRp/LSAFrn+4C8rxkwQpFsE2/XoZeF/4AB47To2H0hdFooEgH6l/HCXUe2JlYuzmSCBFEb40/n3Njm2pc4yWqslhHGAV/WKE8QsopW/nz7FxVTr0rl5OQiWrLFUSSPLW7ajXOK+ND23EYVZdbSDdEz4lKTQ4zcZ6jx9VA4fydcOA4ZI2KIoVxYS1nC+LYtN0y/j6PIZmyPhKRRN5027Ea9RyMRz9EI1KRpwDeeEkZlVE5SAdhUoBVMRU+UV5c/1G2YFlj7rsheJVJP9eea0KdVn+W+avUWBRoyFV2SlAeAiHbosGNN5E2hk6xHhQYwqIyyKMIj/4ck1QgG4D5EB++VBOLuXHzvaB82clths2eAPsD91GUTCZ1a4TRmKTTB8/QFdvjEDNERb5+xwCWF5t5oxtXgzBw2ksd8oxZsZvpa10mMgSLrCVk7u4qO2TtcWdAnO9lAh3eDdMiHMq/AVBsn41al5oiCIGamCBfeJTBXn/bW5r8y/o0sxG+XTEYefTJrrPGI4UcSOAnXgwafoAUP0shvXp92OOGnZr7lkcoyFiFUZdOwcQVmQa8K1p0NOH/ItRf+51TU8ROWu538j47hqTgM589wBDNjaHWkW7HN8JDJdpVt14s7eAsEjjyOn8OIxEw14tczPgWYXtyG7fRooQ+0gUMd6Y46AszHyM7IsuyryMDq94GaI0bVToFUXsniG3KtmIhLFdYZ2c2/o5b4J/N1auCGOcToTbSwOnwGLuY1OJ2I+puSe3ddRAdgrHNOZOozP59seaEtkFfHrRS99N8ZMwgV61HuypRJKRubdImJS1BfgoMdYq3XljoR2G9ZVJxT5lY9mI9ZH5MlvPVDcd0UjcFRHFGleVxH5l6ZUVt6AZNnzqFvw1ACwTfsingrsT7gfKZFBJ9tUp8g7Ob",
"TVQ7nc0yWRfXzbyn2OAgYYl0ke+AOHxJb4hXds6D5LAg23X/iy7rxSj92C+4w9WlGFxlsgwD67JfT2Ix1enJA5hSAIxEvy1EcpAShgH+4eAZZ+D6XRP8Ui+LYT31i0cie66MBaIF/7JUz8RLVoTx6oOZgILGS6z4N5mdoxg+K+yvQp6rPa96TAHr5MFmuIvDGtfaSdfO+S+Xbegb/R8M0MXm3Zh7o85D547JtGyGbo2falQuqOkkM1Udb7LZhG/fJDLrBrNaCwsPgohdAp5WD+BNGt0lMm56OV+X1U0624+nNq/wkm+VrCihRsQSeXUUEPxMrk1p3pmCEs/h2NRAtpf0HYMMrubOJSGi2iLd6OUhdngF66PssrzEKzhFBdmaJ9zv88SzSA65t5VCvKOEwhFxbIEUktIMChVqDDu7F0VUX6UhaBi1CMvvOHxtSNY1Z2PYk7db/NbZbP093o3WaVA6LPWRx6VSPFn4ss8j8RWNhIGkM7dWkLAwhHVbhmCxbmkojej6feP6Pwa/G0KslCV8UZXimfvJrv4w4iGJcidvkEtysJX3jYA8t14MZxrMekq3hw9F/yY12PzMbWTfmdvuYgYF0iSI/F3dnnvOhtf9g+Ci9TNJac8HyaqQs+liGvEhhobmoey/ZPGJIoNuEbqEe0nxFb4YQaUuu5HRUoAqkY1fH5GOYRRoTakvDZxmrS5Fc6OSuUIe6wR4/qm4QCUcFVq0iR05kSCa/K20Huzp3jbFhNub8P/1ixmUYc4MVkldTIzpDxd9ihW2uHaqAN1uVOZWoBhjlvPRilvyOZ+FGJLc/uYrXxiqWrgDG3rPnGpuBflPdYVFnjPofLfXmpzZpFK9oiHXg5Kik896hFsCKq2DP36uopDz6dtVtEM+roLPuS98ABD7rAfava3ikKOHls1vcgdSUgDC/QKf5y+3gRaIJwRl6I5fxbkE5j6LGjATJsWA94Aslrrh02dOWUTAL7itp6hDItVyPC4PGZX+3m808VmlrTFUal5C4lE5tmSfAtbzvZ9Qr4YTDaDo5NE79TByT77w5KCFKwBAWs32IQU4X2Z8PbvhQ1neQ48sIXFfcvJ6KYuyyAJ5TqUglNL1qonh1sATKxqkOa/cKo4EWOl787UWYO/OOLqproYuNNNMZmKgojjhQk/KTk4G1DU2coYVchvGfhVnaB4smTFr7nwZmm3Jt8lI7L56RfdJnhb0lvEIbPyJHNVK1OveY7qXLJZLOzfShfHamKxztzGzPZVK1PdrIn/iDeIk7JE9Ju4YZryV7KVRFDeBMXHdPXnQspJaGrojk3VPLKZ7aH13YS62lo1N1S/Orp/KOuIaQ+U2IFz/hGkNHa9bgG9vvdfPUpaBBXEU0/K6+OG9Ekiy9acJArHlv/xoe2SNMz94tTv8Qv/Gv8+U25Ar+rojMDqEMxVBiP0DsDPvHquHN7pFLeaCWi5vBdG7fgFvvYkgaV5l9byAdIKC+bWkx1akXO0MyMdGV+SE//mSeZBj6AoohPc+zQWv7EJAo8R7WmtAoEb8alg99t8CKFhCJdQAP8yvctz2SHXwOWw5eBWlAo79Qv3wJkrsPVfKwZhj0z7ixTBirxE+aLUhjXaeajQ8OAP5LgKqEJt2UheofhOL0TOsu0tpiZ1uwoUhp9QWGOR+M4TvUnc91G0ijHusTzTmwrWyM6/dLZcYseYysOR9Xtconuv88LieBMJKeJtE1/W11BtvWCSy5kQbzRSkOtNQFQ3fx2TcMU605uU7LZ/0DiZH0XknbrbNqEXr/qbCPwjEe6UVK0yDLd7VEW/7BF4/FRkey6Om4uXChYnUN1pQ5mdPaN0RGqCEmNjbIS7F4Q1sitnf8T7yYZhzxxfguRxEFYOnzOA94+XKeLLnzSzLvDI24c+VOUBWht/zJ1wbv7ztJY7WsW9CDXoiQMe/RBQmiVXrLVU8OJrgNsslx8I7Ae2FXFtPaxbCJaB2kj9nqUWNI/MtQLTM30Z+O4QF",
"Hs5Z2olnyLbZUyWpgNzyNICoNJMSiqIuw6R+JD4fNkz+J16bp1Xm+qAHLMsvBG1XcSBu/CLcOf0ffhov+/Gxpfn8D5Kx/mjxkDI1WSCDJDh/Lav0UGmfSOCpHPQKLchIcXr1OrisC6sWSnk/pb9MnsVe9Ky7gOxReb551Qf79togbA0FTZG9bxsBdyq1Bt5LwifFc8ybR34LbyAiVysBdR4tPUqGhNkQxZ8V5lQfTETvr6ByqYFpGY2XIDciKxsbEYn5p+mrP9pOaWMWcRzrW1po5TRkt6Lj7jYSWtP8W5eHc93XxIxh2qf4BZePUxOt5tn8nKulHZXN9EBwcng217njHIkV3lxMFp4HYlq44BCvoMf5BZs6/nmHIy39xe4EIWEw59BLCgKELqDUFV3rkGzQrZVfGQrc0X/ycQvz/vIjcJGlokKdR0JIy8jnMJzwjbpIs91GdINPpBFRxpWDApqR8HA6qJQC3XizQDbPE+O7yIcjY0he4bnDXS4k5+7GldBBS/UvTi57Qtdva8nCZyxsZs+0JwgZzLOfIio7wnsMLTH2zy7sq36tPETjXtrOy5/KjoaGVtZ7cyhRf9haxS00GWpmpv5i9G1z4LB+s+QNBrdXnvwEUFz1Byq43+Wyc2szFWCx2zV5UbMBCIYa2P/1jId7Or3YxtCCWyHRx2cmxfjdF4zWQ2AANfQq8lUuCzHW20MWHQO7EmnPhY4y//JFV+YniqGPHjYCtfchkJCbfYssBnc0kBlt27IadmANZMPw+ZehoXHI1fYnIe5NjpUW5KdNbqsrXDFtn6CsbJ9h8ifHyFv+3OZwY0hurEgAWu6g9NfS0JFUuGZIT2p45MVjRUguon6KioJaZhfdt8YfuCpopVoG+vVybB2stzK/fiTzjdg0mzPokFdMfKr86iL4qwNjEkj/Z63zWD9T9/7tojenXtaomeletXjTSnWMNGkXk2SZiocXJNhyTt6LJSppaFwTbE6usbGYKWomSt4UBMTfVol+FgDztFi24GdVnKX6MUxAKdMOQuCIAXuFO6u4h3edBYQEL7F80WO6oPpVtGQ2RYFBTyIwAKxwAFSE65lNhi2webpKfEoXNBBcD+xgjCw+oBpF6nyX1NKaoCf9H/tcOgoVwSE03u+wPS0BbGPtvoFAhI6+BYcrdIMQHiUMd8psxWcy3LowpJcfVH4br4dVi9Oa6NB5jiDqWwLWSnvkZvoRKClDAs+Sq0pyXvgfu71p048m0obpaKPl3rww/3nIWfU5xpivfyEhahi8BdA4DgNSrm6OV2zIl5t7WMVs1x21dKEqFt+lM0sUa6PEb3SC7N37wgQyClNGNUrOS5Ce55xIU0wQcdiaZiqY0OOyGD65y9hs1yA6OQGjMj5Ufu0ixnygognd/x9yedk5ato1NLiL5erpMlkRz4rZ/RrQHdLQ7EhHrRvTrCVlD3gbYe684jsrojTftE5zBG7sTq4bMMO7wF0A9TOgRHow8/+ku7u6wL5W1mzO4zKCWje+0wqBmYPOq8DkO/2kI3bJ4YRxHJE79mTFCatQ/k05eDEhCO9NIbkh1vd8dhS74/50bUQ7xiX03wwV0Nr4FVnqEer9sbYr5/AKuU0O8UoYsEwMamtYjEOC63syWQmevUZPlGVyyqyKev2s1nSPa+qmtFjK0VEr1y87vnno9FOuaJBQP5yUx8w2VDcvodjvXjwOpXIPm8cl5ISIGwdmr32hCLjy43+jwwdtM1gyubzLjP6w/tw7mE3rPmnx+MLVnUQOuWT3UeZu+UJDH+XlbvhqQHBZ0oWwWf1HE5PqKpKRJTlmZ9LINs2FPxjEGngtqcS/qMRkXaiY+gevfouK6OPVm/3ljUBXigY2iMCguh3D9KMAZSBqnC6Dop3nu+0j/fCnw2fCBxoMXgyzwcxdVMvgIIzA//XCZi6Nsq3ObYuQmljySXIGPGG6qwtKvJWA+qXyyh6cTtz06Jaioq1SUiVyTLrhsWJn63bKR9AH",
"DIw41kXTVF7XfDZV7YTpkTD2U9E6s9mc7ldApwI5vHy0vHCW5sKIUFiSFJ+rh8uz/ygMQJ2FOtQYiLQIfrNO6wRCFpCw9Ftoe8XmVl1LGwpkjY6cq43yOCirhrQWYuEGQlcYTkV7WFEOw3cpYD1Ctu32sAmtv0R2/MGTin2oxC6nDo7i/6ApvFN6cYWt5ES16xdDBHKzV53zGQ+HkQT+9vQ9F11xcfM9tvpL3O0W12Xq4cu24Vz8nwszsyaiqWBJcNKKnaMnO4fidsdLUfmkVmtwAqtTMoS3+hKrn9VQBvToMXLdsYzKfq4dVtNpZ4M91CGRg04jxi9hMeDC8EBM380VcdNJ9Q28wKW4Ux4Q1t5ZTX+ik3Uorl8mqzG8kCfZvF0L2idcVv0PjZ0nXNeNklLiq5TzHmyHZplyql2Au45SwsBEVhhMK/KiThgZ0QtYvN8HsC1DC5GgU5l7ggbzsL9CAM8B9U9FGA32Vyd3P4k+k5MRi95ro0cA7fuuwfSRFoAY3CKZb4HHDftCaWsTDkSkqscyA7IXXHUFyQyhVNvABj7MSQ4064ADSUI/FfX+x8ucxXjPZ82i3k1erT51CTDezOpRGrUlbfBYuBxfjkp38wi99Tbs6zwSqSvhBihs0R89Q8ZkrcNwPBaV2QbSUIGdOOH81CYSoeAdv3thXvdTpMG0dYQgCKcPnCrkvBHUPhDn9eipKMGD0NoKTNIG0KWxkuOkyRgjA1t6++Db5Az13opKWQkYYrnOedHuDPUK9R2Ng5GsV929Y0HisllCwSMZAAtBTgorZo9sIwUI7lAbzSR/QaJjTAtCmnOPD9hOKLGsCM23ex9B/wiclZm9mGMmvuy/oDm2NZDmH41txd3uHOVb1c1KaKLgby95otz2KkWNbS9v5sV83z41CSwfz8cCknFlK50ZpFQ1coz2hGalTp+q9tJnZWHlwn7HAw+mbSVmG89+gLm8lpisDDA0ebJSdsamW+N+qtpNWVUO/fkcC5bs61aKJOkc+mlCySOnD6Gq0ENDj2mFYhDSrR7VJ+ThEPKEGxZNO+iuPj5y19jkEotFSCPyc1izkc1E/d2aFXMWJpYK5pp0DHE0lfLihb8IBcIaVQZli6x15I5P0rfXAwbs8D80SDvGz8WJxET/lU8rrPI5bhhbAbS4TCPtAVUUcZlpGuefLhZuZn3f1A+f2OJ9kmt24yalzCLhY/JdykD/FfKgEHPTFiDEqG0GZHtS4DGE5y8XdN1XZIA4CPKwtqQqm6s1l/MYbmiOW92mWhG7xUOCMEJSih6WgpAUy7CgcNd8ki+HmTyyLztUq8Va+CLFm+utsxaRn/OsMTQWw6aUwAIvQiwKg9oLSgEv0xMS8Sc2mtkg7KYzNC5EeaKvKBLHKarIj7vDVvnRbeqIAZbMOZtfiV5Dw53iWl70GcrfIK1bC4CoP7HmQpNhjBwMJpo4Q/jOUSbTmEp1adA9FGuWdy91p84OBhz+Vil4APv2cPKoFmBVADsgS238vYI0RMtuPPgDL888pWTgcHF8c5wK9BNCmvojEQ44AdHekWuudjItf7SXBqJ/BbnBVGmKRW7zwakr7tQxyKk6Lg8ilQwaJK7NGaVIauCttnxQzYDa636glu16ZH2jsY4hyxGwBtt5QncAZWd30p7QSrppwbQZMgjGZ9cN+s9DqNtk6IQ722b5cLzAtv5d8sNAaSRjwL0h4OGeb79mtbIHAfOOBebRkJKuKJPzOf1Uxs7XnCItb4q7uJHaatP2AxFBLAHLj7nQugiIkuf7Xo4gX3DGzGoAIylWlaTZtGLYahv6UZQPB3jxfqVl/v0cGHSg83M5AnkJ7PO4aMYjAZDL3cT3xZHlXg3/1VrGu+knHyK2UpD1DWVUsdWh0oxZFN/TT9Hhf0FPJP4i5dnLVJV2+2N2hDfzD+ALizIIrmW//wesoaH6SnGpWn+VrPzFvIs8oo9RTPfjn4lm68lXzHpMtrKfJnbjDFBiIISXe4Zz",
"kQDglofmrCEVj8Y7h33dqeMpz5So65BLBrU2uZEf5A1GCO3Nlc5/jJNGLm2OpHlOUXY08JMlyi6hCmXhkioJ8dQYV1zrUmkvbRAJd2tHTV6kko3aSPXf2uqHcaHtZcim7idk3vhu9CoE3oOlj4RWknmi3s2DiEw8hDGvsDCcp3SkPV3PcHxb5TM00R6QQswskJhTZwvADgfzWPKCu9E3fKUGA4NlWK3YxkDUoNeGM3cZr4CuLzcypw1peSv8y4/ea2LZDVfZodg1VNM27onim8z/OE3GwUbYTOjQN7gFWVPfwhnBexwo3mJzGDhAjg/5F9k4IDvUtk+wYAtDa4F2ONP8JfDFFUzq2tDXYyQBq+A6an4e3HafI8gkiSVNbaLQC7dpcRfp/ZMzFe+5ECnqvMPQbt6aIm7hFsOedYX0Eeqe5K1usk/zyWIC1mi0XCKsM8k/qrDVn8A8FKmCIMJ2C6PBp0pCvcVsu1KOTebLKQpom0LMFok/JEv0d5t8aCrFzuHXDX6+6Rf8qCd0SGZd1rIrkdyKckX8q9tXJEc8N8f9+rOFYBDq6phKBXaaduilCowmS6U+UdXaqL6iwoWhIxQWi11ePkM0/UWNeAw6Mr6Fb4fiEjNWIlrPH3VxK2N1nUEYvOSUnd/qSvBFNJ55nZm6zAJlvJEMkRrw3++ldT28TDpATCF6BWeDk6/p8firUTJWHiEd5cOYpteTe1llxLN5I4W2yKtZP/AkSUwueul/7eLQ8go30zTzmkhikDzQ+1SKzbo3JD2ZeeyzJQXS3/QR7QGYJoPmB4zpp2w7oBRtXgaECwltADYBZ1/70BI+wvUDPYOSaPNP5N5eaNA6rauVvMC6UhlBriA4lK11KmmBAcHGaa3l+frvz/mVytzLG9l8EOaccH7aBSa+lwcoRfg1jFuWcKXWhtyrr8++GjXqsqorozX4S54lT60SwKJbOw5eJrviPb8a8Hm+aWEYPe9E/NXNL6SlwJMM8/wHBRcaGDxTOOMOTaS0dwdb4rLcaTBA21PzqOhT9wZh4EtSbXW2731pgFKzMnuPoMt6xesA/mNp3/Fqu8k75CQsrgsYeAeeSZ4C64voDWw7oaYTmnJ27ubV/GCRbEMNAMteTTMYeOrSQpMtg7c4cukqS3UuuRX3lG5TvNJ1A5v/aaNoEJGbcHElE0CzKd44JuE9ryUzAHhuHvTMcB5+6UiaIXKxe0SVp9DoeWoq0vwVU+l9Hmmu4ZFPG7xEZ5l52Oh8SlcZsmfENQr6lpdNcVOXUIqQ/N8fMvXdAODQWhJuvMdu6g3LPgQU/ea9myb60qMHVJkmdn30lw21tObrOVN1xs+44NOtpZP2FW6js9Kqr4DQs98pP6kCgItJmxgeWnzHePoRpRwk7CDGh7hE0UT4W/Rgro6bI6OGW6qTaxcZPHMGYaxWmWnZKzeq1dxTeJq4MB+7Tm2UgdWC9Es9wu8hd6dpcJGVlQSjDQOW7YVHUPTBxuJ61nJ3BpIZEpJL7RaMwwz8c2EZmrfJelPuBN6IRpAxxr6iZFNYTYn/j1UUD7njtOlew/V5h0/WM+YdFe/djMQg24K/KpSscjYmSVsQ8qeCOXuQ0+uMT3Wxp7YwS2pF8MzyLcohcwNS2Db77FlhkJSf5p5/sTNnfuznNZlyhIyWqrtdEkVJhvRIhK5RvnkOFK2EMcFtAkRIMAYNSM1QtFJzeX9AyGwxX3VsDNXCh/XQA1EMwva0Oq5GB1nHEderwWnDWrKV5LtkzBXakP+6LqxjsIhIVJdOeRKw3mwdBlkjybPrPbLbx3xz+GER6j3lNbe0Yq3SX1GiSkKdO3HOVj4Lr/I8eDRJ1Pv2gQ5FEfQVU17KXmYmzC9y3Tk9HdVKk2v2/OmyeC4g5l+r9iW67ARu6VHXGEjC7OZYVpO8F3D8oQC3nh6DzjEfwd+XVS6HPFGjxsM5xvqd/2d6syjD0JlqGSIKdJSHyvfWIH1au5cOOPXJUB6kC2vFB+lv",
"4BsllbM52v8PHnPV4kEZNMnOiXkaDyJTsE5LZE+nEIT2Qbv7yBbq3DO2AwXOuEmN7cohIPuEOENMmkxKv/BfPziZKe1g4SBFwbt9264MbyljFcLwvTGPYybskeUvXOy4Jdepf0kQ0nA/N7qkucpgjBPR1SxXVMhYNoi7IQBPY1EsCgKWV7f6YeqjmRQPvl5AzOtZ03Reft3K7msmk2t6UzLECX1q9EJA8OrNgtGjo+SUGm7NcwSO7qI2FjXESteWiTD54xnQpERizd3zbh/gaquOTElMShT+mOAxwpFjdp8K6+KbNTvoSuE5yQ1coyPBE4JI+/OS1DsJ459SsmR4qy03pvAaHtkzAa0g3OfIYAjqexrLGKmLUYstfjO2CdqRUKlJGfYdY4n0XIR0CnNI3zdzhs2U/PUzSV9hSG77da6LaWxco/9TKPLWBVB+et2I1ejEZVUlhDYFLwq9VmJ27QYbW7GvBIDVH2kox1UgKvBtifEHYoWnnYzLWnxaWODppBh1THDMl6VFVEeyxg1SF7NAhTx99AY9sjbzOewn0ZMz7lbhx33JUrNwLhr3FIQeoXhd6AHpuPHo5hvaTHClZR+Tkj3TuQWFNWh4skF98Ij2h2MQ3DfIOa1p0MmfQCZXPko97g2O1Kk5F/9nPtsuu3BY+RmE198C3lNMY43Zlc8LJZydhvPUncCtePNi6XeiEfaOpQnmVUw6JO6g9hn2JZdHePoCG8EQDqeiiC7d6HtG3b1Bi8r2nx/9+BkwjJEB90Dkddx4tpKwGCC8mZQhgvfJi/QkFPGL7m8f9WgAHhjtBf/UdEu8pWEkcWPHP5+K17Neg2jtYyb1Y8xRTItIvfvGDcsQt/KN6F27XHVJ7g3kVCPrjTEmpDpRIwwWvvDYFq6b2UiPxVMjnwDd7mYYiy3Jg7Er6Hq9OHP28npUC1VGGX57ng4ztRc4qJzX4q6tEWXiccYdnTJPH65z1dGtgukr03b9G3dQiOmEU71nM1MNXmNRWuSzxuuFMznxkL0mwmSj4W/boe+l/c4ompWaQKbm1F0byVfZtYiUc2Hz5POnQIFZipyU4BEPLOXN/c29lJi4xaByPgju3PYL0p/DpR7haXFcIq6BfFDojHU5wztyPdweB/+Jq+08L5acBZHSGAJ/amzcHqB7s3B7d48FepVM0eM82ykCzxYRwl5ENIgzF3w6hBMA9kk47dQR4w2SXGsEj8fv10DslPnaPzcFTsY23xELRjgHgefHWUQ+vHRd6MwqQKqmaWpug4jQkpsBs5NCNmahlaAyqIoWB7U1wJV5dEHDFuAAOw8zDVJueSpGtistZoEr65ADiNEI779FT3qq5AWJQ2OIAQXlM3nNtG/Ha+t5Td9fNqYf5A1YBW9nd6vCb0SZuYOtKV6GQYhPtguK4V0IW+HNOOmZjByoLBAK67WEfIj/emFu1M/YAZBrGuyCOcAgmhHkmXkunPY0HkcVe6ATWchG5AitQQKbAzBd2ebrkDzH/LFOyILsCRQcyq8su4vQwiwMvhWrqPLbnPzZVVE3+cq/gcE7zsq+FGX19ZTil47i7+9aFiBCqTnnF/VfYkuioDqIsBEOFlq1vbebxNUeTYY3XkwZoWxKjDPHYgnnKUM44y0KbAb+DK3S0TtGV//T6ppfu40TsKhs+PV00bMy59IZGciqq3sZRYzk6Sgh4VXQAYzMLRkiqp9zLtOTCjGfMvg64PXdaQpN+PbonlqqPCug0TPD6gKZWnGgmUyEpdwIb7xhoNM5Ic2cdWyAMIKmagcmhh0AS30v1/aKCZMagu9tsScEXt7vnkxrvZhugza9sN8mN3SzJzw2OqH+lKobgMV33RJiMUB0HLaEn39Uxa/wjZgEBQTq+6gGBpBclIeOtRgL8ovQlRaknrH/sR9VQ80LGtBuGN067WQkq41rt10/7/aCenQvMmekQco+6wjtB1qE94Qx+Pdc+EQmzpRTHzRoxn56J+q0NBA9uN3GZxiq6l+v",
"kFHB3IGTMHniodTZx016A8p1S72An4xBQWoGrrpTFOwKxPUmLJ+pVTHm1kF6/RZFdx0O5908QzeTAyDj448WLyRzLw4p+t+KL4hpPOq8oigPmlb9afsxENRq+aRKAo1MZ+JGhDGRhZyK2rBGLSYs6+ijxSjd4uFM/xIS0p4RumPVgvgCs2CIRwZU3F1JDUi5ayqkhV03rmU16jUJgY5xf+cDrFU36twCCuBtSvYIwii89kL49DnE/RcQK7KxFD48A2QXUNVFpfltPf8hmhps80H3S6tnl5mJKq8qCOdGE3QXRP1aGYWqy2i/xte+ljKSYo+bWy3SVRY1BbzUuUm5hB7Y1n+8WvyuztnwaGTFQ6aAiVM03rM1Cs0ILAgxrcLZdbq5C3pvZLxVJzH8As+AzwPkV2yFz58HFGNCuXRNAPF4EBZUHflLwOGuNFcrbJAO5RuA03ke4fx4N+vs2FnpA/9xYj6HOE0I3VexuJubtO0l85jBFsrpKVTw4OIkLlu7IDpsgcHyZM137SE2pUqL0a1vsiS8uWXcZ7rwjN1vFx/63sVW7MfpyY1taRqDPbNl2NnViZDeIOcO1qcdbgExNHAcpYeRRin1k5VuIAhk2noTWMh3EzrI83VU+Ha8zxPncMItXxWtQp7zkvzJ7l927IJqu4PSDOaNhX0i6E3fpe8G3OsySGcgPETHEG1r4/L9/+Hj7tycE3ue+upbu2vox4GExwPa/5kQaU5kwg0ucSRN328Pp2tlB9dXOdupb30utS4L0q7gj27CtbcKtNMXphah7g9clZuzsCnD9qi1knny08BHBuRr/6HBB7WOSO/XihG/E2tHSudJDBzVdu5TnDEHwN5zj6WQJ5mcBeLTuJ66Q4zdWmHxrJ4PEA+3HDZ7KvVVCxZaL4d8b3QvCxkZ2AuoW5S9kVaChe5aksQU0g3EStWerxJeyShLXeO8cna4YQ1fZMogp/On2oV31UAkljNmwiU6UVXEzkuEPfjTk/BQkhzEZNxI+Gb7aIxehe91ZNWzKqFRqqRY0uJS/Vl1EXIs4hof6WWzHd9Bc7T0JIdzEKK20XdJD1zRkG+4eIeDDFB0XPzc9XtxfaUUD4kfQ/VAd2TIgEaEOyugYck+52id4jkC0wO2IhaE0Y+Ky8kgUVCRAH1YNNbgICvTEBtMSqOCot5tiChutCaBWocvDgG/u6u3UqU54iVdOjyF7NqNidKs6NPphgYoRluMAL6LavYh80eSR7KVBtMRSR4O1SlZeSD0iczOtLGp8aIzq4orBKXDhFZ/2hXSm5QRqUPhKwi9WGUyUGeKuhaVVMngbMxTXXY0QHdMPNVKADuuTF5E7uCcHY2LeVtg/4/6FdEqh42LPoTv3/TusFIa2o6fwPbjDMHhK22R5X+eSjTkMXTtxFX/chXZp84W+9Z1m5KbNLjlGnjBnckMaJzsOdNvUmZ6YhsvceSslEJYfHtNmKPJSjcJQxbqzgXvy/8l1anRBF58yEzvgco9G43V5JVXE3ioX4pqlw/jGqVTOeiZ+y00XP7tQvkf5kT7nyV8GuDUbvYUoylH8gLM2goMIGCkFR7fLTyCsS0Z/UOwH+oC+0MpHhMs+zwhpacb6k1d4rs5ozmfXzMZ2o1tUhrLNpuQu3qV0mQMmdVJVN/Qnr4XLVJKpcIBYk8gA4G9XBpTkns635f57WSF1pa3XVXxIDJsbB2GvhNBt69y3oNE7yaX2zQH9AfBa38Ek9d7GEWDgMPAXXXOE8SBxvT4UUpxBd2OBpMeZx24jMhvYFRS2jT1ylsjszzmIA8b+esml9bYJrt/16mUcw7Fzoj3DevcEvvt/yRqEA6GNZiEXGE1d4EPW5sW06FNaka4M6W2aQJEaO/WqNnE10PHDQrzv2nGyqfQr//qkLa2mAS2srmBNPguQG0ULcgH/zOAY/0/LVYoRVyia19ZDv9nTaTe1bMG4NYOKKqGJs428KcDMWYf2YZmvQmy7g9klbHjlS/OnWRm",
"yG3w5bmbMJwmM6lBJTVS1H7StehSd4qRxZ4zkSYYBOWE2EIQ+rPP2mM5FUrVwt4wgPxwiJ4vKZdUdwnJ/x+I1RnTM61gLOwmVSUHY2V3y0JVUIDh0QsxFG8VvVFrEemaTKjKsKtjoI3hswy59VzgqOVfVIA6qftma1DAZFcNVuLxeMnuwkp/YVD2BO7w6dqKSX1dIZygIk7TNEOJmka4I24AgK8CY1au7v3T+syltQp8vt15p4ipAvxxFy0Kw6z953Shr6cmz/yUNHAwtXi+EXPz5g3Y4S/nIafyplJKPQ27Z2+DXnb2fR9NfqEB7PiM3bi7X5wZN7oZcgpTQ0X0isqykUpK4cZfPWARpX54Uy4FMpTPj/bb+G/YeV5vE6Yzr1Orr8hFqE966fye7erbP8KbDJRPIvJGMplyhgVbBOLckY1GP4FLZWCXqgR+HHiSwq+od9oEMHwQaHWc+GnO/KbXuOrSCFW43zrzHaZwirZLH8ClRgvU4fLAZZA9ZZIfvs0xldIFyr9iTD5kidrPmax5XOvXzIj9P0A+N7479UJgj0dx/iebPVn+AQfJjC43Ck44LOEDEBdUcD7nxrv628E2mezMXWq06ivAZZBExsi1J5+zb20qW2+2HioHjNJkV3+9lV13W4HxnKBBwJpC7GJMiECKsV276rcP2+qMO82SMC3H1CvQI8N1qB/ufVNCWrsk/V8NIYAyg9oFEZQ5MblGs+EUzsgy1NUTxST21mJ/BoKwleEjQrlGdjMttaXRKaH3ufaWokoel20uQ2yEE5fB2EvY5JbtlIQA/F7Dob44hj+Wy7AT5uMEQhgeQS2snQmFWrhOmppIG7aw4/Q/YvO5CSFuL1xTP54MjQIzsV0ELGAshmuhnS1+XHKae9+lcN4bxFtCnPRtIF38aGo9pExJGX+PPpzX0c9/qQdXjH9Y1hKlo89wWKP0/b0SWFhZYyVT7Nfh+aNb8HdI7SlP8ALwAoNl4I6mKHvBvEwnaEBMGxrydLDahNTJgFHsuQQWby5NreukBrqnqy4igXMP/hn7PjEyzo3AX4qSxLx36BXgU8/tI1dYz3Y6WrYEusN/2oQ7gsGfpzSgzNB+wcY36dgvTEC+eyhNbPFCzfIZMlI1KZZpW27eKzaZzQQAVd0vGZObdukYbt/yfWciISCaRwt+x2nmafhayoW+oCIrVxvD1io8LWCnFH/XTO8TdmkTa+QrDaM6yAAbsAiV0EoUfd3SraqzNBVW3cORq31Bhp1ZFT6oDFU1uYE7RyxIzC8y8UZsPmhBlN/cKj8BFcJ06g+b32CzXdrWh+NrLoPEcYCoGRPCJQ+44Ohdj5w0+Br8MCVnYvYAjwV4XssboJp3kHjlD5de1V8peZegl8oP03L6o5XM/MqqCexkWQSKqQuJJbMrHAoxkaE7gEL1sm+870cafoR4FWoAcqOszeIjY6xcshB+4cZ7Q2fgfrVPqNs1EGmZN1dGxit024YD1f/BFf4mzXZdK18JnPTQRnxMUCEcOU6oaldSTq2QxJbZqJleSlQrJApjaZAv1aPp1f8Aw5qP/VbzpmvaMJkqH34eiugS15k2VQML4e2z9baEiLKivZVX5bReSwWPnPfhI7uNlW9QMNt6MDqZcDIqM0P8PtvpCRyXvEoskqW1YxTbuVxporlba6qD4jGnF7XiOUT+OSZx4qLEADLJY7db8+sHNfSempkcCpNgzjHqW4Z74T8hdgXutLt1e2+B9GzhSosFprjUHlObEMQyWyiQZebVjYOGPnh11ElfmbyF3Dh3cX7Ol/Jq+w6I5+mza0N9mUBr8gl/wN7PtMnyy98hWR26t2fP0wVtCcDH9yRLC6g6rst2KZl4m4MtgAfyR/B6G9cpvt/Ci9UGEnVDmdNoiG8s8Xy4IVKVS2N7mDvmOaYZSL0Iqyuuhf2L+VexfD2SEuMpAMizgIK2tVBIGNn7NdRFHVAjOJRdc87BpfsVfw1hoxWh/XXwBPorUdoxp3gz",
"2rcuxwtE74EgyI6l7Z4s17fDd9uutseetL+vpI+D9MbX5OMU0BS/vsJYMxllEtbCcQ4/M7GNx9Z6ynhRSsB3yqr6wMKLkQGBJm6Ps6i0bVpijo1YBo4/CeQWAx/hSWWGgF16WsyHNl1K2lXDHKRJiB/3nAdBZHTLbTqVeqCvgPt+AsLms+f++G6A/p4zUhllWEKbaVgZEuxZXvXVAZFv/i7Dw8RsS+F7AIcAUMQMryckTnLjItkwn5+5J58ADMAzG/fcSDPwmYs99H+35CYCVgZEsiL1npmvIPt8jMQm949PMpPnYI9GY0jzOQg0aY2EKq3gEh3MZ8qtHY6CAI8UGzp5neImpT7oPQvq5QEDTQwUnYMX1deEOn6JbL2nKYihxSZLldESRALbvSt1IblHssaJ6YUXkFBrTKZeUnLnScWX/REKdtpSHyexbm4/zyFnIv+EvHSDepFk1RxTY1LSEj9t/+tt88SQ9hwofKSsL4/BvnesF9yXtZjqJ6VA8hzwACS+cFwMQ6BpHOFyHp6Qogdl5+w/0lbkdYbdJWs94HOsY0t4VdXn7QBPma2rz2bK/13bxlo81R2kmX9ZCfxXo6QnIbCVHEvGkhG8TnjvHK/MV+iHSViT0n0WS1JktM2a2E/6xq7PQORAOQYVaJ4di21b0uaJrkcl8sHQ66mSC32eJ7FVHeUJ3o/cmN+6Uol6FFk2vFfPAPykq0QBLEfd1VpJLPWXamoPu9bWLRFUzY6GwBGoekmu/b9Aqe3hIReJbJXKK9aYZ2gxB/j1uK6RE3xRk3IlOnta0l15sUAvidCuhgW8xGmwdZ0dSXauZoqrlEZeAoyfl6FxIQulgvZc5v1zKVr30945lwPhfM9BZ1GiQmsA1ibt1LiFSSfP0y13L30TK0n7NcRJQHqCeX9adMyaf2UFF8K3d6foPlXPMNYy0TBE6Z1pRv71/71I0rXBcSgovvfyhUqxvx8wRgUBO0e9l1uxjr962XF0OHRcxzm4l4icJkarvzVJQ256I4hcCh5baNqY72pk6r/lgoBR073pLUolHzL6NxrOY0N8x+BamP/Q4JvFwirxJtorz8Kq2eCGmnHo2YRYSRrWq3sC5FAWu4d9cXg/FAdGNE0JKE+fU1KgghlpSWUPmqmTpItfJAtkydiGYmkCey1A5XzrO20F4VnjQIo2DQRjp7SPdOzvlMHgiZwP6XFzhvBwFYconmJro2l4ftGE76Z7j1jLorm8VD+TRbjg/sjsvX7aRsOnMbavmGCodUotGGolwkEcny1dbhg6LweTiV2bp9RVum64v0GimtBjr3eAqe6Dwjc6/sm39TIA9Fo7BWalRJ2Ve0uWYXDfltCKWtBI5EPqmK1z13MAj53++97lSGenXj/DN/OUBxqsvWx4kQt8Ue7PBUL/nTulAUL6390KCwO+0z4gPS9I0qveoZXLpKg2/0/A3EUmeSt3rOkrVlpdZZlzQV64abskhh/lKFDtJaM0FgUzGCD3AxXxCmQZDcKfO0ROtPwoHLZRi+ajBN943x6luE9FqFHtZh7G45mL09po5EEWzImDD4pZtwz6FxvWjrW92JGi0Uvezjatjf+t8DEGOgCDhl7LqDxvon8l/MezdTn+oq7f05ZvVj+//wiqs7A/1ZBfe/Fpco6cQebJpz7Pu6yKjJoNWHvQoNW3rhje20airaRAr+MdWSpufTkor5/o0OFF2XVah8OlRxXwEBxjlEvS3X3KAyoojVtCyKHNOXJIZdgM+YWrk30VGhwxX59WoAxJb42hB9LpJI8sxuEBea/sFi/nQcO2hU64lklm09WSieOuqIQ9I1u10bwUGhaaFToK2GcEx7xBjPB6MX8tLMvQHac8HjbeBf5+Rax67k9rUaTH3xhQNEa7v/Vzyynbz0WhaIV/WlKB3o7AVDtdhqThIkSvqJef9ExRqanab8XmML1EabIYceSXDXzd7RzKt5fwOMjhRaId00mE5OeGKrD9oXOhquvJJwqD",
"cKh2MJll42lh8VGuWpMqTB1/WnQUiuufbsvPHteMVwKtvTeKXgzieVGa4FhTkFENgRGNUpVe4x85oohuUEqIms1X0SkkzxN/1Y+K+iy93cErTFvErloOSKzU0rkM7QRa0yr4F1ijZzVbkSxxp7QxnrMfWgPMISpE9oI7LRjJiUEoSH1bHKk12pA9+wPahbEEf/34OBw82GWRfAcwBqSHr30lfqqPCX2OebJx0WxIgdGIMWqH6sDnujVxJDw1NReW1Vk3S5jTTeMrKh3LJFpIfpL8iIDeXJYdDiqtfti9Qn+gXFRmANFF6C10zNNdya2Ed/zwo0obdKWmqwUMHdWQ69Tg2pIioJa/z3Zg9mvyEkooIBDkZCzzSRxQpQJYpICzFsAvMocxMzm8eW7+TpFnj8mZIUD5AiG8kykXLNPHyd7f3Skyqbdb3sWc5OyMzF8ZPTDApdbXkPl8ZaRoB/txXBwyvByhkIm22eR8gD+U/DN/fxuce612xFHdpW0snF5XWsqDDrJ0RlJHjR++NqBM0YVMFPkB1swqS6Mw3FaJJXJrOAYRQuL/v6iA3z92LZXu+AZgweY/53j+QzCK++f9h+NpwLsfbbqJSBqfpfoDFZJD4ZG6N02MUcpmnV9FX3kGoGaLRMeJtqbIzR96jWC37fpc4rDe6HX9ZUTBHI5UDc0eW014VVTxnYV1zV2/mYwJ3wgWKa49/XONVsOvw73X4VK6UgwMaL1EVUNsS+pJpjxa+scwcp+V7KypOsm1Dw0e3zqoZ2kOvWJPqUvErWPLVa53E6WJtHznQVfI9yt8mSEIXDkEzYfBD1ErpTX/NJQkfeahZHrC5Qt0rbplbiYg6lL68vvQwYsu2bQj5O66h16XjZZjC0krOxDm4a482GW2bLbFbRwI9LOK75ChhTMwiJxtFfRLKR3Hf2/OJHmg1s8ay2slbB2dWxU5vK3tNdI1dSMw/w5bp+/YEnM0St6qI/DEs/Ca3u2fPe1+TlfzZZqfiUlNVR1DQ+1B3Wl32RBl6MdmaAF7ywBvN0c388dvYI39JHkCgtI/6q/AFq5VfICoTR2GOrw4QzCk3UtD0ZS1Ql2o3iflJEBljbt5TmPIlN6IVXzMxQNszWQntckhKzMXvPSg2ZwHZUyecfa4EIkW8kdz/WJ87MRUe6jjcOOI5VFmwRE3gMdN77RmkWy/PCKXsap8+q+WHj6VFeVpE82vRwNOTSiuLpMNBjOrTtwczrwMuXy4ecuNrwArjNgokicfdbIucEnEkcv884eWWfy6Mvu9A5VAqTD4YUPS8rT+R3sBnKFl5HOv8D5/akiCxGn68CKqUiZEHqt3/XOICDRYn1IOQdCcgTo3gnYuggH554vOlxKpOELJZNVpWzjNY+AUMMVNIprf6YRUoTvbN91UVRkx3txOUcZmHVXv9ZaHlnCIXGYZY5r6lqhNLngegsz4fahOob5aUXMdoUeg3L0xZYNIlEpCVnQ/tOeXOiQCiMLUmjBfCS25x/bw5XZ6WZ+CrGI99U6NCb90r85JEQUvmGprGxNvBhWndxRT9wEUCylWxVZkSiucNs1OB2wFiF0kMsrVFyuGztgkiltsapejKgAVkaQ+x0iU0+O/AUYLDzxM3o8aKf8fWuYtCfBp2WI/W/OivejHBsVAlpf1vdQzFXK4NfsUVaj/jsyijoeOnpfYJ0W/NbIM46xe+OpdFQsRNEjSDdMibRkuxKMpZH6MBblFLQvuJjBLPySNjobf8TegwQ6GSJpbNn0hoElxRHSTu+NxLdJU5U/UIzcHh11zDUMl/OQvuUIKVNCJ78HQ2oaKO3X/rr9sdpAGzdQQJdCZo4g1LgrWXEcXVl70/r/6T5LIst7HLWqi/rF80iATtOzeyf2tDkgFQwWTKahYz0wowpleHsQoE5bJPgo8h7lYct2R+u8H/uPxMeplrQdbk0PB5cEI/sEJL424R8wQ97rR6N8oixaqOlgXqyWjgoBOum36vQ+Ct508vxCB",
"FqXjsa5EcQEGX96QePy0vsvP1PsUVvJPwljjAhNUL7wRGSBBYKNl4omr/fivYz/8NHmSEmR05BqkGQfTr8PoaF6ARlJZz4BSaMIPxnlhNp8g5TioWu2uBSEDdgJXJQybKWXEhIxnLSAZ3/SudCek1l4oIzo3vU29iylCPy94smkGZJqAeFU3P7NKn3UeuuIJT33/pPlwCpcRkW+28V3Wn3z1zVvoU2D0pSJ+OxRGH1NFhxCzlzHa16ByANhVg+pjuG4OeHRANlYH/1VaAooVPsFK3lgFkL+629nulR0YZdFYaneMb1LTd6vRjafBvWJzfj/VnsQEzxCNavXiDuqU929IxrnTQOolDa1N7X2jwZoHNPEomlSTQMBn/UfcyCeUFkxpk1f6SNpxNOjzAHOx+BX5GoA+jnDhjOz2agmb5dHHf0VxXFJo91RBSlBVE8we0gm7e9CRH9rvT7zoCWPXZt/CrSX+IG0MMBdMDU2yv/JomFEe9zZTzf3/rARX0xIMeWLaD6DWd4k+z0g2pbN/7VuvMSHaL4mGEmo+720NfYOgt7Gr4SLCiywfxWpN9o1D0774Dxat/+IwPgA7l87T7ctnsihVqmZWF77mXPjF5/+Mp8UeFnot2XgXqakPfe5l1xRY+jezC3xwFC+gaKFkuyUiiSCPnHHFO6B3RKekvj4xOlzkeNPCg+557vH1gCo4KwN6Cvz8jX8yXWH2XJNUSrC6acqHOBZRqFtMA2rJcTMA3IJoCHbxuh24lFIfwLj1WAIA7JgI/VX2/SXMT7RfPqySQ8ICN/iFgiLscQ7ByMwSCr48G5DPuMCCPzVOvhBdrC55aPWNijNCoO4sOmxE6FBLfuU/izNOxyRw79yCGjbp8NRl0RgNmfAaIG+iQZgxr/57vgq9xBCAwyqmxhP8ExO0zLuxNVnSeb2WTnaccCVEqReoQFgcXPgHHafx0nuNdFJxj2gv/Njv7YH/8XBrlFRvYMTliredPo6srYsTNmrTON0q39AZtstdGEFJK0H929zT0xXqvI0pkTuiDTen4KEPR2oiKodQ+WCdI4MzB13w9f3K175ZUHk3TqdlRTBorPVEnnKIzS8QTHY+OZBcvwgStPf1Fs0H4dOF8t/Rcp4uK+PSF+TO5nKUNzUBIPT6aYJom1+GHE+efp6SO+9N5QhFXx2i7b2pUSkyoJumlGH9dxRrqSQXpp3ryJr6BKMcozd8UMQ9rwwvtmCUnvNqY6AQl2x5WHo7uqPq+CItkVyH904D6otnPs6r0yipdRliy7aK+6l6agaJgs6/hu1PR3kGg1dKa1BaRBrkP4nKE8RyEgnO+BBmUf2jw46tehgS9aJDOou6WL5g+uRajPtF3g6lPzqMtzvp/pPi2xhG+3uXpTwMR06ZbDe6jFSO+RN9XgZAqe5OKnSuLxiFnREOiacbejut2h1Lbk7gWa3GOPIUxBzB6hKeAsqoxPZ9wbp45NmBrjAzDuHOddzSKtPqNJRLFq/yF2WeoEF16i86hLvhazkcxsZPaZAyL8supoLT8yfjTpbYXRWXf7M1Jk7ZHMXul8pFhi6pnvUiKwe7yF+2r3gp70zvx2YAO+6Sa1AUQsiqPFXPro8yTx2xqlkhZ0S1sTDt7Lp7v/3DHwM4pK1QRY0nSiU6WZVTuRr1OWybjSP6lly2TnQKnk73c4iOwQFvTkCu/ZHkSdvgpEJi0YnaWQhmhR0ygT/5EJDWx1krv8o7h0U9JvjlTOzYLgrsIbhwlyXC60aMhzoQT5mRBjh1JjWKgFZ4bVFYFwAw/g9n7ZwsJkF/Uu6DgwRJQJLmPU1/Sa4vNohqj7h3Ql7NVpPbIzrTXSHGBerJL3Xnr5x/07bJJKXpCmwUNOuDF4+a4sb1VCVAv7sWqb7b6EuSUdDX2VEWNBgRLRdshjJvpKYuUD/R4ssVIJhbG+SOmQUabD2C61wSq6+CsvRnSoxyBjoHFPMiCZ7n3w4hhxH9nyGZoyARQ20QKe5gNQbQ",
"gsPzjab+oBRMHHcZOhG6kiFC6VMueVWbUm9lrkbvz/ZEGoQ6h/qOIee8Od3/fQhzc+KBgudWaBzDxIi5U2tORehOdZ99EjCDnwzHgP7n557oAqhxllYcE5pq984M7vKLgD4XB64JYpau0Dh8Y/awky8H+tJ/CLYjlyqTty8cUYLrZ+7ply2LfRM6PJnUOBwJgDJM5TEtJDsHYCW0B/TIdMuJKIquuqHK+jx8NRnhHXw6EEUnvQXAVTxzSsXaleiowaWhgUfeyt5LD5kGZ87L93FN9IJtLQ2gBkx/ZxniY6WvE3kmgPyDox6R7WqKC/Yfo3WvNq5XgsmJbwRH5+cPGK+2wrKGrfoPkpP+/a6ujIvw2cR/z0tmwm94xGx5WJANO3k9T6dmCAGlpruiQrhcYBLJE+CvR4LUKObxdLSFvLoHEAZ9ZcEfVSnWGU4ZYUREW4CnkEGVpV3Fzc0bZXjLNe5BI+gE31y0ht9U75BLIumwS9IxOnjJtLFG7dnGZuAugfkQl7KbpnzvVuOBYBxe2eGRMi9SDdPIQdUonEi6CJo+oqMclbFQt5Ks8n+uasN+h2Ex5TRz49duVdBAJF7s40E5XpXJ4ghLrbKdWlIAkBT8TZo7f7UXAuyj3KbOElTgdd7UlG8zpeb/aPUDEgdYIYiE+wPzFeg240JP6B7WxVVWL2oGavZR4ipKUQHneccBELDjCjlHXyzwg03oP+yaoxJ15J8RGEYYYbsjg9XSzIhDumPzhbXKa6PBJ7s4yLtI5zLFQrqwadfxWV16PzZWyvy/Zb7qg6LVNkfmUt11bXlTHX5+mpFoTeHMkPJxvondbOk3lxz6NK9MubSNfWQabGj4bbLaAvml6TQ0CRE+XPB90NabXPOseZw2TGbFxJKWd21JWnbBsLw8Ri3+czbN70fnOJ0e10+R45hjPDukXCsik7eLM0LEUE9oHeeH9lQlSV6Ivl5j6pYznF4qPiWzjjy29UyVjRT/d+bzhgv/sGcunbci8iDL7jadfmhR3tdqc4XX4WTc9OqKsNt2VCecPFplWKSW/lVBWb7rZVTX1F5L0yiD1gFVuSWZsOFEeGo4qDWBVN1+c9y5loLfeVZ0ySP6Jsy/hpznfnV30nm1ZoI/bFgdgBuIpL9zjY4OI9FUmRMc/EHlRsrcUbxUtXmk6TGNDLVVrPM79ginoDG9xW5w+rpWG1Ce1E+yDjF4Kzf8sve/dQWVSL7UMBuj4S3DhZ/hYLBZgDtTeLV7DIhBPYssILVfS9MNLXrvMoP4tGeZO7Ukk7KaygyNdP6CfD39RCQ132GOPzyfqeJhc7QlAG3C56peAKCMfMGRX6rLlS7C6b3JRSdXPEpTpxt4wp3iLHO7uQNuqyQiCqODtKl85NYX/VsunXaOlorYINyrcxU01nOnFOpO43bGPKg0+4KyC9wVJ91vTnsM4z1WVU59uWv1qN/lK6GQcdNW15vCsVhMgaC7XT7RIZTTevDVQNYwVNvljIyzM89vDmmXrTlXix/sOy2kzo9silkjXUHCeXAg1hzfTT7wR8nAIH8Jo83tBh26ndyn5TpPGRzem872uNJJWSbLtxEQzGkTSFHuiQoCJqmJpT/PYIQfNpX5IN77tPjixED394B1DHe05DuaEW/kxVBbD6KC/lxWaDldBabeK2klXkfdXFTUOnI5/Db9svEb9T7FuleeL82zIoSpkPfMtk2w7+NhE3dKf+5sez7NV+bReyGc/y45RhXKS4z7hg2FzHs53Szr/oMky4kgE1Csiahi6zz4HTD6OhOh+v27qeqkXo4kUHoeGLUfJYue0Dy0bKNSrVLr9aDashQVpaWP5ggUW0+621ZuyF9yu/Nffj/XDfjB9PVfFJ2KkjQsQWz7wyJRF53khebA1ohrQk9AXJ97RwsvYCRQtaXIhoyVljgl9wRpB0wOCoL/WnEzO0skTG41i5/ARGJTmRUehJJniX4vaRkgMiU8IVKi9O6ZidkQdixnRPoPjk7z",
"cLna5HwnDsJ+E91nCz08xlx7fV1EHmSujljHIoQrmfUyRhcxapqIhJF621tIAXrV9zY5udubcR70Cmk754sK7iCp40IWIqD6HeBc4iBboPXUAGHnBV3e0DO/aE1B/E8xk7DgaTQN70HBTmxGuxVc2Q2+PUZolRMqMUZZNoGtlIYYm0/yUaw0eoG4uIGHgAUf7KxNnwdUhg/ZtwvNLi0ZcRL+H9PTeohIxCNgxpYWhc4aieJwyb5iHUjb1j2vKgyJVzIxdyVyvKEqMtBcbG7GTRAWJWZXl3I1N3beufl2mfJybupvfkHoT8jUZOWyKT79gdbw0TNeFszpq4fBbGADNP7EGxLvM+2FjBGzJrfIkSLFYgmL5iLyLZ38BGY8zS+zrpjOix8mZCwrCaLrbrBLG7FdYgAbEX5xDN+KmVzQqkEGedo1CuKAI+624HJhRBwQKxhx5SqKrHXNVqvGx6Io8X9qdiitUWkIk54qjn4gBU7P9Uw/hw7PBhN+YD7YMK5ca0RoNcshVyVxlxevz/8uxeB4vk84pJ18IDAs1BRPSnnPf7rw8wa4bUKq/a26cMaeBsijTIb27XJnwadoqT1yxwI46SeVKm8RHqeQ628fPSq7k5kSDvNJ3frNAIY9CAzKkH0z0t6KfT2rYjLKbf9bXtnqD5JLvMC909hibRfPREK07/JZSecQSmRcgTKKYGpKIwJs957frdg14fea0FxD8zCUO1z1QPLxT3BkJtl+ZclnGLvAPQNmuYMnbp47BTHsSjIdCOCO5DW2PDxk464N7sdhfCyYXVK26OT17zVgE+46+qNTYfP2nxZpgQOOlgq2Ei96w6Qg1b6RTjTh7BuFo0Jh7v4n3Odtz5MBzaN6OpzCrQhuvJiXsGKc9gGsaCWTSXjpWLPX/2PCSe1xEzhYxGqDRlgsPXDQFIkDh+iesQ4JOvFmLR28pf9CMmrcddVXeRZPYVsqqJQeGfCQVH0leiBQudGlKrDFCdT4rwRStDwTPoFS61L8KcO8CcZESj9zvbh0US+aGkJQY//NA+wDBI4gYJF9CAZ7qB40BqD7TWbU5NrQwiIf8rt+VzX6q3bbaRDiPHiJyFpXzwRT08LB93e1umAu53cc/taX6iInNobIUxmJy27kWhB5fVSTqL/tX1pjaQi3ynWaws1hpx0LxUVD7Jm5BSZVYJ8HJ4/ZLPKk+EJY+pqo9BarnmP4HRjREh61PbY/HIf8tH2NveA4BSHVqDZEoRItMn0GPlZCieyLwOGAIOEdwCBAZzvW59lQJjkGIL+BIi7fUIwgBfZ4IxAHz78KhwHdE0R678ywdjGBLhPdY6SxKYr4gaqNcUmn6/VYmB+ITR8Hy23KqzaPaQdyYgea8PSYFhDlaGcZT5Ed8wDRIRXHgbMy38mO9qs+SU/kpa+/gTVtBDbm6bTxOmGNDgc3S5bn1bxtjHBn2v/h1BAsQtafXIweQk4nbTDaNoVIeiBgQ5hJZJ6N3U0hN+S/Y0qB37ag6l2tdNBZhC1pZ7jCU4wXZZBkP3eKjZ2G+JelK57nGR2TgpP2wcfE0fpWuIGVBBcQtMGUxNwGpLt0YYCJRuCcwc6Gb1neiD3ik1nUnkbBZy6SuakdewHeC6rPFqXUMq77Yt+g1uGqEWZ3aGYTEjJ4D7EOdJEAcBBwy58HUDYuz5z8au7AkB9q0iKZvODQOxcgXbXH713hv842SowwoFFBJXxbNc2sLPHGiRG0wPcpFKmWInrE+p5tSZ3jjnSrHZIm2L34jPYW0S8h4pLxGv8SJSvhv3ljYCS7v+puJjDhubsgj3MvmqkUlAmTQfQthFEGVkGm1DIe2gEwuQDEjiqzwopbJ6b1FD5SdP/pS/n6kzjxfJBMm8UNDBCsdnrq7CpeJBbBMqbaR/+BXvJQ30XhxzjwbNS3CIHhpB47pGr5pY/VgEH9Rk3QdxKv+92qip5aGXzzSDImw4RfM/BIG3ZOL9jF1bY6+YEMckvaDjnXUqJvg4+b",
"DienoQj0pPCFU1ub7Kmpg7oUlERzb7RlDCBMRiMBRMVgH1AloDtAdRWAmkpGSMVXdeF6aJUQdEedmwRCrrGBOHlJ2EuYJdkf4q2idtv5tyyaXo3kO2Lj7SjSeXez0RKSrHiVGViawodCzxIDHYFm2aJen9WZdBbiLLhK2UW5cHh7H+zJHOFkg5YV4x0sQBbxwuHYF7TpEpIwGzQYHjpAwkj5MAbOrO/CKkINhtujRdxOE+IQI2kxdOGHsu9/u2mVmwXwnp656qVm+tt2xgSqUbF9Mo/CuJ5ONb7Z6IDM7/V0pVMV15T1764howU8BA8fL342zWHvqiE4T+AKq+I3XkBxB/akJp0ENh5lFRLruFi++uGv4VA5uB/KF6YWf2vW2OBGanuP78TT0CJhy4200ZY5wwOvXBBWOUxMcvmZDSlAJTTO0AWZFzW45YuvuYwOcd5oJeD+DwqWuTT44HnVCltMphEvAB1QfvNiZFU/qwgL8dvQtENoCzL7Oa+6NybSN2WJVmmz+vXixD0SvZtm710PHDvyK5ss+PyPxmvudkcKVCO/U/ioghUXfb7oLRFyMbZWVkwbhLNV/vIJVUGBQ7H02A5F2sAWojZxmJlaE89wM+ureJHJNODpnBL/D3DCy0LVPocHm/TYjSxz3hCyb/RlNlA7ouZrNNuADP/G8cIWGJzjPcHDSE4NpN06CxRu8ksZbV5yO5kfGkTEFsZE5FP0HVirjPKGKlB6HfVDPqasiCoviXWOpoWQdB4vqU72XcVhtWk4szxfYuXKMkk8tOGL2OsC9IOKQ/yp0GjwK3WjdZKwZKvTvX54yTbW8YKjSNEYiRnUB211/NnWdGHnwuV+5XnKpLJeUW5VgioUFAuXGBniBmq/H0hKiFix37LlLkH3Rhu9/jV4P2+pWvAqATKZxwnFUfjLvNi8duk6UJwNLly4fsuVZLojZlFBBAMN3ScpVg2/qnrHkzcjdX8uzSMs4qjEudyWrVWxHUOCj2di2zcFHENCMRU9HqWn427IFTbOKeNAUWnG9p0LA9TUfhqqDE+W4H78H1/5LB2/BlsdLjmylWYJtZPV9uqEkKIcYqiTo4Qjeu1vZwLc8ftD00FehILYBfuVi1WEZWc9yHC2FNAm9gFdGqBo5Bm0vEICN4TIs5lF7VccypZbpJfN/C1utowsYkvaIaApH6zP3jBJYrGiqMUek0Z4ejH5U81MiOgu2XIfaWePKhZmMdHfoJi5W+eutg/DcMMN8zws9xTq8+QCoYJirhuDtzYKun5GZIJKlGyZgK2Oi1X5CVoBsy1ldrMVZtuyMQQFslxORttGUed1HKDFTzuseoLCOJcMVgUwNg21m+0OkH/2cXTDi9MRwuuvmwBRvLe5BFR4ci/zfYkBLwUA/z8lT/4yZif5LWL2dHqvRkQwIBKxQhBv7EjUd84+xpy6l5E1BJZq7HVE/e73MzOOoKJUyn5RFgoGZ6AxKYuWln8008lZ65HwasyqzAwsRR0zXaxNZ+MY+nNWlq/yK7M99svVdIfZopqF2xopNUYPc8SENBZ9pN2BkSjigBPv8W+gJ3jVnpVHBk0uPhbXoOxu8ZYc/FxA+kLO+gSdYLSm13+Ekoj/g+x23KGETtrUXhXnMFGlmFL0/WP/Dga1Enq+DMPE1mLuE9WM4F2E5quPic5BebGk6FwKtRsMCZhu5WZ+mQlEEJoi3lI8OCngX3HIinoAVp0mgG8JfKLDQ8ClrTXNGqt912ZxZWrnMs+Qycj1HjKlcJqZBv8QFaMma80VqwlSI/Og7ng0Z3GMTej+EzhQNuFWuCJzLzPYsslpl08a7D/jp2Az995otSXenwRjH1NEmpcQ2CCpibLCWD/azVO6xWBHg39/MAxgg5F1DRJ1X0blxbTQqWinbsANMXAJOrM18vGJAnI+g1tOPTxgeWz7sEDq6w2ZNicDmyLky3Chlc4RGqIGcAxmstfPvQQGWYbo+VWDVRwKBa+9zLGr9T3hF9CJ",
"lrnG1jKLNtWORq0E31fOHW/Fopppgdp+bK9H1EGF9tZ9t9L3/P2WoNfYC968JDoMmXsE/rfWxZvppJwBLMVc3QtxFZ8wDSV5RWDGkEujoHHfJfH/flo3ff95mDbhQGbnub4S38Ukyu5IvPz44xn3gaf58xFqkHi3E3jYhck2bqqwsfDnG28xQBbV8BiKJ3C4echyI95gEcHEVOkpZTgF969ww1hqm5Q0KRF6nJQ+2I6viOaUx/MqPqEX6p9z3btoVbTYODL9qQYheyuNHG8G8FjsbI7IfYHWlJvb4LrTMw0bqU25WEfySTm55rNO6ffzrnOOjfqWWXI+p5qhJKVV6IAgU+PuhASOl6xs6eUVMF1J2Lsr+Kp3inAarZNBG6el1XVEkaYVGrj1ZLVAl5WfOujxnmHnNijHurYHlOPg7N3p/8MRdpovrIJSjaPVlyUrXyXh4dgyYT/zeHO6OI7GIm2zqzJVif5J3A6fdFK8tYH0lru6ZayWJwbnZpH7ghJ/xaZzIb1tdKr6QkJztT3lIiGORVnRxgF94o+n3S1ET2FOuhDsQgjCZNbw2YQICanXeSWatMlBnsSe6nZTMbUCyDaPwBlA2GkOCEey3/FlV9OBi8cFTjbAzOxHcqGFuI/FzEOMutO210hmv4tmF9u/jlq0xMVZRW7rzVIJr2qDouZ9cIDynjpw67Oo8ZWKyE/AITgK+Dmwslfx9JRm2n37ef/6He8LmwDPWdenqGRYdEBP6ykGY+ZBpS5Vt74ZFIujmL/8e12SmdoZeEGUU/PzzPXCNjCv9F0w2RNencvuz20EdNML5IUA7mCr/WYehYyInmqc/K9ehTUBOpy7AjrfPRfEEM6u7P9d38/JYO6WWF98e9SQS36WOziO63AlJqK6yTChCBmjquOy2XFydg9ziIuIo3WHCIIzouNiS86KSBiejYRqczqnTygYBbmNe31smfNFlaeK6OyCg3ip/399/+4K9N+xYIHSv8a94DrAKZ8CRqmeitwn09pGid9fCsSl8+nbzU5ZRiIz4f3CiEGHemfaKt5xYeFKwXwzTNSwp3qtj7k8jDuQ6Bck6sT5XpyubCkrPD5JhRS1PFz+3jNnuzs/cmYegb58I/uG3R9tFxi7KByrpDMzJlZ0eR65yL+cJUjRsUZTDzy+VycCSZL8jZJjL1D5d0T1Pbf3n9ydaHSnaGEXxWeprpCPkDaLJ+tsOcQ3KiPoxI6xIENr81sahKF0PY080j/ji/LKp6NWf77b4DZ4CCzH+HefYmhM3DcGEVY3AglviR+CXDCvoycCIXDt0NbeSQwiqvKk/9z9uDiH3YZQuIfp/NCLRDhZCzRrLGnlIuK4gx4MRdzx1lJxi+RLi87q9nZO8IKNBeZy0pzmN4MEC5W4jNiuOEhKrMoWcjNrb2pcAyvAp/3XmZOGLYLywgXzINrIBVbu1LcqtSWoSEQmMbZFEQ817EdxtyRZpShh90Wdskp1+93LkTbZYO7WbvTxbfR/l+5rmCZU7AUSBiwlbnmo7k9SilAW5DOK2YbbfGhUWYbrq+PAPLvY1pcl2uKtrFE5U5aptDohBNpaNtfqY8PgyQ/eprjus9L1vrlwjrZ4sIBHJp8f81npfzZpxgyd6lE44wYy7alixsuNO8mt5gzSSrb0vvvuC3VaOq5porhK9UhfIXsglCdmhIr7iwcJ+BBr2L3iDyOMtgJOZRWsnz+sUIQWx1lX5RUADb9aQ7Ka+tx08T+vev0n2QfbbKEk3c7qYz3CxPjvFTQ54DpeUU6P1ToU2zaGEQRChq2EVg/NWQzlFITgv2XrYboLNJpzd3uqAHq0gxErfRwkLHUp08OU79qohzLgwRfUjBnUG/wCTaQujRY8HaFa2kLnMAHLZW6dYWb6tOB4dGiAGW9IAp12+FGm1p54OQb/Y2UUYoKKrVRGf8b46r2jN7pUpElzRwYcZqGgx2WWJdh1txDzw9YRiRTMXhIXWKvKn2TDly3dDGUUUKfh",
"VR6jXEiKhYFaMzN4bmxt5eDrOrMw7xph8XNdcdTL31c9RVgUBqaSbeAdnFkoTGny52zWUYUD+TnB7ese+SvFEvGlx7bTIHEoxpw1NO6aCmR1vDWgEcxwHaqpoJGjaeSHv5JfYPfYJLWB93CoB6jNU8gtg4EArQ438efAXuQPR8Jv7iI1To3rVQFP2SMJ59ZzbihkrsADV8rxh9zshnWyY4jmneAldWiVmT+3iWJ2ZSNNr5GjGZNIRvHMHhCXg51S82iII+ypSLRwok7NV/GOxPp1+uRIIY2KOhDda++I+SyFWxvy+td1A8w9eVPtW7BP2gANH6C6EFjnebqAjgZ0tZTEmbJvw11Ej+1U8VwAZ2F+Exf0WbnSqObkepj02y91njaZ4iLKAk6IYt9cH2inJucFwVndEMvblWR+21WXMUrw3glcOTFrTcIo02n3/A1h+GF6tqrsSKxQUzqlhoLOQi8KabxLTwOrfZ8RTk45y1712gsWuiXqT1NbOpWVhd+T6qSo8Y83AawZu0xhoD8K4jqUATHx1RuSoAZg/vwFAqSWVh3GfinNgB2L7DU+mZfpM6y8gWVgvvE5qa0hfCltg10G5Pct2MmpcVm0uirKyly+HUj1q5xq1VplY9axsiPgPMwTNTH/Yy1k1slSriRZZiOndJvqM5IVM43PHFdzIUilxQ1gMJRd1mcUMpyDm8YYb1tGIN84qQc0x2TlLbvOny94L4RUnD0Keu2SNIMidDxQsZWqUkyYzu0o+petAXtLm7SQj5vq+47RFKTBHfx+qtyT+6ukiRVS48jDNLAm+KdIWmQ3WjelEHQbeUPdopdEDtIRA7DJGrMU5r2rqmJwBNHdUbTWzL4UrXQmqoOdKyrG/RVQyNO452XBJzlk2sK8nf4v/zsj7w2/8r66wvlQAXsczFIPKv1Hc06lvtSc0I1nXKu3p6/z7CE0gg=="
};
*size = s_gst_size_DRLPRUEBAS__RL10_respuesta_cargas;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__RL10_respuesta_cargas;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__RL10_respuesta_cargas;
return true;
}



bool DRLPRUEBAS__RL10_respuesta_cargas::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__RL10_respuesta_cargas = 872;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__RL10_respuesta_cargas = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__RL10_respuesta_cargas[] = 
{
"DQAAAIAAAAAGAAAACgAAAAoAAAAJAAAACwAAAAkAAAAJAAAACQAAAAkAAAAJAAAACgAAAAsAAAALAAAACwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAwAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAADAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAANAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__RL10_respuesta_cargas;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__RL10_respuesta_cargas;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__RL10_respuesta_cargas;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__RL10_respuesta_cargas(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__RL10_respuesta_cargas(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__RL10_respuesta_cargas(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__RL10_respuesta_cargas(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__RL10_respuesta_cargas(name,dirInstall);
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
	sprintf(partitionName,"%s","respuesta_cargas");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+r+l10.respuesta_cargas");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

