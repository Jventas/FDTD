/* 
	author: Jventas
	
	Functions to calculate the source function (i.e incident field)
*/

#include "source.h"

/* Global variables (visible only for this file) */
static double delay = 30.0;
static double width = 100.0;
static double cdtds;
/* Calculate source function (gaussian) at given time and position 
	@Param: time = given time
			x = given position
	@Return: value of source at the given time and location
*/

void gaussianSourceInit(Grid *g) {
	cdtds = Cdtds;
}

double gaussianSource (double time, double x) {
	double gaussian = exp(-pow((time-delay-x/cdtds)/width, 2));
	return gaussian;
}
