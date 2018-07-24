//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTransient_H
#define DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTransient_H
#include "DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon.h"

class DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTransient: public DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon
{
public:
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTransient(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTransient* s_current;
private:


// Experiment variables

// experiment functions

};
#endif