//==================================================================
// Code generated automatically
// Description: Experiment class header 
//==================================================================
#ifndef DRLPRUEBAS__RL10_respuesta_cargas_exp3_H
#define DRLPRUEBAS__RL10_respuesta_cargas_exp3_H
#include "DRLPRUEBAS.+r+l10.respuesta_cargas.h"

class DRLPRUEBAS__RL10_respuesta_cargas_exp3: public DRLPRUEBAS__RL10_respuesta_cargas
{
public:
	DRLPRUEBAS__RL10_respuesta_cargas_exp3(const char* mgr= NULL,const char* installDir=NULL,bool dmode=false);
public:
	virtual void runExperiment();
	virtual void addExptVariables();
	virtual void initDefaultsLibraryGlobalsInExp();
	virtual void initDefaultsExp();
	virtual void evalBoundsExp(double TIME);
	virtual void initDelaysExpt();
	virtual void initInternalModels();

	static DRLPRUEBAS__RL10_respuesta_cargas_exp3* s_current;
private:


// Experiment variables
	INTEG_table tab_T_F;
	INTEG_table tab_p_F;
	INTEG_table tab_T_O;
	INTEG_table tab_p_O;

// experiment functions

};
#endif
