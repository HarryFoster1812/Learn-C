#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char* str1 = "AAAAAAAAAAAAAAA";
    char* str2 = "BBBBBBBBBBBBBBB";
    pid_t pid = fork();
    if(pid == 0){
        write(1, str1, strlen(str1));
    }
    else{
        write(1, str2, strlen(str2));
    }
}
