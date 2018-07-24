//==================================================================
// Code generated automatically
// Description: Partition class body 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_escalon_CPP
#define DRLPRUEBAS__GG_comp_escalon_CPP

#include "DRLPRUEBAS.+g+g_comp.escalon.h"

DRLPRUEBAS__GG_comp_escalon* DRLPRUEBAS__GG_comp_escalon::s_current= NULL;

DRLPRUEBAS__GG_comp_escalon::DRLPRUEBAS__GG_comp_escalon(const char *mgr,const char *dirInstall,bool dmode):INTEG_simula(mgr,dirInstall,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoComponentName = "GG_comp";
m_infoPartitionName = "escalon";
m_infoModelName = "DRLPRUEBAS__GG_comp_escalon";
m_infoModelFileName = "DRLPRUEBAS.+g+g_comp.escalon";
m_infoModelFileNameExtra = "+g+g_comp.escalon";
m_perfFlag = false;
m_infoComponentDate = "28/06/2018 11:09:21.192000";
m_infoPartitionDate = "29/06/2018 10:09:21.348000";
m_programVersion= "PROOSIS V3.8.1";
m_libsVersion= "DRLPRUEBAS V0.0 LPRES V1.3.5 MATH V3.1.2 ";

m_solveInternalBox= new int[5]; 
int nbx;
for (nbx=0; nbx < 5 ; nbx++)
	m_solveInternalBox[nbx]= 0;

m_boundaryBranch= new int[5];
int ib;
for (ib=0; ib < 5 ; ib++)
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
		0, 1, 0.032, 0.00178349971, 0, 0.5, 0, 0, 0, 2.70069069, 0, 0, 0.000580606872, 0, 0.5, 0, 
		10, 0, 0, 16.3526821, 0, 0, 151.106354, 2.70069069, 3494748.63, 99.1952397, 16.3526821, 4597104.18, 0, 56.88798558, 1, 0.0134109877, 
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
void DRLPRUEBAS__GG_comp_escalon::initInternalModels()
{
}

void DRLPRUEBAS__GG_comp_escalon::LPRES__Init_fluid(const int & fluid_name,double fluid[])
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


double DRLPRUEBAS__GG_comp_escalon::MATH__min(double x,double y)
{

	if( x < y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__GG_comp_escalon::LPRES__cp(double fluid[])
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


int DRLPRUEBAS__GG_comp_escalon::LPRES__Know_fluid(double fluid[])
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


int DRLPRUEBAS__GG_comp_escalon::LPRES__State(double fluid[])
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


double DRLPRUEBAS__GG_comp_escalon::LPRES__M(double fluid[])
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


double DRLPRUEBAS__GG_comp_escalon::LPRES__R(double fluid[])
{

	if(!(2 == LPRES__State(fluid)))
		issueErrorAssert(215,99,24,98,"LPRES_Funcs.el",149,".","Gas == LPRES.State(fluid)","%s","ONLY GASES CAN BE USED IN THIS FUNCTION!");

	return _div( 8314 , LPRES__M(fluid),"LPRES.M(fluid)") ;
}


double DRLPRUEBAS__GG_comp_escalon::LPRES__cv(double fluid[])
{

	return LPRES__cp(fluid) - LPRES__R(fluid) ;
}


double DRLPRUEBAS__GG_comp_escalon::MATH__max(double x,double y)
{

	if( x > y ) {
	return x ;
	}
	return y ;
}


double DRLPRUEBAS__GG_comp_escalon::LPRES__gamma(double fluid[])
{

	return _div( LPRES__cp(fluid) , LPRES__cv(fluid),"LPRES.cv(fluid)") ;
}


double DRLPRUEBAS__GG_comp_escalon::LPRES__FGAMMA(double fluid[])
{

	return _sqrt(LPRES__gamma(fluid),"LPRES.gamma(fluid)") * _pow( (_div( 2 , (LPRES__gamma(fluid) + 1),"LPRES.gamma(fluid) + 1")) , (_div( (LPRES__gamma(fluid) + 1) , (2 * (LPRES__gamma(fluid) - 1)),"2 * (LPRES.gamma(fluid) - 1)")),"(2 / (LPRES.gamma(fluid) + 1))**((LPRES.gamma(fluid) + 1) / (2 * (LPRES.gamma(fluid) - 1)))" ) ;
}


double DRLPRUEBAS__GG_comp_escalon::LPRES__rho(double fluid[])
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


double DRLPRUEBAS__GG_comp_escalon::LPRES__visc(double fluid[])
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


double DRLPRUEBAS__GG_comp_escalon::LPRES__Geopotential_Altitude(const double & z)
{

	return _div( z * 6371000 , (z + 6371000),"z + 6371000") ;
}


double DRLPRUEBAS__GG_comp_escalon::LPRES__ISA_Pressure(const double & z)
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

void DRLPRUEBAS__GG_comp_escalon::copyBack( double dyn[], double ldr[] )
{
}

/* Run the initialisation of the INIT blocks of components */

void DRLPRUEBAS__GG_comp_escalon::initBlocks( double dyn[], double ldr[], double *_time )
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
void DRLPRUEBAS__GG_comp_escalon::fbox1(double *_time,double dyn[],double ldr[],double res[])
{
//[E-63]  GasGen_1.f_O.p_c = LH2_circuit.pt / Injector_F.PR
unkR[53] = _div( unkR[232] , dyn[2],"Injector_F.PR") ;
//[E-64]  GasGen_1.f_F.p =  IF[33] (LPRES.State(GasGen_1.f_F.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_F.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[52] = MATH__max(unkR[53], unkR[218]) ;
}
else 
{
unkR[52] = unkR[53] ;
}
//[E-65]  Injector_O.PR = LO2_circuit.pt / GasGen_1.f_O.p_c
unkR[224] = _div( unkR[235] , unkR[53],"GasGen_1.f_O.p_c") ;
//[E-66]  Injector_O.M_out =  ZONE[3] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE[3] (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1	  OTHERS 0
 if(m_branchZone[2]==0)
	unkR[223] = _sqrt(_div( 2. * (_pow( unkR[224] , (_div( (LPRES__gamma(&unkR[56]) - 1.) , LPRES__gamma(&unkR[56]),"LPRES.gamma(GasGen_1.f_O.fluid)")),"(Injector_O.PR)**((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid))" ) - 1.) , (LPRES__gamma(&unkR[56]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1"),"2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)") ;
else  if(m_branchZone[2]==1)
	unkR[223] = 1. ;
else unkR[223] = 0. ;
//[E-67]  GasGen_1.f_O.p =  IF[41] (LPRES.State(GasGen_1.f_O.fluid) == Gas) MATH.max(GasGen_1.f_O.p_c, Injector_O.p_out_ch)	 ELSE GasGen_1.f_O.p_c
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[85] = MATH__max(unkR[53], unkR[228]) ;
}
else 
{
unkR[85] = unkR[53] ;
}
//[E-68]  GasGen_1.f_O.W =  IF[43] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.A * LPRES.FGAMMA(GasGen_1.f_O.fluid) * LO2_circuit.pt / sqrt(LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)) / (((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out)	 ELSE Injector_O.A * Injector_O.C_D * sqrt(2 * LPRES.rho(GasGen_1.f_O.fluid) * (LO2_circuit.pt - GasGen_1.f_O.p))
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[55] = _div( _div( unkR[220] * LPRES__FGAMMA(&unkR[56]) * unkR[235] , _sqrt(unkR[233] * LPRES__R(&unkR[56]),"LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)"),"sqrt(LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[56]) - 1.) * _pow( unkR[223] , 2.,"(Injector_O.M_out)**(2)" )) , (LPRES__gamma(&unkR[56]) + 1.),"LPRES.gamma(GasGen_1.f_O.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[56]) + 1.) , (2. * (LPRES__gamma(&unkR[56]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1))**((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1)))" ) , unkR[223],"Injector_O.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) * Injector_O.M_out ** 2) / (LPRES.gamma(GasGen_1.f_O.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_O.fluid) - 1))) / Injector_O.M_out") ;
}
else 
{
unkR[55] = unkR[220] * unkR[222] * _sqrt(2. * LPRES__rho(&unkR[56]) * (unkR[235] - unkR[85]),"2 * LPRES.rho(GasGen_1.f_O.fluid) * (LO2_circuit.pt - GasGen_1.f_O.p)") ;
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
unkR[22] = _div( _div( unkR[211] * LPRES__FGAMMA(&unkR[23]) * unkR[232] , _sqrt(unkR[230] * LPRES__R(&unkR[23]),"LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid)"),"sqrt(LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid))") , (_div( _pow( (_div( (2. + (LPRES__gamma(&unkR[23]) - 1.) * _pow( unkR[214] , 2.,"(Injector_F.M_out)**(2)" )) , (LPRES__gamma(&unkR[23]) + 1.),"LPRES.gamma(GasGen_1.f_F.fluid) + 1")) , (_div( (LPRES__gamma(&unkR[23]) + 1.) , (2. * (LPRES__gamma(&unkR[23]) - 1.)),"2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1))**((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1)))" ) , unkR[214],"Injector_F.M_out")),"((2 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) * Injector_F.M_out ** 2) / (LPRES.gamma(GasGen_1.f_F.fluid) + 1)) ** ((LPRES.gamma(GasGen_1.f_F.fluid) + 1) / (2 * (LPRES.gamma(GasGen_1.f_F.fluid) - 1))) / Injector_F.M_out") ;
}
else 
{
unkR[22] = unkR[211] * unkR[213] * _sqrt(2. * LPRES__rho(&unkR[23]) * (unkR[232] - unkR[52]),"2 * LPRES.rho(GasGen_1.f_F.fluid) * (LH2_circuit.pt - GasGen_1.f_F.p)") ;
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
void DRLPRUEBAS__GG_comp_escalon::fcn1(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_escalon& m= *DRLPRUEBAS__GG_comp_escalon::s_current;
	m.printDbgInfoForModel(1,true);
	dcopy(*n,&m.boxDyn[2],x);
	m.fbox1(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[2]);
	m.printDbgInfoForModel(1,false);
}


/* Wrapper for the non-linear solver in box 1*/
void DRLPRUEBAS__GG_comp_escalon::fhyb1(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_escalon::fcn1, n, &dyn[2], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 1);
	abortDiv= adiv;
}


/* Residues function for box 2*/
void DRLPRUEBAS__GG_comp_escalon::fbox2(double *_time,double dyn[],double ldr[],double res[])
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
void DRLPRUEBAS__GG_comp_escalon::fcn2(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_escalon& m= *DRLPRUEBAS__GG_comp_escalon::s_current;
	m.printDbgInfoForModel(2,true);
	dcopy(*n,&m.boxDyn[3],x);
	m.fbox2(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[3]);
	m.printDbgInfoForModel(2,false);
}


/* Wrapper for the non-linear solver in box 2*/
void DRLPRUEBAS__GG_comp_escalon::fhyb2(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_escalon::fcn2, n, &dyn[3], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 2);
	abortDiv= adiv;
}


/* Residues function for box 3*/
void DRLPRUEBAS__GG_comp_escalon::fbox3(double *_time,double dyn[],double ldr[],double res[])
{
//[E-157]  NozzleConDiv_1.AR = LPRES.FGAMMA(NozzleConDiv_1.g_in.fluid) / ((NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** (1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * sqrt(2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1)))
res[4] = evalNormResidueInternal(4,unkR[237],_div( LPRES__FGAMMA(&unkR[173]) , (_pow( (_div( dyn[4] , unkR[53],"GasGen_1.f_O.p_c")) , (_div( 1 , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c)**(1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid))" ) * _sqrt(_div( 2. * LPRES__gamma(&unkR[173]) * (1. - _pow( (_div( dyn[4] , unkR[53],"GasGen_1.f_O.p_c")) , (_div( (LPRES__gamma(&unkR[173]) - 1.) , LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c)**((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))" )) , (LPRES__gamma(&unkR[173]) - 1.),"LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1"),"2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1)")),"(NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** (1 / LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * sqrt(2 * LPRES.gamma(NozzleConDiv_1.g_in.fluid) * (1 - (NozzleConDiv_1.p_out_ch / GasGen_1.f_O.p_c) ** ((LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / LPRES.gamma(NozzleConDiv_1.g_in.fluid))) / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))"));
}


