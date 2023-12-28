/*
 *
 * Water Warriors Moisture Harvester Control System
 *
 */

#include <stdio.h>

#include "harvester.h"
#include "electronics.h"

int main(int argc, char *argv[]){

	for(;;){

		fans(1);
		sleep(CYC_ABSORB);
		fans(0);

		peltier(1);
		fans2(1);
		sleep(CYC_DEHYDR);
		peltier(0);
		fans2(0);

	};
	
	return 0;

};
