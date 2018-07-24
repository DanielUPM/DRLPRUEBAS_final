//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_completa_partition1_CPP
#define DRLPRUEBAS__CC_GG_completa_partition1_CPP

#include "DRLPRUEBAS.+c+c_+g+g_completa.partition1.h"

DRLPRUEBAS__CC_GG_completa_partition1* DRLPRUEBAS__CC_GG_completa_partition1::s_current= NULL;

DRLPRUEBAS__CC_GG_completa_partition1::DRLPRUEBAS__CC_GG_completa_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_GG_completa";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__CC_GG_completa_partition1";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+g+g_completa.partition1";
m_infoModelFileNameExtra = "+c+c_+g+g_completa.partition1";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 10:43:00.396000";
m_infoPartitionDate = "28/06/2018 10:57:18.970000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[3]; 
int nbx;
for (nbx=0; nbx < 3 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[5];
int ib;
for (ib=0; ib < 5 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[7]; 
int nibr;
for (nibr=0; nibr < 7 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[90]; 
int nif;
for (nif=0; nif < 90 ; nif++)
	m_branchIf[nif]= -1;

static const char * elmstr0[] = { "LOX", "NTO", "H2O2", "HNO3", "LF2", "RP_1", "LCH4", "LH2", "N2H4", "UDMH", "MMH", "JP_10", "Kerox", "Oil", "H2O", "IPA", 
		"Air", "Ar", "CH4", "CO", "CO2", "H2", "He", "N2", "O2", "MMH_vapour", "Comb_prod", "Comb_prod_M", "Comb_prod_cp", NULL } ;
static int elmind0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 } ;
static const char * elmstr1[] = { "Liquid", "Gas", NULL } ;
static int elmind1[] = { 1, 2 } ;
static const char * elmstr2[] = { "Convergent", "Divergent", NULL } ;
static int elmind2[] = { 1, 2 } ;
static int elmind3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } ;
static int elmind4[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind5[] = { 1, 4 } ;
static const char * elmstr6[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", NULL } ;
static int elmind6[] = { 1, 2, 3, 4, 5, 6, 7, 8 } ;
static const char * elmstr7[] = { "All", "Unknown_W", NULL } ;
static int elmind7[] = { 1, 2 } ;
static int elmind8[] = { 2, 3, 4 } ;
static const char * elmstr9[] = { "Yes", "No", NULL } ;
static int elmind9[] = { 1, 2 } ;
n_typ=10;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,29,elmind0},
		{elmstr1,2,elmind1},
		{elmstr2,2,elmind2},
		{elmstr0,16,elmind3},
		{elmstr0,26,elmind4},
		{elmstr6,2,elmind5},
		{elmstr6,8,elmind6},
		{elmstr7,2,elmind7},
		{elmstr6,3,elmind8},
		{elmstr9,2,elmind9}
	} ;
typ= new struct INTEG_enumType[10];
etypecopy(10,typ,tmp_typ);
n_dyn=2;
dyn= new double[2] ;
static double tmp_dynInit[2]={ 100, 100 } ;
dynInit= new double[2];
dcopy(2,dynInit,tmp_dynInit);


n_der=0;
der= new double[2] ;
static double tmp_derInit[2]={ 0, 0 } ;
derInit= new double[2];
dcopy(2,derInit,tmp_derInit);


res= new double[2] ;
ldr= new double[2] ;
boxDyn= new double[2] ;
boxDer= new double[2] ;

n_unkR=468;
unkR= new double[468] ;
static double tmp_unkRInit[468]={ 10, 5, 1, 0, 0.637328951, 1, 23, 172, 31.9988, 0, 0, 2.27, 0, 11000000, 0, 1, 
		0, 4000, 3000, 0, 0, 2000, 0, 0, 0, 0, 0, 2169, 0, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6800000, 1, 1777.23746, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 10, 5000000, 0, 1, 0, 0.032, 
		0, 301.365293, 1, 13101196, 0, 85.4960317, 1, 9001195.99, 0, 15, 2.01594, 31.9988, 0, 8, 14700000, 0, 
		0, 4000, 3000, 0, 0, 1000, 0, 0, 0, 0, 0, 3500, 0, 1, 1, 65.3474576, 
		1, 8000000, 1, 11.7625424, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 77.11, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 10, 5000000, 
		0, 1, 0, 0.032, 0.0143139263, 0, 0, 0.5, 0, 10, 0, 0, 722.652542, 1, 0, 0, 
		0.0143139263, 0, 0, 0.5, 0, 10, 0, 0, 1, 0, 0, 0.0489035601, 0, 0, 0.5, 0, 
		10, 0, 0, 1, 0, 0, 0.0489035601, 0, 0, 0.5, 0, 10, 0, 0, 1, 0, 
		0, 1, 1, 0, 0.346776149, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 
		0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0.00692409717, 0, 0, 45, 0.8, 
		1, 0, 10, 5550 } ;
unkRInit= new double[468];
dcopy(468,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 0, 6, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=17;
static int tmp_cteIInit[17]={ 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 
		3 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=20;
static std::string tmp_cteSInit[20]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 2;
n_neld= 0;
m_numBoxes= 2;
m_nNonLinearBoxes= 2;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_GG_completa_partition1::initInternalModels()
{
}

int DRLPRUEBAS__CC_GG_completa_partition1::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi1;
	int _vi2;

	_vi1 = 1 ;
	while ( _vi1 <= setofSize(&typ[4]) ) {
	_vi2 = setofElem(&typ[4], _vi1) ;
	if( fluid[_vi2-1] != 0 ) {
	fluid_name = _vi2 ;
	}
	_vi1 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int DRLPRUEBAS__CC_GG_completa_partition1::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[3], fluid_name) != 0 ) {
	fluid_state = 1 ;
	}
	else {
	fluid_state = 2 ;
	}
	return fluid_state ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__ISA_Pressure(const double & z)
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
	int _vi3;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi3 = 1 ;
	while ( _vi3 <= 7 ) {
	if( h > h_max[_vi3-1] ) {
	if( b[_vi3-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi3-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi3-1] * (h_max[_vi3-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi3-1] * 287./1000.),"a[_vi3] * 287 / 1000")),"((T_0 + a[_vi3] * (h_max[_vi3] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi3] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi3-1] * (h_max[_vi3-1] - h_0)/1000. ;
	h_0 = h_max[_vi3-1] ;
	j = _vi3 + 1 ;
	}
	_vi3 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi4;
	int _vi5;
	double _vr1;

	_vr1 = 0. ;
	_vi4 = 1 ;
	while ( _vi4 <= setofSize(&typ[4]) ) {
	_vi5 = setofElem(&typ[4], _vi4) ;
	_vr1 += _div( fluid[_vi5-1] , Chem_M[_vi4-1],"Chem_M[_vi4]") ;
	_vi4 += 1 ;
	}
	return _div( 1 , (_vr1 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr1 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi6;
	int _vi7;
	double _vr2;

	_vr2 = 0. ;
	_vi6 = 1 ;
	while ( _vi6 <= setofSize(&typ[4]) ) {
	_vi7 = setofElem(&typ[4], _vi6) ;
	_vr2 += Chem_cp[_vi6-1] * fluid[_vi7-1] ;
	_vi6 += 1 ;
	}
	return _vr2 + fluid[28] * fluid[26] ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


void DRLPRUEBAS__CC_GG_completa_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi8;
	int _vi9;

	_vi8 = 1 ;
	while ( _vi8 <= setofSize(&typ[0]) ) {
	_vi9 = setofElem(&typ[0], _vi8) ;
	fluid[_vi8-1] = 0. ;
	_vi8 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi10;
	int _vi11;
	double _vr3;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",233,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr3 = 0. ;
	_vi10 = 1 ;
	while ( _vi10 <= setofSize(&typ[3]) ) {
	_vi11 = setofElem(&typ[3], _vi10) ;
	_vr3 += Chem_rho[_vi10-1] * fluid[_vi11-1] ;
	_vi10 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__CC_GG_completa_partition1::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[16] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002 };
	int _vi12;
	int _vi13;
	double _vr4;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",273,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi12 = 1 ;
	while ( _vi12 <= setofSize(&typ[3]) ) {
	_vi13 = setofElem(&typ[3], _vi12) ;
	_vr4 += Chem_visc[_vi12-1] * fluid[_vi13-1] ;
	_vi12 += 1 ;
	}
	return _vr4 ;
}


/* Copy special unkR[] items to dyn[] vector */

void DRLPRUEBAS__CC_GG_completa_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_GG_completa_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(LO2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[31]) ;
  // init(GasGen_1.GasGen,100)
	LPRES__Init_fluid(27, &unkR[350]) ;
	unkI[2] = 1 ;
	unkR[384] = 1. ;
	unkR[244] = unkR[245] ;
	unkR[380] = _div( 1. , unkR[382],"GasGen_1.mfr_ch") ;
	unkR[381] = _div( 1. , (unkR[382] * unkR[242]),"GasGen_1.mfr_ch * GasGen_1.T_ch") ;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[183]) ;
	unkI[0] = 1 ;
	unkR[220] = 1. ;
	unkR[20] = unkR[21] ;
	if( unkI[1] == 1 ) {
	unkR[9] = 0.001 ;
	}
	else {
	unkR[9] = 100. ;
	}
	unkR[216] = _div( 1. , unkR[218],"CombCha_1.mfr_ch") ;
	unkR[217] = _div( 1. , (unkR[218] * unkR[18]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(Nozzle_1.Nozzle,0)
	unkR[445] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_GG_completa_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-146]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[0] = evalNormResidueInternal(0,_div( _div( unkR[182] * _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.p_c"),_sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[0] * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1)/2 * _pow( dyn[0] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[183]) + 1)/2 , (LPRES__gamma(&unkR[183]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_completa_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_completa_partition1& m= *DRLPRUEBAS__CC_GG_completa_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_GG_completa_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(2, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_GG_completa_partition1::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_GG_completa_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-306]  ThrustMonitor.g.A_out / CombCha_1.A_r = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[1] = evalNormResidueInternal(1,_div( unkR[2] , unkR[3],"CombCha_1.A_r"),_div( LPRES__FGAMMA(&unkR[183]) , (_pow( (_div( dyn[1] , unkR[61],"CombCha_1.p_c")) , (_div( 1 , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[183]) * (1. - _pow( (_div( dyn[1] , unkR[61],"CombCha_1.p_c")) , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[183]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_completa_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_completa_partition1& m= *DRLPRUEBAS__CC_GG_completa_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_GG_completa_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(2, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_GG_completa_partition1::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_GG_completa_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[456] = LPRES__ISA_Pressure(unkR[435]) ;
//[E-2]  Injector_F_1.W = FlowMeter_1.f_in.W - Injector_F.W
unkR[255] = unkR[226] - unkR[396] ;
//[E-3]  Injector_O_1.W = Turbine_ch.W - Injector_F_1.W
unkR[259] = unkR[349] - unkR[255] ;
//[E-4]  Injector_O.W = FlowMeter_1_1.f_in.W - Injector_O_1.W
unkR[63] = unkR[230] - unkR[259] ;
//[E-5]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[182] = unkR[63] + unkR[396] ;
//[E-6]  LPRES.Init_fluid(LO2_circuit_1.fluid, GasGen_1.f_O.fluid) %%% (OUT VAR)GasGen_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
//[E-7]  CombCha_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-8]  CombCha_1.W_O = Injector_O.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[25] = unkR[63] * (1. - unkR[90]) ;
//[E-9]  LPRES.Init_fluid(LH2_circuit_1.fluid, GasGen_1.f_F.fluid) %%% (OUT VAR)GasGen_1.f_F.fluid 
LPRES__Init_fluid(unkI[3], &unkR[31]);
//[E-10]  CombCha_1.W_F = Injector_F.W * (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[20] = unkR[396] * (1. - unkR[57]) ;
//[E-11]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[10] = _div( unkR[25] , unkR[20],"CombCha_1.W_F") ;
//[E-12]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[220] = _div( unkR[11] , unkR[10],"CombCha_1.OF") ;
//[E-13]  CombCha_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[22] = _div( unkR[20] , unkR[220],"CombCha_1.phi") ;
//[E-15]  CombCha_1.fluid_P[LOX] =  IF[46] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[94] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[25] + unkR[94] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-16]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[152] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-17]  CombCha_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_P[NTO] =  IF[47] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[95] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[25] + unkR[95] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-20]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[153] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-21]  CombCha_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_P[H2O2] =  IF[48] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[96] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[25] + unkR[96] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-24]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[154] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-25]  CombCha_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_P[HNO3] =  IF[49] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[97] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[25] + unkR[97] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-28]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[155] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-29]  CombCha_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_P[LF2] =  IF[50] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[98] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[25] + unkR[98] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-32]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[156] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-33]  CombCha_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_P[RP_1] =  IF[51] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[99] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[25] + unkR[99] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-36]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[157] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-37]  CombCha_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_P[LCH4] =  IF[52] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[100] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[25] + unkR[100] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-40]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[158] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-41]  CombCha_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_P[LH2] =  IF[53] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[101] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[25] + unkR[101] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-44]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[159] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-45]  CombCha_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_P[N2H4] =  IF[54] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[102] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[25] + unkR[102] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-48]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[160] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-49]  CombCha_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_P[UDMH] =  IF[55] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[103] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[25] + unkR[103] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-52]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[161] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-53]  CombCha_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_P[MMH] =  IF[56] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[104] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[25] + unkR[104] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-56]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[162] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-57]  CombCha_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_P[JP_10] =  IF[57] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[105] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[25] + unkR[105] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-60]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[163] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-61]  CombCha_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-62]  CombCha_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-63]  CombCha_1.fluid_P[Kerox] =  IF[58] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[106] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[25] + unkR[106] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-64]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[164] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-65]  CombCha_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-66]  CombCha_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-67]  CombCha_1.fluid_P[Oil] =  IF[59] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[107] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[25] + unkR[107] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-68]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[165] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-69]  CombCha_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-70]  CombCha_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-71]  CombCha_1.fluid_P[H2O] =  IF[60] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[108] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[25] + unkR[108] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-72]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[166] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-73]  CombCha_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-74]  CombCha_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-75]  CombCha_1.fluid_P[IPA] =  IF[61] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[109] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[25] + unkR[109] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-76]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[167] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-77]  CombCha_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-78]  CombCha_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-79]  CombCha_1.fluid_P[Air] =  IF[62] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[110] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[25] + unkR[110] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[168] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-81]  CombCha_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-82]  CombCha_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-83]  CombCha_1.fluid_P[Ar] =  IF[63] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[111] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[25] + unkR[111] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[169] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-85]  CombCha_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-86]  CombCha_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-87]  CombCha_1.fluid_P[CH4] =  IF[64] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[112] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[25] + unkR[112] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[170] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-89]  CombCha_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-90]  CombCha_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-91]  CombCha_1.fluid_P[CO] =  IF[65] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[113] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[25] + unkR[113] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[171] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-93]  CombCha_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-94]  CombCha_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-95]  CombCha_1.fluid_P[CO2] =  IF[66] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[114] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[25] + unkR[114] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[172] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-97]  CombCha_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-98]  CombCha_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-99]  CombCha_1.fluid_P[H2] =  IF[67] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[115] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[25] + unkR[115] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[173] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-101]  CombCha_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-102]  CombCha_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-103]  CombCha_1.fluid_P[He] =  IF[68] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[116] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[25] + unkR[116] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[174] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-105]  CombCha_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-106]  CombCha_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-107]  CombCha_1.fluid_P[N2] =  IF[69] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[117] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[25] + unkR[117] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[175] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-109]  CombCha_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-110]  CombCha_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-111]  CombCha_1.fluid_P[O2] =  IF[70] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[118] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[25] + unkR[118] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-112]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[176] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-113]  CombCha_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-114]  CombCha_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-115]  CombCha_1.fluid_P[MMH_vapour] =  IF[71] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[119] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[25] + unkR[119] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-116]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[177] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-117]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-118]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-119]  CombCha_1.fluid_P[Comb_prod] =  IF[72] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[120] * MATH__max(unkR[220] - 1., 0.) * unkR[22] + (1. - MATH__max(1. - unkR[220], 0.)) * (unkR[25] + unkR[22])) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-120]  CombCha_1.W_IO = Injector_O.W - CombCha_1.W_O
unkR[24] = unkR[63] - unkR[25] ;
//[E-121]  CombCha_1.W_IF = Injector_F.W - CombCha_1.W_F
unkR[23] = unkR[396] - unkR[20] ;
//[E-122]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[209] = _div( (unkR[178] * (unkR[25] + unkR[20]) + unkR[24] + unkR[23]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-123]  CombCha_1.fluid_P[Comb_prod_M] =  IF[73] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-124]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[210] = unkR[179] ;
//[E-125]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[74] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[27] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-126]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[211] = unkR[180] ;
//[E-127]  CombCha_1.Q_comb_effective =  ZONE[4] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[14] = unkR[13] ;
else unkR[14] = 0. ;
//[E-128]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-129]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-130]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-131]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-132]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[28] = _div( (unkR[25] * LPRES__cp(&unkR[123]) + unkR[20] * LPRES__cp(&unkR[94])) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-133]  Injector_O.f_in.pt = LO2_circuit_1.pt * SplitFrac_O.TPL
unkR[419] = unkR[231] * unkR[451] ;
//[E-134]  Injector_O.PR = Injector_O.f_in.pt / CombCha_1.p_c
unkR[416] = _div( unkR[419] , unkR[61],"CombCha_1.p_c") ;
//[E-135]  Injector_O.M_out =  ZONE[2] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[2] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[415] = _sqrt(_div( 2. * (_pow( unkR[416] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[415] = 1. ;
else unkR[415] = 0. ;
//[E-136]  CombCha_1.f_O.T =  IF[34] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit_1.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[229] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[415] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[229] ;
}
//[E-137]  Injector_F.f_in.pt = LH2_circuit_1.pt * SplitFrac_O_1.TPL
unkR[397] = unkR[227] * unkR[452] ;
//[E-138]  Injector_F.PR = Injector_F.f_in.pt / CombCha_1.p_c
unkR[393] = _div( unkR[397] , unkR[61],"CombCha_1.p_c") ;
//[E-139]  Injector_F.M_out =  ZONE[3] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[3] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[392] = _sqrt(_div( 2. * (_pow( unkR[393] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[392] = 1. ;
else unkR[392] = 0. ;
//[E-140]  CombCha_1.f_F.T =  IF[42] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( unkR[225] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[392] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[30] = unkR[225] ;
}
//[E-141]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[220] , unkR[11],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[30]) , ((1. + _div( unkR[220] , unkR[11],"CombCha_1.OF_st")) * unkR[28]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-142]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[29] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[28] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-143]  ThrustMonitor.g.Tt = (-((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * -CombCha_1.T_c + CombCha_1.W_IO / ThrustMonitor.g.W * GasGen_1.f_O.fluid[Comb_prod_cp] * -CombCha_1.f_O.T) - CombCha_1.W_IF / ThrustMonitor.g.W * GasGen_1.f_F.fluid[Comb_prod_cp] * -CombCha_1.f_F.T) / ((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) + CombCha_1.W_IO / ThrustMonitor.g.W * GasGen_1.f_O.fluid[Comb_prod_cp] + CombCha_1.W_IF / ThrustMonitor.g.W * GasGen_1.f_F.fluid[Comb_prod_cp])
unkR[181] = _div( (-(_div( (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * -unkR[16] + _div( unkR[24] , unkR[182],"ThrustMonitor.g.W") * unkR[92] * -unkR[62]) - _div( unkR[23] , unkR[182],"ThrustMonitor.g.W") * unkR[59] * -unkR[30]) , (_div( (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) + _div( unkR[24] , unkR[182],"ThrustMonitor.g.W") * unkR[92] + _div( unkR[23] , unkR[182],"ThrustMonitor.g.W") * unkR[59]),"(CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) + CombCha_1.W_IO / ThrustMonitor.g.W * GasGen_1.f_O.fluid[Comb_prod_cp] + CombCha_1.W_IF / ThrustMonitor.g.W * GasGen_1.f_F.fluid[Comb_prod_cp]") ;
//[E-144]  CombCha_1.A_r = ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid) / CombCha_1.p_c
unkR[3] = _div( unkR[182] * _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") , unkR[61],"CombCha_1.p_c") ;
//[E-145]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_r
unkR[2] = unkR[0] * unkR[3] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-147]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[453] = _div( unkR[181] , (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[0] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-148]  ThrustMonitor.p_out = CombCha_1.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[457] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[0] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-149]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[458] = dyn[0] * _sqrt(LPRES__gamma(&unkR[183]) * LPRES__R(&unkR[183]) * unkR[453],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-150]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[454] = unkR[182] * unkR[458] + unkR[2] * (unkR[457] - unkR[456]) ;
//[E-151]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[455] = unkR[454] ;
//[E-152]  GasGen_1.W_O = Injector_O_1.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[249] = unkR[259] * (1. - unkR[90]) ;
//[E-153]  GasGen_1.W_F = Injector_F_1.W * (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[244] = unkR[255] * (1. - unkR[57]) ;
//[E-154]  GasGen_1.W_IO = Injector_O_1.W - GasGen_1.W_O
unkR[248] = unkR[259] - unkR[249] ;
//[E-155]  GasGen_1.W_IF = Injector_F_1.W - GasGen_1.W_F
unkR[247] = unkR[255] - unkR[244] ;
//[E-156]  GasGen_1.OF = GasGen_1.W_O / GasGen_1.W_F
unkR[236] = _div( unkR[249] , unkR[244],"GasGen_1.W_F") ;
//[E-157]  GasGen_1.phi = GasGen_1.OF_st / GasGen_1.OF
unkR[384] = _div( unkR[237] , unkR[236],"GasGen_1.OF") ;
//[E-158]  GasGen_1.W_F_st = GasGen_1.W_F / GasGen_1.phi
unkR[246] = _div( unkR[244] , unkR[384],"GasGen_1.phi") ;
//[E-159]  GasGen_1.Q_comb_effective =  ZONE[1] (GasGen_1.Combustion) GasGen_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[239] = unkR[238] ;
else unkR[239] = 0. ;
//[E-160]  GasGen_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[290] = _div( unkR[64] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-161]  GasGen_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[261] = _div( unkR[31] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-162]  GasGen_1.fluid_P[LOX] =  IF[1] (GasGen_1.Combustion) (GasGen_1.fluid_O[LOX] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LOX] * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[319] = _div( (unkR[290] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[261] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[319] = _div( (unkR[290] * unkR[249] + unkR[261] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-163]  GasGen_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[291] = _div( unkR[65] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-164]  GasGen_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[262] = _div( unkR[32] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-165]  GasGen_1.fluid_P[NTO] =  IF[2] (GasGen_1.Combustion) (GasGen_1.fluid_O[NTO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[NTO] * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[320] = _div( (unkR[291] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[262] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[320] = _div( (unkR[291] * unkR[249] + unkR[262] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-166]  GasGen_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[292] = _div( unkR[66] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-167]  GasGen_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[263] = _div( unkR[33] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-168]  GasGen_1.fluid_P[H2O2] =  IF[3] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O2] * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[321] = _div( (unkR[292] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[263] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[321] = _div( (unkR[292] * unkR[249] + unkR[263] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-169]  GasGen_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[293] = _div( unkR[67] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-170]  GasGen_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[264] = _div( unkR[34] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-171]  GasGen_1.fluid_P[HNO3] =  IF[4] (GasGen_1.Combustion) (GasGen_1.fluid_O[HNO3] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[HNO3] * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[322] = _div( (unkR[293] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[264] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[322] = _div( (unkR[293] * unkR[249] + unkR[264] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-172]  GasGen_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[294] = _div( unkR[68] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-173]  GasGen_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[265] = _div( unkR[35] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-174]  GasGen_1.fluid_P[LF2] =  IF[5] (GasGen_1.Combustion) (GasGen_1.fluid_O[LF2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LF2] * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[323] = _div( (unkR[294] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[265] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[323] = _div( (unkR[294] * unkR[249] + unkR[265] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-175]  GasGen_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[295] = _div( unkR[69] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-176]  GasGen_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[266] = _div( unkR[36] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-177]  GasGen_1.fluid_P[RP_1] =  IF[6] (GasGen_1.Combustion) (GasGen_1.fluid_O[RP_1] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[RP_1] * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[324] = _div( (unkR[295] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[266] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[324] = _div( (unkR[295] * unkR[249] + unkR[266] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-178]  GasGen_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[296] = _div( unkR[70] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-179]  GasGen_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[267] = _div( unkR[37] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-180]  GasGen_1.fluid_P[LCH4] =  IF[7] (GasGen_1.Combustion) (GasGen_1.fluid_O[LCH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LCH4] * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[325] = _div( (unkR[296] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[267] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[325] = _div( (unkR[296] * unkR[249] + unkR[267] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-181]  GasGen_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[297] = _div( unkR[71] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-182]  GasGen_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[268] = _div( unkR[38] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-183]  GasGen_1.fluid_P[LH2] =  IF[8] (GasGen_1.Combustion) (GasGen_1.fluid_O[LH2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LH2] * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[326] = _div( (unkR[297] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[268] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[326] = _div( (unkR[297] * unkR[249] + unkR[268] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-184]  GasGen_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[298] = _div( unkR[72] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-185]  GasGen_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[269] = _div( unkR[39] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-186]  GasGen_1.fluid_P[N2H4] =  IF[9] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2H4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2H4] * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[327] = _div( (unkR[298] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[269] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[327] = _div( (unkR[298] * unkR[249] + unkR[269] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-187]  GasGen_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[299] = _div( unkR[73] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-188]  GasGen_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[270] = _div( unkR[40] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-189]  GasGen_1.fluid_P[UDMH] =  IF[10] (GasGen_1.Combustion) (GasGen_1.fluid_O[UDMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[UDMH] * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[328] = _div( (unkR[299] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[270] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[328] = _div( (unkR[299] * unkR[249] + unkR[270] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-190]  GasGen_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[300] = _div( unkR[74] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-191]  GasGen_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[271] = _div( unkR[41] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-192]  GasGen_1.fluid_P[MMH] =  IF[11] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH] * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[329] = _div( (unkR[300] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[271] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[329] = _div( (unkR[300] * unkR[249] + unkR[271] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-193]  GasGen_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[301] = _div( unkR[75] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-194]  GasGen_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[272] = _div( unkR[42] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-195]  GasGen_1.fluid_P[JP_10] =  IF[12] (GasGen_1.Combustion) (GasGen_1.fluid_O[JP_10] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[JP_10] * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[330] = _div( (unkR[301] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[272] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[330] = _div( (unkR[301] * unkR[249] + unkR[272] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-196]  GasGen_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[302] = _div( unkR[76] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-197]  GasGen_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[273] = _div( unkR[43] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-198]  GasGen_1.fluid_P[Kerox] =  IF[13] (GasGen_1.Combustion) (GasGen_1.fluid_O[Kerox] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Kerox] * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[331] = _div( (unkR[302] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[273] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[331] = _div( (unkR[302] * unkR[249] + unkR[273] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-199]  GasGen_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[303] = _div( unkR[77] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-200]  GasGen_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[274] = _div( unkR[44] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-201]  GasGen_1.fluid_P[Oil] =  IF[14] (GasGen_1.Combustion) (GasGen_1.fluid_O[Oil] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Oil] * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[332] = _div( (unkR[303] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[274] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[332] = _div( (unkR[303] * unkR[249] + unkR[274] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-202]  GasGen_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[304] = _div( unkR[78] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-203]  GasGen_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[275] = _div( unkR[45] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-204]  GasGen_1.fluid_P[H2O] =  IF[15] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O] * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[333] = _div( (unkR[304] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[275] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[333] = _div( (unkR[304] * unkR[249] + unkR[275] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-205]  GasGen_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[305] = _div( unkR[79] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-206]  GasGen_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[276] = _div( unkR[46] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-207]  GasGen_1.fluid_P[IPA] =  IF[16] (GasGen_1.Combustion) (GasGen_1.fluid_O[IPA] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[IPA] * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[334] = _div( (unkR[305] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[276] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[334] = _div( (unkR[305] * unkR[249] + unkR[276] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-208]  GasGen_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[306] = _div( unkR[80] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-209]  GasGen_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[277] = _div( unkR[47] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-210]  GasGen_1.fluid_P[Air] =  IF[17] (GasGen_1.Combustion) (GasGen_1.fluid_O[Air] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Air] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Air] * GasGen_1.W_O + GasGen_1.fluid_F[Air] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[335] = _div( (unkR[306] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[277] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[335] = _div( (unkR[306] * unkR[249] + unkR[277] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-211]  GasGen_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[307] = _div( unkR[81] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-212]  GasGen_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[278] = _div( unkR[48] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-213]  GasGen_1.fluid_P[Ar] =  IF[18] (GasGen_1.Combustion) (GasGen_1.fluid_O[Ar] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Ar] * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[336] = _div( (unkR[307] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[278] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[336] = _div( (unkR[307] * unkR[249] + unkR[278] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-214]  GasGen_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[308] = _div( unkR[82] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-215]  GasGen_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[279] = _div( unkR[49] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-216]  GasGen_1.fluid_P[CH4] =  IF[19] (GasGen_1.Combustion) (GasGen_1.fluid_O[CH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CH4] * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[337] = _div( (unkR[308] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[279] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[337] = _div( (unkR[308] * unkR[249] + unkR[279] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-217]  GasGen_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[309] = _div( unkR[83] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-218]  GasGen_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[280] = _div( unkR[50] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-219]  GasGen_1.fluid_P[CO] =  IF[20] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO] * GasGen_1.W_O + GasGen_1.fluid_F[CO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[338] = _div( (unkR[309] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[280] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[338] = _div( (unkR[309] * unkR[249] + unkR[280] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-220]  GasGen_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[310] = _div( unkR[84] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-221]  GasGen_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[281] = _div( unkR[51] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-222]  GasGen_1.fluid_P[CO2] =  IF[21] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO2] * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[339] = _div( (unkR[310] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[281] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[339] = _div( (unkR[310] * unkR[249] + unkR[281] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-223]  GasGen_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[311] = _div( unkR[85] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-224]  GasGen_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[282] = _div( unkR[52] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-225]  GasGen_1.fluid_P[H2] =  IF[22] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2] * GasGen_1.W_O + GasGen_1.fluid_F[H2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[340] = _div( (unkR[311] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[282] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[340] = _div( (unkR[311] * unkR[249] + unkR[282] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-226]  GasGen_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[312] = _div( unkR[86] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-227]  GasGen_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[283] = _div( unkR[53] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-228]  GasGen_1.fluid_P[He] =  IF[23] (GasGen_1.Combustion) (GasGen_1.fluid_O[He] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[He] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[He] * GasGen_1.W_O + GasGen_1.fluid_F[He] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[341] = _div( (unkR[312] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[283] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[341] = _div( (unkR[312] * unkR[249] + unkR[283] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-229]  GasGen_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[313] = _div( unkR[87] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-230]  GasGen_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[284] = _div( unkR[54] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-231]  GasGen_1.fluid_P[N2] =  IF[24] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2] * GasGen_1.W_O + GasGen_1.fluid_F[N2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[342] = _div( (unkR[313] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[284] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[342] = _div( (unkR[313] * unkR[249] + unkR[284] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-232]  GasGen_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[314] = _div( unkR[88] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-233]  GasGen_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[285] = _div( unkR[55] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-234]  GasGen_1.fluid_P[O2] =  IF[25] (GasGen_1.Combustion) (GasGen_1.fluid_O[O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[O2] * GasGen_1.W_O + GasGen_1.fluid_F[O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[343] = _div( (unkR[314] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[285] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[343] = _div( (unkR[314] * unkR[249] + unkR[285] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-235]  GasGen_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[315] = _div( unkR[89] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-236]  GasGen_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[286] = _div( unkR[56] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-237]  GasGen_1.fluid_P[MMH_vapour] =  IF[26] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH_vapour] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH_vapour] * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[344] = _div( (unkR[315] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[286] * MATH__max(unkR[384] - 1., 0.) * unkR[246]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[344] = _div( (unkR[315] * unkR[249] + unkR[286] * unkR[244]) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-238]  GasGen_1.fluid_O[Comb_prod] = 0
unkR[316] = 0. ;
//[E-239]  GasGen_1.fluid_F[Comb_prod] = 0
unkR[287] = 0. ;
//[E-240]  GasGen_1.fluid_P[Comb_prod] =  IF[27] (GasGen_1.Combustion) (GasGen_1.fluid_O[Comb_prod] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Comb_prod] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st + (1 - MATH.max(1 - GasGen_1.phi, 0)) * (GasGen_1.W_O + GasGen_1.W_F_st)) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE 0
if( unkI[2] ) 
{
unkR[345] = _div( (unkR[316] * MATH__max(1. - unkR[384], 0.) * unkR[249] + unkR[287] * MATH__max(unkR[384] - 1., 0.) * unkR[246] + (1. - MATH__max(1. - unkR[384], 0.)) * (unkR[249] + unkR[246])) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[345] = 0. ;
}
//[E-241]  GasGen_1.fluid_P[Comb_prod_M] =  IF[28] (GasGen_1.Combustion) GasGen_1.M_P	 ELSE 0
if( unkI[2] ) 
{
unkR[346] = unkR[233] ;
}
else 
{
unkR[346] = 0. ;
}
//[E-242]  GasGen_1.fluid_P[Comb_prod_cp] =  IF[29] (GasGen_1.Combustion) GasGen_1.cp_P	 ELSE 0
if( unkI[2] ) 
{
unkR[347] = unkR[251] ;
}
else 
{
unkR[347] = 0. ;
}
//[E-243]  GasGen_1.fluid_O[Comb_prod_M] = 0
unkR[317] = 0. ;
//[E-244]  GasGen_1.fluid_O[Comb_prod_cp] = 0
unkR[318] = 0. ;
//[E-245]  GasGen_1.fluid_F[Comb_prod_M] = 0
unkR[288] = 0. ;
//[E-246]  GasGen_1.fluid_F[Comb_prod_cp] = 0
unkR[289] = 0. ;
//[E-247]  GasGen_1.cp_R = (GasGen_1.W_O * LPRES.cp(GasGen_1.fluid_O) + GasGen_1.W_F * LPRES.cp(GasGen_1.fluid_F)) / (GasGen_1.W_O + GasGen_1.W_F)
unkR[252] = _div( (unkR[249] * LPRES__cp(&unkR[290]) + unkR[244] * LPRES__cp(&unkR[261])) , (unkR[249] + unkR[244]),"GasGen_1.W_O + GasGen_1.W_F") ;
//[E-248]  Injector_O_1.f_in.pt = LO2_circuit_1.pt * SplitFrac_O.TPL
unkR[430] = unkR[231] * unkR[451] ;
//[E-249]  Injector_O_1.PR = Injector_O_1.f_in.pt / GasGen_1.p_c
unkR[427] = _div( unkR[430] , unkR[257],"GasGen_1.p_c") ;
//[E-250]  Injector_O_1.M_out =  ZONE[6] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[6] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[5]==0)
	unkR[426] = _sqrt(_div( 2. * (_pow( unkR[427] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O_1.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[5]==1)
	unkR[426] = 1. ;
else unkR[426] = 0. ;
//[E-251]  GasGen_1.f_O.T =  IF[87] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O_1.M_out ** 2)	 ELSE LO2_circuit_1.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[258] = _div( unkR[229] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[426] , 2.,"(Injector_O_1.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O_1.M_out ** 2") ;
}
else 
{
unkR[258] = unkR[229] ;
}
//[E-252]  Injector_F_1.f_in.pt = LH2_circuit_1.pt * SplitFrac_O_1.TPL
unkR[408] = unkR[227] * unkR[452] ;
//[E-253]  Injector_F_1.PR = Injector_F_1.f_in.pt / GasGen_1.p_c
unkR[405] = _div( unkR[408] , unkR[257],"GasGen_1.p_c") ;
//[E-254]  Injector_F_1.M_out =  ZONE[5] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[5] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[4]==0)
	unkR[404] = _sqrt(_div( 2. * (_pow( unkR[405] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F_1.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[4]==1)
	unkR[404] = 1. ;
else unkR[404] = 0. ;
//[E-255]  GasGen_1.f_F.T =  IF[79] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[254] = _div( unkR[225] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[404] , 2.,"(Injector_F_1.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2") ;
}
else 
{
unkR[254] = unkR[225] ;
}
//[E-256]  GasGen_1.T_in = (LPRES.cp(GasGen_1.fluid_O) * GasGen_1.f_O.T + GasGen_1.phi / GasGen_1.OF_st * LPRES.cp(GasGen_1.fluid_F) * GasGen_1.f_F.T) / ((1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R)
unkR[243] = _div( (LPRES__cp(&unkR[290]) * unkR[258] + _div( unkR[384] , unkR[237],"GasGen_1.OF_st") * LPRES__cp(&unkR[261]) * unkR[254]) , ((1. + _div( unkR[384] , unkR[237],"GasGen_1.OF_st")) * unkR[252]),"(1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R") ;
//[E-257]  GasGen_1.T_c = (GasGen_1.eta_d * GasGen_1.Q_comb_effective / ((1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)) + GasGen_1.cp_R * (GasGen_1.T_in - 298.15)) / LPRES.cp(GasGen_1.fluid_P) + 298.15
unkR[240] = _div( (_div( unkR[253] * unkR[239] , (_div( (1. + unkR[236]) , MATH__min(unkR[236], unkR[237]),"MATH.min(GasGen_1.OF, GasGen_1.OF_st)")),"(1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)") + unkR[252] * (unkR[243] - 298.15)) , LPRES__cp(&unkR[319]),"LPRES.cp(GasGen_1.fluid_P)") + 298.15 ;
//[E-258]  Turbine_ch.f_in.Tt = (-((GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W * LPRES.cp(GasGen_1.fluid_P) * -GasGen_1.T_c + GasGen_1.W_IO / Turbine_ch.W * GasGen_1.f_O.fluid[Comb_prod_cp] * -GasGen_1.f_O.T) - GasGen_1.W_IF / Turbine_ch.W * GasGen_1.f_F.fluid[Comb_prod_cp] * -GasGen_1.f_F.T) / ((GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W * LPRES.cp(GasGen_1.fluid_P) + GasGen_1.W_IO / Turbine_ch.W * GasGen_1.f_O.fluid[Comb_prod_cp] + GasGen_1.W_IF / Turbine_ch.W * GasGen_1.f_F.fluid[Comb_prod_cp])
unkR[348] = _div( (-(_div( (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") * LPRES__cp(&unkR[319]) * -unkR[240] + _div( unkR[248] , unkR[349],"Turbine_ch.W") * unkR[92] * -unkR[258]) - _div( unkR[247] , unkR[349],"Turbine_ch.W") * unkR[59] * -unkR[254]) , (_div( (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") * LPRES__cp(&unkR[319]) + _div( unkR[248] , unkR[349],"Turbine_ch.W") * unkR[92] + _div( unkR[247] , unkR[349],"Turbine_ch.W") * unkR[59]),"(GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W * LPRES.cp(GasGen_1.fluid_P) + GasGen_1.W_IO / Turbine_ch.W * GasGen_1.f_O.fluid[Comb_prod_cp] + GasGen_1.W_IF / Turbine_ch.W * GasGen_1.f_F.fluid[Comb_prod_cp]") ;
//[E-259]  GasGen_1.rho_trans = GasGen_1.p_c / Turbine_ch.f_in.Tt / LPRES.R(GasGen_1.fluid_P)
unkR[386] = _div( _div( unkR[257] , unkR[348],"Turbine_ch.f_in.Tt") , LPRES__R(&unkR[319]),"LPRES.R(GasGen_1.fluid_P)") ;
//[E-260]  Nozzle_1.g.fluid[LOX] = GasGen_1.fluid_P[LOX] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[350] = _div( unkR[319] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-261]  Nozzle_1.g.fluid[NTO] = GasGen_1.fluid_P[NTO] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[351] = _div( unkR[320] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-262]  Nozzle_1.g.fluid[H2O2] = GasGen_1.fluid_P[H2O2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[352] = _div( unkR[321] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-263]  Nozzle_1.g.fluid[HNO3] = GasGen_1.fluid_P[HNO3] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[353] = _div( unkR[322] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-264]  Nozzle_1.g.fluid[LF2] = GasGen_1.fluid_P[LF2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[354] = _div( unkR[323] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-265]  Nozzle_1.g.fluid[RP_1] = GasGen_1.fluid_P[RP_1] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[355] = _div( unkR[324] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-266]  Nozzle_1.g.fluid[LCH4] = GasGen_1.fluid_P[LCH4] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[356] = _div( unkR[325] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-267]  Nozzle_1.g.fluid[LH2] = GasGen_1.fluid_P[LH2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[357] = _div( unkR[326] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-268]  Nozzle_1.g.fluid[N2H4] = GasGen_1.fluid_P[N2H4] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[358] = _div( unkR[327] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-269]  Nozzle_1.g.fluid[UDMH] = GasGen_1.fluid_P[UDMH] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[359] = _div( unkR[328] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-270]  Nozzle_1.g.fluid[MMH] = GasGen_1.fluid_P[MMH] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[360] = _div( unkR[329] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-271]  Nozzle_1.g.fluid[JP_10] = GasGen_1.fluid_P[JP_10] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[361] = _div( unkR[330] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-272]  Nozzle_1.g.fluid[Kerox] = GasGen_1.fluid_P[Kerox] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[362] = _div( unkR[331] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-273]  Nozzle_1.g.fluid[Oil] = GasGen_1.fluid_P[Oil] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[363] = _div( unkR[332] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-274]  Nozzle_1.g.fluid[H2O] = GasGen_1.fluid_P[H2O] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[364] = _div( unkR[333] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-275]  Nozzle_1.g.fluid[IPA] = GasGen_1.fluid_P[IPA] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[365] = _div( unkR[334] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-276]  Nozzle_1.g.fluid[Air] = GasGen_1.fluid_P[Air] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[366] = _div( unkR[335] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-277]  Nozzle_1.g.fluid[Ar] = GasGen_1.fluid_P[Ar] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[367] = _div( unkR[336] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-278]  Nozzle_1.g.fluid[CH4] = GasGen_1.fluid_P[CH4] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[368] = _div( unkR[337] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-279]  Nozzle_1.g.fluid[CO] = GasGen_1.fluid_P[CO] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[369] = _div( unkR[338] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-280]  Nozzle_1.g.fluid[CO2] = GasGen_1.fluid_P[CO2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[370] = _div( unkR[339] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-281]  Nozzle_1.g.fluid[H2] = GasGen_1.fluid_P[H2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[371] = _div( unkR[340] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-282]  Nozzle_1.g.fluid[He] = GasGen_1.fluid_P[He] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[372] = _div( unkR[341] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-283]  Nozzle_1.g.fluid[N2] = GasGen_1.fluid_P[N2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[373] = _div( unkR[342] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-284]  Nozzle_1.g.fluid[O2] = GasGen_1.fluid_P[O2] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[374] = _div( unkR[343] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-285]  Nozzle_1.g.fluid[MMH_vapour] = GasGen_1.fluid_P[MMH_vapour] * (GasGen_1.W_O + GasGen_1.W_F) / Turbine_ch.W
unkR[375] = _div( unkR[344] * (unkR[249] + unkR[244]) , unkR[349],"Turbine_ch.W") ;
//[E-286]  Nozzle_1.g.fluid[Comb_prod] = (GasGen_1.fluid_P[Comb_prod] * (GasGen_1.W_O + GasGen_1.W_F) + GasGen_1.W_IO + GasGen_1.W_IF) / Turbine_ch.W
unkR[376] = _div( (unkR[345] * (unkR[249] + unkR[244]) + unkR[248] + unkR[247]) , unkR[349],"Turbine_ch.W") ;
//[E-287]  Nozzle_1.g.fluid[Comb_prod_M] = GasGen_1.fluid_P[Comb_prod_M]
unkR[377] = unkR[346] ;
//[E-288]  Nozzle_1.g.fluid[Comb_prod_cp] = GasGen_1.fluid_P[Comb_prod_cp]
unkR[378] = unkR[347] ;
//[E-289]  GasGen_1.c_star = sqrt(LPRES.R(Nozzle_1.g.fluid) * Turbine_ch.f_in.Tt) / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[250] = _div( _sqrt(LPRES__R(&unkR[350]) * unkR[348],"LPRES.R(Nozzle_1.g.fluid) * Turbine_ch.f_in.Tt") , LPRES__FGAMMA(&unkR[350]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-290]  GasGen_1.i.Data[1] = GasGen_1.c_star
unkR[379] = unkR[250] ;
//[E-291]  Injector_O.PR_sl =  IF[30] (LPRES.State(GasGen_1.f_O.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[417] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[417] = 0. ;
}
//[E-292]  Injector_O.p_out_ch =  IF[31] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[420] = _div( unkR[419] , unkR[417],"Injector_O.PR_sl") ;
}
else 
{
unkR[420] = 0. ;
}
//[E-293]  Injector_O.A_sl =  IF[32] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) * Injector_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[413] = _div( _sqrt(unkR[229] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[419]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[413] = 0. ;
}
//[E-294]  CombCha_1.f_O.p =  IF[33] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[420]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-295]  Injector_O.A_d =  IF[35] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[412] = _div( unkR[413] * _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[415] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[415],"Injector_O.M_out") ;
}
else 
{
unkR[412] = _div( _div( unkR[63] , unkR[414],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[419] - unkR[93]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p)"),"sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))") ;
}
//[E-296]  Injector_O.v_ideal =  IF[36] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[421] = unkR[415] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[421] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[412] * unkR[414]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-297]  Injector_O.Re =  IF[37] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[418] = 0. ;
}
else 
{
unkR[418] = _div( LPRES__rho(&unkR[64]) * unkR[421] * unkR[414] * _sqrt(4. * unkR[412]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-298]  Injector_F.PR_sl =  IF[38] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[394] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[394] = 0. ;
}
//[E-299]  Injector_F.p_out_ch =  IF[39] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[398] = _div( unkR[397] , unkR[394],"Injector_F.PR_sl") ;
}
else 
{
unkR[398] = 0. ;
}
//[E-300]  Injector_F.A_sl =  IF[40] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) * Injector_F.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[390] = _div( _sqrt(unkR[225] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[396] , (LPRES__FGAMMA(&unkR[31]) * unkR[397]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[390] = 0. ;
}
//[E-301]  CombCha_1.f_F.p =  IF[41] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[398]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-302]  Injector_F.A_d =  IF[43] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[389] = _div( unkR[390] * _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[392] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[392],"Injector_F.M_out") ;
}
else 
{
unkR[389] = _div( _div( unkR[396] , unkR[391],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[397] - unkR[60]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"),"sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))") ;
}
//[E-303]  Injector_F.v_ideal =  IF[44] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[399] = unkR[392] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[30],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[399] = _div( unkR[396] , (LPRES__rho(&unkR[31]) * unkR[389] * unkR[391]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-304]  Injector_F.Re =  IF[45] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[395] = 0. ;
}
else 
{
unkR[395] = _div( LPRES__rho(&unkR[31]) * unkR[399] * unkR[391] * _sqrt(4. * unkR[389]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-305]  CombCha_1.rho_trans = CombCha_1.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha_1.fluid_P)
unkR[222] = _div( _div( unkR[61] , unkR[181],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[152]),"LPRES.R(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-307]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[26] = _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-308]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[215] = unkR[26] ;
//[E-309]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[183]) , (9. * LPRES__gamma(&unkR[183]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-310]  CombCha_1.M_r = 1
unkR[9] = 1. ;
//[E-311]  CombCha_1.h.T = ThrustMonitor.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[15] = unkR[181] * _div( (1. + _pow( unkR[12] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[183]) - 1.) * _pow( unkR[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[183]) - 1.) * _pow( unkR[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-312]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[224] = 1.184e-07 * _pow( LPRES__M(&unkR[183]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-313]  CombCha_1.h.A = 0
unkR[212] = 0. ;
//[E-314]  CombCha_1.h_g = 0
unkR[214] = 0. ;
//[E-315]  CombCha_1.h.Q = 0
unkR[213] = 0. ;
//[E-316]  Injector_F_1.PR_sl =  IF[75] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[406] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[406] = 0. ;
}
//[E-317]  Injector_F_1.p_out_ch =  IF[76] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.f_in.pt / Injector_F_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[409] = _div( unkR[408] , unkR[406],"Injector_F_1.PR_sl") ;
}
else 
{
unkR[409] = 0. ;
}
//[E-318]  Injector_F_1.A_sl =  IF[77] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) * Injector_F_1.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[402] = _div( _sqrt(unkR[225] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[255] , (LPRES__FGAMMA(&unkR[31]) * unkR[408]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt") ;
}
else 
{
unkR[402] = 0. ;
}
//[E-319]  GasGen_1.f_F.p =  IF[78] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(GasGen_1.p_c, Injector_F_1.p_out_ch)	 ELSE GasGen_1.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[256] = MATH__max(unkR[257], unkR[409]) ;
}
else 
{
unkR[256] = unkR[257] ;
}
//[E-320]  Injector_F_1.A_d =  IF[80] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.A_sl * ((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F_1.M_out	 ELSE Injector_F_1.W / Injector_F_1.C_D / sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[401] = _div( unkR[402] * _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[404] , 2.,"(Injector_F_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[404],"Injector_F_1.M_out") ;
}
else 
{
unkR[401] = _div( _div( unkR[255] , unkR[403],"Injector_F_1.C_D") , _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[408] - unkR[256]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p)"),"sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p))") ;
}
//[E-321]  Injector_F_1.v_ideal =  IF[81] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T)	 ELSE Injector_F_1.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.A_d * Injector_F_1.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[410] = unkR[404] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[254],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T") ;
}
else 
{
unkR[410] = _div( unkR[255] , (LPRES__rho(&unkR[31]) * unkR[401] * unkR[403]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.A_d * Injector_F_1.C_D") ;
}
//[E-322]  Injector_F_1.Re =  IF[82] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.v_ideal * Injector_F_1.C_D * sqrt(4 * Injector_F_1.A_d / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[407] = 0. ;
}
else 
{
unkR[407] = _div( LPRES__rho(&unkR[31]) * unkR[410] * unkR[403] * _sqrt(4. * unkR[401]/3.14159265358979,"4 * Injector_F_1.A_d / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-323]  Injector_O_1.PR_sl =  IF[83] (LPRES.State(GasGen_1.f_O.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[428] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[428] = 0. ;
}
//[E-324]  Injector_O_1.p_out_ch =  IF[84] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.f_in.pt / Injector_O_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[431] = _div( unkR[430] , unkR[428],"Injector_O_1.PR_sl") ;
}
else 
{
unkR[431] = 0. ;
}
//[E-325]  Injector_O_1.A_sl =  IF[85] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) * Injector_O_1.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[424] = _div( _sqrt(unkR[229] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[259] , (LPRES__FGAMMA(&unkR[64]) * unkR[430]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt") ;
}
else 
{
unkR[424] = 0. ;
}
//[E-326]  GasGen_1.f_O.p =  IF[86] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(GasGen_1.p_c, Injector_O_1.p_out_ch)	 ELSE GasGen_1.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[260] = MATH__max(unkR[257], unkR[431]) ;
}
else 
{
unkR[260] = unkR[257] ;
}
//[E-327]  Injector_O_1.A_d =  IF[88] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.A_sl * ((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O_1.M_out	 ELSE Injector_O_1.W / Injector_O_1.C_D / sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[423] = _div( unkR[424] * _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[426] , 2.,"(Injector_O_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[426],"Injector_O_1.M_out") ;
}
else 
{
unkR[423] = _div( _div( unkR[259] , unkR[425],"Injector_O_1.C_D") , _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[430] - unkR[260]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p)"),"sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p))") ;
}
//[E-328]  Injector_O_1.v_ideal =  IF[89] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T)	 ELSE Injector_O_1.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.A_d * Injector_O_1.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[432] = unkR[426] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[258],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T") ;
}
else 
{
unkR[432] = _div( unkR[259] , (LPRES__rho(&unkR[64]) * unkR[423] * unkR[425]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.A_d * Injector_O_1.C_D") ;
}
//[E-329]  Injector_O_1.Re =  IF[90] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.v_ideal * Injector_O_1.C_D * sqrt(4 * Injector_O_1.A_d / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[429] = 0. ;
}
else 
{
unkR[429] = _div( LPRES__rho(&unkR[64]) * unkR[432] * unkR[425] * _sqrt(4. * unkR[423]/3.14159265358979,"4 * Injector_O_1.A_d / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-330]  FlowMeter_1.i.Data[1] = abs(FlowMeter_1.f_in.W)
unkR[228] = abs(unkR[226]) ;
//[E-331]  FlowMeter_1_1.i.Data[1] = abs(FlowMeter_1_1.f_in.W)
unkR[232] = abs(unkR[230]) ;
//[E-332]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[447] = LPRES__ISA_Pressure(unkR[435]) ;
//[E-333]  Nozzle_1.g.Tt = Turbine_ch.f_in.Tt - Turbine_ch.m.Power / (Turbine_ch.W * LPRES.cp(Nozzle_1.g.fluid))
unkR[444] = unkR[348] - _div( unkR[465] , (unkR[349] * LPRES__cp(&unkR[350])),"Turbine_ch.W * LPRES.cp(Nozzle_1.g.fluid)") ;
//[E-334]  Turbine_ch.alpha = Nozzle_1.g.Tt / Turbine_ch.f_in.Tt
unkR[461] = _div( unkR[444] , unkR[348],"Turbine_ch.f_in.Tt") ;
//[E-335]  Nozzle_1.g.pt = (1 - (1 - Turbine_ch.alpha) / Turbine_ch.eta_d) ** (1 / ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))) * GasGen_1.p_c
unkR[445] = _pow( (1. - _div( (1. - unkR[461]) , unkR[463],"Turbine_ch.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[350]) - 1.) , LPRES__gamma(&unkR[350]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)")),"(1 - (1 - Turbine_ch.alpha) / Turbine_ch.eta_d)**(1 / ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)))" ) * unkR[257] ;
//[E-336]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[440] = _div( unkR[445] , unkR[447],"Nozzle_1.p_amb") ;
//[E-337]  Nozzle_1.PR_sl = ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2) ** (LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))
unkR[441] = _pow( ((LPRES__gamma(&unkR[350]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[350]) , (LPRES__gamma(&unkR[350]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1")),"((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2)**(LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))" ) ;
//[E-338]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[449] = _div( unkR[445] , unkR[441],"Nozzle_1.PR_sl") ;
//[E-339]  Nozzle_1.A_sl = Turbine_ch.W * sqrt(Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)) / Nozzle_1.g.pt / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[438] = _div( _div( unkR[349] * _sqrt(unkR[444] * LPRES__R(&unkR[350]),"Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)") , unkR[445],"Nozzle_1.g.pt") , LPRES__FGAMMA(&unkR[350]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-340]  Nozzle_1.M_out =  ZONE[7] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))	  OTHERS 1
 if(m_branchZone[6]==0)
	unkR[439] = _sqrt(_div( 2. * (_pow( unkR[440] , (_div( (LPRES__gamma(&unkR[350]) - 1.) , LPRES__gamma(&unkR[350]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" ) - 1.) , (LPRES__gamma(&unkR[350]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)") ;
else unkR[439] = 1. ;
//[E-341]  Nozzle_1.A_d = Nozzle_1.A_sl * ((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1))) / Nozzle_1.M_out
unkR[437] = _div( unkR[438] * _pow( (_div( (2. + (LPRES__gamma(&unkR[350]) - 1.) * _pow( unkR[439] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[350]) + 1.),"LPRES.gamma(Nozzle_1.g.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[350]) + 1.) , (2. * (LPRES__gamma(&unkR[350]) - 1.)),"2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)")),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1))**((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))" ) , unkR[439],"Nozzle_1.M_out") ;
//[E-342]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[448] = MATH__max(unkR[447], unkR[449]) ;
//[E-343]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[442] = _div( unkR[444] , (1. + (LPRES__gamma(&unkR[350]) - 1.)/2. * _pow( unkR[439] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-344]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out)
unkR[450] = unkR[439] * _sqrt(LPRES__gamma(&unkR[350]) * LPRES__R(&unkR[350]) * unkR[442],"LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out") ;
//[E-345]  Nozzle_1.Thrust = Turbine_ch.W * Nozzle_1.v_out + Nozzle_1.A_d * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[443] = unkR[349] * unkR[450] + unkR[437] * (unkR[448] - unkR[447]) ;
//[E-346]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[446] = unkR[443] ;
//[E-347]  Turbine_ch.A_in_d = Turbine_ch.W * sqrt(Turbine_ch.f_in.Tt * LPRES.R(Nozzle_1.g.fluid)) / (cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid)) / GasGen_1.p_c
unkR[460] = _div( _div( unkR[349] * _sqrt(unkR[348] * LPRES__R(&unkR[350]),"Turbine_ch.f_in.Tt * LPRES.R(Nozzle_1.g.fluid)") , (cos(unkR[462] * 3.14159265358979/180.) * LPRES__FGAMMA(&unkR[350])),"cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid)") , unkR[257],"GasGen_1.p_c") ;
//[E-348]  Turbine_ch.m.N = Turbine_ch.rpm * 2 * 3.14159265358979 / 60
unkR[464] = unkR[467] * 2. * 3.14159265358979/60. ;

//save last residues
memcpy(this->res,res,2*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_GG_completa_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[183])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[0] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[457] , unkR[456],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[0] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[350])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",773,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[350])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",111,"Turbine_ch.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_GG_completa_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[290] * unkR[261] + unkR[291] * unkR[262] + unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284] + unkR[314] * unkR[285] + unkR[315] * unkR[286]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[290] * unkR[261] + unkR[291] * unkR[262] + unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284] + unkR[314] * unkR[285] + unkR[315] * unkR[286]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[3]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[4]= unkI[2] - 1; //GasGen_1.Combustion
    ev[5]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[6]= unkR[416] - unkR[417]; //Injector_O.PR < Injector_O.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[8]= unkR[416] - unkR[417]; //Injector_O.PR >= Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[10]= unkR[393] - unkR[394]; //Injector_F.PR < Injector_F.PR_sl
    ev[11]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[12]= unkR[393] - unkR[394]; //Injector_F.PR >= Injector_F.PR_sl
    ev[13]= unkI[0] - 1; //CombCha_1.Combustion
    ev[14]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[15]= unkR[405] - unkR[406]; //Injector_F_1.PR < Injector_F_1.PR_sl
    ev[16]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[17]= unkR[405] - unkR[406]; //Injector_F_1.PR >= Injector_F_1.PR_sl
    ev[18]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[19]= unkR[427] - unkR[428]; //Injector_O_1.PR < Injector_O_1.PR_sl
    ev[20]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[21]= unkR[427] - unkR[428]; //Injector_O_1.PR >= Injector_O_1.PR_sl
    ev[22]= unkR[440] - unkR[441]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_GG_completa_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_GG_completa_partition1::executeWhen(double *_time,  int index )
{
  if ( index == 0 )
  {
	unkI[2] = 0 ;
	return;
  }

  if ( index == 1 )
  {
	unkI[2] = 1 ;
	return;
  }

  if ( index == 2 )
  {
	unkI[0] = 0 ;
	return;
  }

  if ( index == 3 )
  {
	unkI[0] = 1 ;
	return;
  }

}

/* Evaluation of ZONE conditions*/
void DRLPRUEBAS__CC_GG_completa_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // GasGen_1.Q_comb_effective =  ZONE (GasGen_1.Combustion) GasGen_1.Q_comb OTHERS 0
     branchZone[0] = (cont[4] ) ? 0 : 1;
     // Injector_O.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[5]  && cont[6] ) ? 0 : (cont[7]  && cont[8] ) ? 1 : 2;
     // Injector_F.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[9]  && cont[10] ) ? 0 : (cont[11]  && cont[12] ) ? 1 : 2;
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[3] = (cont[13] ) ? 0 : 1;
     // Injector_F_1.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1 OTHERS 0
     branchZone[4] = (cont[14]  && cont[15] ) ? 0 : (cont[16]  && cont[17] ) ? 1 : 2;
     // Injector_O_1.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1 OTHERS 0
     branchZone[5] = (cont[18]  && cont[19] ) ? 0 : (cont[20]  && cont[21] ) ? 1 : 2;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)) OTHERS 1
     branchZone[6] = (cont[22] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_GG_completa_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 23 ;
	nConstraints= 60;
	nWhen= 4;
	nZones= 7;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[4]= { "(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0",
		"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "GasGen_1.Combustion","OTHERS",
	"LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"CombCha_1.Combustion","OTHERS",
	"LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl","LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl","OTHERS",
	"LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl","LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl","OTHERS",
	"Nozzle_1.PR < Nozzle_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,5,8,10,13,16 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[23]= { { WHEN,NOT_EQ_OP,0,0,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"},{ WHEN,NOT_EQ_OP,0,2,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,3,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"GasGen_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"}
,{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F_1.PR < Injector_F_1.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F_1.PR >= Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O_1.PR < Injector_O_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_O_1.PR >= Injector_O_1.PR_sl"},{ ZONE,LT_OP,0,0,"Nozzle_1.PR < Nozzle_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__CC_GG_completa_partition1::initDelays()
{
}


bool DRLPRUEBAS__CC_GG_completa_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_GG_completa_partition1 = 80192;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_GG_completa_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_GG_completa_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_GG_completa_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_GG_completa_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_GG_completa_partition1;
return true;
}



bool DRLPRUEBAS__CC_GG_completa_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_GG_completa_partition1 = 48;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_GG_completa_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_completa_partition1[] = 
{
"AgAAAAIAAAAAAAAAAQAAAAEAAAABAAAAAgAAAAAAAAAAAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_GG_completa_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_GG_completa_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_completa_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_GG_completa_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_GG_completa_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_GG_completa_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_GG_completa_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_GG_completa_partition1(name,dirInstall);
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
	sprintf(componentName,"%s","CC_GG_completa");
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+g+g_completa.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

