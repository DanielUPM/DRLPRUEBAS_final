//==================================================================
// Code generated automatically
// Description: Experiment class body 
//==================================================================
#include "DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon.exp+trans_sin.h"

DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin* DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::s_current= NULL;
DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin(const char* mgr,const char* installDir,bool dmode):DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon(mgr,installDir,dmode)
{
m_infoLibraryName = "DRLPRUEBAS";
m_infoExperimentName = "expTrans_sin";
m_infoExperimentFileName = "DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon.exp+trans_sin";
m_infoExperimentFileNameExtra = "exp+trans_sin";
m_infoExperimentDate = "14/06/2018 12:43:58.659000";

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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::initInternalModels()
{
  DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon::initInternalModels();
}


//Add the experiment variables to the symbols table
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::addExptVariables()
{
varHasEquationInBoundBlock("LH2_circuit.Tt");
varHasEquationInBoundBlock("LH2_circuit.pt");
varHasEquationInBoundBlock("LPRES.Altitude");

}


//Run the experiment code
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::runExperiment()
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
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::initDefaultsLibraryGlobalsInExp()
{
}

/* Initialisation of variables in experiment*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::initDefaultsExp()
{
	dyn[0] = 1. ;
	dyn[1] = 2500. ;
	dyn[2] = 2. ;
	dyn[3] = 10. ;
	dyn[4] = 2500. ;
	dyn[5] = 2. ;
}

/* Initialisation of boundaries*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::evalBoundsExp(double TIME)
{
	if (m_boundsLaw)
		{(*m_boundsLaw)(TIME); return;}
	if (m_boundaryBranch[0] == 0)  
		unkR[244] = 100. * sin(2. * cteR[6]/0.032 * TIME - cteR[6]/2.) + 251.106354 ;
	if (m_boundaryBranch[1] == 0)  
		unkR[246] = 100000. * sin(2. * cteR[6]/0.032 * TIME - cteR[6]/2.) + 3594748.63 ;
	if (m_boundaryBranch[2] == 0)  
		unkR[248] = 9000. ;
}
/* Initialisation of delays in experiments*/
void DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin::initDelaysExpt()
{
}
#ifndef SIMULA_USE_GRAPHICAL_MAIN
/* It creates a main program to begin the simulation */
int main( int argc, char * argv[] )
{
try
{
#ifndef SIMULA_USE_DECK_SYMBOLS
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin ecomodel;
#else
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin ecomodel(0,0,true);
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
	return new DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin(name,dirInstall,d);
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
		INTEG_simula * tmp = new DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_sin(name,dirInstall,d);
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
	sprintf(experimentName,"%s","expTrans_sin");
	isDebug = false;
}

#ifndef SIMULA_USE_DECK_SYMBOLS
	extern "C" INTEG_simula* getDeck() {return 0;};
	extern "C" void delDeck(INTEG_simula *obj) {return;}
#endif //SIMULA_USE_DECK_SYMBOLS


