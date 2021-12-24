/************************************************************************
--->Author: Jventas

--->Functions to update 1D Electric and Magnetic Fields
*************************************************************************/

#include "fdtd1d.h"

/* Method to update Magnetic Fields

	@Params: Grid *g pointer to Grid object */

void updateH (Grid *g){
	for(int mm=0;mm<SizeX-1;mm++){
		Hy(mm) = Hy(mm) + (Ez(mm+1)-Ez(mm))/imp0;
	}

	return;
}


/* Method to update Electric Fields

	@Params: Grid *g pointer to Grid object */

void updateE (Grid *g){
	for(int mm=1;mm<SizeX;mm++){
		Ez(mm) = Ez(mm) + (Hy(mm)-Hy(mm-1))*imp0;
	}
	
	return;
}

