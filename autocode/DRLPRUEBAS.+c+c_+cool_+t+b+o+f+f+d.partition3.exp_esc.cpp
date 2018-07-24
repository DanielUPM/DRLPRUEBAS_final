//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3.exp_esc.h"

DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc* DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::s_current= NULL;
DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__CC_Cool_TBOFFD_partition3(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_esc";
m_infoExperimentFileName = "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3.exp_esc";
m_infoExperimentFileNameExtra = "exp_esc";
m_infoExperimentDate = "29/06/2018 12:37:26.532000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
nBounds = 3;// Number of boundary variables
if (m_boundaryBranch==NULL)
{
	m_boundaryBranch= new int[3];
	for (int ib=0; ib < 3 ; ib++)
		m_boundaryBranch[ib]= 0;
}
setDefaultReportSeparator("\t");
s_current= this;
}

  // init internal partition models if used
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::initInternalModels()
{
  DRLPRUEBAS__CC_Cool_TBOFFD_partition3::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("LH2_circuit_1.Tt");
varHasEquationInBoundBlock("LH2_circuit_1.pt");

}


//Run the experiment code
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::runExperiment()
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
	TSTOP = 15. ;
	CINT = 0.01 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 10. ;
	dyn[3] = 100. ;
	dyn[4] = 10. ;
	dyn[5] = 10. ;
	dyn[6] = 1000. ;
	dyn[8] = 100. ;
	dyn[9] = 10. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[2] == 0)  
		unkR[303] = 9000. ;
	if (m_boundaryBranch[0] == 0)  
		unkR[299] = step(TIME, 3., -1) * 50. + 31.3343538 ;
	if (m_boundaryBranch[1] == 0)  
		unkR[301] = step(TIME, 3., -2) * 500000. + 7547798.88 ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc ecomodel;
#else
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc ecomodel(0,0,true);
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
	return new DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_esc(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_esc");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


