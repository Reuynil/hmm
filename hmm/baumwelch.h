#pragma once

#include"hmm.h"
#include"seq.h"

void computeAlpha(HMM&, Seq&, double**);
void computeBeta(HMM&, Seq&, double**);
void computeXi(HMM&, Seq&, double**, double**, double***);
void computeGamma(HMM&, Seq&, double**, double**, double**);
double computeProb(double **, int, int);
void baumWelch(HMM&, Seq&, double);