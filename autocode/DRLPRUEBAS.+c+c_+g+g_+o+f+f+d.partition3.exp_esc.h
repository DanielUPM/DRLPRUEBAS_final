//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_GG_OFFD_partition3_exp_esc_H
#define DRLPRUEBAS__CC_GG_OFFD_partition3_exp_esc_H
#include "DRLPRUEBAS.+c+c_+g+g_+o+f+f+d.partition3.h"

class DRLPRUEBAS__CC_GG_OFFD_partition3_exp_esc: public DRLPRUEBAS__CC_GG_OFFD_partition3
{
public:
	DRLPRUEBAS__CC_GG_OFFD_partition3_exp_esc(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_GG_OFFD_partition3_exp_esc* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
