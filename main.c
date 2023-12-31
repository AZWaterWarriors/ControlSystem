/*
 *
 * Water Warriors Moisture Harvester Control System
 *
 */

#include <stdio.h>

#include "control.h"
#include "rpigpio/electronics.h"

int main(int argc, char *argv[]){

	if(setupio() != 0){ return 1; };
	
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
