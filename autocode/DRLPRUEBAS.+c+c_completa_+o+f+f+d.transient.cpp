//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_completa_OFFD_transient_CPP
#define DRLPRUEBAS__CC_completa_OFFD_transient_CPP

#include "DRLPRUEBAS.+c+c_completa_+o+f+f+d.transient.h"

DRLPRUEBAS__CC_completa_OFFD_transient* DRLPRUEBAS__CC_completa_OFFD_transient::s_current= NULL;

DRLPRUEBAS__CC_completa_OFFD_transient::DRLPRUEBAS__CC_completa_OFFD_transient(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_completa_OFFD";
m_infoPartitionName = "transient";
m_infoModelName = "DRLPRUEBAS__CC_completa_OFFD_transient";
m_infoModelFileName = "DRLPRUEBAS.+c+c_completa_+o+f+f+d.transient";
m_infoModelFileNameExtra = "+c+c_completa_+o+f+f+d.transient";
m_perfFlag = false;
m_infoComponentDate = "12/06/2018 14:05:36.080000";
m_infoPartitionDate = "15/06/2018 11:21:39.150000";
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
		4000, 3180.92667, 0, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 1, 1, 
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
		1, 1, 1, 0, 0, 0, 0, 0, 19.0533728, 3275010, 5000000, 0, 1.45944999, 0.032, 0, 0.00178349971, 
		0, 0.5, 0, 0, 0, 2.70069069, 151.106354, 3494748.63, 0, 0, 0.000580606872, 0, 0.5, 0, 10, 0, 
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
n_neld= 3;
m_numBoxes= 4;
m_nNonLinearBoxes= 4;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_completa_OFFD_transient::initInternalModels()
{
}

void DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_transient::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_completa_OFFD_transient::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_completa_OFFD_transient::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_completa_OFFD_transient::initBlocks( double dyn[], double ldr[], double *_time )
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
	LPRES__Init_fluid(unkI[2], &unkR[31]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[64]) ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-64]  CombCha_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[61] = _div( unkR[231] , dyn[2],"Injector_F.PR") ;
