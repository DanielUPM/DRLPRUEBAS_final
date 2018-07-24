//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+g+g_comp.+transient.exp_+trans.h"

DRLPRUEBAS__GG_comp_Transient_exp_Trans* DRLPRUEBAS__GG_comp_Transient_exp_Trans::s_current= NULL;
DRLPRUEBAS__GG_comp_Transient_exp_Trans::DRLPRUEBAS__GG_comp_Transient_exp_Trans(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__GG_comp_Transient(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_Trans";
m_infoExperimentFileName = "DRLPRUEBAS.+g+g_comp.+transient.exp_+trans";
m_infoExperimentFileNameExtra = "exp_+trans";
m_infoExperimentDate = "29/06/2018 10:03:53.228000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
nBounds = 1;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[1];
	for (int ib=0; ib < 1 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::initInternalModels()
{
  DRLPRUEBAS__GG_comp_Transient::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");

}


//Run the experiment code
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::runExperiment()
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
	TSTOP = 7. ;
	CINT = 0.01 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 10. ;
	dyn[3] = 10. ;
	dyn[4] = 1000. ;
	dyn[5] = 10. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[236] = 9000. ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__GG_comp_Transient_exp_Trans::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__GG_comp_Transient_exp_Trans ecomodel;
#else
	DRLPRUEBAS__GG_comp_Transient_exp_Trans ecomodel(0,0,true);
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
	return new DRLPRUEBAS__GG_comp_Transient_exp_Trans(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__GG_comp_Transient_exp_Trans(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_Trans");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


