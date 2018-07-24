//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_lent_H
#define DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_lent_H
#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3.h"

class DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_lent: public DRLPRUEBAS__CC_Cool_TBOFFD_partition3
{
public:
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_lent(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_lent* s_current;
private:


// Experiment variables
	INTEG_table tab_T;
	INTEG_table tab_p;

// experiment functions

};
#endif
