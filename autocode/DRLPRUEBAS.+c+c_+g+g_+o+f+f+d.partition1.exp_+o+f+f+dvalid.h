//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid_H
#define DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid_H
#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition1.h"

class DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid: public DRLPRUEBAS__CC_GG_OFFD_partition1
{
public:
	DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_GG_OFFD_partition1_exp_OFFDvalid* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
