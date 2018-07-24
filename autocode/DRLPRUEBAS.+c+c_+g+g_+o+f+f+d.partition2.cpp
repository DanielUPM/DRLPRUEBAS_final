//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_OFFD_partition2_CPP
#define DRLPRUEBAS__CC_GG_OFFD_partition2_CPP

#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition2.h"

DRLPRUEBAS__CC_GG_OFFD_partition2* DRLPRUEBAS__CC_GG_OFFD_partition2::s_current= NULL;

DRLPRUEBAS__CC_GG_OFFD_partition2::DRLPRUEBAS__CC_GG_OFFD_partition2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_GG_OFFD";
m_infoPartitionName = "partition2";
m_infoModelName = "DRLPRUEBAS__CC_GG_OFFD_partition2";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition2";
m_infoModelFileNameExtra = "+c+c_+g+g_+o+f+f+d.partition2";
m_perfFlag = false;
m_infoComponentDate = "26/06/2018 11:17:07.228000";
m_infoPartitionDate = "26/06/2018 11:17:24.906000";
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
n_dyn=11;
dyn= new double[11] ;
static double tmp_dynInit[11]={ 0, 1, 0, 1, 10, 10, 1, 100, 1, 1, 100 } ;
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

n_unkR=459;
unkR= new double[459] ;
static double tmp_unkRInit[459]={ 10, 5, 1, 0.637328951, 1, 23, 172, 31.9988, 0, 0, 2.27, 0, 11000000, 0, 1, 0, 
		4000, 3000, 0, 0, 2000, 0, 0, 0, 0, 0, 2169, 0, 1, 1, 1, 1, 
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
		1, 1, 1, 0, 0, 0, 0, 0, 10, 6800000, 5000000, 0, 1, 0.035, 0, 301.365293, 
		1, 13101196, 0, 85.4960317, 1, 9001195.99, 0, 15, 2.01594, 31.9988, 0, 8, 14700000, 0, 0, 4000, 
		1200, 0, 0, 200, 0, 0, 0, 0, 0, 3500, 0, 1, 1, 1, 1, 1, 
		1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 70, 5000000, 5000000, 0, 50, 0.032, 
		0.0143139263, 0, 0.5, 0, 0, 0, 722.652542, 1, 0, 0, 0.00143857805, 0, 0.5, 0, 0, 0, 
		65.3474576, 1, 0, 0, 0.0489035601, 0, 0.5, 0, 10, 0, 0, 1777.23746, 1, 0, 0, 0.000479916864, 
		0, 0.5, 0, 10, 0, 0, 11.7625424, 1, 0, 0, 1, 1, 0, 0.141328748, 0, 0, 
		0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 
		0, 0, 0.00899050767, 0, 77.11, 0, 45, 0.8, 1, 10, 5550 } ;
