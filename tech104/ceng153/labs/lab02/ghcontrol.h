
#ifndef GHCONTROL_H
#define GHCONTROL_H
#include <stdint.h>


#define SEARCHSTR "serial\t\t"
#define SYSINFOBUFSZ 512
#define GHUPDATE 2000
 

int GhGetRandom(int range);
uint64_t GhGetSerial(void);
void GhDisplayHeader(const char *sname);
void GhDelay(int milliseconds);

#endif
