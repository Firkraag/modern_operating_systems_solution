# Problem
To a programmer, a system call looks like any other call to a library procedure. Is it important that a programmer know which library procedures result in system calls? Under what circumstances and why?

# Solution
Not important on Windows.

The library calls and the actual system calls are highly decoupled on Windows. Microsoft has defined a set of procedures called the **Win32 API** that programmers are expected to use to get operating system services. This interface is (partially) supported on all versions of Windows since Windows 95. By decoupling the API interface from the actual system calls, Microsoft retains the ability to change the actual system calls in time(even from release to release) without invalidating existing programs.

