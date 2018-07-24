//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__RL10_design_design_exp_design_H
#define DRLPRUEBAS__RL10_design_design_exp_design_H
#include "DRLPRUEBAS.+r+l10_design.design.h"

class DRLPRUEBAS__RL10_design_design_exp_design: public DRLPRUEBAS__RL10_design_design
{
public:
	DRLPRUEBAS__RL10_design_design_exp_design(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__RL10_design_design_exp_design* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
