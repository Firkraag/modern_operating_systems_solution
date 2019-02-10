# Problem
Suppose that a 10MB file is stored on a disk on the same track (track 50) in consecultive sectors. The disk arm is currently situated over track number 100. How long will it take to retrieve this file from the disk? Assume that it takes about 1 ms to move the arm from one cylinder to the next and about 5 ms for the sector where the beginning of the file is stored to rotate under the head. Also, assume that reading occurs at a rate of 200 MB/s.
# Solution
1ms * (100 - 50) + 5ms + (10 * 1000 / 200)ms = 55ms + 50ms = 105ms


