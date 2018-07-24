//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_OFFD_valid_exp_design_H
#define DRLPRUEBAS__GG_comp_OFFD_valid_exp_design_H
#include "DRLPRUEBAS.+g+g_comp.+o+f+f+d_valid.h"

class DRLPRUEBAS__GG_comp_OFFD_valid_exp_design: public DRLPRUEBAS__GG_comp_OFFD_valid
{
public:
	DRLPRUEBAS__GG_comp_OFFD_valid_exp_design(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__GG_comp_OFFD_valid_exp_design* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
