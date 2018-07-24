//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+f1.off+design.exp+o+f+f+d_valid.h"

DRLPRUEBAS__F1_offDesign_expOFFD_valid* DRLPRUEBAS__F1_offDesign_expOFFD_valid::s_current= NULL;
DRLPRUEBAS__F1_offDesign_expOFFD_valid::DRLPRUEBAS__F1_offDesign_expOFFD_valid(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__F1_offDesign(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "expOFFD_valid";
m_infoExperimentFileName = "DRLPRUEBAS.+f1.off+design.exp+o+f+f+d_valid";
m_infoExperimentFileNameExtra = "exp+o+f+f+d_valid";
m_infoExperimentDate = "28/06/2018 11:57:17.329000";

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
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::initInternalModels()
{
  DRLPRUEBAS__F1_offDesign::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");

}


//Run the experiment code
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::runExperiment()
{
	REPORT_LIST("reportAll", "*", 1) ;
	DEBUG_LEVEL = 1 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	STEADY() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::initDefaultsExp()
{
	dyn[0] = 8. ;
	dyn[1] = 4000. ;
	dyn[2] = 50. ;
	dyn[3] = 1200. ;
	dyn[8] = 100. ;
	dyn[10] = 4000. ;
	dyn[11] = 2. ;
	dyn[12] = 90000. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[433] = 9000. ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__F1_offDesign_expOFFD_valid::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__F1_offDesign_expOFFD_valid ecomodel;
#else
	DRLPRUEBAS__F1_offDesign_expOFFD_valid ecomodel(0,0,true);
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
	return new DRLPRUEBAS__F1_offDesign_expOFFD_valid(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__F1_offDesign_expOFFD_valid(name,dirInstall,d);
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
	sprintf(experimentName,"%s","expOFFD_valid");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS

