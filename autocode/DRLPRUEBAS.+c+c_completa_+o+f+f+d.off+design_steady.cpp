//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_CPP
#define DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_CPP

#include "DRLPRUEBAS.+c+c_completa_+o+f+f+d.off+design_steady.h"

DRLPRUEBAS__CC_completa_OFFD_offDesign_steady* DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::s_current= NULL;

DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::DRLPRUEBAS__CC_completa_OFFD_offDesign_steady(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "CC_completa_OFFD";
m_infoPartitionName = "offDesign_steady";
m_infoModelName = "DRLPRUEBAS__CC_completa_OFFD_offDesign_steady";
m_infoModelFileName = "DRLPRUEBAS.+c+c_completa_+o+f+f+d.off+design_steady";
m_infoModelFileNameExtra = "+c+c_completa_+o+f+f+d.off+design_steady";
m_perfFlag = false;
m_infoComponentDate = "08/06/2018 14:55:10.230000";
m_infoPartitionDate = "08/06/2018 14:55:20.827000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[4]; 
int nbx;
for (nbx=0; nbx < 4 ; nbx++)
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
n_dyn=3;
dyn= new double[3] ;
static double tmp_dynInit[3]={ 10, 100, 100 } ;
dynInit= new double[3];
dcopy(3,dynInit,tmp_dynInit);


n_der=0;
der= new double[3] ;
static double tmp_derInit[3]={ 0, 0, 0 } ;
derInit= new double[3];
dcopy(3,derInit,tmp_derInit);


res= new double[3] ;
ldr= new double[3] ;
boxDyn= new double[3] ;
boxDer= new double[3] ;

n_unkR=258;
unkR= new double[258] ;
static double tmp_unkRInit[258]={ 56.88798558, 14, 1, 0.0134109877, 2.521128707, 14.25, 2.01594, 31.9988, 0, 0, 8, 0, 14700000, 0, 1, 0, 
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
		1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 19.0533728, 3275010, 5000000, 0, 1.45944999, 0, 
		0.032, 0, 0.00178349971, 0, 0.5, 0, 0, 0, 2.70069069, 151.106354, 3494748.63, 0, 0, 0.000580606872, 0, 0.5, 
		0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 2.70069069, 16.3526821, 0, 0, 0, 0, 0, 
		0, 0 } ;
unkRInit= new double[258];
dcopy(258,unkRInit,tmp_unkRInit);


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
n_nelg= 5;
n_neld= 0;
m_numBoxes= 3;
m_nNonLinearBoxes= 3;
restartB = 0 ;
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::initInternalModels()
{
}

void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__State(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__M(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(CombCha_1.CombCha,100)
	if(!(unkR[1] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompCombCha.el",178,"CombCha_1.","CombCha_1.AR_r >= 1","%s","AR_r CAN NOT BE LOWER THAN 1!");

	LPRES__Init_fluid(27, &unkR[183]) ;
	unkI[0] = 1 ;
	unkR[221] = 1. ;
	unkR[19] = unkR[20] ;
	if( unkI[1] == 1 ) {
	unkR[8] = 0.001 ;
	}
	else {
	unkR[8] = 100. ;
	}
	unkR[216] = _div( 1. , unkR[218],"CombCha_1.mfr_ch") ;
	unkR[217] = _div( 1. , (unkR[218] * unkR[17]),"CombCha_1.mfr_ch * CombCha_1.T_ch") ;
  // init(LH2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[2], &unkR[31]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[3], &unkR[64]) ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-71]  CombCha_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[61] = _div( unkR[234] , dyn[0],"Injector_F.PR") ;
//[E-72]  CombCha_1.f_F.p =  IF[33] (LPRES.State(CombCha_1.f_F.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[60] = MATH__max(unkR[61], unkR[235]) ;
}
else 
{
unkR[60] = unkR[61] ;
}
//[E-73]  Injector_O.PR = LO2_circuit.pt / CombCha_1.f_O.p_c
unkR[241] = _div( unkR[246] , unkR[61],"CombCha_1.f_O.p_c") ;
//[E-74]  Injector_O.M_out =  ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[240] = _sqrt(_div( 2. * (_pow( unkR[241] , (_div( (LPRES__gamma(&unkR[64]) - 1.) , LPRES__gamma(&unkR[64]),"LPRES.gamma(CombCha_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[240] = 1. ;
else unkR[240] = 0. ;
//[E-75]  CombCha_1.f_O.T =  IF[42] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[62] = _div( unkR[245] , (1. + (LPRES__gamma(&unkR[64]) - 1.)/2. * _pow( unkR[240] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[62] = unkR[245] ;
}
//[E-76]  CombCha_1.f_O.p =  IF[41] (LPRES.State(CombCha_1.f_O.fluid) == Gas) MATH.max(CombCha_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE CombCha_1.f_O.p_c
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[93] = MATH__max(unkR[61], unkR[247]) ;
}
else 
{
unkR[93] = unkR[61] ;
}
//[E-77]  CombCha_1.f_O.W =  IF[43] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p))
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[63] = _div( _div( unkR[237] * LPRES__FGAMMA(&unkR[64]) * unkR[246] , _sqrt(unkR[245] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[64]) - 1.) * _pow( unkR[240] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[64]) + 1.),"LPRES.gamma(CombCha_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[64]) + 1.) , (2. * (LPRES__gamma(&unkR[64]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1))**((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1)))" ) , unkR[240],"Injector_O.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(CombCha_1.f_O.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[63] = unkR[237] * unkR[239] * _sqrt(2. * LPRES__rho(&unkR[64]) * (unkR[246] - unkR[93]),"2 * LPRES.rho(CombCha_1.f_O.fluid) * (LO2_circuit.pt - CombCha_1.f_O.p)") ;
}
//[E-78]  CombCha_1.W_O = CombCha_1.f_O.W * (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[24] = unkR[63] * (1. - unkR[90]) ;
//[E-79]  CombCha_1.W_IO = CombCha_1.f_O.W - CombCha_1.W_O
unkR[23] = unkR[63] - unkR[24] ;
//[E-80]  Injector_F.M_out =  ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[229] = _sqrt(_div( 2. * (_pow( dyn[0] , (_div( (LPRES__gamma(&unkR[31]) - 1.) , LPRES__gamma(&unkR[31]),"LPRES.gamma(CombCha_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[229] = 1. ;
else unkR[229] = 0. ;
//[E-81]  CombCha_1.f_F.T =  IF[34] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[29] = _div( unkR[233] , (1. + (LPRES__gamma(&unkR[31]) - 1.)/2. * _pow( unkR[229] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[29] = unkR[233] ;
}
//[E-82]  CombCha_1.f_F.W =  IF[35] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt / sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) / (((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p))
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[30] = _div( _div( unkR[226] * LPRES__FGAMMA(&unkR[31]) * unkR[234] , _sqrt(unkR[233] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[31]) - 1.) * _pow( unkR[229] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[31]) + 1.),"LPRES.gamma(CombCha_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[31]) + 1.) , (2. * (LPRES__gamma(&unkR[31]) - 1.)),"2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1))**((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1)))" ) , unkR[229],"Injector_F.M_out")),"((2 + (LPRES.gamma(CombCha_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(CombCha_1.f_F.fluid) + 1)) ** ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(CombCha_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[30] = unkR[226] * unkR[228] * _sqrt(2. * LPRES__rho(&unkR[31]) * (unkR[234] - unkR[60]),"2 * LPRES.rho(CombCha_1.f_F.fluid) * (LH2_circuit.pt - CombCha_1.f_F.p)") ;
}
//[E-83]  CombCha_1.W_F = CombCha_1.f_F.W * (1 - CombCha_1.f_F.fluid[Comb_prod])
unkR[19] = unkR[30] * (1. - unkR[57]) ;
//[E-84]  CombCha_1.W_IF = CombCha_1.f_F.W - CombCha_1.W_F
unkR[22] = unkR[30] - unkR[19] ;
//[E-85]  ThrustMonitor.g.W = CombCha_1.W_IO + CombCha_1.W_O + CombCha_1.W_F + CombCha_1.W_IF
unkR[182] = unkR[23] + unkR[24] + unkR[19] + unkR[22] ;
//[E-86]  CombCha_1.OF = CombCha_1.W_O / CombCha_1.W_F
unkR[9] = _div( unkR[24] , unkR[19],"CombCha_1.W_F") ;
//[E-87]  CombCha_1.phi = CombCha_1.OF_st / CombCha_1.OF
unkR[221] = _div( unkR[10] , unkR[9],"CombCha_1.OF") ;
//[E-88]  CombCha_1.W_F_st = CombCha_1.W_F / CombCha_1.phi
unkR[21] = _div( unkR[19] , unkR[221],"CombCha_1.phi") ;
//[E-89]  CombCha_1.fluid_P[LOX] =  IF[1] (CombCha_1.Combustion) (CombCha_1.fluid_O[LOX] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LOX] * CombCha_1.W_O + CombCha_1.fluid_F[LOX] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[94] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[24] + unkR[94] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-90]  ThrustMonitor.g.fluid[LOX] = CombCha_1.fluid_P[LOX] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[183] = _div( unkR[152] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-91]  CombCha_1.fluid_P[NTO] =  IF[2] (CombCha_1.Combustion) (CombCha_1.fluid_O[NTO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[NTO] * CombCha_1.W_O + CombCha_1.fluid_F[NTO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[95] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[24] + unkR[95] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-92]  ThrustMonitor.g.fluid[NTO] = CombCha_1.fluid_P[NTO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[184] = _div( unkR[153] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-93]  CombCha_1.fluid_P[H2O2] =  IF[3] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O2] * CombCha_1.W_O + CombCha_1.fluid_F[H2O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[96] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[24] + unkR[96] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-94]  ThrustMonitor.g.fluid[H2O2] = CombCha_1.fluid_P[H2O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[185] = _div( unkR[154] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-95]  CombCha_1.fluid_P[HNO3] =  IF[4] (CombCha_1.Combustion) (CombCha_1.fluid_O[HNO3] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[HNO3] * CombCha_1.W_O + CombCha_1.fluid_F[HNO3] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[97] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[24] + unkR[97] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-96]  ThrustMonitor.g.fluid[HNO3] = CombCha_1.fluid_P[HNO3] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[186] = _div( unkR[155] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-97]  CombCha_1.fluid_P[LF2] =  IF[5] (CombCha_1.Combustion) (CombCha_1.fluid_O[LF2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LF2] * CombCha_1.W_O + CombCha_1.fluid_F[LF2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[98] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[24] + unkR[98] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-98]  ThrustMonitor.g.fluid[LF2] = CombCha_1.fluid_P[LF2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[187] = _div( unkR[156] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-99]  CombCha_1.fluid_P[RP_1] =  IF[6] (CombCha_1.Combustion) (CombCha_1.fluid_O[RP_1] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[RP_1] * CombCha_1.W_O + CombCha_1.fluid_F[RP_1] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[99] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[24] + unkR[99] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-100]  ThrustMonitor.g.fluid[RP_1] = CombCha_1.fluid_P[RP_1] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[188] = _div( unkR[157] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-101]  CombCha_1.fluid_P[LCH4] =  IF[7] (CombCha_1.Combustion) (CombCha_1.fluid_O[LCH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LCH4] * CombCha_1.W_O + CombCha_1.fluid_F[LCH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[100] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[24] + unkR[100] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-102]  ThrustMonitor.g.fluid[LCH4] = CombCha_1.fluid_P[LCH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[189] = _div( unkR[158] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-103]  CombCha_1.fluid_P[LH2] =  IF[8] (CombCha_1.Combustion) (CombCha_1.fluid_O[LH2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[LH2] * CombCha_1.W_O + CombCha_1.fluid_F[LH2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[101] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[24] + unkR[101] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-104]  ThrustMonitor.g.fluid[LH2] = CombCha_1.fluid_P[LH2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[190] = _div( unkR[159] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-105]  CombCha_1.fluid_P[N2H4] =  IF[9] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2H4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2H4] * CombCha_1.W_O + CombCha_1.fluid_F[N2H4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[102] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[24] + unkR[102] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-106]  ThrustMonitor.g.fluid[N2H4] = CombCha_1.fluid_P[N2H4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[191] = _div( unkR[160] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-107]  CombCha_1.fluid_P[UDMH] =  IF[10] (CombCha_1.Combustion) (CombCha_1.fluid_O[UDMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[UDMH] * CombCha_1.W_O + CombCha_1.fluid_F[UDMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[103] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[24] + unkR[103] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-108]  ThrustMonitor.g.fluid[UDMH] = CombCha_1.fluid_P[UDMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[192] = _div( unkR[161] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-109]  CombCha_1.fluid_P[MMH] =  IF[11] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH] * CombCha_1.W_O + CombCha_1.fluid_F[MMH] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[104] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[24] + unkR[104] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-110]  ThrustMonitor.g.fluid[MMH] = CombCha_1.fluid_P[MMH] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[193] = _div( unkR[162] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-111]  CombCha_1.fluid_P[JP_10] =  IF[12] (CombCha_1.Combustion) (CombCha_1.fluid_O[JP_10] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[JP_10] * CombCha_1.W_O + CombCha_1.fluid_F[JP_10] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[105] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[24] + unkR[105] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-112]  ThrustMonitor.g.fluid[JP_10] = CombCha_1.fluid_P[JP_10] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[194] = _div( unkR[163] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-113]  CombCha_1.fluid_P[Kerox] =  IF[13] (CombCha_1.Combustion) (CombCha_1.fluid_O[Kerox] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Kerox] * CombCha_1.W_O + CombCha_1.fluid_F[Kerox] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[106] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[24] + unkR[106] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-114]  ThrustMonitor.g.fluid[Kerox] = CombCha_1.fluid_P[Kerox] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[195] = _div( unkR[164] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-115]  CombCha_1.fluid_P[Oil] =  IF[14] (CombCha_1.Combustion) (CombCha_1.fluid_O[Oil] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Oil] * CombCha_1.W_O + CombCha_1.fluid_F[Oil] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[107] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[24] + unkR[107] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-116]  ThrustMonitor.g.fluid[Oil] = CombCha_1.fluid_P[Oil] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[196] = _div( unkR[165] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-117]  CombCha_1.fluid_P[H2O] =  IF[15] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2O] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2O] * CombCha_1.W_O + CombCha_1.fluid_F[H2O] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[108] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[24] + unkR[108] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-118]  ThrustMonitor.g.fluid[H2O] = CombCha_1.fluid_P[H2O] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[197] = _div( unkR[166] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-119]  CombCha_1.fluid_P[IPA] =  IF[16] (CombCha_1.Combustion) (CombCha_1.fluid_O[IPA] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[IPA] * CombCha_1.W_O + CombCha_1.fluid_F[IPA] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[109] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[24] + unkR[109] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-120]  ThrustMonitor.g.fluid[IPA] = CombCha_1.fluid_P[IPA] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[198] = _div( unkR[167] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-121]  CombCha_1.fluid_P[Air] =  IF[17] (CombCha_1.Combustion) (CombCha_1.fluid_O[Air] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Air] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Air] * CombCha_1.W_O + CombCha_1.fluid_F[Air] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[110] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[24] + unkR[110] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-122]  ThrustMonitor.g.fluid[Air] = CombCha_1.fluid_P[Air] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[199] = _div( unkR[168] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-123]  CombCha_1.fluid_P[Ar] =  IF[18] (CombCha_1.Combustion) (CombCha_1.fluid_O[Ar] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[Ar] * CombCha_1.W_O + CombCha_1.fluid_F[Ar] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[111] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[24] + unkR[111] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-124]  ThrustMonitor.g.fluid[Ar] = CombCha_1.fluid_P[Ar] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[200] = _div( unkR[169] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-125]  CombCha_1.fluid_P[CH4] =  IF[19] (CombCha_1.Combustion) (CombCha_1.fluid_O[CH4] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CH4] * CombCha_1.W_O + CombCha_1.fluid_F[CH4] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[112] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[170] = _div( (unkR[141] * unkR[24] + unkR[112] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-126]  ThrustMonitor.g.fluid[CH4] = CombCha_1.fluid_P[CH4] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[201] = _div( unkR[170] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-127]  CombCha_1.fluid_P[CO] =  IF[20] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO] * CombCha_1.W_O + CombCha_1.fluid_F[CO] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[171] = _div( (unkR[142] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[113] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[171] = _div( (unkR[142] * unkR[24] + unkR[113] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-128]  ThrustMonitor.g.fluid[CO] = CombCha_1.fluid_P[CO] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[202] = _div( unkR[171] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-129]  CombCha_1.fluid_P[CO2] =  IF[21] (CombCha_1.Combustion) (CombCha_1.fluid_O[CO2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[CO2] * CombCha_1.W_O + CombCha_1.fluid_F[CO2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[172] = _div( (unkR[143] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[114] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[172] = _div( (unkR[143] * unkR[24] + unkR[114] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-130]  ThrustMonitor.g.fluid[CO2] = CombCha_1.fluid_P[CO2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[203] = _div( unkR[172] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-131]  CombCha_1.fluid_P[H2] =  IF[22] (CombCha_1.Combustion) (CombCha_1.fluid_O[H2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[H2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[H2] * CombCha_1.W_O + CombCha_1.fluid_F[H2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[173] = _div( (unkR[144] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[115] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[173] = _div( (unkR[144] * unkR[24] + unkR[115] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-132]  ThrustMonitor.g.fluid[H2] = CombCha_1.fluid_P[H2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[204] = _div( unkR[173] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-133]  CombCha_1.fluid_P[He] =  IF[23] (CombCha_1.Combustion) (CombCha_1.fluid_O[He] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[He] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[He] * CombCha_1.W_O + CombCha_1.fluid_F[He] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[174] = _div( (unkR[145] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[116] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[174] = _div( (unkR[145] * unkR[24] + unkR[116] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-134]  ThrustMonitor.g.fluid[He] = CombCha_1.fluid_P[He] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[205] = _div( unkR[174] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-135]  CombCha_1.fluid_P[N2] =  IF[24] (CombCha_1.Combustion) (CombCha_1.fluid_O[N2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[N2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[N2] * CombCha_1.W_O + CombCha_1.fluid_F[N2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[175] = _div( (unkR[146] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[117] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[175] = _div( (unkR[146] * unkR[24] + unkR[117] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-136]  ThrustMonitor.g.fluid[N2] = CombCha_1.fluid_P[N2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[206] = _div( unkR[175] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-137]  CombCha_1.fluid_P[O2] =  IF[25] (CombCha_1.Combustion) (CombCha_1.fluid_O[O2] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[O2] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[O2] * CombCha_1.W_O + CombCha_1.fluid_F[O2] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[176] = _div( (unkR[147] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[118] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[176] = _div( (unkR[147] * unkR[24] + unkR[118] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-138]  ThrustMonitor.g.fluid[O2] = CombCha_1.fluid_P[O2] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[207] = _div( unkR[176] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-139]  CombCha_1.fluid_P[MMH_vapour] =  IF[26] (CombCha_1.Combustion) (CombCha_1.fluid_O[MMH_vapour] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE (CombCha_1.fluid_O[MMH_vapour] * CombCha_1.W_O + CombCha_1.fluid_F[MMH_vapour] * CombCha_1.W_F) / (CombCha_1.W_O + CombCha_1.W_F)
if( unkI[0] ) 
{
unkR[177] = _div( (unkR[148] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[119] * MATH__max(unkR[221] - 1., 0.) * unkR[21]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[177] = _div( (unkR[148] * unkR[24] + unkR[119] * unkR[19]) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
//[E-140]  ThrustMonitor.g.fluid[MMH_vapour] = CombCha_1.fluid_P[MMH_vapour] * (CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W
unkR[208] = _div( unkR[177] * (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-141]  CombCha_1.fluid_P[Comb_prod] =  IF[27] (CombCha_1.Combustion) (CombCha_1.fluid_O[Comb_prod] * MATH.max(1 - CombCha_1.phi, 0) * CombCha_1.W_O + CombCha_1.fluid_F[Comb_prod] * MATH.max(CombCha_1.phi - 1, 0) * CombCha_1.W_F_st + (1 - MATH.max(1 - CombCha_1.phi, 0)) * (CombCha_1.W_O + CombCha_1.W_F_st)) / (CombCha_1.W_O + CombCha_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[178] = _div( (unkR[149] * MATH__max(1. - unkR[221], 0.) * unkR[24] + unkR[120] * MATH__max(unkR[221] - 1., 0.) * unkR[21] + (1. - MATH__max(1. - unkR[221], 0.)) * (unkR[24] + unkR[21])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
}
else 
{
unkR[178] = 0. ;
}
//[E-142]  ThrustMonitor.g.fluid[Comb_prod] = (CombCha_1.fluid_P[Comb_prod] * (CombCha_1.W_O + CombCha_1.W_F) + CombCha_1.W_IO + CombCha_1.W_IF) / ThrustMonitor.g.W
unkR[209] = _div( (unkR[178] * (unkR[24] + unkR[19]) + unkR[23] + unkR[22]) , unkR[182],"ThrustMonitor.g.W") ;
//[E-143]  ThrustMonitor.g.Tt = (CombCha_1.f_O.p_c * CombCha_1.A_th / ThrustMonitor.g.W * LPRES.FGAMMA(ThrustMonitor.g.fluid)) ** 2 / LPRES.R(ThrustMonitor.g.fluid)
unkR[181] = _div( _pow( (_div( unkR[61] * unkR[3] , unkR[182],"ThrustMonitor.g.W") * LPRES__FGAMMA(&unkR[183])) , 2.,"(CombCha_1.f_O.p_c * CombCha_1.A_th / ThrustMonitor.g.W * LPRES.FGAMMA(ThrustMonitor.g.fluid))**(2)" ) , LPRES__R(&unkR[183]),"LPRES.R(ThrustMonitor.g.fluid)") ;
//[E-144]  CombCha_1.T_c = ThrustMonitor.g.Tt - (-(CombCha_1.W_IF / ThrustMonitor.g.W * CombCha_1.f_F.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha_1.f_F.T)) - CombCha_1.W_IO / ThrustMonitor.g.W * CombCha_1.f_O.fluid[Comb_prod_cp] * (ThrustMonitor.g.Tt - CombCha_1.f_O.T)) / ((CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P))
unkR[15] = unkR[181] - _div( (-(_div( unkR[22] , unkR[182],"ThrustMonitor.g.W") * unkR[59] * (unkR[181] - unkR[29])) - _div( unkR[23] , unkR[182],"ThrustMonitor.g.W") * unkR[92] * (unkR[181] - unkR[62])) , (_div( (unkR[24] + unkR[19]) , unkR[182],"ThrustMonitor.g.W") * LPRES__cp(&unkR[152])),"(CombCha_1.W_O + CombCha_1.W_F) / ThrustMonitor.g.W * LPRES.cp(CombCha_1.fluid_P)") ;
//[E-145]  CombCha_1.cp_R = (CombCha_1.W_O * LPRES.cp(CombCha_1.fluid_O) + CombCha_1.W_F * LPRES.cp(CombCha_1.fluid_F)) / (CombCha_1.W_O + CombCha_1.W_F)
unkR[27] = _div( (unkR[24] * LPRES__cp(&unkR[123]) + unkR[19] * LPRES__cp(&unkR[94])) , (unkR[24] + unkR[19]),"CombCha_1.W_O + CombCha_1.W_F") ;
//[E-146]  CombCha_1.T_in = (LPRES.cp(CombCha_1.fluid_P) * (CombCha_1.T_c - 298.15) - CombCha_1.eta_d * CombCha_1.Q_comb_effective / ((1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st))) / CombCha_1.cp_R + 298.15
unkR[18] = _div( (LPRES__cp(&unkR[152]) * (unkR[15] - 298.15) - _div( unkR[28] * unkR[13] , (_div( (1. + unkR[9]) , MATH__min(unkR[9], unkR[10]),"MATH.min(CombCha_1.OF, CombCha_1.OF_st)")),"(1 + CombCha_1.OF) / MATH.min(CombCha_1.OF, CombCha_1.OF_st)")) , unkR[27],"CombCha_1.cp_R") + 298.15 ;
//[E-147]  (1 + CombCha_1.phi / CombCha_1.OF_st) * CombCha_1.cp_R * CombCha_1.T_in = LPRES.cp(CombCha_1.fluid_O) * CombCha_1.f_O.T + CombCha_1.phi / CombCha_1.OF_st * LPRES.cp(CombCha_1.fluid_F) * CombCha_1.f_F.T
res[0] = evalNormResidueInternal(0,(1 + _div( unkR[221] , unkR[10],"CombCha_1.OF_st")) * unkR[27] * unkR[18],LPRES__cp(&unkR[123]) * unkR[62] + _div( unkR[221] , unkR[10],"CombCha_1.OF_st") * LPRES__cp(&unkR[94]) * unkR[29]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_offDesign_steady& m= *DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[0],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[0]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(1);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(3, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fcn1, n, &dyn[0], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-149]  ThrustMonitor.g.A_out / CombCha_1.A_th = LPRES.FGAMMA(ThrustMonitor.g.fluid) / ((CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)))
res[1] = evalNormResidueInternal(1,_div( unkR[2] , unkR[3],"CombCha_1.A_th"),_div( LPRES__FGAMMA(&unkR[183]) , (_pow( (_div( dyn[1] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**(1 / LPRES.gamma(ThrustMonitor.g.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[183]) * (1. - _pow( (_div( dyn[1] , unkR[61],"CombCha_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c)**((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))" )) , (LPRES__gamma(&unkR[183]) - 1.),"LPRES.gamma(ThrustMonitor.g.fluid) - 1"),"2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1)")),"(CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** (1 / LPRES.gamma(ThrustMonitor.g.fluid)) * sqrt(2 * LPRES.gamma(ThrustMonitor.g.fluid) * (1 - (CombCha_1.p_out_ch / CombCha_1.f_O.p_c) ** ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid))) / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_offDesign_steady& m= *DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[1],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[1]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(2);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(3, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fcn2, n, &dyn[1], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-166]  ThrustMonitor.g.W * sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / ThrustMonitor.g.A_out / CombCha_1.f_O.p_c = sqrt(LPRES.gamma(ThrustMonitor.g.fluid)) * ThrustMonitor.M_out * (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))
res[2] = evalNormResidueInternal(2,_div( _div( unkR[182] * _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , unkR[2],"ThrustMonitor.g.A_out") , unkR[61],"CombCha_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)") * dyn[2] * _pow( (1 + (LPRES__gamma(&unkR[183]) - 1)/2 * _pow( dyn[2] , 2,"(ThrustMonitor.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[183]) + 1)/2 , (LPRES__gamma(&unkR[183]) - 1),"LPRES.gamma(ThrustMonitor.g.fluid) - 1")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(-(LPRES.gamma(ThrustMonitor.g.fluid) + 1) / 2 / (LPRES.gamma(ThrustMonitor.g.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__CC_completa_OFFD_offDesign_steady& m= *DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
{
	bool isOk= false;
	bool adiv= abortDiv;
	abortDiv= false;
	int box(3);
	int info= 0;
	double residues[1];
	s_current= this;
	dcopy(3, boxDyn, dyn) ;
	isOk= solveSteady(DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fcn3, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(0,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  ThrustMonitor.g.A_out = CombCha_1.AR * CombCha_1.A_th
unkR[2] = unkR[0] * unkR[3] ;
//[E-2]  LPRES.Init_fluid(LH2_circuit.fluid, CombCha_1.f_F.fluid) %%% (OUT VAR)CombCha_1.f_F.fluid 
LPRES__Init_fluid(unkI[2], &unkR[31]);
//[E-3]  LPRES.Init_fluid(LO2_circuit.fluid, CombCha_1.f_O.fluid) %%% (OUT VAR)CombCha_1.f_O.fluid 
LPRES__Init_fluid(unkI[3], &unkR[64]);
//[E-4]  Injector_O.PR_sl =  IF[38] (LPRES.State(CombCha_1.f_O.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[242] = _pow( ((LPRES__gamma(&unkR[64]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[64]) , (LPRES__gamma(&unkR[64]) - 1.),"LPRES.gamma(CombCha_1.f_O.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_O.fluid) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[242] = 0. ;
}
//[E-5]  Injector_O.p_out_ch =  IF[39] (LPRES.State(CombCha_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[247] = _div( unkR[246] , unkR[242],"Injector_O.PR_sl") ;
}
else 
{
unkR[247] = 0. ;
}
//[E-6]  CombCha_1.fluid_O[LOX] = CombCha_1.f_O.fluid[LOX] / (1 - CombCha_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[90]),"1 - CombCha_1.f_O.fluid[Comb_prod]") ;
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
//[E-61]  ThrustMonitor.g.fluid[Comb_prod_M] = CombCha_1.fluid_P[Comb_prod_M]
unkR[210] = unkR[179] ;
//[E-62]  CombCha_1.fluid_P[Comb_prod_cp] =  IF[29] (CombCha_1.Combustion) CombCha_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[180] = unkR[26] ;
}
else 
{
unkR[180] = 0. ;
}
//[E-63]  ThrustMonitor.g.fluid[Comb_prod_cp] = CombCha_1.fluid_P[Comb_prod_cp]
unkR[211] = unkR[180] ;
//[E-64]  CombCha_1.Q_comb_effective =  ZONE[1] (CombCha_1.Combustion) CombCha_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[13] = unkR[12] ;
else unkR[13] = 0. ;
//[E-65]  CombCha_1.fluid_O[Comb_prod_M] = 0
unkR[150] = 0. ;
//[E-66]  CombCha_1.fluid_O[Comb_prod_cp] = 0
unkR[151] = 0. ;
//[E-67]  CombCha_1.fluid_F[Comb_prod_M] = 0
unkR[121] = 0. ;
//[E-68]  CombCha_1.fluid_F[Comb_prod_cp] = 0
unkR[122] = 0. ;
//[E-69]  Injector_F.PR_sl =  IF[30] (LPRES.State(CombCha_1.f_F.fluid) == Gas) ((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[230] = _pow( ((LPRES__gamma(&unkR[31]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[31]) , (LPRES__gamma(&unkR[31]) - 1.),"LPRES.gamma(CombCha_1.f_F.fluid) - 1")),"((LPRES.gamma(CombCha_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(CombCha_1.f_F.fluid) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[230] = 0. ;
}
//[E-70]  Injector_F.p_out_ch =  IF[31] (LPRES.State(CombCha_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[235] = _div( unkR[234] , unkR[230],"Injector_F.PR_sl") ;
}
else 
{
unkR[235] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-148]  CombCha_1.rho_trans = CombCha_1.f_O.p_c / ThrustMonitor.g.Tt / LPRES.R(CombCha_1.fluid_P)
unkR[223] = _div( _div( unkR[61] , unkR[181],"ThrustMonitor.g.Tt") , LPRES__R(&unkR[152]),"LPRES.R(CombCha_1.fluid_P)") ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-150]  CombCha_1.c_star = sqrt(LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt) / LPRES.FGAMMA(ThrustMonitor.g.fluid)
unkR[25] = _div( _sqrt(LPRES__R(&unkR[183]) * unkR[181],"LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.g.Tt") , LPRES__FGAMMA(&unkR[183]),"LPRES.FGAMMA(ThrustMonitor.g.fluid)") ;
//[E-151]  CombCha_1.i.Data[1] = CombCha_1.c_star
unkR[215] = unkR[25] ;
//[E-152]  CombCha_1.Pr_r = 4 * LPRES.gamma(ThrustMonitor.g.fluid) / (9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5)
unkR[11] = _div( 4. * LPRES__gamma(&unkR[183]) , (9. * LPRES__gamma(&unkR[183]) - 5.),"9 * LPRES.gamma(ThrustMonitor.g.fluid) - 5") ;
//[E-153]  CombCha_1.M_r = 1
unkR[8] = 1. ;
//[E-154]  CombCha_1.h.T = ThrustMonitor.g.Tt * (1 + CombCha_1.Pr_r ** 0.33 * (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2) / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2)
unkR[14] = unkR[181] * _div( (1. + _pow( unkR[11] , 0.33,"(CombCha_1.Pr_r)**(0.33)" ) * (LPRES__gamma(&unkR[183]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.) , (1. + (LPRES__gamma(&unkR[183]) - 1.) * _pow( unkR[8] , 2.,"(CombCha_1.M_r)**(2)" )/2.),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) * CombCha_1.M_r ** 2 / 2") ;
//[E-155]  CombCha_1.visc_r = 1.184e-07 * LPRES.M(ThrustMonitor.g.fluid) ** 0.5 * CombCha_1.h.T ** 0.6
unkR[225] = 1.184e-07 * _pow( LPRES__M(&unkR[183]) , 0.5,"(LPRES.M(ThrustMonitor.g.fluid))**(0.5)" ) * _pow( unkR[14] , 0.6,"(CombCha_1.h.T)**(0.6)" ) ;
//[E-156]  CombCha_1.h.A = 0
unkR[212] = 0. ;
//[E-157]  CombCha_1.h_g = 0
unkR[214] = 0. ;
//[E-158]  CombCha_1.h.Q = 0
unkR[213] = 0. ;
//[E-159]  Injector_F.A_sl =  IF[32] (LPRES.State(CombCha_1.f_F.fluid) == Gas) sqrt(LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)) * CombCha_1.f_F.W / (LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[227] = _div( _sqrt(unkR[233] * LPRES__R(&unkR[31]),"LH2_circuit.Tt * LPRES.R(CombCha_1.f_F.fluid)") * unkR[30] , (LPRES__FGAMMA(&unkR[31]) * unkR[234]),"LPRES.FGAMMA(CombCha_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[227] = 0. ;
}
//[E-160]  Injector_F.v_ideal =  IF[36] (LPRES.State(CombCha_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T)	 ELSE CombCha_1.f_F.W / (LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[236] = unkR[229] * _sqrt(LPRES__gamma(&unkR[31]) * LPRES__R(&unkR[31]) * unkR[29],"LPRES.gamma(CombCha_1.f_F.fluid) * LPRES.R(CombCha_1.f_F.fluid) * CombCha_1.f_F.T") ;
}
else 
{
unkR[236] = _div( unkR[30] , (LPRES__rho(&unkR[31]) * unkR[226] * unkR[228]),"LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-161]  Injector_F.Re =  IF[37] (LPRES.State(CombCha_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_F.fluid)
if( LPRES__State(&unkR[31]) == 2 ) 
{
unkR[231] = 0. ;
}
else 
{
unkR[231] = _div( LPRES__rho(&unkR[31]) * unkR[236] * unkR[228] * _sqrt(4. * unkR[226]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[31]),"LPRES.visc(CombCha_1.f_F.fluid)") ;
}
//[E-162]  Injector_O.A_sl =  IF[40] (LPRES.State(CombCha_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)) * CombCha_1.f_O.W / (LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[238] = _div( _sqrt(unkR[245] * LPRES__R(&unkR[64]),"LO2_circuit.Tt * LPRES.R(CombCha_1.f_O.fluid)") * unkR[63] , (LPRES__FGAMMA(&unkR[64]) * unkR[246]),"LPRES.FGAMMA(CombCha_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[238] = 0. ;
}
//[E-163]  Injector_O.v_ideal =  IF[44] (LPRES.State(CombCha_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T)	 ELSE CombCha_1.f_O.W / (LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[248] = unkR[240] * _sqrt(LPRES__gamma(&unkR[64]) * LPRES__R(&unkR[64]) * unkR[62],"LPRES.gamma(CombCha_1.f_O.fluid) * LPRES.R(CombCha_1.f_O.fluid) * CombCha_1.f_O.T") ;
}
else 
{
unkR[248] = _div( unkR[63] , (LPRES__rho(&unkR[64]) * unkR[237] * unkR[239]),"LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-164]  Injector_O.Re =  IF[45] (LPRES.State(CombCha_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(CombCha_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(CombCha_1.f_O.fluid)
if( LPRES__State(&unkR[64]) == 2 ) 
{
unkR[243] = 0. ;
}
else 
{
unkR[243] = _div( LPRES__rho(&unkR[64]) * unkR[248] * unkR[239] * _sqrt(4. * unkR[237]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[64]),"LPRES.visc(CombCha_1.f_O.fluid)") ;
}
//[E-165]  ThrustMonitor.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[255] = LPRES__ISA_Pressure(unkR[251]) ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-167]  ThrustMonitor.T_out = ThrustMonitor.g.Tt / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)
unkR[252] = _div( unkR[181] , (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[2] , 2.,"(ThrustMonitor.M_out)**(2)" )),"1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2") ;
//[E-168]  ThrustMonitor.p_out = CombCha_1.f_O.p_c / (1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))
unkR[256] = _div( unkR[61] , _pow( (1. + (LPRES__gamma(&unkR[183]) - 1.)/2. * _pow( dyn[2] , 2.,"(ThrustMonitor.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[183]) - 1.) , LPRES__gamma(&unkR[183]),"LPRES.gamma(ThrustMonitor.g.fluid)")),"(LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)")),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2)**(1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))" ),"(1 + (LPRES.gamma(ThrustMonitor.g.fluid) - 1) / 2 * ThrustMonitor.M_out ** 2) ** (1 / ((LPRES.gamma(ThrustMonitor.g.fluid) - 1) / LPRES.gamma(ThrustMonitor.g.fluid)))") ;
//[E-169]  ThrustMonitor.v_out = ThrustMonitor.M_out * sqrt(LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out)
unkR[257] = dyn[2] * _sqrt(LPRES__gamma(&unkR[183]) * LPRES__R(&unkR[183]) * unkR[252],"LPRES.gamma(ThrustMonitor.g.fluid) * LPRES.R(ThrustMonitor.g.fluid) * ThrustMonitor.T_out") ;
//[E-170]  ThrustMonitor.Thrust = ThrustMonitor.g.W * ThrustMonitor.v_out + ThrustMonitor.g.A_out * (ThrustMonitor.p_out - ThrustMonitor.p_amb)
unkR[253] = unkR[182] * unkR[257] + unkR[2] * (unkR[256] - unkR[255]) ;
//[E-171]  ThrustMonitor.i.Data[1] = ThrustMonitor.Thrust
unkR[254] = unkR[253] ;

//save last residues
memcpy(this->res,res,3*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[183])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor.","Gas == LPRES.State(ThrustMonitor.g.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[2] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor.","ThrustMonitor.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[256] , unkR[255],"ThrustMonitor.p_amb")) > (_pow( (1.88 * dyn[2] - 1) , -0.64,"(1.88 * ThrustMonitor.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor.","(ThrustMonitor.p_out / ThrustMonitor.p_amb) > ((1.88 * ThrustMonitor.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111] + unkR[141] * unkR[112] + unkR[142] * unkR[113] + unkR[143] * unkR[114] + unkR[144] * unkR[115] + unkR[145] * unkR[116] + unkR[146] * unkR[117] + unkR[147] * unkR[118] + unkR[148] * unkR[119]; //(CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //CombCha_1.Combustion
    ev[3]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[4]= dyn[0] - unkR[230]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[31]) - 2; //LPRES.State(CombCha_1.f_F.fluid) == Gas
    ev[6]= dyn[0] - unkR[230]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[8]= unkR[241] - unkR[242]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[64]) - 2; //LPRES.State(CombCha_1.f_O.fluid) == Gas
    ev[10]= unkR[241] - unkR[242]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (CombCha_1.fluid_O[LOX] * CombCha_1.fluid_F[LOX] + CombCha_1.fluid_O[NTO] * CombCha_1.fluid_F[NTO] + CombCha_1.fluid_O[H2O2] * CombCha_1.fluid_F[H2O2] + CombCha_1.fluid_O[HNO3] * CombCha_1.fluid_F[HNO3] + CombCha_1.fluid_O[LF2] * CombCha_1.fluid_F[LF2] + CombCha_1.fluid_O[RP_1] * CombCha_1.fluid_F[RP_1] + CombCha_1.fluid_O[LCH4] * CombCha_1.fluid_F[LCH4] + CombCha_1.fluid_O[LH2] * CombCha_1.fluid_F[LH2] + CombCha_1.fluid_O[N2H4] * CombCha_1.fluid_F[N2H4] + CombCha_1.fluid_O[UDMH] * CombCha_1.fluid_F[UDMH] + CombCha_1.fluid_O[MMH] * CombCha_1.fluid_F[MMH] + CombCha_1.fluid_O[JP_10] * CombCha_1.fluid_F[JP_10] + CombCha_1.fluid_O[Kerox] * CombCha_1.fluid_F[Kerox] + CombCha_1.fluid_O[Oil] * CombCha_1.fluid_F[Oil] + CombCha_1.fluid_O[H2O] * CombCha_1.fluid_F[H2O] + CombCha_1.fluid_O[IPA] * CombCha_1.fluid_F[IPA] + CombCha_1.fluid_O[Air] * CombCha_1.fluid_F[Air] + CombCha_1.fluid_O[Ar] * CombCha_1.fluid_F[Ar] + CombCha_1.fluid_O[CH4] * CombCha_1.fluid_F[CH4] + CombCha_1.fluid_O[CO] * CombCha_1.fluid_F[CO] + CombCha_1.fluid_O[CO2] * CombCha_1.fluid_F[CO2] + CombCha_1.fluid_O[H2] * CombCha_1.fluid_F[H2] + CombCha_1.fluid_O[He] * CombCha_1.fluid_F[He] + CombCha_1.fluid_O[N2] * CombCha_1.fluid_F[N2] + CombCha_1.fluid_O[O2] * CombCha_1.fluid_F[O2] + CombCha_1.fluid_O[MMH_vapour] * CombCha_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // CombCha_1.Q_comb_effective =  ZONE (CombCha_1.Combustion) CombCha_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(CombCha_1.f_F.fluid) - 1) / LPRES.gamma(CombCha_1.f_F.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_F.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(CombCha_1.f_O.fluid) - 1) / LPRES.gamma(CombCha_1.f_O.fluid)) - 1) / (LPRES.gamma(CombCha_1.f_O.fluid) - 1)) ZONE (LPRES.State(CombCha_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::initDelays()
{
}


bool DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady = 43848;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady;
return true;
}



bool DRLPRUEBAS__CC_completa_OFFD_offDesign_steady::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady = 76;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady[] = 
{
"AwAAAAUAAAAAAAAAAQAAAAIAAAACAAAAAQAAAAEAAAACAAAAAQAAAAMAAAAAAAAAAAAAAAAAAAA="
};
*size = s_gsi_size_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__CC_completa_OFFD_offDesign_steady(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__CC_completa_OFFD_offDesign_steady(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__CC_completa_OFFD_offDesign_steady(name,dirInstall);
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
	sprintf(partitionName,"%s","offDesign_steady");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+c+c_completa_+o+f+f+d.off+design_steady");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

