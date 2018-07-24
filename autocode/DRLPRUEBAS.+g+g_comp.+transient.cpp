//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_Transient_CPP
#define DRLPRUEBAS__GG_comp_Transient_CPP

#include "DRLPRUEBAS.+g+g_comp.+transient.h"

DRLPRUEBAS__GG_comp_Transient* DRLPRUEBAS__GG_comp_Transient::s_current= NULL;

DRLPRUEBAS__GG_comp_Transient::DRLPRUEBAS__GG_comp_Transient(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "GG_comp";
m_infoPartitionName = "Transient";
m_infoModelName = "DRLPRUEBAS__GG_comp_Transient";
m_infoModelFileName = "DRLPRUEBAS.+g+g_comp.+transient";
m_infoModelFileNameExtra = "+g+g_comp.+transient";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 11:09:21.192000";
m_infoPartitionDate = "29/06/2018 10:03:49.962000";
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
static int elmind2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 } ;
static int elmind3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 
		17, 18, 19, 20, 21, 22, 23, 24, 25, 26 } ;
static int elmind4[] = { 1, 4 } ;
static const char * elmstr5[] = { "Design", "Known_pi", "Known_W", "Off_design", "Known_pt_out", "Known_dp", "Known_dpr", "Darcy", NULL } ;
static int elmind5[] = { 1, 2, 3, 4, 5, 6, 7, 8 } ;
static const char * elmstr6[] = { "All", "Unknown_W", NULL } ;
static int elmind6[] = { 1, 2 } ;
n_typ=7;
static struct INTEG_enumType tmp_typ[] = { 
		{elmstr0,29,elmind0},
		{elmstr1,2,elmind1},
		{elmstr0,16,elmind2},
		{elmstr0,26,elmind3},
		{elmstr5,2,elmind4},
		{elmstr5,8,elmind5},
		{elmstr6,2,elmind6}
	} ;
typ= new struct INTEG_enumType[7];
etypecopy(7,typ,tmp_typ);
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

n_unkR=247;
unkR= new double[247] ;
static double tmp_unkRInit[247]={ 14.25, 2.01594, 31.9988, 0, 8, 14700000, 0, 0, 4000, 3000, 0, 0, 1000, 0, 0, 0, 
		0, 0, 3700, 0, 0.99, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 10, 5000000, 5000000, 
		0, 1, 0.032, 0.00178349971, 0, 0.5, 0, 0, 0, 2.70069069, 151.106354, 3494748.63, 0, 0, 0.000580606872, 0, 
		0.5, 0, 10, 0, 0, 16.3526821, 99.1952397, 4597104.18, 0, 0, 2.70069069, 16.3526821, 0, 56.88798558, 1, 0.0134109877, 
		19.0533729, 0, 0, 0, 0, 0, 0 } ;
unkRInit= new double[247];
dcopy(247,unkRInit,tmp_unkRInit);


n_cteR=8;
static double tmp_cteRInit[8]={ 8314, 298.15, 288.15, 9.80665, 101325, 1e+38, 3.14159265358979, 0 } ;
cteR= tmp_cteRInit;

n_unkI=3;
unkI= new int[3] ;
static int tmp_unkIInit[3]={ 0, 22, 1 } ;
unkIInit= new int[3];
icopy(3,unkIInit,tmp_unkIInit);


n_cteI=8;
static int tmp_cteIInit[8]={ 4, 1, 4, 4, 2, 2, 4, 1 } ;
cteI= tmp_cteIInit;

n_unkS=0;

n_cteS=16;
static std::string tmp_cteSInit[16]={ "-", "J/kg", "J/(kg·K)", "J/(kmol·K)", "K", "N", "Pa", "Pa·s", "g/mol", "kg/m^3", "kg/s", "m", "m^2", "m/s", "m/s^2", "s" } ;
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
void DRLPRUEBAS__GG_comp_Transient::initInternalModels()
{
}

void DRLPRUEBAS__GG_comp_Transient::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__GG_comp_Transient::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__cp(double fluid[])
{
	// Local variables:
	double Chem_cp[26] = { 1680,1600,2629,1720,1640,2093,3480,7320,3080,2720,2840,1675,1800,1800,4182,2400,1004,520,3000,1080,1000,15800,5193,1039,
1000,1600 };
	int _vi3;
	int _vi4;
	double _vr1;

	_vr1 = 0. ;
	_vi3 = 1 ;
	while ( _vi3 <= setofSize(&typ[3]) ) {
	_vi4 = setofElem(&typ[3], _vi3) ;
	_vr1 += Chem_cp[_vi3-1] * fluid[_vi4-1] ;
	_vi3 += 1 ;
	}
	return _vr1 + fluid[28] * fluid[26] ;
}


