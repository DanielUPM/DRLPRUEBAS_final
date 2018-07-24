//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition2.exp_trans.h"

DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans* DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::s_current= NULL;
DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__CC_GG_OFFD_partition2(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_trans";
m_infoExperimentFileName = "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition2.exp_trans";
m_infoExperimentFileNameExtra = "exp_trans";
m_infoExperimentDate = "27/06/2018 13:17:56.236000";

m_perfFlag = false;

// Global variables
n_typ_exp=0;
// Experiment variables (initialisation)
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
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::initInternalModels()
{
  DRLPRUEBAS__CC_GG_OFFD_partition2::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Turbine_ch.m.N");

}


//Run the experiment code
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::runExperiment()
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
	CINT = 0.001 ;
	INTEG() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::initDefaultsExp()
{
	dyn[0] = 10. ;
	dyn[1] = 2500. ;
	dyn[2] = 50. ;
	dyn[3] = 1200. ;
	dyn[4] = 10. ;
	dyn[5] = 1.5 ;
	dyn[6] = 4000. ;
	dyn[7] = 100000. ;
	dyn[8] = 80. ;
	dyn[10] = 10. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[428] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[456] = 581.194641 ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans ecomodel;
#else
	DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans ecomodel(0,0,true);
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
	return new DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_trans");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


