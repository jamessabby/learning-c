# Pointer declaration

Pointer declaration specifies both that a variable is a pointer and what type of data it points to. The general form of a pointer declaration is:

type *ptrName;

At declaration time, the `*` means “pointer”. The `type` specifies the type of data the pointer can point to, which determines how much memory is accessed when the pointer is dereferenced.

Examples:

```c
int *iPtr;     // pointer to int
float *fPtr;  // pointer to float
```

## using typedef
You can create your own pointer type

```c
typedef int *intPtr;

intPtr p;   // equivalent to: int *p;
```

NOTE: When using a typedef pointer type, no * appears at the variable declaration. The pointer nature is already part of the type definition.