//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__F1_partition1_CPP
#define DRLPRUEBAS__F1_partition1_CPP

#include "DRLPRUEBAS.+f1.partition1.h"

DRLPRUEBAS__F1_partition1* DRLPRUEBAS__F1_partition1::s_current= NULL;

DRLPRUEBAS__F1_partition1::DRLPRUEBAS__F1_partition1(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "F1";
m_infoPartitionName = "partition1";
m_infoModelName = "DRLPRUEBAS__F1_partition1";
m_infoModelFileName = "DRLPRUEBAS.+f1.partition1";
m_infoModelFileNameExtra = "+f1.partition1";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 12:56:25.326000";
m_infoPartitionDate = "29/06/2018 13:35:53.332000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[5]; 
int nbx;
for (nbx=0; nbx < 5 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[2];
int ib;
for (ib=0; ib < 2 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[8]; 
int nibr;
for (nibr=0; nibr < 8 ; nibr++)
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
static int elmind7[] = { 2, 3, 4 } ;
static const char * elmstr8[] = { "Yes", "No", NULL } ;
static int elmind8[] = { 1, 2 } ;
n_typ=9;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,29,elmind0},
		{elmstr1,2,elmind1},
		{elmstr2,2,elmind2},
		{elmstr0,16,elmind3},
		{elmstr0,26,elmind4},
		{elmstr6,2,elmind5},
		{elmstr6,8,elmind6},
		{elmstr6,3,elmind7},
		{elmstr8,2,elmind8}
	} ;
typ= new struct INTEG_enumType[9];
etypecopy(9,typ,tmp_typ);
n_dyn=13;
dyn= new double[13] ;
static double tmp_dynInit[13]={ 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 100, 100 } ;
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

n_unkR=495;
unkR= new double[495] ;
static double tmp_unkRInit[495]={ 10, 5, 1, 0.637328951, 1, 23, 172, 31.9988, 0, 0, 2.27, 0, 11000000, 0, 1, 0, 
		4000, 3000, 0, 2000, 0, 0, 0, 0, 0, 2169, 0, 1, 1, 1, 1, 1, 
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
		1, 1, 0, 0, 0, 0, 0, 10, 6800000, 5000000, 1, 0.032, 0, 0, 0, 0, 
		0, 0, 0, 0, 300, 1, 1, 0, 85, 1, 1, 0, 23, 2.01594, 31.9988, 0, 
		2.27, 11000000, 0, 0, 4000, 3000, 0, 200, 0, 0, 0, 0, 0, 2169, 0, 1, 
		1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 10, 5000000, 
		5000000, 1, 0.032, 0.0142804268, 0, 0.5, 0, 10, 0, 0, 100, 1, 1, 0, 0, 0.00113947017, 
		0, 0.5, 0, 10, 0, 0, 65.3474576, 1, 0, 0, 0.0485780548, 0, 0.5, 0, 10, 0, 
		0, 100, 1, 1, 0, 0, 0.00023918298, 0, 0.5, 0, 10, 0, 0, 11.7625424, 1, 0, 
		0, 0, 0.624280123, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 
		0.0541868469, 0, 0, 500, 13100000, 0.85, 1, 1, 0, 0.0428, 0, 0.108, 0.72263409, 0, 0.125397196, 0, 
		0, 0, 500, 9000000, 0.9, 1, 0, 0.0428, 0, 0.108, 0.477942772, 0, 1, 0, 0, 0, 
		1, 1, 0, 0, 0, 0, 0, 0, 0.0124650309, 77.11, 0, 45, 0.8, 10, 5550 } ;
unkRInit= new double[495];
dcopy(495,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 0, 6, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=20;
static int tmp_cteIInit[20]={ 2, 4, 1, 1, 1, 1, 1, 1, 4, 1, 4, 4, 4, 4, 4, 1, 
		4, 4, 1, 4 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=20;
static std::string tmp_cteSInit[20]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 137;
n_neld= 6;
m_numBoxes= 4;
m_nNonLinearBoxes= 4;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__F1_partition1::initInternalModels()
{
}

void DRLPRUEBAS__F1_partition1::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__F1_partition1::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__F1_partition1::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__F1_partition1::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi4;
	int _vi5;

	_vi4 = 1 ;
	while ( _vi4 <= setofSize(&typ[4]) ) {
	_vi5 = setofElem(&typ[4], _vi4) ;
	if( fluid[_vi5-1] != 0 ) {
	fluid_name = _vi5 ;
	}
	_vi4 += 1 ;
	}
	if( fluid[26] != 0 ) {
	fluid_name = 27 ;
	}
	return fluid_name ;
}


int DRLPRUEBAS__F1_partition1::LPRES__State(double fluid[])
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


double DRLPRUEBAS__F1_partition1::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi6;
	int _vi7;
	double _vr1;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",233,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr1 = 0. ;
	_vi6 = 1 ;
	while ( _vi6 <= setofSize(&typ[3]) ) {
	_vi7 = setofElem(&typ[3], _vi6) ;
	_vr1 += Chem_rho[_vi6-1] * fluid[_vi7-1] ;
	_vi6 += 1 ;
	}
	return _vr1 ;
}


double DRLPRUEBAS__F1_partition1::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi8;
	int _vi9;
	double _vr2;

	_vr2 = 0. ;
	_vi8 = 1 ;
	while ( _vi8 <= setofSize(&typ[4]) ) {
	_vi9 = setofElem(&typ[4], _vi8) ;
	_vr2 += Chem_cp[_vi8-1] * fluid[_vi9-1] ;
	_vi8 += 1 ;
	}
	return _vr2 + fluid[28] * fluid[26] ;
}


