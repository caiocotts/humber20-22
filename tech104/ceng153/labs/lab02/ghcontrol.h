
#ifndef GHCONTROL_H
#define GHCONTROL_H
#define SEARCHSTR "serial\t\t"
#define SYSINFOBUFSZ 512

#include <stdio.h>
#include <stdlib.h>

u_int64_t GhGetSerial(void);
void GhDisplayHeader(const char *sname);

#endif
