# Arrays of Pointers (C Language)

## 1. What Is an Array of Pointers?

An array of pointers is simply:

An array

Where each element is a pointer

```c
char *p[4];
```

This means:

p is an array with 4 elements

Each element is a pointer to char

## 2. How to Read the Declaration

### Rule of thumb:

Everything to the right of \* describes the pointer

Everything to the left of \* describes what it points to

```c
char *p[4];
```

Read it as:

“p is an array of 4 pointers to char”

## 3. Initializing an Array of Pointers

Pointing to variables

```c
char x = 'A';
char y = 'B';

char *p[2];
p[0] = &x;
p[1] = &y;
```

p[0] stores the address of x

p[1] stores the address of y

Pointing to strings (very common in embedded C)
char \*p[2] = { "ALARM", "FAULT" };

### What actually happens:

Strings are stored in program memory (flash)

The array p is stored in data memory (RAM)

Each p[i] points to the first character of a string

## 4. Dereferencing an Array of Pointers

```c
char c = *p[0];
```

This means:

Go to what p[0] points to

Read the value there

If p[0] = "ALARM":

\*p[0] is 'A'

## 5. const with Pointer Arrays (Important but Simple)

```c
const char *p[2] = { "ALARM", "FAULT" };
```

Means:

You cannot modify the characters

You can change where the pointer points

This is the correct and safe way to store string tables in embedded systems.

## 6. Memory Location Rules (Embedded Context)

Key idea:

Pointers live in RAM

Strings usually live in flash (program memory)

This is why:

```c
char *p[2] = { "ALARM", "FAULT" };
```

Works, but:

```c
p[0][0] = 'X';   // ❌ dangerous or invalid
```

Because flash memory is read-only.

## 7. XC32 Compiler Attribute (Advanced, Optional)

```c
const char *r[4] __attribute__((space(prog))) =
{ "i01", "j02", "k03", "l04" };
```

This:

Forces the pointer array itself into program memory

Is compiler-specific

Is not ANSI C

⚠️ You do NOT need this for now

8. When You Actually Use This

Common real uses:

Menu labels

Error messages

State machine names

Lookup tables

Example:

```c
const char *stateNames[] = {
    "IDLE",
    "RUN",
    "ERROR"
};
```

## Summary (What to Remember)

`char *p[4]` = array of 4 pointers to char

Strings are arrays of characters

Pointer arrays often point to strings

`const char *` is your friend

Compiler attributes are optional and advanced
