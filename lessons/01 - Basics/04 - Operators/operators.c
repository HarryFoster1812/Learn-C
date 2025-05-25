#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;

    printf("Operator +: %d\n", a+b);
    printf("Operator -: %d\n", a-b);
    printf("Operator /: %d\n", a/b);
    printf("Operator %: %d\n", a%b);
    printf("Operator |: %d\n", a|b);
    printf("Operator ^: %d\n", a^b);
    printf("Operator &: %d\n", a&b);
    printf("Operator ~: %d\n", ~a);
    printf("Operator >>: %d\n", a>>1);
    printf("Operator <<: %d\n", a<<1);

    printf("Operator ++var: %d\n", ++a);
    a = 1; // reset fot the example
    printf("Operator var++: %d\n", a++);
    a = 1; // reset fot the example
    printf("Operator --var: %d\n", --a);
    a = 1; // reset fot the example
    printf("Operator var--: %d\n", a--);


    return 0;
}
