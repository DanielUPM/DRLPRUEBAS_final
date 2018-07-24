//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+r+l10.respuesta_cargas.exp_rampa_larga.h"

DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga* DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::s_current= NULL;
DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__RL10_respuesta_cargas(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_rampa_larga";
m_infoExperimentFileName = "DRLPRUEBAS.+r+l10.respuesta_cargas.exp_rampa_larga";
m_infoExperimentFileNameExtra = "exp_rampa_larga";
m_infoExperimentDate = "28/06/2018 10:07:14.077000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
static double __exp_tab_1[] = {0,33,350,500,3219188.99,3219188.99,3719188.99,3719188.99};
static INTEG_table tmp_tab_p[] = { INTEG_table(4, __exp_tab_1+0, 0, NULL, 0, NULL, __exp_tab_1+4, "tab_p")};
tab_p = tmp_tab_p[0];
nBounds = 2;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[2];
	for (int ib=0; ib < 2 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::initInternalModels()
{
  DRLPRUEBAS__RL10_respuesta_cargas::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::addExptVariables()
{
	ADD_EXPT_VAR( "tab_p", "TABLE_1D", "",&tab_p);
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Regulator_F.dp");

}


//Run the experiment code
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::runExperiment()
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
	TSTOP = 600. ;
	CINT = 0.01 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 10. ;
	dyn[3] = 100. ;
	dyn[6] = 10. ;
	dyn[9] = 10. ;
	dyn[10] = 100. ;
	dyn[12] = 100. ;
	dyn[3] = 200. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[345] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[370] = timeTableInterp(TIME, &tab_p, -1) ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga ecomodel;
#else
	DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga ecomodel(0,0,true);
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
	return new DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__RL10_respuesta_cargas_exp_rampa_larga(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_rampa_larga");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


