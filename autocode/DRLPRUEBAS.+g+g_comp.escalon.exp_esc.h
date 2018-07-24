//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_escalon_exp_esc_H
#define DRLPRUEBAS__GG_comp_escalon_exp_esc_H
#include "DRLPRUEBAS.+g+g_comp.escalon.h"

class DRLPRUEBAS__GG_comp_escalon_exp_esc: public DRLPRUEBAS__GG_comp_escalon
{
public:
	DRLPRUEBAS__GG_comp_escalon_exp_esc(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__GG_comp_escalon_exp_esc* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
