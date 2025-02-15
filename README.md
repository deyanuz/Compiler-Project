# Custom Language Compiler

A simple compiler implementation using Flex and Bison that supports basic programming constructs including variables, loops, conditionals, and I/O operations.

## Table of Contents

- [Features](#features)
- [Data Types](#data-types)
- [Control Structures](#control-structures)
- [Input/Output](#inputoutput)
- [Project Structure](#project-structure)
- [Building and Running](#building-and-running)
- [Sample Programs](#sample-programs)
- [References](#references)

## Features

- Basic arithmetic and logical operations
- Variable declarations and assignments
- Control flow statements (if-else, switch-case)
- Looping constructs
- Built-in mathematical functions (sin, cos, tan, log, ln, sqrt)
- Input/output operations

## Data Types

- `int` - Integer values
- `float` - Floating point numbers
- `char` - Character values

## Control Structures

### If-Else

```
if (a lt b) {
    // statements
} elif (condition) {
    // statements
} else {
    // statements
}
```

### Switch-Case

```
change (expression) {
    case value1: {
        // statements
    }
    case value2: {
        // statements
    }
    none: {
        // default statements
    }
}
```

### Loops

```
// For loop
forst <start> foren <end> step <increment> {
    // statements
}

// Until loop
until <condition> do {
    // statements
}
```

## Operators

### Arithmetic

- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division
- `mod` Modulus
- `pow` Power
- `pp` Increment
- `mm` Decrement

### Relational

- `lt` Less than
- `lte` Less than or equal
- `gt` Greater than
- `gte` Greater than or equal
- `:==` Equal to
- `!:=` Not equal to

### Logical

- `and` Logical AND
- `or` Logical OR
- `xor` Logical XOR
- `not` Logical NOT

## Input/Output

- Input: `in(variable)`
- Output: `out(expression)`
- Print string: `out("string")`
- Newline: `out(//)`
- Comments: `**This is a comment**`

## Project Structure

- `main.l` - Flex lexical analyzer
- `main.y` - Bison parser grammar
- `input.txt` - Sample input program
- `output.txt` - Generated output
- `abc.sh` - Build script

## Building and Running

```bash
./abc.sh
```

This will:

1. Generate parser using Bison
2. Generate lexical analyzer using Flex
3. Compile and link everything
4. Run the compiler on input.txt

## Sample Programs

See [input.txt](input.txt) for example programs demonstrating language features.

Sample output is available in [output.txt](output.txt).

## References

- [Flex Manual](https://westes.github.io/flex/manual/)
- [Bison Manual](https://www.gnu.org/software/bison/manual/)
- [Writing Compilers and Interpreters: A Software Engineering Approach](https://www.amazon.com/Writing-Compilers-Interpreters-Software-Engineering/dp/0470177071)

```

```
