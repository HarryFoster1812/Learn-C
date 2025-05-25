#include <stdlib.h>		// Libraries which may be needed
#include <stdio.h>		// IO library
#include <unistd.h>
#include <sys/types.h>
int do_something(char label) {
    char stack_var;
    int *heap_var;
    stack_var = label;
    heap_var = (int *) malloc(sizeof(int));
    *heap_var = (int) label;
    printf("\n");
    printf("[%c] stack_var val: %c,\taddress: %p\n", label, stack_var, &stack_var);
    printf("[%c] heap_var  val: %d,\taddress: %p\n", label, *heap_var, &heap_var);
    printf("[%c] arg       val: %c,\taddress: %p\n", label, label, &label);
    return stack_var;
}
int main() {
    pid_t new_PID;
    char label = 'p';
    int *main_heap_var;
    int *other_heap_var;
    main_heap_var = (int *) malloc(sizeof(int));
    printf("[%c] main_heap_var address:     %p\n\n", label, main_heap_var);
    printf("=== Forking ===\n\n");
    /* Fork */
    new_PID = fork();
    if (new_PID == 0) {
        /* If child, then change the label */
        label = 'c';
    }
    do_something(label);
    sleep(1);
    do_something(label);

    printf("[%c] main_heap_var address:  %p\n\n", label, main_heap_var);
    other_heap_var = (int *) malloc(sizeof(int));
    printf("[%c] other_heap_var address: %p\n\n", label, other_heap_var);

}
