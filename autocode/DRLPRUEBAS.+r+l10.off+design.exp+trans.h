//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__RL10_offDesign_expTrans_H
#define DRLPRUEBAS__RL10_offDesign_expTrans_H
#include "DRLPRUEBAS.+r+l10.off+design.h"

class DRLPRUEBAS__RL10_offDesign_expTrans: public DRLPRUEBAS__RL10_offDesign
{
public:
	DRLPRUEBAS__RL10_offDesign_expTrans(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__RL10_offDesign_expTrans* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
