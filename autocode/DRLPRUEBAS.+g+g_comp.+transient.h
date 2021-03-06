//==================================================================
// Code generated automatically
// Description: Partition class header
//==================================================================
#ifndef DRLPRUEBAS__GG_comp_Transient_H
#define DRLPRUEBAS__GG_comp_Transient_H

#include <INTEG_simula.h>

class DRLPRUEBAS__GG_comp_Transient: public INTEG_simula
{
public:
	// methods to cope with the continuous part
	DRLPRUEBAS__GG_comp_Transient(const char *mgr=NULL,const char *dirInstall=NULL,bool dmode=false);
	virtual void copyBack( double dyn[], double ldr[] );
	virtual void initBlocks( double dyn[], double ldr[], double *_time );
	virtual void fres( double *_time, double dyn[], double der[], double res[] );

	// methods to cope with the discrete part
	virtual void checkAsserts( double *_time);
	virtual void constraints( double *_time, double ev[],double dyn[],double ldr[]);
	virtual void evalWhen(double *_time, bool w[],bool cont[] );
	virtual void executeWhen(double *_time,  int index );
	virtual void evalZones( double *_time,  int branchZone[],bool cont[] );
	virtual INTEG_simula::t_initEvent* initEvents(int& nEvents,int& nWhen,int& nZones,int& nConstraints, const char**& whenTxt,const char**& zoneTxt,int *&zoneTxtIndex);
	virtual void initDelays();
	virtual void initInternalModels();

	// Pointer use for numerical wrapper
	static DRLPRUEBAS__GG_comp_Transient* s_current;
public: 
	//EL functions declaration
	void LPRES__Init_fluid(const int & fluid_name,double fluid[]);
	double MATH__min(double x,double y);
	double LPRES__cp(double fluid[]);
	int LPRES__Know_fluid(double fluid[]);
	int LPRES__State(double fluid[]);
	double LPRES__M(double fluid[]);
	double LPRES__R(double fluid[]);
	double LPRES__cv(double fluid[]);
	double MATH__max(double x,double y);
	double LPRES__gamma(double fluid[]);
	double LPRES__FGAMMA(double fluid[]);
	double LPRES__rho(double fluid[]);
	double LPRES__visc(double fluid[]);
	double LPRES__Geopotential_Altitude(const double & z);
	double LPRES__ISA_Pressure(const double & z);

void fbox1(double *_time,double dyn[],double ldr[],double res[]);
static void fcn1(int *n, double x[], double residues[], int *iflag);
void fhyb1(double dyn[], double ldr[], double tol, int n, int itmax);
void fbox2(double *_time,double dyn[],double ldr[],double res[]);
static void fcn2(int *n, double x[], double residues[], int *iflag);
void fhyb2(double dyn[], double ldr[], double tol, int n, int itmax);
void fbox3(double *_time,double dyn[],double ldr[],double res[]);
static void fcn3(int *n, double x[], double residues[], int *iflag);
void fhyb3(double dyn[], double ldr[], double tol, int n, int itmax);
void fbox4(double *_time,double dyn[],double ldr[],double res[]);
static void fcn4(int *n, double x[], double residues[], int *iflag);
void fhyb4(double dyn[], double ldr[], double tol, int n, int itmax);

bool gst(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);

bool gsi(unsigned int* size, unsigned int* chunkSize, const char*** chunkedStr);
};
#endif
