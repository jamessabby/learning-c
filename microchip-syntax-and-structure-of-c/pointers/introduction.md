# Pointer

- A variable that holds the address of another variable
- When you use it, you're able to access the variable they point to and change the value of that variable
- you can also use the pointer to point to a different variable to perform the same operation many different times

Example:

```c
int x = 0x0123;     // x stores the value 0x0123
int *p = &x;        // p stores the address of x
```

## Direct access:

Using x accesses the value stored in x directly.

x = 0x0123; writes the value into x’s memory location.

## Indirect access:

p holds the address of x.

*p means “go to the address stored in p and access the original value there”.

*p = 0x0123; writes the value into x indirectly.

## Key operators:

& (address-of) gets the memory address of a variable.

* (dereference) accesses the original value at a memory address.

## Important rules:

A pointer must point to a variable of the correct type.

Dereferencing a pointer reads or modifies the data at the address it points to.

Pointers allow indirect access to memory, which is essential for arrays, functions, dynamic memory, and efficient data manipulation.