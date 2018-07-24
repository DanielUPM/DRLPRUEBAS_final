//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__F1_partition1_exp_esc_H
#define DRLPRUEBAS__F1_partition1_exp_esc_H
#include "DRLPRUEBAS.+f1.partition1.h"

class DRLPRUEBAS__F1_partition1_exp_esc: public DRLPRUEBAS__F1_partition1
{
public:
	DRLPRUEBAS__F1_partition1_exp_esc(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__F1_partition1_exp_esc* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
