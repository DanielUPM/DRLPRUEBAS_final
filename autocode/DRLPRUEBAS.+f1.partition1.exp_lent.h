//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__F1_partition1_exp_lent_H
#define DRLPRUEBAS__F1_partition1_exp_lent_H
#include "DRLPRUEBAS.+f1.partition1.h"

class DRLPRUEBAS__F1_partition1_exp_lent: public DRLPRUEBAS__F1_partition1
{
public:
	DRLPRUEBAS__F1_partition1_exp_lent(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__F1_partition1_exp_lent* s_current;
private:


// Experiment variables
	INTEG_table tab_A;

// experiment functions

};
#endif
