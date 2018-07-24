//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+g+g_comp.+o+f+f+d_valid.exp_design.h"

DRLPRUEBAS__GG_comp_OFFD_valid_exp_design* DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::s_current= NULL;
DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::DRLPRUEBAS__GG_comp_OFFD_valid_exp_design(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__GG_comp_OFFD_valid(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_design";
m_infoExperimentFileName = "DRLPRUEBAS.+g+g_comp.+o+f+f+d_valid.exp_design";
m_infoExperimentFileNameExtra = "exp_design";
m_infoExperimentDate = "22/06/2018 13:27:44.299000";

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
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::initInternalModels()
{
  DRLPRUEBAS__GG_comp_OFFD_valid::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");

}


//Run the experiment code
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::runExperiment()
{
	REPORT_LIST("reportAll", "*", 1) ;
	DEBUG_LEVEL = 4 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	STEADY() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 10. ;
	dyn[3] = 10. ;
	dyn[4] = 1000. ;
	dyn[5] = 10. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[236] = 9000. ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__GG_comp_OFFD_valid_exp_design::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__GG_comp_OFFD_valid_exp_design ecomodel;
#else
	DRLPRUEBAS__GG_comp_OFFD_valid_exp_design ecomodel(0,0,true);
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
	return new DRLPRUEBAS__GG_comp_OFFD_valid_exp_design(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__GG_comp_OFFD_valid_exp_design(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_design");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


