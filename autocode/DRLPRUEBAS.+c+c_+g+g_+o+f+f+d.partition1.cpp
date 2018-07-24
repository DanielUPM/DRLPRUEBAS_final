//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_OFFD_partition1_CPP
#define DRLPRUEBAS__CC_GG_OFFD_partition1_CPP

#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition1.h"

DRLPRUEBAS__CC_GG_OFFD_partition1* DRLPRUEBAS__CC_GG_OFFD_partition1::s_current= NULL;

DRLPRUEBAS__CC_GG_OFFD_partition1::DRLPRUEBAS__CC_GG_OFFD_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_GG_OFFD";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__CC_GG_OFFD_partition1";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition1";
m_infoModelFileNameExtra = "+c+c_+g+g_+o+f+f+d.partition1";
m_perfFlag = false;
m_infoComponentDate = "26/06/2018 10:50:02.397000";
m_infoPartitionDate = "26/06/2018 10:50:39.386000";
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
		1, 1, 1, 0, 0, 0, 0, 0, 10, 6800000, 5000000, 0, 1, 0.032, 0, 301.365293, 
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::initInternalModels()
{
}

void DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition1::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_GG_OFFD_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_GG_OFFD_partition1::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-256]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox5(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox6(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn6, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-341]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[10] = evalNormResidueInternal(10,_div( _div( dyn[6] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[10] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[10] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition1::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition1& m= *DRLPRUEBAS__CC_GG_OFFD_partition1::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition1::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_GG_OFFD_partition1::fres( double *_time, double dyn[], double der[], double res[] )
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::checkAsserts(double *_time)
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_GG_OFFD_partition1::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_GG_OFFD_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_GG_OFFD_partition1::initDelays()
{
}


bool DRLPRUEBAS__CC_GG_OFFD_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_GG_OFFD_partition1 = 89864;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_GG_OFFD_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition1;
return true;
}



bool DRLPRUEBAS__CC_GG_OFFD_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_GG_OFFD_partition1 = 488;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition1[] = 
{
"CwAAADwAAAAGAAAABwAAAAcAAAAEAAAABAAAAAMAAAADAAAABwAAAAgAAAAEAAAABQAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAMAAAAEAAAABgAAAAkAAAADAAAABAAAAAYAAAAJAAAAAQAAAAIAAAAFAAAAAwAAAAQAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAwAAAAQAAAAGAAAACQAAAAMAAAAEAAAABgAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAsAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_GG_OFFD_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_GG_OFFD_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_GG_OFFD_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_GG_OFFD_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_GG_OFFD_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_GG_OFFD_partition1(name,dirInstall);
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
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

