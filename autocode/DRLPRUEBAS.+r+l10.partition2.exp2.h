//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__RL10_partition2_exp2_H
#define DRLPRUEBAS__RL10_partition2_exp2_H
#include "DRLPRUEBAS.+r+l10.partition2.h"

class DRLPRUEBAS__RL10_partition2_exp2: public DRLPRUEBAS__RL10_partition2
{
public:
	DRLPRUEBAS__RL10_partition2_exp2(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__RL10_partition2_exp2* s_current;
private:


// Experiment variables
	INTEG_table tab_p;

// experiment functions

};
#endif
