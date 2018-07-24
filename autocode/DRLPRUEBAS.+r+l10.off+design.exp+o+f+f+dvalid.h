//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__RL10_offDesign_expOFFDvalid_H
#define DRLPRUEBAS__RL10_offDesign_expOFFDvalid_H
#include "DRLPRUEBAS.+r+l10.off+design.h"

class DRLPRUEBAS__RL10_offDesign_expOFFDvalid: public DRLPRUEBAS__RL10_offDesign
{
public:
	DRLPRUEBAS__RL10_offDesign_expOFFDvalid(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__RL10_offDesign_expOFFDvalid* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
