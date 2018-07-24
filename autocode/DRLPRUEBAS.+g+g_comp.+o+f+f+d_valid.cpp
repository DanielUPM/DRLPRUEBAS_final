//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_OFFD_valid_CPP
#define DRLPRUEBAS__GG_comp_OFFD_valid_CPP

#include "DRLPRUEBAS.+g+g_comp.+o+f+f+d_valid.h"

DRLPRUEBAS__GG_comp_OFFD_valid* DRLPRUEBAS__GG_comp_OFFD_valid::s_current= NULL;

DRLPRUEBAS__GG_comp_OFFD_valid::DRLPRUEBAS__GG_comp_OFFD_valid(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "GG_comp";
m_infoPartitionName = "OFFD_valid";
m_infoModelName = "DRLPRUEBAS__GG_comp_OFFD_valid";
m_infoModelFileName = "DRLPRUEBAS.+g+g_comp.+o+f+f+d_valid";
m_infoModelFileNameExtra = "+g+g_comp.+o+f+f+d_valid";
m_perfFlag = false;
m_infoComponentDate = "22/06/2018 13:22:36.717000";
m_infoPartitionDate = "22/06/2018 13:27:41.234000";
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
void DRLPRUEBAS__GG_comp_OFFD_valid::initInternalModels()
{
}

void DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__GG_comp_OFFD_valid::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__State(double fluid[])
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


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__M(double fluid[])
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


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__GG_comp_OFFD_valid::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__GG_comp_OFFD_valid::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__GG_comp_OFFD_valid::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__GG_comp_OFFD_valid::fbox1(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__GG_comp_OFFD_valid::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_OFFD_valid& m= *DRLPRUEBAS__GG_comp_OFFD_valid::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_OFFD_valid::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__GG_comp_OFFD_valid::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_OFFD_valid& m= *DRLPRUEBAS__GG_comp_OFFD_valid::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_OFFD_valid::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-157]  NozzleConDiv_1.AR = LPRES.FGAMMA(NozzleConDiv_1.g_in.fluid) / ((NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** (1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * sqrt(2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[237],_div( LPRES__FGAMMA(&unkR[173]) , (_pow( (_div( dyn[4] , unkR[53],"GasGen_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c)**(1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[173]) * (1. - _pow( (_div( dyn[4] , unkR[53],"GasGen_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[173]) - 1.) , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c)**((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))" )) , (LPRES__gamma(&unkR[173]) - 1.),"LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1"),"2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** (1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * sqrt(2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_OFFD_valid::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_OFFD_valid& m= *DRLPRUEBAS__GG_comp_OFFD_valid::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_OFFD_valid::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-159]  NozzleConDiv_1.g_in.W * sqrt(LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt) / ThrustMonitor_1.g.A_out / GasGen_1.f_O.p_c = sqrt(LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(NozzleConDiv_1.g_in.fluid) + 1) / 2 / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( dyn[3] * _sqrt(LPRES__R(&unkR[173]) * dyn[1],"LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt") , unkR[238],"ThrustMonitor_1.g.A_out") , unkR[53],"GasGen_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[173]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[173]) + 1)/2 , (LPRES__gamma(&unkR[173]) - 1),"LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1")),"(1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(NozzleConDiv_1.g_in.fluid) + 1) / 2 / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_OFFD_valid::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_OFFD_valid& m= *DRLPRUEBAS__GG_comp_OFFD_valid::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__GG_comp_OFFD_valid::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_OFFD_valid::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__GG_comp_OFFD_valid::fres( double *_time, double dyn[], double der[], double res[] )
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
void DRLPRUEBAS__GG_comp_OFFD_valid::checkAsserts(double *_time)
{
if ( warnProgramme() == false)
	return;
if(!(2 == LPRES__State(&unkR[173])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",809,"NozzleConDiv_1.","Gas == LPRES.State(NozzleConDiv_1.g_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE CHOKED CONVERGENT-DIVERGENT NOZZLE!");
if(!(2 == LPRES__State(&unkR[173])))
		issueErrorAssert(215,99,24,98,"LPRES_CompBasic.el",892,"ThrustMonitor_1.","Gas == LPRES.State(NozzleConDiv_1.g_in.fluid)","%s","ONLY GASES CAN GO THROUGH THE THRUST MONITOR!");
if(!(dyn[5] >= 1))
		issueErrorAssert(216,9,24,98,"LPRES_CompBasic.el",893,"ThrustMonitor_1.","ThrustMonitor_1.M_out >= 1","%s","THE CONVERGENT-DIVERGENT NOZZLE MUST BE CHOKED!");
if(!((_div( unkR[245] , unkR[244],"ThrustMonitor_1.p_amb")) > (_pow( (1.88 * dyn[5] - 1) , -0.64,"(1.88 * ThrustMonitor_1.M_out - 1)**(-0.64)" ))))
		issueErrorAssert(213,7,24,98,"LPRES_CompBasic.el",894,"ThrustMonitor_1.","(ThrustMonitor_1.p_out / ThrustMonitor_1.p_amb) > ((1.88 * ThrustMonitor_1.M_out - 1) ** -0.64)","%s","ACCORDING TO SCHMUCKER CRITERION, THE NOZZLE HAS A REGION OF DETACHMENT!");
}

/* Evaluation of constraints*/
void DRLPRUEBAS__GG_comp_OFFD_valid::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
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
void DRLPRUEBAS__GG_comp_OFFD_valid::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__GG_comp_OFFD_valid::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__GG_comp_OFFD_valid::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // GasGen_1.Q_comb_effective =  ZONE (GasGen_1.Combustion) GasGen_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__GG_comp_OFFD_valid::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__GG_comp_OFFD_valid::initDelays()
{
}


bool DRLPRUEBAS__GG_comp_OFFD_valid::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__GG_comp_OFFD_valid = 43428;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__GG_comp_OFFD_valid = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__GG_comp_OFFD_valid[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__GG_comp_OFFD_valid;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__GG_comp_OFFD_valid;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__GG_comp_OFFD_valid;
return true;
}



bool DRLPRUEBAS__GG_comp_OFFD_valid::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__GG_comp_OFFD_valid = 232;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__GG_comp_OFFD_valid = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__GG_comp_OFFD_valid[] = 
{
"BgAAABkAAAADAAAABAAAAAQAAAADAAAABAAAAAUAAAAFAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__GG_comp_OFFD_valid;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__GG_comp_OFFD_valid;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__GG_comp_OFFD_valid;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__GG_comp_OFFD_valid(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__GG_comp_OFFD_valid(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__GG_comp_OFFD_valid(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__GG_comp_OFFD_valid(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__GG_comp_OFFD_valid(name,dirInstall);
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
	sprintf(partitionName,"%s","OFFD_valid");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+g+g_comp.+o+f+f+d_valid");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

