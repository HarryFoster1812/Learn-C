#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid_1 = 0, pid_2 = 0, pid_3 = 0;

    printf("1:%d\t2:%d\t3:%d\n", pid_1, pid_2, pid_3);

    pid_1 = fork();
    sleep(1);
    printf("1:%d\t2:%d\t3:%d\n", pid_1, pid_2, pid_3);

    pid_2 = fork();
    sleep(1);
    printf("1:%d\t2:%d\t3:%d\n", pid_1, pid_2, pid_3);

    pid_3 = fork();
    sleep(1);
    printf("1:%d\t2:%d\t3:%d\n", pid_1, pid_2, pid_3);

}
