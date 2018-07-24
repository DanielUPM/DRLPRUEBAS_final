//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__F1_offDesign_expOffDesign_H
#define DRLPRUEBAS__F1_offDesign_expOffDesign_H
#include "DRLPRUEBAS.+f1.off+design.h"

class DRLPRUEBAS__F1_offDesign_expOffDesign: public DRLPRUEBAS__F1_offDesign
{
public:
	DRLPRUEBAS__F1_offDesign_expOffDesign(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__F1_offDesign_expOffDesign* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
