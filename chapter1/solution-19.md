# Problem
Is there any reason why you might want to mount a file system on a nonempty directory? If so, what is it?
# Solution
When the absolute path to a file on the file system is specified in some program source code, you have to mount the file system on that directory, whether it is nonempty or not.



