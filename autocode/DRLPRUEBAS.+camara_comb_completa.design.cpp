//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__Camara_comb_completa_design_CPP
#define DRLPRUEBAS__Camara_comb_completa_design_CPP

#include "DRLPRUEBAS.+camara_comb_completa.design.h"

DRLPRUEBAS__Camara_comb_completa_design* DRLPRUEBAS__Camara_comb_completa_design::s_current= NULL;

DRLPRUEBAS__Camara_comb_completa_design::DRLPRUEBAS__Camara_comb_completa_design(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "Camara_comb_completa";
m_infoPartitionName = "design";
m_infoModelName = "DRLPRUEBAS__Camara_comb_completa_design";
m_infoModelFileName = "DRLPRUEBAS.+camara_comb_completa.design";
m_infoModelFileNameExtra = "+camara_comb_completa.design";
m_perfFlag = false;
m_infoComponentDate = "05/06/2018 12:55:08.628000";
m_infoPartitionDate = "05/06/2018 12:55:19.871000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[3]; 
int nbx;
for (nbx=0; nbx < 3 ; nbx++)
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

n_unkR=259;
unkR= new double[259] ;
static double tmp_unkRInit[259]={ 56.88798558, 14, 1, 0, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 0, 8, 0, 14700000, 0, 1, 
		0, 4000, 3180.93, 0, 1, 0, 1000, 0, 0, 0, 0, 0, 3700, 0, 0.99, 1, 
		2.70069069, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3275010, 
		1, 16.3526821, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 19.05, 5000000, 0, 0.567, 0, 
		0.032, 0, 0.05, 0, 0, 0.5, 0, 10, 0, 0, 151.106354, 3494748.63, 0, 0, 0.05, 0, 
		0, 0.5, 0, 10, 0, 0, 99.1952397, 4597104.18, 0, 0, 2.70069069, 16.3526821, 0, 0, 0, 0, 
		0, 0, 0 } ;
unkRInit= new double[259];
dcopy(259,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=4;
unkI= new int[4] ;
static int tmp_unkIInit[4]={ 0, 2, 22, 1 } ;
unkIInit= new int[4];
icopy(4,unkIInit,tmp_unkIInit);


n_cteI=8;
static int tmp_cteIInit[8]={ 2, 1, 1, 1, 1, 2, 2, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=18;
static std::string tmp_cteSInit[18]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "W", "W/(m^2·K)", "g/mol", "kg/m^3", "kg/s", "m", "m^2", "m/s", 
		"m/s^2", "s" } ;
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
void DRLPRUEBAS__Camara_comb_completa_design::initInternalModels()
{
}

void DRLPRUEBAS__Camara_comb_completa_design::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__Camara_comb_completa_design::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__Camara_comb_completa_design::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__Camara_comb_completa_design::LPRES__State(double fluid[])
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


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__M(double fluid[])
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


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__Camara_comb_completa_design::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__Camara_comb_completa_design::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__Camara_comb_completa_design::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__Camara_comb_completa_design::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[66]) ;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[184]) ;
	unkI[0] = 1 ;
	unkR[221] = 1. ;
	if( 0 ) {
	unkR[63] = unkR[220] ;
	}
	unkR[20] = unkR[17] ;
	unkR[21] = unkR[22] ;
	if( unkI[1] == 1 ) {
	unkR[9] = 0.001 ;
	}
	else {
	unkR[9] = 100. ;
	}
	unkR[217] = _div( 1. , unkR[219],"CombCha_1.mfr_ch") ;
	unkR[218] = _div( 1. , (unkR[219] * unkR[18]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(LH2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[2], &unkR[33]) ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__Camara_comb_completa_design::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-142]  ThrustMonitor.g.A_out / CombCha_1.A_r = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[0] = evalNormResidueInternal(0,_div( unkR[2] , unkR[3],"CombCha_1.A_r"),_div( LPRES__FGAMMA(&unkR[184]) , (_pow( (_div( dyn[0] , unkR[63],"CombCha_1.p_c")) , (_div( 1 , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[184]) * (1. - _pow( (_div( dyn[0] , unkR[63],"CombCha_1.p_c")) , (_div( (LPRES__gamma(&unkR[184]) - 1.) , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[184]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__Camara_comb_completa_design::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__Camara_comb_completa_design& m= *DRLPRUEBAS__Camara_comb_completa_design::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__Camara_comb_completa_design::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(2, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__Camara_comb_completa_design::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__Camara_comb_completa_design::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[1] = evalNormResidueInternal(1,_div( _div( unkR[183] * _sqrt(LPRES__R(&unkR[184]) * unkR[20],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[63],"CombCha_1.p_c"),_sqrt(LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[1] * _pow( (1 + (LPRES__gamma(&unkR[184]) - 1)/2 * _pow( dyn[1] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[184]) + 1)/2 , (LPRES__gamma(&unkR[184]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__Camara_comb_completa_design::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__Camara_comb_completa_design& m= *DRLPRUEBAS__Camara_comb_completa_design::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__Camara_comb_completa_design::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(2, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__Camara_comb_completa_design::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__Camara_comb_completa_design::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[3], &unkR[66]);
//[E-2]  ThrustMonitor.g.W = Injector_O.W + Injector_F.W
unkR[183] = unkR[65] + unkR[32] ;
//[E-3]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-4]  CombCha_1.W_O = Injector_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[26] = unkR[65] * (1. - unkR[92]) ;
//[E-5]  LPRES.Init_fluid(LH2_circuit.fluid, CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(unkI[2], &unkR[33]);
//[E-6]  CombCha_1.W_F = Injector_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[21] = unkR[32] * (1. - unkR[59]) ;
//[E-7]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[10] = _div( unkR[26] , unkR[21],"CombCha_1.W_F") ;
//[E-8]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[221] = _div( unkR[11] , unkR[10],"CombCha_1.OF") ;
//[E-9]  CombCha_1.fluid_F[LOX] = CombCha_1.f_F.fluid[LOX] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-10]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[23] = _div( unkR[21] , unkR[221],"CombCha_1.phi") ;
//[E-11]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[96] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[26] + unkR[96] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-12]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[154] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-13]  CombCha_1.fluid_O[NTO] = CombCha_1.f_O.fluid[NTO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-14]  CombCha_1.fluid_F[NTO] = CombCha_1.f_F.fluid[NTO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-15]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[97] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[26] + unkR[97] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-16]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[155] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-17]  CombCha_1.fluid_O[H2O2] = CombCha_1.f_O.fluid[H2O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-18]  CombCha_1.fluid_F[H2O2] = CombCha_1.f_F.fluid[H2O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-19]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[98] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[26] + unkR[98] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-20]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[156] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-21]  CombCha_1.fluid_O[HNO3] = CombCha_1.f_O.fluid[HNO3] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-22]  CombCha_1.fluid_F[HNO3] = CombCha_1.f_F.fluid[HNO3] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-23]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[99] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[26] + unkR[99] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-24]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[157] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-25]  CombCha_1.fluid_O[LF2] = CombCha_1.f_O.fluid[LF2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-26]  CombCha_1.fluid_F[LF2] = CombCha_1.f_F.fluid[LF2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-27]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[100] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[26] + unkR[100] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-28]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[158] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-29]  CombCha_1.fluid_O[RP_1] = CombCha_1.f_O.fluid[RP_1] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-30]  CombCha_1.fluid_F[RP_1] = CombCha_1.f_F.fluid[RP_1] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-31]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[101] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[26] + unkR[101] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-32]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[159] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-33]  CombCha_1.fluid_O[LCH4] = CombCha_1.f_O.fluid[LCH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-34]  CombCha_1.fluid_F[LCH4] = CombCha_1.f_F.fluid[LCH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-35]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[102] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[26] + unkR[102] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-36]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[160] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-37]  CombCha_1.fluid_O[LH2] = CombCha_1.f_O.fluid[LH2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-38]  CombCha_1.fluid_F[LH2] = CombCha_1.f_F.fluid[LH2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-39]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[103] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[26] + unkR[103] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-40]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[161] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-41]  CombCha_1.fluid_O[N2H4] = CombCha_1.f_O.fluid[N2H4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-42]  CombCha_1.fluid_F[N2H4] = CombCha_1.f_F.fluid[N2H4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-43]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[104] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[26] + unkR[104] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-44]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[162] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-45]  CombCha_1.fluid_O[UDMH] = CombCha_1.f_O.fluid[UDMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-46]  CombCha_1.fluid_F[UDMH] = CombCha_1.f_F.fluid[UDMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-47]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[105] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[26] + unkR[105] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-48]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[163] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-49]  CombCha_1.fluid_O[MMH] = CombCha_1.f_O.fluid[MMH] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-50]  CombCha_1.fluid_F[MMH] = CombCha_1.f_F.fluid[MMH] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-51]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[106] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[26] + unkR[106] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-52]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[164] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-53]  CombCha_1.fluid_O[JP_10] = CombCha_1.f_O.fluid[JP_10] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-54]  CombCha_1.fluid_F[JP_10] = CombCha_1.f_F.fluid[JP_10] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-55]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[107] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[26] + unkR[107] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-56]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[165] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-57]  CombCha_1.fluid_O[Kerox] = CombCha_1.f_O.fluid[Kerox] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-58]  CombCha_1.fluid_F[Kerox] = CombCha_1.f_F.fluid[Kerox] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-59]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[108] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[26] + unkR[108] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-60]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[166] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-61]  CombCha_1.fluid_O[Oil] = CombCha_1.f_O.fluid[Oil] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-62]  CombCha_1.fluid_F[Oil] = CombCha_1.f_F.fluid[Oil] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-63]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[109] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[26] + unkR[109] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-64]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[167] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-65]  CombCha_1.fluid_O[H2O] = CombCha_1.f_O.fluid[H2O] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-66]  CombCha_1.fluid_F[H2O] = CombCha_1.f_F.fluid[H2O] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-67]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[110] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[26] + unkR[110] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-68]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[168] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-69]  CombCha_1.fluid_O[IPA] = CombCha_1.f_O.fluid[IPA] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-70]  CombCha_1.fluid_F[IPA] = CombCha_1.f_F.fluid[IPA] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-71]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[111] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[26] + unkR[111] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-72]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[169] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-73]  CombCha_1.fluid_O[Air] = CombCha_1.f_O.fluid[Air] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[141] = _div( unkR[82] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-74]  CombCha_1.fluid_F[Air] = CombCha_1.f_F.fluid[Air] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[112] = _div( unkR[49] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-75]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[112] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[26] + unkR[112] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-76]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[170] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-77]  CombCha_1.fluid_O[Ar] = CombCha_1.f_O.fluid[Ar] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[142] = _div( unkR[83] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-78]  CombCha_1.fluid_F[Ar] = CombCha_1.f_F.fluid[Ar] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[113] = _div( unkR[50] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-79]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[113] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[26] + unkR[113] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-80]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[171] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-81]  CombCha_1.fluid_O[CH4] = CombCha_1.f_O.fluid[CH4] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[143] = _div( unkR[84] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-82]  CombCha_1.fluid_F[CH4] = CombCha_1.f_F.fluid[CH4] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[114] = _div( unkR[51] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-83]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[114] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[26] + unkR[114] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-84]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[172] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-85]  CombCha_1.fluid_O[CO] = CombCha_1.f_O.fluid[CO] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[144] = _div( unkR[85] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-86]  CombCha_1.fluid_F[CO] = CombCha_1.f_F.fluid[CO] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[115] = _div( unkR[52] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-87]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[115] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[26] + unkR[115] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-88]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[173] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-89]  CombCha_1.fluid_O[CO2] = CombCha_1.f_O.fluid[CO2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[145] = _div( unkR[86] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-90]  CombCha_1.fluid_F[CO2] = CombCha_1.f_F.fluid[CO2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[116] = _div( unkR[53] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-91]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[116] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[26] + unkR[116] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[174] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-93]  CombCha_1.fluid_O[H2] = CombCha_1.f_O.fluid[H2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[146] = _div( unkR[87] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-94]  CombCha_1.fluid_F[H2] = CombCha_1.f_F.fluid[H2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[117] = _div( unkR[54] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-95]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[117] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[26] + unkR[117] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[175] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-97]  CombCha_1.fluid_O[He] = CombCha_1.f_O.fluid[He] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[147] = _div( unkR[88] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-98]  CombCha_1.fluid_F[He] = CombCha_1.f_F.fluid[He] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[118] = _div( unkR[55] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-99]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[118] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[26] + unkR[118] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[176] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-101]  CombCha_1.fluid_O[N2] = CombCha_1.f_O.fluid[N2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[148] = _div( unkR[89] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-102]  CombCha_1.fluid_F[N2] = CombCha_1.f_F.fluid[N2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[119] = _div( unkR[56] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-103]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[119] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[26] + unkR[119] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[177] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-105]  CombCha_1.fluid_O[O2] = CombCha_1.f_O.fluid[O2] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[149] = _div( unkR[90] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-106]  CombCha_1.fluid_F[O2] = CombCha_1.f_F.fluid[O2] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[120] = _div( unkR[57] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-107]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[120] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = _div( (unkR[149] * unkR[26] + unkR[120] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[178] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-109]  CombCha_1.fluid_O[MMH_vapour] = CombCha_1.f_O.fluid[MMH_vapour] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[150] = _div( unkR[91] , (1. - unkR[92]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
//[E-110]  CombCha_1.fluid_F[MMH_vapour] = CombCha_1.f_F.fluid[MMH_vapour] / (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[121] = _div( unkR[58] , (1. - unkR[59]),"1 - CombCha_1.f_F.fluid[Comb_prod]") ;
//[E-111]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[179] = _div( (unkR[150] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[121] * MATH__max(unkR[221] - 1., 0.) * unkR[23]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[179] = _div( (unkR[150] * unkR[26] + unkR[121] * unkR[21]) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-112]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[209] = _div( unkR[179] * (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-113]  CombCha_1.fluid_O[Comb_prod] = 0
unkR[151] = 0. ;
//[E-114]  CombCha_1.fluid_F[Comb_prod] = 0
unkR[122] = 0. ;
//[E-115]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = _div( (unkR[151] * MATH__max(1. - unkR[221], 0.) * unkR[26] + unkR[122] * MATH__max(unkR[221] - 1., 0.) * unkR[23] + (1. - MATH__max(1. - unkR[221], 0.)) * (unkR[26] + unkR[23])) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[180] = 0. ;
}
//[E-116]  CombCha_1.W_IO = Injector_O.W - CombCha_1.W_O
unkR[25] = unkR[65] - unkR[26] ;
//[E-117]  CombCha_1.W_IF = Injector_F.W - CombCha_1.W_F
unkR[24] = unkR[32] - unkR[21] ;
//[E-118]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[210] = _div( (unkR[180] * (unkR[26] + unkR[21]) + unkR[25] + unkR[24]) , unkR[183],"ThrustMonitor.g.W") ;
//[E-119]  CombCha_1.fluid_P[Comb_prod_M] =  IF[28] (CombCha_1.Combustion) CombCha_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[181] = unkR[6] ;
}
else 
{
unkR[181] = 0. ;
}
//[E-120]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[211] = unkR[181] ;
//[E-121]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[182] = unkR[28] ;
}
else 
{
unkR[182] = 0. ;
}
//[E-122]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[212] = unkR[182] ;
//[E-123]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[14] = unkR[13] ;
else unkR[14] = 0. ;
//[E-124]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[152] = 0. ;
//[E-125]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[153] = 0. ;
//[E-126]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[123] = 0. ;
//[E-127]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[124] = 0. ;
//[E-128]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[29] = _div( (unkR[26] * LPRES__cp(&unkR[125]) + unkR[21] * LPRES__cp(&unkR[96])) , (unkR[26] + unkR[21]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-129]  Injector_O.PR = LO2_circuit.pt / CombCha_1.p_c
unkR[243] = _div( unkR[247] , unkR[63],"CombCha_1.p_c") ;
//[E-130]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[242] = _sqrt(_div( 2. * (_pow( unkR[243] , (_div( (LPRES__gamma(&unkR[66]) - 1.) , LPRES__gamma(&unkR[66]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[66]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[242] = 1. ;
else unkR[242] = 0. ;
//[E-131]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[64] = _div( unkR[246] , (1. + (LPRES__gamma(&unkR[66]) - 1.)/2. * _pow( unkR[242] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[64] = unkR[246] ;
}
//[E-132]  Injector_F.PR = LH2_circuit.pt / CombCha_1.p_c
unkR[231] = _div( unkR[235] , unkR[63],"CombCha_1.p_c") ;
//[E-133]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[230] = _sqrt(_div( 2. * (_pow( unkR[231] , (_div( (LPRES__gamma(&unkR[33]) - 1.) , LPRES__gamma(&unkR[33]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[230] = 1. ;
else unkR[230] = 0. ;
//[E-134]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[31] = _div( unkR[234] , (1. + (LPRES__gamma(&unkR[33]) - 1.)/2. * _pow( unkR[230] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[31] = unkR[234] ;
}
//[E-135]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T) / ((1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R)
unkR[19] = _div( (LPRES__cp(&unkR[125]) * unkR[64] + _div( unkR[221] , unkR[11],"CombCha_1.OF_st") * LPRES__cp(&unkR[96]) * unkR[31]) , ((1. + _div( unkR[221] , unkR[11],"CombCha_1.OF_st")) * unkR[29]),"(1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R") ;
//[E-136]  CombCha_1.T_c = (CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)) + CombCha_1.cp_R * (CombCha_1.T_in - 298.15)) / LPRES.cp(CombCha_1.fluid_P) + 298.15
unkR[16] = _div( (_div( unkR[30] * unkR[14] , (_div( (1. + unkR[10]) , MATH__min(unkR[10], unkR[11]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)") + unkR[29] * (unkR[19] - 298.15)) , LPRES__cp(&unkR[154]),"LPRES.cp(CombCha_1.fluid_P)") + 298.15 ;
//[E-137]  ThrustMonitor.g.Tt = (-((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) * -CombCha_1.T_c + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * -CombCha_1.f_O.T) - CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * -CombCha_1.f_F.T) / ((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp])
unkR[20] = _div( (-(_div( (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") * LPRES__cp(&unkR[154]) * -unkR[16] + _div( unkR[25] , unkR[183],"ThrustMonitor.g.W") * unkR[94] * -unkR[64]) - _div( unkR[24] , unkR[183],"ThrustMonitor.g.W") * unkR[61] * -unkR[31]) , (_div( (unkR[26] + unkR[21]) , unkR[183],"ThrustMonitor.g.W") * LPRES__cp(&unkR[154]) + _div( unkR[25] , unkR[183],"ThrustMonitor.g.W") * unkR[94] + _div( unkR[24] , unkR[183],"ThrustMonitor.g.W") * unkR[61]),"(CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P) + CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] + CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp]") ;
//[E-138]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[27] = _div( _sqrt(LPRES__R(&unkR[184]) * unkR[20],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[184]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-139]  CombCha_1.A_r = ThrustMonitor.g.W * CombCha_1.c_star / CombCha_1.p_c
unkR[3] = _div( unkR[183] * unkR[27] , unkR[63],"CombCha_1.p_c") ;
//[E-140]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_r
unkR[2] = unkR[0] * unkR[3] ;
//[E-141]  CombCha_1.rho_trans = CombCha_1.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha_1.fluid_P)
unkR[223] = _div( _div( unkR[63] , unkR[20],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[154]),"LPRES.R(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-143]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[216] = unkR[27] ;
//[E-144]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[12] = _div( 4. * LPRES__gamma(&unkR[184]) , (9. * LPRES__gamma(&unkR[184]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-145]  CombCha_1.M_r = 1
unkR[9] = 1. ;
//[E-146]  CombCha_1.h.T = ThrustMonitor.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[15] = unkR[20] * _div( (1. + _pow( unkR[12] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[184]) - 1.) * _pow( unkR[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[184]) - 1.) * _pow( unkR[9] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-147]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[225] = 1.184e-07 * _pow( LPRES__M(&unkR[184]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[15] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-148]  CombCha_1.h.A = 0
unkR[213] = 0. ;
//[E-149]  CombCha_1.h_g = 0
unkR[215] = 0. ;
//[E-150]  CombCha_1.h.Q = 0
unkR[214] = 0. ;
//[E-151]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[232] = _pow( ((LPRES__gamma(&unkR[33]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[33]) , (LPRES__gamma(&unkR[33]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[232] = 0. ;
}
//[E-152]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[236] = _div( unkR[235] , unkR[232],"Injector_F.PR_sl") ;
}
else 
{
unkR[236] = 0. ;
}
//[E-153]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) * Injector_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[228] = _div( _sqrt(unkR[234] * LPRES__R(&unkR[33]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[32] , (LPRES__FGAMMA(&unkR[33]) * unkR[235]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[228] = 0. ;
}
//[E-154]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[62] = MATH__max(unkR[63], unkR[236]) ;
}
else 
{
unkR[62] = unkR[63] ;
}
//[E-155]  Injector_F.A_d =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A_sl * ((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out	 ELSE Injector_F.W / Injector_F.C_D / sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[227] = _div( unkR[228] * _pow( (_div( (2. + (LPRES__gamma(&unkR[33]) - 1.) * _pow( unkR[230] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[33]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[33]) + 1.) , (2. * (LPRES__gamma(&unkR[33]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[230],"Injector_F.M_out") ;
}
else 
{
unkR[227] = _div( _div( unkR[32] , unkR[229],"Injector_F.C_D") , _sqrt(2. * LPRES__rho(&unkR[33]) * (unkR[235] - unkR[62]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)"),"sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))") ;
}
//[E-156]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE Injector_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D)
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[237] = unkR[230] * _sqrt(LPRES__gamma(&unkR[33]) * LPRES__R(&unkR[33]) * unkR[31],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[237] = _div( unkR[32] , (LPRES__rho(&unkR[33]) * unkR[227] * unkR[229]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A_d * Injector_F.C_D") ;
}
//[E-157]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A_d / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[33]) == 2 ) 
{
unkR[233] = 0. ;
}
else 
{
unkR[233] = _div( LPRES__rho(&unkR[33]) * unkR[237] * unkR[229] * _sqrt(4. * unkR[227]/3.14159265358979,"4 * Injector_F.A_d / 3.14159265358979") , LPRES__visc(&unkR[33]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-158]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[244] = _pow( ((LPRES__gamma(&unkR[66]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[66]) , (LPRES__gamma(&unkR[66]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[244] = 0. ;
}
//[E-159]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[248] = _div( unkR[247] , unkR[244],"Injector_O.PR_sl") ;
}
else 
{
unkR[248] = 0. ;
}
//[E-160]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * Injector_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[240] = _div( _sqrt(unkR[246] * LPRES__R(&unkR[66]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[65] , (LPRES__FGAMMA(&unkR[66]) * unkR[247]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[240] = 0. ;
}
//[E-161]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.p_c
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[95] = MATH__max(unkR[63], unkR[248]) ;
}
else 
{
unkR[95] = unkR[63] ;
}
//[E-162]  Injector_O.A_d =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A_sl * ((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out	 ELSE Injector_O.W / Injector_O.C_D / sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[239] = _div( unkR[240] * _pow( (_div( (2. + (LPRES__gamma(&unkR[66]) - 1.) * _pow( unkR[242] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[66]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[66]) + 1.) , (2. * (LPRES__gamma(&unkR[66]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[242],"Injector_O.M_out") ;
}
else 
{
unkR[239] = _div( _div( unkR[65] , unkR[241],"Injector_O.C_D") , _sqrt(2. * LPRES__rho(&unkR[66]) * (unkR[247] - unkR[95]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)"),"sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))") ;
}
//[E-163]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE Injector_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D)
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[249] = unkR[242] * _sqrt(LPRES__gamma(&unkR[66]) * LPRES__R(&unkR[66]) * unkR[64],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[249] = _div( unkR[65] , (LPRES__rho(&unkR[66]) * unkR[239] * unkR[241]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A_d * Injector_O.C_D") ;
}
//[E-164]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A_d / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[66]) == 2 ) 
{
unkR[245] = 0. ;
}
else 
{
unkR[245] = _div( LPRES__rho(&unkR[66]) * unkR[249] * unkR[241] * _sqrt(4. * unkR[239]/3.14159265358979,"4 * Injector_O.A_d / 3.14159265358979") , LPRES__visc(&unkR[66]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-165]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[256] = LPRES__ISA_Pressure(unkR[252]) ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-167]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[253] = _div( unkR[20] , (1. + (LPRES__gamma(&unkR[184]) - 1.)/2. * _pow( dyn[1] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-168]  ThrustMonitor.p_out = CombCha_1.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[257] = _div( unkR[63] , _pow( (1. + (LPRES__gamma(&unkR[184]) - 1.)/2. * _pow( dyn[1] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[184]) - 1.) , LPRES__gamma(&unkR[184]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-169]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[258] = dyn[1] * _sqrt(LPRES__gamma(&unkR[184]) * LPRES__R(&unkR[184]) * unkR[253],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-170]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[254] = unkR[183] * unkR[258] + unkR[2] * (unkR[257] - unkR[256]) ;
//[E-171]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[255] = unkR[254] ;

//save last residues
memcpy(this->res,res,2*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__Camara_comb_completa_design::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[184])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[257] , unkR[256],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[1] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__Camara_comb_completa_design::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119] + unkR[149] * unkR[120] + unkR[150] * unkR[121]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[33]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= unkR[231] - unkR[232]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[33]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= unkR[231] - unkR[232]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[66]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[243] - unkR[244]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[66]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[243] - unkR[244]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__Camara_comb_completa_design::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__Camara_comb_completa_design::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__Camara_comb_completa_design::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__Camara_comb_completa_design::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__Camara_comb_completa_design::initDelays()
{
}


bool DRLPRUEBAS__Camara_comb_completa_design::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__Camara_comb_completa_design = 39436;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__Camara_comb_completa_design = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__Camara_comb_completa_design[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__Camara_comb_completa_design;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__Camara_comb_completa_design;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__Camara_comb_completa_design;
return true;
}



bool DRLPRUEBAS__Camara_comb_completa_design::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__Camara_comb_completa_design = 48;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__Camara_comb_completa_design = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__Camara_comb_completa_design[] = 
{
"AgAAAAIAAAAAAAAAAQAAAAEAAAABAAAAAgAAAAAAAAAAAAAA"
};
*size = s_gsi_size_DRLPRUEBAS__Camara_comb_completa_design;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__Camara_comb_completa_design;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__Camara_comb_completa_design;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__Camara_comb_completa_design(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__Camara_comb_completa_design(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__Camara_comb_completa_design(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__Camara_comb_completa_design(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__Camara_comb_completa_design(name,dirInstall);
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
	sprintf(componentName,"%s","Camara_comb_completa");
	sprintf(partitionName,"%s","design");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+camara_comb_completa.design");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

