//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__RL10_partition1_exp1_H
#define DRLPRUEBAS__RL10_partition1_exp1_H
#include "DRLPRUEBAS.+r+l10.partition1.h"

class DRLPRUEBAS__RL10_partition1_exp1: public DRLPRUEBAS__RL10_partition1
{
public:
	DRLPRUEBAS__RL10_partition1_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__RL10_partition1_exp1* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
