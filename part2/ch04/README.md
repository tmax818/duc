# trials and errors

## display stuff on the screen

### displaying a humorous message

[4-1](listings/listing0401.c)


### introducing the `puts()` function

>the `puts()` function [streams](../../part3/ch13/README.md) a string of text to the standard output device.


format:
```c
#include <stdio.h>

int puts(const char *s);
```

unofficial format:

```c
puts("text");
```

### adding more text

[4-2](../../code/listing0402.c)

### commenting out a statement

[4-3](../../code/listing0403.c)

### goofing up on purpose

## more text output nonsense

### displaying text with `printf()`

> `printf()` is far more potent and capable [than `puts()`] any you'll probably use it as the3 primare text output function in your C code.

[4-5](../../code/listing0405.c)

### introducing the `printf()` function

> the `printf()` function streams a formatted string of text to the standard output device.
>

format:
```c
#include <stdio.h>

int printf(const char *restrict format, ...);
```

### understanding the newline

### employing escape sequences





## exercises

[ex0401](exercises/ex0401.c): Carefully type the code from [4-1](listings/listing0401.c) build and run.
[ex0402](exercises/ex0402.c): Modify the code from [4-1](listings/listing0401.c) build and run.
[ex0403](exercises/ex0403.c): Carefully type the code from [4-2](listings/listing0402.c) build and run.
[ex0404](exercises/ex0404.c): Modify the code from [4-2](listings/listing0402.c) to display the entire nursery rhyme.

