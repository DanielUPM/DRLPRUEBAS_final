//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_CPP
#define DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_CPP

#include "DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon.h"

DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon* DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::s_current= NULL;

DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_caso_escalon_OFFD";
m_infoPartitionName = "caso_escalon";
m_infoModelName = "DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon";
m_infoModelFileName = "DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon";
m_infoModelFileNameExtra = "+c+c_caso_escalon_+o+f+f+d.caso_escalon";
m_perfFlag = false;
m_infoComponentDate = "29/06/2018 11:16:59.001000";
m_infoPartitionDate = "29/06/2018 12:31:10.718000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[5]; 
int nbx;
for (nbx=0; nbx < 5 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[3];
int ib;
for (ib=0; ib < 3 ; ib++)
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
static const char * elmstr6[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", "Gas_valve", NULL } ;
static int elmind6[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;
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
		{elmstr6,9,elmind6},
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
		0, 0.5, 0, 0, 0, 2.70069069, 0, 0, 0.000580606872, 0, 0.5, 0, 10, 0, 0, 16.3526821, 
		99.1952397, 4597104.18, 0, 0, 151.106354, 2.70069069, 3494748.63, 16.3526821, 0, 0, 0, 0, 0, 0, 0 } ;
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::initInternalModels()
{
}

void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[64]) ;
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
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-64]  CombCha_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[61] = _div( unkR[246] , dyn[2],"Injector_F.PR") ;
//[E-65]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[230]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-66]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[236] = _div( unkR[241] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-67]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[235] = _sqrt(_div( 2. * (_pow( unkR[236] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[235] = 1. ;
else unkR[235] = 0. ;
//[E-68]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[242]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-69]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[232] * LPRES__FGAMMA(&unkR[64]) * unkR[241] , _sqrt(unkR[240] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[235] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[235],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[232] * unkR[234] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[241] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
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
unkR[30] = _div( _div( unkR[223] * LPRES__FGAMMA(&unkR[31]) * unkR[246] , _sqrt(unkR[244] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[226] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[226],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[223] * unkR[225] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[246] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)") ;
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon& m= *DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon& m= *DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[4] = evalNormResidueInternal(4,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[181]) , (_pow( (_div( dyn[4] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[181]) * (1. - _pow( (_div( dyn[4] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[181]) - 1.) , LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[181]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon& m= *DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( dyn[3] * _sqrt(LPRES__R(&unkR[181]) * dyn[1],"LPRES.R(ThrustMonitor.g.fluid) * CombCha_1.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[181]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[181]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[181]) + 1)/2 , (LPRES__gamma(&unkR[181]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon& m= *DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(2,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[3], &unkR[64]);
//[E-2]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;
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
unkR[230] = _div( unkR[246] , unkR[227],"Injector_F.PR_sl") ;
}
else 
{
unkR[230] = 0. ;
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
unkR[237] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[237] = 0. ;
}
//[E-63]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[242] = _div( unkR[241] , unkR[237],"Injector_O.PR_sl") ;
}
else 
{
unkR[242] = 0. ;
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
unkR[62] = _div( unkR[240] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[235] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[240] ;
}
//[E-145]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[244] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[226] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[244] ;
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
unkR[224] = _div( _sqrt(unkR[244] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[246]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[224] = 0. ;
}
//[E-160]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[231] = unkR[226] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[231] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[223] * unkR[225]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-161]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[228] = 0. ;
}
else 
{
unkR[228] = _div( LPRES__rho(&unkR[31]) * unkR[231] * unkR[225] * _sqrt(4. * unkR[223]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-162]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[233] = _div( _sqrt(unkR[240] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[241]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[233] = 0. ;
}
//[E-163]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[243] = unkR[235] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[243] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[232] * unkR[234]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-164]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[238] = 0. ;
}
else 
{
unkR[238] = _div( LPRES__rho(&unkR[64]) * unkR[243] * unkR[234] * _sqrt(4. * unkR[232]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[181])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[253] , unkR[252],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[2] - unkR[227]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[2] - unkR[227]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[236] - unkR[237]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[236] - unkR[237]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::initDelays()
{
}


bool DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon = 44140;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon[] = 
{
"AACppAAAxMgAAEb1AAD2atdti2DCb1IKcFlEpmR/l0wk6J/+Beco5Sr39o6FvadfWUL1nr1f2B/uc/meBMqYkhtA9Tad6DBik46iUo0MRNmVcnzR7vy1G6Rw5XFxr45yTd0E7WNjgyYJdMx+Igs4suL6F5FlL4QjRmg7oB3ih3LVpApvRZejsSvsLMIYCNOc0NpWIgOoMsP5CJfvyxtNM8PzSich7U3LI0qnOrAXPGnlM86mmz8y888cJ8ixsX9Yxh3ZT452A9NGzYDZhcjoohXudRxydrimBoPn7VA+40BjBSn0lu+BMa+JoqAijKt6BUE1nv0A9FBvPMsbT0JvFvGh4+ujkWTufpKSk+pfhAy9r9HDLuftlqr6GELaHBRbq7fPfgFjEW3DWpGI8y6R9sbJ++/EDrwKVIzlTvPPzttgUVVdo9kqHdWM8H7R/05uI3KI+81OWB7uBd500Ank/RBKtp9NX2QcdbDVlB8wg8gA6j43BSMKOayOibuczCnfA0+mdseIIWe+jWuVV/pGljaTjNL/IZNWKsZ0O7P91Y/6BISWrVxjNRhzF7o5NsVGE3MmOkERK8GU/8dcHp+bR4NJgfxK0l68eOUcl3WRrLKsNrJj586MaN41L2+44y2RKQQlmE7UT1fwsh9cReGb0EbYtu8eRBi4NKId4s5fxesUBsHKgrSnVC/cYSVP5ay+ZmHfDVuN/sDlQiJkv899zuK0pJfcxABiGyItBjdEEt4lv16Mq2LZYexBDFHgK7yvTV/35BDMpu8KW6SzlEDWdUakLHcJc1r41aL66EqiXFCZE3fUNxePJNrzB3TF84S1KVxMIQ/MHOk33ZWNATTP99X7hxBSJlemc9GZfj+Un9d2rEjypiIT+8kAQcC4nLT8Qw5DJWcDimoNOOT9eT+l8IfNQCtL5/S6wI7wYJiDQEp4aB1mS6iMz+SA+EanCgT2QRdyuWQcKRN5DXyRgrXxx1nonmswYoiG7dsMUAzhZhKfdnO5OSfUDJztKU016DC7eT2W8ENawVUtAsSbm3gat9Jje0TxbNeQXZwcTdSSU21NhrLwEaIWHoIzJg1KJRZjKVzetRGgLEa93qhNG1UgWseUKJd/v7TLcLX2u8tqgZuL5jGnRV/eqCbAPMZb5OtrbBw53Va79SB9BW9jHS+JsCDbc3GZdgFTfiREHlyr5z2F7n0rZvHmh4SXr8d5Zn7+1aTl8vhb5CnwNrA59kVDAxcVNamwjCZPdzycHZRgIhattF/OC8VLxmB/UZ/zPO79LL/h6Sm3s2Dgzy/NXLsSifFZYCU2t/Jrb8md9oM+GLMZlrCDx5UXOJTbmVsrCD7pEhGlO9CxDsPwUOLq0RXE2WWYkAwcsA55Igf4UEVMrDvHBse/wufdcMFAYMALtw5Xa3yyIkMGzXCB79ggByuYBIdL9d69zwvICVaoTZIZj4GhsjS6lBZFGTbxAq4e+gYFxBV77YoQjvrYP5+TPElhMHRA1RpxpiCdwzTRDTmcYfAtcxVHMnhVBbbI8UCVJprBbDEjdVxOu6ni4EWjQQ+2dAcgrOWaAWxExIqwuFSl7P2n3ncvbwMQM5AR8MZQOPD9YbMp0Gzce+H1t57wWTxrZ/bewgI/B0l8nco0npxoN1NsO9ToHTmjuws++K3Ff5bcVkpNBP9nX0MsDWt8EdEXqdHCu6zu8+9SZuny1jeLiTokVEqunMFohHRA0hY380CcR8cRQ8IrapeKMieGZAYZu9ZgKSJMFVhK2Z7NJy7LWpaMglrMLgTk2JtRRLT4kEc1VnVYUVRMjm/kk3VP7AAXGZDxVRSYn3GlMgzKINFDJVMume3NrEelmb0IA5udReqTQK/iv8bCN5wc9DM7idHD9ci+5CSAlT+XkEC/f7O45N4D0Vuy/WEIEHMYZAfpKiwNc9SfFXUrzu6xcSp4hNrKqyOzjD/4oF4XPkdxV6gKuW/YAM1opAeHTicoi7BqSmBco8HbfMM5tYLKOpM2",
"M6SQkeF0wP8JosfXiNs/J0Hs1soyO1pnZnlzE8GkTlifJKat8+Jyel5WBMay2FM0FpPmY6ddlHKr5QKdvUQoriN6oFS1AypVknWV7Lm+oUpNgYaO878CzbDKVTwW+DmJ8fx3aD8LPAlD/CJzmJsXtSYXVOtJ2g52M1JDmc1uhUL91JpDG8dDrsPnGnjnI+BUG4qHWyUCCaVO161K4InvGMpLeVPpLAjXvS3k20Lc//Vp0g7V+bZrue1IDsHQskA8Sib65dDLTlYSPLiBNBAz02XScuOvbvGj8+9VYJDvocTjnY0LVwpKX9v904Jmtn/2L578MANvn9sO4tCmn0HStuRNmE2fXkclnoe33s6LdXt+317D5CtalO39PHP1FWpQz341Jyjr/2/ZvwFig2wy+CG+fCX9PZIK8OgAwwwscBxHCifmh9VIC6IYmg4DfH1oEe76d+jCthNpFbt73aOIzi61qbrVDxrtn/Ln8TVaW5EFBM3PxlEgxt7DoAvxLT/S/e3ovToDrvxiMABnXeOklkANDLc5U+t9OZX+CXhZGudHZtb/KzvEph7+aM1pt+maOYvAZSx0HQ0vEqi6FeCjo3BaeHalGhW71EESQLwypoX7WTPjvXmt7eDYmcc1rHUAUFT1jE8TILId+9/NkIQa4Mr3rrSFHS3n29bDkCOOhC5ffdSlB0sY3VhXl3LcJ3WqM74m2u60e0/78OEoI+e5e0HBl29NokeFzJR6u0cZMhCkjwPY16/S+43eWYsv+A1qkle5Z2nQOPQRDI0SQWcnDMfo92XF7C8I5Y1xVUGLwkjb83hcUvccsrnikR2va2qqtXczCWvzq39MVWa7+g1sM2uGtKbNRVbM+YwEfuDrK8dnjwGY/paAsaVSeBwx3eBN11boPt+9oqGI7Ogbbl2eu6bC/yCj3yhS3EtvRu6Lvpq+9wXs79AEQ/LMcnPhrEWw3594VtrU8PjyNsl09/nJTGz9iGViyLNk/W22s2+IdJ4duI/aGXGfwRtfgtsJNdVNnlWdnHVBoIK5bWIszgefz33M4VisAHGM5JuPLK9CAY6PTZvu2CDISuGxtOi1p+wHfdAt4MGA03AGQ3M3bpeINQi8WGZlYGNFF1d47LTdNcNCI/q42LHUFBopzzhwVttgYSXVh6qTaykfGjD2aQOqPDl4dE/XwhZ+FR+wb0cIl/z7ICfksoJ9HlYRX7hAU+yyKqeoiactBRBFMo+6l6j3asBiYuPPbSejItz66B2lgvckda3AYotmN0aQMvB+/xHWUq4NiEmNGL4fn8+nHTymEvk71kEo/PRyKH/7LC7e+uvsEV28cS0lxqlTQdn2EQQInMuT1gZUcMwxYjo85Do20ge6rKVhOQT1LRhzJeZscGwgJ+G95BYFHTS3FIYsFT23XEh/4iSkvPMvshIB1TLCkS2TKPSWvLvTVrIGSn7w1dd28ZGr4V3YHjczVLFJonQ0nTz9ilOkxh8SCr0r7yI5J+0KoVOgR3LTIVVGAH1fXM8h2buPHXZT2yyal2xfNwcCXrIs6y9eXYGxkAqNzloo5YxcnRMiaHhjamiV1PJeWRmHaOiIt6OEC56sa4j8hzZgV9PLbvepzvssuzU77etbmfshrM9TB5Yl5I3v5acbI6KdoFRcUpKqUvfWGFu4LgZKC6WAFy7+FHN3b01QStvkIHxf96yQ/BfnSr9+i0aMAHM4lvm/fr2HxBAylu0YzPJTMpjQMXntpPdpM1Br0OR6TLMgF3TBC+8XGh2MBNPVXoh9MYhoS2Qj2Jeoa+NvYMDVGFeExRUVjd933NLyM7b7Xn+Y98mID3E+c13BcTx8PP+17V4m6G5gw1jp6mujyAV/s/myZ+h9xiwsKUUU3CDP8MHH1H7FeFPDPKEyJEeb3N+laQJx3JniqXhWCr8ZvHwB5qocRD/GyA0JcZTlVTgVh9vCozLTTXoieVwpTca316qRXeZXfOM3hghCpNg7S39dZYJIl3/07qNe6xh7",
"IZKes9XE9aS9lfphRtv5OgcWJSZtXr0UkSK2PoN244i7V9xXqseSqtgwkCitG9RY5CWol0dPBPChbCwid+1hH8l7FWqiFTrNQNW/Z06XrlD0bWq43MlINDcjJJi0OrIZcijOd/m1FNsqQhG29m7DZpyMQnlW27gSZFCPI+5SNliGci5as3u04+uc3jPUhmqBBuSWIba4cE33LJJVggX2uUbXIaTipP8GAJknbNN1d7NSe70HSF/bIdMyzDU2RaWePFVdRu+XFGpnJjaUkMyNBEPmJX8Y7rtSW90C/ZfXOgkLSuvZW1YPWw2oMcHH5k53t+J/Gc+pW+lE5L8yiyJLteC1/cpKYhrTvGPJ+vXmBqjLuT8w7GwTCJUkCLjAzOojO3eZUQ2LO0LEDON6fRSWng/S7pTXEXoPcuXxqiloAd1Zi6wNHYvTlijb91Z2JejiW4VmkoiVT2StTENbDED0tLFRPKIGe080ADPSIOGbA1p7/AQoKpKLho8+CXSREfe8+u5E8vkPwtb8kJ4s1fSwl8hDVQSBUwkMsUUBaHDrXOqBNFT5wZiMd+8cWMdxPVrDhbMaNCSOWYTNKgBeeI3CkEW0AeU/GOWQdXpFTDbtE7PVqF8fFQBpdK5WAlCqA2CyUrHEWBOG1BuMLIo9Ep7QVdH+CUQGqZ/dsbuO+gm7Pght6mK3oroGRJEIuUAS9kFFg0ojAgUZ6bJeuOrrfGDRrWsqk97zgOzmC6beVhIQCe7Xof3S9Zd9FSy7jFKufe5GSJxD1oCfbOaX3gXtknuODLQIfbkrV7BxmtX5uHgoC6zHjJquuV/u9Ujfwrl1U/FcMdVconrs2qIJ/dPVI9FTEVdH5fCNkZi9d0OX/Jge409/VSDzvDrqayVSPze9/BK6oP+ivLFD59qT2DAamaVBNFQBxaCu71csiClSmzNV6HhnbuTTMNeMAywMxTR0utjKZsRQgSCiGQW/9Cj8974eVU8O10b8UUZcGi46m37BuQ3DNt5+q37fdEPDGw4GvUYQuDnBw7grI1iOe7eZzxnwS6saYcm2IXuKEdogqcA+WbgDziWwf65kcHVEcSJ0lTlQ4IhMYGkvwza4uE/gZuGOu62Lx261Yqyxz9qvamiqhodt5KIhSO7C7E071bc3AfNYdtuJ8nkY6f22UavSwOiZx4JQvSO5wYH1+ftsAG3da6aLExh4Vo+YYEiYM0oHxiWQ20yLgZs9Gt29eLANl+qKlNj9vCcBGDZc1TqxMDFv13ejLUXANDj8gj0f1xgdSGvPrieUfG3XnwRmvtPaiJV6fI5ndsZrjA4Mx2wKRgL1m8C6DoI1A0pLd8l/y4NeWP58/9bNg4ExWN5lulwIHzqMKVSUKnOfh1EYVJlF1pLinKe6bYTIU7VGWBq5UTScySXjpVlB97++zh+rq+rV+tiJmd/VRN4eNA14m3dUD/b9A+d+bo+pKcHGOkE3NabjfPrjWu46dKz2T9w819PJJ3x+WXROoD+c+nfS6mSD8hAFbBAY96s39jEJCGFO+6vrsP/KACZ27fmCXdxQ5+9YFJvMHRY3v+GERdMP8AhiSBeUYdvEgFf+8gkDNRlEpbUNKpyetylLZBM/VrZ0ir82jcppM/HxRtSNR8+cg60m/Yjd2yecXs+QUjmykGJipPHSNJteI0U2pBniyTC++ue0ZEziFpKc9Jt40XSur+ZPUBJxZkmg2bHea40O7xEH1oH9dYAxrM7Mzucv8mrtJxb/WM6PW8oacgnGgVtKd2OPPlKGr2us40kUGRi5xf55FXgGEXO/rrX7uxNqY2Av0F3LBS0euDi+924FfqRacwhXVCIqWHdV6H0y1WyQUzP8EbHkPZQaNSJYzJ//+QQimmOLrroNGydQIUhEdrjp3jsfcvbyhNy+V5Tddxw9angCxFzD5LkZh0P2kGG20W73uSDAP5A4a+sViY8vZjkL7HTxLzUaDIP/wToR+FErrzO9wPgFiBRcNvHJVGrazCBDmVR1",
"PfywwJa3gQlE7FrKCnw8wNCkOnMoip/3jUFP5P8n9CuNGEgvF0e4qE5rS/Cz8PlzMe4zy9nokib8bJ+fKqxpM6igbxMwcxuPe1T7ong8szORhIhUM6andReKPSdrHcKEJvo9N9sadxtwUs74VALABlJKNwGVIVal57DP25nPC5+qEZk1lu+8nqc2Sua0LGf7MdD7UIYYI74iHkGXR3S843wyx91wIkpMBcryGPgS3yUh3xgfoodTWRwSN4+ZO2fz5qlsxvGIJbzq9wDq+ZyaJQqggm3uPbocaNM2LZq4ncLV5vSDJoPKr+Q7bN5J+I0o3DO5lQrYzTFq/WOTlGJBbVi5m7YbZIa/0Dfyd3qxK4pZpRZtGlXHZl2dsXj2BY0tCowSPDjf+WRWxTs9Xw3xMZdTAL+l1e3pIx0KpdY7KUSbUe7BA5yqfiRXdL5Po9IaIpanatBGkZYzP3MFw9PkRulB7VBVfKP5dB91sphGi/F6Qx2giekCa6orp1xTVn4/+8k2rbmHn4sZpev4kqPmy2akiCyjgsEk+97dqHFwe8ICczLapU6VhuVTtprvv0iKvrkMxUKNy4ueK0pU0dCDSL0QmLSeF5zeuEu5JIWOU12e9R5RZxcLL6EmmqM5600UOjcoLWYocvIrAh+ix8dnPyxcbrEe0WeAhIueB9eO99TdELUbRaaQXfK8jvM9k9/EI3RuUUzVGw5fjTS8OzVmn68AmOfVADJpnsFuqs2coHUgOmyKeVInCNYSl1htq5NgyjsqbTA7brIHRPktKVmERSMQ9zBj0nlkDLRj+poR4UjFhozSVVmnvZZ35k14Kmm7JgZmkDBeWQlAmvEVGtdT84v/FX/NiDmTKValxdxQN3nch4o5Wy6VtKR79PuqrcB80peU1rFo9OG9BgheUSBxIeKHbM1YU4j9GXHVOwbkG62IMSIOPOlpRk8bB5mHhYpdlRA8u6G3Of9Kcw3HhvEUfpGKg7iUAIGGeCR7udY44Mn6om8WsGIj9HIz1hnp521gMqT8FBAy1sGwlTvTCB/V9hc2xLPOtF78zvac1k1rvAycn4j5HPXc8cMj4xcV8UjlVRp3Qx7Kg3HjwOovOuoDubvPQE+M46rNjJiuhf4Y3OrhjBzji3NKG1cuOW7LYNQQ8JuGm53lhVIg3VtB2Pb6R7E8N5z8ZQASDJNvcx1+veNIyW104b3tZie7P03adyFiOlR7UakzxrDDSe/MmjBo1UVGZGPIdHTKF+B/jOqWaab9gF/8L9Mh8mmEGFXaP4hCEtaYf8g54eG2MZzTJobGJI3jo9P2xo7rK2LYvW8H3mxYt+ebt/MsGIkXl0ql9DcfsXY/S42OWuQ3YtoqAjwu35bJG60ObM5RxljFl4SrYxYxiI4XbJuqsddDOpuakB2UPFyPbDWm4RndSvP0sB0JOfJOGgeyNP33FT1nNdQI1VNBDZVDlg8G/SUwKEREvtHgmd2cnv3YMUtlPJlQ/OjcL4O70Nns/qUFjsRGJsbScoWNvKmoWrMdTRBTlEddH/YMYWb25md6lvUUgm+S8JMJmnX6NYC5ajh+AZE2sXU8sQzmVYl/0/AAhBQHopWadHLxQhzROstKDerPSPLNz1wHGaFT9aaoeCFFezPPSbQD+I9LLr3sfdleoQCRWV5rLwq5M3YHC0lVJnfHyBK0L83tSUsGcm9TVduRognUdEefb+D2ytz3gz2kc9SV0qON+QDypCykB/dCbqY80Gyd+ddyGMYrogI5vR6bE+jgV0zN0GFUslELjj/t4DBOc1MPiiFpBzw52TGTYeAhAgKqL4ZoeVIidhaeOfhxU837A6Du3oI+Kmk4zT4g0BBE/MzRt5hm+jYX84Nf0XEF5+FnNoUCxeyoxj3ggUMFjKqtkPyd9iq8nnZ8ueWafLc0eOuM/aJPaXvjpBj6LhaeqdkD5+XCLzDcYNjZ6zkaOw5AvZGkxE1cDN73XtoV2bJgJWYm6Ncau+PX7O4UyaGglEri",
"NCgvUPZ3IEDeTZie9rsYgo5JYsbMMICgsyKdaPafyVRUmyErPnrw32sxgwrxXPxPsC10+9YMTcyiXn+cGN6ed4q8E1lkqNzwh87c0W2TDr6HgZhQ5zIstXNg0gByI5tzZzRvU11Z8BBJt82atMRCk1AE4pfyNbhclSGOIXDXpHp/ZdaM8UjSqbNSoFt0VHK4GbYrxfFTX9K3GgLxIu7H8ftgVAAVT7z6nc6zXH7QvKUA/6mNBkYo35rJ9R6DkqtGVqc5BNkumnAH4vlL+F1uFbuB4mbctCs34Jzh8UC3J1tPwL89rjK+a+GMBbMNjCZCI64mZT6yKA3qKj08J0TQ4+kGmtoHYHjfLx2O/jQliyGFwUXZWdwBTVPI3Jlsv3XnNPEelkzrJ9Xtz7oV4j0yru1AduRGxlLXHH1lAhKRjM7+RpV9wczWD33Eawzd9mFo9wxOvHhWmYHKLYPdy7tBrpPrMzSVbB9dU4qpJS0LMtinGRwE+NDNf8oVYuuw+BR2XvGNLm60CWR5eovWuZAvtE6EBp9PTCKSHDWBXPgyBGFBfMGHcjgJHQKtrNT6eWhjIUsLrzLYgqlStCwF6NSEAfgUSjwY9h20m8hfEP/cOyyX6HDQcYVhny1KN/XLP/SChop0wMElu58yfC0uM1UWr1oP9GWTuhCxQwH8ivOLknx+MuUi3QIz7C95jwV4OdhVkSF9tkjhCsuSt0iVC8h89Dt3JJylz/w425r2l2t0ZfX6aJgZheWW2/fKNIHVtsr+p6CwiQPEoPRAX5h82/CAx7nONczt8s3RkVw/9lUZQoTWKnKB0irZ73ATQ6tNMoSIeRDsAh51wpUIHZBGjjyyZNbhKxxTaYumc1UcxRqbSU6adHlQlWnoCI+YeA+uqoAW8o8dQPWykqkz/OjY0NhjoOU9ZmaXZ6pgfd6+3CaUlB5D+lWUUcnKR6a4WVONYkiA2k4mK1bj1Cp/DGsXmTxswsWbw6T5xpcbeJx+JxfXkaRkEHscSL0y1XU7uR6NqoB8Ihk0MG0kXZiAytsyjg6Sb4ZtCvJIAmig3Yd5m04+FeaDHen61LqublwTQxJjDwlSR1gSsfLs4JfBpLgw3H/9ijyBLzEfSq9saQoBlYXBIwvBGot5OAIPh0hbdOnP5sPYAz6iKTtC0XxS3z1DAowcX22Z78d6rj6ShDWwfq4NQqMigoFx/DQR5hTFQEGqLVO1LYJhIRSIjjEpTIMmzBLej5N11/+X2BLoirrSkg1/SdBTEIvzbkfYszSijfo5a03TR0FfNMWBI99Hm6MD+W9fTY6GfzM8DKNSIVFsRZSuV1nuMMz8wVyS8p4gcX+xzGbYdxoMq/WyOXj+TXVlJbsFtqXFEK9IhJJGob+aT6Vr9Av5c0KyvSh/K8DURsuoKwbm9zuxhtz8V8RSrbEPFtJx38pmcChl6g4J0mSQkW8qxtskyLc9Hr1eV1nY6twVp6jivai2uvHLcbMMQIc04UMSjyR9OYo3txpfSJlXedz4UzLBuG8VpLkd7e8TFA1ZiFSkgb1Njb9f5WNxJJbxuIZxgy3cunmwyANpuDo7hBVnVF7zhsyywmJIcacH4XZnN/pInXVgAcBqAvpOTIO0Ih2lRZzQ9zNXoIO6xMP24+7dRRT+xbVzy8WrM7jD///CgIWFEtiHOpmgTjV2eVkJDe8wUBgtJ1EB2THfK0Bzo+TDB4wYaSIPxGcOvvxJwcRuSWgT0R9mGa/4WJfVsgpT/uNnR2fbb0bWRxR1Pz9HXKOtZBv364xDmg3S9/s/kzoZ0TgAZhkgq+rsK2orD8vld464l1s5KButQiv3oSHnrV6wh0c04hhHsft9DtbHoG/rvzLMhioC2FLaju0ypq9Nfk1EyRpdnKUXVd2vpBtZkEcX3xVnrNSv9Q/4E+KiZZhRHQFZrjzHcLYnGWUhCuaQ32CLhuyKS0dB6hZmeaUUyOGj2oNz0l0JuSyP/FICketqBllmwnxvj5oKgbRTrbOz",
"/GiLZOzcuyxh3fWMsXdMzBzUhGLa5YKHqxfZoBuIUY1UCRg3eWuxmFY8ZgrRuKUl0+oVo2E+wBbwxaEL2Lfb1mtwCS7qBBz8b/hIXPgVmK1IGZ/610hLl2p0kQQblKdwQv8WVutJsPYgXnPkPn3A6lrYGsg68wD18TECjOELgLqaUUM9bQo5x7zBp49A8YKaKjEI3jIW8W/SG84GDeh8x4xtQuE9tDQdTfb0remkNU2UFKuNKVnirXhVFEGkbFpBt1641YC0H5e4vxxCR6I48/kEeiwXppRRAtmjRBfeRqsIAi7VCnZHc5byDpw4U7vYeZUmlveN3JiIgcaoU57rSoFQ34mLkR1dO9Y2TmI3/TGP47h3CQuAorZDoKV7O/5pHkLeRRPybHM9AEUVDvI+EUwJLpz5HkudAw8EY9ugyVqwzQaPgviWZMhczXrUgL/esYKbLCYxaJoYpvX8R9mKYw2I+Fr+tclR+OaIea8GOhMSEI7AExDJ1DSpkz9NQHKA8vRaTx6Sz5NdNmnKmvNuzyRKeyIs0ihaRZl1bVMAr1U2abgW1ucSTtykSjjYdCczpOxIFbQ5OwFwAe7vv6v5knGLgUdr99SlmCzkm+PoYJR/Q5OBTmwdcmv8zdaazZ5tD3y9gnozqrtoJFY0ydqQW6ykuxZNU7n8BYfc5TOK6uL0UBb7fW8BdMVy8F1ibz4LxF2CAoZvxC5leE4zoosALMbU2Yq50T2cFFKWQPeKnin1UipjYrgZMz8fhdnUNIK9a8rTdV4cw5zre4imfnq4l+IIp3K8UwOpMyaWk8Q2zhgqLMuBa9ZTyJagbXAEGSkqGK1yqV+7yfDegF5eETXx+i6MLXtxlcQGP7UoAcs8RVRxKSNO+8lzttPPbaqXyKkSAFUhC/hjsJ5uYOt8VVr+e/dOmyCJBOyXMQoCPejUU0AyaMPM2BSo6WpsopTQd2Gdr4DupMkiw8kaWiPrVBXRjBoZnscgDhHhaKC2y/uoONXd/TlDmQp+WRzLI6QBTSsn/ax5W4/4ZhlyCUUI0kQKXPXiJPiG5cuZ59GbQNHNkljsJoid+e0cd4h4m7ZNjNcV2ogvQZ7RDtTumsbQi+lKSiqOutZ6CwLn0Fu12ZFWuWHw/Nfy1+xA6XQ6om1OA0JmvXvTc3a9Kn1ePTM2UkaH1xF4zeIW9vbWe7RTBtuj/NDPzJU/VSV7vHVEZvK8oXPq9sv7KF8f7inJh1Ax51OmociMtrDsq43WKBODBxjipJnq/pfmWCKZ10bnUJ2A9xxaQ3iqessdP1iaW+Ma2dnTOysBW8qxJSIXd1+j/46SM2ZnVpcWCkwFaq1ktadBYajeoEdGOgPfqsykGTiCmvp/DkDjWWVh+8fhI7flOoAn/RBb+TYSq2iQdVukWrFAlLUV6C92Uc6mfaGuBeSHafBi0Dkb8BrqrX7p2yXaSzr5obcOi9AYK8QATj+verJT+YzILd4huojljq44oU+TAIS1m19I6b4qN60aJEGNpBEZUbuPKNAzj79JBlxBX0Uomo/+rCCqg8pFoZa/J0BNZHl97AQsDO8PgZGAA/HpDGyIx3iRetM0sanoXrwB6N8eu+oIZMYRTFxBmrZ0PzVxUpvW4SKKyxHWLd4oSx+TA9Ao7LnJU0hfJEonHe74K/5VRtuBTnvbkzdRoCqGpq3t+2tNEzapQSlcFvrnlDqFCno1/d+V9cyhKftWhZm58AgFqQKD4WaIT1Cgpl3HkZRPxQGo8B7o+X8ni38YgnviC7uMZCU4p7JHcgUe9jHACffepN5bSC8FPs6S5k9WL2OqnlZL/0QjkkCiP8vDDlxnkcXXCnwfB/qSEyRntSQKAaLv8l7yDI3ulb+il7T1/nKdNS4jyXjhqny5iUrBlAd6O1s7AbiAdYq67ljNb7iblBZsD/fopePX+zBwDvaJxDXwUhiUA+21LEkmtigjaJIhEbB/SWXOka0AIjqZ8z46VpO3xEUkboKhBVywgWcdLpTE",
"r3AXbqSwCxgHe4qTCXq+Xq/i0RdE9YUe1WsMCldAfvuiKVZoqnJBlkXK+iT5UgClxgfvldYk5t+bARK6q638CjztwpFwm8yTNUtHGXbu6HHjYeqZirTlxrCNWYumxW1dD3Y8sGV8XsRc5j2aLXynP6mRG9XOOr/X6VRb8iP6UA5HI1Oe7CEsarvI/MTNtOgcs/entgAlmAhjBsMukiFQLgvorSasN2obKZD2JEVkj0b7guz6fM3pUfog4JXe9YrI2A8nuraODFVLT8lM3mcEyXw2Tpycct6vz9g9UKAs2N6c408+pAOnEIYxxyWf68j6htjXKc2q0yN8s9pqArMMD47rDNgQTrWfObb1qEVGreHw5KtARfjmsP7RFTLP9MGSTJbSRgVBCideUdt3yNEZg+z75ODe8eYbuFTu85ZUEnypnhc3BLf70H3FVfhOdmZO+sp5ITFtGY2VkkBoEMaH7X8gXmNhL5nGRAs3BSieeeD/CNZ70aY8UiuX98ZBgrTivCus2MDp0O2WeNShfhBRhI5b/+qOlt+K9sa4PSmhZNwjyQTHv6LJIGYXQ/4r4bMVjrB1gEAZWOJL9JZZkulK7otcDxnIodKzSOJWjzG+iAqGY8gqxvltvPPzRy8NKq2kV5ILuqmeZMZO/Arq1KoO1VfucKEBZC1Lb9Mp1Sd707nTDRV1bBxeKNfLQk6u8xBkdoZWEQPf9hU95DEiruTyK6aGHr5fgVPJoZDftLOVep2ZYh4DkFA13g+Baq9BXXNs/XTJQs9tAUdgzkp4pC/TEzsAJr+IMLu4yAE4LRSDgUsTcO9ApOG7AIqfsQ3mAAGfAALZDc/gYVoUIj2tacJ8xIn60EkQ09vg9ee6kUGdXMuHf8KRfAsa11Yw3i7iM8SStKUdVEyPi1y3g34ylqJagSB01EPLM6wyDWZG+uIDMUdPJAW3Mv9pgCfSjn2yvlBQDDz7Gd1AU66HZE8KAu0ReuHwc9Ixx0W7GagmEs01xjYyIs99L3sIWA3bbPhiz+SRWj0157p0wszWgyGO/l725PY7kYtTTZM8GPdNWeOV9lfUgvjRuc4qWqBN0GPze9y9kgQe6V0DBsPtZus9MccLIOCnwJq5+DHVnVMVSAbDW685uAyYxrNCy/eMT5r1PF3wj2jD2fFDrw6SlcK8SYcIKVlcKtdHkv2hdmfIwco4qVSZe1tg9/CQobvGaL4EMXftGXNekE36A8zWPhu42n2In+3zWbliYqxhC/uGHqhIpPA/3PAcq6PJgn9RkBftgCGbkblF8vKX1atCgYEO1njm+xQB3pCw6MnheJlb9rRDh35Vs5i8+cv1vJjzStXYeuJfUoj67JnXs1wV0h18WQif9dLAB3TEdTuOHaRcHfKeSVPoCXZkbpdimJlzTOeh5uJd+I+9H7Mk5K4Z3IQ7Bxqy5KnYNwW43xSyiN5ed/DcwcqYmhfpVQV4pKHdvqy9Kit6o6TBkJbCoLK7Y1LuiKE/BJcxLDRSM8YpdaGer6PQV4IH+n34rYSLG5fBk61sBmOVKmw9DULWu/pa4LRsI3H2722AaOBTMMu7CnHwwlP7ILrFbnWNSr3b9r6lfQR3svL9TAhRat78jtv+2ScPin3/qHLH8t7izlaGxOoDXXlHPUkHinJdKLtTMU5s56TgSFEfaH1Q0Z0i+dsspi4wY+KJ8AlkljGHysBPxFj6w32WxIbw1jmCQQjQBneu4VsijWfR4IRMLPh7V8dsmC5DvkHp6Wl8hT6EOEWfFEl7kYD+cFmRKA/g5MWuRxpvjoSwx9tKpakx8l0JoV0urJyygdFsYPd3vSdnsQERUyKJKXOdj193523oVmtQe8Ur4AZY3g9fHv2yg5ZBMW5/A5EXbzrD6XdrTj2AMMDISUvw57+CG6So2UsaB89Sxa+Ste1L91veBU2yH45NqrA6xIfWIHVdl/iCBWBCdCAOVsHo0rZlWeAN8nxH32dC65dcIpvGj7FTtt6IlbHWRFsQqj4/",
"s3C+JwSLFclwUD64gr5L/erm8iqToBQ7wgBH8oaVuyGPupuSE0BMNYKax1xRv1aGJnnjfofbnNR0qUZ27S8tUX4mHAPw7dtq/w60Jc+GvW6gTf8RSOh5cP/6Ad5euvtyp9P3DMjLFf/0zMTO11Ny8HnSt+swhLGTY3aNX/P/kPet8iIyjBS6yQPGiJWbf4rfPUURU884HGMbNn04Q4H4gpuXppgu5ObOQ4MGGHr4Dtwg2woPKnSrhqnirRGO9hBLkyk6TA/eAJJsJZTRm+mlxTn1T1MAgXDYf80RFJn+g+o6Z0tPX7fXPf6gNqZv0xM+PGXXxONmMBeB4vtgmz7mUHTYPD+7zo8D8112GZOfZ6rBeZ1U0lrAT8MfWrAIxsDGabL4wGa0gf9KmJGQPBhN0oSgjQcQZb4qgqFRxcKeFaQ9VJq2212uaXYrz+XbyOp6/1YUm+UTTXrtRiDJLHuJNNvYfdMFUE7MpndLfmTdSGdTcBHxORefjzTVc0UGkLNt9PYCvHI1tenbLHFb7tKNbx+DWfuTsxhrO6TRK7pfIGL0fLYBsFk3Ml47PNLD//zfGdWHNtF9O7T5b7TpD230HfRCi3jPoV1cAU8VgyDFxeUrJH2O2lVITQ/LVwlvh1xdBnDo4mWQlTUFEbBNvrgN9GYpH+MKulCH99M3uHSQrDiS8g3vvxH8vxK55Pf1E2FlChW7QnQ600eTV4sXFtpPd0u3GBeNU/8OAxfyruVrTEowb53pw2oTIQCIdSUMMmkfOKRZzFVkaxPVI35nt6QkjLcUQFKrWDhVsxODmFFgyeZEbA/McA+iQRfMZurLgu7gXqFrpwuiE0apsDn8qPu8nEPy4Qj+QyBiEC6UITYiHbiaXsE+vmiDMfOzZfRFINGtBiKsg+NtgayOyEU2ekLriAJSnd9kmU5mcY91XKXlR9xBJAQHlk5WFV+9I3j/3RrBPywMdk4j7vIVtYTSUtO4S+NP8k+eyPPf0xNK4Oic4cFWm4BqCrxnr1gmZtjd0M5N20fc/PSTiqVl8HU1p+8Bw+S8N89zFH7yEiZSrGD3OEOreYrVbGUHQ+KUxVlZRKE/t7uXJPB0dA/EtCrAKhxt9tPoDPTNCMJ78iuE1zMHSJUCzz7ldXprpGpY4rubLfKcDjFh2+V41vEPqKwlWL9hZ6Kmpj3ZX5kzELF4Onr1w9g8sDjrZysBb40zS1oOj8rMxK26xgp8HCnlGVkS5EVygVL1rLHE6FUKeQwSoGIZMiCmZvoPSkZlmRXK/eXN4abNgdhJn0D7fE/nDLDR7rKS8znXucIhSO5KQ7/518gXryuk8MnQfJEaYKLG5OY36Dvjd/C46v25KtjLyutc0luh2H93kqn0euz3IhB+GbjF7IwDoM9BAHGQWDX4eXZ0dPn7km8pqkf+oo3VZdd0711mBE/fF7FijjSlpZ1mEZIN08HXkL/ODMk9I5QRVLUDq4ayuwxJtVi4fzJjGAqPaW5NOgy7+wwjmENr7ZC3mB6e53QbFa590XHgoXXy8/0xPVKD/eCJ1yba8JvhaTgMFX1PD3nakAx3OqRBTu6STK2FVJAs6M5YbZ1+GSSqQbkPds+WIZmbxMmoEwNoaBElZFX3ycjeXlEyarmwMHbXmJYk5SYDQwSb7Bp5dv2cga+2kShmodmpFQAKi2OA6AQpPOKwRBpCvS2BSTNxFewFfnrq1T2mCoFm3ubxVsjGOULD1sIZoFYyEGH4sVTBzoHY9sUiNVNyDOuIAGKL6iODq7BiQDcholrGyBiOOiwYMdlV923rpZN57J3c077HBH5DPHmBzYb0fPSavvq1S5UpXtzHFeF8dIeSg6ey7K8BXCYjDH+actkOOBBuku65nUcBRvE3/jS1/jzTe5tDB8vLIGGRAeZpsq0wznQHhEddE7TIGAHUjt0CBLkMTyh++1W1vmzm8cbaFBn25xWoJ/JJ66s76yOmfCHUYo8MZaZM7Gt3msg+glb1Mr4f4S5R1lQh",
"MLzNr0Xwio8hoVdQCpQOlDaNj4Coy66hjPALlRFvKPlq/0Nc0RZuSpy/vJf8MAaMlVymL5fk96ZVUXzxZPJFkoiklQ7AXMvp+olirTkbWcYoH7CPSniukRyheANhAPDPPE5AocFseZ2nG0wUqS1pUTXWtvPSrQALtM1Fyx710Y61/poZQh0KhuKcQmXxImVG8m7dsctL7VLxKFfu1LnNd4OewMHQ+z0LPIkwkJQdKDqFSRO5QOTeEx4OI6CCVHRrRW3l5zLBt6pZp53I1wkKYr2yU1eugHcFdUkgoYd9xh1XTtDujrN9sFvnW1J+Fk0C+QaCmIZTV67tyNRrJ05NU+bJ6E8aTpb9pxONBDYVy12Xk8dGJsU9m+zuNpNIrX+6UdRcxhlHpqgVt8ioAFiHrhgR3GZkTH2H0b2OF0fu6SXhLtQh+zpEY2ylB+qE0XTRR+gWKJ2tU7L4FwM2ctGenqEYZ3xUQb1GqvZKBDU9JmcF1jYFtDaknL5iqrEhTkw+IxzWIEtO/NCk0hPxcQ/sIKQXsAJkvZBaUtYffCyJ4NaIJQImFX9xEBY0JXcT/C+xH5k/GiTQ0odTuut7dxszMwSkuSYXh9rORu7/QDtmYiPQrmr64b7XTE6pGpWcZ1XFdL6Xbbo2LneyGHxh885Wx69cllHsnzPm3JRmhhpM0AbsnaA1ABj7n8YFtWq9XTSe9gD6wX6Xq+4zB0nHzDNzVV2BoDrB7s2DShFcT/RgcRtzCXo6L/2+1ywhZ0GsWB8dwwBV4XTdtAAY81eF0xKlxPCPOfhoP6znd36rO/vdlnakkzeEnUaKROrGmu19eiOcAd677470IpIo7cLDcMmx7kRnJvzZ+zYjbZRzxExKi9MFnIATa582+E0N76a0a8Sd33HPY1vH/lgCu+nb6XKSFI40IO/zQsZook/R8WBR6QIm5zn33FY2vx/6AJL0AJwhjk7o++9aodJ8G2TH9fS4fSRaj4ZQpauLjAtFy7AQTW/Hhi52PsIqYHQQ/WiYQ3gIvfU0DXNIUUbGLyyZtkY4yuOTtDsdbh7wFz1VYUSMdw2VMjYXgIYfR9pKplsLHbaRpOEmvQM82G7wERyZMK9NSX+9MMH2kPl0AI3D2Byc8H5eNYJdDd+tKgZK1a67gu+U8HHPMdDr+p4Ilp1VwTgg6ve75yMv07H1GySxbZSgL0PNBDOxCV01BVkTdiW6itUPaBVlg2NWl87b+qkh+CbWVLAnqnCooRqHtOmtNOhhpKbyGpr0jPA880N0bZwSOSOiP7tA91KelLPE/kl1CxkA/RwOnqh9/Ak5NWdrlmwQ+oC2beOi//PkmV9P5kRxvbRF2rbpO5TZFalcMw4eX14Azq3HWxfBHcMwI33F9ig4e6ZT5cnLuuJQtCYnJw02oKg+eBQOZnmWRauhN/TzQ7NYB0mSbni4xxPAYrgj6KQO/OQAI5935exTGFOpYxlKoeCn5hIyvDP0aQGDNSgkN+WzrrGeZHbzTrgooaLdL3C4rKLKps0KxgNZjTi1Oo2myYdml3BewgeU+rGvUIQ7iC9YQuTeKxYYVqeSmTFFDcDZ8TJw/WQOjEbhx9BBhA/QdyUmvYO1bmoEmOZBTHVQ9EBeh2h39lkksuPXKu+CzecAae2n12vmYiLb+HSmC07TNaCN3N66/oQg2a+tyNoq4RwmnMgUH0rL4qkRGtJT7AQuMNJBxeKz2bFI62CZo+0vvS2pB9ZVzTWDxQnEVUD9uk3t9P4ayzpAvDVIYCgq+cATVAQcxabEI+OvaNG4QUlqB8GGIepF+asqyEg5vJirgyjOurat05isX9+2QsCs62j5XOqQ4any92FeLVfuDnpeVsHVWb3EyfSKfj5ZlEBvwEe5oinH28fNEPFL8RvJq8cs9kCHjvZPXQnvg1gYuuorxvAleX4BfwU4szH8nIhunueRE/FBWmBaxWuIHrS/YVuFun3vyZLdSRRiL/0RpWkVOm2LYsZ2hi1XdaIbCZBG",
"OGlmYUyb+gGmPfDzPhd1bZszdNT4sbem9fRfkC3L9xGdDAlkLMGrP1dru8Vf7nXtoAqO0NQ4b8lomZSvVmvr340TPKJFdemE7Vo4t1OPD45nvbBWcOlxhjY4Kwy+JkF1uBcOQMj0AnTcYrZcypqdpxGFZSoiPFSvMEXUHrKwetPUjIxOyAssktqntjro4+9zJOqmIDI/34fRBt3+EwHc8Sp+KGjLmg0fKhWTZmgtOzg5hOoBE99SSHdbmiZ79nCMKDeh6uuaKOsxO7W7RagAZSQF5A5ZZYP+4NN0EHdGrmSe++n4eowno7wcVo2oW+tl0+OSoA3jy2h0yG2+9ahDI2bJeprerN8vBfT1KI+BmQpAE3NaPhO0LAUKaL/T/0aDca69P9nwKyIXLcEjNB44DshBe8OL+ezYja+WgmqYVnKExULA5VVmZlu7pbNz/O749RBazm3kI9o4FA98b+P0wQYKRg3xDJMvqyTuRdhgi6Do5vN55R7U97aRQ64xNPVtZTc/XxvGckOcn3drrYjCDI8lUU6aqUcdCpXtaAmaGjwWTcBMDoOaF+NAMnyM/x1FT271JNoeIlfG9ZrBgCx+r7JRAM3rIx39IlxJkOed+AXW94umGe7tVvCpa54Z79KSeQC3XFvHv9eTIYAwruV2DMp22le+fnq9dG7I2HbHxmhmDzP5VGOeVPZx6fH+XLTQJjiIUoF0AScemXx3f5qWIedK1sOokAWpCUMVqPaIZBNiThSsWdTBNS8YdBZtVhN2P6VNE/mySRMgkKnnjGQpdYsvclYlIu95QdPA/ePqD46j2gRPeR1aEQrEAszvvf70/EDspv1Ui6PlhQpbnccSxFoY5bTTTGeGUKVgi0l6ojkkY45RPMNJU2tnARg35kVXjo5OFYxuB+uhSYtoOcfa7yDq0KFRH8by48v9JFeJHkyMTswJinySC6BK0j3Woc6mCs4eM0k2BL0LnKPGma+2Xclhkjtr2oLlibVTYaTWW+15vKW8z6cpG9PfeT11nmfBCnbESF6AY9q8FLA6qPYnfU4tbUM+SCuNRHNiJ9r+GHl4+dEjBufgKbqekfR9iQ0x1/jt0XSgK2ArzZzt7AqWIgCCCO4yYEIOBx+Y/gEsqxntpIYyxXmueNefjU86Na794dNSxYyQvhpelcYwaDEaL25ZnR8zwVTi6L+8wja39O0qdapdpg3Y+sOFx9iA7zki6h495yuUKrrOxDK8DOeOGyYHuER5tbpEHpdo8xgILi1RXBIxVABm30tNqQ8vzKy33psd29/tyDAtKqq/dzDu6tiNY7H0TDLhHtxAsQw2FXfhQLY8BzB8xd0wcvVOGvd1bnM9zQTQ2FoJuCoMjVg2iEsT6ZKhjJx0Clth0mHrBUOOm//NMPazATds8ObhGlMleVwseVCYO5qt/n8rFLPDis3qSSAjc1xK4seyTqr0O3mesIkRk/W9IM9mDAM1vW/OMR5Z9AteMgtuPrJKOLdMbUBfQTRRjwY8czAYuzMJpaJSAm0QzBr9gKYK5N6FduCGy7DryQrvnisVEw6UZjokm1qzXGDo4c47Z7vNjxw8Z/gKoIf/De1n6mWq8c8E1vtSppwA9lAqWaLaL9b7UQFFm3aDI0IYsaPFieR5XYRqZTBSuUS6uQ5mBoIt2TC9HsqB/iSEAAn3SyvhBSIRkpoBfZhxZSFHduzsTpEeBb+ZUskMrdheIZ0n38tqFjzvDwuCVYEeFgiP67ZknCMTFoRQ5vTjbV4wGDuxXdsFq2Xe8EHoVC9kTcaZIztikikbsrSHX+APiCZARHpfC8nX3nsVSH/XkQQTyUowxEmAQ2o5ZwiGMct/UXm7i5JfHnEggT3VgiKOicFRcJLHLU+pF1hMelWVcJyHV8nY6giOzeRZJnbPRrfL/jMVJNjqKORT290rdRAYBBSa04P40sBHBATx6BpKgHEfaCSMUZSw3fML9q6tV5FX1tcFEIvBd2CvuLTIj5xDhk8JiBYxiaX3",
"NwYGRTBz1wNt1gWVW9QzHCOwXT/ytoRWZF9LX0NpN2UJXfjQRxR6PQw2mhlxdrPiJ5yOMbexXVjFUd0wdoHQpmNIyibo92zo80o0JAflpKWlVj7ZhG3VA2s6bWaMPiglJ4nT8vKlEICSUD0kaNzQUuC9r1Qvj6XWLarx4q1lxBIYmzJ2H9eKayDnGyLnWTyairmkFY/MEQFabJtl/dwsfUCAKkPn5lazpnXXTEGdApLQIehdjC45vGctmmOcc/vvmTkfPoEp8bLrc/y9gupLm+kdYNhuY2N6KwWnxymTXjAeSaz4rqPB6sVsCYTf49lBVNBs8aNpqc4JIUWXw/nScaaIWjQShdY6f5wPRYZ3GNMZ0cRpqTVczkGnOFKyZPfD+pgMzo3TwBrQPp2D45/4y2hEAO0y3Z3a9adlzMLBlQcktmjoArkCZFKws5/1GTYHbP5+u4Qi1z5MudGH+v+pbhuWvgRGyTiixU4PtgzLRqiQvwupesmJHymmy/tYIY1OumEP7xGmYZX17giLNHOmAjugkk5dXe90gApYhm9N9NNKVWboMTwbm3k8T5YSrp0judvb+hkpjP610/cEBublZLWr8Uudz1VCzXPU4HHXTlincmBoVOJ4rQ0dZC/E8kssk+B6COwgHnAABXSVL5EViVgoSDvBkjOE4+a9g15hwCE+7yxXfdGwNwiFGqi1L/fkbcjIEFVJccGT90fsvom5+lUHEb1RwztNkVYpABaae62g9Uv33UHDmIMZaS4mNc0arBy14Qw14bKxTufJ+demKDUlmI+lRkihx2BmNTuS06QiUMu+FEKT8y3Z/7LG6u0upuvuYrSEPzGPpIi2vRyguFJRaEgfPKuHcuZjtEFxLimYYGjPfgKF0BhxYIH1A30NeFczkGOo61RQBgH46970w4mz4RrGnYiSDQaA3BkbQRRWMSq4Q65F3BGBenzOLbyjKm1UAaGPqeqnNzgchOcGr3IFHrI87xlqHIZXhkIk69IErjlG5uv0X00MR5eHEnqanFFQpRHNGTVa1R5DT4O34CHZLD3TW93KJAoHjQdE64kEOrFXzX+PNDwhdfo5U5CgG2RzuIaJ2gB2ZtbU4Xib1+SRR8D4T38xgRK1YJiMx+Scnzfshhf9S/zM7jwERcfqnPj6Neo2/XhplRUjQ0hrH14led+Ir4aiYgXhc24/KH7BOlF1dSb0eQFnqHrHwzxxrLtXdPAePtJMKx2tOnMl9IlERrdk+cfoAy+2NexD0KAtQY70g5CZbSr6CdGiDJZ+DsdgbGx+65XQNGhuiNgQ+ZS4Oc2r5V83Q5v49SP8B40zBNUX5QqjB50mFCrNAHeSrDHSEBC0mVrcQLQ8APWb0husUZ7NFv2+opAMeP4uG8Haf0ecLwTsTqfhOy6YG1tHny+R4wln/hXYqY1iDJHvtrFcKMwV0Pn11+E0CE97krDlVy9HnoH5NJFE7fljgAnU8U0/y9/OmHhyzSQ0yuZIctqKLzCWiQvafKMc9RV/KPa7ItQcHC+hF01CC5t+hOMjkVqnsRTLAokVcCVslwYohGqHb9PG5w+a5mTgz7cQbB3wgcg6NfGjW2s2D47/LbZnFWNdr3MD+xG0P91CkvAyEJyeq4Nej1TL27gzSrMSLTZrzIwYotFAfXn6gFoB1dZx4bf03w8m1LC7zA28zEQXBx5j1tyCVavNgZU5c8JqHCrHcZrbRLXluiXrtjPVC3gTmXIQXvpfP2DJPlGOAZp5NTXKvw8gxU0ZgQ1cWwirzYpNnh0uMOVCe5W5y5CJvJyYOFkQE3n2gPdAabQgCwj74N1ZNKVyj6dwBbC+VtORfmSwDTIrWLc6wfnpBCAii048Qt174Rg0YzcqOo0dFqdqwcQjeAslL8QIR7pMtZkP7bTtBw43jYYDkmj7WCbjlhQvoP2QH0675+PgOuRIlFw5WLVjKvfwkrE42Ql4VW1xhlnNb0uFXC/lL8lPf36nUhghONJzjLeT362eS00z",
"8eODS5pdsatIhuLLfzKJWKIAW/yClW+E+zSg3aV7pA9U6eeDD8CdHajER4I23IAB9KQSMp8Fm+fASfC+hohwzrXNBzd+kQWEfKdCQEn4/Uy3ofmobGY2G48o3jrrUEEpfVQfkLC4NtdXNMWh+LWzlFlYJXpF/IYLy44UPhSlk8rABGiQliiCiE6skAJKhzuIRi/es3NyWbb8D8MDAff0O1gwyDU1Rher/iySHzyLNujJagHiEz1dAJl9TrC4xmAzXdBxeGhil+xgQDwJ3P5FLFQdGf7gl1z/wxKWesF1G3N0BsTS/hlatolx281LZqMZqDes9NBHj3+098lp832x/loudXBTtAJmDAF+wCyShcYXJO+rNhNIrcz4sZYvgbgpvukPL8ADdpJztr0eC4EH/dzW6CXvK8KMLd7Mox4Uh0g+ITrdvpcUoP7CE92wdSrtD9W1uTJcgKR/442+8nv8Qr1rQTVXbpULFrnO4qW+YkbW8Kzm5oWyPLckNKpH1DCebgyTnEbwq+mMRa0VtrXkGo/TCigrtPwClYiu+rkWzQYx5mOOUHDYrbe1D2w2K6qR9qP5YhM2wOoYjp8lxoEgGXay9QMoziJkCvls3AKXlDEqwFl44dbnCgoT9RzUgGXo6bFenrwoNbBwySMt+Sfw/s8Ysc2AlMp75MSI/i82kQlCAaxBvHCJaA4K0L0xHm/O9Spt/yGAwO2XBdtPAnSrgo0f3M2aDV+MyNuLuU4ogJIwtDakx6xQVgWNwIAx1Uhb1yV+oO+GxKyR+At1VDu+kQVrjHSA2hglsYeiKjZfAoYuFpjaSyFI953ValwCNrTu4krk/3FsXxzq/gbQUtsDfOLB+oWh5pV1IFT6awqb5u+qrBfnlX2jwEisvaBiXXRmsQgw+SQmNxjkGLpYR0Xf6MbLTcFN/usFPp7bloIKCgGH0rveP1dbsVXeBbb1IF2y9m+OFWwa+z/cbIk9Qbbnanfx5uHqasT4H+424o2mrKtt90PhRAg6cN39fIKKTBXxtFB/9fRF7MaT3sqMYRKIuiYvAowK+Dgb+AlB4+hHbSVHl+GAKgAP3l1nYiTflvuuWqAWXYkzEL7KkDkgryGVC/pDPigz0c8byeLvpRY2Fu0xsjv3+NyN9Y/iT+Gs+6Ry7PfdmH4liAMHRqTwQ5fO5aJ1LvqNs3cyN4kkmgEfi16AHESwmYTJV8nazyYUhF5iaCmTJIoEAfncY3/I7O87hI32Em5l8n4JsNB1bLUdFNPdg1Mn1uc7dZOmbf7ZMDcZ3ZkSdhTOp77nXHNOCagta6ZFdibvtFNkhN+xtgbUTUYJb46xU0ta24o2pTk4Mnfa6KM1163geEeX9TPKCWxL24PkXPxQUws7G7M84eqD2f3cZT4diyXx7viQ8CLqjJw5ZzgIREppxJXGyUZ9bitpvoFuUzka43NE71XZ74NHBwUDu4EWWw+bWVc1s8Jc+EPDW+pdjCgsvfq4WQmo9bSKeMahgum7CRNUoSP5kzbhvYI6M43zNU1s6UVoWd4c+5qeSDL5MmaJGdNFdoxTNF5Mu1koz/HIJI3GA+/O3ojj3lEdVQaufKFyPo/prfRRFypiJ7utWWIu2QxsjeQqyOOXdbBKatHwkRRTggEa8VcQtKkl6HjUezraaQ3N5ymnbaCGCIJfjg4W1GfZWgXUi2810AY3LA7hHnpnOeVIXn4zLId3N9afIeCDPVHPM0/rSyQMF06MKLZ6Hrdug2kYR2GW2ChTlIfGSH9Ll9KbPvSDxQzqc+q4l1Lkamy9/NFBmRs8j/aSsi99eNfZPnIQtquO7Q+S+RBdQdOvqIMs/jWpBD4989FPeGWipdoY3DXCB6qaWEhJStUEin5TMxpw9uD9r69Q47JwJlnKavQnxqdP4hOHd70A7uwvRczh6tI9Kk8tK44s4L7simF8RkwvRnZhKE50FBa1JFY1VRvobrr33Y08BS5IxD0RaxJsqauBIbMmr6I1GKobK2HSTaq1",
"XgxyJcBBWnWInyl30pA2cXadNaiZ5XXT94nN07t9mjWEcD1wxERPxGpBKsOwZbrlIxfPQ8Brl4WyjacCh2b+EmcDKasSYhTXmsx2jbgT7FPrk42VWTqo+fphqpAlSEnTU7toiImvd4vO534XMlQ0huSJ8EPvcLCNyv6OZt0h2N7FdPrN0826vINd0ougAY8oPQWbPna0oBvx8aDqvKgRHpGJ7BJ1vAhcGvf5ZNFl3AGZ7XsLDzK6BftllbgqTV6JppPJ6tC2gwY8OhDXaREdoqQbDxbK20HjPSz0cxReTo8QdN0xvOlTqV/9Ql5wjC96OdvbXQOMjiheB85gh6iZ9Z7fZi+P/PJUNjiZ/zSTJT8y258LtshwKYkfT48w8B8n61nkZuIiHJxB2aoA77iOEhoL8lV0ZufCrxyvi7AwMu4kKHRADoGceejFIONoiGTHlGxbc82s/bWJiNq87KZ+JoFJZejuMinqktAklVKzR6QYwiN/1g6oxp0b0jgJJAyTvRHeR/9La99R6dvDTildIIiEyr7KOaQMxVl/DI289gv6fH5AQS6NFrMpInRrM8fcnwmV5pc0bx9M/ppyqL+mn7x/uY7Gu3V+IC2PzkBX4AttVEpiP7zSesJ2NBi15GXBs4ROKBgw+rt7VVArAo9+HMRljCEHiPk0aPodXMXk+JcbLOs9OJX7nIDnKwUMOWEzqNSZIlGfmRzlnTdSURfWnqcNHryW9KVUU0sWu7l1e5j3rOfuOuOTN56RDErQUof/C1IVAWDgN2MTt3DsI1xghLB8SHJkiUENVvHetx3qXmP/xyymVdhL2k9eCTB+kDW4v2uJ4DNvtLbMKtK31UtbCl3I5dY7tE54NOquLlK9aubO0wy6RI91ryBOmd/1wTXRyPGyAmO09L/El6zlYcnZ/IB7LltfkDB+w5JEql9Vz0fVF8HfBoDMY8zo4kKlRu64HM1d84BBAYzrjzxNKU5qaOpkeWClPn5W6+ZFDvczIEqXaFaEi4MzQb6OZOU4J3VvCppYfTSokk+9gvcMZ0UCyLq6rvrrsa+cc46P8OE4nUP9JDdX+kOBt5wF4lSIAfZu2pelEEzYwSzLKzuPBVV4+GVOmIZvAwq+PgHItyU6JjBxqLGgkb270Bq4bl2Tg9IwCVPBDm286LeCMdqJ5KFeISOFiEzDuuM/3YCceXLabkZRfyKUTDDZ9iOSbkey9ZsJriwqb1+N9zX+60tTkC+VWJTBljANWSJCzVkT5lYNX5uizr7vtPjshScYJ2yV3PTU6y5pofw1pKmbSVRO1GktfcI1l/jOylJsRnnze772nI2yOUS+05mad/T8mSdY6zb+yoIa5j/Fu3/AnbIxcqQ8cbswxCLNZ/ZgNcTsc1Bz14Ee178fc0HFbjVz2hCA6mpuCFCcA6GsVaW6yx3ObwyyxXyHNEvFMR1fmBVTTOkesl/FOKxC9/psaLgqtZz6pAR6IRJdT5a/cuy1JO52ptvnsv/job82LQiEhzWc3NgcsqoeJbdFMxl+qwWN+bgOfIsCNxiNt4hQJilG7IutrpgEL9Mhj7DS38ZLqAKUWwvBrgMuGiC5FzfkvtbywebmDs7VygMZwiaGpJwRXbGF+OvYuKBZp7sZ7l4WFcv9OJTZCnY4FeIzNhZ5R/5W0hNvHqFbcaeh4Vp+nB3FIwhVPF5O/bOdEO7ef9gxL841/OkImoF/I+w2x4l0cpJ1LUTu9pwGwFmdhM7Pwebe2/aeNIVGjw4xxgNENVtPLvqIKxft8Nl9hTFF1SgkQfqOQkhIFTdCHSE3tRoK4MTq7q2sYCF2N4G1cN9OtTRGNKw9exmIs7DwA9rX5Fi018NiqOPyIz9UKkr7KmUbHO2sf+xlTOG0ba/D5FDevU9viGQbsqFCF+atX9k8RFPeuS/gpLqCqam7OoZTbDZSx2H0m8EUpNe0SDI8Q8Oq3CbZvz85AHKYsLrOSZf1TkGuUH4y8w6XG8fiKTMQVi7Gsp0feXSa",
"gN8GXJ3z8UB0guVK5a5zv3gsGIFul5Asvuyxs1/hy0nKrUmutVqW8/h6UWP+gMkvK8yXpB79ug+hYiaDkb8cs/QvIiXhKWpo3pDC/gU0ejsbJ6DcIZvA9Ui9+W/w+BfqnfRFrjFbbL4L3swdD8UqNPOpilk8vOmYOFYbwosnVKgJOKd4kOHC2XI7Fvm6CUx0+G8Wxm+MCor9M1lF4KHdFk+PsAaFs7Ngr4Vp0gVzYaJsfxH5z/qhMsCYC150mpRG/5aaHpW/yn93hyMmoaBz94mtBGKWenA9H2ZdhqfoeKx4CfwLusmlMy9zFno64KEv5sEOaO9HYCArbxlWbyO1mknrniczPls2+CIeHzo4QKQ/fhq5Q8TkxqRVKWM1R44qOZduhXcgXZUcUcWq3a7ZaHq2R8OCTV/a1wo4bNBC2fAEaPrz8d09AtPmdIQyJbzUsieHtt00bOYzPGfmJ2TcHW6BvPiu4br/qJS5qqHcoWyhSt1PbF78nq2QUSYGAuDRG/5PWSD1bEtAGkMFKc2wERauv0gUjifRXZy/u576b6PwU4qgBDJdrlvGSs5ZSYRqML2Cbvz3zwJUq/tCj6nEk7vomxBbbrN5KSY2f22byoolM3ksZS62ezwb1WvrTGjIC0tuNLH13cbFUSFKR7SOSlsU8dQJkvXlwtjutwLbPNi8kYsEiI2yepDPWZU3GeeWzWxBEYtGW5j1HB9E8KUame2mEgPvFXVWWcROmYlVKRXKR7m/GwCqNUAHts9xxZkm2PegxIFo7igY9a1uAAomDcuUYpuBbRYP+dPUQrKGWyYiMXWHmsrigKpw7gHH4keH8kYcSTUv24RX1Fhs4YMLqU5BPTCJTeLGnQ8qRiRIIcR+kAHA42BoCRZHdiJSoJqdXzQXI9COLSz1BUfD6f4lk6usW1u8HlKGD4SS6rLjhl3pQncRTCycGXIWAStMDsoNqo+/y0+CulqoxRCkGrs5VraKZZv+nuWpcx7/gj4eZ/jJGzWOo75NAC3jLDefxOIQVXdHYrkXnv8OPLaZND3Ku/VJgSr9dYpQ6cMG9LH+yU7YBXVC/Si1SwY1tFqREzKQc39eYNI2R0J6XDEBt9WVP/DfxT9kxfGagyJC7oi6AadjlhXskEH4h4U0WM2FDJsuvTsvmtYhlHsbdYfw0TO6ss+XmXxT0hYJyRpV0VWcthraqtLSyZrD/VEz7WVp8QEhzc5thdnqPbJh7KmRR8Pe5a3Sx92+3vpd19uzdYQb+JK9eKnUScabNna9tsGs0QDBisLS53yZ9zGZYVd3su7WUg6Ez9H1LS0gaAq6P3oFLBOftARCmv+zy3smSPMKwLfs50JG1hdm11rpK0EvJ1pDTr/bNI3AIxr0Y+fnkPlE/yjXPbl3hhbCChQ1ZdktMKKm5A0qBgcND/vDvFaZEcR5h3ZXVm4tRu40iaZhsDqN1vBALIsiJM8WojFt+ft0UHBHzPm7h8Lbm0x6v1aRiNRyEhPU6kyw4Ko/AMoo2rRci0TWP7jbYQbu4+WkQ1jVM7GzU75YJga/URV4F9Jhs4n/+HPdzOC9nmEwLivyy5aD+c/hcresy9pd525d0ybNle3lc5NjYbbdQPm8CHWHHtcP2rLeIcR9deBDbCi/ZORTi39ioMpWDUJagC4NERo7sBogwen8ZsZlaYP/5JRapaoMpz8XayDQ/22STeQWuCgwKutH+6R3VwAZdmp/4dhNmR8XYuKEgFhh4JCp/noBThfr9M7ty82luF3hphzWvT7yxT/t3rrpyMAXgqm/8qccYmsNILYs6ZluipGF6K9nvz3A+h6LdcjK2NeEFKeyIqdId/bBdhoN/I0K8ZrvQaayrbojy3qfvkyPeyQc1wDmGM7OFKBjlA+szm9nY9/eIEbkwb4JAPCqlA2Ip85+XcntPs0Co6iMsM++p/1ME8KRYPizjhw10su//0vimyFENWtSjkJlums0l0SrAPYYJIZszxK7glVfyvETkWbvZdLB",
"dKEbP8FsH+kgRbCfso71rcshgdTOrntBLD+vT+Xiqx4WshX2gMsOQLxE1Y8ON1vVYMN1jBDbxPHNT7n40+ETlw774puDDGYg6dVPp1+bohNzZ0wr6Wmzgnv+yOXVA1xXNTnpN8CG5zQSUq1TfZw0MfSH4nAfbzz0Yo5xSDwtkexqpIT+FMqT/46mAwcj5BUh2pKbMhUfro7yeKIYVIL0WNmRufBESH1wwHGmsqovrrtaVroMFpaTsf8GRcYsE53WIDTKhS5wyd71qsZXTJ5MvuI5r9WdMvpCgSYR0dv1WoGQ0dz43kBTnWAwCCSnQEXAJzhl0IXjPhpHanUAN3VfyGTHevIW+mD8gtbG90g0V3yn0vRR0slGyTONMPGhFw8YwEonz3yxH0UnDwBm/gITysX/YviiQzPehH8MJ5ai0I3QrfbW3evMz7W0+Z76X9UagwcD3TUqXKbfVaO/gwiNwag3WQdDlDlT/8anaKozYIrTUNwoyHojL0pTGqtE4/lCDIRNYjq+GQwTaHpzPT6QfIafITvlX5gYgHN2YxC2Cq3mSop1+RnWLlJfrNyWqtwYn9NH71wGV9s7PzuDatkhl7luX5rvlBnDE0+uTnkQwjMR9Lq/ULZUdG0hj5nFldCtq2dIjFPu45+QiLTRksUfkucoRwZMEla0Nxq0aT1SI2NuNfaaYldTAH+lWYgrfmamkEzvF6Pog+QPPeWfBnftfHRKPTYvxTcbSUpBh0/7oNe0niR43iVNp9zWj37w3ysPGGbiN11ggN2n8aoRJb/BzatYNq5XjqHA5suqMIseckMTZJeylE6nkUci6SbzHn3dyyjrBe/KA7LvfPBs/Snjy//CB4mQjOud6chWzvRDKf3jo/wAZzhdB8CQHZ2sQ9ngrf4J/fzIuj8u0P2zMfHRWz+YIquVfXMHotOzn50NUpFTGCVFOY/f8rJO0JRy52yFIhKy6NGVUvYj1xtCwXCTjBoSkvtlbMkYLajMgAoOEMiJSV5l59sgxReuAB23nqAOXSdb84fBwC/4n3arKRYmZ8bqrh5ISpe/mFDG+SkBGkiZv9KLgQ0ClnzA+2BnMDYoXDGBfFe3PieAL+G0/q/jESye+vmlauuti1XHUwtHxKA/yENmvu1cH9VGqmp3OH+vlzF3Q2nDex728yM9tmFO+FctjtYKlonM0WZfMLiGtnfJbnhQ6FXRwtsVNVpTrpvI8NPPfPoozSXP9BtMAjW2Z1YmRfBY7Q8cWPtOjRG1/0dX79v8vWc10Fc1qjWNucdu1DnBgo/64Uop9CSjIhu2O2EOY2048vFcuP4qHIcqi+Lmo0mZLTpNTbtiQLGBmgILiKGwN6LKVgd7JHiR0e23Oc5ZQv+laqCcmRUbPYnForCzpU0o3L9eiyvugp2TLqjUMcyI6jvQWIvmEEKTqFEmnL7VS9ZJLJPgmDF7L+2q9kJQJXkFMIobd8RDxcboJ9zm9XYoz52S0aYnrR1KktHcF6HCM8xE+Tmy13VywEgBxsv+4wQckd+3YC3MCF5SgnHyhq+VKyI1WnAFuLmXocTMYTRFdUL+QeUINi6kpCqVGHQxnhmhIYxy2rLYHe2MCXxG1meAVSMho6jrEFmjWJD4JjRFrb+Jn/C3KuMsNIYGtIBT1LYLFD+3T7yXMXF6939m/7bcyIJAnrXWaHVkVTf5TalirkSIbkGeb+GrKyDEnMyt7CYQHzPQPWIeFbr1hb5iLz4X5lIE+vmMVh/pLV9MDNUjj04mhosQJYNKHzmSs2X6WX1fkLmC9JsGpJvAgw0iUKpmKjMQs34D8R2OGdBi8lhS2aKmBdBu5BBtGoC1O6jDyPP8tsGbmyawL/yel5C4yYqLpFaFU4qgwVl6f3fZXtYuDRagURTeYLSuog3guTBq7s71F16HbW7dQqjlr3osn5ETDTUvRKx53uWEuk/I/7iS3saU/+J/TnyJ/1KWcG5zi4JJjBP2LloyN9ernn0UlMLxIwpuUh4sfrAI",
"7V750yZyYcoSA+Tgd1vck8HlykFLIq64sxf2nbTccAh2WIzhTUWD4KDvuMHPshxK/gK8AOVZNFCZ22/XVzXzJhhc9aXFCINY8ECZpY0m7cHyRsi1dOrzBcGjYF5Kk05++uyjSu9iaBql65qdt5jZuT3NfPjoMJxx0UkfgwgJKySkMBn8ywJoPpmS7pxchOQsmg6tntbA8w5yaJatS0SLYVe6PQdw5DtdOti+b/aevu4JlCN6qAIJRq/MIrd+77MWwcdDfWf3Dkl2fOofSm9QYc6xKZM6l4TiLjFFJxBpFI73vHBM6wKrSVRSfo1M8AXe5Z25MB7DzYHTFSapevrI+jIfGd2AmLyqCsmtsfr/t55aJkH+PRmvGFh1GcrjY3EAfqptNuOZxpRan5z12LLBTe0VuAcMXX+Q8npllIKJ3SzzxAkoyYpPzJnU6jz2YTcfJlm1ZT6f4EH0mEGkRfpJV1MGU+DFds9PJMXnlqSXvkTNxLJdpe9t0eSDYe8BMM6B4edlkgJDomxiJ/l4FSGcPN/Zfvd8g7NovIyTBIRy60kLeDj1xATup4N/DU3YmE/VjQ7jbv3G5CkYL0i/SU1Zqqjx8iRFxcF4tROhkLZN+e7nr7C3Wf00fNwG7OKDDx2RVidv/wIiaeEslYJvozy3l2FUOD9JZJQcBg/X5awwqqErU2HrZ+C/D5C3dPllHv5c6BmvYpW0ZgqdGHjHkItcOz5WN5hFkofU5u38SYtunpU2NH75VvcLt16Sx0KxKZeaFmnuKz4Y1ON4RchhkeoKT63oramKREUM8PA3JSy1vKJVBw2DODBWGxuoY1wv8baDjO+VnkJyewmWqyWfs2aFnB8d/22Lpc1AojawNgqq4yMz3ysU04yiggQUCWwyeOUVcjlbCzeKu5QslzE1sPXLC7eJp5TKh6Sb1SKbO09mrkRYR32h/Om66Y+QsVHLM06TWDWMBNoAMhwzHrCwX02E7nFgy1rs3mR7kmZZqd2RuBZGISko38tdBSXafVp6ND/IgyzAt9o7F66jC9r3dn/j05fXTDcuySR3nLJ3QnInk7bcO7yUsvwVYSOPBNRjBqIwSXEGR6rWa67LksfwghDQvPFQVhHbCgwx4Mesx5XjfvyRzqCrQ7knSAoFeSzr9/4ryvFgWs+9S2BVVWn7iZtt154L0HCczzaFMUqkLFesH3Tdu/zLtA6AtGcl1mjuWF+OucGQQNfzi+4HRp+4gPaRtRYqb4cHkEI8VfCpJ3/A6BHlHmdVQ8E0D+d2eqRDDpsyQ4dDAAeunvXx/gLv4gBURcCX3+9m/86Nwe7PFFT8JmuyQKrRM5toSAuHa91+rIjHosoZa9ZCx6Ux07CWA2tjWN54ASoO5FFx+J1GuLMxaRBZTh8gchqcfiUcRJQGdgCLHughlmxU7aqDKikjEFMRDDrqPK7mpWjiDqc4mi6ahqX+gsjZKYvUXQtG+nb5cU6u7xY+8A1dLc8Y1A79ffrRbXmZ/8W4nk3LHrlRhHmXWInoyt3+TB2Blc5A3tQZbjGnMFSctP1st0gyEsJlh5bxYFYfUxMTmomisvPQebLZQq/bPKEF9Scgr/yg8h1sYo6fxIwXqmfiW3sp1Bf+ZqHSryemmG5egKn3DtlEmkR3iH36oKcsPF7kteXT9fzATkjCxYKViiKmDsvE7cEwtytZZ8YbBthpQCvTGGzd5cC6nb64igtYhAemtrSffDvXuxpzMDLjCDYEw4UBKLlZ8X1aCSVQEVZmxwjMlJYUchdIIT4khSz/GTxixez3g4mzJpklLISoGkqk81CVLqrZiGerPKR4beOkwM8pMJ2gkck+/Bim6xHl+LRZA7LrL9jQsPpFilpKWQZGkSehuMtQF3N5vCND9yGe1KnBdkQFuXMf86fUb0G7z9JbDEePZUH+HdiUAE69dBMsytqumGxNBJLRTsv3pSUESMF+hvlJpbZMYHEykdxsqGL35klFy+2aBPv7BsGv+TUUDTqKL/xj",
"3mq7aQVPJPB0OgIOTunb5qJ4DHmskrB7uuiq9+qvCxFy2GRL7BNEXNZToF6WO9jJkJGniYRd45Bo7+7iqw/ZMb97/tEfPPkuJhNGop6DNItxmqM1BvBkC2uAwSWES4OR0u5JQDR+oY08WnMrojeAkIgIL0jAwfFvApEw4Lo81NeXoD+ZXUKENCtUSSaPfNNS+/kj0TmE4HMlTmou34bTctSq9uODmXKh2b7DeozZ0i+63rDr8NGT/3MeOCKHOXg3TZmDnaj0bL8+zzEyfHd6WCPRHRHTbYO7fZZAv6NajQvIM9RJvU8+Mlq8xNTZU5/jHUrknCOy6XeMDrZDNEpG5t/YE4Cz1GX4QpWi3w5t0UhktxsJfJsf5c9qmLlSI0jAQoVyVudrD6j1oH5a14GM02k0TXIQtTAhQ8jUGRmPXx5chHDkykiBxsDFu96xP8dtTXFrauhxTI1SYOw/X3r0ACwaU2CyeQsdRT3WsUHJZHZWW5qTDkHMUvI2gsPHKSYQn6usgafE5MQlQZypAvXChVzTXYyfMMNk2myoYgsMoHglNzCRKh3wbkR0Hrr9YOdSUk8HmQ50eSBjVX0W+VE9PLT84mjtn3rfkwsDHPw1NfS/nou9My/viKHumPo1YZ559Lqi87ZrrwObl1Cq8NKHSKdhAR30FAKSMEKAu1Yzgpm5oIbzJsyPFfU68KCIInjlVSYt5DppC1z7zkyBmeqJYq/zE0cozOP+V3JHYjfV15AGLBiCFT3v8rziGqLK8hKFJHTi80wSvCGVNtw7UG37esf/0MKZDNpTTfNELjp/UYZ553XRCUXP7mf4BjMVVnj1bOYpuWR0y2RHXjQpV8p2496rEFeam+7gYbQn8ScH3dYI3G7+UXfm/MbTd19ZyVfdR74n29QjXlKzm9loSxfWKLBW9Htb1w0/G90ZFxdl4703dNS6T3ceq+DjzYzIVaFiudDIVePHd+/fC10TqGlYzREEsfKHwWKII4V6oS1Gt3NeiBnvGgM0Twa+vFB44x2Dk0KmbpxTISVYYVrvWJr7esN2wPgBFfnJbar1yn0JoIL5X7/Uln5LDf3GAprBufFtJIjcpDl/yocSX8EBqF9JMKqd8nWosCjStUliOcHs3kQ7S+dRrtq4ruAT3PemHQOn78gfAJSOOG1g1b/E7+vwsQ3lWWb6IIBmmRvR+tC39IrxSFEbnazjI32vxJGe4GYzJGW8HS4TfgV2tJegoRfdiLYYAO27x5vZDQMrY9qHayQ/UTvTwqfuOWpeKl54ahp+Va5P336BesrtMHx+l5aA6xC398/Y2DG1ZZo6NyYwJFOGTvCngp3w6iq7i4lqsDvsKnAZuiXWXJgNGjqqUDrmxdbMJT/NBhXZxtTozlip/iTSnWb5vhGHVLDmy6pSuwOJdUypQU2q/c0X4OhTQHf6GS7woB7XobGBOTykA6JdRwOwnmGdsDDgDAAaYx265hOuUtiWrE3Kx4g112MTE939zB7X9lM/jdBT9fLKSgkhZhad8X7CEDZ9C4upRmL/zh/iXVJaFu7ef/3P/FWaaCOmXS5Dh7pzm8lhCL+0NpZy+wF44c6Xh1WYUDEhGFC/I6VyJ+gSA15CHfyQG3sMNxDwGPbRHD8XjEnoIUX5rGBnAUOCMd/4kwZhMurXQJGJ/zQ/zbmBPtd9btOJKbLMdLx9+jITYgjzUZ1sL4RAMjV4a7sEIpOfjj1F4y2BZX4HBYmNA5j0uA0VzoUGH/2w3g4wrGN4D+S9Z6LY+X+aFvZ7zaCEMT3RDOxW/pVDwB50IHLPL8nPZIWNjMcHcoYBitjH737J/ppuh2CNYPeHnTqGAc95zqC4cCDwWDijHKJnm7jU/Y+zP98WqvRgchoDQPiIfVJE1lgj1UwDNfLNiTCktLGeQ8cyUf/mpFE2o/93xphmsQXvkTlbg9hMv4Gx12Kig+171kliWIM08CxYZ7LP9NEBUSVtl9LcjrF19y3HshTXQJIXh1PU1HaJOOG+",
"HmuFcC11zFDkvzoU/FwrvtH1dsW1cj2Ly+3jnOEfx9sKDVcztGniAXc0YIchRAz9xohOzvtLbZ7qcTEjGbvWNIF5Oh5C5uvFevHq97hR65SDbBrKULqCvHPxw10V8KJn0xUUF/UkIGQ0kJ9h310dWWicwuQE+zfsuuovdOQ+YBng0fIAGYHjmjcLdOvp+rtxunYxrw4866OP5RRqmCqtJhe6/bMjFgLFhvuTyh3Y2CogI0ucuRqxykFxweTCoQfUbduLjIUf4xjStIadyG9U0Evt12rQK1LRahRfTPSXdCsNiqLsqUKnlD2pd8luZSIr53RCxqYFc3cst8K/cep3PokbzAcn9UBOIzPBdiokXrWHVoDa608T2md7HWG3CdWjWJFdXQdX8C59Ljug0KuAXx0uaj54orp7SZeeG0/a57ZQTkehGjSHubilHhhaB+5bEPGAECRl5lFZA220ehhmcZypNxbpgtUiiRfM7wJjaKFd2ReaCT5A3d1izsUVzF2fECST8CKoRcwTayn51PmwRdzLnASk0rOEn+yvPvBIMNMGUQXT2asYTbULj8FCOiqSmxiH0azBK+/+njSzECHECfFJfA+oePbk3SUgk8AdHVUr0+HjIg1wqmrvInSFjnHzbeSroSb9y09DiTDoVJ4lvGD5nEiUWVS4f65OQt4VlI7g05XalZs7jusmJV9iUWMK/8vCqqykKmA+svjCgO/++ZMhT7ucrCx9pcKVLUwB+oJvibUPFY9v2tTVgOglvIy3/XLRZxg5Mm73fyGAoZ8dh3r0KJGSt6rrgsaFHpJcst3rMjAv+ZQ7JXSOXkKX3qf0YrN0N/Y9dChgKKnh7ojWJO5rhMz+8WCvfvwODJ3TR4b+m2JViBpK19DD976AdKWx/xbXI12/mJ9AsdamU0Z1i2Rb+y+z3IKvfaz48ohKDgb8FoWEtynZcOWc/kG8m9Xq98EYcLMO3dFUYRVkm92O4RvivMhwOI982BE6+EVm7sB1Ml87apYUFyfkQ4HaryGxGp1OrchoFEYHzznN8ST+mcjLBFkYgFMT5esLG8PrhLTgtdEZUe5fYZ7Pqr6XGYrkogNgPCJt4lmmlxOXIwrQcO0ysIg4kVvwOZwGq4ae4d3kK+sExHQ9UneYzQmq0M5xp6f+H3EmyGpAF0NIpUmrYed7XaxdCRWidUloOm6XE2KMPfHmTAZG5RRY4MOwYeErxAJsc55wfC2zsAyf/kQUbXw9mcpmJC/DdxCNwvRwXzlH5oWz4q4ca6IRWBB+7XcV9Fym7Y/aJzjfYh26wqEiCTo+TWNwfEG7Pq+M2KmRoZ2+XpsGP9VQlO4mXKfSyM4L7lYJ7ME0yYIJoLcoKSSGTuWyCTSgouCk4+yIfqomRiDk5Jl108+9AZ4LXmeI4IaTFessj3hNtUCvexEP5x+LKYafeeJChW+P0UR8F2J78qjd0rV9yLVL4nU3akfTFh1oxkpWEoBleUe5XCTBFQWFW+2Or4XFcrrouaBREUBTdT/+ubmLcRWfyrBvpVXQcUmkV0EnDrXqRhz9L2be519YlmlgA6oo2ixn24R9azrt31qbknf8R7eY6gvOgsS8l2VB/wKeRmoGefWP+umhZhGLMDbd0qORvCKRVg4wcyYKzxCtQ1wySSmsKYQflz4egfNHrtohO4/+FXzNLaiKqjyJ78a2tun7pT+QhRPiyEYCm5zLW5lkhNlpXu5LDjbP/VgXSmovPms1jOSvknyccSrKZ+tZ1dIHv55aFthylgbXBsH1AOnhMCsDx2ZOJmOUxhwlCaZMiO0bFWChYtVY2/TQdKLF89GGEol+zuF7S55z0mGLdIRafIWLVJRqWr37VgSS4YuQIGqk62wilQ5VsaybbQ0TR1hFtoFsoaLmYT0WRL7MRV0xwcfo/WbYAnVmWC49P3Ku8mnKqiK8IFWL1UnCRkj72IuNdNKbH2oPzk6dVtmRJ+g2ljLKxzjP4lTaijhSAv7B56AmtKW8vYmE",
"TgU7Cc0FUPTTeCs6Tq4yydeo0EopVvZpmVqj5RPxZTDYvzP5NuBT0PmxiMNy9/kv+X9pcQ9EPuVg4jps4veD9i99WDzQ9M4ie8jB35Xn/lrc8kV4l56N7DWWbG0mSneR0LZn5O87kO7snto85zxaOkdhg7dhZ2jbZZ1s3Cp6VmyjO15Pypge04ATEMtlv41LNgisRB0x3JOadoTBIlvs/+VnoFGi4YGhN/sCWv71ngBlkR8HG4sqNC5HNSsR0HAdCydjFR5R/B0e5QQQCsnS0C6sND+H+maFT5/qFTr1P3YGshSP9wqYdPS6JiEpz7qM+DAg1SbuXBuA5q6Ez2o3b7rL12LzfiPfF/hMrUJp5+ufSUh4baZ4GXjVjStqQPdpy1hGW6+nWpLnuDWIfqpfMiWq/8RzYq8sanilQk92Xh/xSYg8bkiCcGzv2gUReicCHzD5HE6g/5PvuKe3GA1Lv9oN4n48k17hcS4c6m3lJEGAoaevht37PiLrQyI2h/L2mQc4gfxdDF7yS2BSqX5TOq8ygYGj/Y16opxQcREaONoO0nQ1FvgPNijCSZt1xgOUYM7X34ZXrOKVpj10qyUd24FuaVtfSK+BWe9ZbegcmbpVrt4SWly7AgZFYlUmLA43OMc+d8vNf2YOX08UXbkJBq5eOqZoC1AjdShdtcZzxh+FuBJuHqpz3TAqDc84vb6eWx7tRg8ji0TOcQaoDWWeVQoUA3ldytXt0dCWzdImwdX7UjPfkQ81vBQFAxivTzBS9cCaF8EcwTnE5Yra8AB+aj99rakCCfs3vKAWCSnkohkoiapAr49iT4y/sBeNTY3lJRfkWsuP++MPNgOa8P899bjewZckTEYIeI3C1jK08srHCxyhTJkH/lIGWczk+SGClxqluD/Yck7+zf1bLH+oozQKfJgOirgDET//WyrV8hJOn66IeiCbcPr8NVpZvUVsxeT6q58orQDHcU885EzswvaulfNqTkHNxbkcJpVz/NyEYCLjcuXMkI8G7emazGckar1Hq54LaecTrPatYK+Lvp3h4sPxqjuDrWkFSmr7FzgpwPYBxToHqCNvM3m7+0D83rQ18Ydlaiqp49iqd5llgDgvGAL1YlmLvNgp87q6Ie+iqmBXwGHQ7jHTUpYfR/n6zcVNMlVCbf1QXvm/STnATSjm8RUa7zysmZD5xmJzP/LMkcHxkfMkqHHBg2qfgVRrosIP/kwevX+gyTEVcpmDg7WukBuLlAOb6Ni0I+tYfeDDljqU31omrQj/YpWTrOG2/J63wFtc+eyEm1pGvNGpMSJNq7k3kwDvkh5iCtTj2/i/CZgeOQ8605W8r7Q2T7j03s5ftqGxj5eyFXwqid2hKRJwQ/HFUahVeAzE/uP/0JLAreb/gs20M4DN6j89sybM1yDBG2/5GMo8gjh2Z5kBa88pdFcWiR0t2ZABwMDiDSqwpwaj8nXndCG4AXiTgnxk6QBnt+w3WbPi8DgB/P32BGKkKhzIe0Q3aaA3w6RBZxiJJ9fbBkYNyuHIMgHul1rHNM01xwioaXzP/SS/nLfB+WG0BYTjUhtIUHRmU4QrmFEZF7HjniYNBeShaCoKMldXB+Ap2/7U417M4N3weuiwW7NQ48+4avjj+APV9tK/L/AJRfIme1KVasoj1fmMPisFO3lEAkb0TlIah0nftysC6UGas7uQpIX/WRdI29Oh4/Ghd1BWboadLN2O7H9f2fwCxiDA7C3xEGxteXJlk3wz2B5do/png8kvf5l574Q8h9RdFjxrYSRb9Hci2gU+nkEBkc7uRiODBFglg14Sj4RnPTBj2FE/8+wifdAtWMMehwAylquLKE0JvJTHv3ZmghwmhmtENDcxTFj+2XhEhWunHtkOOPS1GSYWlUpJp3v9EtQPZqSSnzVE4iP22loTYZUciXOXgIIOmDAYKvQ+l5RgooAl7QVSPec5Pvw418w42XKpxYTx07quc5Ir0Y4Hqv0HGqI0FkDy2YyDr62W",
"HHhQsjMviOPNHssLGFr78E66XSUutXXB8IbIKEgVHwR70GFKLlyrl8YEU6/1nU6NhOY8SLlZgt5hdhgtDMc5wOeRhpIeNcpgzKfYUB+BvF7S4L4Oo/zJvvYBVGk6py7+iJ1w8LzxKcsamPgqBLUoliWSM1kzQXqRetd1V1dkRu1FBXUqM9lAO/6i502CI/zTiuuFz0po8TQlxvOFJw8v4r7WBw2G4MRXHs00XYffKAkniN+M6AZOzgBapH8+kT+UY57CDFCCZBHYNj6tI9rojOymrvSG4IoanzjwubtWu3nmk5HHETJ04pLEn8JUz5Fhv6VnL9MdX/RHLPnysFwzLlq2ZFO2KaY2ThYocNiT8NNKXBS94woXZ4qLfZnkQwS4PsaLtlyUefm81/IdH9V7KBRVBBRE4Lrjnvsb1QusuwvcUDCGRpOjibUluzmxaj82+DXGtlE8h8l3jL0aJuItsJOO9uABzen43sNvSzFoGGezsG9q6wVGWUXjgpZcmfHeh/J7rmoSnrciPEFRSPDq4ZhLEkPU3A/bDQKN0o6/DQUNsn7kpL+fAoe7O7Z8TsssdoxQ583TYrg5+HtjoeH5KJzWLYztX4QkFAMcxlJrbxKj1c1z8Tqf8nBjHIACqCplTzTfyQcPT3Jk7n1lV1QpOTAKRSRJh+rIL1hLube/2xg3bftQUimhPn6zwdji9WP3eCvEwsCPgwfVVwN+jQfK+abjiq/jvp/9t0lWrTpvbvmDDnxEE37Xg11jrUGKG/FNhWquPa0y3NKKYH+k9RQCTXpUZjTb76Ra+OJq5Mgjma7LPsLM6tiY0TMLEn39ePc9WZKes6U29ekEtpvyeAqdOyBIRxt+D6jBUNk9qou5m5DgvySSY/00g9SWBROjXs8y6OSfsNQ1nRn1bC7wK3YEGFqyM1hyqmc5KHYc4uDt1Nt0gPWhVC6A0uEr+n8IA2w+rrXiVkTWd8MOPb4rMgeLWanEDTSdOzGC/BLJeEUZlH7nE6PXQ5B2wnWUdvqC9l99gmnL1Vcq9A68bos+CawGKyOGmcn0ntYpWz7+IzIqS8c26fuS36eJma3EzD2wwO+Q4EU+YikbQawqEWMeDhFfNFZBRxhzn+gakZLDMoZxRwpGYoLAaZUZcVjCagfdHtju63mLM+fS8TI4CJ57Idc5Ncq1VL6X8al5box0zwmvfiGG++KC2wnOFdFDjj37cD3axVLgobBDxJYYl4KZiw8fijNsYs7YC9s1wEnEm7lvSdPU0opX8K8kspReD4qtorYRpvOmYdIQ/njuUK3lnFm9JeEXFz4uIX4TYIY1P+0B97y+FJ79D4LUcXzFmaJw9aDSHhoUE5kxASIFi9VsNsX0KZNtOTe4i4xUFZwglO/39rc0Sr46+PQHJ6+SOtcnjhSdb8EawSksic8dd4p433xIa4lyWMnZiV3sNpH7+JN/YNk1XT75kdp7IaLxWZCC34s346oVm6KwXCV9tbw7rpT+kYKerfIy6vaE5EoB+yWjYPduC26WYwbgwDivaA58UjWmsbf9WkuuybcFMrazJ4FZ2ntyFYAQozlFEPBi2SsLfji2ZAzoKOirC1B1c6/tUZZOUsQ1a1O+CkuxuMSi+iBnWFj2xRFmfFNFKcnbRr9u6BtiwwLHSgQgbOKR55c+qq3RHCEdeIxmRIy9/QVE6Zgwt1RCLcOzExL66S6wMxpFCXk3S91X1eQhQ50E2/ATXtLrdsuAECHhKefE2fwzKnEP+C+F0Xp5GAt2owQNXEvbXj7vXLCDLoKPhNEGcsjVP9FGLcViq0kk0E0UT3T7OrqW3sk7XuoX+P+HZZpU59raOu8ObDnHsgw8l+kvnJLQcYtFr/KFCmRq7s8PtC+sgjQob9vBzwe0y5ta285ML9e8Dxxh6dVx2LmbH1+4zF5ES6XjIJKU0+aRmSie98vpbhTMS8sbSyAcAmdlfGROB6Oz49jeUd1QnDrNYMsm5YZ5cknxEiwwrQtzxcP7kWnG",
"rx4VUaKUikSA+nDMBjGCeQDiNn3BkD5jhPVsWMCaTyOKQ/UGl13102V+/0Z+YPZV79mdzg3dKBNl3u/SU5OtMYD9H/0k0+RTsxA1rAl0YJ5299UJC75xx3kYG9AgfpO6Cj9nFITf40WtgLKgGqRhyt2lNkiBRCde1HAnV+23Hctj5z+zxERRcylmtvgiPnUbpGmA7HKDOewkn2KTwjeavIYc/ar+ekMXVTLOVYKk9stWhLLJeHNHMFVgjUwB1stIXBm0tKJxi59prAtYHxVoBtsvZfLXNot+wFxUHtFkFqbupeBPbqjTOpSBGm9t2hKCi3+9eFJgU2lXitRwIM7G2yHlt7t666d/ASXbYkwZW054WDxRsn35vKzuLZaK1/QVqXJS42RyKJ+4yHb7s60LYoK8r6qbhEfTl1HoprEbLu6CCAgCf/ah33gHI1u4ohMY7nAASN4/3+mPoMiczM6X5pxLYS+c93WbtJyBJU4T6fQDgcgUPcnQi38pYxwIM1j5DwxQJ9hvoPfFYurnTqMZrv+QS7UEDxn3/8xw7I+hokheZ9Faw9wcLirnAFmWdLUUTbYrjiIXZhsfZJSmUCp0XLLH3+INpt12Zm2sbh7LcLr0zkN7DagsG6iUpq6kU+97gHdcKYWWkB9xa1yyKlviLs8rlolwkKqsaTSgkP0NHBReDkb+Z+y1Fk+KZck/pYCRG1+lQYBgSTSObv7EzvRxt66WUELQ27t/kZIy+uHHSiO0G2HESOujjkeCnuEjkhs1LzMHr9103QNKJxM1mdozeFXEz03GFHgbCDMheEyXgwsGaaybQPGIrDSj7jqXAOM2/BbvwyqdLRNscTV/+nRIv3SjAdi3j5ylxcgX79QqE6B8sgKj8hzlDLfcuY6/sMwqo5sv3YnCI0PNFqHk7YYYwWZR9r3oJds7JzQFoBgrhmt5UV6qJswfsDApmYXEE8AD1sfoFyJqMib0AStZY505kW8dxWxPQuopjiEpuQucgVErIAwCc7HlC9TK2yYORyw1PPA+2QDuWU55CAX3OZpQLWgych4bdLS2aa6YXnkDB331OHn0BHdNSKNeALSo2FDsnK1oNOdlfXTIa6NGCkG9coMGoJAz6OjdkB74zvMjImoytT6NwvIWF2C4pxVoZD9v8GnOuReCXP0DfBZlAZ6QXBIgge9mE3ZM4t4qmTWMtz/4DEdVrHg419oGzfNLuAewEYyF/d+eW0koBjek609an/hOSeE6HVFQBhiQAhppu+FnzyRcNQ78FLwUEnRHRYz53h6+c0FxKMA1U8VlMhcrxFGdZJUvrHizyegBY4wtkTliADmwXRR/mSO5FRlVfbAmLF9YRgJsVGr1GBh2m6ZonFZLh4Dfwf7qfNb3+PdKq6mieFZRpaPVscn2Qsh+K+/ZMsgl3R8QwHaOiBy1s+4t2R1Cw3/MWbq2s39Z/Civ9SQzLjVG25cCk+5vRynTreUrNcQnwWg4RwD70IrcFI3T/KYW1R3IwvVioZyTj06UTbBrBrsIlKmup6CFcQaB/Tgrm7DQ6oZUdO13vC4o8G6Nz0kE46ip8GG76uiwNB7PmBYRtKyK9bhRsWg1Fq0NzbiRGjh9j/jlaBiUD/jTI84bDuBK2HAGWE9LWYaJnLnB1Zj1azNExwtqqgkO7sZ/zaHH0s5ZP/8sduvEPFuDhSbbt6futJdXCULdX38qlNk2GgWsIonus2PhhS1Il3v7wjNU/yuWrotEZP3eRbE6PwLD34SL6qUUKoHiPkH7lLCmE7hRfc+cwVCo+xm1zQP9nc7wa8xLr/qnJdA/yRVzT1/K5uJ6zw23ovxKakvvRKcb9es7yOvp46MhordvGylx7wfxQ08dmGQLp8Ww1US+r38PTGLkiwrhlLxylVpkVTNBK/3DnZAdTnfmMN9Jq5ba0nDzkecy8qYTvNXHPduggCn7XrHg+QGjUDAGeeUZr9sAlQ82Kt+uVMZUO/7GvwmIX/zVQjIzcES3uj3iX57N",
"XQIO8j+HEiwRpYgw/ZiUDAQob1sUEvxtoKhSpoczxG+SjQyh0LbaK5DIub7AupVowr0kkYXVMAcdb0lwzNCh39mv3VeVXfX8dtPMh01Q7uNPE/vzkTa23iO+g3JNrp5edMoHvNHkcf2MthnTkFjXW3n2tFo+Omg6/Xq1rzBpuViHbHubzzW6oQhxCHDquHUJqC5KORTvP2BCWgdE5yyUn8n2jNeZjfcdH3yX0yJJ0ZfbtWJjA0HZeejIXBpJPelZMtBfTidRuDbfFG4dh4bgqu27Q2xEIAGp9Cfi/+IUnd4B8wS2+pQPyVrmMASqhQZ7f2NsJ++wHilYoj2XbHUkJF16VRizTuTY5OKBqwXIj+mrjpsiTkbQWlAndcLbce8ociu9AnNmEN6JUAI0XL5ca9/k/AoFPVknibMqpeXjuLB5nsshHgWUwrxKudXoCBrIYsyeplMifv2goD0qgT929L0boi7vlolZRZ9PokYvACXhygGOvEUJIyskISShg4JHW9Yw1cPVN8JPtl6DYcdjC1EY1YvHum3ix+wqMq37LBfeJ5NfpBT02ibFNzofvufP72Xc2f62xSG2AeJEEgyPxmbgmh4K5wk2dHjo/Ee0oNPs58HLWGFM2uUdjAumY9ODfRksIN4ooc4cYBQmHeQkpcOX4MU2/bY46RdbgTfIyQcmd+PomdGgLPyoQDF45zOkTK995jXaOgVKV21/347oG0twQ81uRk6brD9aUT56XwOn9VKi3NbjMlzHXvch/yknhGkqQGKMkQ3JaHMed7CD8++6UoRDzAfsqfAB79fve/NeWVe3n/61OgJ/BtcJDkl0XRBm75sEE40b85IXYTl3khmNXljID5YEHkkIKw1LAcnnjqjITvSVHdX/gE8hlXU5bkIsCqVAzPo0BkjyP/aCJreZ2y2C02Urt9H1tGHGUOixj0JDycpnPfvgAIIfDk+/1KDPXuIcw0wqp5oksXhpa7eXM1Xs2hsWykNEpy5cXH778kC3j9m2eI5ca4vFx3W+XrM00h2IWeahKCRJHj/UcCF9IAX2zu1oCe0DTOFESKlmi3Tp1x+1J57xavQcu9N/ybtdVZhFmmviP5dKyFrdryF+sixF7oLRzL9MtrUekvQCVqzec+T9yN9b62in3vTje4xCnKXyM97GaSkUbyOPT1wamuu4INCbZ0rOA2rClTXptd57OoBtOXzlvAEHIxw21wZPxHzPYnX0mprov/2ZbLX1SUrOUjM5rax9own97Ka35SDFqpok28af6iPOmYIsiD/SwAGA4Xg+4YUpiyj9PqstcDMVZm/m8cyctJQE7zj7gVXulbC5T+X8WATIi8NK/Q+ZTYJu1lNyY1ZjXNkIO2nN95gpx5sQ8o/B6E4EtGVz41d4bTxPk+HxTJPH2aWTqmVw4liC7MA0dfutW+JeFWaIk4ERzlg0blaxOjT1QNdpqDkkHfob1ak4xlos+/2WbzSL76spfXLD7qgRIpUUIwfzTATXrXv++GhJiZrA3Y4clO3R4oXs2t7eXKqNXjxriNhaHIfOsck0KkRCEIX6Th8iO/hSZiWY33lawB1J8KFppISILdg5Neu3oaiIXShtK0upKm1hhAvvnl58Qpsd4HQdwa1v+WYlqL+RY5ZoiBUsNptFIOGaK88PxdblpqJi1Q1yTEurLmj9Tdsj5HPPtm8k0aL0c5MN853QS1ZT75xqj5zvfDaqf7q1uSbG/omSWVijk6kYrdfp1zupojOa2LQdHeMYAnAHjnhCJKraPheUSlv0q/ifGVmGpAUOUVTBbPvtG7EnQD3sDIqbBl9DLE/Uu3Kz8Mkk+FYEz0aZ2jb5qMOPTZ5JlcMVEo5jU8mOedEc6tikVLJEVZDgvTseTtAilASkyzojhHA0By3LI64tlsTwSL7cZX/NaJ8aYOH6BWkf4v2pQoAJeKqgAkr6RQWCzbmy/b+HtEOYnbvuLH1TViy172OVV4DXdA/kPETBUhyFdYr39+6YuC5N",
"KzRtTGBXuvwN+04toBjVt5kl1VXvW8UoOZhFxtWb9mapMiYdbM5IoLqsaF9d5uOFz2MwJ/WG6KQKv4ZLZ9gkKPKAu9F9MtVpfpgvTro7fHK9WD5DTKL5LJUiipMLT4l9sbOCM7UpzZ8="
};
*size = s_gst_size_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon;
return true;
}



bool DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon = 232;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon[] = 
{
"BgAAABkAAAADAAAABAAAAAQAAAADAAAABAAAAAUAAAAFAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(name,dirInstall);
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
	sprintf(componentName,"%s","CC_caso_escalon_OFFD");
	sprintf(partitionName,"%s","caso_escalon");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

