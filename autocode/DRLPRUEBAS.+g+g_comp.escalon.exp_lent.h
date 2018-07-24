//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_escalon_exp_lent_H
#define DRLPRUEBAS__GG_comp_escalon_exp_lent_H
#include "DRLPRUEBAS.+g+g_comp.escalon.h"

class DRLPRUEBAS__GG_comp_escalon_exp_lent: public DRLPRUEBAS__GG_comp_escalon
{
public:
	DRLPRUEBAS__GG_comp_escalon_exp_lent(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__GG_comp_escalon_exp_lent* s_current;
private:


// Experiment variables
	INTEG_table tab_T;
	INTEG_table tab_p;

// experiment functions

};
#endif
