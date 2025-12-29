Pointer pre- and post-increment control whether the pointer itself or the value it points to is modified, and whether the increment happens before or after the value is used. Understanding operator precedence is critical when `*`, `++`, and parentheses are combined.

Basic forms:
- Pre-increment: `++p` → increment pointer first, then use it
- Post-increment: `p++` → use pointer first, then increment it

Common combinations:

Pre-increment forms:
- `++p`        → increment the pointer
- `*++p`       → increment pointer, then dereference
- `*(++p)`     → same as `*++p`

Post-increment forms:
- `p++`        → use pointer, then increment it
- `*p++`       → dereference pointer, then increment pointer
- `*(p++)`     → same as `*p++`

Value increment (not pointer):
- `++(*p)`     → increment the value being pointed to
- `(*p)++`     → use value, then increment the value being pointed to

Key rule to remember:
If the `*` is inside the parentheses, the **value** is modified.  
If the `*` is outside the parentheses, the **pointer** is modified.

Operator precedence example:

```c
z = *p++;
// same as 
/*
z = *p;       Here, the pointer is incremented after the value is read.
p = p + 1;
*/
```