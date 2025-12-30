# Bit Fields in C, Creation and Usage (Plain Explanation)

## What a Bit Field Is (Intuition)

A bit field lets you split a single integer into smaller pieces, where each piece uses a fixed number of bits.  
Instead of manually using masks and shifts, you name each group of bits and access them like normal struct members.

Think of one byte (8 bits) as a box that you divide into labeled compartments.

---

## How to Create a Bit Field

### Syntax

```c
struct StructName {
    unsigned int memberName : bitWidth;
};
```

- unsigned int is the storage type

- bitWidth is how many bits that member uses

- Multiple bit fields are packed together by the compiler

## Example Bit Field Definition
```c
struct byteBits {
    unsigned int blvolts : 1;  // 1 bit  (0–1)
    unsigned int blamps  : 1;  // 1 bit  (0–1)
    unsigned int blhumid : 2;  // 2 bits (0–3)
    unsigned int bltemp  : 1;  // 1 bit  (0–1)
    unsigned int bltach  : 3;  // 3 bits (0–7)
} x;
```

Total bits: 1 + 1 + 2 + 1 + 3 = 8 bits
This fits exactly into one byte.


## How to use a Bit Field

You assign values just like normal variables, but each value must fit within its bit width.
```
x.blvolts = 1;    // allowed: 0–1
x.blamps  = 0;    // allowed: 0–1
x.blhumid = 0b10; // allowed: 0–3
x.bltemp  = 0;    // allowed: 0–1
x.bltach  = 7;    // allowed: 0–7
```

Each field automatically occupies only its assigned bits.

## When to Use Bit Fields

Multiple small flags or counters

Embedded systems and registers

Clean code without manual bit masking
