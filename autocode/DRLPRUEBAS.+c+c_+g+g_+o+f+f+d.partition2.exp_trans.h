//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans_H
#define DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans_H
#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition2.h"

class DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans: public DRLPRUEBAS__CC_GG_OFFD_partition2
{
public:
	DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_GG_OFFD_partition2_exp_trans* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
