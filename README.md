# Bankers Algorithm

Assignment

Operating Systems
---


### Question
Write a multithreaded program that implements the banker's algorithm.
Create n threads that request and release resources from the bank.
The banker will grant the request only if it leaves the system in a safe state.
It is important that shared data be safe from concurrent access.
To ensure safe access to shared data, you can use mutex locks.


### Solution

 - [Multithreaded Implementation In C](./bankers_algorithm.c)

### Compile Manually

```bash
# compile
gcc bankers_algorithm.c -std=c99 -pthread -o bankers_algorithm

# execute
./bankers_algorithm
```


### Input
```
Number of processes? 5
Number of resources? 3

Currently Available resources (R1 R2 ...)? 3 3 2

Resource allocated to process 1 (R1 R2 ...)? 0 1 0
Resource allocated to process 2 (R1 R2 ...)? 2 0 0
Resource allocated to process 3 (R1 R2 ...)? 3 0 2
Resource allocated to process 4 (R1 R2 ...)? 2 1 1
Resource allocated to process 5 (R1 R2 ...)? 0 0 2

Maximum resource required by process 1 (R1 R2 ...)? 7 5 3
Maximum resource required by process 2 (R1 R2 ...)? 3 2 2
Maximum resource required by process 3 (R1 R2 ...)? 9 0 2
Maximum resource required by process 4 (R1 R2 ...)? 2 2 2
Maximum resource required by process 5 (R1 R2 ...)? 4 3 3
```

### Output
```
Safe Sequence Found : 2  4  5  1  3
Executing Processes...


--> Process 2
	Allocated :   2  0  0
	Needed    :   1  2  2
	Available :   3  3  2
	Resource Allocated!
	Process Code Running...
	Process Code Completed...
	Process Releasing Resource...
	Resource Released!
	Now Available :   5  3  2


--> Process 4
	Allocated :   2  1  1
	Needed    :   0  1  1
	Available :   5  3  2
	Resource Allocated!
	Process Code Running...
	Process Code Completed...
	Process Releasing Resource...
	Resource Released!
	Now Available :   7  4  3


--> Process 5
	Allocated :   0  0  2
	Needed    :   4  3  1
	Available :   7  4  3
	Resource Allocated!
	Process Code Running...
	Process Code Completed...
	Process Releasing Resource...
	Resource Released!
	Now Available :   7  4  5


--> Process 1
	Allocated :   0  1  0
	Needed    :   7  4  3
	Available :   7  4  5
	Resource Allocated!
	Process Code Running...
	Process Code Completed...
	Process Releasing Resource...
	Resource Released!
	Now Available :   7  5  5


--> Process 3
	Allocated :   3  0  2
	Needed    :   6  0  0
	Available :   7  5  5
	Resource Allocated!
	Process Code Running...
	Process Code Completed...
	Process Releasing Resource...
	Resource Released!
	Now Available :  10  5  7


All Processes Finished
```

### TODO
 
 - Makefile


