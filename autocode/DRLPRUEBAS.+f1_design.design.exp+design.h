//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__F1_design_design_expDesign_H
#define DRLPRUEBAS__F1_design_design_expDesign_H
#include "DRLPRUEBAS.+f1_design.design.h"

class DRLPRUEBAS__F1_design_design_expDesign: public DRLPRUEBAS__F1_design_design
{
public:
	DRLPRUEBAS__F1_design_design_expDesign(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__F1_design_design_expDesign* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
