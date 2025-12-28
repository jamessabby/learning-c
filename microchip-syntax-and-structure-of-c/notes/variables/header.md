# Header Files

- Variables can be declared in header files if they're too many
- Usually ends in .h

```c
#include "main.h"
void main (void)
{
  // begin main
  a = 42;
  TakeOverTheWorld();
}
```

# Two ways to use #include

```c
#include "main.h"

#include <math.h>

// can be relative path
#include "c:\projects\awesomeness\main.h"

// or absolute path
#include "..\awesomeness\main.h"

```

# Example of a separate declaration file

```c
// main.h file

unsigned int a;
unsigned int b;
unsigned int c;
```

```c
// main.c file
#include "main.h"

int main(void)
{
  a = 5;
  b = 2;
  c = a + b;
}

```