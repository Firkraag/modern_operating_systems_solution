# Problem
What is the essential difference between a block special file and a character special file?
# Solution
Block special files are used to model devices that consist of a collection of randomly adressable blocks, such as disks. By opening a block special file and reading, say, block 4, a program can directly access the fourth block on the device, without regard to the structure of the file system contained on it. Similarly, character special files are used to model printers, moderns, and other devices that accept or output a character stream. 


