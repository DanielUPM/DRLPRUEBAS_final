//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_CJ_completa_design_expSteady_H
#define DRLPRUEBAS__CC_CJ_completa_design_expSteady_H
#include "DRLPRUEBAS.+c+c_+c+j_completa.design.h"

class DRLPRUEBAS__CC_CJ_completa_design_expSteady: public DRLPRUEBAS__CC_CJ_completa_design
{
public:
	DRLPRUEBAS__CC_CJ_completa_design_expSteady(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_CJ_completa_design_expSteady* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
