# 1337 Pool — 42 School Piscine Curriculum

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Norminette](https://img.shields.io/badge/code%20style-norminette-brightgreen.svg)](https://github.com/42School/norminette)
[![C](https://img.shields.io/badge/C-ansi%20c-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

## Table of Contents
- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Progress Tracking](#progress-tracking)
- [Compilation Guide](#compilation-guide)
- [Development Tools](#development-tools)
- [License](#license)
- [Closing Thought](#closing-thought)

---

## Overview

This repository contains my personal implementation of the **42 School / 1337 Piscine** curriculum. Each exercise is developed from scratch, adheres strictly to the [Norme](https://github.com/42School/norminette) (42's coding standard), and uses only the authorized functions (primarily `write` for output).

The Piscine is an intensive 4-week bootcamp that introduces students to:
- Fundamentals of the C programming language
- Algorithmic thinking and problem-solving
- Shell scripting and Unix basics
- Rigorous coding standards and peer evaluation (Moulinette)

All solutions are written with educational intent, focusing on understanding core concepts rather than optimization.

---

## Repository Structure

```
1337_Pool/
├── C00/             # Module 00: Basics (write, loops, conditionals, recursion)
├── C01/             # Module 01: Functions, pointers, basic algorithms
├── C02/             # Module 02: String manipulation
├── C03/             # Module 03: String operations (strcat, strcmp, etc.)
├── C04/             # Module 04: Integer/string conversion (atoi, putnbr, etc.)
├── C05/             # Module 05: Recursion & mathematical functions
├── C06/             # Module 06: argv/argc handling
├── C07/             # Module 07: Memory allocation (malloc, free)
├── rush/            # Rush00: Group project (ex00‑ex04)
├── exam00/          # Exam 00: First rush examination
├── exam01/          # Exam 01: Second rush examination
├── exam02/          # Exam 02: Third rush examination
├── Exam_F/          # Practice exam exercises
└── ...
```

**Key Points:**
- Each module (`CXX`) contains isolated exercises focusing on specific concepts
- Module exercises **do not** include a `main()` function (intended for Moulinette testing)
- Rush projects (`rush/`) are collaborative group exercises
- Exams (`examXX/`, `Exam_F/`) are individual timed evaluations
- All directories include the corresponding subject PDFs when available
- Executable files (`.exe`, `.out`) and temporary files are intentionally excluded

---

## Progress Tracking

| Component     | Status       | Description                                                                 |
|---------------|--------------|-----------------------------------------------------------------------------|
| **C00**       | ✅ Completed | Basics: `write`, loops, conditionals, recursion, character manipulation     |
| **C01**       | ✅ Completed | Functions, pointers, basic algorithms: `swap`, `strlen`, `putstr`, `divmod` |
| **C02**       | ✅ Completed | String manipulation: `strcpy`, `strncpy`, case conversion, validation      |
| **C03**       | ✅ Completed | String operations: `strcat`, `strncat`, `strlcat`, `strcmp`, `strncmp`, `strstr` |
| **C04**       | ✅ Completed | Conversion: `atoi`, `putnbr`, `putstr`, `strlen`                           |
| **C05**       | ✅ Completed | Recursion & math: factorial, power, Fibonacci, prime detection, sqrt       |
| **C06**       | ✅ Completed | argv/argc: parameter counting, program name retrieval, reverse parameters   |
| **C07**       | ✅ Completed | Memory allocation: `range`, `strdup`, `ultimate_range`                     |
| **Rush00**    | ✅ Completed | Group project: collaborative problem solving (ex00‑ex04)                   |
| **Exam 00**   | ✅ Completed | First rush examination: foundational exercises                             |
| **Exam 01**   | 🔄 In Progress| Second rush examination: intermediate difficulty                           |
| **Exam 02**   | ⏳ Planned   | Third rush examination                                                     |
| **Exam_F**    | 🔄 In Progress| Practice exercises: various exam-style problems                            |
| **C08+**      | ⏳ Planned   | Future modules                                                             |

*Legend: ✅ Completed | 🔄 In Progress | ⏳ Planned*

---

## Compilation Guide

### Standard Modules (C00-C07)
Most exercises in modules C00-C07 are designed to be compiled with a helper function (`ft_putchar.c`) for character output:

```bash
# Example: Compiling an exercise from C00
cc -Wall -Wextra -Werror \
    C00/ft_putchar.c \
    C00/ft_print_alphabet.c \
    -o ft_print_alphabet

./ft_print_alphabet  # Output: abcdefghijklmnopqrstuvwxyz
```

**Note:** The `ft_putchar.c` file contains the authorized `write(1, &c, 1)` implementation for output.

### Rush Projects (3-file structure)
Rush exercises follow a specific 3-file compilation pattern:

```bash
cd rush/ex00
cc -Wall -Wextra -Werror \
    ft_putchar.c \
    rush00.c \
    main.c \
    -o rush00

./rush00
```

### What Happens During Linking
1. **Compilation** – Each `.c` file is compiled to an object file (`.o`)
2. **Linking** – The linker (`ld`, invoked via `cc`) combines object files, resolving external symbols
   - Example: A call to `ft_putchar()` in `main.c` is linked to its definition in `ft_putchar.c`
3. **Error Handling** – "undefined reference" errors occur when a symbol is declared but not defined

> 💡 **Best Practice**: Keep test `main.c` files separate from library code; remove them before Moulinette submission to avoid conflicts.

---

## Development Tools

### Norminette
Verify compliance with the 42 coding standard:
```bash
norminette C00/*.c C01/*.c C02/*.c C03/*.c C04/*.c C05/*.c C06/*.c C07/*.c \
            rush/*/*.c exam00/*/*.c exam01/*/*.c exam02/*/*.c Exam_F/*/*.c
```
*Install via the official [42School/norminette](https://github.com/42School/norminette) repository.*

### Recommended Workflow
1. Implement solution in isolated `.c` file
2. Compile with `-Wall -Wextra -Werror` to catch warnings
3. Test with various inputs (edge cases, empty strings, large numbers)
4. Verify Norminette compliance
5. Remove test `main()` before final submission (if applicable)

---

## License

This project is released under the **MIT License** – see the [LICENSE](LICENSE) file for details.

---

## Closing Thought

> “Code is like humor. When you have to explain it, it’s bad.” – Cory House  

Keep compiling, keep learning, and let your code speak for itself. Remember: the goal isn't just to make it work—it's to make it *right*.

Happy coding, and may your segments never fault! 🖥️