//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+c+c_+g+g_completa.partition1.exp1.h"

DRLPRUEBAS__CC_GG_completa_partition1_exp1* DRLPRUEBAS__CC_GG_completa_partition1_exp1::s_current= NULL;
DRLPRUEBAS__CC_GG_completa_partition1_exp1::DRLPRUEBAS__CC_GG_completa_partition1_exp1(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__CC_GG_completa_partition1(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "exp1";
m_infoExperimentFileName = "DRLPRUEBAS.+c+c_+g+g_completa.partition1.exp1";
m_infoExperimentFileNameExtra = "exp1";
m_infoExperimentDate = "28/06/2018 10:57:39.436000";

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
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::initInternalModels()
{
  DRLPRUEBAS__CC_GG_completa_partition1::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::addExptVariables()
{
varHasEquationInBoundBlock("FlowMeter_1.f_in.W");
varHasEquationInBoundBlock("FlowMeter_1_1.f_in.W");
varHasEquationInBoundBlock("LPRES.Altitude");
varHasEquationInBoundBlock("Injector_F.W");
varHasEquationInBoundBlock("Turbine_ch.m.Power");

}


//Run the experiment code
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::runExperiment()
{
	REPORT_LIST("reportAll", "*", 1) ;
	DEBUG_LEVEL = 4 ;
	eSetErrorAction(1, 5) ;
	eSetErrorAction(2, 5) ;
	TOLTYPE = 1 ;
	TOLERANCE = 1e-06 ;
	STEADY() ;
}

/* Initialisation of defaults for global variables only used in experiment*/
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::initDefaultsExp()
{
	dyn[0] = 10. ;
	dyn[1] = 1000. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[226] = 788. ;
	if (m_boundaryBranch[1] == 0)  
		unkR[230] = 1789. ;
	if (m_boundaryBranch[3] == 0)  
		unkR[435] = 9000. ;
	if (m_boundaryBranch[2] == 0)  
		unkR[396] = 722.652542 ;
	if (m_boundaryBranch[4] == 0)  
		unkR[465] = 29920039.9 ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__CC_GG_completa_partition1_exp1::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__CC_GG_completa_partition1_exp1 ecomodel;
#else
	DRLPRUEBAS__CC_GG_completa_partition1_exp1 ecomodel(0,0,true);
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
	return new DRLPRUEBAS__CC_GG_completa_partition1_exp1(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__CC_GG_completa_partition1_exp1(name,dirInstall,d);
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


