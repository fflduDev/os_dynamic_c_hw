/*
 * Template: Malloc, Fork, and Exec Exercise
 * 
 * TODO: Complete the implementation to demonstrate that:
 * 1. fork() duplicates memory (child sees same address/value)
 * 2. exec() replaces entire memory space (malloc'd memory disappears)
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int *ptr;
    pid_t pid;
    
    // TODO: Step 1 - Allocate memory with malloc() and store a value
    // Hint: ptr = malloc(...);
    // Hint: Store something like 42 or 12345
    
    
    // TODO: Step 2 - Parent prints address and value
    // Hint: Use %p for address, %d for value
    printf("PARENT (before fork): ");
    // TODO: Print address and value
    
    
    // TODO: Step 3 - Fork to create child process
    // Hint: pid = fork();
    
    
    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        exit(1);
    }
    else if (pid == 0) {
        // ===== CHILD PROCESS =====
        
        // TODO: Step 4 - Child prints address and value
        // Question: Will the address be the same? Will the value be the same?
        printf("CHILD (after fork): ");
        // TODO: Print address and value
        
        
        printf("CHILD: About to exec ls...\n");
        
        // TODO: Step 5 - Child calls execlp() to run ls
        // Hint: execlp("ls", "ls", "-l", NULL);
        // Note: If exec succeeds, the code below will NEVER execute
        
        
        // Only reached if exec fails
        perror("exec failed");
        exit(1);
    }
    else {
        // ===== PARENT PROCESS =====
        
        // TODO: Step 6 - Parent waits for child to complete
        // Hint: wait(NULL);
        
        
        // TODO: Step 7 - Parent prints address and value again
        printf("PARENT (after child finished): ");
        // TODO: Print address and value
        
        
        // Clean up
        free(ptr);
        
        printf("\nWhat happened?\n");
        printf("- Child had SAME address/value after fork (memory was copied)\n");
        printf("- Child's exec REPLACED entire memory (malloc'd data gone)\n");
        printf("- Parent's memory UNCHANGED (still has original malloc'd data)\n");
    }
    
    return 0;
}

/*
 * COMPILE: gcc -o malloc_fork_exec malloc_fork_exec_template.c
 * RUN: ./malloc_fork_exec
 * 
 * QUESTIONS TO CONSIDER:
 * 1. Why does the child see the same address and value after fork?
 * 2. What happens to the malloc'd memory when exec runs?
 * 3. Why does the parent still have its malloc'd memory after child exits?
 * 4. What would happen if we tried to free(ptr) in the child before exec?
 */
