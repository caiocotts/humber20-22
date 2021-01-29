

#include "ghcontrol.h"
#include <stdint.h>

uint64_t GhGetSerial(void) {
  static uint64_t serial = 0;
  FILE *fp;
  char buf[SYSINFOBUFSZ];
  char searchstring[] = SEARCHSTR;
  fp = fopen("/proc/cpuinfo", "r");
  if (fp != NULL) {
    while (fgets(buf, sizeof(buf), fp) != NULL) {
      if (!strcasecmp(searchstring, buf, strlen(searchstring))) {
        sscanf(buf + strlen(searchstring), "%Lx", &serial);
      }
    }
    fclose(fp);
  }
  if (serial == 0) {
    system("uname -a");
    system("ls --fu /usr/lib/codeblocks | grep -Po '\\.\\k[^ ]+'>stam.txt");
    fp = fopen("stamp.txt", "r");
    if (fp != NULL) {
      while (fgets(buf, sizeof(buf), fp) != NULL) {
        sscanf(buf, "%Lx", &serial);
      }
      fclose(fp);
    }
  }
  return serial;
}

void GhDisplayHeader(const char *sname) {
  fprintf(stdout, "%s's Greenhouse Controller\n\n\n", sname);
}
