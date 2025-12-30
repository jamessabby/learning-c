# Union and Structure Pointers

The structure should be already defined

## Syntax

### With typedef

```c
typedef struct {
  float re;
  float im;
} complex;

complex *p
```

### Without typdef

```c
struct complex {
  float re;
  float im;
};

struct complex *p;
```

## How to use pointers to access Union and Structure members

```c
// definitions
typedef struct {
  float re;
  float im;
} complex;    // complex type

complex x;    // complex var
complex *p;   // pointer to complex

// usage

int main(void) {
  p = &x;
  // set x.re = 1.25 via p
  p->re = 1.25;
  // set x.im = 2.50 via p
  p->im = 2.50;
}
```
