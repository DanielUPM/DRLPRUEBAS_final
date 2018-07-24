//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_Transient_exp1_H
#define DRLPRUEBAS__CC_Cool_OFFD_Transient_exp1_H
#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+transient.h"

class DRLPRUEBAS__CC_Cool_OFFD_Transient_exp1: public DRLPRUEBAS__CC_Cool_OFFD_Transient
{
public:
	DRLPRUEBAS__CC_Cool_OFFD_Transient_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_OFFD_Transient_exp1* s_current;
private:


// Experiment variables

// experiment functions

};
#endif