unkRInit= new double[459];
dcopy(459,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 0, 6, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=17;
static int tmp_cteIInit[17]={ 2, 4, 1, 1, 1, 4, 1, 4, 4, 4, 4, 2, 2, 4, 1, 1, 
		4 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=20;
static std::string tmp_cteSInit[20]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 60;
n_neld= 6;
m_numBoxes= 7;
m_nNonLinearBoxes= 7;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_GG_OFFD_partition2::initInternalModels()
{
}

void DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[4]) ) {
	_vi4 = setofElem(&typ[4], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


int DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi5;
	int _vi6;

	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[4]) ) {
	_vi6 = setofElem(&typ[4], _vi5) ;
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


int DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi7;
	int _vi8;
	double _vr2;

	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[4]) ) {
	_vi8 = setofElem(&typ[4], _vi7) ;
	_vr2 += _div( fluid[_vi8-1] , Chem_M[_vi7-1],"Chem_M[_vi7]") ;
	_vi7 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__rho(double fluid[])
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
	while ( _vi9 <= setofSize(&typ[3]) ) {
	_vi10 = setofElem(&typ[3], _vi9) ;
	_vr3 += Chem_rho[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__visc(double fluid[])
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
	while ( _vi11 <= setofSize(&typ[3]) ) {
	_vi12 = setofElem(&typ[3], _vi11) ;
	_vr4 += Chem_visc[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition2::LPRES__ISA_Pressure(const double & z)
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


/* Copy special unkR[] items to dyn[] vector */

void DRLPRUEBAS__CC_GG_OFFD_partition2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_GG_OFFD_partition2::initBlocks( double dyn[], double ldr[], double *_time )
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
	unkR[8] = 0.001 ;
	}
	else {
	unkR[8] = 100. ;
	}
	unkR[214] = _div( 1. , unkR[216],"CombCha_1.mfr_ch") ;
	unkR[215] = _div( 1. , (unkR[216] * unkR[17]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(GasGen_1.GasGen,100)
	LPRES__Init_fluid(27, &unkR[346]) ;
	unkI[2] = 1 ;
	unkR[381] = 1. ;
	unkR[242] = unkR[243] ;
	unkR[376] = _div( 1. , unkR[378],"GasGen_1.mfr_ch") ;
	unkR[377] = _div( 1. , (unkR[378] * unkR[240]),"GasGen_1.mfr_ch * GasGen_1.T_ch") ;
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[31]) ;
  // init(LO2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(Nozzle_1.Nozzle,0)
	dyn[9] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-66]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[391] , dyn[4],"Injector_F.PR") ;
//[E-67]  CombCha_1.f_F.p =  IF[62] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[392]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-68]  Injector_O.PR = Injector_O.f_in.pt / CombCha_1.f_O.p_c
unkR[408] = _div( unkR[412] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-69]  Injector_O.M_out =  ZONE[5] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[5] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[4]==0)
	unkR[407] = _sqrt(_div( 2. * (_pow( unkR[408] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[4]==1)
	unkR[407] = 1. ;
else unkR[407] = 0. ;
//[E-70]  CombCha_1.f_O.p =  IF[78] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[413]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-71]  CombCha_1.f_O.W =  IF[80] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt / sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[404] * LPRES__FGAMMA(&unkR[64]) * unkR[412] , _sqrt(unkR[227] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)"),"sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[407] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[407],"Injector_O.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[404] * unkR[406] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[412] - unkR[93]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p)") ;
}
//[E-72]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-73]  Injector_F.M_out =  ZONE[3] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[3] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[387] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[387] = 1. ;
else unkR[387] = 0. ;
//[E-74]  CombCha_1.f_F.W =  IF[64] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[384] * LPRES__FGAMMA(&unkR[31]) * unkR[391] , _sqrt(unkR[223] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)"),"sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[387] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[387],"Injector_F.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[384] * unkR[386] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[391] - unkR[60]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
}
//[E-75]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - GasGen_1.f_F.fluid[Comb_prod])
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
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-169]  GasGen_1.f_O.p_c = Injector_F_1.f_in.pt / Injector_F_1.PR
unkR[255] = _div( unkR[401] , dyn[5],"Injector_F_1.PR") ;
//[E-170]  GasGen_1.f_F.p =  IF[70] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_F_1.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[254] = MATH__max(unkR[255], unkR[402]) ;
}
else 
{
unkR[254] = unkR[255] ;
}
//[E-171]  Injector_O_1.PR = Injector_O_1.f_in.pt / GasGen_1.f_O.p_c
unkR[419] = _div( unkR[423] , unkR[255],"GasGen_1.f_O.p_c") ;
//[E-172]  Injector_O_1.M_out =  ZONE[6] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[6] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[5]==0)
	unkR[418] = _sqrt(_div( 2. * (_pow( unkR[419] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O_1.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[5]==1)
	unkR[418] = 1. ;
else unkR[418] = 0. ;
//[E-173]  GasGen_1.f_O.p =  IF[86] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_O_1.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[258] = MATH__max(unkR[255], unkR[424]) ;
}
else 
{
unkR[258] = unkR[255] ;
}
//[E-174]  GasGen_1.f_O.W =  IF[88] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.A * LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt / sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O_1.M_out)	 ELSE Injector_O_1.A * Injector_O_1.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[257] = _div( _div( unkR[415] * LPRES__FGAMMA(&unkR[64]) * unkR[423] , _sqrt(unkR[227] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)"),"sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[418] , 2.,"(Injector_O_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[418],"Injector_O_1.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O_1.M_out") ;
}
else 
{
unkR[257] = unkR[415] * unkR[417] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[423] - unkR[258]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p)") ;
}
//[E-175]  GasGen_1.W_O = GasGen_1.f_O.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[247] = unkR[257] * (1. - unkR[90]) ;
//[E-176]  Injector_F_1.M_out =  ZONE[4] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[4] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[397] = _sqrt(_div( 2. * (_pow( dyn[5] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F_1.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[397] = 1. ;
else unkR[397] = 0. ;
//[E-177]  GasGen_1.f_F.W =  IF[72] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.A * LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt / sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F_1.M_out)	 ELSE Injector_F_1.A * Injector_F_1.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[253] = _div( _div( unkR[394] * LPRES__FGAMMA(&unkR[31]) * unkR[401] , _sqrt(unkR[223] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)"),"sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[397] , 2.,"(Injector_F_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[397],"Injector_F_1.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F_1.M_out") ;
}
else 
{
unkR[253] = unkR[394] * unkR[396] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[401] - unkR[254]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p)") ;
}
//[E-178]  GasGen_1.W_F = GasGen_1.f_F.W * (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[242] = unkR[253] * (1. - unkR[57]) ;
//[E-179]  GasGen_1.OF = GasGen_1.W_O / GasGen_1.W_F
unkR[234] = _div( unkR[247] , unkR[242],"GasGen_1.W_F") ;
//[E-180]  GasGen_1.phi = GasGen_1.OF_st / GasGen_1.OF
unkR[381] = _div( unkR[235] , unkR[234],"GasGen_1.OF") ;
//[E-181]  GasGen_1.W_F_st = GasGen_1.W_F / GasGen_1.phi
unkR[244] = _div( unkR[242] , unkR[381],"GasGen_1.phi") ;
//[E-182]  GasGen_1.fluid_P[LOX] =  IF[30] (GasGen_1.Combustion) (GasGen_1.fluid_O[LOX] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LOX] * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[317] = _div( (unkR[288] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[259] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[317] = _div( (unkR[288] * unkR[247] + unkR[259] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-183]  GasGen_1.fluid_P[NTO] =  IF[31] (GasGen_1.Combustion) (GasGen_1.fluid_O[NTO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[NTO] * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[318] = _div( (unkR[289] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[260] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[318] = _div( (unkR[289] * unkR[247] + unkR[260] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-184]  GasGen_1.fluid_P[H2O2] =  IF[32] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O2] * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[319] = _div( (unkR[290] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[261] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[319] = _div( (unkR[290] * unkR[247] + unkR[261] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-185]  GasGen_1.fluid_P[HNO3] =  IF[33] (GasGen_1.Combustion) (GasGen_1.fluid_O[HNO3] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[HNO3] * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[320] = _div( (unkR[291] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[262] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[320] = _div( (unkR[291] * unkR[247] + unkR[262] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-186]  GasGen_1.fluid_P[LF2] =  IF[34] (GasGen_1.Combustion) (GasGen_1.fluid_O[LF2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LF2] * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[321] = _div( (unkR[292] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[263] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[321] = _div( (unkR[292] * unkR[247] + unkR[263] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-187]  GasGen_1.fluid_P[RP_1] =  IF[35] (GasGen_1.Combustion) (GasGen_1.fluid_O[RP_1] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[RP_1] * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[322] = _div( (unkR[293] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[264] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[322] = _div( (unkR[293] * unkR[247] + unkR[264] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-188]  GasGen_1.fluid_P[LCH4] =  IF[36] (GasGen_1.Combustion) (GasGen_1.fluid_O[LCH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LCH4] * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[323] = _div( (unkR[294] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[265] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[323] = _div( (unkR[294] * unkR[247] + unkR[265] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-189]  GasGen_1.fluid_P[LH2] =  IF[37] (GasGen_1.Combustion) (GasGen_1.fluid_O[LH2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LH2] * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[324] = _div( (unkR[295] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[266] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[324] = _div( (unkR[295] * unkR[247] + unkR[266] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-190]  GasGen_1.fluid_P[N2H4] =  IF[38] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2H4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2H4] * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[325] = _div( (unkR[296] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[267] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[325] = _div( (unkR[296] * unkR[247] + unkR[267] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-191]  GasGen_1.fluid_P[UDMH] =  IF[39] (GasGen_1.Combustion) (GasGen_1.fluid_O[UDMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[UDMH] * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[326] = _div( (unkR[297] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[268] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[326] = _div( (unkR[297] * unkR[247] + unkR[268] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-192]  GasGen_1.fluid_P[MMH] =  IF[40] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH] * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[327] = _div( (unkR[298] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[269] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[327] = _div( (unkR[298] * unkR[247] + unkR[269] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-193]  GasGen_1.fluid_P[JP_10] =  IF[41] (GasGen_1.Combustion) (GasGen_1.fluid_O[JP_10] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[JP_10] * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[328] = _div( (unkR[299] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[270] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[328] = _div( (unkR[299] * unkR[247] + unkR[270] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-194]  GasGen_1.fluid_P[Kerox] =  IF[42] (GasGen_1.Combustion) (GasGen_1.fluid_O[Kerox] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Kerox] * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[329] = _div( (unkR[300] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[271] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[329] = _div( (unkR[300] * unkR[247] + unkR[271] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-195]  GasGen_1.fluid_P[Oil] =  IF[43] (GasGen_1.Combustion) (GasGen_1.fluid_O[Oil] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Oil] * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[330] = _div( (unkR[301] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[272] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[330] = _div( (unkR[301] * unkR[247] + unkR[272] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-196]  GasGen_1.fluid_P[H2O] =  IF[44] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O] * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[331] = _div( (unkR[302] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[273] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[331] = _div( (unkR[302] * unkR[247] + unkR[273] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-197]  GasGen_1.fluid_P[IPA] =  IF[45] (GasGen_1.Combustion) (GasGen_1.fluid_O[IPA] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[IPA] * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[332] = _div( (unkR[303] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[274] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[332] = _div( (unkR[303] * unkR[247] + unkR[274] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-198]  GasGen_1.fluid_P[Air] =  IF[46] (GasGen_1.Combustion) (GasGen_1.fluid_O[Air] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Air] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Air] * GasGen_1.W_O + GasGen_1.fluid_F[Air] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[333] = _div( (unkR[304] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[275] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[333] = _div( (unkR[304] * unkR[247] + unkR[275] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-199]  GasGen_1.fluid_P[Ar] =  IF[47] (GasGen_1.Combustion) (GasGen_1.fluid_O[Ar] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Ar] * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[334] = _div( (unkR[305] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[276] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[334] = _div( (unkR[305] * unkR[247] + unkR[276] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-200]  GasGen_1.fluid_P[CH4] =  IF[48] (GasGen_1.Combustion) (GasGen_1.fluid_O[CH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CH4] * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[335] = _div( (unkR[306] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[277] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[335] = _div( (unkR[306] * unkR[247] + unkR[277] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-201]  GasGen_1.fluid_P[CO] =  IF[49] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO] * GasGen_1.W_O + GasGen_1.fluid_F[CO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[336] = _div( (unkR[307] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[278] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[336] = _div( (unkR[307] * unkR[247] + unkR[278] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-202]  GasGen_1.fluid_P[CO2] =  IF[50] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO2] * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[337] = _div( (unkR[308] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[279] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[337] = _div( (unkR[308] * unkR[247] + unkR[279] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-203]  GasGen_1.fluid_P[H2] =  IF[51] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2] * GasGen_1.W_O + GasGen_1.fluid_F[H2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[338] = _div( (unkR[309] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[280] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[338] = _div( (unkR[309] * unkR[247] + unkR[280] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-204]  GasGen_1.fluid_P[He] =  IF[52] (GasGen_1.Combustion) (GasGen_1.fluid_O[He] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[He] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[He] * GasGen_1.W_O + GasGen_1.fluid_F[He] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[339] = _div( (unkR[310] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[281] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[339] = _div( (unkR[310] * unkR[247] + unkR[281] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-205]  GasGen_1.fluid_P[N2] =  IF[53] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2] * GasGen_1.W_O + GasGen_1.fluid_F[N2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[340] = _div( (unkR[311] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[282] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[340] = _div( (unkR[311] * unkR[247] + unkR[282] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-206]  GasGen_1.fluid_P[O2] =  IF[54] (GasGen_1.Combustion) (GasGen_1.fluid_O[O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[O2] * GasGen_1.W_O + GasGen_1.fluid_F[O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[341] = _div( (unkR[312] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[283] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[341] = _div( (unkR[312] * unkR[247] + unkR[283] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-207]  GasGen_1.fluid_P[MMH_vapour] =  IF[55] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH_vapour] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH_vapour] * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[342] = _div( (unkR[313] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[284] * MATH__max(unkR[381] - 1., 0.) * unkR[244]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[342] = _div( (unkR[313] * unkR[247] + unkR[284] * unkR[242]) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-208]  GasGen_1.fluid_P[Comb_prod] =  IF[56] (GasGen_1.Combustion) (GasGen_1.fluid_O[Comb_prod] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Comb_prod] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st + (1 - MATH.max(1 - GasGen_1.phi, 0)) * (GasGen_1.W_O + GasGen_1.W_F_st)) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE 0
if( unkI[2] ) 
{
unkR[343] = _div( (unkR[314] * MATH__max(1. - unkR[381], 0.) * unkR[247] + unkR[285] * MATH__max(unkR[381] - 1., 0.) * unkR[244] + (1. - MATH__max(1. - unkR[381], 0.)) * (unkR[247] + unkR[244])) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[343] = 0. ;
}
//[E-209]  GasGen_1.f_O.p_c = GasGen_1.rho_trans * LPRES.R(GasGen_1.fluid_P) * GasGen_1.g.Tt
res[5] = evalNormResidueInternal(5,unkR[255],dyn[2] * LPRES__R(&unkR[317]) * dyn[3]);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-216]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-217]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-218]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-219]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-220]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-221]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-222]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-223]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-224]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-225]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-226]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-227]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-228]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-229]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-230]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-231]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-232]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-233]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-234]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-235]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-236]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-237]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-238]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-239]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-240]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-241]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-242]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[6],"ThrustMonitor.g.W") ;
//[E-243]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[6] = evalNormResidueInternal(6,dyn[6],_div( unkR[61] * unkR[3] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-256]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-272]  Nozzle_1.g.fluid[LOX] = GasGen_1.fluid_P[LOX] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[346] = _div( unkR[317] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-273]  Nozzle_1.g.fluid[NTO] = GasGen_1.fluid_P[NTO] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[347] = _div( unkR[318] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-274]  Nozzle_1.g.fluid[H2O2] = GasGen_1.fluid_P[H2O2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[348] = _div( unkR[319] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-275]  Nozzle_1.g.fluid[HNO3] = GasGen_1.fluid_P[HNO3] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[349] = _div( unkR[320] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-276]  Nozzle_1.g.fluid[LF2] = GasGen_1.fluid_P[LF2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[350] = _div( unkR[321] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-277]  Nozzle_1.g.fluid[RP_1] = GasGen_1.fluid_P[RP_1] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[351] = _div( unkR[322] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-278]  Nozzle_1.g.fluid[LCH4] = GasGen_1.fluid_P[LCH4] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[352] = _div( unkR[323] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-279]  Nozzle_1.g.fluid[LH2] = GasGen_1.fluid_P[LH2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[353] = _div( unkR[324] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-280]  Nozzle_1.g.fluid[N2H4] = GasGen_1.fluid_P[N2H4] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[354] = _div( unkR[325] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-281]  Nozzle_1.g.fluid[UDMH] = GasGen_1.fluid_P[UDMH] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[355] = _div( unkR[326] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-282]  Nozzle_1.g.fluid[MMH] = GasGen_1.fluid_P[MMH] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[356] = _div( unkR[327] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-283]  Nozzle_1.g.fluid[JP_10] = GasGen_1.fluid_P[JP_10] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[357] = _div( unkR[328] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-284]  Nozzle_1.g.fluid[Kerox] = GasGen_1.fluid_P[Kerox] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[358] = _div( unkR[329] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-285]  Nozzle_1.g.fluid[Oil] = GasGen_1.fluid_P[Oil] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[359] = _div( unkR[330] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-286]  Nozzle_1.g.fluid[H2O] = GasGen_1.fluid_P[H2O] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[360] = _div( unkR[331] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-287]  Nozzle_1.g.fluid[IPA] = GasGen_1.fluid_P[IPA] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[361] = _div( unkR[332] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-288]  Nozzle_1.g.fluid[Air] = GasGen_1.fluid_P[Air] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[362] = _div( unkR[333] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-289]  Nozzle_1.g.fluid[Ar] = GasGen_1.fluid_P[Ar] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[363] = _div( unkR[334] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-290]  Nozzle_1.g.fluid[CH4] = GasGen_1.fluid_P[CH4] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[364] = _div( unkR[335] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-291]  Nozzle_1.g.fluid[CO] = GasGen_1.fluid_P[CO] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[365] = _div( unkR[336] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-292]  Nozzle_1.g.fluid[CO2] = GasGen_1.fluid_P[CO2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[366] = _div( unkR[337] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-293]  Nozzle_1.g.fluid[H2] = GasGen_1.fluid_P[H2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[367] = _div( unkR[338] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-294]  Nozzle_1.g.fluid[He] = GasGen_1.fluid_P[He] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[368] = _div( unkR[339] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-295]  Nozzle_1.g.fluid[N2] = GasGen_1.fluid_P[N2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[369] = _div( unkR[340] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-296]  Nozzle_1.g.fluid[O2] = GasGen_1.fluid_P[O2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[370] = _div( unkR[341] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-297]  Nozzle_1.g.fluid[MMH_vapour] = GasGen_1.fluid_P[MMH_vapour] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[371] = _div( unkR[342] * (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") ;
//[E-298]  Nozzle_1.g.fluid[Comb_prod] = (GasGen_1.fluid_P[Comb_prod] * (GasGen_1.W_O + GasGen_1.W_F) + GasGen_1.W_IO + GasGen_1.W_IF) / Nozzle_1.g.W
unkR[372] = _div( (unkR[343] * (unkR[247] + unkR[242]) + unkR[246] + unkR[245]) , dyn[8],"Nozzle_1.g.W") ;
//[E-299]  cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid) = Nozzle_1.g.W * sqrt(GasGen_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)) / (GasGen_1.f_O.p_c * Turbine_ch.A_in)
res[8] = evalNormResidueInternal(8,cos(unkR[454] * 3.14159265358979/180.) * LPRES__FGAMMA(&unkR[346]),_div( dyn[8] * _sqrt(dyn[3] * LPRES__R(&unkR[346]),"GasGen_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)") , (unkR[255] * unkR[450]),"GasGen_1.f_O.p_c * Turbine_ch.A_in"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-327]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[432] = _div( dyn[9] , unkR[438],"Nozzle_1.p_amb") ;
//[E-328]  Nozzle_1.M_out =  ZONE[7] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))	  OTHERS 1
 if(m_branchZone[6]==0)
	unkR[431] = _sqrt(_div( 2. * (_pow( unkR[432] , (_div( (LPRES__gamma(&unkR[346]) - 1.) , LPRES__gamma(&unkR[346]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" ) - 1.) , (LPRES__gamma(&unkR[346]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)") ;
else unkR[431] = 1. ;
//[E-329]  Nozzle_1.A_sl = Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))
unkR[430] = _div( unkR[429] * unkR[431] , _pow( (_div( (2. + (LPRES__gamma(&unkR[346]) - 1.) * _pow( unkR[431] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[346]) + 1.),"LPRES.gamma(Nozzle_1.g.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[346]) + 1.) , (2. * (LPRES__gamma(&unkR[346]) - 1.)),"2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)")),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1))**((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))" ),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))") ;
//[E-330]  Nozzle_1.g.Tt = (Nozzle_1.A_sl * LPRES.FGAMMA(Nozzle_1.g.fluid) * Nozzle_1.g.pt / Nozzle_1.g.W) ** 2 / LPRES.R(Nozzle_1.g.fluid)
unkR[436] = _div( _pow( (_div( unkR[430] * LPRES__FGAMMA(&unkR[346]) * dyn[9] , dyn[8],"Nozzle_1.g.W")) , 2.,"(Nozzle_1.A_sl * LPRES.FGAMMA(Nozzle_1.g.fluid) * Nozzle_1.g.pt / Nozzle_1.g.W)**(2)" ) , LPRES__R(&unkR[346]),"LPRES.R(Nozzle_1.g.fluid)") ;
//[E-331]  Turbine_ch.alpha = Nozzle_1.g.Tt / GasGen_1.g.Tt
unkR[453] = _div( unkR[436] , dyn[3],"GasGen_1.g.Tt") ;
//[E-332]  Turbine_ch.alpha = 1 - Turbine_ch.eta_d * (1 - (Nozzle_1.g.pt / GasGen_1.f_O.p_c) ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)))
res[9] = evalNormResidueInternal(9,unkR[453],1 - unkR[455] * (1 - _pow( (_div( dyn[9] , unkR[255],"GasGen_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[346]) - 1) , LPRES__gamma(&unkR[346]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.g.pt / GasGen_1.f_O.p_c)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" )));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(6);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(11, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn6, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-341]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[10] = evalNormResidueInternal(10,_div( _div( dyn[6] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[10] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[10] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition2& m= *DRLPRUEBAS__CC_GG_OFFD_partition2::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition2::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_GG_OFFD_partition2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;
//[E-2]  LPRES.Init_fluid(LO2_circuit_1.fluid, GasGen_1.f_O.fluid) %%% (OUT VAR)GasGen_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
//[E-3]  Injector_O.f_in.pt = LO2_circuit_1.pt * SplitFrac_O.TPL
unkR[412] = unkR[229] * unkR[442] ;
//[E-4]  CombCha_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-5]  LPRES.Init_fluid(LH2_circuit_1.fluid, GasGen_1.f_F.fluid) %%% (OUT VAR)GasGen_1.f_F.fluid 
LPRES__Init_fluid(unkI[3], &unkR[31]);
//[E-6]  Injector_F.f_in.pt = LH2_circuit_1.pt * SplitFrac_O_1.TPL
unkR[391] = unkR[225] * unkR[443] ;
//[E-7]  Injector_F.PR_sl =  IF[59] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[388] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[388] = 0. ;
}
//[E-8]  Injector_F.p_out_ch =  IF[60] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[392] = _div( unkR[391] , unkR[388],"Injector_F.PR_sl") ;
}
else 
{
unkR[392] = 0. ;
}
//[E-9]  CombCha_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-60]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-61]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-62]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[5] ;
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
//[E-64]  Injector_O.PR_sl =  IF[75] (LPRES.State(GasGen_1.f_O.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[409] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[409] = 0. ;
}
//[E-65]  Injector_O.p_out_ch =  IF[76] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[413] = _div( unkR[412] , unkR[409],"Injector_O.PR_sl") ;
}
else 
{
unkR[413] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-107]  Injector_O_1.f_in.pt = LO2_circuit_1.pt * SplitFrac_O.TPL
unkR[423] = unkR[229] * unkR[442] ;
//[E-108]  GasGen_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[288] = _div( unkR[64] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-109]  Injector_F_1.f_in.pt = LH2_circuit_1.pt * SplitFrac_O_1.TPL
unkR[401] = unkR[225] * unkR[443] ;
//[E-110]  Injector_F_1.PR_sl =  IF[67] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[398] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[398] = 0. ;
}
//[E-111]  Injector_F_1.p_out_ch =  IF[68] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.f_in.pt / Injector_F_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[402] = _div( unkR[401] , unkR[398],"Injector_F_1.PR_sl") ;
}
else 
{
unkR[402] = 0. ;
}
//[E-112]  GasGen_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[259] = _div( unkR[31] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-113]  GasGen_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[289] = _div( unkR[65] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-114]  GasGen_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[260] = _div( unkR[32] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-115]  GasGen_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[290] = _div( unkR[66] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-116]  GasGen_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[261] = _div( unkR[33] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-117]  GasGen_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[291] = _div( unkR[67] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-118]  GasGen_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[262] = _div( unkR[34] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-119]  GasGen_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[292] = _div( unkR[68] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-120]  GasGen_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[263] = _div( unkR[35] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-121]  GasGen_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[293] = _div( unkR[69] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-122]  GasGen_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[264] = _div( unkR[36] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-123]  GasGen_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[294] = _div( unkR[70] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-124]  GasGen_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[265] = _div( unkR[37] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-125]  GasGen_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[295] = _div( unkR[71] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-126]  GasGen_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[266] = _div( unkR[38] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-127]  GasGen_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[296] = _div( unkR[72] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-128]  GasGen_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[267] = _div( unkR[39] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-129]  GasGen_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[297] = _div( unkR[73] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-130]  GasGen_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[268] = _div( unkR[40] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-131]  GasGen_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[298] = _div( unkR[74] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-132]  GasGen_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[269] = _div( unkR[41] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-133]  GasGen_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[299] = _div( unkR[75] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-134]  GasGen_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[270] = _div( unkR[42] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-135]  GasGen_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[300] = _div( unkR[76] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-136]  GasGen_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[271] = _div( unkR[43] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-137]  GasGen_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[301] = _div( unkR[77] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-138]  GasGen_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[272] = _div( unkR[44] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-139]  GasGen_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[302] = _div( unkR[78] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-140]  GasGen_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[273] = _div( unkR[45] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-141]  GasGen_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[303] = _div( unkR[79] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-142]  GasGen_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[274] = _div( unkR[46] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-143]  GasGen_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[304] = _div( unkR[80] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-144]  GasGen_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[275] = _div( unkR[47] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-145]  GasGen_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[305] = _div( unkR[81] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-146]  GasGen_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[276] = _div( unkR[48] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-147]  GasGen_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[306] = _div( unkR[82] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-148]  GasGen_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[277] = _div( unkR[49] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-149]  GasGen_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[307] = _div( unkR[83] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-150]  GasGen_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[278] = _div( unkR[50] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-151]  GasGen_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[308] = _div( unkR[84] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-152]  GasGen_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[279] = _div( unkR[51] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-153]  GasGen_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[309] = _div( unkR[85] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-154]  GasGen_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[280] = _div( unkR[52] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-155]  GasGen_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[310] = _div( unkR[86] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-156]  GasGen_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[281] = _div( unkR[53] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-157]  GasGen_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[311] = _div( unkR[87] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-158]  GasGen_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[282] = _div( unkR[54] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-159]  GasGen_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[312] = _div( unkR[88] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-160]  GasGen_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[283] = _div( unkR[55] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-161]  GasGen_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[313] = _div( unkR[89] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-162]  GasGen_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[284] = _div( unkR[56] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-163]  GasGen_1.fluid_O[Comb_prod] = 0
unkR[314] = 0. ;
//[E-164]  GasGen_1.fluid_F[Comb_prod] = 0
unkR[285] = 0. ;
//[E-165]  GasGen_1.fluid_P[Comb_prod_M] =  IF[57] (GasGen_1.Combustion) GasGen_1.M_P	 ELSE 0
if( unkI[2] ) 
{
unkR[344] = unkR[231] ;
}
else 
{
unkR[344] = 0. ;
}
//[E-166]  GasGen_1.fluid_P[Comb_prod_cp] =  IF[58] (GasGen_1.Combustion) GasGen_1.cp_P	 ELSE 0
if( unkI[2] ) 
{
unkR[345] = unkR[249] ;
}
else 
{
unkR[345] = 0. ;
}
//[E-167]  Injector_O_1.PR_sl =  IF[83] (LPRES.State(GasGen_1.f_O.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[420] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[420] = 0. ;
}
//[E-168]  Injector_O_1.p_out_ch =  IF[84] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.f_in.pt / Injector_O_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[424] = _div( unkR[423] , unkR[420],"Injector_O_1.PR_sl") ;
}
else 
{
unkR[424] = 0. ;
}

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-210]  FlowMeter_1_1.f_in.W = CombCha_1.f_O.W + GasGen_1.f_O.W
unkR[228] = unkR[63] + unkR[257] ;
//[E-211]  CombCha_1.W_IO = FlowMeter_1_1.f_in.W - GasGen_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[228] - unkR[257] - unkR[24] ;
//[E-212]  FlowMeter_1.f_in.W = CombCha_1.f_F.W + GasGen_1.f_F.W
unkR[224] = unkR[30] + unkR[253] ;
//[E-213]  CombCha_1.W_IF = FlowMeter_1.f_in.W - GasGen_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[224] - unkR[253] - unkR[19] ;
//[E-214]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-215]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-244]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[6]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-245]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-246]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-247]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-248]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-249]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-250]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-251]  CombCha_1.f_O.T =  IF[79] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit_1.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[227] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[407] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[227] ;
}
//[E-252]  CombCha_1.f_F.T =  IF[63] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[223] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[387] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[223] ;
}
//[E-253]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-254]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-255]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * GasGen_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * GasGen_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[6],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[6],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[6],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[6] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-257]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-258]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
//[E-259]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-260]  CombCha_1.M_r = 1
unkR[8] = 1. ;
//[E-261]  CombCha_1.h.T = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-262]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-263]  CombCha_1.h.A = 0
unkR[210] = 0. ;
//[E-264]  CombCha_1.h_g = 0
unkR[212] = 0. ;
//[E-265]  CombCha_1.h.Q = 0
unkR[211] = 0. ;
//[E-266]  FlowMeter_1.i.Data[1] = abs(FlowMeter_1.f_in.W)
unkR[226] = abs(unkR[224]) ;
//[E-267]  FlowMeter_1_1.i.Data[1] = abs(FlowMeter_1_1.f_in.W)
unkR[230] = abs(unkR[228]) ;
//[E-268]  GasGen_1.W_IO = GasGen_1.f_O.W - GasGen_1.W_O
unkR[246] = unkR[257] - unkR[247] ;
//[E-269]  GasGen_1.W_IF = GasGen_1.f_F.W - GasGen_1.W_F
unkR[245] = unkR[253] - unkR[242] ;
//[E-270]  Nozzle_1.g.fluid[Comb_prod_M] = GasGen_1.fluid_P[Comb_prod_M]
unkR[373] = unkR[344] ;
//[E-271]  Nozzle_1.g.fluid[Comb_prod_cp] = GasGen_1.fluid_P[Comb_prod_cp]
unkR[374] = unkR[345] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-300]  GasGen_1.rho_trans' = (GasGen_1.f_O.W + GasGen_1.f_F.W - Nozzle_1.g.W) / (GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1))
ldr[2] = _div( (unkR[257] + unkR[253] - dyn[8]) , (_div( unkR[383] , (unkR[382] * unkR[376]),"GasGen_1.rho_ch * GasGen_1.k_1")),"GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1)") ;
//[E-301]  GasGen_1.Q_comb_effective =  ZONE[2] (GasGen_1.Combustion) GasGen_1.Q_comb	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[237] = unkR[236] ;
else unkR[237] = 0. ;
//[E-302]  GasGen_1.fluid_O[Comb_prod_M] = 0
unkR[315] = 0. ;
//[E-303]  GasGen_1.fluid_O[Comb_prod_cp] = 0
unkR[316] = 0. ;
//[E-304]  GasGen_1.fluid_F[Comb_prod_M] = 0
unkR[286] = 0. ;
//[E-305]  GasGen_1.fluid_F[Comb_prod_cp] = 0
unkR[287] = 0. ;
//[E-306]  GasGen_1.cp_R = (GasGen_1.W_O * LPRES.cp(GasGen_1.fluid_O) + GasGen_1.W_F * LPRES.cp(GasGen_1.fluid_F)) / (GasGen_1.W_O + GasGen_1.W_F)
unkR[250] = _div( (unkR[247] * LPRES__cp(&unkR[288]) + unkR[242] * LPRES__cp(&unkR[259])) , (unkR[247] + unkR[242]),"GasGen_1.W_O + GasGen_1.W_F") ;
//[E-307]  GasGen_1.f_O.T =  IF[87] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O_1.M_out ** 2)	 ELSE LO2_circuit_1.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[256] = _div( unkR[227] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[418] , 2.,"(Injector_O_1.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O_1.M_out ** 2") ;
}
else 
{
unkR[256] = unkR[227] ;
}
//[E-308]  GasGen_1.f_F.T =  IF[71] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[252] = _div( unkR[223] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[397] , 2.,"(Injector_F_1.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2") ;
}
else 
{
unkR[252] = unkR[223] ;
}
//[E-309]  GasGen_1.T_in = (LPRES.cp(GasGen_1.fluid_O) * GasGen_1.f_O.T + GasGen_1.phi / GasGen_1.OF_st * LPRES.cp(GasGen_1.fluid_F) * GasGen_1.f_F.T) / ((1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R)
unkR[241] = _div( (LPRES__cp(&unkR[288]) * unkR[256] + _div( unkR[381] , unkR[235],"GasGen_1.OF_st") * LPRES__cp(&unkR[259]) * unkR[252]) , ((1. + _div( unkR[381] , unkR[235],"GasGen_1.OF_st")) * unkR[250]),"(1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R") ;
//[E-310]  GasGen_1.T_c = (GasGen_1.eta_d * GasGen_1.Q_comb_effective / ((1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)) + GasGen_1.cp_R * (GasGen_1.T_in - 298.15)) / LPRES.cp(GasGen_1.fluid_P) + 298.15
unkR[238] = _div( (_div( unkR[251] * unkR[237] , (_div( (1. + unkR[234]) , MATH__min(unkR[234], unkR[235]),"MATH.min(GasGen_1.OF, GasGen_1.OF_st)")),"(1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)") + unkR[250] * (unkR[241] - 298.15)) , LPRES__cp(&unkR[317]),"LPRES.cp(GasGen_1.fluid_P)") + 298.15 ;
//[E-311]  GasGen_1.g.Tt' = (((GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W * LPRES.cp(GasGen_1.fluid_P) * (GasGen_1.g.Tt - GasGen_1.T_c) + GasGen_1.W_IO / Nozzle_1.g.W * GasGen_1.f_O.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - GasGen_1.f_O.T) + GasGen_1.W_IF / Nozzle_1.g.W * GasGen_1.f_F.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - GasGen_1.f_F.T)) / -(GasGen_1.temp_ch / (Nozzle_1.g.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch)) - GasGen_1.g.Tt * LPRES.cv(GasGen_1.fluid_P) * GasGen_1.rho_trans') / (GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P))
ldr[3] = _div( (_div( (_div( (unkR[247] + unkR[242]) , dyn[8],"Nozzle_1.g.W") * LPRES__cp(&unkR[317]) * (dyn[3] - unkR[238]) + _div( unkR[246] , dyn[8],"Nozzle_1.g.W") * unkR[92] * (dyn[3] - unkR[256]) + _div( unkR[245] , dyn[8],"Nozzle_1.g.W") * unkR[59] * (dyn[3] - unkR[252])) , -(_div( unkR[383] , (dyn[8] * unkR[382] * unkR[377] * unkR[240]),"Nozzle_1.g.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch")),"-(GasGen_1.temp_ch / (Nozzle_1.g.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch))") - dyn[3] * LPRES__cv(&unkR[317]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[317])),"GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P)") ;
//[E-312]  GasGen_1.c_star = sqrt(LPRES.R(Nozzle_1.g.fluid) * GasGen_1.g.Tt) / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[248] = _div( _sqrt(LPRES__R(&unkR[346]) * dyn[3],"LPRES.R(Nozzle_1.g.fluid) * GasGen_1.g.Tt") , LPRES__FGAMMA(&unkR[346]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-313]  GasGen_1.i.Data[1] = GasGen_1.c_star
unkR[375] = unkR[248] ;
//[E-314]  Injector_F.A_sl =  IF[61] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[385] = _div( _sqrt(unkR[223] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[391]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[385] = 0. ;
}
//[E-315]  Injector_F.v_ideal =  IF[65] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[393] = unkR[387] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[393] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[384] * unkR[386]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-316]  Injector_F.Re =  IF[66] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[389] = 0. ;
}
else 
{
unkR[389] = _div( LPRES__rho(&unkR[31]) * unkR[393] * unkR[386] * _sqrt(4. * unkR[384]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-317]  Injector_F_1.A_sl =  IF[69] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) * GasGen_1.f_F.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[395] = _div( _sqrt(unkR[223] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[253] , (LPRES__FGAMMA(&unkR[31]) * unkR[401]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt") ;
}
else 
{
unkR[395] = 0. ;
}
//[E-318]  Injector_F_1.v_ideal =  IF[73] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T)	 ELSE GasGen_1.f_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.A * Injector_F_1.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[403] = unkR[397] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[252],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T") ;
}
else 
{
unkR[403] = _div( unkR[253] , (LPRES__rho(&unkR[31]) * unkR[394] * unkR[396]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.A * Injector_F_1.C_D") ;
}
//[E-319]  Injector_F_1.Re =  IF[74] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.v_ideal * Injector_F_1.C_D * sqrt(4 * Injector_F_1.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[399] = 0. ;
}
else 
{
unkR[399] = _div( LPRES__rho(&unkR[31]) * unkR[403] * unkR[396] * _sqrt(4. * unkR[394]/3.14159265358979,"4 * Injector_F_1.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-320]  Injector_O.A_sl =  IF[77] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[405] = _div( _sqrt(unkR[227] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[412]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[405] = 0. ;
}
//[E-321]  Injector_O.v_ideal =  IF[81] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[414] = unkR[407] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[414] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[404] * unkR[406]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-322]  Injector_O.Re =  IF[82] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[410] = 0. ;
}
else 
{
unkR[410] = _div( LPRES__rho(&unkR[64]) * unkR[414] * unkR[406] * _sqrt(4. * unkR[404]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-323]  Injector_O_1.A_sl =  IF[85] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) * GasGen_1.f_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[416] = _div( _sqrt(unkR[227] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[257] , (LPRES__FGAMMA(&unkR[64]) * unkR[423]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt") ;
}
else 
{
unkR[416] = 0. ;
}
//[E-324]  Injector_O_1.v_ideal =  IF[89] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T)	 ELSE GasGen_1.f_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.A * Injector_O_1.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[425] = unkR[418] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[256],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T") ;
}
else 
{
unkR[425] = _div( unkR[257] , (LPRES__rho(&unkR[64]) * unkR[415] * unkR[417]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.A * Injector_O_1.C_D") ;
}
//[E-325]  Injector_O_1.Re =  IF[90] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.v_ideal * Injector_O_1.C_D * sqrt(4 * Injector_O_1.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[421] = 0. ;
}
else 
{
unkR[421] = _div( LPRES__rho(&unkR[64]) * unkR[425] * unkR[417] * _sqrt(4. * unkR[415]/3.14159265358979,"4 * Injector_O_1.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-326]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[438] = LPRES__ISA_Pressure(unkR[428]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-333]  Nozzle_1.PR_sl = ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2) ** (LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))
unkR[433] = _pow( ((LPRES__gamma(&unkR[346]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[346]) , (LPRES__gamma(&unkR[346]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1")),"((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2)**(LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))" ) ;
//[E-334]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[440] = _div( dyn[9] , unkR[433],"Nozzle_1.PR_sl") ;
//[E-335]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[439] = MATH__max(unkR[438], unkR[440]) ;
//[E-336]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[434] = _div( unkR[436] , (1. + (LPRES__gamma(&unkR[346]) - 1.)/2. * _pow( unkR[431] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-337]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out)
unkR[441] = unkR[431] * _sqrt(LPRES__gamma(&unkR[346]) * LPRES__R(&unkR[346]) * unkR[434],"LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out") ;
//[E-338]  Nozzle_1.Thrust = Nozzle_1.g.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[435] = dyn[8] * unkR[441] + unkR[429] * (unkR[439] - unkR[438]) ;
//[E-339]  Nozzle_1.i.Data[1] = Nozzle_1.Thrust
unkR[437] = unkR[435] ;
//[E-340]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[447] = LPRES__ISA_Pressure(unkR[428]) ;

if( restartB || m_solveInternalBox[7] ) 
    fhyb7(dyn,ldr,TOLERANCE,1,50);
else fbox7(_time,dyn,ldr,res) ;

//[E-342]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[444] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[10] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-343]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[448] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[10] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-344]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[449] = dyn[10] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[444],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-345]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[445] = dyn[6] * unkR[449] + unkR[2] * (unkR[448] - unkR[447]) ;
//[E-346]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[446] = unkR[445] ;
//[E-347]  Turbine_ch.m.Power = Nozzle_1.g.W * LPRES.cp(Nozzle_1.g.fluid) * (GasGen_1.g.Tt - Nozzle_1.g.Tt)
unkR[451] = dyn[8] * LPRES__cp(&unkR[346]) * (dyn[3] - unkR[436]) ;
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
void DRLPRUEBAS__CC_GG_OFFD_partition2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[346])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",754,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[10] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[448] , unkR[447],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[10] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[346])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",111,"Turbine_ch.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[288] * unkR[259] + unkR[289] * unkR[260] + unkR[290] * unkR[261] + unkR[291] * unkR[262] + unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
    ev[3]= unkR[288] * unkR[259] + unkR[289] * unkR[260] + unkR[290] * unkR[261] + unkR[291] * unkR[262] + unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
    ev[4]= unkI[0] - 1; //CombCha_1.Combustion
    ev[5]= unkI[2] - 1; //GasGen_1.Combustion
    ev[6]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[7]= dyn[4] - unkR[388]; //Injector_F.PR < Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[9]= dyn[4] - unkR[388]; //Injector_F.PR >= Injector_F.PR_sl
    ev[10]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[11]= dyn[5] - unkR[398]; //Injector_F_1.PR < Injector_F_1.PR_sl
    ev[12]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[13]= dyn[5] - unkR[398]; //Injector_F_1.PR >= Injector_F_1.PR_sl
    ev[14]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[15]= unkR[408] - unkR[409]; //Injector_O.PR < Injector_O.PR_sl
    ev[16]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[17]= unkR[408] - unkR[409]; //Injector_O.PR >= Injector_O.PR_sl
    ev[18]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[19]= unkR[419] - unkR[420]; //Injector_O_1.PR < Injector_O_1.PR_sl
    ev[20]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[21]= unkR[419] - unkR[420]; //Injector_O_1.PR >= Injector_O_1.PR_sl
    ev[22]= unkR[432] - unkR[433]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::executeWhen(double *_time,  int index )
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

  if ( index == 2 )
  {
	unkI[2] = 0 ;
	return;
  }

  if ( index == 3 )
  {
	unkI[2] = 1 ;
	return;
  }

}

/* Evaluation of ZONE conditions*/
void DRLPRUEBAS__CC_GG_OFFD_partition2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[4] ) ? 0 : 1;
     // GasGen_1.Q_comb_effective =  ZONE (GasGen_1.Combustion) GasGen_1.Q_comb OTHERS 0
     branchZone[1] = (cont[5] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[6]  && cont[7] ) ? 0 : (cont[8]  && cont[9] ) ? 1 : 2;
     // Injector_F_1.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[10]  && cont[11] ) ? 0 : (cont[12]  && cont[13] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[4] = (cont[14]  && cont[15] ) ? 0 : (cont[16]  && cont[17] ) ? 1 : 2;
     // Injector_O_1.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1 OTHERS 0
     branchZone[5] = (cont[18]  && cont[19] ) ? 0 : (cont[20]  && cont[21] ) ? 1 : 2;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)) OTHERS 1
     branchZone[6] = (cont[22] ) ? 0 : 1;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_GG_OFFD_partition2::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 23 ;
	nConstraints= 60;
	nWhen= 4;
	nZones= 7;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[4]= { "(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0",
		"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0",
		"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha_1.Combustion","OTHERS",
	"GasGen_1.Combustion","OTHERS",
	"LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl","LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl","OTHERS",
	"LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl","LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl","OTHERS",
	"Nozzle_1.PR < Nozzle_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,7,10,13,16 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[23]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ WHEN,NOT_EQ_OP,0,2,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,3,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"GasGen_1.Combustion"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"}
,{ ZONE,LT_OP,0,0,"Injector_F_1.PR < Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F_1.PR >= Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O_1.PR < Injector_O_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_O_1.PR >= Injector_O_1.PR_sl"},{ ZONE,LT_OP,0,0,"Nozzle_1.PR < Nozzle_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__CC_GG_OFFD_partition2::initDelays()
{
}


bool DRLPRUEBAS__CC_GG_OFFD_partition2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_GG_OFFD_partition2 = 89864;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_GG_OFFD_partition2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition2;
return true;
}



bool DRLPRUEBAS__CC_GG_OFFD_partition2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_GG_OFFD_partition2 = 488;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition2[] = 
{
"CwAAADwAAAAGAAAABwAAAAcAAAAEAAAABAAAAAMAAAADAAAABwAAAAgAAAAEAAAABQAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAMAAAAEAAAABgAAAAkAAAADAAAABAAAAAYAAAAJAAAAAQAAAAIAAAAFAAAAAwAAAAQAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAwAAAAQAAAAGAAAACQAAAAMAAAAEAAAABgAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAsAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_GG_OFFD_partition2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_GG_OFFD_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_GG_OFFD_partition2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_GG_OFFD_partition2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_GG_OFFD_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_GG_OFFD_partition2(name,dirInstall);
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
	sprintf(componentName,"%s","CC_GG_OFFD");
	sprintf(partitionName,"%s","partition2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

