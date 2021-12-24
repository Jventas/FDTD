/* 
	author: Jventas
	version: 1.0

	Function to run FDTD-1D
*/

#include "fdtd1d.h"
#include "source.h"
#include "constants.h"

int main(){
	Grid *g;								// Create grid

	ALLOC_1D(g, 1, Grid);					// Allocate memory for grid
	gridInit(g);							// Initialize grid
	/* Initialize source */
	gaussianSourceInit(g);	

	/* Do time stepping*/
	for(Time = 0; Time<MaxTime; Time++){
		updateH(g);							// Update Magnetic Field
		updateE(g);							// Update Electric Field
		Ez(0) = gaussianSource(Time,0.0);	// Apply source
		printf("%g\n", Ez(50));				// Print Ez(t,50)
	}
	
	return 0;
}
