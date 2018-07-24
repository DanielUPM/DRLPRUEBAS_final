//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+r+l10.respuesta_cargas.exp1.h"

DRLPRUEBAS__RL10_respuesta_cargas_exp1* DRLPRUEBAS__RL10_respuesta_cargas_exp1::s_current= NULL;
DRLPRUEBAS__RL10_respuesta_cargas_exp1::DRLPRUEBAS__RL10_respuesta_cargas_exp1(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__RL10_respuesta_cargas(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp1";
m_infoExperimentFileName = "DRLPRUEBAS.+r+l10.respuesta_cargas.exp1";
m_infoExperimentFileNameExtra = "exp1";
m_infoExperimentDate = "20/06/2018 10:01:22.357000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
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
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::initInternalModels()
{
  DRLPRUEBAS__RL10_respuesta_cargas::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Tank_F.Tt");
varHasEquationInBoundBlock("Tank_F.pt");
varHasEquationInBoundBlock("Tank_O.Tt");
varHasEquationInBoundBlock("Tank_O.pt");

}


//Run the experiment code
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::runExperiment()
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
	TSTOP = 50. ;
	CINT = 0.01 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::initDefaultsExp()
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
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[341] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[375] = 21.11111 ;
	if (m_boundaryBranch[2] == 0)  
		unkR[377] = 193053.2 ;
	if (m_boundaryBranch[3] == 0)  
		unkR[378] = 98.05556 ;
	if (m_boundaryBranch[4] == 0)  
		unkR[380] = 320606.2 ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__RL10_respuesta_cargas_exp1::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__RL10_respuesta_cargas_exp1 ecomodel;
#else
	DRLPRUEBAS__RL10_respuesta_cargas_exp1 ecomodel(0,0,true);
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
	return new DRLPRUEBAS__RL10_respuesta_cargas_exp1(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__RL10_respuesta_cargas_exp1(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp1");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


