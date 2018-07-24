//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__Camara_comb_completa_design_expDesign_H
#define DRLPRUEBAS__Camara_comb_completa_design_expDesign_H
#include "DRLPRUEBAS.+camara_comb_completa.design.h"

class DRLPRUEBAS__Camara_comb_completa_design_expDesign: public DRLPRUEBAS__Camara_comb_completa_design
{
public:
	DRLPRUEBAS__Camara_comb_completa_design_expDesign(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__Camara_comb_completa_design_expDesign* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
