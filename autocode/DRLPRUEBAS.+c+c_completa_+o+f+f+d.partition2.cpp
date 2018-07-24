//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_completa_OFFD_partition2_CPP
#define DRLPRUEBAS__CC_completa_OFFD_partition2_CPP

#include "DRLPRUEBAS.+c+c_completa_+o+f+f+d.partition2.h"

DRLPRUEBAS__CC_completa_OFFD_partition2* DRLPRUEBAS__CC_completa_OFFD_partition2::s_current= NULL;

DRLPRUEBAS__CC_completa_OFFD_partition2::DRLPRUEBAS__CC_completa_OFFD_partition2(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_completa_OFFD";
m_infoPartitionName = "partition2";
m_infoModelName = "DRLPRUEBAS__CC_completa_OFFD_partition2";
m_infoModelFileName = "DRLPRUEBAS.+c+c_completa_+o+f+f+d.partition2";
m_infoModelFileNameExtra = "+c+c_completa_+o+f+f+d.partition2";
m_perfFlag = false;
m_infoComponentDate = "08/06/2018 11:58:10.948000";
m_infoPartitionDate = "08/06/2018 11:58:50.269000";
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

m_branchZone= new int[3]; 
int nibr;
for (nibr=0; nibr < 3 ; nibr++)
	m_branchZone[nibr]= -1;

m_branchIf= new int[45]; 
int nif;
for (nif=0; nif < 45 ; nif++)
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
n_dyn=6;
dyn= new double[6] ;
static double tmp_dynInit[6]={ 0, 1, 10, 1, 100, 100 } ;
dynInit= new double[6];
dcopy(6,dynInit,tmp_dynInit);


n_der=2;
der= new double[6] ;
static double tmp_derInit[6]={ 0, 0, 0, 0, 0, 0 } ;
derInit= new double[6];
dcopy(6,derInit,tmp_derInit);


res= new double[6] ;
ldr= new double[6] ;
boxDyn= new double[6] ;
boxDer= new double[6] ;

static int tmp_frozenVars[2] = { 0,0 } ;
frozenVars= new int[2];
icopy(2,frozenVars,tmp_frozenVars);

n_unkR=255;
unkR= new double[255] ;
static double tmp_unkRInit[255]={ 56.88798558, 14, 1, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 0, 8, 0, 14700000, 0, 1, 0, 
		4000, 3180.93, 0, 0, 1000, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 
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
		1, 1, 1, 0, 0, 0, 0, 0, 19.05, 3275010, 5000000, 0, 0.567, 0.032, 0, 0.00178349971, 
		0, 0.5, 0, 10, 0, 0, 2.70069069, 151.106354, 3494748.63, 0, 0, 0.000580606872, 0, 0.5, 0, 0, 
		0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 2.70069069, 16.3526821, 0, 0, 0, 0, 0, 0, 0 } ;
unkRInit= new double[255];
dcopy(255,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=4;
unkI= new int[4] ;
static int tmp_unkIInit[4]={ 0, 2, 22, 1 } ;
unkIInit= new int[4];
icopy(4,unkIInit,tmp_unkIInit);


n_cteI=8;
static int tmp_cteIInit[8]={ 2, 4, 1, 4, 4, 2, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=18;
static std::string tmp_cteSInit[18]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", "m/s", 
		"m/s^2", "s" } ;
cteS= &tmp_cteSInit[0];

n_unkT=0;

n_cteT=0;

IMETHOD= DASSL;
n_nelg= 25;
n_neld= 2;
m_numBoxes= 4;
m_nNonLinearBoxes= 4;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_completa_OFFD_partition2::initInternalModels()
{
}

void DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_partition2::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_completa_OFFD_partition2::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_completa_OFFD_partition2::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_completa_OFFD_partition2::initBlocks( double dyn[], double ldr[], double *_time )
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
  // init(LH2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[2], &unkR[30]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[63]) ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-64]  CombCha_1.f_O.p_c = LO2_circuit.pt / Injector_O.PR
unkR[60] = _div( unkR[243] , dyn[2],"Injector_O.PR") ;
//[E-65]  Injector_F.PR = LH2_circuit.pt / CombCha_1.f_O.p_c
unkR[227] = _div( unkR[232] , unkR[60],"CombCha_1.f_O.p_c") ;
//[E-66]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[226] = _sqrt(_div( 2. * (_pow( unkR[227] , (_div( (LPRES__gamma(&unkR[30]) - 1.) , LPRES__gamma(&unkR[30]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[226] = 1. ;
else unkR[226] = 0. ;
//[E-67]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[59] = MATH__max(unkR[60], unkR[233]) ;
}
else 
{
unkR[59] = unkR[60] ;
}
//[E-68]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt / sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[29] = _div( _div( unkR[223] * LPRES__FGAMMA(&unkR[30]) * unkR[232] , _sqrt(unkR[231] * LPRES__R(&unkR[30]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[30]) - 1.) * _pow( unkR[226] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[30]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[30]) + 1.) , (2. * (LPRES__gamma(&unkR[30]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[226],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[29] = unkR[223] * unkR[225] * _sqrt(2. * LPRES__rho(&unkR[30]) * (unkR[232] - unkR[59]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)") ;
}
//[E-69]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[29] * (1. - unkR[56]) ;
//[E-70]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[92] = MATH__max(unkR[60], unkR[244]) ;
}
else 
{
unkR[92] = unkR[60] ;
}
//[E-71]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[238] = _sqrt(_div( 2. * (_pow( dyn[2] , (_div( (LPRES__gamma(&unkR[63]) - 1.) , LPRES__gamma(&unkR[63]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[238] = 1. ;
else unkR[238] = 0. ;
//[E-72]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[62] = _div( _div( unkR[235] * LPRES__FGAMMA(&unkR[63]) * unkR[243] , _sqrt(unkR[242] * LPRES__R(&unkR[63]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[63]) - 1.) * _pow( unkR[238] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[63]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[63]) + 1.) , (2. * (LPRES__gamma(&unkR[63]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[238],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[62] = unkR[235] * unkR[237] * _sqrt(2. * LPRES__rho(&unkR[63]) * (unkR[243] - unkR[92]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-73]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[62] * (1. - unkR[89]) ;
//[E-74]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-75]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-76]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-77]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[93] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[24] + unkR[93] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-78]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-79]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-81]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-82]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-83]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-85]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-86]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-87]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-89]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-91]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-95]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = 0. ;
}
//[E-104]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[2] = evalNormResidueInternal(2,unkR[60],dyn[0] * LPRES__R(&unkR[151]) * dyn[1]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_partition2::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_partition2& m= *DRLPRUEBAS__CC_completa_OFFD_partition2::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_partition2::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-109]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / CombCha_1.c_star
unkR[180] = _div( unkR[60] * unkR[3] , dyn[3],"CombCha_1.c_star") ;
//[E-110]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[151] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-111]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[152] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[153] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[154] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[155] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[175] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[176] * (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[177] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , unkR[180],"ThrustMonitor.g.W") ;
//[E-137]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
res[3] = evalNormResidueInternal(3,dyn[3],_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_partition2::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_partition2& m= *DRLPRUEBAS__CC_completa_OFFD_partition2::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_partition2::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-150]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[4] , unkR[60],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[4] , unkR[60],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_partition2::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_partition2& m= *DRLPRUEBAS__CC_completa_OFFD_partition2::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_partition2::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( unkR[180] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[60],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_partition2::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_partition2& m= *DRLPRUEBAS__CC_completa_OFFD_partition2::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(4);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(6, boxDyn, dyn) ;
	dcopy(2, boxDer, ldr) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_partition2::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_completa_OFFD_partition2::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(2,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;
//[E-2]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[3], &unkR[63]);
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  LPRES.Init_fluid(LH2_circuit.fluid, CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(unkI[2], &unkR[30]);
//[E-5]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[228] = _pow( ((LPRES__gamma(&unkR[30]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[30]) , (LPRES__gamma(&unkR[30]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[228] = 0. ;
}
//[E-6]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[233] = _div( unkR[232] , unkR[228],"Injector_F.PR_sl") ;
}
else 
{
unkR[233] = 0. ;
}
//[E-7]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-8]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-9]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[89]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[56]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
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
//[E-62]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[239] = _pow( ((LPRES__gamma(&unkR[63]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[63]) , (LPRES__gamma(&unkR[63]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[239] = 0. ;
}
//[E-63]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[244] = _div( unkR[243] , unkR[239],"Injector_O.PR_sl") ;
}
else 
{
unkR[244] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-105]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[62] - unkR[24] ;
//[E-106]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[29] - unkR[19] ;
//[E-107]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[178] ;
//[E-108]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[179] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-138]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[62] + unkR[29] - unkR[180]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-139]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-140]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[149] = 0. ;
//[E-141]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[150] = 0. ;
//[E-142]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[120] = 0. ;
//[E-143]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[121] = 0. ;
//[E-144]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[26] = _div( (unkR[24] * LPRES__cp(&unkR[122]) + unkR[19] * LPRES__cp(&unkR[93])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-145]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[61] = _div( unkR[242] , (1. + (LPRES__gamma(&unkR[63]) - 1.)/2. * _pow( unkR[238] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[61] = unkR[242] ;
}
//[E-146]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[28] = _div( unkR[231] , (1. + (LPRES__gamma(&unkR[30]) - 1.)/2. * _pow( unkR[226] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[28] = unkR[231] ;
}
//[E-147]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[122]) * unkR[61] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[93]) * unkR[28]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[26]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-148]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[27] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[26] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[151]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-149]  CombCha_1.g.Tt' = ((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / (CombCha_1.temp_ch / (CombCha_1.mfr_ch * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch) * CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (unkR[24] + unkR[19]) , unkR[180],"ThrustMonitor.g.W") * LPRES__cp(&unkR[151]) * (dyn[1] - unkR[15]) + _div( unkR[23] , unkR[180],"ThrustMonitor.g.W") * unkR[91] * (dyn[1] - unkR[61]) + _div( unkR[22] , unkR[180],"ThrustMonitor.g.W") * unkR[58] * (dyn[1] - unkR[28])) , (_div( unkR[221] , (unkR[216] * unkR[220] * unkR[215] * unkR[17]),"CombCha_1.mfr_ch * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch") * dyn[0] * LPRES__cv(&unkR[151])),"CombCha_1.temp_ch / (CombCha_1.mfr_ch * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch) * CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-151]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = dyn[3] ;
//[E-152]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[181]) , (9. * LPRES__gamma(&unkR[181]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-153]  CombCha_1.M_r = 1
unkR[8] = 1. ;
//[E-154]  CombCha_1.h.T = CombCha_1.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = dyn[1] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[181]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[181]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-155]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[222] = 1.184e-07 * _pow( LPRES__M(&unkR[181]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-156]  CombCha_1.h.A = 0
unkR[210] = 0. ;
//[E-157]  CombCha_1.h_g = 0
unkR[212] = 0. ;
//[E-158]  CombCha_1.h.Q = 0
unkR[211] = 0. ;
//[E-159]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[224] = _div( _sqrt(unkR[231] * LPRES__R(&unkR[30]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[29] , (LPRES__FGAMMA(&unkR[30]) * unkR[232]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[224] = 0. ;
}
//[E-160]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[234] = unkR[226] * _sqrt(LPRES__gamma(&unkR[30]) * LPRES__R(&unkR[30]) * unkR[28],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[234] = _div( unkR[29] , (LPRES__rho(&unkR[30]) * unkR[223] * unkR[225]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-161]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[30]) == 2 ) 
{
unkR[229] = 0. ;
}
else 
{
unkR[229] = _div( LPRES__rho(&unkR[30]) * unkR[234] * unkR[225] * _sqrt(4. * unkR[223]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[30]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-162]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[236] = _div( _sqrt(unkR[242] * LPRES__R(&unkR[63]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[62] , (LPRES__FGAMMA(&unkR[63]) * unkR[243]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[236] = 0. ;
}
//[E-163]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[245] = unkR[238] * _sqrt(LPRES__gamma(&unkR[63]) * LPRES__R(&unkR[63]) * unkR[61],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[245] = _div( unkR[62] , (LPRES__rho(&unkR[63]) * unkR[235] * unkR[237]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-164]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[63]) == 2 ) 
{
unkR[240] = 0. ;
}
else 
{
unkR[240] = _div( LPRES__rho(&unkR[63]) * unkR[245] * unkR[237] * _sqrt(4. * unkR[235]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[63]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-165]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[252] = LPRES__ISA_Pressure(unkR[248]) ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-167]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[249] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-168]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[253] = _div( unkR[60] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-169]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[254] = dyn[5] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[249],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-170]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[250] = unkR[180] * unkR[254] + unkR[2] * (unkR[253] - unkR[252]) ;
//[E-171]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[251] = unkR[250] ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);

if( restartB )
     dcopy(2,der,ldr);

//save last residues
memcpy(this->res,res,6*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[253] , unkR[252],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[30]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[227] - unkR[228]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[30]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[227] - unkR[228]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[63]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= dyn[2] - unkR[239]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[63]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= dyn[2] - unkR[239]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_completa_OFFD_partition2::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_completa_OFFD_partition2::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_completa_OFFD_partition2::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 11 ;
	nConstraints= 29;
	nWhen= 2;
	nZones= 3;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0",
		"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "CombCha_1.Combustion","OTHERS",
	"LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,5 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[11]= { { WHEN,NOT_EQ_OP,0,0,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"CombCha_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_F.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(CombCha_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__CC_completa_OFFD_partition2::initDelays()
{
}


bool DRLPRUEBAS__CC_completa_OFFD_partition2::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_completa_OFFD_partition2 = 43940;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_completa_OFFD_partition2 = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_partition2[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_completa_OFFD_partition2;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_completa_OFFD_partition2;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_partition2;
return true;
}



bool DRLPRUEBAS__CC_completa_OFFD_partition2::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_completa_OFFD_partition2 = 224;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_completa_OFFD_partition2 = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_partition2[] = 
{
"BgAAABkAAAACAAAABAAAAAQAAAADAAAABAAAAAUAAAAFAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABgAAAAEAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAACAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__CC_completa_OFFD_partition2;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_completa_OFFD_partition2;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_partition2;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_completa_OFFD_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_completa_OFFD_partition2(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_completa_OFFD_partition2(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_completa_OFFD_partition2(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_completa_OFFD_partition2(name,dirInstall);
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
	sprintf(componentName,"%s","CC_completa_OFFD");
	sprintf(partitionName,"%s","partition2");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_completa_+o+f+f+d.partition2");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

