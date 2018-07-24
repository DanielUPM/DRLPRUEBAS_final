//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_OFFD_partition3_CPP
#define DRLPRUEBAS__CC_GG_OFFD_partition3_CPP

#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition3.h"

DRLPRUEBAS__CC_GG_OFFD_partition3* DRLPRUEBAS__CC_GG_OFFD_partition3::s_current= NULL;

DRLPRUEBAS__CC_GG_OFFD_partition3::DRLPRUEBAS__CC_GG_OFFD_partition3(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_GG_OFFD";
m_infoPartitionName = "partition3";
m_infoModelName = "DRLPRUEBAS__CC_GG_OFFD_partition3";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition3";
m_infoModelFileNameExtra = "+c+c_+g+g_+o+f+f+d.partition3";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 12:58:51.123000";
m_infoPartitionDate = "29/06/2018 12:59:07.938000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[8]; 
int nbx;
for (nbx=0; nbx < 8 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[6];
int ib;
for (ib=0; ib < 6 ; ib++)
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
		1, 1, 1, 0, 0, 0, 0, 0, 10, 6800000, 5000000, 0, 1, 0.035, 0, 1, 
		0, 1, 0, 15, 2.01594, 31.9988, 0, 8, 14700000, 0, 0, 4000, 1200, 0, 0, 200, 
		0, 0, 0, 0, 0, 3500, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 0, 0, 0, 70, 5000000, 5000000, 0, 50, 0.032, 0.0143139263, 0, 0.5, 0, 
		0, 0, 722.652542, 1, 0, 0, 0.00143857805, 0, 0.5, 0, 0, 0, 65.3474576, 1, 0, 0, 
		0.0489035601, 0, 0.5, 0, 10, 0, 0, 1777.23746, 1, 0, 0, 0.000479916864, 0, 0.5, 0, 10, 
		0, 0, 11.7625424, 1, 0, 0, 301.365293, 1, 13101196, 85.4960317, 1, 9001195.99, 0, 0.141328748, 0, 0, 
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
void DRLPRUEBAS__CC_GG_OFFD_partition3::initInternalModels()
{
}

void DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition3::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_GG_OFFD_partition3::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_GG_OFFD_partition3::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_GG_OFFD_partition3::initBlocks( double dyn[], double ldr[], double *_time )
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
	LPRES__Init_fluid(27, &unkR[342]) ;
	unkI[2] = 1 ;
	unkR[377] = 1. ;
	unkR[238] = unkR[239] ;
	unkR[372] = _div( 1. , unkR[374],"GasGen_1.mfr_ch") ;
	unkR[373] = _div( 1. , (unkR[374] * unkR[236]),"GasGen_1.mfr_ch * GasGen_1.T_ch") ;
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[31]) ;
  // init(LO2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
  // init(Nozzle_1.Nozzle,0)
	dyn[9] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-66]  CombCha_1.f_O.p_c = Injector_F.f_in.pt / Injector_F.PR
