# input and output

# character i/o

## understanding input and output devices

rules

- input comes from `stdin`
- output is sent to `stdout`

## fetching characters with `getchar()`

[7-1](listings/listing0701.c)

```c
int getchar(void);
```

## using the `putchar()` function

```c
int putchar(int c);
```

- sends a single character to `stdout`

[7-2](listings/listing0702.c)

## working with character variables

[7-3](listings/listing0703.c)



# text i/o, but mostly i

## storing strings

- strings are arrays of chars

[7-4](listings/listing0704.c)

## introducing the `scanf()` function

>For input of specific data types, the `scanf()` function comes in handy. it's great for testing code or grabbing values.


## exercises

[exercise 7-1]: ./exercises/ex01/main.c
[exercise 7-2]: ./exercises/ex02/main.c 