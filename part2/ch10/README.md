# fun with functions

>The C language comes with libraries full of functions...

## anatomy of a function

### constructing a function

```c
type function(){}
```

>Functions must be *prototyped* in your code. The prototype describes the value returned and any arguments the function requires. The prototype must appear in your source code before any statement calls the function.

[10-1](listings/listing1001.c)

### prototyping (or not)

[10-2](listings/listing1002.c)


## functions and variables

### using variables in functions

> variables declared and used within a function are local to that function

[10-3](listings/listing1003.c)

### sending a value to a function

[10-4](listings/listing1004.c)

### sending multiple values to a function

### creating functions that return values

[10-5](listings/listing1005.c)

### returning early

[10-7](listings/listing1007.c)

## constants of the global kind

### introducing defined constants

```c
#define SHORTCUT text
```

### putting defined constants to use



## exercises

[exercise 10-1](exercises/ex01/main.c)
[exercise 10-5](exercises/ex05/main.c)
[exercise 10-6](exercises/ex06/main.c)