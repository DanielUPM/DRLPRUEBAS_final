//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_rec_rap_H
#define DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_rec_rap_H
#include "DRLPRUEBAS.+c+c_caso_escalon_+o+f+f+d.caso_escalon.h"

class DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_rec_rap: public DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon
{
public:
	DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_rec_rap(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_caso_escalon_OFFD_caso_escalon_expTrans_rec_rap* s_current;
private:


// Experiment variables
	INTEG_table tab_T;
	INTEG_table tab_p;

// experiment functions

};
#endif
