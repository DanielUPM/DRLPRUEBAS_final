//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_TBOFFD_partition1_expvalid2_H
#define DRLPRUEBAS__CC_Cool_TBOFFD_partition1_expvalid2_H
#include "DRLPRUEBAS.+c+c_+cool_+t+b+o+f+f+d.partition1.h"

class DRLPRUEBAS__CC_Cool_TBOFFD_partition1_expvalid2: public DRLPRUEBAS__CC_Cool_TBOFFD_partition1
{
public:
	DRLPRUEBAS__CC_Cool_TBOFFD_partition1_expvalid2(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_TBOFFD_partition1_expvalid2* s_current;
private:


// Experiment variables

// experiment functions

};
#endif