int DRLPRUEBAS__GG_comp_Transient::LPRES__Know_fluid(double fluid[])
{
	// Local variables:
	int fluid_name = 1;
	int _vi5;
	int _vi6;

	_vi5 = 1 ;
	while ( _vi5 <= setofSize(&typ[3]) ) {
	_vi6 = setofElem(&typ[3], _vi5) ;
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


int DRLPRUEBAS__GG_comp_Transient::LPRES__State(double fluid[])
{
	// Local variables:
	int fluid_state = 1;
	int fluid_name = 1;

	fluid_name = LPRES__Know_fluid(fluid) ;
	if( setofPos(&typ[2], fluid_name) != 0 ) {
	fluid_state = 1 ;
	}
	else {
	fluid_state = 2 ;
	}
	return fluid_state ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__M(double fluid[])
{
	// Local variables:
	double Chem_M[26] = { 31.9988,92.011,34.0147,63.01,38,172,16.0426,2.01594,32.04516,60.1,46.07,136.234,170.34,60,18,60.1,28.958538,39.948,16.0426,28.0104,44.0098,2.01594,4.0026,28.01348,
31.9988,46.07 };
	int _vi7;
	int _vi8;
	double _vr2;

	_vr2 = 0. ;
	_vi7 = 1 ;
	while ( _vi7 <= setofSize(&typ[3]) ) {
	_vi8 = setofElem(&typ[3], _vi7) ;
	_vr2 += _div( fluid[_vi8-1] , Chem_M[_vi7-1],"Chem_M[_vi7]") ;
	_vi7 += 1 ;
	}
	return _div( 1 , (_vr2 + _div( fluid[26] , fluid[27],"fluid[Comb_prod_M]")),"_vr2 + fluid[Comb_prod] / fluid[Comb_prod_M]") ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__GG_comp_Transient::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__rho(double fluid[])
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
	while ( _vi9 <= setofSize(&typ[2]) ) {
	_vi10 = setofElem(&typ[2], _vi9) ;
	_vr3 += Chem_rho[_vi9-1] * fluid[_vi10-1] ;
	_vi9 += 1 ;
	}
	return _vr3 ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__visc(double fluid[])
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
	while ( _vi11 <= setofSize(&typ[2]) ) {
	_vi12 = setofElem(&typ[2], _vi11) ;
	_vr4 += Chem_visc[_vi11-1] * fluid[_vi12-1] ;
	_vi11 += 1 ;
	}
	return _vr4 ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__GG_comp_Transient::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__GG_comp_Transient::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__GG_comp_Transient::initBlocks( double dyn[], double ldr[], double *_time )
{
	s_current= this;
  // init(GasGen_1.GasGen,100)
	LPRES__Init_fluid(27, &unkR[173]) ;
	unkI[0] = 1 ;
	unkR[208] = 1. ;
	unkR[11] = unkR[12] ;
	unkR[203] = _div( 1. , unkR[205],"GasGen_1.mfr_ch") ;
	unkR[204] = _div( 1. , (unkR[205] * unkR[9]),"GasGen_1.mfr_ch * GasGen_1.T_ch") ;
  // init(LH2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[1], &unkR[23]) ;
  // init(LO2_circuit.Inlet,100)
	LPRES__Init_fluid(unkI[2], &unkR[56]) ;
	copyBack( dyn, ldr ) ;
}


/* Residues function for box 1*/
void DRLPRUEBAS__GG_comp_Transient::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-63]  GasGen_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[53] = _div( unkR[219] , dyn[2],"Injector_F.PR") ;
//[E-64]  GasGen_1.f_F.p =  IF[33] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[52] = MATH__max(unkR[53], unkR[220]) ;
}
else 
{
unkR[52] = unkR[53] ;
}
//[E-65]  Injector_O.PR = LO2_circuit.pt / GasGen_1.f_O.p_c
unkR[226] = _div( unkR[231] , unkR[53],"GasGen_1.f_O.p_c") ;
//[E-66]  Injector_O.M_out =  ZONE[3] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[225] = _sqrt(_div( 2. * (_pow( unkR[226] , (_div( (LPRES__gamma(&unkR[56]) - 1.) , LPRES__gamma(&unkR[56]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[56]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[225] = 1. ;
else unkR[225] = 0. ;
//[E-67]  GasGen_1.f_O.p =  IF[41] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[85] = MATH__max(unkR[53], unkR[232]) ;
}
else 
{
unkR[85] = unkR[53] ;
}
//[E-68]  GasGen_1.f_O.W =  IF[43] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(GasGen_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (LO2_circuit.pt - GasGen_1.f_O.p))
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[55] = _div( _div( unkR[222] * LPRES__FGAMMA(&unkR[56]) * unkR[231] , _sqrt(unkR[230] * LPRES__R(&unkR[56]),"LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[56]) - 1.) * _pow( unkR[225] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[56]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[56]) + 1.) , (2. * (LPRES__gamma(&unkR[56]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[225],"Injector_O.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[55] = unkR[222] * unkR[224] * _sqrt(2. * LPRES__rho(&unkR[56]) * (unkR[231] - unkR[85]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (LO2_circuit.pt - GasGen_1.f_O.p)") ;
}
//[E-69]  GasGen_1.W_O = GasGen_1.f_O.W * (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[16] = unkR[55] * (1. - unkR[82]) ;
//[E-70]  Injector_F.M_out =  ZONE[2] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE[2] (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1	  OTHERS 0
 if(m_branchZone[1]==0)
	unkR[214] = _sqrt(_div( 2. * (_pow( dyn[2] , (_div( (LPRES__gamma(&unkR[23]) - 1.) , LPRES__gamma(&unkR[23]),"LPRES.gamma(GasGen_1.f_F.fluid)")),"(Injector_F.PR)**((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid))" ) - 1.) , (LPRES__gamma(&unkR[23]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1"),"2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)") ;
else  if(m_branchZone[1]==1)
	unkR[214] = 1. ;
else unkR[214] = 0. ;
//[E-71]  GasGen_1.f_F.W =  IF[35] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.A * LPRES.FGAMMA(GasGen_1.f_F.fluid) * LH2_circuit.pt / sqrt(LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out)	 ELSE Injector_F.A * Injector_F.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_F.fluid) * (LH2_circuit.pt - GasGen_1.f_F.p))
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[22] = _div( _div( unkR[211] * LPRES__FGAMMA(&unkR[23]) * unkR[219] , _sqrt(unkR[218] * LPRES__R(&unkR[23]),"LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[23]) - 1.) * _pow( unkR[214] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[23]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[23]) + 1.) , (2. * (LPRES__gamma(&unkR[23]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[214],"Injector_F.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[22] = unkR[211] * unkR[213] * _sqrt(2. * LPRES__rho(&unkR[23]) * (unkR[219] - unkR[52]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (LH2_circuit.pt - GasGen_1.f_F.p)") ;
}
//[E-72]  GasGen_1.W_F = GasGen_1.f_F.W * (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[11] = unkR[22] * (1. - unkR[49]) ;
//[E-73]  GasGen_1.OF = GasGen_1.W_O / GasGen_1.W_F
unkR[3] = _div( unkR[16] , unkR[11],"GasGen_1.W_F") ;
//[E-74]  GasGen_1.phi = GasGen_1.OF_st / GasGen_1.OF
unkR[208] = _div( unkR[4] , unkR[3],"GasGen_1.OF") ;
//[E-75]  GasGen_1.W_F_st = GasGen_1.W_F / GasGen_1.phi
unkR[13] = _div( unkR[11] , unkR[208],"GasGen_1.phi") ;
//[E-76]  GasGen_1.fluid_P[LOX] =  IF[1] (GasGen_1.Combustion) (GasGen_1.fluid_O[LOX] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LOX] * GasGen_1.W_O + GasGen_1.fluid_F[LOX] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[144] = _div( (unkR[115] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[86] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[144] = _div( (unkR[115] * unkR[16] + unkR[86] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-77]  GasGen_1.fluid_P[NTO] =  IF[2] (GasGen_1.Combustion) (GasGen_1.fluid_O[NTO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[NTO] * GasGen_1.W_O + GasGen_1.fluid_F[NTO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[145] = _div( (unkR[116] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[87] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[145] = _div( (unkR[116] * unkR[16] + unkR[87] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-78]  GasGen_1.fluid_P[H2O2] =  IF[3] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O2] * GasGen_1.W_O + GasGen_1.fluid_F[H2O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[146] = _div( (unkR[117] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[88] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[146] = _div( (unkR[117] * unkR[16] + unkR[88] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-79]  GasGen_1.fluid_P[HNO3] =  IF[4] (GasGen_1.Combustion) (GasGen_1.fluid_O[HNO3] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[HNO3] * GasGen_1.W_O + GasGen_1.fluid_F[HNO3] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[147] = _div( (unkR[118] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[89] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[147] = _div( (unkR[118] * unkR[16] + unkR[89] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-80]  GasGen_1.fluid_P[LF2] =  IF[5] (GasGen_1.Combustion) (GasGen_1.fluid_O[LF2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LF2] * GasGen_1.W_O + GasGen_1.fluid_F[LF2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[148] = _div( (unkR[119] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[90] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[148] = _div( (unkR[119] * unkR[16] + unkR[90] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-81]  GasGen_1.fluid_P[RP_1] =  IF[6] (GasGen_1.Combustion) (GasGen_1.fluid_O[RP_1] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[RP_1] * GasGen_1.W_O + GasGen_1.fluid_F[RP_1] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[149] = _div( (unkR[120] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[91] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[149] = _div( (unkR[120] * unkR[16] + unkR[91] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-82]  GasGen_1.fluid_P[LCH4] =  IF[7] (GasGen_1.Combustion) (GasGen_1.fluid_O[LCH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LCH4] * GasGen_1.W_O + GasGen_1.fluid_F[LCH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[150] = _div( (unkR[121] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[92] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[150] = _div( (unkR[121] * unkR[16] + unkR[92] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-83]  GasGen_1.fluid_P[LH2] =  IF[8] (GasGen_1.Combustion) (GasGen_1.fluid_O[LH2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[LH2] * GasGen_1.W_O + GasGen_1.fluid_F[LH2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[151] = _div( (unkR[122] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[93] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[151] = _div( (unkR[122] * unkR[16] + unkR[93] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-84]  GasGen_1.fluid_P[N2H4] =  IF[9] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2H4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2H4] * GasGen_1.W_O + GasGen_1.fluid_F[N2H4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[152] = _div( (unkR[123] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[94] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[152] = _div( (unkR[123] * unkR[16] + unkR[94] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-85]  GasGen_1.fluid_P[UDMH] =  IF[10] (GasGen_1.Combustion) (GasGen_1.fluid_O[UDMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[UDMH] * GasGen_1.W_O + GasGen_1.fluid_F[UDMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[153] = _div( (unkR[124] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[95] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[153] = _div( (unkR[124] * unkR[16] + unkR[95] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-86]  GasGen_1.fluid_P[MMH] =  IF[11] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH] * GasGen_1.W_O + GasGen_1.fluid_F[MMH] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[154] = _div( (unkR[125] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[96] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[154] = _div( (unkR[125] * unkR[16] + unkR[96] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-87]  GasGen_1.fluid_P[JP_10] =  IF[12] (GasGen_1.Combustion) (GasGen_1.fluid_O[JP_10] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[JP_10] * GasGen_1.W_O + GasGen_1.fluid_F[JP_10] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[155] = _div( (unkR[126] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[97] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[155] = _div( (unkR[126] * unkR[16] + unkR[97] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-88]  GasGen_1.fluid_P[Kerox] =  IF[13] (GasGen_1.Combustion) (GasGen_1.fluid_O[Kerox] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Kerox] * GasGen_1.W_O + GasGen_1.fluid_F[Kerox] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[156] = _div( (unkR[127] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[98] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[156] = _div( (unkR[127] * unkR[16] + unkR[98] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-89]  GasGen_1.fluid_P[Oil] =  IF[14] (GasGen_1.Combustion) (GasGen_1.fluid_O[Oil] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Oil] * GasGen_1.W_O + GasGen_1.fluid_F[Oil] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[157] = _div( (unkR[128] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[99] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[157] = _div( (unkR[128] * unkR[16] + unkR[99] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-90]  GasGen_1.fluid_P[H2O] =  IF[15] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2O] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2O] * GasGen_1.W_O + GasGen_1.fluid_F[H2O] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[158] = _div( (unkR[129] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[100] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[158] = _div( (unkR[129] * unkR[16] + unkR[100] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-91]  GasGen_1.fluid_P[IPA] =  IF[16] (GasGen_1.Combustion) (GasGen_1.fluid_O[IPA] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[IPA] * GasGen_1.W_O + GasGen_1.fluid_F[IPA] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[159] = _div( (unkR[130] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[101] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[159] = _div( (unkR[130] * unkR[16] + unkR[101] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-92]  GasGen_1.fluid_P[Air] =  IF[17] (GasGen_1.Combustion) (GasGen_1.fluid_O[Air] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Air] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Air] * GasGen_1.W_O + GasGen_1.fluid_F[Air] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[160] = _div( (unkR[131] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[102] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[160] = _div( (unkR[131] * unkR[16] + unkR[102] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-93]  GasGen_1.fluid_P[Ar] =  IF[18] (GasGen_1.Combustion) (GasGen_1.fluid_O[Ar] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[Ar] * GasGen_1.W_O + GasGen_1.fluid_F[Ar] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[161] = _div( (unkR[132] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[103] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[161] = _div( (unkR[132] * unkR[16] + unkR[103] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-94]  GasGen_1.fluid_P[CH4] =  IF[19] (GasGen_1.Combustion) (GasGen_1.fluid_O[CH4] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CH4] * GasGen_1.W_O + GasGen_1.fluid_F[CH4] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[162] = _div( (unkR[133] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[104] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[162] = _div( (unkR[133] * unkR[16] + unkR[104] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-95]  GasGen_1.fluid_P[CO] =  IF[20] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO] * GasGen_1.W_O + GasGen_1.fluid_F[CO] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[163] = _div( (unkR[134] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[105] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[163] = _div( (unkR[134] * unkR[16] + unkR[105] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-96]  GasGen_1.fluid_P[CO2] =  IF[21] (GasGen_1.Combustion) (GasGen_1.fluid_O[CO2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[CO2] * GasGen_1.W_O + GasGen_1.fluid_F[CO2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[164] = _div( (unkR[135] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[106] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[164] = _div( (unkR[135] * unkR[16] + unkR[106] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-97]  GasGen_1.fluid_P[H2] =  IF[22] (GasGen_1.Combustion) (GasGen_1.fluid_O[H2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[H2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[H2] * GasGen_1.W_O + GasGen_1.fluid_F[H2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[165] = _div( (unkR[136] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[107] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[165] = _div( (unkR[136] * unkR[16] + unkR[107] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-98]  GasGen_1.fluid_P[He] =  IF[23] (GasGen_1.Combustion) (GasGen_1.fluid_O[He] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[He] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[He] * GasGen_1.W_O + GasGen_1.fluid_F[He] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[166] = _div( (unkR[137] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[108] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[166] = _div( (unkR[137] * unkR[16] + unkR[108] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-99]  GasGen_1.fluid_P[N2] =  IF[24] (GasGen_1.Combustion) (GasGen_1.fluid_O[N2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[N2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[N2] * GasGen_1.W_O + GasGen_1.fluid_F[N2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[167] = _div( (unkR[138] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[109] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[167] = _div( (unkR[138] * unkR[16] + unkR[109] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-100]  GasGen_1.fluid_P[O2] =  IF[25] (GasGen_1.Combustion) (GasGen_1.fluid_O[O2] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[O2] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[O2] * GasGen_1.W_O + GasGen_1.fluid_F[O2] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[168] = _div( (unkR[139] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[110] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[168] = _div( (unkR[139] * unkR[16] + unkR[110] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-101]  GasGen_1.fluid_P[MMH_vapour] =  IF[26] (GasGen_1.Combustion) (GasGen_1.fluid_O[MMH_vapour] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE (GasGen_1.fluid_O[MMH_vapour] * GasGen_1.W_O + GasGen_1.fluid_F[MMH_vapour] * GasGen_1.W_F) / (GasGen_1.W_O + GasGen_1.W_F)
if( unkI[0] ) 
{
unkR[169] = _div( (unkR[140] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[111] * MATH__max(unkR[208] - 1., 0.) * unkR[13]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[169] = _div( (unkR[140] * unkR[16] + unkR[111] * unkR[11]) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
//[E-102]  GasGen_1.fluid_P[Comb_prod] =  IF[27] (GasGen_1.Combustion) (GasGen_1.fluid_O[Comb_prod] * MATH.max(1 - GasGen_1.phi, 0) * GasGen_1.W_O + GasGen_1.fluid_F[Comb_prod] * MATH.max(GasGen_1.phi - 1, 0) * GasGen_1.W_F_st + (1 - MATH.max(1 - GasGen_1.phi, 0)) * (GasGen_1.W_O + GasGen_1.W_F_st)) / (GasGen_1.W_O + GasGen_1.W_F)	 ELSE 0
if( unkI[0] ) 
{
unkR[170] = _div( (unkR[141] * MATH__max(1. - unkR[208], 0.) * unkR[16] + unkR[112] * MATH__max(unkR[208] - 1., 0.) * unkR[13] + (1. - MATH__max(1. - unkR[208], 0.)) * (unkR[16] + unkR[13])) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
}
else 
{
unkR[170] = 0. ;
}
//[E-103]  GasGen_1.f_O.p_c = GasGen_1.rho_trans * LPRES.R(GasGen_1.fluid_P) * GasGen_1.g.Tt
res[2] = evalNormResidueInternal(2,unkR[53],dyn[0] * LPRES__R(&unkR[144]) * dyn[1]);
}


/* Wrapper to call the residues's box 1 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_Transient::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_Transient& m= *DRLPRUEBAS__GG_comp_Transient::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__GG_comp_Transient::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_Transient::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__GG_comp_Transient::fbox2(double *_time,double dyn[],double ldr[],double res[])
{
//[E-108]  NozzleConDiv_1.g_in.fluid[LOX] = GasGen_1.fluid_P[LOX] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[173] = _div( unkR[144] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-109]  NozzleConDiv_1.g_in.fluid[NTO] = GasGen_1.fluid_P[NTO] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[174] = _div( unkR[145] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-110]  NozzleConDiv_1.g_in.fluid[H2O2] = GasGen_1.fluid_P[H2O2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[175] = _div( unkR[146] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-111]  NozzleConDiv_1.g_in.fluid[HNO3] = GasGen_1.fluid_P[HNO3] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[176] = _div( unkR[147] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-112]  NozzleConDiv_1.g_in.fluid[LF2] = GasGen_1.fluid_P[LF2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[177] = _div( unkR[148] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-113]  NozzleConDiv_1.g_in.fluid[RP_1] = GasGen_1.fluid_P[RP_1] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[178] = _div( unkR[149] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-114]  NozzleConDiv_1.g_in.fluid[LCH4] = GasGen_1.fluid_P[LCH4] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[179] = _div( unkR[150] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-115]  NozzleConDiv_1.g_in.fluid[LH2] = GasGen_1.fluid_P[LH2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[180] = _div( unkR[151] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-116]  NozzleConDiv_1.g_in.fluid[N2H4] = GasGen_1.fluid_P[N2H4] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[181] = _div( unkR[152] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-117]  NozzleConDiv_1.g_in.fluid[UDMH] = GasGen_1.fluid_P[UDMH] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[182] = _div( unkR[153] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-118]  NozzleConDiv_1.g_in.fluid[MMH] = GasGen_1.fluid_P[MMH] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[183] = _div( unkR[154] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-119]  NozzleConDiv_1.g_in.fluid[JP_10] = GasGen_1.fluid_P[JP_10] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[184] = _div( unkR[155] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-120]  NozzleConDiv_1.g_in.fluid[Kerox] = GasGen_1.fluid_P[Kerox] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[185] = _div( unkR[156] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-121]  NozzleConDiv_1.g_in.fluid[Oil] = GasGen_1.fluid_P[Oil] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[186] = _div( unkR[157] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-122]  NozzleConDiv_1.g_in.fluid[H2O] = GasGen_1.fluid_P[H2O] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[187] = _div( unkR[158] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-123]  NozzleConDiv_1.g_in.fluid[IPA] = GasGen_1.fluid_P[IPA] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[188] = _div( unkR[159] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-124]  NozzleConDiv_1.g_in.fluid[Air] = GasGen_1.fluid_P[Air] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[189] = _div( unkR[160] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-125]  NozzleConDiv_1.g_in.fluid[Ar] = GasGen_1.fluid_P[Ar] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[190] = _div( unkR[161] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-126]  NozzleConDiv_1.g_in.fluid[CH4] = GasGen_1.fluid_P[CH4] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[191] = _div( unkR[162] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-127]  NozzleConDiv_1.g_in.fluid[CO] = GasGen_1.fluid_P[CO] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[192] = _div( unkR[163] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-128]  NozzleConDiv_1.g_in.fluid[CO2] = GasGen_1.fluid_P[CO2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[193] = _div( unkR[164] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-129]  NozzleConDiv_1.g_in.fluid[H2] = GasGen_1.fluid_P[H2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[194] = _div( unkR[165] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-130]  NozzleConDiv_1.g_in.fluid[He] = GasGen_1.fluid_P[He] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[195] = _div( unkR[166] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-131]  NozzleConDiv_1.g_in.fluid[N2] = GasGen_1.fluid_P[N2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[196] = _div( unkR[167] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-132]  NozzleConDiv_1.g_in.fluid[O2] = GasGen_1.fluid_P[O2] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[197] = _div( unkR[168] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-133]  NozzleConDiv_1.g_in.fluid[MMH_vapour] = GasGen_1.fluid_P[MMH_vapour] * (GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W
unkR[198] = _div( unkR[169] * (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-134]  NozzleConDiv_1.g_in.fluid[Comb_prod] = (GasGen_1.fluid_P[Comb_prod] * (GasGen_1.W_O + GasGen_1.W_F) + GasGen_1.W_IO + GasGen_1.W_IF) / NozzleConDiv_1.g_in.W
unkR[199] = _div( (unkR[170] * (unkR[16] + unkR[11]) + unkR[15] + unkR[14]) , dyn[3],"NozzleConDiv_1.g_in.W") ;
//[E-135]  LPRES.FGAMMA(NozzleConDiv_1.g_in.fluid) = NozzleConDiv_1.g_in.W * sqrt(GasGen_1.g.Tt * LPRES.R(NozzleConDiv_1.g_in.fluid)) / (GasGen_1.f_O.p_c * NozzleConDiv_1.A_th)
res[3] = evalNormResidueInternal(3,LPRES__FGAMMA(&unkR[173]),_div( dyn[3] * _sqrt(dyn[1] * LPRES__R(&unkR[173]),"GasGen_1.g.Tt * LPRES.R(NozzleConDiv_1.g_in.fluid)") , (unkR[53] * unkR[239]),"GasGen_1.f_O.p_c * NozzleConDiv_1.A_th"));
}


/* Wrapper to call the residues's box 2 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_Transient::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_Transient& m= *DRLPRUEBAS__GG_comp_Transient::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__GG_comp_Transient::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_Transient::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__GG_comp_Transient::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-157]  NozzleConDiv_1.AR = LPRES.FGAMMA(NozzleConDiv_1.g_in.fluid) / ((NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** (1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * sqrt(2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[237],_div( LPRES__FGAMMA(&unkR[173]) , (_pow( (_div( dyn[4] , unkR[53],"GasGen_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c)**(1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[173]) * (1. - _pow( (_div( dyn[4] , unkR[53],"GasGen_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[173]) - 1.) , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c)**((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))" )) , (LPRES__gamma(&unkR[173]) - 1.),"LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1"),"2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** (1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * sqrt(2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_Transient::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_Transient& m= *DRLPRUEBAS__GG_comp_Transient::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__GG_comp_Transient::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_Transient::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__GG_comp_Transient::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-159]  NozzleConDiv_1.g_in.W * sqrt(LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt) / ThrustMonitor_1.g.A_out / GasGen_1.f_O.p_c = sqrt(LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(NozzleConDiv_1.g_in.fluid) + 1) / 2 / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( dyn[3] * _sqrt(LPRES__R(&unkR[173]) * dyn[1],"LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt") , unkR[238],"ThrustMonitor_1.g.A_out") , unkR[53],"GasGen_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[173]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[173]) + 1)/2 , (LPRES__gamma(&unkR[173]) - 1),"LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1")),"(1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(NozzleConDiv_1.g_in.fluid) + 1) / 2 / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_Transient::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_Transient& m= *DRLPRUEBAS__GG_comp_Transient::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__GG_comp_Transient::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_Transient::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__GG_comp_Transient::fres( double *_time, double dyn[], double der[], double res[] )
{
m_residuesEvals++;
s_current= this;
dcopy(2,ldr,der) ;
evalBoundsExp(*_time);
printDbgInfoForModel(-1,true);
//[E-1]  LPRES.Init_fluid(LO2_circuit.fluid, GasGen_1.f_O.fluid) %%% (OUT VAR)GasGen_1.f_O.fluid 
LPRES__Init_fluid(unkI[2], &unkR[56]);
//[E-2]  GasGen_1.fluid_O[LOX] = GasGen_1.f_O.fluid[LOX] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[115] = _div( unkR[56] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-3]  LPRES.Init_fluid(LH2_circuit.fluid, GasGen_1.f_F.fluid) %%% (OUT VAR)GasGen_1.f_F.fluid 
LPRES__Init_fluid(unkI[1], &unkR[23]);
//[E-4]  Injector_F.PR_sl =  IF[30] (LPRES.State(GasGen_1.f_F.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[215] = _pow( ((LPRES__gamma(&unkR[23]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[23]) , (LPRES__gamma(&unkR[23]) - 1.),"LPRES.gamma(GasGen_1.f_F.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_F.fluid) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1))" ) ;
}
else 
{
unkR[215] = 0. ;
}
//[E-5]  Injector_F.p_out_ch =  IF[31] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit.pt / Injector_F.PR_sl	 ELSE 0
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[220] = _div( unkR[219] , unkR[215],"Injector_F.PR_sl") ;
}
else 
{
unkR[220] = 0. ;
}
//[E-6]  GasGen_1.fluid_F[LOX] = GasGen_1.f_F.fluid[LOX] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[86] = _div( unkR[23] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-7]  GasGen_1.fluid_O[NTO] = GasGen_1.f_O.fluid[NTO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[116] = _div( unkR[57] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-8]  GasGen_1.fluid_F[NTO] = GasGen_1.f_F.fluid[NTO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[87] = _div( unkR[24] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-9]  GasGen_1.fluid_O[H2O2] = GasGen_1.f_O.fluid[H2O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[117] = _div( unkR[58] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-10]  GasGen_1.fluid_F[H2O2] = GasGen_1.f_F.fluid[H2O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[88] = _div( unkR[25] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-11]  GasGen_1.fluid_O[HNO3] = GasGen_1.f_O.fluid[HNO3] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[118] = _div( unkR[59] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-12]  GasGen_1.fluid_F[HNO3] = GasGen_1.f_F.fluid[HNO3] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[89] = _div( unkR[26] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-13]  GasGen_1.fluid_O[LF2] = GasGen_1.f_O.fluid[LF2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[119] = _div( unkR[60] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-14]  GasGen_1.fluid_F[LF2] = GasGen_1.f_F.fluid[LF2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[90] = _div( unkR[27] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-15]  GasGen_1.fluid_O[RP_1] = GasGen_1.f_O.fluid[RP_1] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[120] = _div( unkR[61] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-16]  GasGen_1.fluid_F[RP_1] = GasGen_1.f_F.fluid[RP_1] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[91] = _div( unkR[28] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-17]  GasGen_1.fluid_O[LCH4] = GasGen_1.f_O.fluid[LCH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[121] = _div( unkR[62] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-18]  GasGen_1.fluid_F[LCH4] = GasGen_1.f_F.fluid[LCH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[92] = _div( unkR[29] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-19]  GasGen_1.fluid_O[LH2] = GasGen_1.f_O.fluid[LH2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[122] = _div( unkR[63] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-20]  GasGen_1.fluid_F[LH2] = GasGen_1.f_F.fluid[LH2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[93] = _div( unkR[30] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-21]  GasGen_1.fluid_O[N2H4] = GasGen_1.f_O.fluid[N2H4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[123] = _div( unkR[64] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-22]  GasGen_1.fluid_F[N2H4] = GasGen_1.f_F.fluid[N2H4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[94] = _div( unkR[31] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-23]  GasGen_1.fluid_O[UDMH] = GasGen_1.f_O.fluid[UDMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[124] = _div( unkR[65] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-24]  GasGen_1.fluid_F[UDMH] = GasGen_1.f_F.fluid[UDMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[95] = _div( unkR[32] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-25]  GasGen_1.fluid_O[MMH] = GasGen_1.f_O.fluid[MMH] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[125] = _div( unkR[66] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-26]  GasGen_1.fluid_F[MMH] = GasGen_1.f_F.fluid[MMH] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[96] = _div( unkR[33] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-27]  GasGen_1.fluid_O[JP_10] = GasGen_1.f_O.fluid[JP_10] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[126] = _div( unkR[67] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-28]  GasGen_1.fluid_F[JP_10] = GasGen_1.f_F.fluid[JP_10] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[97] = _div( unkR[34] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-29]  GasGen_1.fluid_O[Kerox] = GasGen_1.f_O.fluid[Kerox] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[127] = _div( unkR[68] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-30]  GasGen_1.fluid_F[Kerox] = GasGen_1.f_F.fluid[Kerox] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[98] = _div( unkR[35] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-31]  GasGen_1.fluid_O[Oil] = GasGen_1.f_O.fluid[Oil] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[128] = _div( unkR[69] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-32]  GasGen_1.fluid_F[Oil] = GasGen_1.f_F.fluid[Oil] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[99] = _div( unkR[36] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-33]  GasGen_1.fluid_O[H2O] = GasGen_1.f_O.fluid[H2O] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[129] = _div( unkR[70] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-34]  GasGen_1.fluid_F[H2O] = GasGen_1.f_F.fluid[H2O] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[100] = _div( unkR[37] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-35]  GasGen_1.fluid_O[IPA] = GasGen_1.f_O.fluid[IPA] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[130] = _div( unkR[71] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-36]  GasGen_1.fluid_F[IPA] = GasGen_1.f_F.fluid[IPA] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[101] = _div( unkR[38] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-37]  GasGen_1.fluid_O[Air] = GasGen_1.f_O.fluid[Air] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[131] = _div( unkR[72] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-38]  GasGen_1.fluid_F[Air] = GasGen_1.f_F.fluid[Air] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[102] = _div( unkR[39] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-39]  GasGen_1.fluid_O[Ar] = GasGen_1.f_O.fluid[Ar] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[132] = _div( unkR[73] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-40]  GasGen_1.fluid_F[Ar] = GasGen_1.f_F.fluid[Ar] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[103] = _div( unkR[40] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-41]  GasGen_1.fluid_O[CH4] = GasGen_1.f_O.fluid[CH4] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[133] = _div( unkR[74] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-42]  GasGen_1.fluid_F[CH4] = GasGen_1.f_F.fluid[CH4] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[104] = _div( unkR[41] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-43]  GasGen_1.fluid_O[CO] = GasGen_1.f_O.fluid[CO] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[134] = _div( unkR[75] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-44]  GasGen_1.fluid_F[CO] = GasGen_1.f_F.fluid[CO] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[105] = _div( unkR[42] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-45]  GasGen_1.fluid_O[CO2] = GasGen_1.f_O.fluid[CO2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[135] = _div( unkR[76] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-46]  GasGen_1.fluid_F[CO2] = GasGen_1.f_F.fluid[CO2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[106] = _div( unkR[43] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-47]  GasGen_1.fluid_O[H2] = GasGen_1.f_O.fluid[H2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[136] = _div( unkR[77] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-48]  GasGen_1.fluid_F[H2] = GasGen_1.f_F.fluid[H2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[107] = _div( unkR[44] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-49]  GasGen_1.fluid_O[He] = GasGen_1.f_O.fluid[He] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[137] = _div( unkR[78] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-50]  GasGen_1.fluid_F[He] = GasGen_1.f_F.fluid[He] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[108] = _div( unkR[45] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-51]  GasGen_1.fluid_O[N2] = GasGen_1.f_O.fluid[N2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[138] = _div( unkR[79] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-52]  GasGen_1.fluid_F[N2] = GasGen_1.f_F.fluid[N2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[109] = _div( unkR[46] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-53]  GasGen_1.fluid_O[O2] = GasGen_1.f_O.fluid[O2] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[139] = _div( unkR[80] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-54]  GasGen_1.fluid_F[O2] = GasGen_1.f_F.fluid[O2] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[110] = _div( unkR[47] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-55]  GasGen_1.fluid_O[MMH_vapour] = GasGen_1.f_O.fluid[MMH_vapour] / (1 - GasGen_1.f_O.fluid[Comb_prod])
unkR[140] = _div( unkR[81] , (1. - unkR[82]),"1 - GasGen_1.f_O.fluid[Comb_prod]") ;
//[E-56]  GasGen_1.fluid_F[MMH_vapour] = GasGen_1.f_F.fluid[MMH_vapour] / (1 - GasGen_1.f_F.fluid[Comb_prod])
unkR[111] = _div( unkR[48] , (1. - unkR[49]),"1 - GasGen_1.f_F.fluid[Comb_prod]") ;
//[E-57]  GasGen_1.fluid_O[Comb_prod] = 0
unkR[141] = 0. ;
//[E-58]  GasGen_1.fluid_F[Comb_prod] = 0
unkR[112] = 0. ;
//[E-59]  GasGen_1.fluid_P[Comb_prod_M] =  IF[28] (GasGen_1.Combustion) GasGen_1.M_P	 ELSE 0
if( unkI[0] ) 
{
unkR[171] = unkR[0] ;
}
else 
{
unkR[171] = 0. ;
}
//[E-60]  GasGen_1.fluid_P[Comb_prod_cp] =  IF[29] (GasGen_1.Combustion) GasGen_1.cp_P	 ELSE 0
if( unkI[0] ) 
{
unkR[172] = unkR[18] ;
}
else 
{
unkR[172] = 0. ;
}
//[E-61]  Injector_O.PR_sl =  IF[38] (LPRES.State(GasGen_1.f_O.fluid) == Gas) ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2) ** (LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))	 ELSE 0
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[227] = _pow( ((LPRES__gamma(&unkR[56]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[56]) , (LPRES__gamma(&unkR[56]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[227] = 0. ;
}
//[E-62]  Injector_O.p_out_ch =  IF[39] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[232] = _div( unkR[231] , unkR[227],"Injector_O.PR_sl") ;
}
else 
{
unkR[232] = 0. ;
}

if( restartB || m_solveInternalBox[1] ) 
    fhyb1(dyn,ldr,TOLERANCE,1,50);
else fbox1(_time,dyn,ldr,res) ;

//[E-104]  GasGen_1.W_IO = GasGen_1.f_O.W - GasGen_1.W_O
unkR[15] = unkR[55] - unkR[16] ;
//[E-105]  GasGen_1.W_IF = GasGen_1.f_F.W - GasGen_1.W_F
unkR[14] = unkR[22] - unkR[11] ;
//[E-106]  NozzleConDiv_1.g_in.fluid[Comb_prod_M] = GasGen_1.fluid_P[Comb_prod_M]
unkR[200] = unkR[171] ;
//[E-107]  NozzleConDiv_1.g_in.fluid[Comb_prod_cp] = GasGen_1.fluid_P[Comb_prod_cp]
unkR[201] = unkR[172] ;

if( restartB || m_solveInternalBox[2] ) 
    fhyb2(dyn,ldr,TOLERANCE,1,50);
else fbox2(_time,dyn,ldr,res) ;

//[E-136]  GasGen_1.rho_trans' = (GasGen_1.f_O.W + GasGen_1.f_F.W - NozzleConDiv_1.g_in.W) / (GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1))
ldr[0] = _div( (unkR[55] + unkR[22] - dyn[3]) , (_div( unkR[210] , (unkR[209] * unkR[203]),"GasGen_1.rho_ch * GasGen_1.k_1")),"GasGen_1.temp_ch / (GasGen_1.rho_ch * GasGen_1.k_1)") ;
//[E-137]  GasGen_1.Q_comb_effective =  ZONE[1] (GasGen_1.Combustion) GasGen_1.Q_comb	  OTHERS 0
 if(m_branchZone[0]==0)
	unkR[6] = unkR[5] ;
else unkR[6] = 0. ;
//[E-138]  GasGen_1.fluid_O[Comb_prod_M] = 0
unkR[142] = 0. ;
//[E-139]  GasGen_1.fluid_O[Comb_prod_cp] = 0
unkR[143] = 0. ;
//[E-140]  GasGen_1.fluid_F[Comb_prod_M] = 0
unkR[113] = 0. ;
//[E-141]  GasGen_1.fluid_F[Comb_prod_cp] = 0
unkR[114] = 0. ;
//[E-142]  GasGen_1.cp_R = (GasGen_1.W_O * LPRES.cp(GasGen_1.fluid_O) + GasGen_1.W_F * LPRES.cp(GasGen_1.fluid_F)) / (GasGen_1.W_O + GasGen_1.W_F)
unkR[19] = _div( (unkR[16] * LPRES__cp(&unkR[115]) + unkR[11] * LPRES__cp(&unkR[86])) , (unkR[16] + unkR[11]),"GasGen_1.W_O + GasGen_1.W_F") ;
//[E-143]  GasGen_1.f_O.T =  IF[42] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit.Tt / (1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2)	 ELSE LO2_circuit.Tt
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[54] = _div( unkR[230] , (1. + (LPRES__gamma(&unkR[56]) - 1.)/2. * _pow( unkR[225] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[54] = unkR[230] ;
}
//[E-144]  GasGen_1.f_F.T =  IF[34] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[21] = _div( unkR[218] , (1. + (LPRES__gamma(&unkR[23]) - 1.)/2. * _pow( unkR[214] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[21] = unkR[218] ;
}
//[E-145]  GasGen_1.T_in = (LPRES.cp(GasGen_1.fluid_O) * GasGen_1.f_O.T + GasGen_1.phi / GasGen_1.OF_st * LPRES.cp(GasGen_1.fluid_F) * GasGen_1.f_F.T) / ((1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R)
unkR[10] = _div( (LPRES__cp(&unkR[115]) * unkR[54] + _div( unkR[208] , unkR[4],"GasGen_1.OF_st") * LPRES__cp(&unkR[86]) * unkR[21]) , ((1. + _div( unkR[208] , unkR[4],"GasGen_1.OF_st")) * unkR[19]),"(1 + GasGen_1.phi / GasGen_1.OF_st) * GasGen_1.cp_R") ;
//[E-146]  GasGen_1.T_c = (GasGen_1.eta_d * GasGen_1.Q_comb_effective / ((1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)) + GasGen_1.cp_R * (GasGen_1.T_in - 298.15)) / LPRES.cp(GasGen_1.fluid_P) + 298.15
unkR[7] = _div( (_div( unkR[20] * unkR[6] , (_div( (1. + unkR[3]) , MATH__min(unkR[3], unkR[4]),"MATH.min(GasGen_1.OF, GasGen_1.OF_st)")),"(1 + GasGen_1.OF) / MATH.min(GasGen_1.OF, GasGen_1.OF_st)") + unkR[19] * (unkR[10] - 298.15)) , LPRES__cp(&unkR[144]),"LPRES.cp(GasGen_1.fluid_P)") + 298.15 ;
//[E-147]  GasGen_1.g.Tt' = (((GasGen_1.W_O + GasGen_1.W_F) / NozzleConDiv_1.g_in.W * LPRES.cp(GasGen_1.fluid_P) * (GasGen_1.g.Tt - GasGen_1.T_c) + GasGen_1.W_IO / NozzleConDiv_1.g_in.W * GasGen_1.f_O.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - GasGen_1.f_O.T) + GasGen_1.W_IF / NozzleConDiv_1.g_in.W * GasGen_1.f_F.fluid[Comb_prod_cp] * (GasGen_1.g.Tt - GasGen_1.f_F.T)) / -(GasGen_1.temp_ch / (NozzleConDiv_1.g_in.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch)) - GasGen_1.g.Tt * LPRES.cv(GasGen_1.fluid_P) * GasGen_1.rho_trans') / (GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P))
ldr[1] = _div( (_div( (_div( (unkR[16] + unkR[11]) , dyn[3],"NozzleConDiv_1.g_in.W") * LPRES__cp(&unkR[144]) * (dyn[1] - unkR[7]) + _div( unkR[15] , dyn[3],"NozzleConDiv_1.g_in.W") * unkR[84] * (dyn[1] - unkR[54]) + _div( unkR[14] , dyn[3],"NozzleConDiv_1.g_in.W") * unkR[51] * (dyn[1] - unkR[21])) , -(_div( unkR[210] , (dyn[3] * unkR[209] * unkR[204] * unkR[9]),"NozzleConDiv_1.g_in.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch")),"-(GasGen_1.temp_ch / (NozzleConDiv_1.g_in.W * GasGen_1.rho_ch * GasGen_1.k_2 * GasGen_1.T_ch))") - dyn[1] * LPRES__cv(&unkR[144]) * ldr[0]) , (dyn[0] * LPRES__cv(&unkR[144])),"GasGen_1.rho_trans * LPRES.cv(GasGen_1.fluid_P)") ;
//[E-148]  GasGen_1.c_star = sqrt(LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt) / LPRES.FGAMMA(NozzleConDiv_1.g_in.fluid)
unkR[17] = _div( _sqrt(LPRES__R(&unkR[173]) * dyn[1],"LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt") , LPRES__FGAMMA(&unkR[173]),"LPRES.FGAMMA(NozzleConDiv_1.g_in.fluid)") ;
//[E-149]  GasGen_1.i.Data[1] = GasGen_1.c_star
unkR[202] = unkR[17] ;
//[E-150]  Injector_F.A_sl =  IF[32] (LPRES.State(GasGen_1.f_F.fluid) == Gas) sqrt(LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid)) * GasGen_1.f_F.W / (LPRES.FGAMMA(GasGen_1.f_F.fluid) * LH2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[212] = _div( _sqrt(unkR[218] * LPRES__R(&unkR[23]),"LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[22] , (LPRES__FGAMMA(&unkR[23]) * unkR[219]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[212] = 0. ;
}
//[E-151]  Injector_F.v_ideal =  IF[36] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T)	 ELSE GasGen_1.f_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[221] = unkR[214] * _sqrt(LPRES__gamma(&unkR[23]) * LPRES__R(&unkR[23]) * unkR[21],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T") ;
}
else 
{
unkR[221] = _div( unkR[22] , (LPRES__rho(&unkR[23]) * unkR[211] * unkR[213]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-152]  Injector_F.Re =  IF[37] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[216] = 0. ;
}
else 
{
unkR[216] = _div( LPRES__rho(&unkR[23]) * unkR[221] * unkR[213] * _sqrt(4. * unkR[211]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[23]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-153]  Injector_O.A_sl =  IF[40] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)) * GasGen_1.f_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[223] = _div( _sqrt(unkR[230] * LPRES__R(&unkR[56]),"LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[55] , (LPRES__FGAMMA(&unkR[56]) * unkR[231]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[223] = 0. ;
}
//[E-154]  Injector_O.v_ideal =  IF[44] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T)	 ELSE GasGen_1.f_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[233] = unkR[225] * _sqrt(LPRES__gamma(&unkR[56]) * LPRES__R(&unkR[56]) * unkR[54],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T") ;
}
else 
{
unkR[233] = _div( unkR[55] , (LPRES__rho(&unkR[56]) * unkR[222] * unkR[224]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-155]  Injector_O.Re =  IF[45] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[228] = 0. ;
}
else 
{
unkR[228] = _div( LPRES__rho(&unkR[56]) * unkR[233] * unkR[224] * _sqrt(4. * unkR[222]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[56]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
}
//[E-156]  ThrustMonitor_1.g.A_out = NozzleConDiv_1.AR * NozzleConDiv_1.A_th
unkR[238] = unkR[237] * unkR[239] ;

if( restartB || m_solveInternalBox[3] ) 
    fhyb3(dyn,ldr,TOLERANCE,1,50);
else fbox3(_time,dyn,ldr,res) ;

//[E-158]  ThrustMonitor_1.p_amb = LPRES.ISA_Pressure(LPRES.Altitude)
unkR[244] = LPRES__ISA_Pressure(unkR[236]) ;

if( restartB || m_solveInternalBox[4] ) 
    fhyb4(dyn,ldr,TOLERANCE,1,50);
else fbox4(_time,dyn,ldr,res) ;

//[E-160]  ThrustMonitor_1.T_out = GasGen_1.g.Tt / (1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)
unkR[241] = _div( dyn[1] , (1. + (LPRES__gamma(&unkR[173]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )),"1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2") ;
//[E-161]  ThrustMonitor_1.p_out = GasGen_1.f_O.p_c / (1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid)))
unkR[245] = _div( unkR[53] , _pow( (1. + (LPRES__gamma(&unkR[173]) - 1.)/2. * _pow( dyn[5] , 2.,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( 1. , (_div( (LPRES__gamma(&unkR[173]) - 1.) , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(1 / ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid)))" ),"(1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (1 / ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid)))") ;
//[E-162]  ThrustMonitor_1.v_out = ThrustMonitor_1.M_out * sqrt(LPRES.gamma(NozzleConDiv_1.g_in.fluid) * LPRES.R(NozzleConDiv_1.g_in.fluid) * ThrustMonitor_1.T_out)
unkR[246] = dyn[5] * _sqrt(LPRES__gamma(&unkR[173]) * LPRES__R(&unkR[173]) * unkR[241],"LPRES.gamma(NozzleConDiv_1.g_in.fluid) * LPRES.R(NozzleConDiv_1.g_in.fluid) * ThrustMonitor_1.T_out") ;
//[E-163]  ThrustMonitor_1.Thrust = NozzleConDiv_1.g_in.W * ThrustMonitor_1.v_out + ThrustMonitor_1.g.A_out * (ThrustMonitor_1.p_out - ThrustMonitor_1.p_amb)
unkR[242] = dyn[3] * unkR[246] + unkR[238] * (unkR[245] - unkR[244]) ;
//[E-164]  ThrustMonitor_1.i.Data[1] = ThrustMonitor_1.Thrust
unkR[243] = unkR[242] ;
res[0]= evalNormResidueInternal(0,der[0],ldr[0]);
res[1]= evalNormResidueInternal(1,der[1],ldr[1]);

if( restartB )
     dcopy(2,der,ldr);

//save last residues
memcpy(this->res,res,6*sizeof(double));
printDbgInfoForModel(-1,false);
}

/* Generation ASSERT checking*/
void DRLPRUEBAS__GG_comp_Transient::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[173])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",828,"NozzleConDiv_1.","Gas == LPRES.State(NozzleConDiv_1.g_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED CONVERGENT-DIVERGENT NOZZLE!");
if(!(2 == LPRES__State(&unkR[173])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",911,"ThrustMonitor_1.","Gas == LPRES.State(NozzleConDiv_1.g_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",912,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[245] , unkR[244],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",913,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__GG_comp_Transient::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[115] * unkR[86] + unkR[116] * unkR[87] + unkR[117] * unkR[88] + unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[115] * unkR[86] + unkR[116] * unkR[87] + unkR[117] * unkR[88] + unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //GasGen_1.Combustion
    ev[3]= LPRES__State(&unkR[23]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[4]= dyn[2] - unkR[215]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[23]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[6]= dyn[2] - unkR[215]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[56]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[8]= unkR[226] - unkR[227]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[56]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[10]= unkR[226] - unkR[227]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__GG_comp_Transient::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__GG_comp_Transient::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__GG_comp_Transient::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // GasGen_1.Q_comb_effective =  ZONE (GasGen_1.Combustion) GasGen_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__GG_comp_Transient::initEvents(int& nEvents,int& nWhen,int& nZones,         
	int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex)
{
	nEvents= 11 ;
	nConstraints= 29;
	nWhen= 2;
	nZones= 3;

/* WHEN info for debugging purposes */
	static const char* whenTxtTable[2]= { "(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0",
		"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"};
	whenTxt= whenTxtTable;

/* ZONE info for debugging purposes */
	static const char* zoneTxtTable[] = { "GasGen_1.Combustion","OTHERS",
	"LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl","LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl","OTHERS",
	"LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl","LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl","OTHERS"};
	static int zoneTxtIndexTable[] = { 0,2,5 };
	zoneTxt= zoneTxtTable;
	zoneTxtIndex= zoneTxtIndexTable;

	static t_initEvent evs[11]= { { WHEN,NOT_EQ_OP,0,0,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0"},{ WHEN,EQ_OP,0,1,"(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0"},{ ZONE,EQ_OP,0,0,"GasGen_1.Combustion"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_F.PR < Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_F.fluid) == Gas"}
,{ ZONE,GT_EQ_OP,0,0,"Injector_F.PR >= Injector_F.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,LT_OP,0,0,"Injector_O.PR < Injector_O.PR_sl"},{ ZONE,EQ_OP,0,0,"LPRES.State(GasGen_1.f_O.fluid) == Gas"},{ ZONE,GT_EQ_OP,0,0,"Injector_O.PR >= Injector_O.PR_sl"}
};
	return evs;
};

/* Initialisation of delays */
void DRLPRUEBAS__GG_comp_Transient::initDelays()
{
}


bool DRLPRUEBAS__GG_comp_Transient::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__GG_comp_Transient = 43428;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__GG_comp_Transient = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__GG_comp_Transient[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__GG_comp_Transient;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__GG_comp_Transient;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__GG_comp_Transient;
return true;
}



bool DRLPRUEBAS__GG_comp_Transient::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__GG_comp_Transient = 232;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__GG_comp_Transient = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__GG_comp_Transient[] = 
{
"BgAAABkAAAADAAAABAAAAAQAAAADAAAABAAAAAUAAAAFAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__GG_comp_Transient;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__GG_comp_Transient;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__GG_comp_Transient;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__GG_comp_Transient(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__GG_comp_Transient(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__GG_comp_Transient(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__GG_comp_Transient(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__GG_comp_Transient(name,dirInstall);
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
	sprintf(componentName,"%s","GG_comp");
	sprintf(partitionName,"%s","Transient");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+g+g_comp.+transient");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

