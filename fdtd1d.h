/* 
	author: Jventas
	
	Header with auxiliary definitions for FDTD-1D method
*/

#ifndef _FDTD1D_H
#define _FDTD1D_H

#include <stdio.h>
#include <stdlib.h>
#include "constants.h"

/* Definition of Grid structure */
struct Grid {
	double *ez;
	double *hy;
	int sizeX;
	int time, maxTime;
	double cdtds;
};

typedef struct Grid Grid;

/*Memory Allocation macro*/
#define ALLOC_1D(PNTR, NUM, TYPE)								 	\
	PNTR = (TYPE *)calloc(NUM, sizeof(TYPE));						\
	if (!PNTR) {													\
		perror("ALLOC_1D");											\
		fprintf(stderr,												\
			"Allocation failed for " #PNTR ". Terminating...\n");	\
			exit(-1);											 	\
	}

/* Macros for accessing arrays in the grid */
#define Hy(MM)		g->hy[MM]
#define Ez(MM)		g->ez[MM]
#define SizeX		g->sizeX
#define MaxTime 	g->maxTime
#define Time		g->time
#define Cdtds		g->cdtds

/* Function declarations */
void gridInit(Grid *g);
void updateH(Grid *g);
void updateE(Grid *g);

#endif
