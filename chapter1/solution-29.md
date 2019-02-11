# Problem
Figure 1-23 shows that a number of UNIX system calls have no Win32 API equivalents. For each of the calls listed as having no Win32 equivalent, what are the consequences for a programmer of converting a UNIX program to run under Windows?
# Solution
- For `execve`, `CreateProcess` on Windows is a combination of `fork` and `execve` on UNIX.
- For `link`, the programmer will not be able to duplicate files and have two files in different places refer to the same exact file.
- For `mount`/`umount`, you have to make sure the device appears as a disk drive and modify path to file on the device in source code accordingly.
- For `chmod`, Win32 does not support security
- For `kill`, Win32 does not support signal.


