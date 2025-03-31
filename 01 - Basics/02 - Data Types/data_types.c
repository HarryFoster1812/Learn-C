#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define E_PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L

int main(int argc, char *argv[])
{
    char char_example = 'a';
    int int_example = 10;

    long double pi_ld = E_PI;
    double pi_d = pi_ld;
    float pi_f = pi_d;

    printf("Comparing the accuracy of decimal data types\n");
    printf("Original:    %s\n", "3.14159265358979323846264338327950288419716939937510582097494459230781640628620899");
    printf("long double: %1.80Lf\n", pi_ld);
    printf("double:      %1.80lf\n", pi_d);
    printf("float:       %1.80f\n\n", pi_f);

    printf("Comparing sizes of data types (machine dependent):\n");
    printf("long double: %d bytes\n", sizeof(long double));
    printf("double:      %d bytes\n", sizeof(double));
    printf("float:       %d bytes\n", sizeof(float));
    printf("char:        %d bytes\n", sizeof(char));
    printf("int:         %d bytes\n", sizeof(int));
    printf("short int:   %d bytes\n", sizeof(short int));
    printf("long int:    %d bytes\n", sizeof(long int));
    printf("long:        %d bytes\n", sizeof(long));
    printf("long long:   %d bytes\n", sizeof(long long));
    printf("long long int:%d bytes\n", sizeof(long long int));

    return 0;
}
