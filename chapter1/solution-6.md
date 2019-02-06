# Problem
Instructions related to accessing I/O devices are typically privileged instructions, that is, they can be executed in kernel mode but not in user mode. Give a reason why these instructions are privileged.
# Solution
If instructions related to accessing I/O devices can run in user mode, then any program can read and write to arbitrary position of any disk, which is a total disaster, so we need to run those instructions in kernel modes and write system calls to restrict unlimited access to I/O devices.

