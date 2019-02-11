# Problem
In the example given in Fig. 1-17, the library procedure is called `read` and the system call itself is called `read`. Is it essential that both of these have the same name? If not, which one is more important?
# Solution
Not essential. The library procedure is more important. 

Since the actual mechanics of issuing a system call are highly dependent and often must be expressed in assembly code, a procedure library is provided to make it possible to make system calls from C programs and often from other languages as well. So the procedure library is often the interface between operating system and application program instead of system call, like Windows.


