## setup 

From where i copied the io_uring.h file? Copied from node3 which has ubuntu 20 distribution. Node3 had this file in /usr/include/linux/io_uring.h 
It is now copied in /home/atr/local/include and use that in the build path -I  

For the libfiles, copied syscall.[ch] files? to give system call implementation to the io_uringcopy. 

So it needs 
  * io_uring header 
  * syscall implementation details 

```bash
gcc iouring_copy.c syscall.c -I /home/atr/local/include/
```
 
gcc lib compilation 
```bash
gcc libiouring_copy.c -I /home/atr/local/include/ -luring -L /home/atr/local/lib/
``` 
 
 The depth determines the entires: send queue entries becomes the next power of two, and the 
 completion queue becomes the twice the size? (why?) there is no send/recv queue 2x situation like in the network. 
 
 
 // what is happeningh here? atr: why both cq_ptr and sq_ptr share the same start address??