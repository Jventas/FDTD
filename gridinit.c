/************************************************************************
--->Author: Jventas

--->Functions to initalize the grid structure
*************************************************************************/

#include "fdtd1d.h"

void gridInit (Grid *g){
	SizeX = 200;		// Set spatial size (in x) of the grid
	MaxTime = 250;		// Duration of the simulation
	Cdtds = 1.0;		// Courant number Sc = c*dt/dx

	ALLOC_1D(g->ez, SizeX, double); // Memory allocation for Ez
	ALLOC_1D(g->hy, SizeX, double); // Memory allocation for Hy
	
	return;
}

