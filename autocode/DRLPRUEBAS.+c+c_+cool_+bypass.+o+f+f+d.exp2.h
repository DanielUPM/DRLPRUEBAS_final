//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_Bypass_OFFD_exp2_H
#define DRLPRUEBAS__CC_Cool_Bypass_OFFD_exp2_H
#include "DRLPRUEBAS.+c+c_+cool_+bypass.+o+f+f+d.h"

class DRLPRUEBAS__CC_Cool_Bypass_OFFD_exp2: public DRLPRUEBAS__CC_Cool_Bypass_OFFD
{
public:
	DRLPRUEBAS__CC_Cool_Bypass_OFFD_exp2(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_Bypass_OFFD_exp2* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
