#ifndef BATTERY_H
#define BATTERY_H

#define SIZE 50

void capacity();
void status();
void energy_full();
void energy_now();
void handleSignal(int signal);

#endif
