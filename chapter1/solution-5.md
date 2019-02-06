# Problem
On early computers, every byte of data read or written was handled by the CPU (i.e., there was no DMA). What implications does this have for multiprogramming?
# Solution
If every byte of data read or written was handled by the CPU, then CPU is tied up polling the device and other processes have no chance of executing.