/* Wrapper to call the residues's box 3 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_escalon::fcn3(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_escalon& m= *DRLPRUEBAS__GG_comp_escalon::s_current;
	m.printDbgInfoForModel(3,true);
	dcopy(*n,&m.boxDyn[4],x);
	m.fbox3(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[4]);
	m.printDbgInfoForModel(3,false);
}


/* Wrapper for the non-linear solver in box 3*/
void DRLPRUEBAS__GG_comp_escalon::fhyb3(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_escalon::fcn3, n, &dyn[4], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 3);
	abortDiv= adiv;
}


/* Residues function for box 4*/
void DRLPRUEBAS__GG_comp_escalon::fbox4(double *_time,double dyn[],double ldr[],double res[])
{
//[E-159]  NozzleConDiv_1.g_in.W * sqrt(LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt) / ThrustMonitor_1.g.A_out / GasGen_1.f_O.p_c = sqrt(LPRES.gamma(NozzleConDiv_1.g_in.fluid)) * ThrustMonitor_1.M_out * (1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2) ** (-(LPRES.gamma(NozzleConDiv_1.g_in.fluid) + 1) / 2 / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))
res[5] = evalNormResidueInternal(5,_div( _div( dyn[3] * _sqrt(LPRES__R(&unkR[173]) * dyn[1],"LPRES.R(NozzleConDiv_1.g_in.fluid) * GasGen_1.g.Tt") , unkR[238],"ThrustMonitor_1.g.A_out") , unkR[53],"GasGen_1.f_O.p_c"),_sqrt(LPRES__gamma(&unkR[173]),"LPRES.gamma(NozzleConDiv_1.g_in.fluid)") * dyn[5] * _pow( (1 + (LPRES__gamma(&unkR[173]) - 1)/2 * _pow( dyn[5] , 2,"(ThrustMonitor_1.M_out)**(2)" )) , (_div( -(LPRES__gamma(&unkR[173]) + 1)/2 , (LPRES__gamma(&unkR[173]) - 1),"LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1")),"(1 + (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1) / 2 * ThrustMonitor_1.M_out ** 2)**(-(LPRES.gamma(NozzleConDiv_1.g_in.fluid) + 1) / 2 / (LPRES.gamma(NozzleConDiv_1.g_in.fluid) - 1))" ));
}