unkR[61] = _div( unkR[387] , dyn[4],"Injector_F.PR") ;
//[E-67]  CombCha_1.f_F.p =  IF[62] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[388]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-68]  Injector_O.PR = Injector_O.f_in.pt / CombCha_1.f_O.p_c
unkR[404] = _div( unkR[408] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-69]  Injector_O.M_out =  ZONE[5] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[5] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[4]==0)
	unkR[403] = _sqrt(_div( 2. * (_pow( unkR[404] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[4]==1)
	unkR[403] = 1. ;
else unkR[403] = 0. ;
//[E-70]  CombCha_1.f_O.p =  IF[78] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[409]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-71]  CombCha_1.f_O.W =  IF[80] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt / sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[400] * LPRES__FGAMMA(&unkR[64]) * unkR[408] , _sqrt(unkR[425] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)"),"sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[403] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[403],"Injector_O.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[400] * unkR[402] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[408] - unkR[93]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p)") ;
}
//[E-72]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-73]  Injector_F.M_out =  ZONE[3] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[3] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[383] = _sqrt(_div( 2. * (_pow( dyn[4] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[383] = 1. ;
else unkR[383] = 0. ;
//[E-74]  CombCha_1.f_F.W =  IF[64] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt / sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[380] * LPRES__FGAMMA(&unkR[31]) * unkR[387] , _sqrt(unkR[422] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)"),"sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[383] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[383],"Injector_F.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[380] * unkR[382] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[387] - unkR[60]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)") ;
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
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-169]  GasGen_1.f_O.p_c = Injector_F_1.f_in.pt / Injector_F_1.PR
unkR[251] = _div( unkR[397] , dyn[5],"Injector_F_1.PR") ;
//[E-170]  GasGen_1.f_F.p =  IF[70] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_F_1.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[250] = MATH__max(unkR[251], unkR[398]) ;
}
else 
{
unkR[250] = unkR[251] ;
}
//[E-171]  Injector_O_1.PR = Injector_O_1.f_in.pt / GasGen_1.f_O.p_c
unkR[415] = _div( unkR[419] , unkR[251],"GasGen_1.f_O.p_c") ;
//[E-172]  Injector_O_1.M_out =  ZONE[6] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[6] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[5]==0)
	unkR[414] = _sqrt(_div( 2. * (_pow( unkR[415] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O_1.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O_1.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[5]==1)
	unkR[414] = 1. ;
else unkR[414] = 0. ;
//[E-173]  GasGen_1.f_O.p =  IF[86] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_O_1.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[254] = MATH__max(unkR[251], unkR[420]) ;
}
else 
{
unkR[254] = unkR[251] ;
}
//[E-174]  GasGen_1.f_O.W =  IF[88] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.A * LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt / sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O_1.M_out)	 ELSE Injector_O_1.A * Injector_O_1.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[253] = _div( _div( unkR[411] * LPRES__FGAMMA(&unkR[64]) * unkR[419] , _sqrt(unkR[425] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)"),"sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[414] , 2.,"(Injector_O_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[414],"Injector_O_1.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O_1.M_out") ;
}
else 
{
unkR[253] = unkR[411] * unkR[413] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[419] - unkR[254]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (Injector_O_1.f_in.pt - GasGen_1.f_O.p)") ;
}
//[E-175]  GasGen_1.W_O = GasGen_1.f_O.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[243] = unkR[253] * (1. - unkR[90]) ;
//[E-176]  Injector_F_1.M_out =  ZONE[4] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[4] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[393] = _sqrt(_div( 2. * (_pow( dyn[5] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F_1.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F_1.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[393] = 1. ;
else unkR[393] = 0. ;
//[E-177]  GasGen_1.f_F.W =  IF[72] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.A * LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt / sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F_1.M_out)	 ELSE Injector_F_1.A * Injector_F_1.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[249] = _div( _div( unkR[390] * LPRES__FGAMMA(&unkR[31]) * unkR[397] , _sqrt(unkR[422] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)"),"sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[393] , 2.,"(Injector_F_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[393],"Injector_F_1.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F_1.M_out") ;
}
else 
{
unkR[249] = unkR[390] * unkR[392] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[397] - unkR[250]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (Injector_F_1.f_in.pt - GasGen_1.f_F.p)") ;
}
//[E-178]  GasGen_1.W_F = GasGen_1.f_F.W * (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[238] = unkR[249] * (1. - unkR[57]) ;
//[E-179]  GasGen_1.OF = GasGen_1.W_O / GasGen_1.W_F
unkR[230] = _div( unkR[243] , unkR[238],"GasGen_1.W_F") ;
//[E-180]  GasGen_1.phi = GasGen_1.OF_st / GasGen_1.OF
unkR[377] = _div( unkR[231] , unkR[230],"GasGen_1.OF") ;
//[E-181]  GasGen_1.W_F_st = GasGen_1.W_F / GasGen_1.phi
unkR[240] = _div( unkR[238] , unkR[377],"GasGen_1.phi") ;
//[E-182]  GasGen_1.fluid_P[LOX] =  IF[30] (GasGen_1.Combustion) (GasGen_1.fluid_O[LOX] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LOX] * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[313] = _div( (unkR[284] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[255] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[313] = _div( (unkR[284] * unkR[243] + unkR[255] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-183]  GasGen_1.fluid_P[NTO] =  IF[31] (GasGen_1.Combustion) (GasGen_1.fluid_O[NTO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[NTO] * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[314] = _div( (unkR[285] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[256] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[314] = _div( (unkR[285] * unkR[243] + unkR[256] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-184]  GasGen_1.fluid_P[H2O2] =  IF[32] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O2] * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[315] = _div( (unkR[286] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[257] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[315] = _div( (unkR[286] * unkR[243] + unkR[257] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-185]  GasGen_1.fluid_P[HNO3] =  IF[33] (GasGen_1.Combustion) (GasGen_1.fluid_O[HNO3] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[HNO3] * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[316] = _div( (unkR[287] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[258] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[316] = _div( (unkR[287] * unkR[243] + unkR[258] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-186]  GasGen_1.fluid_P[LF2] =  IF[34] (GasGen_1.Combustion) (GasGen_1.fluid_O[LF2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LF2] * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[317] = _div( (unkR[288] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[259] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[317] = _div( (unkR[288] * unkR[243] + unkR[259] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-187]  GasGen_1.fluid_P[RP_1] =  IF[35] (GasGen_1.Combustion) (GasGen_1.fluid_O[RP_1] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[RP_1] * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[318] = _div( (unkR[289] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[260] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[318] = _div( (unkR[289] * unkR[243] + unkR[260] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-188]  GasGen_1.fluid_P[LCH4] =  IF[36] (GasGen_1.Combustion) (GasGen_1.fluid_O[LCH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LCH4] * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[319] = _div( (unkR[290] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[261] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[319] = _div( (unkR[290] * unkR[243] + unkR[261] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-189]  GasGen_1.fluid_P[LH2] =  IF[37] (GasGen_1.Combustion) (GasGen_1.fluid_O[LH2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LH2] * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[320] = _div( (unkR[291] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[262] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[320] = _div( (unkR[291] * unkR[243] + unkR[262] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-190]  GasGen_1.fluid_P[N2H4] =  IF[38] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2H4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2H4] * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[321] = _div( (unkR[292] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[263] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[321] = _div( (unkR[292] * unkR[243] + unkR[263] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-191]  GasGen_1.fluid_P[UDMH] =  IF[39] (GasGen_1.Combustion) (GasGen_1.fluid_O[UDMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[UDMH] * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[322] = _div( (unkR[293] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[264] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[322] = _div( (unkR[293] * unkR[243] + unkR[264] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-192]  GasGen_1.fluid_P[MMH] =  IF[40] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH] * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[323] = _div( (unkR[294] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[265] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[323] = _div( (unkR[294] * unkR[243] + unkR[265] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-193]  GasGen_1.fluid_P[JP_10] =  IF[41] (GasGen_1.Combustion) (GasGen_1.fluid_O[JP_10] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[JP_10] * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[324] = _div( (unkR[295] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[266] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[324] = _div( (unkR[295] * unkR[243] + unkR[266] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-194]  GasGen_1.fluid_P[Kerox] =  IF[42] (GasGen_1.Combustion) (GasGen_1.fluid_O[Kerox] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Kerox] * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[325] = _div( (unkR[296] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[267] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[325] = _div( (unkR[296] * unkR[243] + unkR[267] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-195]  GasGen_1.fluid_P[Oil] =  IF[43] (GasGen_1.Combustion) (GasGen_1.fluid_O[Oil] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Oil] * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[326] = _div( (unkR[297] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[268] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[326] = _div( (unkR[297] * unkR[243] + unkR[268] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-196]  GasGen_1.fluid_P[H2O] =  IF[44] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O] * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[327] = _div( (unkR[298] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[269] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[327] = _div( (unkR[298] * unkR[243] + unkR[269] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-197]  GasGen_1.fluid_P[IPA] =  IF[45] (GasGen_1.Combustion) (GasGen_1.fluid_O[IPA] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[IPA] * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[328] = _div( (unkR[299] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[270] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[328] = _div( (unkR[299] * unkR[243] + unkR[270] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-198]  GasGen_1.fluid_P[Air] =  IF[46] (GasGen_1.Combustion) (GasGen_1.fluid_O[Air] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Air] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Air] * GasGen_1.W_O + GasGen_1.fluid_F[Air] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[329] = _div( (unkR[300] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[271] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[329] = _div( (unkR[300] * unkR[243] + unkR[271] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-199]  GasGen_1.fluid_P[Ar] =  IF[47] (GasGen_1.Combustion) (GasGen_1.fluid_O[Ar] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Ar] * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[330] = _div( (unkR[301] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[272] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[330] = _div( (unkR[301] * unkR[243] + unkR[272] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-200]  GasGen_1.fluid_P[CH4] =  IF[48] (GasGen_1.Combustion) (GasGen_1.fluid_O[CH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CH4] * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[331] = _div( (unkR[302] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[273] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[331] = _div( (unkR[302] * unkR[243] + unkR[273] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-201]  GasGen_1.fluid_P[CO] =  IF[49] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO] * GasGen_1.W_O + GasGen_1.fluid_F[CO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[332] = _div( (unkR[303] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[274] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[332] = _div( (unkR[303] * unkR[243] + unkR[274] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-202]  GasGen_1.fluid_P[CO2] =  IF[50] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO2] * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[333] = _div( (unkR[304] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[275] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[333] = _div( (unkR[304] * unkR[243] + unkR[275] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-203]  GasGen_1.fluid_P[H2] =  IF[51] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2] * GasGen_1.W_O + GasGen_1.fluid_F[H2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[334] = _div( (unkR[305] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[276] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[334] = _div( (unkR[305] * unkR[243] + unkR[276] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-204]  GasGen_1.fluid_P[He] =  IF[52] (GasGen_1.Combustion) (GasGen_1.fluid_O[He] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[He] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[He] * GasGen_1.W_O + GasGen_1.fluid_F[He] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[335] = _div( (unkR[306] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[277] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[335] = _div( (unkR[306] * unkR[243] + unkR[277] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-205]  GasGen_1.fluid_P[N2] =  IF[53] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2] * GasGen_1.W_O + GasGen_1.fluid_F[N2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[336] = _div( (unkR[307] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[278] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[336] = _div( (unkR[307] * unkR[243] + unkR[278] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-206]  GasGen_1.fluid_P[O2] =  IF[54] (GasGen_1.Combustion) (GasGen_1.fluid_O[O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[O2] * GasGen_1.W_O + GasGen_1.fluid_F[O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[337] = _div( (unkR[308] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[279] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[337] = _div( (unkR[308] * unkR[243] + unkR[279] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-207]  GasGen_1.fluid_P[MMH_vapour] =  IF[55] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH_vapour] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH_vapour] * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[338] = _div( (unkR[309] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[280] * MATH__max(unkR[377] - 1., 0.) * unkR[240]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[338] = _div( (unkR[309] * unkR[243] + unkR[280] * unkR[238]) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-208]  GasGen_1.fluid_P[Comb_prod] =  IF[56] (GasGen_1.Combustion) (GasGen_1.fluid_O[Comb_prod] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Comb_prod] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st + (1 - MATH.max(1 - GasGen_1.phi, 0)) * (GasGen_1.W_O + GasGen_1.W_F_st)) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE 0
if( unkI[2] ) 
{
unkR[339] = _div( (unkR[310] * MATH__max(1. - unkR[377], 0.) * unkR[243] + unkR[281] * MATH__max(unkR[377] - 1., 0.) * unkR[240] + (1. - MATH__max(1. - unkR[377], 0.)) * (unkR[243] + unkR[240])) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[339] = 0. ;
}
//[E-209]  GasGen_1.f_O.p_c = GasGen_1.rho_trans * LPRES.R(GasGen_1.fluid_P) * GasGen_1.g.Tt
res[5] = evalNormResidueInternal(5,unkR[251],dyn[2] * LPRES__R(&unkR[313]) * dyn[3]);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox3(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[6],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[6]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn3, n, &dyn[6], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-256]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[7] = evalNormResidueInternal(7,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[7] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn4, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-272]  Nozzle_1.g.fluid[LOX] = GasGen_1.fluid_P[LOX] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[342] = _div( unkR[313] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-273]  Nozzle_1.g.fluid[NTO] = GasGen_1.fluid_P[NTO] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[343] = _div( unkR[314] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-274]  Nozzle_1.g.fluid[H2O2] = GasGen_1.fluid_P[H2O2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[344] = _div( unkR[315] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-275]  Nozzle_1.g.fluid[HNO3] = GasGen_1.fluid_P[HNO3] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[345] = _div( unkR[316] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-276]  Nozzle_1.g.fluid[LF2] = GasGen_1.fluid_P[LF2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[346] = _div( unkR[317] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-277]  Nozzle_1.g.fluid[RP_1] = GasGen_1.fluid_P[RP_1] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[347] = _div( unkR[318] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-278]  Nozzle_1.g.fluid[LCH4] = GasGen_1.fluid_P[LCH4] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[348] = _div( unkR[319] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-279]  Nozzle_1.g.fluid[LH2] = GasGen_1.fluid_P[LH2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[349] = _div( unkR[320] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-280]  Nozzle_1.g.fluid[N2H4] = GasGen_1.fluid_P[N2H4] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[350] = _div( unkR[321] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-281]  Nozzle_1.g.fluid[UDMH] = GasGen_1.fluid_P[UDMH] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[351] = _div( unkR[322] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-282]  Nozzle_1.g.fluid[MMH] = GasGen_1.fluid_P[MMH] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[352] = _div( unkR[323] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-283]  Nozzle_1.g.fluid[JP_10] = GasGen_1.fluid_P[JP_10] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[353] = _div( unkR[324] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-284]  Nozzle_1.g.fluid[Kerox] = GasGen_1.fluid_P[Kerox] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[354] = _div( unkR[325] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-285]  Nozzle_1.g.fluid[Oil] = GasGen_1.fluid_P[Oil] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[355] = _div( unkR[326] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-286]  Nozzle_1.g.fluid[H2O] = GasGen_1.fluid_P[H2O] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[356] = _div( unkR[327] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-287]  Nozzle_1.g.fluid[IPA] = GasGen_1.fluid_P[IPA] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[357] = _div( unkR[328] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-288]  Nozzle_1.g.fluid[Air] = GasGen_1.fluid_P[Air] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[358] = _div( unkR[329] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-289]  Nozzle_1.g.fluid[Ar] = GasGen_1.fluid_P[Ar] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[359] = _div( unkR[330] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-290]  Nozzle_1.g.fluid[CH4] = GasGen_1.fluid_P[CH4] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[360] = _div( unkR[331] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-291]  Nozzle_1.g.fluid[CO] = GasGen_1.fluid_P[CO] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[361] = _div( unkR[332] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-292]  Nozzle_1.g.fluid[CO2] = GasGen_1.fluid_P[CO2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[362] = _div( unkR[333] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-293]  Nozzle_1.g.fluid[H2] = GasGen_1.fluid_P[H2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[363] = _div( unkR[334] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-294]  Nozzle_1.g.fluid[He] = GasGen_1.fluid_P[He] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[364] = _div( unkR[335] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-295]  Nozzle_1.g.fluid[N2] = GasGen_1.fluid_P[N2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[365] = _div( unkR[336] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-296]  Nozzle_1.g.fluid[O2] = GasGen_1.fluid_P[O2] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[366] = _div( unkR[337] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-297]  Nozzle_1.g.fluid[MMH_vapour] = GasGen_1.fluid_P[MMH_vapour] * (GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W
unkR[367] = _div( unkR[338] * (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") ;
//[E-298]  Nozzle_1.g.fluid[Comb_prod] = (GasGen_1.fluid_P[Comb_prod] * (GasGen_1.W_O + GasGen_1.W_F) + GasGen_1.W_IO + GasGen_1.W_IF) / Nozzle_1.g.W
unkR[368] = _div( (unkR[339] * (unkR[243] + unkR[238]) + unkR[242] + unkR[241]) , dyn[8],"Nozzle_1.g.W") ;
//[E-299]  cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid) = Nozzle_1.g.W * sqrt(GasGen_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)) / (GasGen_1.f_O.p_c * Turbine_ch.A_in)
res[8] = evalNormResidueInternal(8,cos(unkR[454] * 3.14159265358979/180.) * LPRES__FGAMMA(&unkR[342]),_div( dyn[8] * _sqrt(dyn[3] * LPRES__R(&unkR[342]),"GasGen_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)") , (unkR[251] * unkR[450]),"GasGen_1.f_O.p_c * Turbine_ch.A_in"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn5, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Residues function for box 6*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox6(double *_time,double dyn[],double ldr[],double res[])
{
//[E-327]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[432] = _div( dyn[9] , unkR[438],"Nozzle_1.p_amb") ;
//[E-328]  Nozzle_1.M_out =  ZONE[7] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))	  OTHERS 1
 if(m_branchZone[6]==0)
	unkR[431] = _sqrt(_div( 2. * (_pow( unkR[432] , (_div( (LPRES__gamma(&unkR[342]) - 1.) , LPRES__gamma(&unkR[342]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" ) - 1.) , (LPRES__gamma(&unkR[342]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)") ;
else unkR[431] = 1. ;
//[E-329]  Nozzle_1.A_sl = Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))
unkR[430] = _div( unkR[429] * unkR[431] , _pow( (_div( (2. + (LPRES__gamma(&unkR[342]) - 1.) * _pow( unkR[431] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[342]) + 1.),"LPRES.gamma(Nozzle_1.g.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[342]) + 1.) , (2. * (LPRES__gamma(&unkR[342]) - 1.)),"2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)")),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1))**((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))" ),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))") ;
//[E-330]  Nozzle_1.g.Tt = (Nozzle_1.A_sl * LPRES.FGAMMA(Nozzle_1.g.fluid) * Nozzle_1.g.pt / Nozzle_1.g.W) ** 2 / LPRES.R(Nozzle_1.g.fluid)
unkR[436] = _div( _pow( (_div( unkR[430] * LPRES__FGAMMA(&unkR[342]) * dyn[9] , dyn[8],"Nozzle_1.g.W")) , 2.,"(Nozzle_1.A_sl * LPRES.FGAMMA(Nozzle_1.g.fluid) * Nozzle_1.g.pt / Nozzle_1.g.W)**(2)" ) , LPRES__R(&unkR[342]),"LPRES.R(Nozzle_1.g.fluid)") ;
//[E-331]  Turbine_ch.alpha = Nozzle_1.g.Tt / GasGen_1.g.Tt
unkR[453] = _div( unkR[436] , dyn[3],"GasGen_1.g.Tt") ;
//[E-332]  Turbine_ch.alpha = 1 - Turbine_ch.eta_d * (1 - (Nozzle_1.g.pt / GasGen_1.f_O.p_c) ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)))
res[9] = evalNormResidueInternal(9,unkR[453],1 - unkR[455] * (1 - _pow( (_div( dyn[9] , unkR[251],"GasGen_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[342]) - 1) , LPRES__gamma(&unkR[342]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.g.pt / GasGen_1.f_O.p_c)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" )));
}


/* Wrapper to call the residues's box 6 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn6(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(6,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox6(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(6,false);
}


/* Wrapper for the non-linear solver in box 6*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb6(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn6, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 6);
	abortDiv= adiv;
}


/* Residues function for box 7*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fbox7(double *_time,double dyn[],double ldr[],double res[])
{
//[E-341]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[10] = evalNormResidueInternal(10,_div( _div( dyn[6] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[10] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[10] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 7 function from the non-linear solver */
void DRLPRUEBAS__CC_GG_OFFD_partition3::fcn7(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_GG_OFFD_partition3& m= *DRLPRUEBAS__CC_GG_OFFD_partition3::s_current;
	m.printDbgInfoForModel(7,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox7(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(7,false);
}


/* Wrapper for the non-linear solver in box 7*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::fhyb7(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_GG_OFFD_partition3::fcn7, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 7);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_GG_OFFD_partition3::fres( double *_time, double dyn[], double der[], double res[] )
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
unkR[408] = unkR[427] * unkR[442] ;
//[E-4]  CombCha_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-5]  LPRES.Init_fluid(LH2_circuit_1.fluid, GasGen_1.f_F.fluid) %%% (OUT VAR)GasGen_1.f_F.fluid 
LPRES__Init_fluid(unkI[3], &unkR[31]);
//[E-6]  Injector_F.f_in.pt = LH2_circuit_1.pt * SplitFrac_O_1.TPL
unkR[387] = unkR[424] * unkR[443] ;
//[E-7]  Injector_F.PR_sl =  IF[59] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[384] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[384] = 0. ;
}
//[E-8]  Injector_F.p_out_ch =  IF[60] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[388] = _div( unkR[387] , unkR[384],"Injector_F.PR_sl") ;
}
else 
{
unkR[388] = 0. ;
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
unkR[405] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[405] = 0. ;
}
//[E-65]  Injector_O.p_out_ch =  IF[76] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[409] = _div( unkR[408] , unkR[405],"Injector_O.PR_sl") ;
}
else 
{
unkR[409] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-107]  Injector_O_1.f_in.pt = LO2_circuit_1.pt * SplitFrac_O.TPL
unkR[419] = unkR[427] * unkR[442] ;
//[E-108]  GasGen_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[284] = _div( unkR[64] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-109]  Injector_F_1.f_in.pt = LH2_circuit_1.pt * SplitFrac_O_1.TPL
unkR[397] = unkR[424] * unkR[443] ;
//[E-110]  Injector_F_1.PR_sl =  IF[67] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[394] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[394] = 0. ;
}
//[E-111]  Injector_F_1.p_out_ch =  IF[68] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.f_in.pt / Injector_F_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[398] = _div( unkR[397] , unkR[394],"Injector_F_1.PR_sl") ;
}
else 
{
unkR[398] = 0. ;
}
//[E-112]  GasGen_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[255] = _div( unkR[31] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-113]  GasGen_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[285] = _div( unkR[65] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-114]  GasGen_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[256] = _div( unkR[32] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-115]  GasGen_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[286] = _div( unkR[66] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-116]  GasGen_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[257] = _div( unkR[33] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-117]  GasGen_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[287] = _div( unkR[67] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-118]  GasGen_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[258] = _div( unkR[34] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-119]  GasGen_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[288] = _div( unkR[68] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-120]  GasGen_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[259] = _div( unkR[35] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-121]  GasGen_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[289] = _div( unkR[69] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-122]  GasGen_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[260] = _div( unkR[36] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-123]  GasGen_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[290] = _div( unkR[70] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-124]  GasGen_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[261] = _div( unkR[37] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-125]  GasGen_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[291] = _div( unkR[71] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-126]  GasGen_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[262] = _div( unkR[38] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-127]  GasGen_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[292] = _div( unkR[72] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-128]  GasGen_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[263] = _div( unkR[39] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-129]  GasGen_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[293] = _div( unkR[73] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-130]  GasGen_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[264] = _div( unkR[40] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-131]  GasGen_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[294] = _div( unkR[74] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-132]  GasGen_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[265] = _div( unkR[41] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-133]  GasGen_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[295] = _div( unkR[75] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-134]  GasGen_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[266] = _div( unkR[42] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-135]  GasGen_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[296] = _div( unkR[76] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-136]  GasGen_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[267] = _div( unkR[43] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-137]  GasGen_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[297] = _div( unkR[77] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-138]  GasGen_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[268] = _div( unkR[44] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-139]  GasGen_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[298] = _div( unkR[78] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-140]  GasGen_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[269] = _div( unkR[45] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-141]  GasGen_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[299] = _div( unkR[79] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-142]  GasGen_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[270] = _div( unkR[46] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-143]  GasGen_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[300] = _div( unkR[80] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-144]  GasGen_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[271] = _div( unkR[47] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-145]  GasGen_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[301] = _div( unkR[81] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-146]  GasGen_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[272] = _div( unkR[48] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-147]  GasGen_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[302] = _div( unkR[82] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-148]  GasGen_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[273] = _div( unkR[49] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-149]  GasGen_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[303] = _div( unkR[83] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-150]  GasGen_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[274] = _div( unkR[50] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-151]  GasGen_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[304] = _div( unkR[84] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-152]  GasGen_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[275] = _div( unkR[51] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-153]  GasGen_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[305] = _div( unkR[85] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-154]  GasGen_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[276] = _div( unkR[52] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-155]  GasGen_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[306] = _div( unkR[86] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-156]  GasGen_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[277] = _div( unkR[53] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-157]  GasGen_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[307] = _div( unkR[87] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-158]  GasGen_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[278] = _div( unkR[54] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-159]  GasGen_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[308] = _div( unkR[88] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-160]  GasGen_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[279] = _div( unkR[55] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-161]  GasGen_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[309] = _div( unkR[89] , (1. - unkR[90]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-162]  GasGen_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[280] = _div( unkR[56] , (1. - unkR[57]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-163]  GasGen_1.fluid_O[Comb_prod] = 0
unkR[310] = 0. ;
//[E-164]  GasGen_1.fluid_F[Comb_prod] = 0
unkR[281] = 0. ;
//[E-165]  GasGen_1.fluid_P[Comb_prod_M] =  IF[57] (GasGen_1.Combustion) GasGen_1.M_P	 ELSE 0
if( unkI[2] ) 
{
unkR[340] = unkR[227] ;
}
else 
{
unkR[340] = 0. ;
}
//[E-166]  GasGen_1.fluid_P[Comb_prod_cp] =  IF[58] (GasGen_1.Combustion) GasGen_1.cp_P	 ELSE 0
if( unkI[2] ) 
{
unkR[341] = unkR[245] ;
}
else 
{
unkR[341] = 0. ;
}
//[E-167]  Injector_O_1.PR_sl =  IF[83] (LPRES.State(GasGen_1.f_O.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[416] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[416] = 0. ;
}
//[E-168]  Injector_O_1.p_out_ch =  IF[84] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.f_in.pt / Injector_O_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[420] = _div( unkR[419] , unkR[416],"Injector_O_1.PR_sl") ;
}
else 
{
unkR[420] = 0. ;
}

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-210]  FlowMeter_1_1.f_in.W = CombCha_1.f_O.W + GasGen_1.f_O.W
unkR[225] = unkR[63] + unkR[253] ;
//[E-211]  CombCha_1.W_IO = FlowMeter_1_1.f_in.W - GasGen_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[225] - unkR[253] - unkR[24] ;
//[E-212]  FlowMeter_1.f_in.W = CombCha_1.f_F.W + GasGen_1.f_F.W
unkR[223] = unkR[30] + unkR[249] ;
//[E-213]  CombCha_1.W_IF = FlowMeter_1.f_in.W - GasGen_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[223] - unkR[249] - unkR[19] ;
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
unkR[62] = _div( unkR[425] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[403] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[425] ;
}
//[E-252]  CombCha_1.f_F.T =  IF[63] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[422] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[383] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[422] ;
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
unkR[224] = abs(unkR[223]) ;
//[E-267]  FlowMeter_1_1.i.Data[1] = abs(FlowMeter_1_1.f_in.W)
unkR[226] = abs(unkR[225]) ;
//[E-268]  GasGen_1.W_IO = GasGen_1.f_O.W - GasGen_1.W_O
unkR[242] = unkR[253] - unkR[243] ;
//[E-269]  GasGen_1.W_IF = GasGen_1.f_F.W - GasGen_1.W_F
unkR[241] = unkR[249] - unkR[238] ;
//[E-270]  Nozzle_1.g.fluid[Comb_prod_M] = GasGen_1.fluid_P[Comb_prod_M]
unkR[369] = unkR[340] ;
//[E-271]  Nozzle_1.g.fluid[Comb_prod_cp] = GasGen_1.fluid_P[Comb_prod_cp]
unkR[370] = unkR[341] ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-300]  GasGen_1.rho_trans' = (GasGen_1.f_O.W + GasGen_1.f_F.W - Nozzle_1.g.W) / (GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1))
ldr[2] = _div( (unkR[253] + unkR[249] - dyn[8]) , (_div( unkR[379] , (unkR[378] * unkR[372]),"GasGen_1.rho_ch * GasGen_1.k_1")),"GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1)") ;
//[E-301]  GasGen_1.Q_comb_effective =  ZONE[2] (GasGen_1.Combustion) GasGen_1.Q_comb	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[233] = unkR[232] ;
else unkR[233] = 0. ;
//[E-302]  GasGen_1.fluid_O[Comb_prod_M] = 0
unkR[311] = 0. ;
//[E-303]  GasGen_1.fluid_O[Comb_prod_cp] = 0
unkR[312] = 0. ;
//[E-304]  GasGen_1.fluid_F[Comb_prod_M] = 0
unkR[282] = 0. ;
//[E-305]  GasGen_1.fluid_F[Comb_prod_cp] = 0
unkR[283] = 0. ;
//[E-306]  GasGen_1.cp_R = (GasGen_1.W_O * LPRES.cp(GasGen_1.fluid_O) + GasGen_1.W_F * LPRES.cp(GasGen_1.fluid_F)) / (GasGen_1.W_O + GasGen_1.W_F)
unkR[246] = _div( (unkR[243] * LPRES__cp(&unkR[284]) + unkR[238] * LPRES__cp(&unkR[255])) , (unkR[243] + unkR[238]),"GasGen_1.W_O + GasGen_1.W_F") ;
//[E-307]  GasGen_1.f_O.T =  IF[87] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O_1.M_out ** 2)	 ELSE LO2_circuit_1.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[252] = _div( unkR[425] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[414] , 2.,"(Injector_O_1.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O_1.M_out ** 2") ;
}
else 
{
unkR[252] = unkR[425] ;
}
//[E-308]  GasGen_1.f_F.T =  IF[71] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[248] = _div( unkR[422] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[393] , 2.,"(Injector_F_1.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2") ;
}
else 
{
unkR[248] = unkR[422] ;
}
//[E-309]  GasGen_1.T_in = (LPRES.cp(GasGen_1.fluid_O) * GasGen_1.f_O.T + GasGen_1.phi / GasGen_1.OF_st * LPRES.cp(GasGen_1.fluid_F) * GasGen_1.f_F.T) / ((1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R)
unkR[237] = _div( (LPRES__cp(&unkR[284]) * unkR[252] + _div( unkR[377] , unkR[231],"GasGen_1.OF_st") * LPRES__cp(&unkR[255]) * unkR[248]) , ((1. + _div( unkR[377] , unkR[231],"GasGen_1.OF_st")) * unkR[246]),"(1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R") ;
//[E-310]  GasGen_1.T_c = (GasGen_1.eta_d * GasGen_1.Q_comb_effective / ((1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)) + GasGen_1.cp_R * (GasGen_1.T_in - 298.15)) / LPRES.cp(GasGen_1.fluid_P) + 298.15
unkR[234] = _div( (_div( unkR[247] * unkR[233] , (_div( (1. + unkR[230]) , MATH__min(unkR[230], unkR[231]),"MATH.min(GasGen_1.OF, GasGen_1.OF_st)")),"(1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)") + unkR[246] * (unkR[237] - 298.15)) , LPRES__cp(&unkR[313]),"LPRES.cp(GasGen_1.fluid_P)") + 298.15 ;
//[E-311]  GasGen_1.g.Tt' = (((GasGen_1.W_O + GasGen_1.W_F) / Nozzle_1.g.W * LPRES.cp(GasGen_1.fluid_P) * (GasGen_1.g.Tt - GasGen_1.T_c) + GasGen_1.W_IO / Nozzle_1.g.W * GasGen_1.f_O.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - GasGen_1.f_O.T) + GasGen_1.W_IF / Nozzle_1.g.W * GasGen_1.f_F.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - GasGen_1.f_F.T)) / -(GasGen_1.temp_ch / (Nozzle_1.g.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch)) - GasGen_1.g.Tt * LPRES.cv(GasGen_1.fluid_P) * GasGen_1.rho_trans') / (GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P))
ldr[3] = _div( (_div( (_div( (unkR[243] + unkR[238]) , dyn[8],"Nozzle_1.g.W") * LPRES__cp(&unkR[313]) * (dyn[3] - unkR[234]) + _div( unkR[242] , dyn[8],"Nozzle_1.g.W") * unkR[92] * (dyn[3] - unkR[252]) + _div( unkR[241] , dyn[8],"Nozzle_1.g.W") * unkR[59] * (dyn[3] - unkR[248])) , -(_div( unkR[379] , (dyn[8] * unkR[378] * unkR[373] * unkR[236]),"Nozzle_1.g.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch")),"-(GasGen_1.temp_ch / (Nozzle_1.g.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch))") - dyn[3] * LPRES__cv(&unkR[313]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[313])),"GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P)") ;
//[E-312]  GasGen_1.c_star = sqrt(LPRES.R(Nozzle_1.g.fluid) * GasGen_1.g.Tt) / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[244] = _div( _sqrt(LPRES__R(&unkR[342]) * dyn[3],"LPRES.R(Nozzle_1.g.fluid) * GasGen_1.g.Tt") , LPRES__FGAMMA(&unkR[342]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-313]  GasGen_1.i.Data[1] = GasGen_1.c_star
unkR[371] = unkR[244] ;
//[E-314]  Injector_F.A_sl =  IF[61] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[381] = _div( _sqrt(unkR[422] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[387]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[381] = 0. ;
}
//[E-315]  Injector_F.v_ideal =  IF[65] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[389] = unkR[383] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[389] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[380] * unkR[382]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-316]  Injector_F.Re =  IF[66] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[385] = 0. ;
}
else 
{
unkR[385] = _div( LPRES__rho(&unkR[31]) * unkR[389] * unkR[382] * _sqrt(4. * unkR[380]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-317]  Injector_F_1.A_sl =  IF[69] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)) * GasGen_1.f_F.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[391] = _div( _sqrt(unkR[422] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[249] , (LPRES__FGAMMA(&unkR[31]) * unkR[397]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * Injector_F_1.f_in.pt") ;
}
else 
{
unkR[391] = 0. ;
}
//[E-318]  Injector_F_1.v_ideal =  IF[73] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F_1.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T)	 ELSE GasGen_1.f_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.A * Injector_F_1.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[399] = unkR[393] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[248],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T") ;
}
else 
{
unkR[399] = _div( unkR[249] , (LPRES__rho(&unkR[31]) * unkR[390] * unkR[392]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.A * Injector_F_1.C_D") ;
}
//[E-319]  Injector_F_1.Re =  IF[74] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F_1.v_ideal * Injector_F_1.C_D * sqrt(4 * Injector_F_1.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[395] = 0. ;
}
else 
{
unkR[395] = _div( LPRES__rho(&unkR[31]) * unkR[399] * unkR[392] * _sqrt(4. * unkR[390]/3.14159265358979,"4 * Injector_F_1.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-320]  Injector_O.A_sl =  IF[77] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[401] = _div( _sqrt(unkR[425] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[408]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[401] = 0. ;
}
//[E-321]  Injector_O.v_ideal =  IF[81] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[410] = unkR[403] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[410] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[400] * unkR[402]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-322]  Injector_O.Re =  IF[82] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[406] = 0. ;
}
else 
{
unkR[406] = _div( LPRES__rho(&unkR[64]) * unkR[410] * unkR[402] * _sqrt(4. * unkR[400]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-323]  Injector_O_1.A_sl =  IF[85] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)) * GasGen_1.f_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[412] = _div( _sqrt(unkR[425] * LPRES__R(&unkR[64]),"LO2_circuit_1.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[253] , (LPRES__FGAMMA(&unkR[64]) * unkR[419]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * Injector_O_1.f_in.pt") ;
}
else 
{
unkR[412] = 0. ;
}
//[E-324]  Injector_O_1.v_ideal =  IF[89] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O_1.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T)	 ELSE GasGen_1.f_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.A * Injector_O_1.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[421] = unkR[414] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[252],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T") ;
}
else 
{
unkR[421] = _div( unkR[253] , (LPRES__rho(&unkR[64]) * unkR[411] * unkR[413]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.A * Injector_O_1.C_D") ;
}
//[E-325]  Injector_O_1.Re =  IF[90] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O_1.v_ideal * Injector_O_1.C_D * sqrt(4 * Injector_O_1.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[417] = 0. ;
}
else 
{
unkR[417] = _div( LPRES__rho(&unkR[64]) * unkR[421] * unkR[413] * _sqrt(4. * unkR[411]/3.14159265358979,"4 * Injector_O_1.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-326]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[438] = LPRES__ISA_Pressure(unkR[428]) ;

if( restartB || m_solveInternalBox[6] ) 
    fhyb6(dyn,ldr,TOLERANCE,1,50);
else fbox6(_time,dyn,ldr,res) ;

//[E-333]  Nozzle_1.PR_sl = ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2) ** (LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))
unkR[433] = _pow( ((LPRES__gamma(&unkR[342]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[342]) , (LPRES__gamma(&unkR[342]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1")),"((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2)**(LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))" ) ;
//[E-334]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[440] = _div( dyn[9] , unkR[433],"Nozzle_1.PR_sl") ;
//[E-335]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[439] = MATH__max(unkR[438], unkR[440]) ;
//[E-336]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[434] = _div( unkR[436] , (1. + (LPRES__gamma(&unkR[342]) - 1.)/2. * _pow( unkR[431] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-337]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out)
unkR[441] = unkR[431] * _sqrt(LPRES__gamma(&unkR[342]) * LPRES__R(&unkR[342]) * unkR[434],"LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out") ;
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
unkR[451] = dyn[8] * LPRES__cp(&unkR[342]) * (dyn[3] - unkR[436]) ;
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
void DRLPRUEBAS__CC_GG_OFFD_partition3::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[342])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",773,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[10] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[448] , unkR[447],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[10] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
if(!(2 == LPRES__State(&unkR[342])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",111,"Turbine_ch.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[284] * unkR[255] + unkR[285] * unkR[256] + unkR[286] * unkR[257] + unkR[287] * unkR[258] + unkR[288] * unkR[259] + unkR[289] * unkR[260] + unkR[290] * unkR[261] + unkR[291] * unkR[262] + unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
    ev[3]= unkR[284] * unkR[255] + unkR[285] * unkR[256] + unkR[286] * unkR[257] + unkR[287] * unkR[258] + unkR[288] * unkR[259] + unkR[289] * unkR[260] + unkR[290] * unkR[261] + unkR[291] * unkR[262] + unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
    ev[4]= unkI[0] - 1; //CombCha_1.Combustion
    ev[5]= unkI[2] - 1; //GasGen_1.Combustion
    ev[6]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[7]= dyn[4] - unkR[384]; //Injector_F.PR < Injector_F.PR_sl
    ev[8]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[9]= dyn[4] - unkR[384]; //Injector_F.PR >= Injector_F.PR_sl
    ev[10]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[11]= dyn[5] - unkR[394]; //Injector_F_1.PR < Injector_F_1.PR_sl
    ev[12]= LPRES__State(&unkR[31]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[13]= dyn[5] - unkR[394]; //Injector_F_1.PR >= Injector_F_1.PR_sl
    ev[14]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[15]= unkR[404] - unkR[405]; //Injector_O.PR < Injector_O.PR_sl
    ev[16]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[17]= unkR[404] - unkR[405]; //Injector_O.PR >= Injector_O.PR_sl
    ev[18]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[19]= unkR[415] - unkR[416]; //Injector_O_1.PR < Injector_O_1.PR_sl
    ev[20]= LPRES__State(&unkR[64]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[21]= unkR[415] - unkR[416]; //Injector_O_1.PR >= Injector_O_1.PR_sl
    ev[22]= unkR[432] - unkR[433]; //Nozzle_1.PR < Nozzle_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_GG_OFFD_partition3::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_GG_OFFD_partition3::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_GG_OFFD_partition3::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_GG_OFFD_partition3::initDelays()
{
}


bool DRLPRUEBAS__CC_GG_OFFD_partition3::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_GG_OFFD_partition3 = 90236;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition3 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition3[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_GG_OFFD_partition3;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition3;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition3;
return true;
}



bool DRLPRUEBAS__CC_GG_OFFD_partition3::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_GG_OFFD_partition3 = 488;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition3 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition3[] = 
{
"CwAAADwAAAAGAAAABwAAAAcAAAAEAAAABAAAAAMAAAADAAAABwAAAAgAAAAEAAAABQAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAMAAAAEAAAABgAAAAkAAAADAAAABAAAAAYAAAAJAAAAAQAAAAIAAAAFAAAAAwAAAAQAAAAGAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAwAAAAQAAAAGAAAACQAAAAMAAAAEAAAABgAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAsAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_GG_OFFD_partition3;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_GG_OFFD_partition3;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_GG_OFFD_partition3;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_GG_OFFD_partition3(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_GG_OFFD_partition3(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_GG_OFFD_partition3(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_GG_OFFD_partition3(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_GG_OFFD_partition3(name,dirInstall);
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
	sprintf(partitionName,"%s","partition3");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition3");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

