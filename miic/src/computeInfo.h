#ifndef _COMPUTEINFO_H_
#define _COMPUTEINFO_H_

int getDVect( int* myPtrAllLevels, int* myPtrVarIdx, int myNbrAllVar, int* ioPtrDVectVar );
int computeInfoAndCplx(  int *myNxyui, int *myDVect, int *myLevels, int *myVarIdx, int mySSize, int mySSizeEff, int myNbrVar, double* infoAndCplx, int myCplxType, double* );
double computeLogC( int N, int r, double*);
double compute_rescaledLogC( int sampleSize, int sampleSizeEff, int N, int r, double* );
double compute_LogC_C2( int N, int r, double* c2terms);

#endif /* _COMPUTEINFO_H_ */
