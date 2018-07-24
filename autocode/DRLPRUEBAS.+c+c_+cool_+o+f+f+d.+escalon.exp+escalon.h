//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_Escalon_expEscalon_H
#define DRLPRUEBAS__CC_Cool_OFFD_Escalon_expEscalon_H
#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+escalon.h"

class DRLPRUEBAS__CC_Cool_OFFD_Escalon_expEscalon: public DRLPRUEBAS__CC_Cool_OFFD_Escalon
{
public:
	DRLPRUEBAS__CC_Cool_OFFD_Escalon_expEscalon(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_OFFD_Escalon_expEscalon* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
