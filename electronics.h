/*
 *
 * Water Warriors Moisture Harvester Control System
 *
 * Electronics control routines
 *
 */

#ifndef _ELECTRONICS_H
#define _ELECTRONICS_H

int setupio(void);
void fans(int onoff);
void peltier(int onoff);
void fans2(int onoff);

int gpiofd;
unsigned int *gpio;

#endif
