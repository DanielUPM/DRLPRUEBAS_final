//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate_CPP
#define DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate_CPP

#include "DRLPRUEBAS.+c+c_+gen_+o+f+f+d.+o+f+f+dvalidate.h"

DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate* DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::s_current= NULL;

DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_Gen_OFFD";
m_infoPartitionName = "OFFDvalidate";
m_infoModelName = "DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate";
m_infoModelFileName = "DRLPRUEBAS.+c+c_+gen_+o+f+f+d.+o+f+f+dvalidate";
m_infoModelFileNameExtra = "+c+c_+gen_+o+f+f+d.+o+f+f+dvalidate";
m_perfFlag = false;
m_infoComponentDate = "13/06/2018 10:05:51.649000";
m_infoPartitionDate = "19/06/2018 10:54:00.500000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[6]; 
int nbx;
for (nbx=0; nbx < 6 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[1];
int ib;
for (ib=0; ib < 1 ; ib++)
	m_boundaryBranch[ib]= 0;

m_branchZone= new int[3]; 
int nibr;
for (nibr=0; nibr < 3 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[75]; 
int nif;
for (nif=0; nif < 75 ; nif++)
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
		{elmstr7,2,elmind7},
		{elmstr8,2,elmind8}
	} ;
typ= new struct INTEG_enumType[9];
etypecopy(9,typ,tmp_typ);
n_dyn=10;
dyn= new double[10] ;
static double tmp_dynInit[10]={ 0, 1, 0, 1, 1, 1, 10, 1, 100, 100 } ;
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

n_unkR=430;
unkR= new double[430] ;
static double tmp_unkRInit[430]={ 10, 5, 1, 5.05402805, 1, 32, 2.01594, 31.9988, 0, 0, 8, 0, 2000000, 0, 1, 0, 
		4000, 337.260438, 0, 0, 1000, 0, 0, 0, 0, 0, 4182, 0, 0.9, 1, 1, 1, 
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
		1, 1, 0, 0, 0, 0, 0, 200, 50000, 5000000, 0, 0.0542461307, 0.032, 0, 32, 16, 
		8, 2000000, 0, 0.9, 0, 573.376125, 0, 100, 0, 0, 0, 0, 0, 4182, 0, 0.9, 
		288.15, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 101325, 
		288.15, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 101325, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 100, 0, 0.612141482, 0.032, 1.58985935, 
		0, 0.5, 0, 0, 0, 100, 288.15, 101325, 0, 0, 0.674779514, 0, 0.5, 0, 10, 0, 
		0, 100, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
unkRInit= new double[430];
dcopy(430,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=6;
unkI= new int[6] ;
static int tmp_unkIInit[6]={ 0, 2, 0, 8, 1, 22 } ;
unkIInit= new int[6];
icopy(6,unkIInit,tmp_unkIInit);


n_cteI=10;
static int tmp_cteIInit[10]={ 2, 4, 1, 1, 4, 4, 2, 2, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=18;
static std::string tmp_cteSInit[18]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", "m/s", 
		"m/s^2", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 73;
n_neld= 6;
m_numBoxes= 5;
m_nNonLinearBoxes= 5;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::initInternalModels()
{
}

int DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__cp(double fluid[])
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


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi5;
	int _vi6;
	double _vr2;

	_vr2 = 0. ;
	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[4]) ) {
	_vi6 = setofElem(&typ[4], _vi5) ;
	_vr2 += _div( fluid[_vi6-1] , Chem_M[_vi5-1],"Chem_M[_vi5]") ;
	_vi5 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__rho(double fluid[])
{
	// Local variables:
	double Chem_rho[16] = { 1200,1477,1450,1560,1500,809,422,73,1008,783,874,920,749,950,1000,786 };
	int _vi7;
	int _vi8;
	double _vr3;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",233,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr3 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[3]) ) {
	_vi8 = setofElem(&typ[3], _vi7) ;
	_vr3 += Chem_rho[_vi7-1] * fluid[_vi8-1] ;
	_vi7 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__visc(double fluid[])
{
	// Local variables:
	double Chem_visc[16] = { 0.00019,0.000423,0.00127,0.001,7.9e-05,0.00021,2e-05,2e-05,0.00097,0.000754,0.0004,0.0028,0.0045,0.0045,0.001,0.002 };
	int _vi10;
	int _vi9;
	double _vr4;

	if(!(1 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",273,".","Liquid == LPRES.State(fluid)","%s","ONLY LIQUIDS CAN BE USED IN THIS FUNCTION!");

	_vr4 = 0. ;
	_vi9 = 1 ;
	while ( _vi9 <= setofSize(&typ[3]) ) {
	_vi10 = setofElem(&typ[3], _vi9) ;
	_vr4 += Chem_visc[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__ISA_Pressure(const double & z)
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
	int _vi11;

	h = LPRES__Geopotential_Altitude(z) ;
	_vi11 = 1 ;
	while ( _vi11 <= 7 ) {
	if( h > h_max[_vi11-1] ) {
	if( b[_vi11-1] ) {
	p_0 = p_0 * exp(_div( -9.80665 * (h_max[_vi11-1] - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_0 = p_0 * _pow( (_div( (T_0 + a[_vi11-1] * (h_max[_vi11-1] - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[_vi11-1] * 287./1000.),"a[_vi11] * 287 / 1000")),"((T_0 + a[_vi11] * (h_max[_vi11] - h_0) / 1000) / T_0)**(-9.80665 / (a[_vi11] * 287 / 1000))" ) ;
	}
	T_0 = T_0 + a[_vi11-1] * (h_max[_vi11-1] - h_0)/1000. ;
	h_0 = h_max[_vi11-1] ;
	j = _vi11 + 1 ;
	}
	_vi11 += 1 ;
	}
	if( b[j-1] ) {
	p_amb = p_0 * exp(_div( -9.80665 * (h - h_0) , (T_0 * 287.),"T_0 * 287")) ;
	}
	else {
	p_amb = p_0 * _pow( (_div( (T_0 + a[j-1] * (h - h_0)/1000.) , T_0,"T_0")) , (_div( -9.80665 , (a[j-1] * 287./1000.),"a[j] * 287 / 1000")),"((T_0 + a[j] * (h - h_0) / 1000) / T_0)**(-9.80665 / (a[j] * 287 / 1000))" ) ;
	}
	return p_amb ;
}


void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::LPRES__Init_fluid(const int & fluid_name,double fluid[])
{
	int _vi12;
	int _vi13;

	_vi12 = 1 ;
	while ( _vi12 <= setofSize(&typ[0]) ) {
	_vi13 = setofElem(&typ[0], _vi12) ;
	fluid[_vi12-1] = 0. ;
	_vi12 += 1 ;
	}
	fluid[fluid_name-1] = 1. ;
	return  ;
}


double DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


/* Copy special unkR[] items to dyn[] vector */

void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(Inlet_1.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[242]) ;
  // init(Inlet_2.Inlet,100)
	LPRES__Init_fluid(unkI[4], &unkR[274]) ;
  // init(CombCha_1_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1_1.","CombCha_1_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[180]) ;
	unkI[0] = 1 ;
	unkR[218] = 1. ;
	unkR[19] = unkR[20] ;
	if( unkI[1] == 1 ) {
	unkR[8] = 0.001 ;
	}
	else {
	unkR[8] = 100. ;
	}
	unkR[213] = _div( 1. , unkR[215],"CombCha_1_1.mfr_ch") ;
	unkR[214] = _div( 1. , (unkR[215] * unkR[17]),"CombCha_1_1.mfr_ch * CombCha_1_1.T_ch") ;
  // init(LH2_circuit_1.Inlet,100)
	LPRES__Init_fluid(unkI[5], &unkR[31]) ;
  // init(GasGen_1.GasGen,100)
	LPRES__Init_fluid(27, &unkR[63]) ;
	dyn[4] = unkR[231] ;
	unkI[2] = 1 ;
	unkR[393] = _div( 1. , unkR[395],"GasGen_1.mfr_ch") ;
	unkR[394] = _div( 1. , (unkR[395] * unkR[229]),"GasGen_1.mfr_ch * GasGen_1.T_ch") ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-61]  GasGen_1.W_O = GasGen_1.OF * GasGen_1.W_F
unkR[235] = unkR[223] * dyn[4] ;
//[E-62]  GasGen_1.W_F_st = GasGen_1.W_F / GasGen_1.phi
unkR[232] = _div( dyn[4] , unkR[396],"GasGen_1.phi") ;
//[E-63]  GasGen_1.fluid_P[LOX] =  IF[47] (GasGen_1.Combustion) (GasGen_1.fluid_O[LOX] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LOX] * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[362] = _div( (unkR[333] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[304] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[362] = _div( (unkR[333] * unkR[235] + unkR[304] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-64]  GasGen_1.fluid_P[NTO] =  IF[48] (GasGen_1.Combustion) (GasGen_1.fluid_O[NTO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[NTO] * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[363] = _div( (unkR[334] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[305] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[363] = _div( (unkR[334] * unkR[235] + unkR[305] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-65]  GasGen_1.fluid_P[H2O2] =  IF[49] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O2] * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[364] = _div( (unkR[335] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[306] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[364] = _div( (unkR[335] * unkR[235] + unkR[306] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-66]  GasGen_1.fluid_P[HNO3] =  IF[50] (GasGen_1.Combustion) (GasGen_1.fluid_O[HNO3] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[HNO3] * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[365] = _div( (unkR[336] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[307] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[365] = _div( (unkR[336] * unkR[235] + unkR[307] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-67]  GasGen_1.fluid_P[LF2] =  IF[51] (GasGen_1.Combustion) (GasGen_1.fluid_O[LF2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LF2] * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[366] = _div( (unkR[337] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[308] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[366] = _div( (unkR[337] * unkR[235] + unkR[308] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-68]  GasGen_1.fluid_P[RP_1] =  IF[52] (GasGen_1.Combustion) (GasGen_1.fluid_O[RP_1] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[RP_1] * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[367] = _div( (unkR[338] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[309] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[367] = _div( (unkR[338] * unkR[235] + unkR[309] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-69]  GasGen_1.fluid_P[LCH4] =  IF[53] (GasGen_1.Combustion) (GasGen_1.fluid_O[LCH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LCH4] * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[368] = _div( (unkR[339] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[310] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[368] = _div( (unkR[339] * unkR[235] + unkR[310] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-70]  GasGen_1.fluid_P[LH2] =  IF[54] (GasGen_1.Combustion) (GasGen_1.fluid_O[LH2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LH2] * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[369] = _div( (unkR[340] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[311] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[369] = _div( (unkR[340] * unkR[235] + unkR[311] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-71]  GasGen_1.fluid_P[N2H4] =  IF[55] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2H4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2H4] * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[370] = _div( (unkR[341] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[312] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[370] = _div( (unkR[341] * unkR[235] + unkR[312] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-72]  GasGen_1.fluid_P[UDMH] =  IF[56] (GasGen_1.Combustion) (GasGen_1.fluid_O[UDMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[UDMH] * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[371] = _div( (unkR[342] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[313] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[371] = _div( (unkR[342] * unkR[235] + unkR[313] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-73]  GasGen_1.fluid_P[MMH] =  IF[57] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH] * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[372] = _div( (unkR[343] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[314] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[372] = _div( (unkR[343] * unkR[235] + unkR[314] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-74]  GasGen_1.fluid_P[JP_10] =  IF[58] (GasGen_1.Combustion) (GasGen_1.fluid_O[JP_10] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[JP_10] * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[373] = _div( (unkR[344] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[315] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[373] = _div( (unkR[344] * unkR[235] + unkR[315] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-75]  GasGen_1.fluid_P[Kerox] =  IF[59] (GasGen_1.Combustion) (GasGen_1.fluid_O[Kerox] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Kerox] * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[374] = _div( (unkR[345] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[316] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[374] = _div( (unkR[345] * unkR[235] + unkR[316] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-76]  GasGen_1.fluid_P[Oil] =  IF[60] (GasGen_1.Combustion) (GasGen_1.fluid_O[Oil] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Oil] * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[375] = _div( (unkR[346] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[317] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[375] = _div( (unkR[346] * unkR[235] + unkR[317] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-77]  GasGen_1.fluid_P[H2O] =  IF[61] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O] * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[376] = _div( (unkR[347] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[318] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[376] = _div( (unkR[347] * unkR[235] + unkR[318] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-78]  GasGen_1.fluid_P[IPA] =  IF[62] (GasGen_1.Combustion) (GasGen_1.fluid_O[IPA] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[IPA] * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[377] = _div( (unkR[348] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[319] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[377] = _div( (unkR[348] * unkR[235] + unkR[319] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-79]  GasGen_1.fluid_P[Air] =  IF[63] (GasGen_1.Combustion) (GasGen_1.fluid_O[Air] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Air] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Air] * GasGen_1.W_O + GasGen_1.fluid_F[Air] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[378] = _div( (unkR[349] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[320] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[378] = _div( (unkR[349] * unkR[235] + unkR[320] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-80]  GasGen_1.fluid_P[Ar] =  IF[64] (GasGen_1.Combustion) (GasGen_1.fluid_O[Ar] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Ar] * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[379] = _div( (unkR[350] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[321] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[379] = _div( (unkR[350] * unkR[235] + unkR[321] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-81]  GasGen_1.fluid_P[CH4] =  IF[65] (GasGen_1.Combustion) (GasGen_1.fluid_O[CH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CH4] * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[380] = _div( (unkR[351] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[322] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[380] = _div( (unkR[351] * unkR[235] + unkR[322] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-82]  GasGen_1.fluid_P[CO] =  IF[66] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO] * GasGen_1.W_O + GasGen_1.fluid_F[CO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[381] = _div( (unkR[352] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[323] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[381] = _div( (unkR[352] * unkR[235] + unkR[323] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-83]  GasGen_1.fluid_P[CO2] =  IF[67] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO2] * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[382] = _div( (unkR[353] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[324] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[382] = _div( (unkR[353] * unkR[235] + unkR[324] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-84]  GasGen_1.fluid_P[H2] =  IF[68] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2] * GasGen_1.W_O + GasGen_1.fluid_F[H2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[383] = _div( (unkR[354] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[325] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[383] = _div( (unkR[354] * unkR[235] + unkR[325] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-85]  GasGen_1.fluid_P[He] =  IF[69] (GasGen_1.Combustion) (GasGen_1.fluid_O[He] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[He] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[He] * GasGen_1.W_O + GasGen_1.fluid_F[He] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[384] = _div( (unkR[355] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[326] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[384] = _div( (unkR[355] * unkR[235] + unkR[326] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-86]  GasGen_1.fluid_P[N2] =  IF[70] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2] * GasGen_1.W_O + GasGen_1.fluid_F[N2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[385] = _div( (unkR[356] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[327] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[385] = _div( (unkR[356] * unkR[235] + unkR[327] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-87]  GasGen_1.fluid_P[O2] =  IF[71] (GasGen_1.Combustion) (GasGen_1.fluid_O[O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[O2] * GasGen_1.W_O + GasGen_1.fluid_F[O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[386] = _div( (unkR[357] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[328] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[386] = _div( (unkR[357] * unkR[235] + unkR[328] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-88]  GasGen_1.fluid_P[MMH_vapour] =  IF[72] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH_vapour] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH_vapour] * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[2] ) 
{
unkR[387] = _div( (unkR[358] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[329] * MATH__max(unkR[396] - 1., 0.) * unkR[232]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[387] = _div( (unkR[358] * unkR[235] + unkR[329] * dyn[4]) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-89]  GasGen_1.fluid_P[Comb_prod] =  IF[73] (GasGen_1.Combustion) (GasGen_1.fluid_O[Comb_prod] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Comb_prod] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st + (1 - MATH.max(1 - GasGen_1.phi, 0)) * (GasGen_1.W_O + GasGen_1.W_F_st)) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE 0
if( unkI[2] ) 
{
unkR[388] = _div( (unkR[359] * MATH__max(1. - unkR[396], 0.) * unkR[235] + unkR[330] * MATH__max(unkR[396] - 1., 0.) * unkR[232] + (1. - MATH__max(1. - unkR[396], 0.)) * (unkR[235] + unkR[232])) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[388] = 0. ;
}
//[E-90]  Injector_O.f_in.pt = GasGen_1.rho_trans * LPRES.R(GasGen_1.fluid_P) * GasGen_1.g.Tt
res[4] = evalNormResidueInternal(4,unkR[391],dyn[2] * LPRES__R(&unkR[362]) * dyn[3]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate& m= *DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn1, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-130]  CombCha_1_1.f_O.fluid[LOX] = GasGen_1.fluid_P[LOX] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[63] = _div( unkR[362] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-131]  CombCha_1_1.f_O.fluid[NTO] = GasGen_1.fluid_P[NTO] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[64] = _div( unkR[363] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-132]  CombCha_1_1.f_O.fluid[H2O2] = GasGen_1.fluid_P[H2O2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[65] = _div( unkR[364] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-133]  CombCha_1_1.f_O.fluid[HNO3] = GasGen_1.fluid_P[HNO3] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[66] = _div( unkR[365] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-134]  CombCha_1_1.f_O.fluid[LF2] = GasGen_1.fluid_P[LF2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[67] = _div( unkR[366] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-135]  CombCha_1_1.f_O.fluid[RP_1] = GasGen_1.fluid_P[RP_1] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[68] = _div( unkR[367] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-136]  CombCha_1_1.f_O.fluid[LCH4] = GasGen_1.fluid_P[LCH4] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[69] = _div( unkR[368] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-137]  CombCha_1_1.f_O.fluid[LH2] = GasGen_1.fluid_P[LH2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[70] = _div( unkR[369] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-138]  CombCha_1_1.f_O.fluid[N2H4] = GasGen_1.fluid_P[N2H4] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[71] = _div( unkR[370] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-139]  CombCha_1_1.f_O.fluid[UDMH] = GasGen_1.fluid_P[UDMH] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[72] = _div( unkR[371] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-140]  CombCha_1_1.f_O.fluid[MMH] = GasGen_1.fluid_P[MMH] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[73] = _div( unkR[372] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-141]  CombCha_1_1.f_O.fluid[JP_10] = GasGen_1.fluid_P[JP_10] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[74] = _div( unkR[373] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-142]  CombCha_1_1.f_O.fluid[Kerox] = GasGen_1.fluid_P[Kerox] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[75] = _div( unkR[374] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-143]  CombCha_1_1.f_O.fluid[Oil] = GasGen_1.fluid_P[Oil] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[76] = _div( unkR[375] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-144]  CombCha_1_1.f_O.fluid[H2O] = GasGen_1.fluid_P[H2O] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[77] = _div( unkR[376] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-145]  CombCha_1_1.f_O.fluid[IPA] = GasGen_1.fluid_P[IPA] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[78] = _div( unkR[377] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-146]  CombCha_1_1.f_O.fluid[Air] = GasGen_1.fluid_P[Air] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[79] = _div( unkR[378] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-147]  CombCha_1_1.f_O.fluid[Ar] = GasGen_1.fluid_P[Ar] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[80] = _div( unkR[379] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-148]  CombCha_1_1.f_O.fluid[CH4] = GasGen_1.fluid_P[CH4] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[81] = _div( unkR[380] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-149]  CombCha_1_1.f_O.fluid[CO] = GasGen_1.fluid_P[CO] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[82] = _div( unkR[381] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-150]  CombCha_1_1.f_O.fluid[CO2] = GasGen_1.fluid_P[CO2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[83] = _div( unkR[382] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-151]  CombCha_1_1.f_O.fluid[H2] = GasGen_1.fluid_P[H2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[84] = _div( unkR[383] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-152]  CombCha_1_1.f_O.fluid[He] = GasGen_1.fluid_P[He] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[85] = _div( unkR[384] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-153]  CombCha_1_1.f_O.fluid[N2] = GasGen_1.fluid_P[N2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[86] = _div( unkR[385] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-154]  CombCha_1_1.f_O.fluid[O2] = GasGen_1.fluid_P[O2] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[87] = _div( unkR[386] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-155]  CombCha_1_1.f_O.fluid[MMH_vapour] = GasGen_1.fluid_P[MMH_vapour] * (GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W
unkR[88] = _div( unkR[387] * (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-156]  CombCha_1_1.f_O.fluid[Comb_prod] = (GasGen_1.fluid_P[Comb_prod] * (GasGen_1.W_O + GasGen_1.W_F) + GasGen_1.W_IO + GasGen_1.W_IF) / CombCha_1_1.f_O.W
unkR[89] = _div( (unkR[388] * (unkR[235] + dyn[4]) + unkR[234] + unkR[233]) , dyn[5],"CombCha_1_1.f_O.W") ;
//[E-157]  Injector_O.PR_sl =  IF[1] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1_1.f_O.fluid) / (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[415] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(CombCha_1_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1_1.f_O.fluid) / (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[415] = 0. ;
}
//[E-158]  Injector_O.p_out_ch =  IF[2] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) Injector_O.f_in.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[418] = _div( unkR[391] , unkR[415],"Injector_O.PR_sl") ;
}
else 
{
unkR[418] = 0. ;
}
//[E-159]  CombCha_1_1.W_O = CombCha_1_1.f_O.W * (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[24] = dyn[5] * (1. - unkR[89]) ;
//[E-160]  CombCha_1_1.fluid_O[LOX] = CombCha_1_1.f_O.fluid[LOX] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-161]  CombCha_1_1.fluid_O[NTO] = CombCha_1_1.f_O.fluid[NTO] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-162]  CombCha_1_1.fluid_O[H2O2] = CombCha_1_1.f_O.fluid[H2O2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-163]  CombCha_1_1.fluid_O[HNO3] = CombCha_1_1.f_O.fluid[HNO3] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-164]  CombCha_1_1.fluid_O[LF2] = CombCha_1_1.f_O.fluid[LF2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-165]  CombCha_1_1.fluid_O[RP_1] = CombCha_1_1.f_O.fluid[RP_1] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-166]  CombCha_1_1.fluid_O[LCH4] = CombCha_1_1.f_O.fluid[LCH4] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-167]  CombCha_1_1.fluid_O[LH2] = CombCha_1_1.f_O.fluid[LH2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-168]  CombCha_1_1.fluid_O[N2H4] = CombCha_1_1.f_O.fluid[N2H4] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-169]  CombCha_1_1.fluid_O[UDMH] = CombCha_1_1.f_O.fluid[UDMH] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-170]  CombCha_1_1.fluid_O[MMH] = CombCha_1_1.f_O.fluid[MMH] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-171]  CombCha_1_1.fluid_O[JP_10] = CombCha_1_1.f_O.fluid[JP_10] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-172]  CombCha_1_1.fluid_O[Kerox] = CombCha_1_1.f_O.fluid[Kerox] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-173]  CombCha_1_1.fluid_O[Oil] = CombCha_1_1.f_O.fluid[Oil] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-174]  CombCha_1_1.fluid_O[H2O] = CombCha_1_1.f_O.fluid[H2O] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-175]  CombCha_1_1.fluid_O[IPA] = CombCha_1_1.f_O.fluid[IPA] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-176]  CombCha_1_1.fluid_O[Air] = CombCha_1_1.f_O.fluid[Air] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-177]  CombCha_1_1.fluid_O[Ar] = CombCha_1_1.f_O.fluid[Ar] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-178]  CombCha_1_1.fluid_O[CH4] = CombCha_1_1.f_O.fluid[CH4] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-179]  CombCha_1_1.fluid_O[CO] = CombCha_1_1.f_O.fluid[CO] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-180]  CombCha_1_1.fluid_O[CO2] = CombCha_1_1.f_O.fluid[CO2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-181]  CombCha_1_1.fluid_O[H2] = CombCha_1_1.f_O.fluid[H2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-182]  CombCha_1_1.fluid_O[He] = CombCha_1_1.f_O.fluid[He] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-183]  CombCha_1_1.fluid_O[N2] = CombCha_1_1.f_O.fluid[N2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-184]  CombCha_1_1.fluid_O[O2] = CombCha_1_1.f_O.fluid[O2] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-185]  CombCha_1_1.fluid_O[MMH_vapour] = CombCha_1_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - CombCha_1_1.f_O.fluid[Comb_prod]") ;
//[E-186]  Injector_F_1.PR = LH2_circuit_1.pt / CombCha_1_1.f_O.p_c
unkR[61] = _div( unkR[407] , dyn[6],"Injector_F_1.PR") ;
//[E-187]  Injector_O.PR = Injector_O.f_in.pt / CombCha_1_1.f_O.p_c
unkR[414] = _div( unkR[391] , unkR[61],"CombCha_1_1.f_O.p_c") ;
//[E-188]  Injector_O.M_out =  ZONE[1] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1)) ZONE[1] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[413] = _sqrt(_div( 2. * (_pow( unkR[414] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(CombCha_1_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(CombCha_1_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[0]==1)
	unkR[413] = 1. ;
else unkR[413] = 0. ;
//[E-189]  CombCha_1_1.f_O.p =  IF[4] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) MATH.max(CombCha_1_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1_1.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[61], unkR[418]) ;
}
else 
{
unkR[92] = unkR[61] ;
}
//[E-190]  CombCha_1_1.f_O.W =  IF (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1_1.f_O.fluid) * Injector_O.f_in.pt / sqrt(GasGen_1.g.Tt * LPRES.R(CombCha_1_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1))) / Injector_O.M_out) ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1_1.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
res[5] = evalNormResidueInternal(5,dyn[5],_div( _div( unkR[410] * LPRES__FGAMMA(&unkR[63]) * unkR[391] , _sqrt(dyn[3] * LPRES__R(&unkR[63]),"GasGen_1.g.Tt * LPRES.R(CombCha_1_1.f_O.fluid)"),"sqrt(GasGen_1.g.Tt * LPRES.R(CombCha_1_1.f_O.fluid))") , (_div( _pow( (_div( (2 + (LPRES__gamma(&unkR[63]) - 1) * _pow( unkR[413] , 2,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1),"LPRES.gamma(CombCha_1_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1) , (2 * (LPRES__gamma(&unkR[63]) - 1)),"2 * (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1)))" ) , unkR[413],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1))) / Injector_O.M_out"));
}
else 
{
res[5] = evalNormResidueInternal(5,dyn[5],unkR[410] * unkR[412] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[391] - unkR[92]),"2 * LPRES.rho(CombCha_1_1.f_O.fluid) * (Injector_O.f_in.pt - CombCha_1_1.f_O.p)"));
}
//[E-191]  CombCha_1_1.f_F.p =  IF[41] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) MATH.max(CombCha_1_1.f_O.p_c, Injector_F_1.p_out_ch)	 ELSE CombCha_1_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[408]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-192]  Injector_F_1.M_out =  ZONE[3] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[402] = _sqrt(_div( 2. * (_pow( dyn[6] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1_1.f_F.fluid)")),"(Injector_F_1.PR)**((LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1_1.f_F.fluid) - 1"),"2 * (Injector_F_1.PR ** ((LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[402] = 1. ;
else unkR[402] = 0. ;
//[E-193]  CombCha_1_1.f_F.W =  IF[43] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) Injector_F_1.A * LPRES.FGAMMA(CombCha_1_1.f_F.fluid) * LH2_circuit_1.pt / sqrt(LH2_circuit_1.Tt * LPRES.R(CombCha_1_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(CombCha_1_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1))) / Injector_F_1.M_out)	 ELSE Injector_F_1.A * Injector_F_1.C_D * sqrt(2 * LPRES.rho(CombCha_1_1.f_F.fluid) * (LH2_circuit_1.pt - CombCha_1_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[399] * LPRES__FGAMMA(&unkR[31]) * unkR[407] , _sqrt(unkR[406] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(CombCha_1_1.f_F.fluid)"),"sqrt(LH2_circuit_1.Tt * LPRES.R(CombCha_1_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[402] , 2.,"(Injector_F_1.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(CombCha_1_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1)))" ) , unkR[402],"Injector_F_1.M_out")),"((2 + (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) * Injector_F_1.M_out ** 2) / (LPRES.gamma(CombCha_1_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1))) / Injector_F_1.M_out") ;
}
else 
{
unkR[30] = unkR[399] * unkR[401] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[407] - unkR[60]),"2 * LPRES.rho(CombCha_1_1.f_F.fluid) * (LH2_circuit_1.pt - CombCha_1_1.f_F.p)") ;
}
//[E-194]  CombCha_1_1.W_F = CombCha_1_1.f_F.W * (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-195]  CombCha_1_1.OF = CombCha_1_1.W_O / CombCha_1_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1_1.W_F") ;
//[E-196]  CombCha_1_1.phi = CombCha_1_1.OF_st / CombCha_1_1.OF
unkR[218] = _div( unkR[10] , unkR[9],"CombCha_1_1.OF") ;
//[E-197]  CombCha_1_1.W_F_st = CombCha_1_1.W_F / CombCha_1_1.phi
unkR[21] = _div( unkR[19] , unkR[218],"CombCha_1_1.phi") ;
//[E-198]  CombCha_1_1.fluid_P[LOX] =  IF[9] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[LOX] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LOX] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[LOX] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LOX] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[93] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[24] + unkR[93] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-199]  CombCha_1_1.fluid_P[NTO] =  IF[10] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[NTO] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[NTO] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[NTO] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[NTO] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-200]  CombCha_1_1.fluid_P[H2O2] =  IF[11] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[H2O2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[H2O2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-201]  CombCha_1_1.fluid_P[HNO3] =  IF[12] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[HNO3] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[HNO3] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-202]  CombCha_1_1.fluid_P[LF2] =  IF[13] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[LF2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LF2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[LF2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LF2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-203]  CombCha_1_1.fluid_P[RP_1] =  IF[14] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[RP_1] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[RP_1] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-204]  CombCha_1_1.fluid_P[LCH4] =  IF[15] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LCH4] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LCH4] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-205]  CombCha_1_1.fluid_P[LH2] =  IF[16] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[LH2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LH2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[LH2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[LH2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-206]  CombCha_1_1.fluid_P[N2H4] =  IF[17] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[N2H4] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[N2H4] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-207]  CombCha_1_1.fluid_P[UDMH] =  IF[18] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[UDMH] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[UDMH] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-208]  CombCha_1_1.fluid_P[MMH] =  IF[19] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[MMH] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[MMH] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[MMH] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[MMH] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-209]  CombCha_1_1.fluid_P[JP_10] =  IF[20] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[JP_10] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[JP_10] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-210]  CombCha_1_1.fluid_P[Kerox] =  IF[21] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Kerox] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Kerox] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-211]  CombCha_1_1.fluid_P[Oil] =  IF[22] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[Oil] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Oil] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[Oil] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Oil] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-212]  CombCha_1_1.fluid_P[H2O] =  IF[23] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[H2O] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[H2O] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[H2O] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[H2O] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-213]  CombCha_1_1.fluid_P[IPA] =  IF[24] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[IPA] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[IPA] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[IPA] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[IPA] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-214]  CombCha_1_1.fluid_P[Air] =  IF[25] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[Air] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Air] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[Air] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Air] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-215]  CombCha_1_1.fluid_P[Ar] =  IF[26] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[Ar] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Ar] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[Ar] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Ar] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-216]  CombCha_1_1.fluid_P[CH4] =  IF[27] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[CH4] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[CH4] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[CH4] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[CH4] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-217]  CombCha_1_1.fluid_P[CO] =  IF[28] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[CO] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[CO] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[CO] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[CO] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-218]  CombCha_1_1.fluid_P[CO2] =  IF[29] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[CO2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[CO2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[CO2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[CO2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-219]  CombCha_1_1.fluid_P[H2] =  IF[30] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[H2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[H2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[H2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[H2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-220]  CombCha_1_1.fluid_P[He] =  IF[31] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[He] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[He] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[He] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[He] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-221]  CombCha_1_1.fluid_P[N2] =  IF[32] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[N2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[N2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[N2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[N2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-222]  CombCha_1_1.fluid_P[O2] =  IF[33] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[O2] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[O2] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[O2] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[O2] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-223]  CombCha_1_1.fluid_P[MMH_vapour] =  IF[34] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE (CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.W_O + CombCha_1_1.fluid_F[MMH_vapour] * CombCha_1_1.W_F) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[218] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
//[E-224]  CombCha_1_1.fluid_P[Comb_prod] =  IF[35] (CombCha_1_1.Combustion) (CombCha_1_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1_1.phi, 0) * CombCha_1_1.W_O + CombCha_1_1.fluid_F[Comb_prod] * MATH.max(CombCha_1_1.phi - 1, 0) * CombCha_1_1.W_F_st + (1 - MATH.max(1 - CombCha_1_1.phi, 0)) * (CombCha_1_1.W_O + CombCha_1_1.W_F_st)) / (CombCha_1_1.W_O + CombCha_1_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[218], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[218] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[218], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-225]  CombCha_1_1.f_O.p_c = CombCha_1_1.rho_trans * LPRES.R(CombCha_1_1.fluid_P) * CombCha_1_1.g.Tt
res[6] = evalNormResidueInternal(6,unkR[61],dyn[0] * LPRES__R(&unkR[151]) * dyn[1]);
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate& m= *DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[2];
	s_current= this;
	dcopy(10, boxDyn, dyn) ;
	dcopy(4, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn2, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-235]  ThrustMonitor.g.fluid[LOX] = CombCha_1_1.fluid_P[LOX] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[180] = _div( unkR[151] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-236]  ThrustMonitor.g.fluid[NTO] = CombCha_1_1.fluid_P[NTO] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-237]  ThrustMonitor.g.fluid[H2O2] = CombCha_1_1.fluid_P[H2O2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-238]  ThrustMonitor.g.fluid[HNO3] = CombCha_1_1.fluid_P[HNO3] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-239]  ThrustMonitor.g.fluid[LF2] = CombCha_1_1.fluid_P[LF2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-240]  ThrustMonitor.g.fluid[RP_1] = CombCha_1_1.fluid_P[RP_1] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-241]  ThrustMonitor.g.fluid[LCH4] = CombCha_1_1.fluid_P[LCH4] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-242]  ThrustMonitor.g.fluid[LH2] = CombCha_1_1.fluid_P[LH2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-243]  ThrustMonitor.g.fluid[N2H4] = CombCha_1_1.fluid_P[N2H4] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-244]  ThrustMonitor.g.fluid[UDMH] = CombCha_1_1.fluid_P[UDMH] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-245]  ThrustMonitor.g.fluid[MMH] = CombCha_1_1.fluid_P[MMH] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-246]  ThrustMonitor.g.fluid[JP_10] = CombCha_1_1.fluid_P[JP_10] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-247]  ThrustMonitor.g.fluid[Kerox] = CombCha_1_1.fluid_P[Kerox] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-248]  ThrustMonitor.g.fluid[Oil] = CombCha_1_1.fluid_P[Oil] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-249]  ThrustMonitor.g.fluid[H2O] = CombCha_1_1.fluid_P[H2O] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-250]  ThrustMonitor.g.fluid[IPA] = CombCha_1_1.fluid_P[IPA] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-251]  ThrustMonitor.g.fluid[Air] = CombCha_1_1.fluid_P[Air] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-252]  ThrustMonitor.g.fluid[Ar] = CombCha_1_1.fluid_P[Ar] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-253]  ThrustMonitor.g.fluid[CH4] = CombCha_1_1.fluid_P[CH4] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-254]  ThrustMonitor.g.fluid[CO] = CombCha_1_1.fluid_P[CO] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-255]  ThrustMonitor.g.fluid[CO2] = CombCha_1_1.fluid_P[CO2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-256]  ThrustMonitor.g.fluid[H2] = CombCha_1_1.fluid_P[H2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-257]  ThrustMonitor.g.fluid[He] = CombCha_1_1.fluid_P[He] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-258]  ThrustMonitor.g.fluid[N2] = CombCha_1_1.fluid_P[N2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-259]  ThrustMonitor.g.fluid[O2] = CombCha_1_1.fluid_P[O2] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-260]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1_1.fluid_P[MMH_vapour] * (CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-261]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1_1.fluid_P[Comb_prod] * (CombCha_1_1.W_O + CombCha_1_1.W_F) + CombCha_1_1.W_IO + CombCha_1_1.W_IF) / ThrustMonitor.g.W
