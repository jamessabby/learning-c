# External variables

External variables are global variables that are defined in one place but accessed from other files or scopes using the `extern` keyword. The `extern` keyword does not create a variable, it only declares that the variable exists somewhere else in the program.

A variable is **defined** when memory is allocated for it. A variable is **declared** when the compiler is informed about its name and type. With `extern`, the declaration and the definition are separated.

Example:

```c
char x = 1;        // defined here
extern char i;     // declared here, defined elsewhere

void foo(char y)   // function parameter is an automatic variable
{
    char a = 2;            // automatic local variable
    static char v = 0;     // static local variable
    v = a + y;
}

int main(void)
{
    char j = 5;    // automatic local variable
    i = i + x;     // uses external variable i
    foo(i);
}
