# Variables in C

## Definition

A variable is a named memory location used to store data.  
In C, every variable must be declared with a data type before use.

---

## Basic Declarations

```c
int a;
int b = 10;
unsigned int x = 5;
char letter = 'a';
float big_number = 6.02e23;
```

# Note

If you leave off all qualifiers, XC16 assumes that you wanted a Signed. Short. Integer

If you write, just int x it assumes

```c
int x = signed short int x
```

# typedef

you can create your own variable types through this

```c
typedef unsigned int uint16_t;

// x, y are unsigned ints and 16-bits
uint16_t x, y;
```

t