//[E-65]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[232]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-66]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[238] = _div( unkR[243] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-67]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[237] = _sqrt(_div( 2. * (_pow( unkR[238] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[237] = 1. ;
else unkR[237] = 0. ;
//[E-68]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[244]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-69]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[234] * LPRES__FGAMMA(&unkR[64]) * unkR[243] , _sqrt(unkR[242] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[237] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[237],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[234] * unkR[236] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[243] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-70]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-71]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[226] = _sqrt(_div( 2. * (_pow( dyn[2] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[226] = 1. ;
else unkR[226] = 0. ;
//[E-72]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt / sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[223] * LPRES__FGAMMA(&unkR[31]) * unkR[231] , _sqrt(unkR[230] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[226] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[226],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[223] * unkR[225] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[231] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)") ;
}
//[E-73]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-74]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-75]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[219] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-76]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[219],"CombCha_1.phi") ;
//[E-77]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-78]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-79]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-81]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-82]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-83]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-85]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-86]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-87]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-89]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-91]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-93]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-95]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-97]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-99]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-101]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[219] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-103]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[219], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[219] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[219], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-104]  CombCha_1.f_O.p_c = CombCha_1.rho_trans * LPRES.R(CombCha_1.fluid_P) * CombCha_1.g.Tt
res[2] = evalNormResidueInternal(2,unkR[61],dyn[0] * LPRES__R(&unkR[152]) * dyn[1]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_transient::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_transient& m= *DRLPRUEBAS__CC_completa_OFFD_transient::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_transient::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-109]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[181] = _div( unkR[152] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-110]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[182] = _div( unkR[153] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-111]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[154] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-112]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[155] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-113]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[156] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-114]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[157] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-115]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[158] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-116]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[159] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-117]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[160] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-118]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[161] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-119]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[162] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-120]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[163] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-121]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[164] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-122]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[165] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-123]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[166] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-124]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[167] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-125]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[168] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-126]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[169] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-127]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[170] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-128]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[171] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-129]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[172] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-130]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[173] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-131]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[174] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-132]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[175] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-133]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[176] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-134]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[177] * (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-135]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[207] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , dyn[3],"ThrustMonitor.g.W") ;
//[E-136]  ThrustMonitor.g.W = CombCha_1.f_O.p_c * CombCha_1.A_th / (sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid))
res[3] = evalNormResidueInternal(3,dyn[3],_div( unkR[61] * unkR[3] , (_div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)")),"sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_transient::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_transient& m= *DRLPRUEBAS__CC_completa_OFFD_transient::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_transient::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[4] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[4] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_transient::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_transient& m= *DRLPRUEBAS__CC_completa_OFFD_transient::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_transient::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( dyn[3] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_transient::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_transient& m= *DRLPRUEBAS__CC_completa_OFFD_transient::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_completa_OFFD_transient::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_transient::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_completa_OFFD_transient::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(2,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;
//[E-2]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[3], &unkR[64]);
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  LPRES.Init_fluid(LH2_circuit.fluid, CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(unkI[2], &unkR[31]);
//[E-5]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[227] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[227] = 0. ;
}
//[E-6]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[232] = _div( unkR[231] , unkR[227],"Injector_F.PR_sl") ;
}
else 
{
unkR[232] = 0. ;
}
//[E-7]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-8]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-9]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-11]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-12]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-13]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-16]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-17]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-20]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-21]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-24]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-25]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-28]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-29]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-32]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-33]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-36]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-37]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-40]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-41]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-44]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-45]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-48]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-49]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-52]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-53]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-56]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-57]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[57]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[149] = 0. ;
//[E-59]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[120] = 0. ;
//[E-60]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[179] = unkR[5] ;
}
else 
{
unkR[179] = 0. ;
}
//[E-61]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-62]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[239] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[239] = 0. ;
}
//[E-63]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
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
unkR[23] = unkR[63] - unkR[24] ;
//[E-106]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-107]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[208] = unkR[179] ;
//[E-108]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[209] = unkR[180] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-137]  CombCha_1.rho_trans' = (CombCha_1.f_O.W + CombCha_1.f_F.W - ThrustMonitor.g.W) / (CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1))
ldr[0] = _div( (unkR[63] + unkR[30] - dyn[3]) , (_div( unkR[221] , (unkR[220] * unkR[214]),"CombCha_1.rho_ch * CombCha_1.k_1")),"CombCha_1.temp_ch / (CombCha_1.rho_ch * CombCha_1.k_1)") ;
//[E-138]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-139]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-140]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-141]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-142]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-143]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-144]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[242] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[237] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[242] ;
}
//[E-145]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[230] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[226] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[230] ;
}
//[E-146]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[18] = _div( (LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[219] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]) , ((1. + _div( unkR[219] , unkR[10],"CombCha_1.OF_st")) * unkR[27]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-147]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[15] = _div( (_div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[27] * (unkR[18] - 298.15)) , LPRES__cp(&unkR[152]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-148]  CombCha_1.g.Tt' = (((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.g.Tt - CombCha_1.T_c) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_O.T) + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (CombCha_1.g.Tt - CombCha_1.f_F.T)) / -(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch)) - CombCha_1.g.Tt * LPRES.cv(CombCha_1.fluid_P) * CombCha_1.rho_trans') / (CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[24] + unkR[19]) , dyn[3],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152]) * (dyn[1] - unkR[15]) + _div( unkR[23] , dyn[3],"ThrustMonitor.g.W") * unkR[92] * (dyn[1] - unkR[62]) + _div( unkR[22] , dyn[3],"ThrustMonitor.g.W") * unkR[59] * (dyn[1] - unkR[29])) , -(_div( unkR[221] , (dyn[3] * unkR[220] * unkR[215] * unkR[17]),"ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch")),"-(CombCha_1.temp_ch / (ThrustMonitor.g.W * CombCha_1.rho_ch * CombCha_1.k_2 * CombCha_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[152]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[152])),"CombCha_1.rho_trans * LPRES.cv(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-150]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , LPRES__FGAMMA(&unkR[181]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-151]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[213] = unkR[25] ;
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
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[224] = _div( _sqrt(unkR[230] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[231]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[224] = 0. ;
}
//[E-160]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[233] = unkR[226] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[233] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[223] * unkR[225]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-161]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[228] = 0. ;
}
else 
{
unkR[228] = _div( LPRES__rho(&unkR[31]) * unkR[233] * unkR[225] * _sqrt(4. * unkR[223]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-162]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[235] = _div( _sqrt(unkR[242] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[243]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[235] = 0. ;
}
//[E-163]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[245] = unkR[237] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[245] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[234] * unkR[236]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-164]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[240] = 0. ;
}
else 
{
unkR[240] = _div( LPRES__rho(&unkR[64]) * unkR[245] * unkR[236] * _sqrt(4. * unkR[234]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-165]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[252] = LPRES__ISA_Pressure(unkR[248]) ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-167]  ThrustMonitor.T_out = CombCha_1.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[249] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-168]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[253] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[181]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-169]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[254] = dyn[5] * _sqrt(LPRES__gamma(&unkR[181]) * LPRES__R(&unkR[181]) * unkR[249],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-170]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[250] = dyn[3] * unkR[254] + unkR[2] * (unkR[253] - unkR[252]) ;
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
void DRLPRUEBAS__CC_completa_OFFD_transient::checkAsserts(double *_time)
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
void DRLPRUEBAS__CC_completa_OFFD_transient::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[2] - unkR[227]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[2] - unkR[227]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[238] - unkR[239]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[238] - unkR[239]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_completa_OFFD_transient::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_completa_OFFD_transient::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_completa_OFFD_transient::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_completa_OFFD_transient::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_completa_OFFD_transient::initDelays()
{
}


bool DRLPRUEBAS__CC_completa_OFFD_transient::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_completa_OFFD_transient = 43964;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_completa_OFFD_transient = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_transient[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_completa_OFFD_transient;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_completa_OFFD_transient;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_transient;
return true;
}



bool DRLPRUEBAS__CC_completa_OFFD_transient::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_completa_OFFD_transient = 232;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_completa_OFFD_transient = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_transient[] = 
{
"BgAAABkAAAADAAAABAAAAAQAAAADAAAABAAAAAUAAAAFAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_completa_OFFD_transient;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_completa_OFFD_transient;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_transient;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_completa_OFFD_transient(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_completa_OFFD_transient(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_completa_OFFD_transient(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_completa_OFFD_transient(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_completa_OFFD_transient(name,dirInstall);
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
	sprintf(partitionName,"%s","transient");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_completa_+o+f+f+d.transient");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

