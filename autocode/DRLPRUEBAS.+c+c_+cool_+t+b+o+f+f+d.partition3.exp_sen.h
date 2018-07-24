//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_sen_H
#define DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_sen_H
#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition3.h"

class DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_sen: public DRLPRUEBAS__CC_Cool_TBOFFD_partition3
{
public:
	DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_sen(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_TBOFFD_partition3_exp_sen* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
