//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__F1_design_design_CPP
#define DRLPRUEBAS__F1_design_design_CPP

#include "DRLPRUEBAS.+f1_design.design.h"

DRLPRUEBAS__F1_design_design* DRLPRUEBAS__F1_design_design::s_current= NULL;

DRLPRUEBAS__F1_design_design::DRLPRUEBAS__F1_design_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "F1_design";
m_infoPartitionName = "design";
m_infoModelName = "DRLPRUEBAS__F1_design_design";
m_infoModelFileName = "DRLPRUEBAS.+f1_design.design";
m_infoModelFileNameExtra = "+f1_design.design";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 11:08:54.752000";
m_infoPartitionDate = "28/06/2018 11:45:00.405000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[5]; 
int nbx;
for (nbx=0; nbx < 5 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[4];
int ib;
for (ib=0; ib < 4 ; ib++)
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
n_dyn=4;
dyn= new double[4] ;
static double tmp_dynInit[4]={ 1, 100, 1, 100 } ;
dynInit= new double[4];
dcopy(4,dynInit,tmp_dynInit);


n_der=0;
der= new double[4] ;
static double tmp_derInit[4]={ 0, 0, 0, 0 } ;
derInit= new double[4];
dcopy(4,derInit,tmp_derInit);


res= new double[4] ;
ldr= new double[4] ;
boxDyn= new double[4] ;
boxDer= new double[4] ;

n_unkR=506;
unkR= new double[506] ;
static double tmp_unkRInit[506]={ 10, 5, 1, 0, 0.637328951, 1, 23, 172, 31.9988, 0, 0, 2.27, 0, 11000000, 0, 1, 
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
		0, 0, 0, 0, 0, 0, 0, 0, 300, 1, 1, 0, 85, 1, 1, 0, 
		23, 2.01594, 31.9988, 0, 2.27, 11000000, 0, 0, 4000, 3000, 0, 0, 200, 0, 0, 0, 
		0, 0, 2169, 0, 1, 1, 65.3474576, 1, 5000000, 1, 11.7625424, 1, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 1, 77.11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 0, 0, 0, 10, 5000000, 0, 1, 0, 0.032, 0.0143139263, 0, 0, 0.5, 0, 
		10, 0, 0, 722.652542, 1, 1, 0, 0, 0.00143857805, 0, 0, 0.5, 0, 10, 0, 0, 
		1, 0, 0, 0.0489035601, 0, 0, 0.5, 0, 10, 0, 0, 1, 1, 0, 0, 0.000479916864, 
		0, 0, 0.5, 0, 10, 0, 0, 1, 0, 0, 0, 0.346776149, 0, 0, 0, 0, 
		0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0.0541868469, 0, 0, 0, 500, 13100000, 
		0.85, 1, 1, 0.0428, 0, 0.108, 0.72263409, 0, 0, 0.125397196, 0, 0, 0, 500, 9000000, 0.9, 
		1, 0.0428, 0, 0.108, 0.477942772, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 
		0, 0, 0, 0.00692409717, 0, 0, 45, 0.8, 10, 5550 } ;
unkRInit= new double[506];
dcopy(506,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=5;
unkI= new int[5] ;
static int tmp_unkIInit[5]={ 0, 2, 0, 6, 1 } ;
unkIInit= new int[5];
icopy(5,unkIInit,tmp_unkIInit);


n_cteI=20;
static int tmp_cteIInit[20]={ 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 3 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=20;
static std::string tmp_cteSInit[20]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "deg", "g/mol", "kg/m^3", "kg/s", "m", "m^2", 
		"m/s", "m/s^2", "rad/s", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 4;
n_neld= 0;
m_numBoxes= 4;
m_nNonLinearBoxes= 4;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__F1_design_design::initInternalModels()
{
}

void DRLPRUEBAS__F1_design_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__F1_design_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__F1_design_design::LPRES__ISA_Pressure(const double & z)
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


int DRLPRUEBAS__F1_design_design::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__F1_design_design::LPRES__State(double fluid[])
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


double DRLPRUEBAS__F1_design_design::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__F1_design_design::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__F1_design_design::LPRES__M(double fluid[])
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


double DRLPRUEBAS__F1_design_design::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__F1_design_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__F1_design_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__F1_design_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__F1_design_design::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__F1_design_design::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__F1_design_design::LPRES__visc(double fluid[])
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

void DRLPRUEBAS__F1_design_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__F1_design_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(TankOpen_F.TankOpen,100)
	LPRES__Init_fluid(unkI[3], &unkR[31]) ;
  // init(TankOpen_O.TankOpen,100)
	LPRES__Init_fluid(unkI[4], &unkR[64]) ;
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
  // init(GasGen.GasGen,100)
	LPRES__Init_fluid(27, &unkR[357]) ;
	unkI[2] = 1 ;
	unkR[391] = 1. ;
	unkR[251] = unkR[252] ;
	unkR[387] = _div( 1. , unkR[389],"GasGen.mfr_ch") ;
	unkR[388] = _div( 1. , (unkR[389] * unkR[249]),"GasGen.mfr_ch * GasGen.T_ch") ;
  // init(Pump_F.Pump,0)
	dyn[0] = unkR[462] ;
  // init(Nozzle_1.Nozzle,0)
	unkR[452] = 10000000. ;
  // init(Pump_O.Pump,0)
	dyn[2] = unkR[477] ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__F1_design_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-7]  Pump_F.psi = Pump_F.tau / Pump_F.U ** 2
res[0] = evalNormResidueInternal(0,unkR[468],_div( unkR[472] , _pow( dyn[0] , 2,"(Pump_F.U)**(2)" ),"Pump_F.U ** 2"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__F1_design_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_design_design& m= *DRLPRUEBAS__F1_design_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__F1_design_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(4, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__F1_design_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__F1_design_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-313]  ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / ThrustMonitor_1.g.A_out / CombCha_1.p_c = sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))
res[1] = evalNormResidueInternal(1,_div( _div( unkR[182] * _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , unkR[2],"ThrustMonitor_1.g.A_out") , unkR[61],"CombCha_1.p_c"),_sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor_1.g.fluid)") * dyn[1] * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1)/2 * _pow( dyn[1] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[183]) + 1)/2 , (LPRES__gamma(&unkR[183]) - 1),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor_1.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__F1_design_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_design_design& m= *DRLPRUEBAS__F1_design_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__F1_design_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(4, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__F1_design_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__F1_design_design::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-323]  Pump_O.psi = Pump_O.tau / Pump_O.U ** 2
res[2] = evalNormResidueInternal(2,unkR[482],_div( unkR[486] , _pow( dyn[2] , 2,"(Pump_O.U)**(2)" ),"Pump_O.U ** 2"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__F1_design_design::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_design_design& m= *DRLPRUEBAS__F1_design_design::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__F1_design_design::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(4, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__F1_design_design::fcn3, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__F1_design_design::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-328]  ThrustMonitor_1.g.A_out / CombCha_1.A_r = LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)))
res[3] = evalNormResidueInternal(3,_div( unkR[2] , unkR[3],"CombCha_1.A_r"),_div( LPRES__FGAMMA(&unkR[183]) , (_pow( (_div( dyn[3] , unkR[61],"CombCha_1.p_c")) , (_div( 1 , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**(1 / LPRES.gamma(ThrustMonitor_1.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[183]) * (1. - _pow( (_div( dyn[3] , unkR[61],"CombCha_1.p_c")) , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))" )) , (LPRES__gamma(&unkR[183]) - 1.),"LPRES.gamma(ThrustMonitor_1.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor_1.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor_1.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid))) / (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__F1_design_design::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__F1_design_design& m= *DRLPRUEBAS__F1_design_design::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__F1_design_design::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(4, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__F1_design_design::fcn4, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__F1_design_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(TankOpen_F.fluid, FlowMeter_F.f_in.fluid) %%% (OUT VAR)FlowMeter_F.f_in.fluid 
LPRES__Init_fluid(unkI[3], &unkR[31]);
//[E-2]  FlowMeter_F.f_in.pt = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[234] = LPRES__ISA_Pressure(unkR[442]) ;
//[E-3]  SplitFrac_F.f_in.pt = Pump_F.dp + FlowMeter_F.f_in.pt
unkR[465] = unkR[463] + unkR[234] ;
//[E-4]  Pump_F.H = (SplitFrac_F.f_in.pt - FlowMeter_F.f_in.pt) / (9.80665 * LPRES.rho(FlowMeter_F.f_in.fluid))
unkR[460] = _div( (unkR[465] - unkR[234]) , (9.80665 * LPRES__rho(&unkR[31])),"9.80665 * LPRES.rho(FlowMeter_F.f_in.fluid)") ;
//[E-5]  Pump_F.tau = (SplitFrac_F.f_in.pt - FlowMeter_F.f_in.pt) / (Pump_F.eta_d * LPRES.rho(FlowMeter_F.f_in.fluid))
unkR[472] = _div( (unkR[465] - unkR[234]) , (unkR[464] * LPRES__rho(&unkR[31])),"Pump_F.eta_d * LPRES.rho(FlowMeter_F.f_in.fluid)") ;
//[E-6]  Pump_F.psi = 1 - (1 - Pump_F.psi_d) / Pump_F.phi_d * Pump_F.phi_d
unkR[468] = 1. - _div( (1. - unkR[469]) , unkR[467],"Pump_F.phi_d") * unkR[467] ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-8]  Pump_O.m.N = Turbine_ch.rpm * 2 * 3.14159265358979 / 60
unkR[466] = unkR[505] * 2. * 3.14159265358979/60. ;
//[E-9]  Pump_F.r_m_d = Pump_F.U / Pump_O.m.N
unkR[471] = _div( dyn[0] , unkR[466],"Pump_O.m.N") ;
//[E-10]  Pump_F.A_in_d = FlowMeter_F.f_in.W / Pump_F.phi_d / LPRES.rho(FlowMeter_F.f_in.fluid) / Pump_F.U
unkR[459] = _div( _div( _div( unkR[233] , unkR[467],"Pump_F.phi_d") , LPRES__rho(&unkR[31]),"LPRES.rho(FlowMeter_F.f_in.fluid)") , dyn[0],"Pump_F.U") ;
//[E-11]  Pump_F.m.Power = -(Pump_F.tau * FlowMeter_F.f_in.W)
unkR[461] = -(unkR[472] * unkR[233]) ;
//[E-12]  Injector_F_1.f_in.Tt = (SplitFrac_F.f_in.pt - FlowMeter_F.f_in.pt) / LPRES.rho(FlowMeter_F.f_in.fluid) * (1 / Pump_F.eta_d - 1) / LPRES.cp(FlowMeter_F.f_in.fluid) + TankOpen_F.T_d
unkR[404] = _div( _div( (unkR[465] - unkR[234]) , LPRES__rho(&unkR[31]),"LPRES.rho(FlowMeter_F.f_in.fluid)") * (_div( 1. , unkR[464],"Pump_F.eta_d") - 1.) , LPRES__cp(&unkR[31]),"LPRES.cp(FlowMeter_F.f_in.fluid)") + unkR[232] ;
//[E-13]  Nozzle_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[454] = LPRES__ISA_Pressure(unkR[442]) ;
//[E-14]  FlowMeter_O.f_in.pt = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[238] = LPRES__ISA_Pressure(unkR[442]) ;
//[E-15]  SplitFrac_O.f_in.pt = Pump_O.dp + FlowMeter_O.f_in.pt
unkR[480] = unkR[478] + unkR[238] ;
//[E-16]  LPRES.Init_fluid(TankOpen_O.fluid, FlowMeter_O.f_in.fluid) %%% (OUT VAR)FlowMeter_O.f_in.fluid 
LPRES__Init_fluid(unkI[4], &unkR[64]);
//[E-17]  Pump_O.tau = (SplitFrac_O.f_in.pt - FlowMeter_O.f_in.pt) / (Pump_O.eta_d * LPRES.rho(FlowMeter_O.f_in.fluid))
unkR[486] = _div( (unkR[480] - unkR[238]) , (unkR[479] * LPRES__rho(&unkR[64])),"Pump_O.eta_d * LPRES.rho(FlowMeter_O.f_in.fluid)") ;
//[E-18]  Pump_O.m.Power = -(Pump_O.tau * FlowMeter_O.f_in.W)
unkR[476] = -(unkR[486] * unkR[237]) ;
//[E-19]  Shaft_1.m_1.Power = Pump_F.m.Power + Pump_O.m.Power
unkR[488] = unkR[461] + unkR[476] ;
//[E-20]  Turbine_ch.m.Power =  ZONE[2] (Turbine_ch.m.Power > 0) -(Shaft_1.m_1.Power / Shaft_1.eta)	  OTHERS -(Shaft_1.m_1.Power * Shaft_1.eta)
 if(m_branchZone[1]==0)
	unkR[489] = -(_div( unkR[488] , unkR[487],"Shaft_1.eta")) ;
else unkR[489] = -(unkR[488] * unkR[487]) ;
//[E-21]  GasGen.fluid_O[LOX] = FlowMeter_O.f_in.fluid[LOX] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[297] = _div( unkR[64] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-22]  Injector_F_1.W = FlowMeter_F.f_in.W - Injector_F.W
unkR[262] = unkR[233] - unkR[403] ;
//[E-23]  Injector_O_1.W = Turbine_ch.W - Injector_F_1.W
unkR[266] = unkR[356] - unkR[262] ;
//[E-24]  GasGen.W_O = Injector_O_1.W * (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[256] = unkR[266] * (1. - unkR[90]) ;
//[E-25]  GasGen.W_F = Injector_F_1.W * (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[251] = unkR[262] * (1. - unkR[57]) ;
//[E-26]  GasGen.OF = GasGen.W_O / GasGen.W_F
unkR[243] = _div( unkR[256] , unkR[251],"GasGen.W_F") ;
//[E-27]  GasGen.phi = GasGen.OF_st / GasGen.OF
unkR[391] = _div( unkR[244] , unkR[243],"GasGen.OF") ;
//[E-28]  GasGen.fluid_F[LOX] = FlowMeter_F.f_in.fluid[LOX] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[268] = _div( unkR[31] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-29]  GasGen.W_F_st = GasGen.W_F / GasGen.phi
unkR[253] = _div( unkR[251] , unkR[391],"GasGen.phi") ;
//[E-30]  GasGen.fluid_P[LOX] =  IF[46] (GasGen.Combustion) (GasGen.fluid_O[LOX] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LOX] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LOX] * GasGen.W_O + GasGen.fluid_F[LOX] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[326] = _div( (unkR[297] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[268] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[326] = _div( (unkR[297] * unkR[256] + unkR[268] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-31]  Nozzle_1.g.fluid[LOX] = GasGen.fluid_P[LOX] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[357] = _div( unkR[326] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-32]  GasGen.fluid_O[NTO] = FlowMeter_O.f_in.fluid[NTO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[298] = _div( unkR[65] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-33]  GasGen.fluid_F[NTO] = FlowMeter_F.f_in.fluid[NTO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[269] = _div( unkR[32] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-34]  GasGen.fluid_P[NTO] =  IF[47] (GasGen.Combustion) (GasGen.fluid_O[NTO] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[NTO] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[NTO] * GasGen.W_O + GasGen.fluid_F[NTO] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[327] = _div( (unkR[298] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[269] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[327] = _div( (unkR[298] * unkR[256] + unkR[269] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-35]  Nozzle_1.g.fluid[NTO] = GasGen.fluid_P[NTO] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[358] = _div( unkR[327] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-36]  GasGen.fluid_O[H2O2] = FlowMeter_O.f_in.fluid[H2O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[299] = _div( unkR[66] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-37]  GasGen.fluid_F[H2O2] = FlowMeter_F.f_in.fluid[H2O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[270] = _div( unkR[33] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-38]  GasGen.fluid_P[H2O2] =  IF[48] (GasGen.Combustion) (GasGen.fluid_O[H2O2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[H2O2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[H2O2] * GasGen.W_O + GasGen.fluid_F[H2O2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[328] = _div( (unkR[299] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[270] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[328] = _div( (unkR[299] * unkR[256] + unkR[270] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-39]  Nozzle_1.g.fluid[H2O2] = GasGen.fluid_P[H2O2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[359] = _div( unkR[328] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-40]  GasGen.fluid_O[HNO3] = FlowMeter_O.f_in.fluid[HNO3] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[300] = _div( unkR[67] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-41]  GasGen.fluid_F[HNO3] = FlowMeter_F.f_in.fluid[HNO3] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[271] = _div( unkR[34] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-42]  GasGen.fluid_P[HNO3] =  IF[49] (GasGen.Combustion) (GasGen.fluid_O[HNO3] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[HNO3] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[HNO3] * GasGen.W_O + GasGen.fluid_F[HNO3] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[329] = _div( (unkR[300] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[271] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[329] = _div( (unkR[300] * unkR[256] + unkR[271] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-43]  Nozzle_1.g.fluid[HNO3] = GasGen.fluid_P[HNO3] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[360] = _div( unkR[329] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-44]  GasGen.fluid_O[LF2] = FlowMeter_O.f_in.fluid[LF2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[301] = _div( unkR[68] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-45]  GasGen.fluid_F[LF2] = FlowMeter_F.f_in.fluid[LF2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[272] = _div( unkR[35] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-46]  GasGen.fluid_P[LF2] =  IF[50] (GasGen.Combustion) (GasGen.fluid_O[LF2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LF2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LF2] * GasGen.W_O + GasGen.fluid_F[LF2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[330] = _div( (unkR[301] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[272] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[330] = _div( (unkR[301] * unkR[256] + unkR[272] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-47]  Nozzle_1.g.fluid[LF2] = GasGen.fluid_P[LF2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[361] = _div( unkR[330] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-48]  GasGen.fluid_O[RP_1] = FlowMeter_O.f_in.fluid[RP_1] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[302] = _div( unkR[69] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-49]  GasGen.fluid_F[RP_1] = FlowMeter_F.f_in.fluid[RP_1] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[273] = _div( unkR[36] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-50]  GasGen.fluid_P[RP_1] =  IF[51] (GasGen.Combustion) (GasGen.fluid_O[RP_1] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[RP_1] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[RP_1] * GasGen.W_O + GasGen.fluid_F[RP_1] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[331] = _div( (unkR[302] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[273] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[331] = _div( (unkR[302] * unkR[256] + unkR[273] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-51]  Nozzle_1.g.fluid[RP_1] = GasGen.fluid_P[RP_1] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[362] = _div( unkR[331] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-52]  GasGen.fluid_O[LCH4] = FlowMeter_O.f_in.fluid[LCH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[303] = _div( unkR[70] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-53]  GasGen.fluid_F[LCH4] = FlowMeter_F.f_in.fluid[LCH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[274] = _div( unkR[37] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-54]  GasGen.fluid_P[LCH4] =  IF[52] (GasGen.Combustion) (GasGen.fluid_O[LCH4] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LCH4] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LCH4] * GasGen.W_O + GasGen.fluid_F[LCH4] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[332] = _div( (unkR[303] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[274] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[332] = _div( (unkR[303] * unkR[256] + unkR[274] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-55]  Nozzle_1.g.fluid[LCH4] = GasGen.fluid_P[LCH4] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[363] = _div( unkR[332] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-56]  GasGen.fluid_O[LH2] = FlowMeter_O.f_in.fluid[LH2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[304] = _div( unkR[71] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-57]  GasGen.fluid_F[LH2] = FlowMeter_F.f_in.fluid[LH2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[275] = _div( unkR[38] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-58]  GasGen.fluid_P[LH2] =  IF[53] (GasGen.Combustion) (GasGen.fluid_O[LH2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[LH2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[LH2] * GasGen.W_O + GasGen.fluid_F[LH2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[333] = _div( (unkR[304] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[275] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[333] = _div( (unkR[304] * unkR[256] + unkR[275] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-59]  Nozzle_1.g.fluid[LH2] = GasGen.fluid_P[LH2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[364] = _div( unkR[333] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-60]  GasGen.fluid_O[N2H4] = FlowMeter_O.f_in.fluid[N2H4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[305] = _div( unkR[72] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-61]  GasGen.fluid_F[N2H4] = FlowMeter_F.f_in.fluid[N2H4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[276] = _div( unkR[39] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-62]  GasGen.fluid_P[N2H4] =  IF[54] (GasGen.Combustion) (GasGen.fluid_O[N2H4] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[N2H4] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[N2H4] * GasGen.W_O + GasGen.fluid_F[N2H4] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[334] = _div( (unkR[305] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[276] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[334] = _div( (unkR[305] * unkR[256] + unkR[276] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-63]  Nozzle_1.g.fluid[N2H4] = GasGen.fluid_P[N2H4] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[365] = _div( unkR[334] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-64]  GasGen.fluid_O[UDMH] = FlowMeter_O.f_in.fluid[UDMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[306] = _div( unkR[73] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-65]  GasGen.fluid_F[UDMH] = FlowMeter_F.f_in.fluid[UDMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[277] = _div( unkR[40] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-66]  GasGen.fluid_P[UDMH] =  IF[55] (GasGen.Combustion) (GasGen.fluid_O[UDMH] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[UDMH] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[UDMH] * GasGen.W_O + GasGen.fluid_F[UDMH] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[335] = _div( (unkR[306] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[277] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[335] = _div( (unkR[306] * unkR[256] + unkR[277] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-67]  Nozzle_1.g.fluid[UDMH] = GasGen.fluid_P[UDMH] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[366] = _div( unkR[335] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-68]  GasGen.fluid_O[MMH] = FlowMeter_O.f_in.fluid[MMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[307] = _div( unkR[74] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-69]  GasGen.fluid_F[MMH] = FlowMeter_F.f_in.fluid[MMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[278] = _div( unkR[41] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-70]  GasGen.fluid_P[MMH] =  IF[56] (GasGen.Combustion) (GasGen.fluid_O[MMH] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[MMH] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[MMH] * GasGen.W_O + GasGen.fluid_F[MMH] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[336] = _div( (unkR[307] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[278] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[336] = _div( (unkR[307] * unkR[256] + unkR[278] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-71]  Nozzle_1.g.fluid[MMH] = GasGen.fluid_P[MMH] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[367] = _div( unkR[336] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-72]  GasGen.fluid_O[JP_10] = FlowMeter_O.f_in.fluid[JP_10] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[308] = _div( unkR[75] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-73]  GasGen.fluid_F[JP_10] = FlowMeter_F.f_in.fluid[JP_10] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[279] = _div( unkR[42] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-74]  GasGen.fluid_P[JP_10] =  IF[57] (GasGen.Combustion) (GasGen.fluid_O[JP_10] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[JP_10] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[JP_10] * GasGen.W_O + GasGen.fluid_F[JP_10] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[337] = _div( (unkR[308] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[279] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[337] = _div( (unkR[308] * unkR[256] + unkR[279] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-75]  Nozzle_1.g.fluid[JP_10] = GasGen.fluid_P[JP_10] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[368] = _div( unkR[337] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-76]  GasGen.fluid_O[Kerox] = FlowMeter_O.f_in.fluid[Kerox] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[309] = _div( unkR[76] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-77]  GasGen.fluid_F[Kerox] = FlowMeter_F.f_in.fluid[Kerox] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[280] = _div( unkR[43] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-78]  GasGen.fluid_P[Kerox] =  IF[58] (GasGen.Combustion) (GasGen.fluid_O[Kerox] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Kerox] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Kerox] * GasGen.W_O + GasGen.fluid_F[Kerox] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[338] = _div( (unkR[309] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[280] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[338] = _div( (unkR[309] * unkR[256] + unkR[280] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-79]  Nozzle_1.g.fluid[Kerox] = GasGen.fluid_P[Kerox] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[369] = _div( unkR[338] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-80]  GasGen.fluid_O[Oil] = FlowMeter_O.f_in.fluid[Oil] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[310] = _div( unkR[77] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-81]  GasGen.fluid_F[Oil] = FlowMeter_F.f_in.fluid[Oil] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[281] = _div( unkR[44] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-82]  GasGen.fluid_P[Oil] =  IF[59] (GasGen.Combustion) (GasGen.fluid_O[Oil] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Oil] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Oil] * GasGen.W_O + GasGen.fluid_F[Oil] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[339] = _div( (unkR[310] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[281] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[339] = _div( (unkR[310] * unkR[256] + unkR[281] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-83]  Nozzle_1.g.fluid[Oil] = GasGen.fluid_P[Oil] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[370] = _div( unkR[339] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-84]  GasGen.fluid_O[H2O] = FlowMeter_O.f_in.fluid[H2O] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[311] = _div( unkR[78] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-85]  GasGen.fluid_F[H2O] = FlowMeter_F.f_in.fluid[H2O] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[282] = _div( unkR[45] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-86]  GasGen.fluid_P[H2O] =  IF[60] (GasGen.Combustion) (GasGen.fluid_O[H2O] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[H2O] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[H2O] * GasGen.W_O + GasGen.fluid_F[H2O] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[340] = _div( (unkR[311] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[282] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[340] = _div( (unkR[311] * unkR[256] + unkR[282] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-87]  Nozzle_1.g.fluid[H2O] = GasGen.fluid_P[H2O] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[371] = _div( unkR[340] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-88]  GasGen.fluid_O[IPA] = FlowMeter_O.f_in.fluid[IPA] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[312] = _div( unkR[79] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-89]  GasGen.fluid_F[IPA] = FlowMeter_F.f_in.fluid[IPA] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[283] = _div( unkR[46] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-90]  GasGen.fluid_P[IPA] =  IF[61] (GasGen.Combustion) (GasGen.fluid_O[IPA] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[IPA] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[IPA] * GasGen.W_O + GasGen.fluid_F[IPA] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[341] = _div( (unkR[312] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[283] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[341] = _div( (unkR[312] * unkR[256] + unkR[283] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-91]  Nozzle_1.g.fluid[IPA] = GasGen.fluid_P[IPA] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[372] = _div( unkR[341] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-92]  GasGen.fluid_O[Air] = FlowMeter_O.f_in.fluid[Air] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[313] = _div( unkR[80] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-93]  GasGen.fluid_F[Air] = FlowMeter_F.f_in.fluid[Air] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[284] = _div( unkR[47] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-94]  GasGen.fluid_P[Air] =  IF[62] (GasGen.Combustion) (GasGen.fluid_O[Air] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Air] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Air] * GasGen.W_O + GasGen.fluid_F[Air] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[342] = _div( (unkR[313] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[284] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[342] = _div( (unkR[313] * unkR[256] + unkR[284] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-95]  Nozzle_1.g.fluid[Air] = GasGen.fluid_P[Air] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[373] = _div( unkR[342] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-96]  GasGen.fluid_O[Ar] = FlowMeter_O.f_in.fluid[Ar] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[314] = _div( unkR[81] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-97]  GasGen.fluid_F[Ar] = FlowMeter_F.f_in.fluid[Ar] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[285] = _div( unkR[48] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-98]  GasGen.fluid_P[Ar] =  IF[63] (GasGen.Combustion) (GasGen.fluid_O[Ar] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Ar] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[Ar] * GasGen.W_O + GasGen.fluid_F[Ar] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[343] = _div( (unkR[314] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[285] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[343] = _div( (unkR[314] * unkR[256] + unkR[285] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-99]  Nozzle_1.g.fluid[Ar] = GasGen.fluid_P[Ar] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[374] = _div( unkR[343] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-100]  GasGen.fluid_O[CH4] = FlowMeter_O.f_in.fluid[CH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[315] = _div( unkR[82] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-101]  GasGen.fluid_F[CH4] = FlowMeter_F.f_in.fluid[CH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[286] = _div( unkR[49] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-102]  GasGen.fluid_P[CH4] =  IF[64] (GasGen.Combustion) (GasGen.fluid_O[CH4] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[CH4] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[CH4] * GasGen.W_O + GasGen.fluid_F[CH4] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[344] = _div( (unkR[315] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[286] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[344] = _div( (unkR[315] * unkR[256] + unkR[286] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-103]  Nozzle_1.g.fluid[CH4] = GasGen.fluid_P[CH4] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[375] = _div( unkR[344] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-104]  GasGen.fluid_O[CO] = FlowMeter_O.f_in.fluid[CO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[316] = _div( unkR[83] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-105]  GasGen.fluid_F[CO] = FlowMeter_F.f_in.fluid[CO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[287] = _div( unkR[50] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-106]  GasGen.fluid_P[CO] =  IF[65] (GasGen.Combustion) (GasGen.fluid_O[CO] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[CO] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[CO] * GasGen.W_O + GasGen.fluid_F[CO] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[345] = _div( (unkR[316] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[287] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[345] = _div( (unkR[316] * unkR[256] + unkR[287] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-107]  Nozzle_1.g.fluid[CO] = GasGen.fluid_P[CO] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[376] = _div( unkR[345] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-108]  GasGen.fluid_O[CO2] = FlowMeter_O.f_in.fluid[CO2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[317] = _div( unkR[84] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-109]  GasGen.fluid_F[CO2] = FlowMeter_F.f_in.fluid[CO2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[288] = _div( unkR[51] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-110]  GasGen.fluid_P[CO2] =  IF[66] (GasGen.Combustion) (GasGen.fluid_O[CO2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[CO2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[CO2] * GasGen.W_O + GasGen.fluid_F[CO2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[346] = _div( (unkR[317] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[288] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[346] = _div( (unkR[317] * unkR[256] + unkR[288] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-111]  Nozzle_1.g.fluid[CO2] = GasGen.fluid_P[CO2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[377] = _div( unkR[346] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-112]  GasGen.fluid_O[H2] = FlowMeter_O.f_in.fluid[H2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[318] = _div( unkR[85] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-113]  GasGen.fluid_F[H2] = FlowMeter_F.f_in.fluid[H2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[289] = _div( unkR[52] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-114]  GasGen.fluid_P[H2] =  IF[67] (GasGen.Combustion) (GasGen.fluid_O[H2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[H2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[H2] * GasGen.W_O + GasGen.fluid_F[H2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[347] = _div( (unkR[318] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[289] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[347] = _div( (unkR[318] * unkR[256] + unkR[289] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-115]  Nozzle_1.g.fluid[H2] = GasGen.fluid_P[H2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[378] = _div( unkR[347] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-116]  GasGen.fluid_O[He] = FlowMeter_O.f_in.fluid[He] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[319] = _div( unkR[86] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-117]  GasGen.fluid_F[He] = FlowMeter_F.f_in.fluid[He] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[290] = _div( unkR[53] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-118]  GasGen.fluid_P[He] =  IF[68] (GasGen.Combustion) (GasGen.fluid_O[He] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[He] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[He] * GasGen.W_O + GasGen.fluid_F[He] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[348] = _div( (unkR[319] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[290] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[348] = _div( (unkR[319] * unkR[256] + unkR[290] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-119]  Nozzle_1.g.fluid[He] = GasGen.fluid_P[He] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[379] = _div( unkR[348] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-120]  GasGen.fluid_O[N2] = FlowMeter_O.f_in.fluid[N2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[320] = _div( unkR[87] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-121]  GasGen.fluid_F[N2] = FlowMeter_F.f_in.fluid[N2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[291] = _div( unkR[54] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-122]  GasGen.fluid_P[N2] =  IF[69] (GasGen.Combustion) (GasGen.fluid_O[N2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[N2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[N2] * GasGen.W_O + GasGen.fluid_F[N2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[349] = _div( (unkR[320] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[291] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[349] = _div( (unkR[320] * unkR[256] + unkR[291] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-123]  Nozzle_1.g.fluid[N2] = GasGen.fluid_P[N2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[380] = _div( unkR[349] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-124]  GasGen.fluid_O[O2] = FlowMeter_O.f_in.fluid[O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[321] = _div( unkR[88] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-125]  GasGen.fluid_F[O2] = FlowMeter_F.f_in.fluid[O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[292] = _div( unkR[55] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-126]  GasGen.fluid_P[O2] =  IF[70] (GasGen.Combustion) (GasGen.fluid_O[O2] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[O2] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[O2] * GasGen.W_O + GasGen.fluid_F[O2] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[350] = _div( (unkR[321] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[292] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[350] = _div( (unkR[321] * unkR[256] + unkR[292] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-127]  Nozzle_1.g.fluid[O2] = GasGen.fluid_P[O2] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[381] = _div( unkR[350] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-128]  GasGen.fluid_O[MMH_vapour] = FlowMeter_O.f_in.fluid[MMH_vapour] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[322] = _div( unkR[89] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-129]  GasGen.fluid_F[MMH_vapour] = FlowMeter_F.f_in.fluid[MMH_vapour] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[293] = _div( unkR[56] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-130]  GasGen.fluid_P[MMH_vapour] =  IF[71] (GasGen.Combustion) (GasGen.fluid_O[MMH_vapour] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[MMH_vapour] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st) / (GasGen.W_O + GasGen.W_F)	 ELSE (GasGen.fluid_O[MMH_vapour] * GasGen.W_O + GasGen.fluid_F[MMH_vapour] * GasGen.W_F) / (GasGen.W_O + GasGen.W_F)
if( unkI[2] ) 
{
unkR[351] = _div( (unkR[322] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[293] * MATH__max(unkR[391] - 1., 0.) * unkR[253]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[351] = _div( (unkR[322] * unkR[256] + unkR[293] * unkR[251]) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
//[E-131]  Nozzle_1.g.fluid[MMH_vapour] = GasGen.fluid_P[MMH_vapour] * (GasGen.W_O + GasGen.W_F) / Turbine_ch.W
unkR[382] = _div( unkR[351] * (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") ;
//[E-132]  GasGen.fluid_O[Comb_prod] = 0
unkR[323] = 0. ;
//[E-133]  GasGen.fluid_F[Comb_prod] = 0
unkR[294] = 0. ;
//[E-134]  GasGen.fluid_P[Comb_prod] =  IF[72] (GasGen.Combustion) (GasGen.fluid_O[Comb_prod] * MATH.max(1 - GasGen.phi, 0) * GasGen.W_O + GasGen.fluid_F[Comb_prod] * MATH.max(GasGen.phi - 1, 0) * GasGen.W_F_st + (1 - MATH.max(1 - GasGen.phi, 0)) * (GasGen.W_O + GasGen.W_F_st)) / (GasGen.W_O + GasGen.W_F)	 ELSE 0
if( unkI[2] ) 
{
unkR[352] = _div( (unkR[323] * MATH__max(1. - unkR[391], 0.) * unkR[256] + unkR[294] * MATH__max(unkR[391] - 1., 0.) * unkR[253] + (1. - MATH__max(1. - unkR[391], 0.)) * (unkR[256] + unkR[253])) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
}
else 
{
unkR[352] = 0. ;
}
//[E-135]  GasGen.W_IO = Injector_O_1.W - GasGen.W_O
unkR[255] = unkR[266] - unkR[256] ;
//[E-136]  GasGen.W_IF = Injector_F_1.W - GasGen.W_F
unkR[254] = unkR[262] - unkR[251] ;
//[E-137]  Nozzle_1.g.fluid[Comb_prod] = (GasGen.fluid_P[Comb_prod] * (GasGen.W_O + GasGen.W_F) + GasGen.W_IO + GasGen.W_IF) / Turbine_ch.W
unkR[383] = _div( (unkR[352] * (unkR[256] + unkR[251]) + unkR[255] + unkR[254]) , unkR[356],"Turbine_ch.W") ;
//[E-138]  GasGen.fluid_P[Comb_prod_M] =  IF[73] (GasGen.Combustion) GasGen.M_P	 ELSE 0
if( unkI[2] ) 
{
unkR[353] = unkR[240] ;
}
else 
{
unkR[353] = 0. ;
}
//[E-139]  Nozzle_1.g.fluid[Comb_prod_M] = GasGen.fluid_P[Comb_prod_M]
unkR[384] = unkR[353] ;
//[E-140]  GasGen.fluid_P[Comb_prod_cp] =  IF[74] (GasGen.Combustion) GasGen.cp_P	 ELSE 0
if( unkI[2] ) 
{
unkR[354] = unkR[258] ;
}
else 
{
unkR[354] = 0. ;
}
//[E-141]  Nozzle_1.g.fluid[Comb_prod_cp] = GasGen.fluid_P[Comb_prod_cp]
unkR[385] = unkR[354] ;
//[E-142]  GasGen.Q_comb_effective =  ZONE[6] (GasGen.Combustion) GasGen.Q_comb	  OTHERS 0
 if(m_branchZone[5]==0)
	unkR[246] = unkR[245] ;
else unkR[246] = 0. ;
//[E-143]  GasGen.fluid_O[Comb_prod_M] = 0
unkR[324] = 0. ;
//[E-144]  GasGen.fluid_O[Comb_prod_cp] = 0
unkR[325] = 0. ;
//[E-145]  GasGen.fluid_F[Comb_prod_M] = 0
unkR[295] = 0. ;
//[E-146]  GasGen.fluid_F[Comb_prod_cp] = 0
unkR[296] = 0. ;
//[E-147]  GasGen.cp_R = (GasGen.W_O * LPRES.cp(GasGen.fluid_O) + GasGen.W_F * LPRES.cp(GasGen.fluid_F)) / (GasGen.W_O + GasGen.W_F)
unkR[259] = _div( (unkR[256] * LPRES__cp(&unkR[297]) + unkR[251] * LPRES__cp(&unkR[268])) , (unkR[256] + unkR[251]),"GasGen.W_O + GasGen.W_F") ;
//[E-148]  Injector_O_1.f_in.Tt = (SplitFrac_O.f_in.pt - FlowMeter_O.f_in.pt) / LPRES.rho(FlowMeter_O.f_in.fluid) * (1 / Pump_O.eta_d - 1) / LPRES.cp(FlowMeter_O.f_in.fluid) + TankOpen_O.T_d
unkR[427] = _div( _div( (unkR[480] - unkR[238]) , LPRES__rho(&unkR[64]),"LPRES.rho(FlowMeter_O.f_in.fluid)") * (_div( 1. , unkR[479],"Pump_O.eta_d") - 1.) , LPRES__cp(&unkR[64]),"LPRES.cp(FlowMeter_O.f_in.fluid)") + unkR[236] ;
//[E-149]  Injector_O_1.f_in.pt = SplitFrac_O.f_in.pt * SplitFrac_O.TPL
unkR[439] = unkR[480] * unkR[492] ;
//[E-150]  Injector_O_1.PR = Injector_O_1.f_in.pt / GasGen.p_c
unkR[436] = _div( unkR[439] , unkR[264],"GasGen.p_c") ;
//[E-151]  Injector_O_1.M_out =  ZONE[8] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl) sqrt(2 * (Injector_O_1.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)) ZONE[8] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[7]==0)
	unkR[435] = _sqrt(_div( 2. * (_pow( unkR[436] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(FlowMeter_O.f_in.fluid)")),"(Injector_O_1.PR)**((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1"),"2 * (Injector_O_1.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)") ;
else  if(m_branchZone[7]==1)
	unkR[435] = 1. ;
else unkR[435] = 0. ;
//[E-152]  GasGen.f_O.T =  IF[87] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O_1.M_out ** 2)	 ELSE Injector_O_1.f_in.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[265] = _div( unkR[427] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[435] , 2.,"(Injector_O_1.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O_1.M_out ** 2") ;
}
else 
{
unkR[265] = unkR[427] ;
}
//[E-153]  Injector_F_1.f_in.pt = SplitFrac_F.f_in.pt * SplitFrac_F.TPL
unkR[416] = unkR[465] * unkR[491] ;
//[E-154]  Injector_F_1.PR = Injector_F_1.f_in.pt / GasGen.p_c
unkR[413] = _div( unkR[416] , unkR[264],"GasGen.p_c") ;
//[E-155]  Injector_F_1.M_out =  ZONE[7] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)) ZONE[7] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[6]==0)
	unkR[412] = _sqrt(_div( 2. * (_pow( unkR[413] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(FlowMeter_F.f_in.fluid)")),"(Injector_F_1.PR)**((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1"),"2 * (Injector_F_1.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)") ;
else  if(m_branchZone[6]==1)
	unkR[412] = 1. ;
else unkR[412] = 0. ;
//[E-156]  GasGen.f_F.T =  IF[79] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F_1.M_out ** 2)	 ELSE Injector_F_1.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[261] = _div( unkR[404] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[412] , 2.,"(Injector_F_1.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F_1.M_out ** 2") ;
}
else 
{
unkR[261] = unkR[404] ;
}
//[E-157]  GasGen.T_in = (LPRES.cp(GasGen.fluid_O) * GasGen.f_O.T + GasGen.phi / GasGen.OF_st * LPRES.cp(GasGen.fluid_F) * GasGen.f_F.T) / ((1 + GasGen.phi / GasGen.OF_st) * GasGen.cp_R)
unkR[250] = _div( (LPRES__cp(&unkR[297]) * unkR[265] + _div( unkR[391] , unkR[244],"GasGen.OF_st") * LPRES__cp(&unkR[268]) * unkR[261]) , ((1. + _div( unkR[391] , unkR[244],"GasGen.OF_st")) * unkR[259]),"(1 + GasGen.phi / GasGen.OF_st) * GasGen.cp_R") ;
//[E-158]  GasGen.T_c = (GasGen.eta_d * GasGen.Q_comb_effective / ((1 + GasGen.OF) / MATH.min(GasGen.OF, GasGen.OF_st)) + GasGen.cp_R * (GasGen.T_in - 298.15)) / LPRES.cp(GasGen.fluid_P) + 298.15
unkR[247] = _div( (_div( unkR[260] * unkR[246] , (_div( (1. + unkR[243]) , MATH__min(unkR[243], unkR[244]),"MATH.min(GasGen.OF, GasGen.OF_st)")),"(1 + GasGen.OF) / MATH.min(GasGen.OF, GasGen.OF_st)") + unkR[259] * (unkR[250] - 298.15)) , LPRES__cp(&unkR[326]),"LPRES.cp(GasGen.fluid_P)") + 298.15 ;
//[E-159]  Turbine_ch.f_in.Tt = (-((GasGen.W_O + GasGen.W_F) / Turbine_ch.W * LPRES.cp(GasGen.fluid_P) * -GasGen.T_c + GasGen.W_IO / Turbine_ch.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] * -GasGen.f_O.T) - GasGen.W_IF / Turbine_ch.W * FlowMeter_F.f_in.fluid[Comb_prod_cp] * -GasGen.f_F.T) / ((GasGen.W_O + GasGen.W_F) / Turbine_ch.W * LPRES.cp(GasGen.fluid_P) + GasGen.W_IO / Turbine_ch.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] + GasGen.W_IF / Turbine_ch.W * FlowMeter_F.f_in.fluid[Comb_prod_cp])
unkR[355] = _div( (-(_div( (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") * LPRES__cp(&unkR[326]) * -unkR[247] + _div( unkR[255] , unkR[356],"Turbine_ch.W") * unkR[92] * -unkR[265]) - _div( unkR[254] , unkR[356],"Turbine_ch.W") * unkR[59] * -unkR[261]) , (_div( (unkR[256] + unkR[251]) , unkR[356],"Turbine_ch.W") * LPRES__cp(&unkR[326]) + _div( unkR[255] , unkR[356],"Turbine_ch.W") * unkR[92] + _div( unkR[254] , unkR[356],"Turbine_ch.W") * unkR[59]),"(GasGen.W_O + GasGen.W_F) / Turbine_ch.W * LPRES.cp(GasGen.fluid_P) + GasGen.W_IO / Turbine_ch.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] + GasGen.W_IF / Turbine_ch.W * FlowMeter_F.f_in.fluid[Comb_prod_cp]") ;
//[E-160]  Nozzle_1.g.Tt = Turbine_ch.f_in.Tt - Turbine_ch.m.Power / (Turbine_ch.W * LPRES.cp(Nozzle_1.g.fluid))
unkR[451] = unkR[355] - _div( unkR[489] , (unkR[356] * LPRES__cp(&unkR[357])),"Turbine_ch.W * LPRES.cp(Nozzle_1.g.fluid)") ;
//[E-161]  Turbine_ch.alpha = Nozzle_1.g.Tt / Turbine_ch.f_in.Tt
unkR[501] = _div( unkR[451] , unkR[355],"Turbine_ch.f_in.Tt") ;
//[E-162]  Nozzle_1.g.pt = (1 - (1 - Turbine_ch.alpha) / Turbine_ch.eta_d) ** (1 / ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))) * GasGen.p_c
unkR[452] = _pow( (1. - _div( (1. - unkR[501]) , unkR[503],"Turbine_ch.eta_d")) , (_div( 1. , (_div( (LPRES__gamma(&unkR[357]) - 1.) , LPRES__gamma(&unkR[357]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)")),"(1 - (1 - Turbine_ch.alpha) / Turbine_ch.eta_d)**(1 / ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)))" ) * unkR[264] ;
//[E-163]  Nozzle_1.PR = Nozzle_1.g.pt / Nozzle_1.p_amb
unkR[447] = _div( unkR[452] , unkR[454],"Nozzle_1.p_amb") ;
//[E-164]  Nozzle_1.PR_sl = ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2) ** (LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))
unkR[448] = _pow( ((LPRES__gamma(&unkR[357]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[357]) , (LPRES__gamma(&unkR[357]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1")),"((LPRES.gamma(Nozzle_1.g.fluid) + 1) / 2)**(LPRES.gamma(Nozzle_1.g.fluid) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))" ) ;
//[E-165]  Nozzle_1.p_out_ch = Nozzle_1.g.pt / Nozzle_1.PR_sl
unkR[456] = _div( unkR[452] , unkR[448],"Nozzle_1.PR_sl") ;
//[E-166]  Nozzle_1.A_sl = Turbine_ch.W * sqrt(Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)) / Nozzle_1.g.pt / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[445] = _div( _div( unkR[356] * _sqrt(unkR[451] * LPRES__R(&unkR[357]),"Nozzle_1.g.Tt * LPRES.R(Nozzle_1.g.fluid)") , unkR[452],"Nozzle_1.g.pt") , LPRES__FGAMMA(&unkR[357]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-167]  Nozzle_1.M_out =  ZONE[1] (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1))	  OTHERS 1
 if(m_branchZone[0]==0)
	unkR[446] = _sqrt(_div( 2. * (_pow( unkR[447] , (_div( (LPRES__gamma(&unkR[357]) - 1.) , LPRES__gamma(&unkR[357]),"LPRES.gamma(Nozzle_1.g.fluid)")),"(Nozzle_1.PR)**((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid))" ) - 1.) , (LPRES__gamma(&unkR[357]) - 1.),"LPRES.gamma(Nozzle_1.g.fluid) - 1"),"2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)") ;
else unkR[446] = 1. ;
//[E-168]  Nozzle_1.A_d = Nozzle_1.A_sl * ((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1)) ** ((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1))) / Nozzle_1.M_out
unkR[444] = _div( unkR[445] * _pow( (_div( (2. + (LPRES__gamma(&unkR[357]) - 1.) * _pow( unkR[446] , 2.,"(Nozzle_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[357]) + 1.),"LPRES.gamma(Nozzle_1.g.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[357]) + 1.) , (2. * (LPRES__gamma(&unkR[357]) - 1.)),"2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)")),"((2 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) * Nozzle_1.M_out ** 2) / (LPRES.gamma(Nozzle_1.g.fluid) + 1))**((LPRES.gamma(Nozzle_1.g.fluid) + 1) / (2 * (LPRES.gamma(Nozzle_1.g.fluid) - 1)))" ) , unkR[446],"Nozzle_1.M_out") ;
//[E-169]  Nozzle_1.p_out = MATH.max(Nozzle_1.p_amb, Nozzle_1.p_out_ch)
unkR[455] = MATH__max(unkR[454], unkR[456]) ;
//[E-170]  Nozzle_1.T_out = Nozzle_1.g.Tt / (1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2)
unkR[449] = _div( unkR[451] , (1. + (LPRES__gamma(&unkR[357]) - 1.)/2. * _pow( unkR[446] , 2.,"(Nozzle_1.M_out)**(2)" )),"1 + (LPRES.gamma(Nozzle_1.g.fluid) - 1) / 2 * Nozzle_1.M_out ** 2") ;
//[E-171]  Nozzle_1.v_out = Nozzle_1.M_out * sqrt(LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out)
unkR[457] = unkR[446] * _sqrt(LPRES__gamma(&unkR[357]) * LPRES__R(&unkR[357]) * unkR[449],"LPRES.gamma(Nozzle_1.g.fluid) * LPRES.R(Nozzle_1.g.fluid) * Nozzle_1.T_out") ;
//[E-172]  Nozzle_1.Thrust = Turbine_ch.W * Nozzle_1.v_out + Nozzle_1.A_d * (Nozzle_1.p_out - Nozzle_1.p_amb)
unkR[450] = unkR[356] * unkR[457] + unkR[444] * (unkR[455] - unkR[454]) ;
//[E-173]  Injector_O.W = FlowMeter_O.f_in.W - Injector_O_1.W
unkR[63] = unkR[237] - unkR[266] ;
//[E-174]  ThrustMonitor_1.g.W = Injector_O.W + Injector_F.W
unkR[182] = unkR[63] + unkR[403] ;
//[E-175]  CombCha_1.fluid_O[LOX] = FlowMeter_O.f_in.fluid[LOX] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-176]  CombCha_1.W_O = Injector_O.W * (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[25] = unkR[63] * (1. - unkR[90]) ;
//[E-177]  CombCha_1.W_F = Injector_F.W * (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[20] = unkR[403] * (1. - unkR[57]) ;
//[E-178]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[10] = _div( unkR[25] , unkR[20],"CombCha_1.W_F") ;
//[E-179]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[220] = _div( unkR[11] , unkR[10],"CombCha_1.OF") ;
//[E-180]  CombCha_1.fluid_F[LOX] = FlowMeter_F.f_in.fluid[LOX] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-181]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[22] = _div( unkR[20] , unkR[220],"CombCha_1.phi") ;
//[E-182]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[94] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[25] + unkR[94] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-183]  ThrustMonitor_1.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[183] = _div( unkR[152] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-184]  CombCha_1.fluid_O[NTO] = FlowMeter_O.f_in.fluid[NTO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-185]  CombCha_1.fluid_F[NTO] = FlowMeter_F.f_in.fluid[NTO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-186]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[95] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[25] + unkR[95] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-187]  ThrustMonitor_1.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[184] = _div( unkR[153] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-188]  CombCha_1.fluid_O[H2O2] = FlowMeter_O.f_in.fluid[H2O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-189]  CombCha_1.fluid_F[H2O2] = FlowMeter_F.f_in.fluid[H2O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-190]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[96] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[25] + unkR[96] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-191]  ThrustMonitor_1.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[185] = _div( unkR[154] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-192]  CombCha_1.fluid_O[HNO3] = FlowMeter_O.f_in.fluid[HNO3] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-193]  CombCha_1.fluid_F[HNO3] = FlowMeter_F.f_in.fluid[HNO3] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-194]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[97] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[25] + unkR[97] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-195]  ThrustMonitor_1.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[186] = _div( unkR[155] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-196]  CombCha_1.fluid_O[LF2] = FlowMeter_O.f_in.fluid[LF2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-197]  CombCha_1.fluid_F[LF2] = FlowMeter_F.f_in.fluid[LF2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-198]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[98] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[25] + unkR[98] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-199]  ThrustMonitor_1.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[187] = _div( unkR[156] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-200]  CombCha_1.fluid_O[RP_1] = FlowMeter_O.f_in.fluid[RP_1] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-201]  CombCha_1.fluid_F[RP_1] = FlowMeter_F.f_in.fluid[RP_1] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-202]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[99] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[25] + unkR[99] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-203]  ThrustMonitor_1.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[188] = _div( unkR[157] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-204]  CombCha_1.fluid_O[LCH4] = FlowMeter_O.f_in.fluid[LCH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-205]  CombCha_1.fluid_F[LCH4] = FlowMeter_F.f_in.fluid[LCH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-206]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[100] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[25] + unkR[100] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-207]  ThrustMonitor_1.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[189] = _div( unkR[158] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-208]  CombCha_1.fluid_O[LH2] = FlowMeter_O.f_in.fluid[LH2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-209]  CombCha_1.fluid_F[LH2] = FlowMeter_F.f_in.fluid[LH2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-210]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[101] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[25] + unkR[101] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-211]  ThrustMonitor_1.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[190] = _div( unkR[159] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-212]  CombCha_1.fluid_O[N2H4] = FlowMeter_O.f_in.fluid[N2H4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-213]  CombCha_1.fluid_F[N2H4] = FlowMeter_F.f_in.fluid[N2H4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-214]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[102] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[25] + unkR[102] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-215]  ThrustMonitor_1.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[191] = _div( unkR[160] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-216]  CombCha_1.fluid_O[UDMH] = FlowMeter_O.f_in.fluid[UDMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-217]  CombCha_1.fluid_F[UDMH] = FlowMeter_F.f_in.fluid[UDMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-218]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[103] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[25] + unkR[103] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-219]  ThrustMonitor_1.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[192] = _div( unkR[161] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-220]  CombCha_1.fluid_O[MMH] = FlowMeter_O.f_in.fluid[MMH] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-221]  CombCha_1.fluid_F[MMH] = FlowMeter_F.f_in.fluid[MMH] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-222]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[104] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[25] + unkR[104] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-223]  ThrustMonitor_1.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[193] = _div( unkR[162] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-224]  CombCha_1.fluid_O[JP_10] = FlowMeter_O.f_in.fluid[JP_10] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-225]  CombCha_1.fluid_F[JP_10] = FlowMeter_F.f_in.fluid[JP_10] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-226]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[105] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[25] + unkR[105] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-227]  ThrustMonitor_1.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[194] = _div( unkR[163] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-228]  CombCha_1.fluid_O[Kerox] = FlowMeter_O.f_in.fluid[Kerox] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-229]  CombCha_1.fluid_F[Kerox] = FlowMeter_F.f_in.fluid[Kerox] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-230]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[106] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[25] + unkR[106] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-231]  ThrustMonitor_1.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[195] = _div( unkR[164] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-232]  CombCha_1.fluid_O[Oil] = FlowMeter_O.f_in.fluid[Oil] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-233]  CombCha_1.fluid_F[Oil] = FlowMeter_F.f_in.fluid[Oil] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-234]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[107] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[25] + unkR[107] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-235]  ThrustMonitor_1.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[196] = _div( unkR[165] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-236]  CombCha_1.fluid_O[H2O] = FlowMeter_O.f_in.fluid[H2O] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-237]  CombCha_1.fluid_F[H2O] = FlowMeter_F.f_in.fluid[H2O] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-238]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[108] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[25] + unkR[108] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-239]  ThrustMonitor_1.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[197] = _div( unkR[166] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-240]  CombCha_1.fluid_O[IPA] = FlowMeter_O.f_in.fluid[IPA] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-241]  CombCha_1.fluid_F[IPA] = FlowMeter_F.f_in.fluid[IPA] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-242]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[109] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[25] + unkR[109] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-243]  ThrustMonitor_1.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[198] = _div( unkR[167] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-244]  CombCha_1.fluid_O[Air] = FlowMeter_O.f_in.fluid[Air] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-245]  CombCha_1.fluid_F[Air] = FlowMeter_F.f_in.fluid[Air] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-246]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[110] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[25] + unkR[110] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-247]  ThrustMonitor_1.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[199] = _div( unkR[168] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-248]  CombCha_1.fluid_O[Ar] = FlowMeter_O.f_in.fluid[Ar] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-249]  CombCha_1.fluid_F[Ar] = FlowMeter_F.f_in.fluid[Ar] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-250]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[111] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[25] + unkR[111] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-251]  ThrustMonitor_1.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[200] = _div( unkR[169] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-252]  CombCha_1.fluid_O[CH4] = FlowMeter_O.f_in.fluid[CH4] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-253]  CombCha_1.fluid_F[CH4] = FlowMeter_F.f_in.fluid[CH4] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-254]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[112] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[25] + unkR[112] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-255]  ThrustMonitor_1.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[201] = _div( unkR[170] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-256]  CombCha_1.fluid_O[CO] = FlowMeter_O.f_in.fluid[CO] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-257]  CombCha_1.fluid_F[CO] = FlowMeter_F.f_in.fluid[CO] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-258]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[113] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[25] + unkR[113] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-259]  ThrustMonitor_1.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[202] = _div( unkR[171] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-260]  CombCha_1.fluid_O[CO2] = FlowMeter_O.f_in.fluid[CO2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-261]  CombCha_1.fluid_F[CO2] = FlowMeter_F.f_in.fluid[CO2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-262]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[114] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[25] + unkR[114] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-263]  ThrustMonitor_1.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[203] = _div( unkR[172] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-264]  CombCha_1.fluid_O[H2] = FlowMeter_O.f_in.fluid[H2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-265]  CombCha_1.fluid_F[H2] = FlowMeter_F.f_in.fluid[H2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-266]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[115] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[25] + unkR[115] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-267]  ThrustMonitor_1.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[204] = _div( unkR[173] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-268]  CombCha_1.fluid_O[He] = FlowMeter_O.f_in.fluid[He] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-269]  CombCha_1.fluid_F[He] = FlowMeter_F.f_in.fluid[He] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-270]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[116] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[25] + unkR[116] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-271]  ThrustMonitor_1.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[205] = _div( unkR[174] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-272]  CombCha_1.fluid_O[N2] = FlowMeter_O.f_in.fluid[N2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-273]  CombCha_1.fluid_F[N2] = FlowMeter_F.f_in.fluid[N2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-274]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[117] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[25] + unkR[117] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-275]  ThrustMonitor_1.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[206] = _div( unkR[175] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-276]  CombCha_1.fluid_O[O2] = FlowMeter_O.f_in.fluid[O2] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-277]  CombCha_1.fluid_F[O2] = FlowMeter_F.f_in.fluid[O2] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-278]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[118] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[25] + unkR[118] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-279]  ThrustMonitor_1.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[207] = _div( unkR[176] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-280]  CombCha_1.fluid_O[MMH_vapour] = FlowMeter_O.f_in.fluid[MMH_vapour] / (1 - FlowMeter_O.f_in.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - FlowMeter_O.f_in.fluid[Comb_prod]") ;
//[E-281]  CombCha_1.fluid_F[MMH_vapour] = FlowMeter_F.f_in.fluid[MMH_vapour] / (1 - FlowMeter_F.f_in.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - FlowMeter_F.f_in.fluid[Comb_prod]") ;
//[E-282]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[119] * MATH__max(unkR[220] - 1., 0.) * unkR[22]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[25] + unkR[119] * unkR[20]) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-283]  ThrustMonitor_1.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W
unkR[208] = _div( unkR[177] * (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-284]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-285]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-286]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[220], 0.) * unkR[25] + unkR[120] * MATH__max(unkR[220] - 1., 0.) * unkR[22] + (1. - MATH__max(1. - unkR[220], 0.)) * (unkR[25] + unkR[22])) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-287]  CombCha_1.W_IO = Injector_O.W - CombCha_1.W_O
unkR[24] = unkR[63] - unkR[25] ;
//[E-288]  CombCha_1.W_IF = Injector_F.W - CombCha_1.W_F
unkR[23] = unkR[403] - unkR[20] ;
//[E-289]  ThrustMonitor_1.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor_1.g.W
unkR[209] = _div( (unkR[178] * (unkR[25] + unkR[20]) + unkR[24] + unkR[23]) , unkR[182],"ThrustMonitor_1.g.W") ;
//[E-290]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[6] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-291]  ThrustMonitor_1.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[210] = unkR[179] ;
//[E-292]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[27] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-293]  ThrustMonitor_1.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[211] = unkR[180] ;
//[E-294]  CombCha_1.Q_comb_effective =  ZONE[3] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[14] = unkR[13] ;
else unkR[14] = 0. ;
//[E-295]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-296]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-297]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-298]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-299]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[28] = _div( (unkR[25] * LPRES__cp(&unkR[123]) + unkR[20] * LPRES__cp(&unkR[94])) , (unkR[25] + unkR[20]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-300]  Injector_O.f_in.pt = SplitFrac_O.f_in.pt * SplitFrac_O.TPL
unkR[428] = unkR[480] * unkR[492] ;
//[E-301]  Injector_O.PR = Injector_O.f_in.pt / CombCha_1.p_c
unkR[424] = _div( unkR[428] , unkR[61],"CombCha_1.p_c") ;
//[E-302]  Injector_O.M_out =  ZONE[4] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)) ZONE[4] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[3]==0)
	unkR[423] = _sqrt(_div( 2. * (_pow( unkR[424] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(FlowMeter_O.f_in.fluid)")),"(Injector_O.PR)**((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_O.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)") ;
else  if(m_branchZone[3]==1)
	unkR[423] = 1. ;
else unkR[423] = 0. ;
//[E-303]  CombCha_1.f_O.T =  IF[34] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE Injector_O_1.f_in.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[427] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[423] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[427] ;
}
//[E-304]  Injector_F.f_in.pt = SplitFrac_F.f_in.pt * SplitFrac_F.TPL
unkR[405] = unkR[465] * unkR[491] ;
//[E-305]  Injector_F.PR = Injector_F.f_in.pt / CombCha_1.p_c
unkR[400] = _div( unkR[405] , unkR[61],"CombCha_1.p_c") ;
//[E-306]  Injector_F.M_out =  ZONE[5] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)) ZONE[5] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[4]==0)
	unkR[399] = _sqrt(_div( 2. * (_pow( unkR[400] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(FlowMeter_F.f_in.fluid)")),"(Injector_F.PR)**((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / LPRES.gamma(FlowMeter_F.f_in.fluid)) - 1) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)") ;
else  if(m_branchZone[4]==1)
	unkR[399] = 1. ;
else unkR[399] = 0. ;
//[E-307]  CombCha_1.f_F.T =  IF[42] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.f_in.Tt / (1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE Injector_F_1.f_in.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( unkR[404] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[399] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[30] = unkR[404] ;
}
//[E-308]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[220] , unkR[11],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[30]) , ((1. + _div( unkR[220] , unkR[11],"CombCha_1.OF_st")) * unkR[28]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-309]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[29] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[28] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-310]  ThrustMonitor_1.g.Tt = (-((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W * LPRES.cp(CombCha_1.fluid_P) * -CombCha_1.T_c + CombCha_1.W_IO / ThrustMonitor_1.g.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] * -CombCha_1.f_O.T) - CombCha_1.W_IF / ThrustMonitor_1.g.W * FlowMeter_F.f_in.fluid[Comb_prod_cp] * -CombCha_1.f_F.T) / ((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W * LPRES.cp(CombCha_1.fluid_P) + CombCha_1.W_IO / ThrustMonitor_1.g.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] + CombCha_1.W_IF / ThrustMonitor_1.g.W * FlowMeter_F.f_in.fluid[Comb_prod_cp])
unkR[181] = _div( (-(_div( (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") * LPRES__cp(&unkR[152]) * -unkR[16] + _div( unkR[24] , unkR[182],"ThrustMonitor_1.g.W") * unkR[92] * -unkR[62]) - _div( unkR[23] , unkR[182],"ThrustMonitor_1.g.W") * unkR[59] * -unkR[30]) , (_div( (unkR[25] + unkR[20]) , unkR[182],"ThrustMonitor_1.g.W") * LPRES__cp(&unkR[152]) + _div( unkR[24] , unkR[182],"ThrustMonitor_1.g.W") * unkR[92] + _div( unkR[23] , unkR[182],"ThrustMonitor_1.g.W") * unkR[59]),"(CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor_1.g.W * LPRES.cp(CombCha_1.fluid_P) + CombCha_1.W_IO / ThrustMonitor_1.g.W * FlowMeter_O.f_in.fluid[Comb_prod_cp] + CombCha_1.W_IF / ThrustMonitor_1.g.W * FlowMeter_F.f_in.fluid[Comb_prod_cp]") ;
//[E-311]  CombCha_1.A_r = ThrustMonitor_1.g.W * sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid) / CombCha_1.p_c
unkR[3] = _div( unkR[182] * _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") , unkR[61],"CombCha_1.p_c") ;
//[E-312]  ThrustMonitor_1.g.A_out = CombCha_1.AR * CombCha_1.A_r
unkR[2] = unkR[0] * unkR[3] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-314]  ThrustMonitor_1.T_out = ThrustMonitor_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[493] = _div( unkR[181] , (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[1] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-315]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out)
unkR[498] = dyn[1] * _sqrt(LPRES__gamma(&unkR[183]) * LPRES__R(&unkR[183]) * unkR[493],"LPRES.gamma(ThrustMonitor_1.g.fluid) * LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.T_out") ;
//[E-316]  ThrustMonitor_1.p_out = CombCha_1.p_c / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))
unkR[497] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[1] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) / LPRES.gamma(ThrustMonitor_1.g.fluid)))") ;
//[E-317]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[496] = LPRES__ISA_Pressure(unkR[442]) ;
//[E-318]  ThrustMonitor_1.Thrust = ThrustMonitor_1.g.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[494] = unkR[182] * unkR[498] + unkR[2] * (unkR[497] - unkR[496]) ;
//[E-319]  ThrustMonitor_1.i.Data[1] = ThrustMonitor_1.Thrust
unkR[495] = unkR[494] ;
//[E-320]  ControlPanel_1.i_Thrust.Data[1] = Nozzle_1.Thrust + ThrustMonitor_1.i.Data[1]
unkR[230] = unkR[450] + unkR[495] ;
//[E-321]  Pump_O.H = (SplitFrac_O.f_in.pt - FlowMeter_O.f_in.pt) / (9.80665 * LPRES.rho(FlowMeter_O.f_in.fluid))
unkR[475] = _div( (unkR[480] - unkR[238]) , (9.80665 * LPRES__rho(&unkR[64])),"9.80665 * LPRES.rho(FlowMeter_O.f_in.fluid)") ;
//[E-322]  Pump_O.psi = 1 - (1 - Pump_O.psi_d) / Pump_O.phi_d * Pump_O.phi_d
unkR[482] = 1. - _div( (1. - unkR[483]) , unkR[481],"Pump_O.phi_d") * unkR[481] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-324]  Pump_O.r_m_d = Pump_O.U / Pump_O.m.N
unkR[485] = _div( dyn[2] , unkR[466],"Pump_O.m.N") ;
//[E-325]  Pump_O.A_in_d = FlowMeter_O.f_in.W / Pump_O.phi_d / LPRES.rho(FlowMeter_O.f_in.fluid) / Pump_O.U
unkR[474] = _div( _div( _div( unkR[237] , unkR[481],"Pump_O.phi_d") , LPRES__rho(&unkR[64]),"LPRES.rho(FlowMeter_O.f_in.fluid)") , dyn[2],"Pump_O.U") ;
//[E-326]  Shaft_1.rpm = Pump_O.m.N / 0.10471975511966
unkR[490] = unkR[466]/0.10471975511966 ;
//[E-327]  CombCha_1.rho_trans = CombCha_1.p_c / ThrustMonitor_1.g.Tt / LPRES.R(CombCha_1.fluid_P)
unkR[222] = _div( _div( unkR[61] , unkR[181],"ThrustMonitor_1.g.Tt") , LPRES__R(&unkR[152]),"LPRES.R(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-329]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor_1.g.fluid)
unkR[26] = _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor_1.g.fluid) * ThrustMonitor_1.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor_1.g.fluid)") ;
//[E-330]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor_1.g.fluid) / (9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[183]) , (9. * LPRES__gamma(&unkR[183]) - 5.),"9 * LPRES.gamma(ThrustMonitor_1.g.fluid) - 5") ;
//[E-331]  CombCha_1.M_r = 1
unkR[9] = 1. ;
//[E-332]  CombCha_1.h.T = ThrustMonitor_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[15] = unkR[181] * _div( (1. + _pow( unkR[12] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[183]) - 1.) * _pow( unkR[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[183]) - 1.) * _pow( unkR[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor_1.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-333]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor_1.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[224] = 1.184e-07 * _pow( LPRES__M(&unkR[183]) , 0.5,"(LPRES.M(ThrustMonitor_1.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-334]  CombCha_1.h.A = 0
unkR[212] = 0. ;
//[E-335]  CombCha_1.h_g = 0
unkR[214] = 0. ;
//[E-336]  CombCha_1.h.Q = 0
unkR[213] = 0. ;
//[E-337]  Turbine_ch.A_in_d = Turbine_ch.W * sqrt(Turbine_ch.f_in.Tt * LPRES.R(Nozzle_1.g.fluid)) / (cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid)) / GasGen.p_c
unkR[500] = _div( _div( unkR[356] * _sqrt(unkR[355] * LPRES__R(&unkR[357]),"Turbine_ch.f_in.Tt * LPRES.R(Nozzle_1.g.fluid)") , (cos(unkR[502] * 3.14159265358979/180.) * LPRES__FGAMMA(&unkR[357])),"cos(Turbine_ch.alpha_2 * 3.14159265358979 / 180) * LPRES.FGAMMA(Nozzle_1.g.fluid)") , unkR[264],"GasGen.p_c") ;
//[E-338]  Injector_O.PR_sl =  IF[30] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[425] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[425] = 0. ;
}
//[E-339]  Injector_O.p_out_ch =  IF[31] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[429] = _div( unkR[428] , unkR[425],"Injector_O.PR_sl") ;
}
else 
{
unkR[429] = 0. ;
}
//[E-340]  Injector_O.A_sl =  IF[32] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)) * Injector_O.W / (LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[421] = _div( _sqrt(unkR[427] * LPRES__R(&unkR[64]),"Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[428]),"LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[421] = 0. ;
}
//[E-341]  CombCha_1.f_O.p =  IF[33] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[429]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-342]  Injector_O.A_d =  IF[35] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[420] = _div( unkR[421] * _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[423] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)))" ) , unkR[423],"Injector_O.M_out") ;
}
else 
{
unkR[420] = _div( _div( unkR[63] , unkR[422],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[428] - unkR[93]),"2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p)"),"sqrt(2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O.f_in.pt - CombCha_1.f_O.p))") ;
}
//[E-343]  Injector_O.v_ideal =  IF[36] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * CombCha_1.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[430] = unkR[423] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[430] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[420] * unkR[422]),"LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-344]  Injector_O.Re =  IF[37] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(FlowMeter_O.f_in.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[426] = 0. ;
}
else 
{
unkR[426] = _div( LPRES__rho(&unkR[64]) * unkR[430] * unkR[422] * _sqrt(4. * unkR[420]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(FlowMeter_O.f_in.fluid)") ;
}
//[E-345]  Injector_F.PR_sl =  IF[38] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[401] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[401] = 0. ;
}
//[E-346]  Injector_F.p_out_ch =  IF[39] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F.f_in.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[406] = _div( unkR[405] , unkR[401],"Injector_F.PR_sl") ;
}
else 
{
unkR[406] = 0. ;
}
//[E-347]  Injector_F.A_sl =  IF[40] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)) * Injector_F.W / (LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[397] = _div( _sqrt(unkR[404] * LPRES__R(&unkR[31]),"Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)") * unkR[403] , (LPRES__FGAMMA(&unkR[31]) * unkR[405]),"LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F.f_in.pt") ;
}
else 
{
unkR[397] = 0. ;
}
//[E-348]  CombCha_1.f_F.p =  IF[41] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[406]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-349]  Injector_F.A_d =  IF[43] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[396] = _div( unkR[397] * _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[399] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)))" ) , unkR[399],"Injector_F.M_out") ;
}
else 
{
unkR[396] = _div( _div( unkR[403] , unkR[398],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[405] - unkR[60]),"2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p)"),"sqrt(2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F.f_in.pt - CombCha_1.f_F.p))") ;
}
//[E-350]  Injector_F.v_ideal =  IF[44] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * CombCha_1.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[407] = unkR[399] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[30],"LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[407] = _div( unkR[403] , (LPRES__rho(&unkR[31]) * unkR[396] * unkR[398]),"LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-351]  Injector_F.Re =  IF[45] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(FlowMeter_F.f_in.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[402] = 0. ;
}
else 
{
unkR[402] = _div( LPRES__rho(&unkR[31]) * unkR[407] * unkR[398] * _sqrt(4. * unkR[396]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(FlowMeter_F.f_in.fluid)") ;
}
//[E-352]  ControlPanel_1.Thrust = ControlPanel_1.i_Thrust.Data[1]
unkR[228] = unkR[230] ;
//[E-353]  FlowMeter_F.i.Data[1] = abs(FlowMeter_F.f_in.W)
unkR[235] = abs(unkR[233]) ;
//[E-354]  FlowMeter_O.i.Data[1] = abs(FlowMeter_O.f_in.W)
unkR[239] = abs(unkR[237]) ;
//[E-355]  ControlPanel_1.W_tot = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[229] = unkR[235] + unkR[239] ;
//[E-356]  ControlPanel_1.i_Comb.Data[1] = CombCha_1.c_star
unkR[215] = unkR[26] ;
//[E-357]  ControlPanel_1.Isp = ControlPanel_1.Thrust / ControlPanel_1.W_tot
unkR[226] = _div( unkR[228] , unkR[229],"ControlPanel_1.W_tot") ;
//[E-358]  ControlPanel_1.C_E = ControlPanel_1.Isp / CombCha_1.c_star
unkR[225] = _div( unkR[226] , unkR[26],"CombCha_1.c_star") ;
//[E-359]  ControlPanel_1.Isp_0 = ControlPanel_1.Isp / 9.80665
unkR[227] = unkR[226]/9.80665 ;
//[E-360]  GasGen.rho_trans = GasGen.p_c / Turbine_ch.f_in.Tt / LPRES.R(GasGen.fluid_P)
unkR[393] = _div( _div( unkR[264] , unkR[355],"Turbine_ch.f_in.Tt") , LPRES__R(&unkR[326]),"LPRES.R(GasGen.fluid_P)") ;
//[E-361]  GasGen.c_star = sqrt(LPRES.R(Nozzle_1.g.fluid) * Turbine_ch.f_in.Tt) / LPRES.FGAMMA(Nozzle_1.g.fluid)
unkR[257] = _div( _sqrt(LPRES__R(&unkR[357]) * unkR[355],"LPRES.R(Nozzle_1.g.fluid) * Turbine_ch.f_in.Tt") , LPRES__FGAMMA(&unkR[357]),"LPRES.FGAMMA(Nozzle_1.g.fluid)") ;
//[E-362]  GasGen.i.Data[1] = GasGen.c_star
unkR[386] = unkR[257] ;
//[E-363]  Injector_F_1.PR_sl =  IF[75] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[414] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_F.f_in.fluid) / (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[414] = 0. ;
}
//[E-364]  Injector_F_1.p_out_ch =  IF[76] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.f_in.pt / Injector_F_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[417] = _div( unkR[416] , unkR[414],"Injector_F_1.PR_sl") ;
}
else 
{
unkR[417] = 0. ;
}
//[E-365]  Injector_F_1.A_sl =  IF[77] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) sqrt(Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)) * Injector_F_1.W / (LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[410] = _div( _sqrt(unkR[404] * LPRES__R(&unkR[31]),"Injector_F_1.f_in.Tt * LPRES.R(FlowMeter_F.f_in.fluid)") * unkR[262] , (LPRES__FGAMMA(&unkR[31]) * unkR[416]),"LPRES.FGAMMA(FlowMeter_F.f_in.fluid) * Injector_F_1.f_in.pt") ;
}
else 
{
unkR[410] = 0. ;
}
//[E-366]  GasGen.f_F.p =  IF[78] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) MATH.max(GasGen.p_c, Injector_F_1.p_out_ch)	 ELSE GasGen.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[263] = MATH__max(unkR[264], unkR[417]) ;
}
else 
{
unkR[263] = unkR[264] ;
}
//[E-367]  Injector_F_1.A_d =  IF[80] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.A_sl * ((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1))) / Injector_F_1.M_out	 ELSE Injector_F_1.W / Injector_F_1.C_D / sqrt(2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F_1.f_in.pt - GasGen.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[409] = _div( unkR[410] * _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[412] , 2.,"(Injector_F_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(FlowMeter_F.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(FlowMeter_F.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_F.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_F.f_in.fluid) - 1)))" ) , unkR[412],"Injector_F_1.M_out") ;
}
else 
{
unkR[409] = _div( _div( unkR[262] , unkR[411],"Injector_F_1.C_D") , _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[416] - unkR[263]),"2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F_1.f_in.pt - GasGen.f_F.p)"),"sqrt(2 * LPRES.rho(FlowMeter_F.f_in.fluid) * (Injector_F_1.f_in.pt - GasGen.f_F.p))") ;
}
//[E-368]  Injector_F_1.v_ideal =  IF[81] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) Injector_F_1.M_out * sqrt(LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * GasGen.f_F.T)	 ELSE Injector_F_1.W / (LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F_1.A_d * Injector_F_1.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[418] = unkR[412] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[261],"LPRES.gamma(FlowMeter_F.f_in.fluid) * LPRES.R(FlowMeter_F.f_in.fluid) * GasGen.f_F.T") ;
}
else 
{
unkR[418] = _div( unkR[262] , (LPRES__rho(&unkR[31]) * unkR[409] * unkR[411]),"LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F_1.A_d * Injector_F_1.C_D") ;
}
//[E-369]  Injector_F_1.Re =  IF[82] (LPRES.State(FlowMeter_F.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_F.f_in.fluid) * Injector_F_1.v_ideal * Injector_F_1.C_D * sqrt(4 * Injector_F_1.A_d / 3.14159265358979) / LPRES.visc(FlowMeter_F.f_in.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[415] = 0. ;
}
else 
{
unkR[415] = _div( LPRES__rho(&unkR[31]) * unkR[418] * unkR[411] * _sqrt(4. * unkR[409]/3.14159265358979,"4 * Injector_F_1.A_d / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(FlowMeter_F.f_in.fluid)") ;
}
//[E-370]  Injector_O_1.PR_sl =  IF[83] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2) ** (LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[437] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) - 1")),"((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / 2)**(LPRES.gamma(FlowMeter_O.f_in.fluid) / (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))" ) ;
}
else 
{
unkR[437] = 0. ;
}
//[E-371]  Injector_O_1.p_out_ch =  IF[84] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.f_in.pt / Injector_O_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[440] = _div( unkR[439] , unkR[437],"Injector_O_1.PR_sl") ;
}
else 
{
unkR[440] = 0. ;
}
//[E-372]  Injector_O_1.A_sl =  IF[85] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) sqrt(Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)) * Injector_O_1.W / (LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O_1.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[433] = _div( _sqrt(unkR[427] * LPRES__R(&unkR[64]),"Injector_O_1.f_in.Tt * LPRES.R(FlowMeter_O.f_in.fluid)") * unkR[266] , (LPRES__FGAMMA(&unkR[64]) * unkR[439]),"LPRES.FGAMMA(FlowMeter_O.f_in.fluid) * Injector_O_1.f_in.pt") ;
}
else 
{
unkR[433] = 0. ;
}
//[E-373]  GasGen.f_O.p =  IF[86] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) MATH.max(GasGen.p_c, Injector_O_1.p_out_ch)	 ELSE GasGen.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[267] = MATH__max(unkR[264], unkR[440]) ;
}
else 
{
unkR[267] = unkR[264] ;
}
//[E-374]  Injector_O_1.A_d =  IF[88] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.A_sl * ((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1)) ** ((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1))) / Injector_O_1.M_out	 ELSE Injector_O_1.W / Injector_O_1.C_D / sqrt(2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O_1.f_in.pt - GasGen.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[432] = _div( unkR[433] * _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[435] , 2.,"(Injector_O_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(FlowMeter_O.f_in.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)")),"((2 + (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1) * Injector_O_1.M_out ** 2) / (LPRES.gamma(FlowMeter_O.f_in.fluid) + 1))**((LPRES.gamma(FlowMeter_O.f_in.fluid) + 1) / (2 * (LPRES.gamma(FlowMeter_O.f_in.fluid) - 1)))" ) , unkR[435],"Injector_O_1.M_out") ;
}
else 
{
unkR[432] = _div( _div( unkR[266] , unkR[434],"Injector_O_1.C_D") , _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[439] - unkR[267]),"2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O_1.f_in.pt - GasGen.f_O.p)"),"sqrt(2 * LPRES.rho(FlowMeter_O.f_in.fluid) * (Injector_O_1.f_in.pt - GasGen.f_O.p))") ;
}
//[E-375]  Injector_O_1.v_ideal =  IF[89] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) Injector_O_1.M_out * sqrt(LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * GasGen.f_O.T)	 ELSE Injector_O_1.W / (LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O_1.A_d * Injector_O_1.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[441] = unkR[435] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[265],"LPRES.gamma(FlowMeter_O.f_in.fluid) * LPRES.R(FlowMeter_O.f_in.fluid) * GasGen.f_O.T") ;
}
else 
{
unkR[441] = _div( unkR[266] , (LPRES__rho(&unkR[64]) * unkR[432] * unkR[434]),"LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O_1.A_d * Injector_O_1.C_D") ;
}
//[E-376]  Injector_O_1.Re =  IF[90] (LPRES.State(FlowMeter_O.f_in.fluid) == Gas) 0	 ELSE LPRES.rho(FlowMeter_O.f_in.fluid) * Injector_O_1.v_ideal * Injector_O_1.C_D * sqrt(4 * Injector_O_1.A_d / 3.14159265358979) / LPRES.visc(FlowMeter_O.f_in.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[438] = 0. ;
}
else 
{
unkR[438] = _div( LPRES__rho(&unkR[64]) * unkR[441] * unkR[434] * _sqrt(4. * unkR[432]/3.14159265358979,"4 * Injector_O_1.A_d / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(FlowMeter_O.f_in.fluid)") ;
}
//[E-377]  ControlPanel_1.i_W.Data[1] = FlowMeter_F.i.Data[1] + FlowMeter_O.i.Data[1]
unkR[231] = unkR[235] + unkR[239] ;
//[E-378]  Nozzle_1.i.Data[1] = ControlPanel_1.i_Thrust.Data[1] - ThrustMonitor_1.i.Data[1]
unkR[453] = unkR[230] - unkR[495] ;

//save last residues
memcpy(this->res,res,4*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__F1_design_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(1 == LPRES__State(&unkR[31])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_F.","Liquid == LPRES.State(FlowMeter_F.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[357])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",773,"Nozzle_1.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE NOZZLE!");
if(!(1 == LPRES__State(&unkR[64])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",403,"Pump_O.","Liquid == LPRES.State(FlowMeter_O.f_in.fluid)","%s","ONLY LIQUIDS CAN GO THROUGH THE PUMP!");
if(!(2 == LPRES__State(&unkR[357])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",111,"Turbine_ch.","Gas == LPRES.State(Nozzle_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE TURBINE!");
if(!(2 == LPRES__State(&unkR[183])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor_1.","Gas == LPRES.State(ThrustMonitor_1.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[497] , unkR[496],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[1] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__F1_design_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284] + unkR[314] * unkR[285] + unkR[315] * unkR[286] + unkR[316] * unkR[287] + unkR[317] * unkR[288] + unkR[318] * unkR[289] + unkR[319] * unkR[290] + unkR[320] * unkR[291] + unkR[321] * unkR[292] + unkR[322] * unkR[293]; //(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0
    ev[3]= unkR[297] * unkR[268] + unkR[298] * unkR[269] + unkR[299] * unkR[270] + unkR[300] * unkR[271] + unkR[301] * unkR[272] + unkR[302] * unkR[273] + unkR[303] * unkR[274] + unkR[304] * unkR[275] + unkR[305] * unkR[276] + unkR[306] * unkR[277] + unkR[307] * unkR[278] + unkR[308] * unkR[279] + unkR[309] * unkR[280] + unkR[310] * unkR[281] + unkR[311] * unkR[282] + unkR[312] * unkR[283] + unkR[313] * unkR[284] + unkR[314] * unkR[285] + unkR[315] * unkR[286] + unkR[316] * unkR[287] + unkR[317] * unkR[288] + unkR[318] * unkR[289] + unkR[319] * unkR[290] + unkR[320] * unkR[291] + unkR[321] * unkR[292] + unkR[322] * unkR[293]; //(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0
    ev[4]= unkR[447] - unkR[448]; //Nozzle_1.PR < Nozzle_1.PR_sl
    ev[5]= unkR[489]; //Turbine_ch.m.Power > 0
    ev[6]= unkI[0] - 1; //CombCha_1.Combustion
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[8]= unkR[424] - unkR[425]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[10]= unkR[424] - unkR[425]; //Injector_O.PR >= Injector_O.PR_sl
    ev[11]= LPRES__State(&unkR[31]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[12]= unkR[400] - unkR[401]; //Injector_F.PR < Injector_F.PR_sl
    ev[13]= LPRES__State(&unkR[31]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[14]= unkR[400] - unkR[401]; //Injector_F.PR >= Injector_F.PR_sl
    ev[15]= unkI[2] - 1; //GasGen.Combustion
    ev[16]= LPRES__State(&unkR[31]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[17]= unkR[413] - unkR[414]; //Injector_F_1.PR < Injector_F_1.PR_sl
    ev[18]= LPRES__State(&unkR[31]) - 2; //LPRES.State(FlowMeter_F.f_in.fluid) == Gas
    ev[19]= unkR[413] - unkR[414]; //Injector_F_1.PR >= Injector_F_1.PR_sl
    ev[20]= LPRES__State(&unkR[64]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[21]= unkR[436] - unkR[437]; //Injector_O_1.PR < Injector_O_1.PR_sl
    ev[22]= LPRES__State(&unkR[64]) - 2; //LPRES.State(FlowMeter_O.f_in.fluid) == Gas
    ev[23]= unkR[436] - unkR[437]; //Injector_O_1.PR >= Injector_O_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__F1_design_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__F1_design_design::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__F1_design_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Nozzle_1.M_out =  ZONE (Nozzle_1.PR < Nozzle_1.PR_sl) sqrt(2 * (Nozzle_1.PR ** ((LPRES.gamma(Nozzle_1.g.fluid) - 1) / LPRES.gamma(Nozzle_1.g.fluid)) - 1) / (LPRES.gamma(Nozzle_1.g.fluid) - 1)) OTHERS 1
     branchZone[0] = (cont[4] ) ? 0 : 1;
     // Shaft_1.m_1.Power =  ZONE (Turbine_ch.m.Power > 0) -Turbine_ch.m.Power * Shaft_1.eta OTHERS -Turbine_ch.m.Power / Shaft_1.eta
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
INTEG_simula::t_initEvent* DRLPRUEBAS__F1_design_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
	static const char* zoneTxtTable[] = { "Nozzle_1.PR < Nozzle_1.PR_sl","OTHERS",
	"Turbine_ch.m.Power > 0","OTHERS",
	"CombCha_1.Combustion","OTHERS",
	"LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"GasGen.Combustion","OTHERS",
	"LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl","LPRES.State(FlowMeter_F.f_in.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl","OTHERS",
	"LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR < Injector_O_1.PR_sl","LPRES.State(FlowMeter_O.f_in.fluid) == Gas AND Injector_O_1.PR >= Injector_O_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,4,6,9,12,14,17 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[24]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ WHEN,NOT_EQ_OP,0,2,"(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,3,"(GasGen.fluid_O[LOX] * GasGen.fluid_F[LOX] + GasGen.fluid_O[NTO] * GasGen.fluid_F[NTO] + GasGen.fluid_O[H2O2] * GasGen.fluid_F[H2O2] + GasGen.fluid_O[HNO3] * GasGen.fluid_F[HNO3] + GasGen.fluid_O[LF2] * GasGen.fluid_F[LF2] + GasGen.fluid_O[RP_1] * GasGen.fluid_F[RP_1] + GasGen.fluid_O[LCH4] * GasGen.fluid_F[LCH4] + GasGen.fluid_O[LH2] * GasGen.fluid_F[LH2] + GasGen.fluid_O[N2H4] * GasGen.fluid_F[N2H4] + GasGen.fluid_O[UDMH] * GasGen.fluid_F[UDMH] + GasGen.fluid_O[MMH] * GasGen.fluid_F[MMH] + GasGen.fluid_O[JP_10] * GasGen.fluid_F[JP_10] + GasGen.fluid_O[Kerox] * GasGen.fluid_F[Kerox] + GasGen.fluid_O[Oil] * GasGen.fluid_F[Oil] + GasGen.fluid_O[H2O] * GasGen.fluid_F[H2O] + GasGen.fluid_O[IPA] * GasGen.fluid_F[IPA] + GasGen.fluid_O[Air] * GasGen.fluid_F[Air] + GasGen.fluid_O[Ar] * GasGen.fluid_F[Ar] + GasGen.fluid_O[CH4] * GasGen.fluid_F[CH4] + GasGen.fluid_O[CO] * GasGen.fluid_F[CO] + GasGen.fluid_O[CO2] * GasGen.fluid_F[CO2] + GasGen.fluid_O[H2] * GasGen.fluid_F[H2] + GasGen.fluid_O[He] * GasGen.fluid_F[He] + GasGen.fluid_O[N2] * GasGen.fluid_F[N2] + GasGen.fluid_O[O2] * GasGen.fluid_F[O2] + GasGen.fluid_O[MMH_vapour] * GasGen.fluid_F[MMH_vapour]) == 0"},{ ZONE,LT_OP,0,0,"Nozzle_1.PR < Nozzle_1.PR_sl"},{ ZONE,GT_OP,0,0,"Turbine_ch.m.Power > 0"}
,{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"GasGen.Combustion"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F_1.PR < Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_F.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F_1.PR >= Injector_F_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"}
,{ ZONE,LT_OP,0,0,"Injector_O_1.PR < Injector_O_1.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(FlowMeter_O.f_in.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O_1.PR >= Injector_O_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__F1_design_design::initDelays()
{
}


bool DRLPRUEBAS__F1_design_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__F1_design_design = 92528;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__F1_design_design = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__F1_design_design[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__F1_design_design;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__F1_design_design;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__F1_design_design;
return true;
}



bool DRLPRUEBAS__F1_design_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__F1_design_design = 80;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__F1_design_design = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__F1_design_design[] = 
{
"BAAAAAQAAAAAAAAAAQAAAAEAAAABAAAAAQAAAAEAAAACAAAAAwAAAAQAAAAAAAAAAAAAAAAAAAAAAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__F1_design_design;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__F1_design_design;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__F1_design_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__F1_design_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__F1_design_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__F1_design_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__F1_design_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__F1_design_design(name,dirInstall);
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
	sprintf(componentName,"%s","F1_design");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+f1_design.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

