/*
 *
 * Water Warriors Moisture Harvester Control System
 *
 * Electronics control routines
 *
 */
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

#include "electronics.h"

int setupio(void);
void fans(int onoff);
void peltier(int onoff);
void fans2(int onoff);

int gpiofd;
unsigned int *gpio;

int setupio(){

  gpiofd = open("/dev/gpiomem", O_RDWR);
	if (gpiofd < 0) { return -1; };

	gpio = (unsigned int *)mmap(0, 4096, PROT_READ+PROT_WRITE, MAP_SHARED, gpiofd, 0);
	
	return 0;

};

void fans(int onoff){



};

void peltier(int onoff){



};

void fans2(int onoff){



};
