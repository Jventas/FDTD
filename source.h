/* 
	author: Jventas
	
	Header file for source.c
*/

#ifndef _SOURCE_
#define _SOURCE_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "fdtd1d.h"

/* Function headers*/
void gaussianSourceInit (Grid *g);
double gaussianSource (double time, double x);

#endif
