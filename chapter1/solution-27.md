# Problem
Modern operating systems decouple a process address space from the machine’s physical memory. List two advantages of this design.
# Solution
This design provides three important capabilities:

1. It uses main memory efficiently by treating it as a cache for an address space stored on disk, keeping only the active areas in main memory, and transferring data back and forth between disk and memory as needed. 
2. It simplifies memory management by providing each process with a uniform address space.
3. It protects the address space of each process from corruption by other processes.


