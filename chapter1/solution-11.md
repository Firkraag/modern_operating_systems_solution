# Problem
A 255-GB disk has 65,536 cylinders with 255 sectors per track and 512 bytes per sec- tor. How many platters and heads does this disk have? Assuming an average cylinder seek time of 11 ms, average rotational delay of 7 msec and reading rate of 100 MB/sec, calculate the average time it will take to read 400 KB from one sector.

# Solution
255 * 1024 * 1024 * 1024 = platter * 2 * 65536 * 255 * 512
so platter = 16

The average time is 11ms + 7ms + (1000* 400/1000 * 1024)ms = 18.39ms


