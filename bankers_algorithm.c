// Write a multithreaded program that implements the banker's algorithm. Create n threads that request and release resources from the bank. The banker will grant the request only if it leaves the system in a safe state. It is important that shared data be safe from concurrent access. To ensure safe access to shared data, you can use mutex locks.

#include <stdio.h>
#include <pthread.h>

/* Sample Test Case

   no. of processes = 5
   no. of resources = 3

   available resources = 3 3 2

   allocation matrix
   [ 0 1 0
     2 0 0
     3 0 2
     2 1 1
     0 0 2 ]

   maximum required resources matrix
   [ 7 5 3
     3 2 2
     9 0 2
     2 2 2
     4 3 3 ]


   need matrix (to calculate) {max - alloc}
   [ 7 4 3
     1 2 2
     6 0 0
     0 1 1
     4 3 1 ]

*/

void getSafeSeq() {
	//need access to variables
}

int main(int argc, char** argv) {
	// input parsing	
	int nProcesses,
	    nResources;

	printf("No. of Processes : ");
	scanf("%d", &nProcesses);

	printf("No. of Resources : ");
	scanf("%d", &nResources);

	int resources[nResources];
	for(int i=0; i<nResources; i++)
		scanf("%d", &resources[i]);

	int allocated[nProcesses][nResources];
	for(int i=0; i<nProcesses; i++)
		for(int j=0; j<nResources; j++)
			scanf("%d", &allocated[i][j]);

	int maxRequired[nProcesses][nResources];
	for(int i=0; i<nProcesses; i++)
		for(int j=0; j<nResources; j++)
			scanf("%d", &maxRequired[i][j]);

	// testing input
	printf("\n\nProcesses = %d", nProcesses);
	printf("\nResources = %d", nResources);

	printf("\nAvailable Resource : ");
	for(int i=0; i<nResources; i++)
		printf("%3d", resources[i]);
	printf("\n");

	printf("\nAllocation Matrix\n");
	for(int i=0; i<nProcesses; i++) {
		for(int j=0; j<nResources; j++) {
			printf("%3d", allocated[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("\nMax Required Matrix\n");
	for(int i=0; i<nProcesses; i++) {
		for(int j=0; j<nResources; j++) {
			printf("%3d", maxRequired[i][j]);
		}
		printf("\n");
	}
}