unkR[206] = _div( (unkR[177] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[7],"ThrustMonitor.g.W") ;
//[E-262]  ThrustMonitor.g.W = CombCha_1_1.f_O.p_c * CombCha_1_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[7] = evalNormResidueInternal(7,dyn[7],_div( unkR[61] * unkR[3] , (_div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate& m= *DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[7],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[7]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn3, n, &dyn[7], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-264]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[8] = evalNormResidueInternal(8,_div( _div( dyn[7] * _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[8] * _pow( (1 + (LPRES__gamma(&unkR[180]) - 1)/2 * _pow( dyn[8] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[180]) + 1)/2 , (LPRES__gamma(&unkR[180]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate& m= *DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[8],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[8]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn4, n, &dyn[8], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Residues function for box 5*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fbox5(double *_time,double dyn[],double ldr[],double res[])
{
//[E-281]  ThrustMonitor.g.A_out / CombCha_1_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[9] = evalNormResidueInternal(9,_div( unkR[2] , unkR[3],"CombCha_1_1.A_th"),_div( LPRES__FGAMMA(&unkR[180]) , (_pow( (_div( dyn[9] , unkR[61],"CombCha_1_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[180]) * (1. - _pow( (_div( dyn[9] , unkR[61],"CombCha_1_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[180]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1_1.p_out_ch / CombCha_1_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 5 function from the non-linear solver */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn5(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate& m= *DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::s_current;
	m.printDbgInfoForModel(5,true);
	dcopy(*n,&m.boxDyn[9],x);
	m.fbox5(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[9]);
	m.printDbgInfoForModel(5,false);
}


/* Wrapper for the non-linear solver in box 5*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fhyb5(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fcn5, n, &dyn[9], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 5);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(4,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  Injector_O.f_in.pt = GasGen_1.TPL_d * MATH.min(Inlet_2.pt, Inlet_1.pt)
unkR[391] = unkR[227] * MATH__min(unkR[303], unkR[271]) ;
//[E-2]  LPRES.Init_fluid(Inlet_2.fluid, GasGen_1.f_O.fluid) %%% (OUT VAR)GasGen_1.f_O.fluid 
LPRES__Init_fluid(unkI[4], &unkR[274]);
//[E-3]  GasGen_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[334] = _div( unkR[275] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-4]  GasGen_1.phi = GasGen_1.OF_st / GasGen_1.OF
unkR[396] = _div( unkR[224] , unkR[223],"GasGen_1.OF") ;
//[E-5]  GasGen_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[333] = _div( unkR[274] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-6]  LPRES.Init_fluid(Inlet_1.fluid, GasGen_1.f_F.fluid) %%% (OUT VAR)GasGen_1.f_F.fluid 
LPRES__Init_fluid(unkI[3], &unkR[242]);
//[E-7]  GasGen_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[304] = _div( unkR[242] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-8]  GasGen_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[305] = _div( unkR[243] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-9]  GasGen_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[335] = _div( unkR[276] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-10]  GasGen_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[306] = _div( unkR[244] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-11]  GasGen_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[336] = _div( unkR[277] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-12]  GasGen_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[307] = _div( unkR[245] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-13]  GasGen_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[337] = _div( unkR[278] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-14]  GasGen_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[308] = _div( unkR[246] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-15]  GasGen_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[338] = _div( unkR[279] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-16]  GasGen_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[309] = _div( unkR[247] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-17]  GasGen_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[339] = _div( unkR[280] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-18]  GasGen_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[310] = _div( unkR[248] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-19]  GasGen_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[340] = _div( unkR[281] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-20]  GasGen_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[311] = _div( unkR[249] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-21]  GasGen_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[341] = _div( unkR[282] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-22]  GasGen_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[312] = _div( unkR[250] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-23]  GasGen_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[342] = _div( unkR[283] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-24]  GasGen_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[313] = _div( unkR[251] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-25]  GasGen_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[343] = _div( unkR[284] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-26]  GasGen_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[314] = _div( unkR[252] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-27]  GasGen_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[344] = _div( unkR[285] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-28]  GasGen_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[315] = _div( unkR[253] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-29]  GasGen_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[345] = _div( unkR[286] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-30]  GasGen_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[316] = _div( unkR[254] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-31]  GasGen_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[346] = _div( unkR[287] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-32]  GasGen_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[317] = _div( unkR[255] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-33]  GasGen_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[347] = _div( unkR[288] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-34]  GasGen_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[318] = _div( unkR[256] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-35]  GasGen_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[348] = _div( unkR[289] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-36]  GasGen_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[319] = _div( unkR[257] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-37]  GasGen_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[349] = _div( unkR[290] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-38]  GasGen_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[320] = _div( unkR[258] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-39]  GasGen_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[350] = _div( unkR[291] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-40]  GasGen_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[321] = _div( unkR[259] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-41]  GasGen_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[351] = _div( unkR[292] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-42]  GasGen_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[322] = _div( unkR[260] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-43]  GasGen_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[352] = _div( unkR[293] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-44]  GasGen_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[323] = _div( unkR[261] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-45]  GasGen_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[353] = _div( unkR[294] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-46]  GasGen_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[324] = _div( unkR[262] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-47]  GasGen_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[354] = _div( unkR[295] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-48]  GasGen_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[325] = _div( unkR[263] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-49]  GasGen_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[355] = _div( unkR[296] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-50]  GasGen_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[326] = _div( unkR[264] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-51]  GasGen_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[356] = _div( unkR[297] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-52]  GasGen_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[327] = _div( unkR[265] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-53]  GasGen_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[357] = _div( unkR[298] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-54]  GasGen_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[328] = _div( unkR[266] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-55]  GasGen_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[358] = _div( unkR[299] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-56]  GasGen_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[329] = _div( unkR[267] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-57]  GasGen_1.fluid_O[Comb_prod] = 0
unkR[359] = 0. ;
//[E-58]  GasGen_1.fluid_F[Comb_prod] = 0
unkR[330] = 0. ;
//[E-59]  GasGen_1.fluid_P[Comb_prod_M] =  IF[74] (GasGen_1.Combustion) GasGen_1.M_P	 ELSE 0
if( unkI[2] ) 
{
unkR[389] = unkR[222] ;
}
else 
{
unkR[389] = 0. ;
}
//[E-60]  GasGen_1.fluid_P[Comb_prod_cp] =  IF[75] (GasGen_1.Combustion) GasGen_1.cp_P	 ELSE 0
if( unkI[2] ) 
{
unkR[390] = unkR[237] ;
}
else 
{
unkR[390] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-91]  GasGen_1.f_O.W = GasGen_1.W_O / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[273] = _div( unkR[235] , (1. - unkR[300]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-92]  GasGen_1.W_IO = GasGen_1.f_O.W - GasGen_1.W_O
unkR[234] = unkR[273] - unkR[235] ;
//[E-93]  GasGen_1.f_F.W = GasGen_1.W_F / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[241] = _div( dyn[4] , (1. - unkR[268]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-94]  GasGen_1.W_IF = GasGen_1.f_F.W - GasGen_1.W_F
unkR[233] = unkR[241] - dyn[4] ;
//[E-95]  CombCha_1_1.f_O.fluid[Comb_prod_M] = GasGen_1.fluid_P[Comb_prod_M]
unkR[90] = unkR[389] ;
//[E-96]  CombCha_1_1.f_O.fluid[Comb_prod_cp] = GasGen_1.fluid_P[Comb_prod_cp]
unkR[91] = unkR[390] ;
//[E-97]  LPRES.Init_fluid(LH2_circuit_1.fluid, CombCha_1_1.f_F.fluid) %%% (OUT VAR)CombCha_1_1.f_F.fluid 
LPRES__Init_fluid(unkI[5], &unkR[31]);
//[E-98]  Injector_F_1.PR_sl =  IF[38] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1_1.f_F.fluid) / (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[403] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1_1.f_F.fluid) / (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[403] = 0. ;
}
//[E-99]  Injector_F_1.p_out_ch =  IF[39] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) LH2_circuit_1.pt / Injector_F_1.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[408] = _div( unkR[407] , unkR[403],"Injector_F_1.PR_sl") ;
}
else 
{
unkR[408] = 0. ;
}
//[E-100]  CombCha_1_1.fluid_F[LOX] = CombCha_1_1.f_F.fluid[LOX] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[93] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-101]  CombCha_1_1.fluid_F[NTO] = CombCha_1_1.f_F.fluid[NTO] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-102]  CombCha_1_1.fluid_F[H2O2] = CombCha_1_1.f_F.fluid[H2O2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-103]  CombCha_1_1.fluid_F[HNO3] = CombCha_1_1.f_F.fluid[HNO3] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-104]  CombCha_1_1.fluid_F[LF2] = CombCha_1_1.f_F.fluid[LF2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-105]  CombCha_1_1.fluid_F[RP_1] = CombCha_1_1.f_F.fluid[RP_1] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-106]  CombCha_1_1.fluid_F[LCH4] = CombCha_1_1.f_F.fluid[LCH4] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-107]  CombCha_1_1.fluid_F[LH2] = CombCha_1_1.f_F.fluid[LH2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-108]  CombCha_1_1.fluid_F[N2H4] = CombCha_1_1.f_F.fluid[N2H4] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-109]  CombCha_1_1.fluid_F[UDMH] = CombCha_1_1.f_F.fluid[UDMH] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-110]  CombCha_1_1.fluid_F[MMH] = CombCha_1_1.f_F.fluid[MMH] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-111]  CombCha_1_1.fluid_F[JP_10] = CombCha_1_1.f_F.fluid[JP_10] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-112]  CombCha_1_1.fluid_F[Kerox] = CombCha_1_1.f_F.fluid[Kerox] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-113]  CombCha_1_1.fluid_F[Oil] = CombCha_1_1.f_F.fluid[Oil] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-114]  CombCha_1_1.fluid_F[H2O] = CombCha_1_1.f_F.fluid[H2O] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-115]  CombCha_1_1.fluid_F[IPA] = CombCha_1_1.f_F.fluid[IPA] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-116]  CombCha_1_1.fluid_F[Air] = CombCha_1_1.f_F.fluid[Air] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-117]  CombCha_1_1.fluid_F[Ar] = CombCha_1_1.f_F.fluid[Ar] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-118]  CombCha_1_1.fluid_F[CH4] = CombCha_1_1.f_F.fluid[CH4] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-119]  CombCha_1_1.fluid_F[CO] = CombCha_1_1.f_F.fluid[CO] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-120]  CombCha_1_1.fluid_F[CO2] = CombCha_1_1.f_F.fluid[CO2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-121]  CombCha_1_1.fluid_F[H2] = CombCha_1_1.f_F.fluid[H2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-122]  CombCha_1_1.fluid_F[He] = CombCha_1_1.f_F.fluid[He] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-123]  CombCha_1_1.fluid_F[N2] = CombCha_1_1.f_F.fluid[N2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-124]  CombCha_1_1.fluid_F[O2] = CombCha_1_1.f_F.fluid[O2] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-125]  CombCha_1_1.fluid_F[MMH_vapour] = CombCha_1_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1_1.f_F.fluid[Comb_prod]") ;
//[E-126]  CombCha_1_1.fluid_O[Comb_prod] = 0
unkR[148] = 0. ;
//[E-127]  CombCha_1_1.fluid_F[Comb_prod] = 0
unkR[119] = 0. ;
//[E-128]  CombCha_1_1.fluid_P[Comb_prod_M] =  IF[36] (CombCha_1_1.Combustion) CombCha_1_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = unkR[5] ;
}
else 
{
unkR[178] = 0. ;
}
//[E-129]  CombCha_1_1.fluid_P[Comb_prod_cp] =  IF[37] (CombCha_1_1.Combustion) CombCha_1_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[26] ;
}
else 
{
unkR[179] = 0. ;
}

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,2,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-226]  Injector_O.A_sl =  IF[3] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) sqrt(GasGen_1.g.Tt * LPRES.R(CombCha_1_1.f_O.fluid)) * CombCha_1_1.f_O.W / (LPRES.FGAMMA(CombCha_1_1.f_O.fluid) * Injector_O.f_in.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[411] = _div( _sqrt(dyn[3] * LPRES__R(&unkR[63]),"GasGen_1.g.Tt * LPRES.R(CombCha_1_1.f_O.fluid)") * dyn[5] , (LPRES__FGAMMA(&unkR[63]) * unkR[391]),"LPRES.FGAMMA(CombCha_1_1.f_O.fluid) * Injector_O.f_in.pt") ;
}
else 
{
unkR[411] = 0. ;
}
//[E-227]  CombCha_1_1.f_O.T =  IF[5] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) GasGen_1.g.Tt / (1 + (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE GasGen_1.g.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[62] = _div( dyn[3] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[413] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = dyn[3] ;
}
//[E-228]  Injector_O.v_ideal =  IF[7] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1_1.f_O.fluid) * LPRES.R(CombCha_1_1.f_O.fluid) * CombCha_1_1.f_O.T)	 ELSE CombCha_1_1.f_O.W / (LPRES.rho(CombCha_1_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[419] = unkR[413] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[62],"LPRES.gamma(CombCha_1_1.f_O.fluid) * LPRES.R(CombCha_1_1.f_O.fluid) * CombCha_1_1.f_O.T") ;
}
else 
{
unkR[419] = _div( dyn[5] , (LPRES__rho(&unkR[63]) * unkR[410] * unkR[412]),"LPRES.rho(CombCha_1_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-229]  Injector_O.Re =  IF[8] (LPRES.State(CombCha_1_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1_1.f_O.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[416] = 0. ;
}
else 
{
unkR[416] = _div( LPRES__rho(&unkR[63]) * unkR[419] * unkR[412] * _sqrt(4. * unkR[410]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(CombCha_1_1.f_O.fluid)") ;
}
//[E-230]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[427] = LPRES__ISA_Pressure(unkR[423]) ;
//[E-231]  CombCha_1_1.W_IO = CombCha_1_1.f_O.W - CombCha_1_1.W_O
unkR[23] = dyn[5] - unkR[24] ;
//[E-232]  CombCha_1_1.W_IF = CombCha_1_1.f_F.W - CombCha_1_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-233]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1_1.fluid_P[Comb_prod_M]
unkR[207] = unkR[178] ;
//[E-234]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1_1.fluid_P[Comb_prod_cp]
unkR[208] = unkR[179] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-263]  ThrustMonitor.g.A_out = CombCha_1_1.AR * CombCha_1_1.A_th
unkR[2] = unkR[0] * unkR[3] ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-265]  ThrustMonitor.T_out = CombCha_1_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[424] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-266]  ThrustMonitor.p_out = CombCha_1_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[428] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[180]) - 1.)/2. * _pow( dyn[8] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[180]) - 1.) , LPRES__gamma(&unkR[180]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-267]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[429] = dyn[8] * _sqrt(LPRES__gamma(&unkR[180]) * LPRES__R(&unkR[180]) * unkR[424],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-268]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[425] = dyn[7] * unkR[429] + unkR[2] * (unkR[428] - unkR[427]) ;
//[E-269]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[426] = unkR[425] ;
//[E-270]  CombCha_1_1.rho_trans' = (CombCha_1_1.f_O.W + CombCha_1_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1_1.temp_ch / (CombCha_1_1.rho_ch * CombCha_1_1.k_1))
ldr[0] = _div( (dyn[5] + unkR[30] - dyn[7]) , (_div( unkR[220] , (unkR[219] * unkR[213]),"CombCha_1_1.rho_ch * CombCha_1_1.k_1")),"CombCha_1_1.temp_ch / (CombCha_1_1.rho_ch * CombCha_1_1.k_1)") ;
//[E-271]  CombCha_1_1.Q_comb_effective =  ZONE[2] (CombCha_1_1.Combustion) CombCha_1_1.Q_comb	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-272]  CombCha_1_1.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-273]  CombCha_1_1.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-274]  CombCha_1_1.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-275]  CombCha_1_1.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-276]  CombCha_1_1.cp_R = (CombCha_1_1.W_O * LPRES.cp(CombCha_1_1.fluid_O) + CombCha_1_1.W_F * LPRES.cp(CombCha_1_1.fluid_F)) / (CombCha_1_1.W_O + CombCha_1_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[122]) + unkR[19] * LPRES__cp(&unkR[93])) , (unkR[24] + unkR[19]),"CombCha_1_1.W_O + CombCha_1_1.W_F") ;
//[E-277]  CombCha_1_1.f_F.T =  IF[42] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) LH2_circuit_1.Tt / (1 + (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2)	 ELSE LH2_circuit_1.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[406] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[402] , 2.,"(Injector_F_1.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) / 2 * Injector_F_1.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[406] ;
}
//[E-278]  CombCha_1_1.T_in = (LPRES.cp(CombCha_1_1.fluid_O) * CombCha_1_1.f_O.T + CombCha_1_1.phi / CombCha_1_1.OF_st * LPRES.cp(CombCha_1_1.fluid_F) * CombCha_1_1.f_F.T) / ((1 + CombCha_1_1.phi / CombCha_1_1.OF_st) * CombCha_1_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[62] + _div( unkR[218] , unkR[10],"CombCha_1_1.OF_st") * LPRES__cp(&unkR[93]) * unkR[29]) , ((1. + _div( unkR[218] , unkR[10],"CombCha_1_1.OF_st")) * unkR[27]),"(1 + CombCha_1_1.phi / CombCha_1_1.OF_st) * CombCha_1_1.cp_R") ;
//[E-279]  CombCha_1_1.T_c = (CombCha_1_1.eta_d * CombCha_1_1.Q_comb_effective / ((1 + CombCha_1_1.OF) / MATH.min(CombCha_1_1.OF, CombCha_1_1.OF_st)) + CombCha_1_1.cp_R * (CombCha_1_1.T_in - 298.15)) / LPRES.cp(CombCha_1_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1_1.OF, CombCha_1_1.OF_st)")),"(1 + CombCha_1_1.OF) / MATH.min(CombCha_1_1.OF, CombCha_1_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha_1_1.fluid_P)") + 298.15 ;
//[E-280]  CombCha_1_1.g.Tt' = (((CombCha_1_1.W_O + CombCha_1_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1_1.fluid_P) * (CombCha_1_1.g.Tt - CombCha_1_1.T_c) + CombCha_1_1.W_IO / ThrustMonitor.g.W * CombCha_1_1.f_O.fluid[Comb_prod_cp] * (CombCha_1_1.g.Tt - CombCha_1_1.f_O.T) + CombCha_1_1.W_IF / ThrustMonitor.g.W * CombCha_1_1.f_F.fluid[Comb_prod_cp] * (CombCha_1_1.g.Tt - CombCha_1_1.f_F.T)) / -(CombCha_1_1.temp_ch / (ThrustMonitor.g.W * CombCha_1_1.rho_ch * CombCha_1_1.k_2 * CombCha_1_1.T_ch)) - CombCha_1_1.g.Tt * LPRES.cv(CombCha_1_1.fluid_P) * CombCha_1_1.rho_trans') / (CombCha_1_1.rho_trans * LPRES.cv(CombCha_1_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[7],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[7],"ThrustMonitor.g.W") * unkR[91] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[7],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[220] , (dyn[7] * unkR[219] * unkR[214] * unkR[17]),"ThrustMonitor.g.W * CombCha_1_1.rho_ch * CombCha_1_1.k_2 * CombCha_1_1.T_ch")),"-(CombCha_1_1.temp_ch / (ThrustMonitor.g.W * CombCha_1_1.rho_ch * CombCha_1_1.k_2 * CombCha_1_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[151]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[151])),"CombCha_1_1.rho_trans * LPRES.cv(CombCha_1_1.fluid_P)") ;

if( restartB || m_solveInternalBox[5] ) 
    fhyb5(dyn,ldr,TOLERANCE,1,50);
else fbox5(_time,dyn,ldr,res) ;

//[E-282]  CombCha_1_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[180]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1_1.g.Tt") , LPRES__FGAMMA(&unkR[180]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-283]  CombCha_1_1.i.Data[1] = CombCha_1_1.c_star
unkR[212] = unkR[25] ;
//[E-284]  CombCha_1_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[180]) , (9. * LPRES__gamma(&unkR[180]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-285]  CombCha_1_1.M_r = 1
unkR[8] = 1. ;
//[E-286]  CombCha_1_1.h.T = CombCha_1_1.g.Tt * (1 + CombCha_1_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[180]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[180]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1_1.M_r ** 2 / 2") ;
//[E-287]  CombCha_1_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1_1.h.T ** 0.6
unkR[221] = 1.184e-07 * _pow( LPRES__M(&unkR[180]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1_1.h.T)**(0.6)" ) ;
//[E-288]  CombCha_1_1.h.A = 0
unkR[209] = 0. ;
//[E-289]  CombCha_1_1.h_g = 0
unkR[211] = 0. ;
//[E-290]  CombCha_1_1.h.Q = 0
unkR[210] = 0. ;
//[E-291]  Injector_F_1.A_sl =  IF[40] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) sqrt(LH2_circuit_1.Tt * LPRES.R(CombCha_1_1.f_F.fluid)) * CombCha_1_1.f_F.W / (LPRES.FGAMMA(CombCha_1_1.f_F.fluid) * LH2_circuit_1.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[400] = _div( _sqrt(unkR[406] * LPRES__R(&unkR[31]),"LH2_circuit_1.Tt * LPRES.R(CombCha_1_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[407]),"LPRES.FGAMMA(CombCha_1_1.f_F.fluid) * LH2_circuit_1.pt") ;
}
else 
{
unkR[400] = 0. ;
}
//[E-292]  Injector_F_1.v_ideal =  IF[44] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) Injector_F_1.M_out * sqrt(LPRES.gamma(CombCha_1_1.f_F.fluid) * LPRES.R(CombCha_1_1.f_F.fluid) * CombCha_1_1.f_F.T)	 ELSE CombCha_1_1.f_F.W / (LPRES.rho(CombCha_1_1.f_F.fluid) * Injector_F_1.A * Injector_F_1.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[409] = unkR[402] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1_1.f_F.fluid) * LPRES.R(CombCha_1_1.f_F.fluid) * CombCha_1_1.f_F.T") ;
}
else 
{
unkR[409] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[399] * unkR[401]),"LPRES.rho(CombCha_1_1.f_F.fluid) * Injector_F_1.A * Injector_F_1.C_D") ;
}
//[E-293]  Injector_F_1.Re =  IF[45] (LPRES.State(CombCha_1_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1_1.f_F.fluid) * Injector_F_1.v_ideal * Injector_F_1.C_D * sqrt(4 * Injector_F_1.A / 3.14159265358979) / LPRES.visc(CombCha_1_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[404] = 0. ;
}
else 
{
unkR[404] = _div( LPRES__rho(&unkR[31]) * unkR[409] * unkR[401] * _sqrt(4. * unkR[399]/3.14159265358979,"4 * Injector_F_1.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1_1.f_F.fluid)") ;
}
//[E-294]  GasGen_1.rho_trans' = (GasGen_1.f_O.W + GasGen_1.f_F.W - CombCha_1_1.f_O.W) / (GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1))
ldr[2] = _div( (unkR[273] + unkR[241] - dyn[5]) , (_div( unkR[398] , (unkR[397] * unkR[393]),"GasGen_1.rho_ch * GasGen_1.k_1")),"GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1)") ;
//[E-295]  GasGen_1.Q_comb_effective =  IF[46] (GasGen_1.Combustion) GasGen_1.Q_comb	 ELSE 0
if( unkI[2] ) 
{
unkR[226] = unkR[225] ;
}
else 
{
unkR[226] = 0. ;
}
//[E-296]  GasGen_1.fluid_O[Comb_prod_M] = 0
unkR[360] = 0. ;
//[E-297]  GasGen_1.fluid_O[Comb_prod_cp] = 0
unkR[361] = 0. ;
//[E-298]  GasGen_1.fluid_F[Comb_prod_M] = 0
unkR[331] = 0. ;
//[E-299]  GasGen_1.fluid_F[Comb_prod_cp] = 0
unkR[332] = 0. ;
//[E-300]  GasGen_1.cp_R = (GasGen_1.W_O * LPRES.cp(GasGen_1.fluid_O) + GasGen_1.W_F * LPRES.cp(GasGen_1.fluid_F)) / (GasGen_1.W_O + GasGen_1.W_F)
unkR[238] = _div( (unkR[235] * LPRES__cp(&unkR[333]) + dyn[4] * LPRES__cp(&unkR[304])) , (unkR[235] + dyn[4]),"GasGen_1.W_O + GasGen_1.W_F") ;
//[E-301]  GasGen_1.T_in = (LPRES.cp(GasGen_1.fluid_O) * Inlet_2.Tt + GasGen_1.phi / GasGen_1.OF_st * LPRES.cp(GasGen_1.fluid_F) * Inlet_1.Tt) / ((1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R)
unkR[230] = _div( (LPRES__cp(&unkR[333]) * unkR[272] + _div( unkR[396] , unkR[224],"GasGen_1.OF_st") * LPRES__cp(&unkR[304]) * unkR[240]) , ((1. + _div( unkR[396] , unkR[224],"GasGen_1.OF_st")) * unkR[238]),"(1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R") ;
//[E-302]  GasGen_1.T_c = (GasGen_1.eta_d * GasGen_1.Q_comb_effective / ((1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)) + GasGen_1.cp_R * (GasGen_1.T_in - 298.15)) / LPRES.cp(GasGen_1.fluid_P) + 298.15
unkR[228] = _div( (_div( unkR[239] * unkR[226] , (_div( (1. + unkR[223]) , MATH__min(unkR[223], unkR[224]),"MATH.min(GasGen_1.OF, GasGen_1.OF_st)")),"(1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)") + unkR[238] * (unkR[230] - 298.15)) , LPRES__cp(&unkR[362]),"LPRES.cp(GasGen_1.fluid_P)") + 298.15 ;
//[E-303]  GasGen_1.g.Tt' = (((GasGen_1.W_O + GasGen_1.W_F) / CombCha_1_1.f_O.W * LPRES.cp(GasGen_1.fluid_P) * (GasGen_1.g.Tt - GasGen_1.T_c) + GasGen_1.W_IO / CombCha_1_1.f_O.W * GasGen_1.f_O.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - Inlet_2.Tt) + GasGen_1.W_IF / CombCha_1_1.f_O.W * GasGen_1.f_F.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - Inlet_1.Tt)) / -(GasGen_1.temp_ch / (CombCha_1_1.f_O.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch)) - GasGen_1.g.Tt * LPRES.cv(GasGen_1.fluid_P) * GasGen_1.rho_trans') / (GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P))
ldr[3] = _div( (_div( (_div( (unkR[235] + dyn[4]) , dyn[5],"CombCha_1_1.f_O.W") * LPRES__cp(&unkR[362]) * (dyn[3] - unkR[228]) + _div( unkR[234] , dyn[5],"CombCha_1_1.f_O.W") * unkR[302] * (dyn[3] - unkR[272]) + _div( unkR[233] , dyn[5],"CombCha_1_1.f_O.W") * unkR[270] * (dyn[3] - unkR[240])) , -(_div( unkR[398] , (dyn[5] * unkR[397] * unkR[394] * unkR[229]),"CombCha_1_1.f_O.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch")),"-(GasGen_1.temp_ch / (CombCha_1_1.f_O.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch))") - dyn[3] * LPRES__cv(&unkR[362]) * ldr[2]) , (dyn[2] * LPRES__cv(&unkR[362])),"GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P)") ;
//[E-304]  GasGen_1.c_star = sqrt(LPRES.R(CombCha_1_1.f_O.fluid) * GasGen_1.g.Tt) / LPRES.FGAMMA(CombCha_1_1.f_O.fluid)
unkR[236] = _div( _sqrt(LPRES__R(&unkR[63]) * dyn[3],"LPRES.R(CombCha_1_1.f_O.fluid) * GasGen_1.g.Tt") , LPRES__FGAMMA(&unkR[63]),"LPRES.FGAMMA(CombCha_1_1.f_O.fluid)") ;
//[E-305]  GasGen_1.i.Data[1] = GasGen_1.c_star
unkR[392] = unkR[236] ;
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
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[180])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[8] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[428] , unkR[427],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[8] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkR[333] * unkR[304] + unkR[334] * unkR[305] + unkR[335] * unkR[306] + unkR[336] * unkR[307] + unkR[337] * unkR[308] + unkR[338] * unkR[309] + unkR[339] * unkR[310] + unkR[340] * unkR[311] + unkR[341] * unkR[312] + unkR[342] * unkR[313] + unkR[343] * unkR[314] + unkR[344] * unkR[315] + unkR[345] * unkR[316] + unkR[346] * unkR[317] + unkR[347] * unkR[318] + unkR[348] * unkR[319] + unkR[349] * unkR[320] + unkR[350] * unkR[321] + unkR[351] * unkR[322] + unkR[352] * unkR[323] + unkR[353] * unkR[324] + unkR[354] * unkR[325] + unkR[355] * unkR[326] + unkR[356] * unkR[327] + unkR[357] * unkR[328] + unkR[358] * unkR[329]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
    ev[3]= unkR[333] * unkR[304] + unkR[334] * unkR[305] + unkR[335] * unkR[306] + unkR[336] * unkR[307] + unkR[337] * unkR[308] + unkR[338] * unkR[309] + unkR[339] * unkR[310] + unkR[340] * unkR[311] + unkR[341] * unkR[312] + unkR[342] * unkR[313] + unkR[343] * unkR[314] + unkR[344] * unkR[315] + unkR[345] * unkR[316] + unkR[346] * unkR[317] + unkR[347] * unkR[318] + unkR[348] * unkR[319] + unkR[349] * unkR[320] + unkR[350] * unkR[321] + unkR[351] * unkR[322] + unkR[352] * unkR[323] + unkR[353] * unkR[324] + unkR[354] * unkR[325] + unkR[355] * unkR[326] + unkR[356] * unkR[327] + unkR[357] * unkR[328] + unkR[358] * unkR[329]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
    ev[4]= LPRES__State(&unkR[63]) - 2; //LPRES.State(CombCha_1_1.f_O.fluid) == Gas
    ev[5]= unkR[414] - unkR[415]; //Injector_O.PR < Injector_O.PR_sl
    ev[6]= LPRES__State(&unkR[63]) - 2; //LPRES.State(CombCha_1_1.f_O.fluid) == Gas
    ev[7]= unkR[414] - unkR[415]; //Injector_O.PR >= Injector_O.PR_sl
    ev[8]= unkI[0] - 1; //CombCha_1_1.Combustion
    ev[9]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1_1.f_F.fluid) == Gas
    ev[10]= dyn[6] - unkR[403]; //Injector_F_1.PR < Injector_F_1.PR_sl
    ev[11]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1_1.f_F.fluid) == Gas
    ev[12]= dyn[6] - unkR[403]; //Injector_F_1.PR >= Injector_F_1.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) == 0
     w[2] = cont[2] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[3] = cont[3] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[0] = (cont[4]  && cont[5] ) ? 0 : (cont[6]  && cont[7] ) ? 1 : 2;
     // CombCha_1_1.Q_comb_effective =  ZONE (CombCha_1_1.Combustion) CombCha_1_1.Q_comb OTHERS 0
     branchZone[1] = (cont[8] ) ? 0 : 1;
     // Injector_F_1.M_out =  ZONE (LPRES.State(CombCha_1_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl) sqrt(2 * (Injector_F_1.PR ** ((LPRES.gamma(CombCha_1_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[9]  && cont[10] ) ? 0 : (cont[11]  && cont[12] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 13 ;
	nConstraints= 35;
	nWhen= 4;
	nZones= 3;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[4]= { "(CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) == 0",
		"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0",
		"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "LPRES.State(CombCha_1_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(CombCha_1_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS",
	"CombCha_1_1.Combustion","OTHERS",
	"LPRES.State(CombCha_1_1.f_F.fluid) == Gas AND Injector_F_1.PR < Injector_F_1.PR_sl","LPRES.State(CombCha_1_1.f_F.fluid) == Gas AND Injector_F_1.PR >= Injector_F_1.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,3,5 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[13]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1_1.fluid_O[LOX] * CombCha_1_1.fluid_F[LOX] + CombCha_1_1.fluid_O[NTO] * CombCha_1_1.fluid_F[NTO] + CombCha_1_1.fluid_O[H2O2] * CombCha_1_1.fluid_F[H2O2] + CombCha_1_1.fluid_O[HNO3] * CombCha_1_1.fluid_F[HNO3] + CombCha_1_1.fluid_O[LF2] * CombCha_1_1.fluid_F[LF2] + CombCha_1_1.fluid_O[RP_1] * CombCha_1_1.fluid_F[RP_1] + CombCha_1_1.fluid_O[LCH4] * CombCha_1_1.fluid_F[LCH4] + CombCha_1_1.fluid_O[LH2] * CombCha_1_1.fluid_F[LH2] + CombCha_1_1.fluid_O[N2H4] * CombCha_1_1.fluid_F[N2H4] + CombCha_1_1.fluid_O[UDMH] * CombCha_1_1.fluid_F[UDMH] + CombCha_1_1.fluid_O[MMH] * CombCha_1_1.fluid_F[MMH] + CombCha_1_1.fluid_O[JP_10] * CombCha_1_1.fluid_F[JP_10] + CombCha_1_1.fluid_O[Kerox] * CombCha_1_1.fluid_F[Kerox] + CombCha_1_1.fluid_O[Oil] * CombCha_1_1.fluid_F[Oil] + CombCha_1_1.fluid_O[H2O] * CombCha_1_1.fluid_F[H2O] + CombCha_1_1.fluid_O[IPA] * CombCha_1_1.fluid_F[IPA] + CombCha_1_1.fluid_O[Air] * CombCha_1_1.fluid_F[Air] + CombCha_1_1.fluid_O[Ar] * CombCha_1_1.fluid_F[Ar] + CombCha_1_1.fluid_O[CH4] * CombCha_1_1.fluid_F[CH4] + CombCha_1_1.fluid_O[CO] * CombCha_1_1.fluid_F[CO] + CombCha_1_1.fluid_O[CO2] * CombCha_1_1.fluid_F[CO2] + CombCha_1_1.fluid_O[H2] * CombCha_1_1.fluid_F[H2] + CombCha_1_1.fluid_O[He] * CombCha_1_1.fluid_F[He] + CombCha_1_1.fluid_O[N2] * CombCha_1_1.fluid_F[N2] + CombCha_1_1.fluid_O[O2] * CombCha_1_1.fluid_F[O2] + CombCha_1_1.fluid_O[MMH_vapour] * CombCha_1_1.fluid_F[MMH_vapour]) == 0"},{ WHEN,NOT_EQ_OP,0,2,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,3,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"CombCha_1_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F_1.PR < Injector_F_1.PR_sl"}
,{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1_1.f_F.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_F_1.PR >= Injector_F_1.PR_sl"}};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::initDelays()
{
}


bool DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate = 67844;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate;
return true;
}



bool DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate = 544;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate[] = 
{
"CgAAAEkAAAAGAAAACAAAAAgAAAAHAAAABwAAAAMAAAAHAAAABwAAAAgAAAAJAAAACQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAAIAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAMAAAAEAAAABQAAAAEAAAACAAAAAwAAAAQAAAAFAAAABgAAAAcAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAAAQAAAAIAAAADAAAABAAAAAUAAAAGAAAABwAAAAgAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAkAAAABAAAAAgAAAAMAAAAEAAAABQAAAAYAAAAHAAAACAAAAAoAAAABAAAAAgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAEAAAACAAAAAwAAAAMAAAAEAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_Gen_OFFD_OFFDvalidate(name,dirInstall);
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
	sprintf(componentName,"%s","CC_Gen_OFFD");
	sprintf(partitionName,"%s","OFFDvalidate");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_+gen_+o+f+f+d.+o+f+f+dvalidate");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

