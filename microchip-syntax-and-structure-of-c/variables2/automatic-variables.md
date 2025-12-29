# Automatic Variables

- declared as a parameter inside functions or inside the body of a function
- temporary
- destroyed after function exit

```c
char x = 1;          // global variable
extern char i;       // external global variable

void foo(char y)     // y is an automatic variable (function parameter)
{
    char a = 2;      // automatic local variable
    static char v = 0; // static local variable (retains value)
    v = a + y;
}

int main(void)
{
    char j = 5;      // automatic local variable
    i = i + x;
    foo(i);
}
```