double DRLPRUEBAS__F1_partition1::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi10;
	int _vi11;
	double _vr3;

	_vr3 = 0. ;
	_vi10 = 1 ;
	while ( _vi10 <= setofSize(&typ[4]) ) {
	_vi11 = setofElem(&typ[4], _vi10) ;
	_vr3 += _div( fluid[_vi11-1] , Chem_M[_vi10-1],"Chem_M[_vi10]") ;
	_vi10 += 1 ;
	}
	return _div( 1 , (_vr3 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr3 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__F1_partition1::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__F1_partition1::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__F1_partition1::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__F1_partition1::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__F1_partition1::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__F1_partition1::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__F1_partition1::LPRES__visc(double fluid[])
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

void DRLPRUEBAS__F1_partition1::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__F1_partition1::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(TankOpen_F.TankOpen,100)
	LPRES__Init_fluid(unkI[3], &unkR[30]) ;
  // init(TankOpen_O.TankOpen,100)
	LPRES__Init_fluid(unkI[4], &unkR[63]) ;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[180]) ;
	unkI[0] = 1 ;
	dyn[5] = 1. ;
	dyn[4] = unkR[19] ;
	if( unkI[1] == 1 ) {
	unkR[8] = 0.001 ;
	}
	else {
	unkR[8] = 100. ;
	}
	unkR[213] = _div( 1. , unkR[215],"CombCha_1.mfr_ch") ;
	unkR[214] = _div( 1. , (unkR[215] * unkR[17]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(GasGen.GasGen,100)
	LPRES__Init_fluid(27, &unkR[350]) ;
	unkI[2] = 1 ;
	dyn[7] = 1. ;
	dyn[6] = unkR[247] ;
	unkR[380] = _div( 1. , unkR[382],"GasGen.mfr_ch") ;
	unkR[381] = _div( 1. , (unkR[382] * unkR[245]),"GasGen.mfr_ch * GasGen.T_ch") ;
  // init(Pump_F.Pump,0)
	dyn[9] = unkR[451] ;
  // init(Pump_O.Pump,0)
	unkR[465] = unkR[466] ;
  // init(Nozzle_1.Nozzle,0)
	unkR[442] = 10000000. ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__F1_partition1::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-124]  CombCha_1.f_F.W = CombCha_1.W_F / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[29] = _div( dyn[4] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-125]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[20] = _div( dyn[4] , dyn[5],"CombCha_1.phi") ;
//[E-126]  CombCha_1.OF = CombCha_1.OF_st / CombCha_1.phi
unkR[9] = _div( unkR[10] , dyn[5],"CombCha_1.phi") ;
//[E-127]  CombCha_1.W_O = CombCha_1.OF * CombCha_1.W_F
unkR[23] = unkR[9] * dyn[4] ;
//[E-128]  CombCha_1.f_O.W = CombCha_1.W_O / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[62] = _div( unkR[23] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-129]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[93] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[23] + unkR[93] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-130]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[94] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[23] + unkR[94] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-131]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[95] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[23] + unkR[95] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-132]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[96] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[23] + unkR[96] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-133]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[97] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[23] + unkR[97] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-134]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[98] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[23] + unkR[98] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-135]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[99] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[23] + unkR[99] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-136]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[100] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[23] + unkR[100] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-137]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[101] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[23] + unkR[101] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-138]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[102] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[23] + unkR[102] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-139]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[103] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[23] + unkR[103] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-140]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[104] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[23] + unkR[104] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-141]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[105] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[23] + unkR[105] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-142]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[106] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[23] + unkR[106] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-143]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[107] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[23] + unkR[107] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-144]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[108] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[23] + unkR[108] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-145]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[109] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[23] + unkR[109] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-146]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[110] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[23] + unkR[110] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-147]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[111] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[23] + unkR[111] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-148]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[112] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[23] + unkR[112] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-149]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[113] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[23] + unkR[113] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-150]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[114] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[23] + unkR[114] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-151]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[115] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[23] + unkR[115] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-152]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[116] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[23] + unkR[116] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-153]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[117] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[23] + unkR[117] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-154]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[118] * MATH__max(dyn[5] - 1., 0.) * unkR[20]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[23] + unkR[118] * dyn[4]) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-155]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - dyn[5], 0.) * unkR[23] + unkR[119] * MATH__max(dyn[5] - 1., 0.) * unkR[20] + (1. - MATH__max(1. - dyn[5], 0.)) * (unkR[23] + unkR[20])) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-156]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
unkR[60] = dyn[0] * LPRES__R(&unkR[151]) * dyn[1] ;
//[E-157]  GasGen.f_F.W = GasGen.W_F / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[257] = _div( dyn[6] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-158]  GasGen.W_IF = GasGen.f_F.W - GasGen.W_F
unkR[249] = unkR[257] - dyn[6] ;
//[E-159]  FlowMeter_F.f_in.W = CombCha_1.f_F.W + GasGen.W_F + GasGen.W_IF
unkR[229] = unkR[29] + dyn[6] + unkR[249] ;
//[E-160]  Pump_F.phi = FlowMeter_F.f_in.W / (Pump_F.A_in * Pump_F.U * LPRES.rho(FlowMeter_F.f_in.fluid))
unkR[456] = _div( unkR[229] , (unkR[448] * dyn[9] * LPRES__rho(&unkR[30])),"Pump_F.A_in * Pump_F.U * LPRES.rho(FlowMeter_F.f_in.fluid)") ;
//[E-161]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi
unkR[458] = 1. - _div( (1. - unkR[459]) , unkR[457],"Pump_F.phi_d") * unkR[456] ;
//[E-162]  Pump_F.tau = Pump_F.psi * Pump_F.U ** 2
unkR[461] = unkR[458] * _pow( dyn[9] , 2.,"(Pump_F.U)**(2)" ) ;
//[E-163]  SplitFrac_F.f_in.pt = Pump_F.tau * Pump_F.eta_d * LPRES.rho(FlowMeter_F.f_in.fluid) + FlowMeter_F.f_in.pt
unkR[454] = unkR[461] * unkR[453] * LPRES__rho(&unkR[30]) + unkR[230] ;
//[E-164]  Injector_F_1.f_in.Tt = (SplitFrac_F.f_in.pt - FlowMeter_F.f_in.pt) / LPRES.rho(FlowMeter_F.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(FlowMeter_F.f_in.fluid) + TankOpen_F.T_d
unkR[395] = _div( _div( (unkR[454] - unkR[230]) , LPRES__rho(&unkR[30]),"LPRES.rho(FlowMeter_F.f_in.fluid)") * (_div( 1. , unkR[453],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[30]),"LPRES.cp(FlowMeter_F.f_in.fluid)") + unkR[228] ;
//[E-165]  Injector_F.f_in.pt = SplitFrac_F.f_in.pt * SplitFrac_F.TPL
unkR[396] = unkR[454] * unkR[480] ;
//[E-166]  Injector_F.PR = Injector_F.f_in.pt / CombCha_1.f_O.p_c
unkR[391] = _div( unkR[396] , unkR[60],"CombCha_1.f_O.p_c") ;
//[E-167]  Injector_F.M_out =  ZONE[5] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)) ZONE[5] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[4]==0)
	unkR[390] = _sqrt(_div( 2. * (_pow( unkR[391] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(FlowMeter_F.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)") ;
else  if(m_branchZone[4]==1)
	unkR[390] = 1. ;
else unkR[390] = 0. ;
//[E-168]  Injector_F.p_out_ch =  IF[39] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[397] = _div( unkR[396] , unkR[392],"Injector_F.PR_sl") ;
}
else 
{
unkR[397] = 0. ;
}
//[E-169]  CombCha_1.f_F.p =  IF[41] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[397]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-170]  CombCha_1.f_F.W =  IF (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F.f_in.pt / sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)) / (((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))) / Injector_F.M_out) ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[4] = evalNormResidueInternal(4,unkR[29],_div( _div( unkR[387] * LPRES__FGAMMA(&unkR[30]) * unkR[396] , _sqrt(unkR[395] * LPRES__R(&unkR[30]),"Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)"),"sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[390] , 2,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(FlowMeter_F.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)))" ) , unkR[390],"Injector_F.M_out")),"((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))) / Injector_F.M_out"));
}
else 
{
res[4] = evalNormResidueInternal(4,unkR[29],unkR[387] * unkR[389] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[396] - unkR[59]),"2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"));
}
//[E-171]  Injector_F_1.f_in.pt = SplitFrac_F.f_in.pt * SplitFrac_F.TPL
unkR[407] = unkR[454] * unkR[480] ;
//[E-172]  Injector_F_1.p_out_ch =  IF[76] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.f_in.pt / Injector_F_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[408] = _div( unkR[407] , unkR[404],"Injector_F_1.PR_sl") ;
}
else 
{
unkR[408] = 0. ;
}
//[E-173]  Pump_F.m.Power = -(Pump_F.tau * FlowMeter_F.f_in.W)
unkR[450] = -(unkR[461] * unkR[229]) ;
//[E-174]  GasGen.W_F_st = GasGen.W_F / GasGen.phi
unkR[248] = _div( dyn[6] , dyn[7],"GasGen.phi") ;
//[E-175]  GasGen.OF = GasGen.OF_st / GasGen.phi
unkR[239] = _div( unkR[240] , dyn[7],"GasGen.phi") ;
//[E-176]  GasGen.W_O = GasGen.OF * GasGen.W_F
unkR[251] = unkR[239] * dyn[6] ;
//[E-177]  GasGen.f_O.W = GasGen.W_O / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[261] = _div( unkR[251] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-178]  GasGen.W_IO = GasGen.f_O.W - GasGen.W_O
unkR[250] = unkR[261] - unkR[251] ;
//[E-179]  FlowMeter_O.f_in.W = CombCha_1.f_O.W + GasGen.W_IO + GasGen.W_O
unkR[233] = unkR[62] + unkR[250] + unkR[251] ;
//[E-180]  GasGen.fluid_P[LOX] =  IF[46] (GasGen.Combustion) (GasGen.fluid_O[LOX] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LOX] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LOX] * GasGen.W_O + GasGen.fluid_F[LOX] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[321] = _div( (unkR[292] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[263] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[321] = _div( (unkR[292] * unkR[251] + unkR[263] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-181]  Nozzle_1.g.fluid[LOX] = GasGen.fluid_P[LOX] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[350] = _div( unkR[321] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-182]  GasGen.fluid_P[NTO] =  IF[47] (GasGen.Combustion) (GasGen.fluid_O[NTO] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[NTO] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[NTO] * GasGen.W_O + GasGen.fluid_F[NTO] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[322] = _div( (unkR[293] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[264] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[322] = _div( (unkR[293] * unkR[251] + unkR[264] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-183]  Nozzle_1.g.fluid[NTO] = GasGen.fluid_P[NTO] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[351] = _div( unkR[322] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-184]  GasGen.fluid_P[H2O2] =  IF[48] (GasGen.Combustion) (GasGen.fluid_O[H2O2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[H2O2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[H2O2] * GasGen.W_O + GasGen.fluid_F[H2O2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[323] = _div( (unkR[294] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[265] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[323] = _div( (unkR[294] * unkR[251] + unkR[265] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-185]  Nozzle_1.g.fluid[H2O2] = GasGen.fluid_P[H2O2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[352] = _div( unkR[323] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-186]  GasGen.fluid_P[HNO3] =  IF[49] (GasGen.Combustion) (GasGen.fluid_O[HNO3] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[HNO3] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[HNO3] * GasGen.W_O + GasGen.fluid_F[HNO3] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[324] = _div( (unkR[295] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[266] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[324] = _div( (unkR[295] * unkR[251] + unkR[266] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-187]  Nozzle_1.g.fluid[HNO3] = GasGen.fluid_P[HNO3] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[353] = _div( unkR[324] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-188]  GasGen.fluid_P[LF2] =  IF[50] (GasGen.Combustion) (GasGen.fluid_O[LF2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LF2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LF2] * GasGen.W_O + GasGen.fluid_F[LF2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[325] = _div( (unkR[296] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[267] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[325] = _div( (unkR[296] * unkR[251] + unkR[267] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-189]  Nozzle_1.g.fluid[LF2] = GasGen.fluid_P[LF2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[354] = _div( unkR[325] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-190]  GasGen.fluid_P[RP_1] =  IF[51] (GasGen.Combustion) (GasGen.fluid_O[RP_1] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[RP_1] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[RP_1] * GasGen.W_O + GasGen.fluid_F[RP_1] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[326] = _div( (unkR[297] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[268] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[326] = _div( (unkR[297] * unkR[251] + unkR[268] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-191]  Nozzle_1.g.fluid[RP_1] = GasGen.fluid_P[RP_1] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[355] = _div( unkR[326] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-192]  GasGen.fluid_P[LCH4] =  IF[52] (GasGen.Combustion) (GasGen.fluid_O[LCH4] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LCH4] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LCH4] * GasGen.W_O + GasGen.fluid_F[LCH4] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[327] = _div( (unkR[298] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[269] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[327] = _div( (unkR[298] * unkR[251] + unkR[269] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-193]  Nozzle_1.g.fluid[LCH4] = GasGen.fluid_P[LCH4] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[356] = _div( unkR[327] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-194]  GasGen.fluid_P[LH2] =  IF[53] (GasGen.Combustion) (GasGen.fluid_O[LH2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LH2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LH2] * GasGen.W_O + GasGen.fluid_F[LH2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[328] = _div( (unkR[299] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[270] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[328] = _div( (unkR[299] * unkR[251] + unkR[270] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-195]  Nozzle_1.g.fluid[LH2] = GasGen.fluid_P[LH2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[357] = _div( unkR[328] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-196]  GasGen.fluid_P[N2H4] =  IF[54] (GasGen.Combustion) (GasGen.fluid_O[N2H4] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[N2H4] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[N2H4] * GasGen.W_O + GasGen.fluid_F[N2H4] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[329] = _div( (unkR[300] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[271] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[329] = _div( (unkR[300] * unkR[251] + unkR[271] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-197]  Nozzle_1.g.fluid[N2H4] = GasGen.fluid_P[N2H4] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[358] = _div( unkR[329] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-198]  GasGen.fluid_P[UDMH] =  IF[55] (GasGen.Combustion) (GasGen.fluid_O[UDMH] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[UDMH] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[UDMH] * GasGen.W_O + GasGen.fluid_F[UDMH] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[330] = _div( (unkR[301] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[272] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[330] = _div( (unkR[301] * unkR[251] + unkR[272] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-199]  Nozzle_1.g.fluid[UDMH] = GasGen.fluid_P[UDMH] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[359] = _div( unkR[330] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-200]  GasGen.fluid_P[MMH] =  IF[56] (GasGen.Combustion) (GasGen.fluid_O[MMH] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[MMH] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[MMH] * GasGen.W_O + GasGen.fluid_F[MMH] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[331] = _div( (unkR[302] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[273] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[331] = _div( (unkR[302] * unkR[251] + unkR[273] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-201]  Nozzle_1.g.fluid[MMH] = GasGen.fluid_P[MMH] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[360] = _div( unkR[331] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-202]  GasGen.fluid_P[JP_10] =  IF[57] (GasGen.Combustion) (GasGen.fluid_O[JP_10] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[JP_10] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[JP_10] * GasGen.W_O + GasGen.fluid_F[JP_10] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[332] = _div( (unkR[303] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[274] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[332] = _div( (unkR[303] * unkR[251] + unkR[274] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-203]  Nozzle_1.g.fluid[JP_10] = GasGen.fluid_P[JP_10] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[361] = _div( unkR[332] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-204]  GasGen.fluid_P[Kerox] =  IF[58] (GasGen.Combustion) (GasGen.fluid_O[Kerox] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Kerox] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Kerox] * GasGen.W_O + GasGen.fluid_F[Kerox] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[333] = _div( (unkR[304] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[275] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[333] = _div( (unkR[304] * unkR[251] + unkR[275] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-205]  Nozzle_1.g.fluid[Kerox] = GasGen.fluid_P[Kerox] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[362] = _div( unkR[333] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-206]  GasGen.fluid_P[Oil] =  IF[59] (GasGen.Combustion) (GasGen.fluid_O[Oil] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Oil] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Oil] * GasGen.W_O + GasGen.fluid_F[Oil] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[334] = _div( (unkR[305] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[276] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[334] = _div( (unkR[305] * unkR[251] + unkR[276] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-207]  Nozzle_1.g.fluid[Oil] = GasGen.fluid_P[Oil] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[363] = _div( unkR[334] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-208]  GasGen.fluid_P[H2O] =  IF[60] (GasGen.Combustion) (GasGen.fluid_O[H2O] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[H2O] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[H2O] * GasGen.W_O + GasGen.fluid_F[H2O] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[335] = _div( (unkR[306] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[277] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[335] = _div( (unkR[306] * unkR[251] + unkR[277] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-209]  Nozzle_1.g.fluid[H2O] = GasGen.fluid_P[H2O] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[364] = _div( unkR[335] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-210]  GasGen.fluid_P[IPA] =  IF[61] (GasGen.Combustion) (GasGen.fluid_O[IPA] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[IPA] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[IPA] * GasGen.W_O + GasGen.fluid_F[IPA] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[336] = _div( (unkR[307] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[278] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[336] = _div( (unkR[307] * unkR[251] + unkR[278] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-211]  Nozzle_1.g.fluid[IPA] = GasGen.fluid_P[IPA] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[365] = _div( unkR[336] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-212]  GasGen.fluid_P[Air] =  IF[62] (GasGen.Combustion) (GasGen.fluid_O[Air] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Air] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Air] * GasGen.W_O + GasGen.fluid_F[Air] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[337] = _div( (unkR[308] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[279] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[337] = _div( (unkR[308] * unkR[251] + unkR[279] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-213]  Nozzle_1.g.fluid[Air] = GasGen.fluid_P[Air] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[366] = _div( unkR[337] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-214]  GasGen.fluid_P[Ar] =  IF[63] (GasGen.Combustion) (GasGen.fluid_O[Ar] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Ar] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Ar] * GasGen.W_O + GasGen.fluid_F[Ar] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[338] = _div( (unkR[309] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[280] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[338] = _div( (unkR[309] * unkR[251] + unkR[280] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-215]  Nozzle_1.g.fluid[Ar] = GasGen.fluid_P[Ar] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[367] = _div( unkR[338] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-216]  GasGen.fluid_P[CH4] =  IF[64] (GasGen.Combustion) (GasGen.fluid_O[CH4] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[CH4] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[CH4] * GasGen.W_O + GasGen.fluid_F[CH4] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[339] = _div( (unkR[310] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[281] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[339] = _div( (unkR[310] * unkR[251] + unkR[281] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-217]  Nozzle_1.g.fluid[CH4] = GasGen.fluid_P[CH4] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[368] = _div( unkR[339] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-218]  GasGen.fluid_P[CO] =  IF[65] (GasGen.Combustion) (GasGen.fluid_O[CO] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[CO] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[CO] * GasGen.W_O + GasGen.fluid_F[CO] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[340] = _div( (unkR[311] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[282] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[340] = _div( (unkR[311] * unkR[251] + unkR[282] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-219]  Nozzle_1.g.fluid[CO] = GasGen.fluid_P[CO] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[369] = _div( unkR[340] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-220]  GasGen.fluid_P[CO2] =  IF[66] (GasGen.Combustion) (GasGen.fluid_O[CO2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[CO2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[CO2] * GasGen.W_O + GasGen.fluid_F[CO2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[341] = _div( (unkR[312] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[283] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[341] = _div( (unkR[312] * unkR[251] + unkR[283] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-221]  Nozzle_1.g.fluid[CO2] = GasGen.fluid_P[CO2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[370] = _div( unkR[341] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-222]  GasGen.fluid_P[H2] =  IF[67] (GasGen.Combustion) (GasGen.fluid_O[H2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[H2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[H2] * GasGen.W_O + GasGen.fluid_F[H2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[342] = _div( (unkR[313] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[284] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[342] = _div( (unkR[313] * unkR[251] + unkR[284] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-223]  Nozzle_1.g.fluid[H2] = GasGen.fluid_P[H2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[371] = _div( unkR[342] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-224]  GasGen.fluid_P[He] =  IF[68] (GasGen.Combustion) (GasGen.fluid_O[He] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[He] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[He] * GasGen.W_O + GasGen.fluid_F[He] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[343] = _div( (unkR[314] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[285] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[343] = _div( (unkR[314] * unkR[251] + unkR[285] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-225]  Nozzle_1.g.fluid[He] = GasGen.fluid_P[He] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[372] = _div( unkR[343] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-226]  GasGen.fluid_P[N2] =  IF[69] (GasGen.Combustion) (GasGen.fluid_O[N2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[N2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[N2] * GasGen.W_O + GasGen.fluid_F[N2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[344] = _div( (unkR[315] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[286] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[344] = _div( (unkR[315] * unkR[251] + unkR[286] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-227]  Nozzle_1.g.fluid[N2] = GasGen.fluid_P[N2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[373] = _div( unkR[344] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-228]  GasGen.fluid_P[O2] =  IF[70] (GasGen.Combustion) (GasGen.fluid_O[O2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[O2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[O2] * GasGen.W_O + GasGen.fluid_F[O2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[345] = _div( (unkR[316] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[287] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[345] = _div( (unkR[316] * unkR[251] + unkR[287] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-229]  Nozzle_1.g.fluid[O2] = GasGen.fluid_P[O2] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[374] = _div( unkR[345] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-230]  GasGen.fluid_P[MMH_vapour] =  IF[71] (GasGen.Combustion) (GasGen.fluid_O[MMH_vapour] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[MMH_vapour] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[MMH_vapour] * GasGen.W_O + GasGen.fluid_F[MMH_vapour] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[346] = _div( (unkR[317] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[288] * MATH__max(dyn[7] - 1., 0.) * unkR[248]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[346] = _div( (unkR[317] * unkR[251] + unkR[288] * dyn[6]) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-231]  Nozzle_1.g.fluid[MMH_vapour] = GasGen.fluid_P[MMH_vapour] * (GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W
unkR[375] = _div( unkR[346] * (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") ;
//[E-232]  GasGen.fluid_P[Comb_prod] =  IF[72] (GasGen.Combustion) (GasGen.fluid_O[Comb_prod] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Comb_prod] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st + (1 - MATH.max(1 - GasGen.phi, 0)) * (GasGen.W_O + GasGen.W_F_st)) / (GasGen.W_O + GasGen.W_F)	 ELSE 0
if( unkI[2] ) 
{
unkR[347] = _div( (unkR[318] * MATH__max(1. - dyn[7], 0.) * unkR[251] + unkR[289] * MATH__max(dyn[7] - 1., 0.) * unkR[248] + (1. - MATH__max(1. - dyn[7], 0.)) * (unkR[251] + unkR[248])) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[347] = 0. ;
}
//[E-233]  GasGen.f_O.p_c = GasGen.rho_trans * LPRES.R(GasGen.fluid_P) * GasGen.g.Tt
unkR[259] = dyn[2] * LPRES__R(&unkR[321]) * dyn[3] ;
//[E-234]  Injector_F_1.PR = Injector_F_1.f_in.pt / GasGen.f_O.p_c
unkR[403] = _div( unkR[407] , unkR[259],"GasGen.f_O.p_c") ;
//[E-235]  Injector_F_1.M_out =  ZONE[7] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)) ZONE[7] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[6]==0)
	unkR[402] = _sqrt(_div( 2. * (_pow( unkR[403] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(FlowMeter_F.f_in.fluid)")),"(Injector_F_1.PR)**((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1"),"2 * (Injector_F_1.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)") ;
else  if(m_branchZone[6]==1)
	unkR[402] = 1. ;
else unkR[402] = 0. ;
//[E-236]  GasGen.f_F.p =  IF[78] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) MATH.max(GasGen.f_O.p_c, Injector_F_1.p_out_ch)	 ELSE GasGen.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[258] = MATH__max(unkR[259], unkR[408]) ;
}
else 
{
unkR[258] = unkR[259] ;
}
//[E-237]  GasGen.f_F.W =  IF (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.A * LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F_1.f_in.pt / sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)) / (((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))) / Injector_F_1.M_out) ELSE Injector_F_1.A * Injector_F_1.C_D * sqrt(2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F_1.f_in.pt - GasGen.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
res[5] = evalNormResidueInternal(5,unkR[257],_div( _div( unkR[399] * LPRES__FGAMMA(&unkR[30]) * unkR[407] , _sqrt(unkR[395] * LPRES__R(&unkR[30]),"Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)"),"sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[30]) - 1) * _pow( unkR[402] , 2,"(Injector_F_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1),"LPRES.gamma(FlowMeter_F.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1) , (2 * (LPRES__gamma(&unkR[30]) - 1)),"2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)))" ) , unkR[402],"Injector_F_1.M_out")),"((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))) / Injector_F_1.M_out"));
}
else 
{
res[5] = evalNormResidueInternal(5,unkR[257],unkR[399] * unkR[401] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[407] - unkR[258]),"2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F_1.f_in.pt - GasGen.f_F.p)"));
}
//[E-238]  Nozzle_1.g.fluid[Comb_prod] = (GasGen.fluid_P[Comb_prod] * (GasGen.W_O + GasGen.W_F) + GasGen.W_IO + GasGen.W_IF) / Nozzle_1.g.W
unkR[376] = _div( (unkR[347] * (unkR[251] + dyn[6]) + unkR[250] + unkR[249]) , dyn[8],"Nozzle_1.g.W") ;
//[E-239]  cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid) = Nozzle_1.g.W * sqrt(GasGen.g.Tt * LPRES.R(Nozzle_1.g.fluid)) / (GasGen.f_O.p_c * Turbine_ch.A_in)
res[6] = evalNormResidueInternal(6,cos(unkR[491] * 3.14159265358979/180.) * LPRES__FGAMMA(&unkR[350]),_div( dyn[8] * _sqrt(dyn[3] * LPRES__R(&unkR[350]),"GasGen.g.Tt * LPRES.R(Nozzle_1.g.fluid)") , (unkR[259] * unkR[488]),"GasGen.f_O.p_c * Turbine_ch.A_in"));
//[E-240]  Pump_O.m.N = Pump_F.U / Pump_F.r_m
unkR[455] = _div( dyn[9] , unkR[460],"Pump_F.r_m") ;
//[E-241]  Pump_O.U = Pump_O.m.N * Pump_O.r_m
unkR[465] = unkR[455] * unkR[474] ;
//[E-242]  Pump_O.phi = FlowMeter_O.f_in.W / (Pump_O.A_in * Pump_O.U * LPRES.rho(FlowMeter_O.f_in.fluid))
unkR[470] = _div( unkR[233] , (unkR[462] * unkR[465] * LPRES__rho(&unkR[63])),"Pump_O.A_in * Pump_O.U * LPRES.rho(FlowMeter_O.f_in.fluid)") ;
//[E-243]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi
unkR[472] = 1. - _div( (1. - unkR[473]) , unkR[471],"Pump_O.phi_d") * unkR[470] ;
//[E-244]  Pump_O.tau = Pump_O.psi * Pump_O.U ** 2
unkR[475] = unkR[472] * _pow( unkR[465] , 2.,"(Pump_O.U)**(2)" ) ;
//[E-245]  SplitFrac_O.f_in.pt = Pump_O.tau * Pump_O.eta_d * LPRES.rho(FlowMeter_O.f_in.fluid) + FlowMeter_O.f_in.pt
unkR[469] = unkR[475] * unkR[468] * LPRES__rho(&unkR[63]) + unkR[234] ;
//[E-246]  Injector_O_1.f_in.Tt = (SplitFrac_O.f_in.pt - FlowMeter_O.f_in.pt) / LPRES.rho(FlowMeter_O.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(FlowMeter_O.f_in.fluid) + TankOpen_O.T_d
unkR[418] = _div( _div( (unkR[469] - unkR[234]) , LPRES__rho(&unkR[63]),"LPRES.rho(FlowMeter_O.f_in.fluid)") * (_div( 1. , unkR[468],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[63]),"LPRES.cp(FlowMeter_O.f_in.fluid)") + unkR[232] ;
//[E-247]  Injector_O.f_in.pt = SplitFrac_O.f_in.pt * SplitFrac_O.TPL
unkR[419] = unkR[469] * unkR[481] ;
//[E-248]  Injector_O.PR = Injector_O.f_in.pt / CombCha_1.f_O.p_c
unkR[414] = _div( unkR[419] , unkR[60],"CombCha_1.f_O.p_c") ;
//[E-249]  Injector_O.M_out =  ZONE[4] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)) ZONE[4] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[413] = _sqrt(_div( 2. * (_pow( unkR[414] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(FlowMeter_O.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[413] = 1. ;
else unkR[413] = 0. ;
//[E-250]  Injector_O.p_out_ch =  IF[31] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[420] = _div( unkR[419] , unkR[415],"Injector_O.PR_sl") ;
}
else 
{
unkR[420] = 0. ;
}
//[E-251]  CombCha_1.f_O.p =  IF[33] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[420]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-252]  CombCha_1.f_O.W =  IF (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O.f_in.pt / sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)) / (((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[7] = evalNormResidueInternal(7,unkR[62],_div( _div( unkR[410] * LPRES__FGAMMA(&unkR[63]) * unkR[419] , _sqrt(unkR[418] * LPRES__R(&unkR[63]),"Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)"),"sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[413] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(FlowMeter_O.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)))" ) , unkR[413],"Injector_O.M_out")),"((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[7] = evalNormResidueInternal(7,unkR[62],unkR[410] * unkR[412] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[419] - unkR[92]),"2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p)"));
}
//[E-253]  Injector_O_1.f_in.pt = SplitFrac_O.f_in.pt * SplitFrac_O.TPL
unkR[430] = unkR[469] * unkR[481] ;
//[E-254]  Injector_O_1.PR = Injector_O_1.f_in.pt / GasGen.f_O.p_c
unkR[426] = _div( unkR[430] , unkR[259],"GasGen.f_O.p_c") ;
//[E-255]  Injector_O_1.M_out =  ZONE[8] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)) ZONE[8] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[7]==0)
	unkR[425] = _sqrt(_div( 2. * (_pow( unkR[426] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(FlowMeter_O.f_in.fluid)")),"(Injector_O_1.PR)**((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1"),"2 * (Injector_O_1.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)") ;
else  if(m_branchZone[7]==1)
	unkR[425] = 1. ;
else unkR[425] = 0. ;
//[E-256]  Injector_O_1.p_out_ch =  IF[84] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.f_in.pt / Injector_O_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[431] = _div( unkR[430] , unkR[427],"Injector_O_1.PR_sl") ;
}
else 
{
unkR[431] = 0. ;
}
//[E-257]  GasGen.f_O.p =  IF[86] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) MATH.max(GasGen.f_O.p_c, Injector_O_1.p_out_ch)	 ELSE GasGen.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[262] = MATH__max(unkR[259], unkR[431]) ;
}
else 
{
unkR[262] = unkR[259] ;
}
//[E-258]  GasGen.f_O.W =  IF (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.A * LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O_1.f_in.pt / sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)) / (((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))) / Injector_O_1.M_out) ELSE Injector_O_1.A * Injector_O_1.C_D * sqrt(2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O_1.f_in.pt - GasGen.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[8] = evalNormResidueInternal(8,unkR[261],_div( _div( unkR[422] * LPRES__FGAMMA(&unkR[63]) * unkR[430] , _sqrt(unkR[418] * LPRES__R(&unkR[63]),"Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)"),"sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[425] , 2,"(Injector_O_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(FlowMeter_O.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)))" ) , unkR[425],"Injector_O_1.M_out")),"((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))) / Injector_O_1.M_out"));
}
else 
{
res[8] = evalNormResidueInternal(8,unkR[261],unkR[422] * unkR[424] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[430] - unkR[262]),"2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O_1.f_in.pt - GasGen.f_O.p)"));
}
//[E-259]  Pump_O.m.Power = -(Pump_O.tau * FlowMeter_O.f_in.W)
unkR[464] = -(unkR[475] * unkR[233]) ;
//[E-260]  Shaft_1.m_1.Power = Pump_F.m.Power + Pump_O.m.Power
unkR[477] = unkR[450] + unkR[464] ;
//[E-261]  Turbine_ch.m.Power =  ZONE[1] (Turbine_ch.m.Power > 0) -(Shaft_1.m_1.Power / Shaft_1.eta)	  OTHERS -(Shaft_1.m_1.Power * Shaft_1.eta)
 if(m_branchZone[0]==0)
	unkR[478] = -(_div( unkR[477] , unkR[476],"Shaft_1.eta")) ;
else unkR[478] = -(unkR[477] * unkR[476]) ;
//[E-262]  Nozzle_1.g.Tt = GasGen.g.Tt - Turbine_ch.m.Power / (Nozzle_1.g.W * LPRES.cp(Nozzle_1.g.fluid))
unkR[441] = dyn[3] - _div( unkR[478] , (dyn[8] * LPRES__cp(&unkR[350])),"Nozzle_1.g.W * LPRES.cp(Nozzle_1.g.fluid)") ;
//[E-263]  Turbine_ch.alpha = Nozzle_1.g.Tt / GasGen.g.Tt
unkR[490] = _div( unkR[441] , dyn[3],"GasGen.g.Tt") ;
//[E-264]  Nozzle_1.g.pt = (1 - (1 - Turbine_ch.alpha) / Turbine_ch.eta_d) ** (1 / ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))) * GasGen.f_O.p_c
unkR[442] = _pow( (1. - _div( (1. - unkR[490]) , unkR[492],"Turbine_ch.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[350]) - 1.) , LPRES__gamma(&unkR[350]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)")),"(1 - (1 - Turbine_ch.alpha) / Turbine_ch.eta_d)**(1 / ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)))" ) * unkR[259] ;
//[E-265]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[437] = _div( unkR[442] , unkR[444],"Nozzle_1.p_amb") ;
//[E-266]  Nozzle_1.M_out =  ZONE[2] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))	  OTHERS 1
 if(m_branchZone[1]==0)
	unkR[436] = _sqrt(_div( 2. * (_pow( unkR[437] , (_div( (LPRES__gamma(&unkR[350]) - 1.) , LPRES__gamma(&unkR[350]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" ) - 1.) , (LPRES__gamma(&unkR[350]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)") ;
else unkR[436] = 1. ;
//[E-267]  Nozzle_1.A_sl = Nozzle_1.A * Nozzle_1.M_out / ((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))
unkR[435] = _div( unkR[434] * unkR[436] , _pow( (_div( (2. + (LPRES__gamma(&unkR[350]) - 1.) * _pow( unkR[436] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[350]) + 1.),"LPRES.gamma(Nozzle_1.g.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[350]) + 1.) , (2. * (LPRES__gamma(&unkR[350]) - 1.)),"2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)")),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1))**((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))" ),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))") ;
//[E-268]  Nozzle_1.g.W = Nozzle_1.A_sl * LPRES.FGAMMA(Nozzle_1.g.fluid) * Nozzle_1.g.pt / sqrt(Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid))
res[9] = evalNormResidueInternal(9,dyn[8],_div( unkR[435] * LPRES__FGAMMA(&unkR[350]) * unkR[442] , _sqrt(unkR[441] * LPRES__R(&unkR[350]),"Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)"),"sqrt(Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid))"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__F1_partition1::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_partition1& m= *DRLPRUEBAS__F1_partition1::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__F1_partition1::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[6];
	s_current= this;
	dcopy(13, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__F1_partition1::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__F1_partition1::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-282]  ThrustMonitor_1.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[180] = _div( unkR[151] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-283]  ThrustMonitor_1.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[181] = _div( unkR[152] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-284]  ThrustMonitor_1.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[182] = _div( unkR[153] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-285]  ThrustMonitor_1.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[183] = _div( unkR[154] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-286]  ThrustMonitor_1.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[184] = _div( unkR[155] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-287]  ThrustMonitor_1.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[185] = _div( unkR[156] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-288]  ThrustMonitor_1.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[186] = _div( unkR[157] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-289]  ThrustMonitor_1.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[187] = _div( unkR[158] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-290]  ThrustMonitor_1.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[188] = _div( unkR[159] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-291]  ThrustMonitor_1.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[189] = _div( unkR[160] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-292]  ThrustMonitor_1.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[190] = _div( unkR[161] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-293]  ThrustMonitor_1.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[191] = _div( unkR[162] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-294]  ThrustMonitor_1.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[192] = _div( unkR[163] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-295]  ThrustMonitor_1.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[193] = _div( unkR[164] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-296]  ThrustMonitor_1.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[194] = _div( unkR[165] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-297]  ThrustMonitor_1.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[195] = _div( unkR[166] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-298]  ThrustMonitor_1.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[196] = _div( unkR[167] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-299]  ThrustMonitor_1.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[197] = _div( unkR[168] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-300]  ThrustMonitor_1.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[198] = _div( unkR[169] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-301]  ThrustMonitor_1.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[199] = _div( unkR[170] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-302]  ThrustMonitor_1.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[200] = _div( unkR[171] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-303]  ThrustMonitor_1.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[201] = _div( unkR[172] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-304]  ThrustMonitor_1.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[202] = _div( unkR[173] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-305]  ThrustMonitor_1.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[203] = _div( unkR[174] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-306]  ThrustMonitor_1.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[204] = _div( unkR[175] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-307]  ThrustMonitor_1.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[205] = _div( unkR[176] * (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-308]  ThrustMonitor_1.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor_1.g.W
unkR[206] = _div( (unkR[177] * (unkR[23] + dyn[4]) + unkR[22] + unkR[21]) , dyn[10],"ThrustMonitor_1.g.W") ;
//[E-309]  ThrustMonitor_1.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid))
res[10] = evalNormResidueInternal(10,dyn[10],_div( unkR[60] * unkR[3] , (_div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__F1_partition1::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_partition1& m= *DRLPRUEBAS__F1_partition1::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__F1_partition1::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_partition1::fcn2, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__F1_partition1::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-311]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor_1.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[11] = evalNormResidueInternal(11,_div( _div( dyn[10] * _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor_1.g.A_out") , unkR[60],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[11] * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1)/2 * _pow( dyn[11] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[180]) + 1)/2 , (LPRES__gamma(&unkR[180]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__F1_partition1::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_partition1& m= *DRLPRUEBAS__F1_partition1::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__F1_partition1::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_partition1::fcn3, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__F1_partition1::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-339]  ThrustMonitor_1.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[12] = evalNormResidueInternal(12,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[180]) , (_pow( (_div( dyn[12] , unkR[60],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[180]) * (1. - _pow( (_div( dyn[12] , unkR[60],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[180]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__F1_partition1::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_partition1& m= *DRLPRUEBAS__F1_partition1::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[12],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[12]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__F1_partition1::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_partition1::fcn4, n, &dyn[12], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__F1_partition1::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(TankOpen_F.fluid, FlowMeter_F.f_in.fluid) %%% (OUT VAR)FlowMeter_F.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[30]);
//[E-2]  FlowMeter_F.f_in.pt = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[230] = LPRES__ISA_Pressure(unkR[433]) ;
//[E-3]  LPRES.Init_fluid(TankOpen_O.fluid, FlowMeter_O.f_in.fluid) %%% (OUT VAR)FlowMeter_O.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[63]);
//[E-4]  FlowMeter_O.f_in.pt = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[234] = LPRES__ISA_Pressure(unkR[433]) ;
//[E-5]  CombCha_1.fluid_O[LOX] = FlowMeter_O.f_in.fluid[LOX] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-6]  Injector_F.PR_sl =  IF[38] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[392] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[392] = 0. ;
}
//[E-7]  CombCha_1.fluid_F[LOX] = FlowMeter_F.f_in.fluid[LOX] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-8]  CombCha_1.fluid_O[NTO] = FlowMeter_O.f_in.fluid[NTO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-9]  CombCha_1.fluid_F[NTO] = FlowMeter_F.f_in.fluid[NTO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_O[H2O2] = FlowMeter_O.f_in.fluid[H2O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_F[H2O2] = FlowMeter_F.f_in.fluid[H2O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_O[HNO3] = FlowMeter_O.f_in.fluid[HNO3] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[HNO3] = FlowMeter_F.f_in.fluid[HNO3] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_O[LF2] = FlowMeter_O.f_in.fluid[LF2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_F[LF2] = FlowMeter_F.f_in.fluid[LF2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_O[RP_1] = FlowMeter_O.f_in.fluid[RP_1] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_F[RP_1] = FlowMeter_F.f_in.fluid[RP_1] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_O[LCH4] = FlowMeter_O.f_in.fluid[LCH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[LCH4] = FlowMeter_F.f_in.fluid[LCH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_O[LH2] = FlowMeter_O.f_in.fluid[LH2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_F[LH2] = FlowMeter_F.f_in.fluid[LH2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_O[N2H4] = FlowMeter_O.f_in.fluid[N2H4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_F[N2H4] = FlowMeter_F.f_in.fluid[N2H4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_O[UDMH] = FlowMeter_O.f_in.fluid[UDMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[UDMH] = FlowMeter_F.f_in.fluid[UDMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[MMH] = FlowMeter_O.f_in.fluid[MMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[MMH] = FlowMeter_F.f_in.fluid[MMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[JP_10] = FlowMeter_O.f_in.fluid[JP_10] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[JP_10] = FlowMeter_F.f_in.fluid[JP_10] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[Kerox] = FlowMeter_O.f_in.fluid[Kerox] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[Kerox] = FlowMeter_F.f_in.fluid[Kerox] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[Oil] = FlowMeter_O.f_in.fluid[Oil] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[Oil] = FlowMeter_F.f_in.fluid[Oil] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[H2O] = FlowMeter_O.f_in.fluid[H2O] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[H2O] = FlowMeter_F.f_in.fluid[H2O] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[IPA] = FlowMeter_O.f_in.fluid[IPA] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[IPA] = FlowMeter_F.f_in.fluid[IPA] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[Air] = FlowMeter_O.f_in.fluid[Air] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[Air] = FlowMeter_F.f_in.fluid[Air] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[Ar] = FlowMeter_O.f_in.fluid[Ar] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[Ar] = FlowMeter_F.f_in.fluid[Ar] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[CH4] = FlowMeter_O.f_in.fluid[CH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[CH4] = FlowMeter_F.f_in.fluid[CH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[CO] = FlowMeter_O.f_in.fluid[CO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[CO] = FlowMeter_F.f_in.fluid[CO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[CO2] = FlowMeter_O.f_in.fluid[CO2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[CO2] = FlowMeter_F.f_in.fluid[CO2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[H2] = FlowMeter_O.f_in.fluid[H2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[H2] = FlowMeter_F.f_in.fluid[H2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[He] = FlowMeter_O.f_in.fluid[He] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[He] = FlowMeter_F.f_in.fluid[He] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[N2] = FlowMeter_O.f_in.fluid[N2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[N2] = FlowMeter_F.f_in.fluid[N2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[O2] = FlowMeter_O.f_in.fluid[O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[O2] = FlowMeter_F.f_in.fluid[O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[MMH_vapour] = FlowMeter_O.f_in.fluid[MMH_vapour] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[MMH_vapour] = FlowMeter_F.f_in.fluid[MMH_vapour] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[148] = 0. ;
//[E-59]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[119] = 0. ;
//[E-60]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = unkR[5] ;
}
else 
{
unkR[178] = 0. ;
}
//[E-61]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[25] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-62]  Injector_O.PR_sl =  IF[30] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[415] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[415] = 0. ;
}
//[E-63]  GasGen.fluid_O[LOX] = FlowMeter_O.f_in.fluid[LOX] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[292] = _div( unkR[63] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-64]  Injector_F_1.PR_sl =  IF[75] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[404] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[404] = 0. ;
}
//[E-65]  GasGen.fluid_F[LOX] = FlowMeter_F.f_in.fluid[LOX] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[263] = _div( unkR[30] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-66]  GasGen.fluid_O[NTO] = FlowMeter_O.f_in.fluid[NTO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[293] = _div( unkR[64] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-67]  GasGen.fluid_F[NTO] = FlowMeter_F.f_in.fluid[NTO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[264] = _div( unkR[31] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-68]  GasGen.fluid_O[H2O2] = FlowMeter_O.f_in.fluid[H2O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[294] = _div( unkR[65] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-69]  GasGen.fluid_F[H2O2] = FlowMeter_F.f_in.fluid[H2O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[265] = _div( unkR[32] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-70]  GasGen.fluid_O[HNO3] = FlowMeter_O.f_in.fluid[HNO3] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[295] = _div( unkR[66] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-71]  GasGen.fluid_F[HNO3] = FlowMeter_F.f_in.fluid[HNO3] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[266] = _div( unkR[33] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-72]  GasGen.fluid_O[LF2] = FlowMeter_O.f_in.fluid[LF2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[296] = _div( unkR[67] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-73]  GasGen.fluid_F[LF2] = FlowMeter_F.f_in.fluid[LF2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[267] = _div( unkR[34] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-74]  GasGen.fluid_O[RP_1] = FlowMeter_O.f_in.fluid[RP_1] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[297] = _div( unkR[68] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-75]  GasGen.fluid_F[RP_1] = FlowMeter_F.f_in.fluid[RP_1] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[268] = _div( unkR[35] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-76]  GasGen.fluid_O[LCH4] = FlowMeter_O.f_in.fluid[LCH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[298] = _div( unkR[69] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-77]  GasGen.fluid_F[LCH4] = FlowMeter_F.f_in.fluid[LCH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[269] = _div( unkR[36] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-78]  GasGen.fluid_O[LH2] = FlowMeter_O.f_in.fluid[LH2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[299] = _div( unkR[70] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-79]  GasGen.fluid_F[LH2] = FlowMeter_F.f_in.fluid[LH2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[270] = _div( unkR[37] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-80]  GasGen.fluid_O[N2H4] = FlowMeter_O.f_in.fluid[N2H4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[300] = _div( unkR[71] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-81]  GasGen.fluid_F[N2H4] = FlowMeter_F.f_in.fluid[N2H4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[271] = _div( unkR[38] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-82]  GasGen.fluid_O[UDMH] = FlowMeter_O.f_in.fluid[UDMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[301] = _div( unkR[72] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-83]  GasGen.fluid_F[UDMH] = FlowMeter_F.f_in.fluid[UDMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[272] = _div( unkR[39] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-84]  GasGen.fluid_O[MMH] = FlowMeter_O.f_in.fluid[MMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[302] = _div( unkR[73] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-85]  GasGen.fluid_F[MMH] = FlowMeter_F.f_in.fluid[MMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[273] = _div( unkR[40] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-86]  GasGen.fluid_O[JP_10] = FlowMeter_O.f_in.fluid[JP_10] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[303] = _div( unkR[74] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-87]  GasGen.fluid_F[JP_10] = FlowMeter_F.f_in.fluid[JP_10] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[274] = _div( unkR[41] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-88]  GasGen.fluid_O[Kerox] = FlowMeter_O.f_in.fluid[Kerox] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[304] = _div( unkR[75] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-89]  GasGen.fluid_F[Kerox] = FlowMeter_F.f_in.fluid[Kerox] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[275] = _div( unkR[42] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-90]  GasGen.fluid_O[Oil] = FlowMeter_O.f_in.fluid[Oil] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[305] = _div( unkR[76] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-91]  GasGen.fluid_F[Oil] = FlowMeter_F.f_in.fluid[Oil] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[276] = _div( unkR[43] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-92]  GasGen.fluid_O[H2O] = FlowMeter_O.f_in.fluid[H2O] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[306] = _div( unkR[77] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-93]  GasGen.fluid_F[H2O] = FlowMeter_F.f_in.fluid[H2O] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[277] = _div( unkR[44] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-94]  GasGen.fluid_O[IPA] = FlowMeter_O.f_in.fluid[IPA] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[307] = _div( unkR[78] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-95]  GasGen.fluid_F[IPA] = FlowMeter_F.f_in.fluid[IPA] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[278] = _div( unkR[45] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-96]  GasGen.fluid_O[Air] = FlowMeter_O.f_in.fluid[Air] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[308] = _div( unkR[79] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-97]  GasGen.fluid_F[Air] = FlowMeter_F.f_in.fluid[Air] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[279] = _div( unkR[46] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-98]  GasGen.fluid_O[Ar] = FlowMeter_O.f_in.fluid[Ar] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[309] = _div( unkR[80] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-99]  GasGen.fluid_F[Ar] = FlowMeter_F.f_in.fluid[Ar] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[280] = _div( unkR[47] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-100]  GasGen.fluid_O[CH4] = FlowMeter_O.f_in.fluid[CH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[310] = _div( unkR[81] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-101]  GasGen.fluid_F[CH4] = FlowMeter_F.f_in.fluid[CH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[281] = _div( unkR[48] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-102]  GasGen.fluid_O[CO] = FlowMeter_O.f_in.fluid[CO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[311] = _div( unkR[82] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-103]  GasGen.fluid_F[CO] = FlowMeter_F.f_in.fluid[CO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[282] = _div( unkR[49] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-104]  GasGen.fluid_O[CO2] = FlowMeter_O.f_in.fluid[CO2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[312] = _div( unkR[83] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-105]  GasGen.fluid_F[CO2] = FlowMeter_F.f_in.fluid[CO2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[283] = _div( unkR[50] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-106]  GasGen.fluid_O[H2] = FlowMeter_O.f_in.fluid[H2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[313] = _div( unkR[84] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-107]  GasGen.fluid_F[H2] = FlowMeter_F.f_in.fluid[H2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[284] = _div( unkR[51] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-108]  GasGen.fluid_O[He] = FlowMeter_O.f_in.fluid[He] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[314] = _div( unkR[85] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-109]  GasGen.fluid_F[He] = FlowMeter_F.f_in.fluid[He] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[285] = _div( unkR[52] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-110]  GasGen.fluid_O[N2] = FlowMeter_O.f_in.fluid[N2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[315] = _div( unkR[86] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-111]  GasGen.fluid_F[N2] = FlowMeter_F.f_in.fluid[N2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[286] = _div( unkR[53] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-112]  GasGen.fluid_O[O2] = FlowMeter_O.f_in.fluid[O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[316] = _div( unkR[87] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-113]  GasGen.fluid_F[O2] = FlowMeter_F.f_in.fluid[O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[287] = _div( unkR[54] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-114]  GasGen.fluid_O[MMH_vapour] = FlowMeter_O.f_in.fluid[MMH_vapour] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[317] = _div( unkR[88] , (1. - unkR[89]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-115]  GasGen.fluid_F[MMH_vapour] = FlowMeter_F.f_in.fluid[MMH_vapour] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[288] = _div( unkR[55] , (1. - unkR[56]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-116]  GasGen.fluid_O[Comb_prod] = 0
unkR[318] = 0. ;
//[E-117]  GasGen.fluid_F[Comb_prod] = 0
unkR[289] = 0. ;
//[E-118]  GasGen.fluid_P[Comb_prod_M] =  IF[73] (GasGen.Combustion) GasGen.M_P	 ELSE 0
if( unkI[2] ) 
{
unkR[348] = unkR[236] ;
}
else 
{
unkR[348] = 0. ;
}
//[E-119]  GasGen.fluid_P[Comb_prod_cp] =  IF[74] (GasGen.Combustion) GasGen.cp_P	 ELSE 0
if( unkI[2] ) 
{
unkR[349] = unkR[253] ;
}
else 
{
unkR[349] = 0. ;
}
//[E-120]  Injector_O_1.PR_sl =  IF[83] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[427] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[427] = 0. ;
}
//[E-121]  Nozzle_1.g.fluid[Comb_prod_M] = GasGen.fluid_P[Comb_prod_M]
unkR[377] = unkR[348] ;
//[E-122]  Nozzle_1.g.fluid[Comb_prod_cp] = GasGen.fluid_P[Comb_prod_cp]
unkR[378] = unkR[349] ;
//[E-123]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[444] = LPRES__ISA_Pressure(unkR[433]) ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,6,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-269]  Pump_F.H = (SplitFrac_F.f_in.pt - FlowMeter_F.f_in.pt) / (9.80665 * LPRES.rho(FlowMeter_F.f_in.fluid))
unkR[449] = _div( (unkR[454] - unkR[230]) , (9.80665 * LPRES__rho(&unkR[30])),"9.80665 * LPRES.rho(FlowMeter_F.f_in.fluid)") ;
//[E-270]  Pump_O.H = (SplitFrac_O.f_in.pt - FlowMeter_O.f_in.pt) / (9.80665 * LPRES.rho(FlowMeter_O.f_in.fluid))
unkR[463] = _div( (unkR[469] - unkR[234]) , (9.80665 * LPRES__rho(&unkR[63])),"9.80665 * LPRES.rho(FlowMeter_O.f_in.fluid)") ;
//[E-271]  Shaft_1.rpm = Pump_O.m.N / 0.10471975511966
unkR[479] = unkR[455]/0.10471975511966 ;
//[E-272]  Nozzle_1.PR_sl = ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2) ** (LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))
unkR[438] = _pow( ((LPRES__gamma(&unkR[350]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[350]) , (LPRES__gamma(&unkR[350]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1")),"((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2)**(LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))" ) ;
//[E-273]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[446] = _div( unkR[442] , unkR[438],"Nozzle_1.PR_sl") ;
//[E-274]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[445] = MATH__max(unkR[444], unkR[446]) ;
//[E-275]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[439] = _div( unkR[441] , (1. + (LPRES__gamma(&unkR[350]) - 1.)/2. * _pow( unkR[436] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-276]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out)
unkR[447] = unkR[436] * _sqrt(LPRES__gamma(&unkR[350]) * LPRES__R(&unkR[350]) * unkR[439],"LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out") ;
//[E-277]  Nozzle_1.Thrust = Nozzle_1.g.W * Nozzle_1.v_out + Nozzle_1.A * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[440] = dyn[8] * unkR[447] + unkR[434] * (unkR[445] - unkR[444]) ;
//[E-278]  CombCha_1.W_IO = FlowMeter_O.f_in.W - GasGen.W_O - GasGen.W_IO - CombCha_1.W_O
unkR[22] = unkR[233] - unkR[251] - unkR[250] - unkR[23] ;
//[E-279]  CombCha_1.W_IF = FlowMeter_F.f_in.W - GasGen.W_IF - GasGen.W_F - CombCha_1.W_F
unkR[21] = unkR[229] - unkR[249] - dyn[6] - dyn[4] ;
//[E-280]  ThrustMonitor_1.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[207] = unkR[178] ;
//[E-281]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[208] = unkR[179] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-310]  ThrustMonitor_1.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-312]  ThrustMonitor_1.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[482] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[11] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-313]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[487] = dyn[11] * _sqrt(LPRES__gamma(&unkR[180]) * LPRES__R(&unkR[180]) * unkR[482],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-314]  ThrustMonitor_1.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[486] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[11] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-315]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[485] = LPRES__ISA_Pressure(unkR[433]) ;
//[E-316]  ThrustMonitor_1.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[483] = dyn[10] * unkR[487] + unkR[2] * (unkR[486] - unkR[485]) ;
//[E-317]  ThrustMonitor_1.i.Data[1] = ThrustMonitor_1.Thrust
unkR[484] = unkR[483] ;
//[E-318]  ControlPanel_1.i_Thrust.Data[1] = Nozzle_1.Thrust + ThrustMonitor_1.i.Data[1]
unkR[226] = unkR[440] + unkR[484] ;
//[E-319]  ControlPanel_1.Thrust = ControlPanel_1.i_Thrust.Data[1]
unkR[224] = unkR[226] ;
//[E-320]  FlowMeter_F.i.Data[1] = abs(FlowMeter_F.f_in.W)
unkR[231] = abs(unkR[229]) ;
//[E-321]  FlowMeter_O.i.Data[1] = abs(FlowMeter_O.f_in.W)
unkR[235] = abs(unkR[233]) ;
//[E-322]  ControlPanel_1.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[225] = unkR[231] + unkR[235] ;
//[E-323]  ControlPanel_1.Isp = ControlPanel_1.Thrust / ControlPanel_1.W_tot
unkR[222] = _div( unkR[224] , unkR[225],"ControlPanel_1.W_tot") ;
//[E-324]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[24] = _div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-325]  ControlPanel_1.C_E = ControlPanel_1.Isp / CombCha_1.c_star
unkR[221] = _div( unkR[222] , unkR[24],"CombCha_1.c_star") ;
//[E-326]  ControlPanel_1.Isp_0 = ControlPanel_1.Isp / 9.80665
unkR[223] = unkR[222]/9.80665 ;
//[E-327]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor_1.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[62] + unkR[29] - dyn[10]) , (_div( unkR[219] , (unkR[218] * unkR[213]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-328]  CombCha_1.Q_comb_effective =  ZONE[3] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-329]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-330]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-331]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-332]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-333]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[26] = _div( (unkR[23] * LPRES__cp(&unkR[122]) + dyn[4] * LPRES__cp(&unkR[93])) , (unkR[23] + dyn[4]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-334]  CombCha_1.f_O.T =  IF[34] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE Injector_O_1.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[418] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[413] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[418] ;
}
//[E-335]  CombCha_1.f_F.T =  IF[42] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F_1.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[395] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[390] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[395] ;
}
//[E-336]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( dyn[5] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( dyn[5] , unkR[10],"CombCha_1.OF_st")) * unkR[26]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-337]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-338]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor_1.g.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor_1.g.W * FlowMeter_F.f_in.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor_1.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[23] + dyn[4]) , dyn[10],"ThrustMonitor_1.g.W") * LPRES__cp(&unkR[151]) * (dyn[1] - unkR[15]) + _div( unkR[22] , dyn[10],"ThrustMonitor_1.g.W") * unkR[91] * (dyn[1] - unkR[61]) + _div( unkR[21] , dyn[10],"ThrustMonitor_1.g.W") * unkR[58] * (dyn[1] - unkR[28])) , -(_div( unkR[219] , (dyn[10] * unkR[218] * unkR[214] * unkR[17]),"ThrustMonitor_1.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor_1.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[151]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[151])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-340]  ControlPanel_1.i_Comb.Data[1] = CombCha_1.c_star
unkR[212] = unkR[24] ;
//[E-341]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[180]) , (9. * LPRES__gamma(&unkR[180]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;
//[E-342]  CombCha_1.M_r = 1
unkR[8] = 1. ;
//[E-343]  CombCha_1.h.T = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[180]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[180]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-344]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[220] = 1.184e-07 * _pow( LPRES__M(&unkR[180]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-345]  CombCha_1.h.A = 0
unkR[209] = 0. ;
//[E-346]  CombCha_1.h_g = 0
unkR[211] = 0. ;
//[E-347]  CombCha_1.h.Q = 0
unkR[210] = 0. ;
//[E-348]  Injector_O.A_sl =  IF[32] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[411] = _div( _sqrt(unkR[418] * LPRES__R(&unkR[63]),"Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[419]),"LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[411] = 0. ;
}
//[E-349]  Injector_O.v_ideal =  IF[36] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[421] = unkR[413] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[61],"LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[421] = _div( unkR[62] , (LPRES__rho(&unkR[63]) * unkR[410] * unkR[412]),"LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-350]  Injector_O.Re =  IF[37] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(FlowMeter_O.f_in.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[416] = 0. ;
}
else 
{
unkR[416] = _div( LPRES__rho(&unkR[63]) * unkR[421] * unkR[412] * _sqrt(4. * unkR[410]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(FlowMeter_O.f_in.fluid)") ;
}
//[E-351]  Injector_F.A_sl =  IF[40] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[388] = _div( _sqrt(unkR[395] * LPRES__R(&unkR[30]),"Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[396]),"LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[388] = 0. ;
}
//[E-352]  Injector_F.v_ideal =  IF[44] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[398] = unkR[390] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[398] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[387] * unkR[389]),"LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-353]  Injector_F.Re =  IF[45] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(FlowMeter_F.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[393] = 0. ;
}
else 
{
unkR[393] = _div( LPRES__rho(&unkR[30]) * unkR[398] * unkR[389] * _sqrt(4. * unkR[387]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(FlowMeter_F.f_in.fluid)") ;
}
//[E-354]  GasGen.rho_trans' = (GasGen.f_O.W + GasGen.f_F.W - Nozzle_1.g.W) / (GasGen.temp_ch / (GasGen.rho_ch * GasGen.k_1))
ldr[2] = _div( (unkR[261] + unkR[257] - dyn[8]) , (_div( unkR[386] , (unkR[385] * unkR[380]),"GasGen.rho_ch * GasGen.k_1")),"GasGen.temp_ch / (GasGen.rho_ch * GasGen.k_1)") ;
//[E-355]  GasGen.Q_comb_effective =  ZONE[6] (GasGen.Combustion) GasGen.Q_comb	  OTHERS 0
 if(m_branchZone[5]==0)
	unkR[242] = unkR[241] ;
else unkR[242] = 0. ;
//[E-356]  GasGen.fluid_O[Comb_prod_M] = 0
unkR[319] = 0. ;
//[E-357]  GasGen.fluid_O[Comb_prod_cp] = 0
unkR[320] = 0. ;
//[E-358]  GasGen.fluid_F[Comb_prod_M] = 0
unkR[290] = 0. ;
//[E-359]  GasGen.fluid_F[Comb_prod_cp] = 0
unkR[291] = 0. ;
//[E-360]  GasGen.cp_R = (GasGen.W_O * LPRES.cp(GasGen.fluid_O) + GasGen.W_F * LPRES.cp(GasGen.fluid_F)) / (GasGen.W_O + GasGen.W_F)
unkR[254] = _div( (unkR[251] * LPRES__cp(&unkR[292]) + dyn[6] * LPRES__cp(&unkR[263])) , (unkR[251] + dyn[6]),"GasGen.W_O + GasGen.W_F") ;
//[E-361]  GasGen.f_O.T =  IF[87] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O_1.M_out ** 2)	 ELSE Injector_O_1.f_in.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[260] = _div( unkR[418] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[425] , 2.,"(Injector_O_1.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O_1.M_out ** 2") ;
}
else 
{
unkR[260] = unkR[418] ;
}
//[E-362]  GasGen.f_F.T =  IF[79] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F_1.M_out ** 2)	 ELSE Injector_F_1.f_in.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[256] = _div( unkR[395] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[402] , 2.,"(Injector_F_1.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F_1.M_out ** 2") ;
}
else 
{
unkR[256] = unkR[395] ;
}
//[E-363]  GasGen.T_in = (LPRES.cp(GasGen.fluid_O) * GasGen.f_O.T + GasGen.phi / GasGen.OF_st * LPRES.cp(GasGen.fluid_F) * GasGen.f_F.T) / ((1 + GasGen.phi / GasGen.OF_st) * GasGen.cp_R)
unkR[246] = _div( (LPRES__cp(&unkR[292]) * unkR[260] + _div( dyn[7] , unkR[240],"GasGen.OF_st") * LPRES__cp(&unkR[263]) * unkR[256]) , ((1. + _div( dyn[7] , unkR[240],"GasGen.OF_st")) * unkR[254]),"(1 + GasGen.phi / GasGen.OF_st) * GasGen.cp_R") ;
//[E-364]  GasGen.T_c = (GasGen.eta_d * GasGen.Q_comb_effective / ((1 + GasGen.OF) / MATH.min(GasGen.OF, GasGen.OF_st)) + GasGen.cp_R * (GasGen.T_in - 298.15)) / LPRES.cp(GasGen.fluid_P) + 298.15
unkR[243] = _div( (_div( unkR[255] * unkR[242] , (_div( (1. + unkR[239]) , MATH__min(unkR[239], unkR[240]),"MATH.min(GasGen.OF, GasGen.OF_st)")),"(1 + GasGen.OF) / MATH.min(GasGen.OF, GasGen.OF_st)") + unkR[254] * (unkR[246] - 298.15)) , LPRES__cp(&unkR[321]),"LPRES.cp(GasGen.fluid_P)") + 298.15 ;
//[E-365]  GasGen.g.Tt' = (((GasGen.W_O + GasGen.W_F) / Nozzle_1.g.W * LPRES.cp(GasGen.fluid_P) * (GasGen.g.Tt - GasGen.T_c) + GasGen.W_IO / Nozzle_1.g.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] * (GasGen.g.Tt - GasGen.f_O.T) + GasGen.W_IF / Nozzle_1.g.W * FlowMeter_F.f_in.fluid[Comb_prod_cp] * (GasGen.g.Tt - GasGen.f_F.T)) / -(GasGen.temp_ch / (Nozzle_1.g.W * GasGen.rho_ch * GasGen.k_2 * GasGen.T_ch)) - GasGen.g.Tt * LPRES.cv(GasGen.fluid_P) * GasGen.rho_trans') / (GasGen.rho_trans * LPRES.cv(GasGen.fluid_P))
ldr[3] = _div( (_div( (_div( (unkR[251] + dyn[6]) , dyn[8],"Nozzle_1.g.W") * LPRES__cp(&unkR[321]) * (dyn[3] - unkR[243]) + _div( unkR[250] , dyn[8],"Nozzle_1.g.W") * unkR[91] * (dyn[3] - unkR[260]) + _div( unkR[249] , dyn[8],"Nozzle_1.g.W") * unkR[58] * (dyn[3] - unkR[256])) , -(_div( unkR[386] , (dyn[8] * unkR[385] * unkR[381] * unkR[245]),"Nozzle_1.g.W * GasGen.rho_ch * GasGen.k_2 * GasGen.T_ch")),"-(GasGen.temp_ch / (Nozzle_1.g.W * GasGen.rho_ch * GasGen.k_2 * GasGen.T_ch))") - dyn[3] * LPRES__cv(&unkR[321]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[321])),"GasGen.rho_trans * LPRES.cv(GasGen.fluid_P)") ;
//[E-366]  GasGen.c_star = sqrt(LPRES.R(Nozzle_1.g.fluid) * GasGen.g.Tt) / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[252] = _div( _sqrt(LPRES__R(&unkR[350]) * dyn[3],"LPRES.R(Nozzle_1.g.fluid) * GasGen.g.Tt") , LPRES__FGAMMA(&unkR[350]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-367]  GasGen.i.Data[1] = GasGen.c_star
unkR[379] = unkR[252] ;
//[E-368]  Injector_F_1.A_sl =  IF[77] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)) * GasGen.f_F.W / (LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[400] = _div( _sqrt(unkR[395] * LPRES__R(&unkR[30]),"Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)") * unkR[257] , (LPRES__FGAMMA(&unkR[30]) * unkR[407]),"LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F_1.f_in.pt") ;
}
else 
{
unkR[400] = 0. ;
}
//[E-369]  Injector_F_1.v_ideal =  IF[81] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.M_out * sqrt(LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * GasGen.f_F.T)	 ELSE GasGen.f_F.W / (LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F_1.A * Injector_F_1.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[409] = unkR[402] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[256],"LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * GasGen.f_F.T") ;
}
else 
{
unkR[409] = _div( unkR[257] , (LPRES__rho(&unkR[30]) * unkR[399] * unkR[401]),"LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F_1.A * Injector_F_1.C_D") ;
}
//[E-370]  Injector_F_1.Re =  IF[82] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F_1.v_ideal * Injector_F_1.C_D * sqrt(4 * Injector_F_1.A / 3.14159265358979) / LPRES.visc(FlowMeter_F.f_in.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[405] = 0. ;
}
else 
{
unkR[405] = _div( LPRES__rho(&unkR[30]) * unkR[409] * unkR[401] * _sqrt(4. * unkR[399]/3.14159265358979,"4 * Injector_F_1.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(FlowMeter_F.f_in.fluid)") ;
}
//[E-371]  Injector_O_1.A_sl =  IF[85] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)) * GasGen.f_O.W / (LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[423] = _div( _sqrt(unkR[418] * LPRES__R(&unkR[63]),"Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)") * unkR[261] , (LPRES__FGAMMA(&unkR[63]) * unkR[430]),"LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O_1.f_in.pt") ;
}
else 
{
unkR[423] = 0. ;
}
//[E-372]  Injector_O_1.v_ideal =  IF[89] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.M_out * sqrt(LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * GasGen.f_O.T)	 ELSE GasGen.f_O.W / (LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O_1.A * Injector_O_1.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[432] = unkR[425] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[260],"LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * GasGen.f_O.T") ;
}
else 
{
unkR[432] = _div( unkR[261] , (LPRES__rho(&unkR[63]) * unkR[422] * unkR[424]),"LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O_1.A * Injector_O_1.C_D") ;
}
//[E-373]  Injector_O_1.Re =  IF[90] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O_1.v_ideal * Injector_O_1.C_D * sqrt(4 * Injector_O_1.A / 3.14159265358979) / LPRES.visc(FlowMeter_O.f_in.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[428] = 0. ;
}
else 
{
unkR[428] = _div( LPRES__rho(&unkR[63]) * unkR[432] * unkR[424] * _sqrt(4. * unkR[422]/3.14159265358979,"4 * Injector_O_1.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(FlowMeter_O.f_in.fluid)") ;
}
//[E-374]  ControlPanel_1.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[227] = unkR[231] + unkR[235] ;
//[E-375]  Nozzle_1.i.Data[1] = ControlPanel_1.i_Thrust.Data[1] - ThrustMonitor_1.i.Data[1]
unkR[443] = unkR[226] - unkR[484] ;
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
void DRLPRUEBAS__F1_partition1::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[30])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(FlowMeter_F.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(1 == LPRES__State(&unkR[63])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(FlowMeter_O.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[350])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",111,"Turbine_ch.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(2 == LPRES__State(&unkR[350])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",773,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(2 == LPRES__State(&unkR[180])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[11] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[486] , unkR[485],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[11] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__F1_partition1::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284] + unkR[314] * unkR[285] + unkR[315] * unkR[286] + unkR[316] * unkR[287] + unkR[317] * unkR[288]; //(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0
    ev[3]= unkR[292] * unkR[263] + unkR[293] * unkR[264] + unkR[294] * unkR[265] + unkR[295] * unkR[266] + unkR[296] * unkR[267] + unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284] + unkR[314] * unkR[285] + unkR[315] * unkR[286] + unkR[316] * unkR[287] + unkR[317] * unkR[288]; //(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0
    ev[4]= unkR[478]; //Turbine_ch.m.Power > 0
    ev[5]= unkR[437] - unkR[438]; //Nozzle_1.PR < Nozzle_1.PR_sl
    ev[6]= unkI[0] - 1; //CombCha_1.Combustion
    ev[7]= LPRES__State(&unkR[63]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[8]= unkR[414] - unkR[415]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[63]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[10]= unkR[414] - unkR[415]; //Injector_O.PR >= Injector_O.PR_sl
    ev[11]= LPRES__State(&unkR[30]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[12]= unkR[391] - unkR[392]; //Injector_F.PR < Injector_F.PR_sl
    ev[13]= LPRES__State(&unkR[30]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[14]= unkR[391] - unkR[392]; //Injector_F.PR >= Injector_F.PR_sl
    ev[15]= unkI[2] - 1; //GasGen.Combustion
    ev[16]= LPRES__State(&unkR[30]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[17]= unkR[403] - unkR[404]; //Injector_F_1.PR < Injector_F_1.PR_sl
    ev[18]= LPRES__State(&unkR[30]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[19]= unkR[403] - unkR[404]; //Injector_F_1.PR >= Injector_F_1.PR_sl
    ev[20]= LPRES__State(&unkR[63]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[21]= unkR[426] - unkR[427]; //Injector_O_1.PR < Injector_O_1.PR_sl
    ev[22]= LPRES__State(&unkR[63]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[23]= unkR[426] - unkR[427]; //Injector_O_1.PR >= Injector_O_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__F1_partition1::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__F1_partition1::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__F1_partition1::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Shaft_1.m_1.Power =  ZONE (Turbine_ch.m.Power > 0) -Turbine_ch.m.Power * Shaft_1.eta OTHERS -Turbine_ch.m.Power / Shaft_1.eta
     branchZone[0] = (cont[4] ) ? 0 : 1;
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)) OTHERS 1
     branchZone[1] = (cont[5] ) ? 0 : 1;
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[2] = (cont[6] ) ? 0 : 1;
     // Injector_O.M_out =  ZONE (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)) ZONE (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[3] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
     // Injector_F.M_out =  ZONE (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)) ZONE (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[4] = (cont[11]  && cont[12] ) ? 0 : (cont[13]  && cont[14] ) ? 1 : 2;
     // GasGen.Q_comb_effective =  ZONE (GasGen.Combustion) GasGen.Q_comb OTHERS 0
     branchZone[5] = (cont[15] ) ? 0 : 1;
     // Injector_F_1.M_out =  ZONE (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)) ZONE (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1 OTHERS 0
     branchZone[6] = (cont[16]  && cont[17] ) ? 0 : (cont[18]  && cont[19] ) ? 1 : 2;
     // Injector_O_1.M_out =  ZONE (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)) ZONE (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1 OTHERS 0
     branchZone[7] = (cont[20]  && cont[21] ) ? 0 : (cont[22]  && cont[23] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__F1_partition1::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 24 ;
	nConstraints= 62;
	nWhen= 4;
	nZones= 8;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[4]= { "(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0",
		"(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0",
		"(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "Turbine_ch.m.Power > 0","OTHERS",
	"Nozzle_1.PR < Nozzle_1.PR_sl","OTHERS",
	"CombCha_1.Combustion","OTHERS",
	"LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"GasGen.Combustion","OTHERS",
	"LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl","LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl","OTHERS",
	"LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl","LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,6,9,12,14,17 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[24]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ WHEN,NOT_EQ_OP,0,2,"(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,3,"(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0"},{ ZONE,GT_OP,0,0,"Turbine_ch.m.Power > 0"},{ ZONE,LT_OP,0,0,"Nozzle_1.PR < Nozzle_1.PR_sl"}
,{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"GasGen.Combustion"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F_1.PR < Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F_1.PR >= Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"}
,{ ZONE,LT_OP,0,0,"Injector_O_1.PR < Injector_O_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O_1.PR >= Injector_O_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__F1_partition1::initDelays()
{
}


bool DRLPRUEBAS__F1_partition1::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__F1_partition1 = 105896;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__F1_partition1 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__F1_partition1[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__F1_partition1;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__F1_partition1;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__F1_partition1;
return true;
}



bool DRLPRUEBAS__F1_partition1::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__F1_partition1 = 920;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__F1_partition1 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__F1_partition1[] = 
{
"DQAAAIkAAAAGAAAACwAAAAsAAAAKAAAACgAAAAoAAAAKAAAACgAAAAoAAAAKAAAACgAAAAsAAAAMAAAADAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAALAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAALAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAAMAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAANAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__F1_partition1;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__F1_partition1;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__F1_partition1;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__F1_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__F1_partition1(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__F1_partition1(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__F1_partition1(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__F1_partition1(name,dirInstall);
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
	sprintf(componentName,"%s","F1");
	sprintf(partitionName,"%s","partition1");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+f1.partition1");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

