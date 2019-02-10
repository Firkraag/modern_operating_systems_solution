# Problem
Why is the process table needed in a timesharing system? Is it also needed in personal
computer systems running UNIX or Windows with a single user?
# Solution
When a process is suspended temporarily to start running another process, it must be restarted in exactly the same state it had when it was stopped. This means that all information about the process must be explicitly saved somewhere during the suspension. In many operating systems, all the information about each process, other than the contents of its own address space, is stored in an operating system table called the **process table**, which is an array of structures,  one for each process currently in existence.

It is also need in systems with a single user, because one single user has multiple processes running concurrently, like web browser, word processing, music player.


