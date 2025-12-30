## Unions (C)

**Definition**  
A union is similar to a structure, but all members share the same memory location. A union can store different data types, but only one member’s value is valid at any given time.

**Key Points**

- A union may contain any number of members
- Members can be of different data types
- All members overlap in memory
- The size of a union equals the size of its largest member
- Syntax is identical to `struct`, except `struct` is replaced with `union`

**Mental Model**
Think of a union as a single box that can be interpreted in different ways.  
Writing to one member overwrites the data used by all others.

**When to Use**

- Memory-efficient storage
- Interpreting the same data in multiple formats
- Low-level programming and hardware access

```c
// without typdef
union mixedBag {
  char a;
  int b;
  float c;
};

// with typedef
typedef union {
  char a;
  int b;
  float c;
} anotherMixedBag;
```
