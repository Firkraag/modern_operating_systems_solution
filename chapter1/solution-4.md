# Problem
To use cache memory, main memory is divided into cache lines, typically 32 or 64 bytes long. An entire cache line is cached at once. What is the advantage of caching an entire line instead of a single byte or word at a time?
# Solution
Well-written computer programs tend to exhibit good locality. That is, they tend to reference data items that are near other referenced data items, or that were recently referenced themselves. 

So it is very likely to reduce memory IO and speed up program when caching an entire line instead of a single byte or word at a time.

