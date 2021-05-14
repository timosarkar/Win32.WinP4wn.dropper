# Win32.WinP4wn.dropper
LMAO, its WinP4wn! A dead simple way to bypass a companie's Group-Policies.

## Abstract

Win32.WinP4wn is a small dropper that uses an elevation-exploit in Win2k to bypass any **literally ANY** Group-policy. Here is a simple process-guide:

1. WinP4wn will check for the current OS
2. If os is win32 rename the executable to something more harmless.
3. Dropping the NTUSER.DAT Profile and use it to act as a registry hive and load it to reg
4. If os != win32 give a shout out xD
5. Do a gpupdate to fetch the latest changes and force it.
6. Writing regkeys for disabling the windef
7. after elevation melt the current file and open an instance to move the instance to the system32 folder
8. after elevation, modify the HKLM\Software\Microsoft\Windows\CurrentVersion\Run key and add the WinP4wn system32 location
9. give a synflood on NSA Router

## Compiling 

No need for a makefile, just do it manually

```bash
# IMPORTANT! move into c:/temp for local instance 
$ cd %Temp% && mkdir winp4wn && cd winp4wn
$ git clone https://github.com/timo-cmd2/Win32.WinP4wn.dropper.git
$ cd Win32.WinP4wn.dropper-master
$ gcc Win32.WinP4wn.dropper.c -o Win32.WinP4wn.dropper.exe
```

## Things todo

- [x] Writing regkeys for disabling the windef
- [x] after elevation melt the current file and open an instance to move the instance to the system32 folder
- [x] after elevation, modify the HKLM\Software\Microsoft\Windows\CurrentVersion\Run key and add the WinP4wn system32 location
- [ ] give a synflood on NSA ports every 31st of month

# DISCLAIMER

This repository is for research purposes only, the use of this code is your responsibility.

I take NO responsibility and/or liability for how you choose to use any of the source code available here. By using any of the files available in this repository, you understand that you are AGREEING TO USE AT YOUR OWN RISK. Once again, ALL files available here are for EDUCATION and/or RESEARCH purposes ONLY.

Any actions and/or activities related to the material contained within this repository is solely your responsability. Misuse of the information in this repository can result in criminal charges being brought against the persons in question. I will not be held responsible in the event any criminal charges are brought against any individuals misuing the code in this repository to break the law.

This repository does not promote any hacking related activity. All the information in this repository is for educational purposes only.

## Licensing 

CC0 1.0 All rights reserved Timo Sarkar <sartimo10@gmail.com>
