# Data Types

In this document we will be going over all of the primitive data types that are available in the C programming language.

There is a finite list of data types which is quite nice since this means that there is not much to learn. By default the only types C gives you are:

- int
- char
- float
- double
- void

## int

the int (integer) is used for storing whole numbers.

## char

the char (character) type is used to store a single ascii character.

## float

the float (floating-point number) is used for storing decimal numbers.

## double

the double (double-precision floating-point number) type is another type which stores decimal numbers.

## void

the void type is a bit more special since it can't actually be used as data type instead it is used often in function return types to show that the function does not return any value.

Another thing that the void type can be used for is generalised pointers:

```c
void my_function(void *pointer){
    // do something
}
```

I will go into more detail about this in the pointers section so don't worry about this for now.

## modifiers

In c we can use modifiers to tell the compiler to change the properties of the data types:

- long
- short
- signed
- unsigned

### long

The long modifier is used to increase the size of an integer data type. It is typically used with int or double to store larger numbers than the standard int or float types can accommodate.

### short

The short modifier is used to reduce the size of an integer data type. This modifier is used when memory optimization is important, or when you're sure that the values you need to store will fit within a smaller range.

### signed

The signed modifier indicates that a variable can hold both positive and negative values. By default, integer types in C are signed, but you can explicitly declare an integer as signed to make it clear (but is redundant to do so). This modifier is used when you need to store both positive and negative numbers.

### unsigned

The unsigned modifier indicates that the variable can only store non-negative values (positive numbers or zero). This is useful when you know that the variable will never need to store negative numbers. By using unsigned, you effectively double the upper limit of the variable's range compared to the signed version, because you're not using one bit to store the sign.

## Data Type Table

Here is a useful table that shows all  of the datatypes:

| Data Type | Least Size (Bits) | Range| Format Specifier |
| --------------- | --------------- | --------------- | --------------- |
| (signed) short int | 16 | Item3.1 | %hd |
| unsigned short int | 16 | Item3.2 | %hu |
| (signed) int | 16 | Item3.3 | %d |
| unsigned int | 16 | Item3.4 | %u |
| (signed) long int | 32 | Item3.4 | %ld |
| unsigned long int | 32 | Item3.4 | %lu |
| (signed) long long int | 64 | Item3.4 | %ld |
| unsigned long long int | 64 | Item3.4 | %lu |
| (signed) char | 8 | Item3.4 | %c |
| unsigned char | 8 | Item3.4 | %c |
| float | 32 | Item3.4 | %f |
| double | 64 | Item3.4 | %lf |
| long double | 128 | Item3.4 | %Lf |

Now you might be a bit confused because I mention the ***Least*** size. This is because in C the size of datatypes are platform specific. When looking at C code, especially legacy code it is important to not make assumptions about the size of types. The only guarentees we are provided with are the ones above (not including everything after float). On most systems an int will be 32 bits and a long will be 64 and (if the compiler supports it, a long long will be 128). But again this is just because that is the most common computer architecture and is no way guarenteed for all machines.

To get around this problem what is common to do is for programmers to create their own type definitions in a `types.h` file like so:

```c
typedef unsigned long u64; // u64 for unsigned 64-bit integer 
```

this means that anyone who is then compiling the code can modify the type definitions for their own architecture and be confident that it behave correctly.

## Boolean

A boolean is a type in which can only have two values (1/true or 0/false)
If you are coming from other programming languages then you may be wondering where the bool type is. Well, C technically doesnt have a bool type. Instead the value 0 is false when it is evaluated as a conditional and anything else is evaluated as true.

Later on in C99 the _Bool type was created and it had similar behaviour as described above in which anything that is assigned to it that is not 0 will be 1:

so:

```C
_Bool a = 1;
_Bool b = 2;

if(a==b){
    // this will run
}
```

Now again like anything in C you have to be careful since:

```C
unsigned char a = 256;
if(a){
    // this will not run
}
```

this is because an unsigned char or u8 can store 0-255 and if we try to assign 256 which is 100000000, the lower 8 bits will be used which means a will store 00000000 thus the resultant boolean will be false.
