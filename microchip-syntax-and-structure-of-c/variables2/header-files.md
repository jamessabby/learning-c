# Header files
- are used to share declarations between multiple source files. 
- They act as a contract that tells the compiler what functions and global variables exist, without providing their actual implementations.

- A header file (`.h`) contains declarations only. 
- It does not allocate memory or contain function bodies. 


- Function prototypes and `extern` variable declarations belong in header files so they can be reused across multiple `.c` files.

Source files (`.c`) contain definitions. A variable or function is defined when memory is allocated or when the function body is written. Each global variable or function must have exactly one definition in the entire program.

## extern 

The `extern` keyword is used in header files to declare a global variable that is defined elsewhere. It tells the compiler that the variable exists, but that memory is allocated in another source file.

Example structure:

## LibFile.h (declarations):
```c
extern int myVar;
int foo(void);
```

## LibFile.c (definitions):
```c
int myVar;

int foo(void)
{
    ...
}
```

## Main.c (the one that uses the declarations):

```c
#include "LibFile.h"

int x;

int main(void)
{
    x = foo();
    myVar = x;
}

```