/* Wrapper to call the residues's box 4 function from the non-linear solver */
void DRLPRUEBAS__GG_comp_escalon::fcn4(int *n, double x[], double residues[], int *iflag)
{
	DRLPRUEBAS__GG_comp_escalon& m= *DRLPRUEBAS__GG_comp_escalon::s_current;
	m.printDbgInfoForModel(4,true);
	dcopy(*n,&m.boxDyn[5],x);
	m.fbox4(&m.TIME, m.boxDyn, m.boxDer, m.res);
	dcopy(*n,residues,&m.res[5]);
	m.printDbgInfoForModel(4,false);
}


/* Wrapper for the non-linear solver in box 4*/
void DRLPRUEBAS__GG_comp_escalon::fhyb4(double dyn[], double ldr[], double tol, int n, int itmax)
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
	isOk= solveSteady(DRLPRUEBAS__GG_comp_escalon::fcn4, n, &dyn[5], residues, &info, box);
	if ( !isOk )
		endReportNoConvergence(info, 200, 4);
	abortDiv= adiv;
}


/* Main residues function for this model */
void DRLPRUEBAS__GG_comp_escalon::fres( double *_time, double dyn[], double der[], double res[] )
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
unkR[218] = _div( unkR[232] , unkR[215],"Injector_F.PR_sl") ;
}
else 
{
unkR[218] = 0. ;
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
unkR[225] = _pow( ((LPRES__gamma(&unkR[56]) + 1.)/2.) , (_div( LPRES__gamma(&unkR[56]) , (LPRES__gamma(&unkR[56]) - 1.),"LPRES.gamma(GasGen_1.f_O.fluid) - 1")),"((LPRES.gamma(GasGen_1.f_O.fluid) + 1) / 2)**(LPRES.gamma(GasGen_1.f_O.fluid) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1))" ) ;
}
else 
{
unkR[225] = 0. ;
}
//[E-62]  Injector_O.p_out_ch =  IF[39] (LPRES.State(GasGen_1.f_O.fluid) == Gas) LO2_circuit.pt / Injector_O.PR_sl	 ELSE 0
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[228] = _div( unkR[235] , unkR[225],"Injector_O.PR_sl") ;
}
else 
{
unkR[228] = 0. ;
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
unkR[54] = _div( unkR[233] , (1. + (LPRES__gamma(&unkR[56]) - 1.)/2. * _pow( unkR[223] , 2.,"(Injector_O.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_O.fluid) - 1) / 2 * Injector_O.M_out ** 2") ;
}
else 
{
unkR[54] = unkR[233] ;
}
//[E-144]  GasGen_1.f_F.T =  IF[34] (LPRES.State(GasGen_1.f_F.fluid) == Gas) LH2_circuit.Tt / (1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2)	 ELSE LH2_circuit.Tt
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[21] = _div( unkR[230] , (1. + (LPRES__gamma(&unkR[23]) - 1.)/2. * _pow( unkR[214] , 2.,"(Injector_F.M_out)**(2)" )),"1 + (LPRES.gamma(GasGen_1.f_F.fluid) - 1) / 2 * Injector_F.M_out ** 2") ;
}
else 
{
unkR[21] = unkR[230] ;
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
unkR[212] = _div( _sqrt(unkR[230] * LPRES__R(&unkR[23]),"LH2_circuit.Tt * LPRES.R(GasGen_1.f_F.fluid)") * unkR[22] , (LPRES__FGAMMA(&unkR[23]) * unkR[232]),"LPRES.FGAMMA(GasGen_1.f_F.fluid) * LH2_circuit.pt") ;
}
else 
{
unkR[212] = 0. ;
}
//[E-151]  Injector_F.v_ideal =  IF[36] (LPRES.State(GasGen_1.f_F.fluid) == Gas) Injector_F.M_out * sqrt(LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T)	 ELSE GasGen_1.f_F.W / (LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D)
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[219] = unkR[214] * _sqrt(LPRES__gamma(&unkR[23]) * LPRES__R(&unkR[23]) * unkR[21],"LPRES.gamma(GasGen_1.f_F.fluid) * LPRES.R(GasGen_1.f_F.fluid) * GasGen_1.f_F.T") ;
}
else 
{
unkR[219] = _div( unkR[22] , (LPRES__rho(&unkR[23]) * unkR[211] * unkR[213]),"LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.A * Injector_F.C_D") ;
}
//[E-152]  Injector_F.Re =  IF[37] (LPRES.State(GasGen_1.f_F.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_F.fluid) * Injector_F.v_ideal * Injector_F.C_D * sqrt(4 * Injector_F.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_F.fluid)
if( LPRES__State(&unkR[23]) == 2 ) 
{
unkR[216] = 0. ;
}
else 
{
unkR[216] = _div( LPRES__rho(&unkR[23]) * unkR[219] * unkR[213] * _sqrt(4. * unkR[211]/3.14159265358979,"4 * Injector_F.A / 3.14159265358979") , LPRES__visc(&unkR[23]),"LPRES.visc(GasGen_1.f_F.fluid)") ;
}
//[E-153]  Injector_O.A_sl =  IF[40] (LPRES.State(GasGen_1.f_O.fluid) == Gas) sqrt(LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)) * GasGen_1.f_O.W / (LPRES.FGAMMA(GasGen_1.f_O.fluid) * LO2_circuit.pt)	 ELSE 0
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[221] = _div( _sqrt(unkR[233] * LPRES__R(&unkR[56]),"LO2_circuit.Tt * LPRES.R(GasGen_1.f_O.fluid)") * unkR[55] , (LPRES__FGAMMA(&unkR[56]) * unkR[235]),"LPRES.FGAMMA(GasGen_1.f_O.fluid) * LO2_circuit.pt") ;
}
else 
{
unkR[221] = 0. ;
}
//[E-154]  Injector_O.v_ideal =  IF[44] (LPRES.State(GasGen_1.f_O.fluid) == Gas) Injector_O.M_out * sqrt(LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T)	 ELSE GasGen_1.f_O.W / (LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D)
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[229] = unkR[223] * _sqrt(LPRES__gamma(&unkR[56]) * LPRES__R(&unkR[56]) * unkR[54],"LPRES.gamma(GasGen_1.f_O.fluid) * LPRES.R(GasGen_1.f_O.fluid) * GasGen_1.f_O.T") ;
}
else 
{
unkR[229] = _div( unkR[55] , (LPRES__rho(&unkR[56]) * unkR[220] * unkR[222]),"LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.A * Injector_O.C_D") ;
}
//[E-155]  Injector_O.Re =  IF[45] (LPRES.State(GasGen_1.f_O.fluid) == Gas) 0	 ELSE LPRES.rho(GasGen_1.f_O.fluid) * Injector_O.v_ideal * Injector_O.C_D * sqrt(4 * Injector_O.A / 3.14159265358979) / LPRES.visc(GasGen_1.f_O.fluid)
if( LPRES__State(&unkR[56]) == 2 ) 
{
unkR[226] = 0. ;
}
else 
{
unkR[226] = _div( LPRES__rho(&unkR[56]) * unkR[229] * unkR[222] * _sqrt(4. * unkR[220]/3.14159265358979,"4 * Injector_O.A / 3.14159265358979") , LPRES__visc(&unkR[56]),"LPRES.visc(GasGen_1.f_O.fluid)") ;
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
void DRLPRUEBAS__GG_comp_escalon::checkAsserts(double *_time)
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
void DRLPRUEBAS__GG_comp_escalon::constraints( double *_time, double ev[],double dyn[],double ldr[]) 
{
    ev[0]= unkR[115] * unkR[86] + unkR[116] * unkR[87] + unkR[117] * unkR[88] + unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
    ev[1]= unkR[115] * unkR[86] + unkR[116] * unkR[87] + unkR[117] * unkR[88] + unkR[118] * unkR[89] + unkR[119] * unkR[90] + unkR[120] * unkR[91] + unkR[121] * unkR[92] + unkR[122] * unkR[93] + unkR[123] * unkR[94] + unkR[124] * unkR[95] + unkR[125] * unkR[96] + unkR[126] * unkR[97] + unkR[127] * unkR[98] + unkR[128] * unkR[99] + unkR[129] * unkR[100] + unkR[130] * unkR[101] + unkR[131] * unkR[102] + unkR[132] * unkR[103] + unkR[133] * unkR[104] + unkR[134] * unkR[105] + unkR[135] * unkR[106] + unkR[136] * unkR[107] + unkR[137] * unkR[108] + unkR[138] * unkR[109] + unkR[139] * unkR[110] + unkR[140] * unkR[111]; //(GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
    ev[2]= unkI[0] - 1; //GasGen_1.Combustion
    ev[3]= LPRES__State(&unkR[23]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[4]= dyn[2] - unkR[215]; //Injector_F.PR < Injector_F.PR_sl
    ev[5]= LPRES__State(&unkR[23]) - 2; //LPRES.State(GasGen_1.f_F.fluid) == Gas
    ev[6]= dyn[2] - unkR[215]; //Injector_F.PR >= Injector_F.PR_sl
    ev[7]= LPRES__State(&unkR[56]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[8]= unkR[224] - unkR[225]; //Injector_O.PR < Injector_O.PR_sl
    ev[9]= LPRES__State(&unkR[56]) - 2; //LPRES.State(GasGen_1.f_O.fluid) == Gas
    ev[10]= unkR[224] - unkR[225]; //Injector_O.PR >= Injector_O.PR_sl
}

/* Evaluation of when conditions*/
void DRLPRUEBAS__GG_comp_escalon::evalWhen(double *_time, bool w[],bool cont[] )
{
     w[0] = cont[0] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) != 0
     w[1] = cont[1] ; // (GasGen_1.fluid_O[LOX] * GasGen_1.fluid_F[LOX] + GasGen_1.fluid_O[NTO] * GasGen_1.fluid_F[NTO] + GasGen_1.fluid_O[H2O2] * GasGen_1.fluid_F[H2O2] + GasGen_1.fluid_O[HNO3] * GasGen_1.fluid_F[HNO3] + GasGen_1.fluid_O[LF2] * GasGen_1.fluid_F[LF2] + GasGen_1.fluid_O[RP_1] * GasGen_1.fluid_F[RP_1] + GasGen_1.fluid_O[LCH4] * GasGen_1.fluid_F[LCH4] + GasGen_1.fluid_O[LH2] * GasGen_1.fluid_F[LH2] + GasGen_1.fluid_O[N2H4] * GasGen_1.fluid_F[N2H4] + GasGen_1.fluid_O[UDMH] * GasGen_1.fluid_F[UDMH] + GasGen_1.fluid_O[MMH] * GasGen_1.fluid_F[MMH] + GasGen_1.fluid_O[JP_10] * GasGen_1.fluid_F[JP_10] + GasGen_1.fluid_O[Kerox] * GasGen_1.fluid_F[Kerox] + GasGen_1.fluid_O[Oil] * GasGen_1.fluid_F[Oil] + GasGen_1.fluid_O[H2O] * GasGen_1.fluid_F[H2O] + GasGen_1.fluid_O[IPA] * GasGen_1.fluid_F[IPA] + GasGen_1.fluid_O[Air] * GasGen_1.fluid_F[Air] + GasGen_1.fluid_O[Ar] * GasGen_1.fluid_F[Ar] + GasGen_1.fluid_O[CH4] * GasGen_1.fluid_F[CH4] + GasGen_1.fluid_O[CO] * GasGen_1.fluid_F[CO] + GasGen_1.fluid_O[CO2] * GasGen_1.fluid_F[CO2] + GasGen_1.fluid_O[H2] * GasGen_1.fluid_F[H2] + GasGen_1.fluid_O[He] * GasGen_1.fluid_F[He] + GasGen_1.fluid_O[N2] * GasGen_1.fluid_F[N2] + GasGen_1.fluid_O[O2] * GasGen_1.fluid_F[O2] + GasGen_1.fluid_O[MMH_vapour] * GasGen_1.fluid_F[MMH_vapour]) == 0
}

/* Generation WHEN conditions*/
void DRLPRUEBAS__GG_comp_escalon::executeWhen(double *_time,  int index )
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
void DRLPRUEBAS__GG_comp_escalon::evalZones( double *_time,  int branchZone[],bool cont[] )
{
     // GasGen_1.Q_comb_effective =  ZONE (GasGen_1.Combustion) GasGen_1.Q_comb OTHERS 0
     branchZone[0] = (cont[2] ) ? 0 : 1;
     // Injector_F.M_out =  ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR < Injector_F.PR_sl) sqrt(2 * (Injector_F.PR ** ((LPRES.gamma(GasGen_1.f_F.fluid) - 1) / LPRES.gamma(GasGen_1.f_F.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_F.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_F.fluid) == Gas AND Injector_F.PR >= Injector_F.PR_sl) 1 OTHERS 0
     branchZone[1] = (cont[3]  && cont[4] ) ? 0 : (cont[5]  && cont[6] ) ? 1 : 2;
     // Injector_O.M_out =  ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR < Injector_O.PR_sl) sqrt(2 * (Injector_O.PR ** ((LPRES.gamma(GasGen_1.f_O.fluid) - 1) / LPRES.gamma(GasGen_1.f_O.fluid)) - 1) / (LPRES.gamma(GasGen_1.f_O.fluid) - 1)) ZONE (LPRES.State(GasGen_1.f_O.fluid) == Gas AND Injector_O.PR >= Injector_O.PR_sl) 1 OTHERS 0
     branchZone[2] = (cont[7]  && cont[8] ) ? 0 : (cont[9]  && cont[10] ) ? 1 : 2;
}

/* Initialization of events */
INTEG_simula::t_initEvent* DRLPRUEBAS__GG_comp_escalon::initEvents(int& nEvents,int& nWhen,int& nZones,         
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
void DRLPRUEBAS__GG_comp_escalon::initDelays()
{
}


bool DRLPRUEBAS__GG_comp_escalon::gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gst_size_DRLPRUEBAS__GG_comp_escalon = 43780;
static const unsigned int s_gst_chunkSize_DRLPRUEBAS__GG_comp_escalon = 2000;
static const char *s_gst_chunkedStr_DRLPRUEBAS__GG_comp_escalon[] = 
{
"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"
};
*size = s_gst_size_DRLPRUEBAS__GG_comp_escalon;
*chunkSize = s_gst_chunkSize_DRLPRUEBAS__GG_comp_escalon;
*chunkedStr = s_gst_chunkedStr_DRLPRUEBAS__GG_comp_escalon;
return true;
}



bool DRLPRUEBAS__GG_comp_escalon::gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr)
{
static const unsigned int s_gsi_size_DRLPRUEBAS__GG_comp_escalon = 232;
static const unsigned int s_gsi_chunkSize_DRLPRUEBAS__GG_comp_escalon = 2000;
static const char *s_gsi_chunkedStr_DRLPRUEBAS__GG_comp_escalon[] = 
{
"BgAAABkAAAADAAAABAAAAAQAAAADAAAABAAAAAUAAAAFAAAAAQAAAAIAAAADAAAABAAAAAEAAAACAAAAAwAAAAQAAAABAAAAAgAAAAMAAAABAAAAAgAAAAMAAAAEAAAAAQAAAAIAAAADAAAABAAAAAUAAAABAAAAAgAAAAMAAAAEAAAABgAAAAEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAABAAAAAgAAAA=="
};
*size = s_gsi_size_DRLPRUEBAS__GG_comp_escalon;
*chunkSize = s_gsi_chunkSize_DRLPRUEBAS__GG_comp_escalon;
*chunkedStr = s_gsi_chunkedStr_DRLPRUEBAS__GG_comp_escalon;
return true;
}


/* Function to return an object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_simula* create_DRLPRUEBAS__GG_comp_escalon(const char *name=NULL,const char *dirInstall=NULL)
{
	return new DRLPRUEBAS__GG_comp_escalon(name,dirInstall);
}

/* Function to destroy the partition */
SIMULA_EXPORT_C_EXP void delete_DRLPRUEBAS__GG_comp_escalon(INTEG_simula *obj,const char *name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function to return an encapsulated object of the partition class */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *create2_DRLPRUEBAS__GG_comp_escalon(const char *name=NULL,const char *dirInstall=NULL)
{
	INTEG_SlimSimula *ep = 0;
	try
	{
		INTEG_simula *tmp = new DRLPRUEBAS__GG_comp_escalon(name,dirInstall);
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
	sprintf(partitionName,"%s","escalon");
	sprintf(symbolTableFilename,"%s","DRLPRUEBAS.+g+g_comp.escalon");
	isDebug= false;
	return;
}
#endif //SIMULA_NOT_USE_METAINFO

#endif 

