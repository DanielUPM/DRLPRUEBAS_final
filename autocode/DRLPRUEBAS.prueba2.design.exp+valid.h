//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__prueba2_design_expValid_H
#define DRLPRUEBAS__prueba2_design_expValid_H
#include "DRLPRUEBAS.prueba2.design.h"

class DRLPRUEBAS__prueba2_design_expValid: public DRLPRUEBAS__prueba2_design
{
public:
	DRLPRUEBAS__prueba2_design_expValid(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__prueba2_design_expValid* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
