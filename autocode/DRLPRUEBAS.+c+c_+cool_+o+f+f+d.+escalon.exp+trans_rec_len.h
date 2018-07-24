//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__CC_Cool_OFFD_Escalon_expTrans_rec_len_H
#define DRLPRUEBAS__CC_Cool_OFFD_Escalon_expTrans_rec_len_H
#include "DRLPRUEBAS.+c+c_+cool_+o+f+f+d.+escalon.h"

class DRLPRUEBAS__CC_Cool_OFFD_Escalon_expTrans_rec_len: public DRLPRUEBAS__CC_Cool_OFFD_Escalon
{
public:
	DRLPRUEBAS__CC_Cool_OFFD_Escalon_expTrans_rec_len(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__CC_Cool_OFFD_Escalon_expTrans_rec_len* s_current;
private:


// Experiment variables
	INTEG_table tab_T;
	INTEG_table tab_p;

// experiment functions

};
#endif