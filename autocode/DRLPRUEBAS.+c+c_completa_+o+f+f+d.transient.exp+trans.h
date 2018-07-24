//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_completa_OFFD_transient_expTrans_H
#define DRLPRUEBAS__CC_completa_OFFD_transient_expTrans_H
#include "DRLPRUEBAS.+c+c_completa_+o+f+f+d.transient.h"

class DRLPRUEBAS__CC_completa_OFFD_transient_expTrans: public DRLPRUEBAS__CC_completa_OFFD_transient
{
public:
	DRLPRUEBAS__CC_completa_OFFD_transient_expTrans(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_completa_OFFD_transient_expTrans* s_current;
private:


// Experiment variables

// experiment functions

};
#endif