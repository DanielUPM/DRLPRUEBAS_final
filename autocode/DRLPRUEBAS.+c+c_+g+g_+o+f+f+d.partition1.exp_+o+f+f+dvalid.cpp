//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition1.exp_+o+f+f+dvalid.h"

DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid* DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::s_current= NULL;
DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__CC_GG_OFFD_partition1(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp_OFFDvalid";
m_infoExperimentFileName = "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition1.exp_+o+f+f+dvalid";
m_infoExperimentFileNameExtra = "exp_+o+f+f+dvalid";
m_infoExperimentDate = "26/06/2018 10:51:55.932000";

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
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::initInternalModels()
{
  DRLPRUEBAS__CC_GG_OFFD_partition1::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::addExptVariables()
{
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Turbine_ch.m.N");

}


//Run the experiment code
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::runExperiment()
{
	REPORT_LIST("reportAll", "*", 1) ;
	DEBUG_LEVEL = 4 ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	STEADY() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 1. ;
	dyn[3] = 2500. ;
	dyn[4] = 10. ;
	dyn[5] = 10. ;
	dyn[6] = 10. ;
	dyn[7] = 1000. ;
	dyn[8] = 10. ;
	dyn[10] = 10. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[428] = 9000. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[456] = 581.194641 ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid ecomodel;
#else
	DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid ecomodel(0,0,true);
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
	return new DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid(name,dirInstall,d);
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
	sprintf(experimentName,"%s","exp_OFFDvalid");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


