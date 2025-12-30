## Using Union and Structure Variables (with Pointers)

### Accessing Members with Pointers

When you have a pointer to a structure (or a structure that contains unions), use the `->` operator to access members.

```c
// Write to the full 32-bit register
pSTRUCT_LEDVariables->ledRotation.reg = 0xABCDECFF;

// Write to a specific member inside the union
pSTRUCT_LEDVariables
    ->ledRotation.member.u8rotateForwardSpeed = 0x11;
```

- `->` is used because `pSTRUCT_LEDVariables` is a pointer
- You can write to:
  - the entire register (`reg`)
  - or individual fields inside the union (`member.xxx`)

- Both refer to the same memory location

---

## Why Use Pointers to Structures of Structures?

- Keeps all related functionality grouped together
- Allows functionality subsets (rotation, pattern, breathing)
- All features can be accessed through one pointer
- Improves portability and maintainability
- Common pattern in embedded systems and drivers

---

## Declaring the Variables

At this point, types exist but no variables are allocated yet.

```c
// Declare the main structure variable
STRUCT_LEDVariables STRUCT_allLEDVariables;

// Declare a pointer to the structure
STRUCT_LEDVariables *pSTRUCT_LEDVariables =
    &STRUCT_allLEDVariables;
```

- One variable holds all LED-related data
- A pointer is used to access and modify it easily
- Typical for passing to functions or hardware drivers

---

## Typedef Members (High-Level View)

A structure can contain members that are themselves `typedef` types.

```c
typedef struct {
    volatile LED_ROTATE_Type   ledRotation;
    volatile LED_PATTERN_Type  ledPattern;
    volatile LED_BREATHE_Type  ledBreathe;
} STRUCT_LEDVariables;
```

- Each member is a separate union type
- `volatile` indicates values may change outside normal program flow
- The structure groups all LED behaviors together

---

## Example: Union Typedef Used as a Structure Member

```c
typedef union {
    unsigned long reg;
    struct {
        unsigned char u8rotateForwardSpeed;
        unsigned char u8rotateReverseSpeed;
        unsigned char u8speedRateChange;
        unsigned char b1rotateStatusFlags : 2;
    } member;
} LED_ROTATE_Type;
```

- `reg` allows full-register access
- `member` allows field-level access
- Bit fields are used for compact flags

---

## Multiple Union Typedefs Used Together

Three separate unions are defined and later combined:

- `LED_ROTATE_Type`
- `LED_BREATHE_Type`
- `LED_PATTERN_Type`

Each union:

- Shares memory between `reg` and `member`
- Exposes different views of the same data
- Is referenced together through one structure pointer

---

## Big Picture Mental Model

- **Union**: multiple views of the same memory
- **Struct**: groups related data together
- **Typedef**: simplifies usage and readability
- **Pointer**: provides centralized access

This pattern is common in embedded systems for:

- Hardware registers
- Configuration blocks
- Clean, scalable driver design
