# Variables

In the last document I covered data types, in this one I will be covering variables.

In essence, a variable is a location in memory which stores a value. This value can be read and changed by the program.

In C there are two types of statements when talking about variables they are declaration and assignment.

Lets run through a very simple case where we create a variable and change its value a few times:

```c
int main(int argc, char **argv){
    int a;
    a = 1;
    printf("%d\n", a);
    a = 2;
    printf("%d\n", a);
    return 0;
}
```

Lets have a look in memory what we are doing

| Address | Data |
| -------------- | --------------- |

`int a;` this is known as a declaration statement. Here we are telling the compiler that we want it to create space in memory which will hold an int. (Im going to assume that an int is 32-bits/4 bytes and little-endian)

| Address | Data |
| -------------- | --------------- |
|0 | 00000000 |
|1 | 00000000 |
|2 | 00000000 |
|3 | 00000000 |

`a = 1;` this is an assignment where we are assigning the value of a to be 1.

| Address | Data |
| -------------- | --------------- |
|0 | 00000001 |
|1 | 00000000 |
|2 | 00000000 |
|3 | 00000000 |

Similarly in `a = 2;` we are assigning the value of a to be 2 here.

| Address | Data |
| -------------- | --------------- |
|0 | 00000010 |
|1 | 00000000 |
|2 | 00000000 |
|3 | 00000000 |

And if we run the program we get:

```bash
1
2
```

But what if we where to add a print statement before the line `a = 1;`? What do you think would happen?

Well the answer is that its undefined what would happen! If i run this on my machine i get that the printf displays the number 32764 and if i re-run it i get 32767, and again i get 30741.

If you were to add a printf before a = 1;, the value of a would be undefined. This is because you are trying to read an uninitialized variable, which contains whatever data was previously at that memory location. The result can be any value, depending on the previous contents of that memory, and it can vary each time you run the program.

In summary, using uninitialized variables leads to undefined behavior in C, which is why it’s important to always initialize variables before using them.
