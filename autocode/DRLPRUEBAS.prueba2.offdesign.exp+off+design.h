//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__prueba2_offdesign_expOffDesign_H
#define DRLPRUEBAS__prueba2_offdesign_expOffDesign_H
#include "DRLPRUEBAS.prueba2.offdesign.h"

class DRLPRUEBAS__prueba2_offdesign_expOffDesign: public DRLPRUEBAS__prueba2_offdesign
{
public:
	DRLPRUEBAS__prueba2_offdesign_expOffDesign(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__prueba2_offdesign_expOffDesign* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
