//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_expOffD_H
#define DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_expOffD_H
#include "DRLPRUEBAS.+c+c_completa_+o+f+f+d.off+design_steady.h"

class DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_expOffD: public DRLPRUEBAS__CC_completa_OFFD_offDesign_steady
{
public:
	DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_expOffD(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_completa_OFFD_offDesign_steady_expOffD* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
