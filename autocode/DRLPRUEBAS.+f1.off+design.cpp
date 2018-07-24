//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__F1_offDesign_CPP
#define DRLPRUEBAS__F1_offDesign_CPP

#include "DRLPRUEBAS.+f1.off+design.h"

DRLPRUEBAS__F1_offDesign* DRLPRUEBAS__F1_offDesign::s_current= NULL;

DRLPRUEBAS__F1_offDesign::DRLPRUEBAS__F1_offDesign(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "F1";
m_infoPartitionName = "offDesign";
m_infoModelName = "DRLPRUEBAS__F1_offDesign";
m_infoModelFileName = "DRLPRUEBAS.+f1.off+design";
m_infoModelFileNameExtra = "+f1.off+design";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 12:56:25.326000";
m_infoPartitionDate = "29/06/2018 13:28:20.648000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[5]; 
int nbx;
for (nbx=0; nbx < 5 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[1];
int ib;
for (ib=0; ib < 1 ; ib++)
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
void DRLPRUEBAS__F1_offDesign::initInternalModels()
{
}

void DRLPRUEBAS__F1_offDesign::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__F1_offDesign::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__F1_offDesign::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__F1_offDesign::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__F1_offDesign::LPRES__State(double fluid[])
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


double DRLPRUEBAS__F1_offDesign::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__F1_offDesign::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__F1_offDesign::LPRES__M(double fluid[])
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


double DRLPRUEBAS__F1_offDesign::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__F1_offDesign::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__F1_offDesign::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__F1_offDesign::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__F1_offDesign::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__F1_offDesign::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__F1_offDesign::LPRES__visc(double fluid[])
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

void DRLPRUEBAS__F1_offDesign::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__F1_offDesign::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__F1_offDesign::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__F1_offDesign::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_offDesign& m= *DRLPRUEBAS__F1_offDesign::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__F1_offDesign::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_offDesign::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__F1_offDesign::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__F1_offDesign::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_offDesign& m= *DRLPRUEBAS__F1_offDesign::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[10],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[10]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__F1_offDesign::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_offDesign::fcn2, n, &dyn[10], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__F1_offDesign::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-311]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor_1.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[11] = evalNormResidueInternal(11,_div( _div( dyn[10] * _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor_1.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor_1.g.A_out") , unkR[60],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[11] * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1)/2 * _pow( dyn[11] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[180]) + 1)/2 , (LPRES__gamma(&unkR[180]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__F1_offDesign::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_offDesign& m= *DRLPRUEBAS__F1_offDesign::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[11],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[11]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__F1_offDesign::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_offDesign::fcn3, n, &dyn[11], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__F1_offDesign::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-339]  ThrustMonitor_1.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[12] = evalNormResidueInternal(12,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[180]) , (_pow( (_div( dyn[12] , unkR[60],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[180]) * (1. - _pow( (_div( dyn[12] , unkR[60],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[180]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__F1_offDesign::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_offDesign& m= *DRLPRUEBAS__F1_offDesign::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[12],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[12]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__F1_offDesign::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__F1_offDesign::fcn4, n, &dyn[12], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__F1_offDesign::fres( double *_time, double dyn[], double der[], double res[] )
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
void DRLPRUEBAS__F1_offDesign::checkAsserts(double *_time)
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
void DRLPRUEBAS__F1_offDesign::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__F1_offDesign::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__F1_offDesign::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__F1_offDesign::evalZones( double *_time,  int branchZone[],bool cont[] )
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
INTEG_simula::t_initEvent* DRLPRUEBAS__F1_offDesign::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__F1_offDesign::initDelays()
{
}


bool DRLPRUEBAS__F1_offDesign::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__F1_offDesign = 105820;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__F1_offDesign = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__F1_offDesign[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__F1_offDesign;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__F1_offDesign;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__F1_offDesign;
return true;
}



bool DRLPRUEBAS__F1_offDesign::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__F1_offDesign = 920;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__F1_offDesign = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__F1_offDesign[] = 
{
"DQAAAIkAAAAGAAAACwAAAAsAAAAKAAAACgAAAAoAAAAKAAAACgAAAAoAAAAKAAAACgAAAAsAAAAMAAAADAAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAALAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAAKAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAACQAAAAoAAAALAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAAMAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAAJAAAACgAAAAsAAAANAAAAAQAAAAIAAAABAAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAAMAAAADAAAABAAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__F1_offDesign;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__F1_offDesign;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__F1_offDesign;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__F1_offDesign(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__F1_offDesign(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__F1_offDesign(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__F1_offDesign(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__F1_offDesign(name,dirInstall);
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
	sprintf(partitionName,"%s","offDesign");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+f1.off+design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

