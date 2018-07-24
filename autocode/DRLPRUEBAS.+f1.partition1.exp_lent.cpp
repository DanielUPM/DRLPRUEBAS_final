//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+f1.partition1.exp_lent.h"

DRLPRUEBAS__F1_partition1_exp_lent* DRLPRUEBAS__F1_partition1_exp_lent::s_current= NULL;
DRLPRUEBAS__F1_partition1_exp_lent::DRLPRUEBAS__F1_partition1_exp_lent(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__F1_partition1(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_lent";
m_infoExperimentFileName = "DRLPRUEBAS.+f1.partition1.exp_lent";
m_infoExperimentFileNameExtra = "exp_lent";
m_infoExperimentDate = "29/06/2018 14:13:06.005000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
static double __exp_tab_1[] = {0,5,15,30,0.624280123,0.624280123,1.124280123,1.124280123};
static INTEG_table tmp_tab_A[] = { INTEG_table(4, __exp_tab_1+0, 0, NULL, 0, NULL, __exp_tab_1+4, "tab_A")};
tab_A = tmp_tab_A[0];
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
void DRLPRUEBAS__F1_partition1_exp_lent::initInternalModels()
{
  DRLPRUEBAS__F1_partition1::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__F1_partition1_exp_lent::addExptVariables()
{
	ADD_EXPT_VAR( "tab_A", "TABLE_1D", "",&tab_A);
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Nozzle_1.A");

}


//Run the experiment code
void DRLPRUEBAS__F1_partition1_exp_lent::runExperiment()
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
	TSTOP = 30. ;
	CINT = 0.01 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__F1_partition1_exp_lent::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__F1_partition1_exp_lent::initDefaultsExp()
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
void DRLPRUEBAS__F1_partition1_exp_lent::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[433] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[434] = timeTableInterp(TIME, &tab_A, -1) ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__F1_partition1_exp_lent::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__F1_partition1_exp_lent ecomodel;
#else
	DRLPRUEBAS__F1_partition1_exp_lent ecomodel(0,0,true);
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
	return new DRLPRUEBAS__F1_partition1_exp_lent(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__F1_partition1_exp_lent(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_lent");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


