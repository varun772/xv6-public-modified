COMMANDS TO EXECUTE ARE:

1.make #just to compile them
2.make #qemu for getting into qemu in default or round robin mode
3.make qemu SCHEDULER=FCFS #to run fcfs
4.make qemu SCHEDULER=pbs #to run pbs
5.make qemu SCHEDULER=MLFQ #to run MLFQ

EXPLANATION TO WHAT AND WHERE I HAVE DONE ASKED IN THE ASSIGNMENT:

1.int waitx(int* wtime, int* rtime) :

The two arguments provided are pointers one is wait time and other is clock ticks when process is going
on and only two lines are changed for calculatinf these in normal wait function and appropriate changes are made to
proc.h,syscall.c,user.h,usys.S,syscall.h,syscall.c,sysproc.c,defs.h,proc.h. files accordingly
Here waiting time & running time of a process are calculated.

For tesing this a time.c file is added we have to execute time "argument" the argument can be added one or it can be already existing one in xv6.

2.int ps()
This command is used to know the state of the process its wait time,run time,process are printed.For mlfq process we add 
q[i] where i is between 0 to 4.

3.set_prior()
This is added so that we can change the priority order.we have to pass process id and priority number to which the respective pid should be changed.

4.First come First served(FCFS)
This is done in scheduler function in proc.c file.
This is a simple scheduling algorithm and it process in the way they have arrived in the present queue.It is overhead scheduling and once if a prcess gets terminated then only we can switch. 

5.PRIORITY BASED SCHEDULING
Finding the least priority process and running it.
Iterating through the table to run processes which have least priotrity and running them as RR manner.
priority can be changed through setPriority command.


