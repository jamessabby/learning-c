
# Implicit Type Conversion (C / C++)

When an expression contains different data types, the compiler **automatically converts smaller types to the largest type involved** before evaluation. The calculation uses the **highest-ranked type**, not the type of the variable receiving the result.

## Conversion Hierarchy (Low → High)

```

char
unsigned char
short
unsigned short
int
unsigned int
long
unsigned long
long long
unsigned long long
float
double
long double

````

## Key Rules

- Integer types smaller than `int` are promoted to `int`
- `float` is promoted to `double`
- If one operand is floating-point, the entire expression becomes floating-point
- Assignment happens **after** the expression is evaluated

## Example

```c
int a = 5, b = 2;
float c = a / b;
````

`a / b` is integer division → `2`, then assigned to `c` → `2.0`

To get a floating result:

```c
c = (float)a / b;  // 2.5
```

**Rule to remember:**

> The operands decide the math, not the destination variable.

