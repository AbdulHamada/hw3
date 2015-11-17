// hw3_statistics.cpp : Defines the entry point for the console application.
//Visual Studio 2013.

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <cstdlib> //This header defines several general purpose functions, including dynamic memory management, random number generation, communication with the environment, integer arithmetics, searching, sorting and converting.//
				   //http://www.cplusplus.com/reference/cstdlib/ //
#include<ctime>

using namespace std;

//--------------------------------------------------
// plenty of lines here
void F_rand(double*x, const int N){
	for (int i = 0; i < N; i++){
		
		x[i] =  rand()/double (RAND_MAX) ;

		}
}
void F_stat(double* x, double& mean, double& var, const int N){
	mean = 0;
	var = 0;
	for (int i = 0; i < N; i++){
		mean += x[i];
		}
	mean /= N;
		for (int i = 0; i < N; i++){
		var += pow((x[i] - mean), 2);
			}
	var /= N;
}
//--------------------------------------------------


int main(){
	
	const int N = 100;
	double x[N];
	double mean, var;
	srand(time(0));
	// Some lines here....
	F_rand(x, N);
	F_stat(x, mean, var, N);

	cout << "Mean = " << mean << endl;
	cout << "Variance = " << var << endl;
	cin.get();
	return 0;
}
