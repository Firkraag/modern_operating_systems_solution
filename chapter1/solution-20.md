# Problem
For each of the following system calls, give a condition that causes it to fail: fork, exec, and unlink.
# Solution
- fork: exceed the maximum total number of processes under execution.
- exec: the file which is to be executed does not exist.
- unlink: the file does not exist

