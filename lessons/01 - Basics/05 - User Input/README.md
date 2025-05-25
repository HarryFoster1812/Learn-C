# Operators

Now that we have a good understanding of how to create and variables we should look at how to get user input.

One of the most simplistic ways to gather user input is by using the arguments that are given to the program.

This is the program `args.c`
This is a very simple program which loops over the users input and prints to the console all of the arguments passed into the program.

To run this:
```bash
gcc -o args args.c
```
```bash
./args Hello, World!
```
The output should show:
```
Var 0: ./args
Var 1: hello,
Var 2: world!
```

We can see
