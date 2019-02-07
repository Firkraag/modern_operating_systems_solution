# Problem
Consider a computer system that has cache memory, main memory (RAM) and disk, and an operating system that uses virtual memory. It takes 1 nsec to access a word from the cache, 10 nsec to access a word from the RAM, and 10 ms to access a word from the disk. If the cache hit rate is 95% and main memory hit rate (after a cache miss) is 99%, what is the average time to access a word?
# Solution
95% * 1ns + 5% * 99% * 10ns  + 5% * 1% * 10ms = 0.95ns + 0.495ns + 5000ns = 5001.445ns


