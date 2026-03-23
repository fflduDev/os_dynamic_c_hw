/*Requirements
Complete the provided template by filling in the TODOs:

Use malloc() to allocate memory for a single integer
Store the value 100 in the allocated memory
Print the memory address and value
Fork a child process
In the CHILD:

Change the value to 200
Print "CHILD - Address: [address], Value: [value]"
Free the memory


In the PARENT:

Wait for child to finish
Print "PARENT - Address: [address], Value: [value]"
Free the memory



Expected Output
Before fork - Address: 0x55555556b2a0, Value: 100
CHILD - Address: 0x55555556b2a0, Value: 200
PARENT - Address: 0x55555556b2a0, Value: 100
Notice: SAME address, DIFFERENT values! This proves memory was COPIED.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int *ptr;
    
    // TODO: Allocate memory for one integer using malloc
    ptr = 
    
    // TODO: Store the value 100 in the allocated memory
    
    
    // TODO: Print the address and value before forking
    printf("Before fork - Address: %p, Value: %d\n", );
    
    // TODO: Fork a child process
    int pid = 
    
    if (pid == 0) {
        // CHILD PROCESS
        
        // TODO: Change the value to 200
        
        
        // TODO: Print address and value in child
        printf("CHILD - Address: %p, Value: %d\n", );
        
        // TODO: Free the memory in child
        
        
    } else {
        // PARENT PROCESS
        
        // TODO: Wait for child to finish
        
        
        // TODO: Print address and value in parent
        printf("PARENT - Address: %p, Value: %d\n", );
        
        // TODO: Free the memory in parent
        
    }
    
    return 0;
}


