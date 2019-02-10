# Problem
A file whose file descriptor is `fd` contains the following sequence of bytes: 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5. The following system calls are made:
    
    lseek(fd, 3, SEEK_SET);               
    read(fd, &buffer, 4);
    
where the `lseek` call makes a seek to byte 3 of the file. What does `buffer` contain after
the read has completed?
# Solution
0x01050902

