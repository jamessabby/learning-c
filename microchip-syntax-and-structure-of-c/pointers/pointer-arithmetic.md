# Pointer arithmetic

Pointer arithmetic allows pointers to move through memory based on the size of the data type they point to. When a pointer is incremented or decremented, it moves by multiples of the size of the pointed-to type, not by single bytes.

Example:

```c
long x[3] = {1, 2, 3};
long *p = x;
```

Here, `p` points to the first element of the array `x` . If `long` is 4 bytes, each increment of `p` moves it forward by 4 bytes in memory.

## Dereferencing vs Pointer movement

\*p accesses or modifies the value stored at the address p points to.

p++ moves the pointer to the next element of the array.

p += n moves the pointer forward by n elements, not bytes.

### Example

```c
*p += 4;          // modifies the value at x[0]
p++;              // p now points to x[1]
*p = 0xAAAA5555;  // modifies x[1]
p++;              // p now points to x[2]
*p = 0xF1D0F00D;  // modifies x[2]
p -= 2;           // p moves back to x[0]
*p = 0xBADF00D1;  // modifies x[0]
```
