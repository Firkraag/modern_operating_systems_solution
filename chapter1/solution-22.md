# Problem
Can the
`count = write(fd, buffer, nbytes);`
call return any value in `count` other than `nbytes`? If so, why?

# Solution
Yes,  the number of bytes written may be less than count if, for example, there is insufficient space on the underlying physical medium, or the RLIMIT_FSIZE resource limit is encountered.


