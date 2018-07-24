//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+r+l10.respuesta_cargas.exp3.h"

DRLPRUEBAS__RL10_respuesta_cargas_exp3* DRLPRUEBAS__RL10_respuesta_cargas_exp3::s_current= NULL;
DRLPRUEBAS__RL10_respuesta_cargas_exp3::DRLPRUEBAS__RL10_respuesta_cargas_exp3(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__RL10_respuesta_cargas(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp3";
m_infoExperimentFileName = "DRLPRUEBAS.+r+l10.respuesta_cargas.exp3";
m_infoExperimentFileNameExtra = "exp3";
m_infoExperimentDate = "20/06/2018 10:08:11.180000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
static double __exp_tab_1[] = {0,33,42,60,21.11111,21.11111,71.11111,71.11111};
static INTEG_table tmp_tab_T_F[] = { INTEG_table(4, __exp_tab_1+0, 0, NULL, 0, NULL, __exp_tab_1+4, "tab_T_F")};
tab_T_F = tmp_tab_T_F[0];
static double __exp_tab_2[] = {0,33,42,60,193053.2,193053.2,243053.2,243053.2};
static INTEG_table tmp_tab_p_F[] = { INTEG_table(4, __exp_tab_2+0, 0, NULL, 0, NULL, __exp_tab_2+4, "tab_p_F")};
tab_p_F = tmp_tab_p_F[0];
static double __exp_tab_3[] = {0,33,42,60,98.05556,98.05556,148.05556,148.05556};
static INTEG_table tmp_tab_T_O[] = { INTEG_table(4, __exp_tab_3+0, 0, NULL, 0, NULL, __exp_tab_3+4, "tab_T_O")};
tab_T_O = tmp_tab_T_O[0];
static double __exp_tab_4[] = {0,33,42,60,320606.2,320606.2,370606.2,370606.2};
static INTEG_table tmp_tab_p_O[] = { INTEG_table(4, __exp_tab_4+0, 0, NULL, 0, NULL, __exp_tab_4+4, "tab_p_O")};
tab_p_O = tmp_tab_p_O[0];
nBounds = 5;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[5];
	for (int ib=0; ib < 5 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::initInternalModels()
{
  DRLPRUEBAS__RL10_respuesta_cargas::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::addExptVariables()
{
	ADD_EXPT_VAR( "tab_T_F", "TABLE_1D", "",&tab_T_F);
	ADD_EXPT_VAR( "tab_p_F", "TABLE_1D", "",&tab_p_F);
	ADD_EXPT_VAR( "tab_T_O", "TABLE_1D", "",&tab_T_O);
	ADD_EXPT_VAR( "tab_p_O", "TABLE_1D", "",&tab_p_O);
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Tank_F.Tt");
varHasEquationInBoundBlock("Tank_F.pt");
varHasEquationInBoundBlock("Tank_O.Tt");
varHasEquationInBoundBlock("Tank_O.pt");

}


//Run the experiment code
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::runExperiment()
{
	DEBUG_LEVEL = 4 ;
	IMETHOD = 11 ;
	eSetConfig(1, 1) ;
	REL_ERROR = 1e-06 ;
	ABS_ERROR = 1e-06 ;
	TOLERANCE = 1e-06 ;
	INIT_INTEG_STEP = -1. ;
	MAX_INTEG_STEP = -1. ;
	NSTEPS = 1 ;
	REPORT_MODE = 9 ;
	TIME = 0. ;
	TSTOP = 60. ;
	CINT = 0.01 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 10. ;
	dyn[3] = 100. ;
	dyn[4] = 100. ;
	dyn[5] = 5. ;
	dyn[6] = 2. ;
	dyn[7] = 10. ;
	dyn[8] = 1000. ;
	dyn[10] = 10. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[341] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[375] = timeTableInterp(TIME, &tab_T_F, -1) ;
	if (m_boundaryBranch[2] == 0)  
		unkR[377] = timeTableInterp(TIME, &tab_p_F, -2) ;
	if (m_boundaryBranch[3] == 0)  
		unkR[378] = timeTableInterp(TIME, &tab_T_O, -3) ;
	if (m_boundaryBranch[4] == 0)  
		unkR[380] = timeTableInterp(TIME, &tab_p_O, -4) ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp3::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__RL10_respuesta_cargas_exp3 ecomodel;
#else
	DRLPRUEBAS__RL10_respuesta_cargas_exp3 ecomodel(0,0,true);
#endif //SIMULA_USE_DECK_SYMBOLS
	mainLoop(argc, argv, &ecomodel);
}
catch(...)
{
	printf("Program stops due to abnormal condition\n");
}
	return 0;
}
#endif //SIMULA_USE_GRAPHICAL_MAIN

/* Function to create an instance of the experiment class */
SIMULA_EXPORT_C_EXP INTEG_simula* fcnExpCreate(const char *name=NULL,const char *dirInstall=NULL,bool d=false)
{
	return new DRLPRUEBAS__RL10_respuesta_cargas_exp3(name,dirInstall,d);
}

/* Function to destroy the experiment instance */
SIMULA_EXPORT_C_EXP void fcnExpDel(INTEG_simula *obj,const char* name=NULL)
{
	if ( obj )
	{
		delete obj;
	}
}

/* Function that creates an encapsulated experiment */
SIMULA_EXPORT_C_EXP INTEG_SlimSimula *fcnExpCreate2(const char *name=NULL,const char *dirInstall=NULL,bool d=false)
{
	INTEG_SlimSimula *ee = 0;
	try
	{
		INTEG_simula * tmp = new DRLPRUEBAS__RL10_respuesta_cargas_exp3(name,dirInstall,d);
		ee = tmp->createThinModel();
	}
	catch(...)
	{
	}
	return ee;
}

/* Function to get information of the model*/
SIMULA_EXPORT_C_EXP void getInformationExperiment(char *experimentName, bool& isDebug)
{
	sprintf(experimentName,"%s","exp3");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


