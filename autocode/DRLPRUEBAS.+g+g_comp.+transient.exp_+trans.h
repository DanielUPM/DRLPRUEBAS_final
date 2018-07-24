//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_Transient_exp_Trans_H
#define DRLPRUEBAS__GG_comp_Transient_exp_Trans_H
#include "DRLPRUEBAS.+g+g_comp.+transient.h"

class DRLPRUEBAS__GG_comp_Transient_exp_Trans: public DRLPRUEBAS__GG_comp_Transient
{
public:
	DRLPRUEBAS__GG_comp_Transient_exp_Trans(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__GG_comp_Transient_exp_Trans* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
