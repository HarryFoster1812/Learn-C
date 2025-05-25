# 01 - Hello World Program

Welcome to the Hello World folder! This is where we start our journey into
learning the C programming language. The "Hello, World!" program is the simplest
program that outputs a message to the console. It's often the first step in
learning any new programming language.

In this folder, you'll find the hello_world.c program, which demonstrates the
fundamental structure of a C program and serves as the starting point for all
future lessons.

## Compiling and  running

Lets begin by compiling and running the hello_world.c file. To do this we run the
following command:

```bash
gcc hello_world.c -o hello_world
```

The -o argument tells the compiler to change the name of the output to
hello_world, you can change this to whatever you like
this should have created a new file in the directory.
if you type

```bash
ls -l hello_world
```

should see that this file (named hello_world) is an execuable.

to run it we simply type

```bash
./hello_world
```

if all goes correctly you should see your computer greeting you!

## Line by line

### \#include \<stdio\>

This is a preprocessor directive that tells the compiler to include the standard input/output library, which provides the printf function that is used to display output on the screen.

### main

In C and many other programming languages such as Java, the main function is the starting place for every program and is where execution starts. In C the main function is defined in the following way:

```c
int main(int argc, char** argv){
    return 0;
}
```

I will go into detail about the parameters later on

### printf
In C, the printf function is used to output text to the console. Here we are passing the string "Hello, world!\\n". The `\n` is a special character which outputs a new line.

### return 0
In the main program after execution it must return a status. Here we are returning 0 which represents successful execution to the operating system.