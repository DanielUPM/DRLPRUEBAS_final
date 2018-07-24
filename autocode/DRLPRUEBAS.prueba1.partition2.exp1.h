//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__prueba1_partition2_exp1_H
#define DRLPRUEBAS__prueba1_partition2_exp1_H
#include "DRLPRUEBAS.prueba1.partition2.h"

class DRLPRUEBAS__prueba1_partition2_exp1: public DRLPRUEBAS__prueba1_partition2
{
public:
	DRLPRUEBAS__prueba1_partition2_exp1(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__prueba1_partition2_exp1* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
