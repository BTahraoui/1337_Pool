# 1337 Pool — 42 School Cursus Reimplementation

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## Table of Contents
- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Progress Overview](#progress-overview)
- [Quick Compile Reference](#quick-compile-reference)
- [Norminette](#norminette)
- [License](#license)
- [Closing Thought](#closing-thought)

---

## Overview
This repository is a personal re‑implementation of the **42 School / 1337** piscine (pool) curriculum.  
Each solution is written from scratch, adheres to the strict 42 coding norm (Norminette), and uses only the allowed functions (e.g., `write` for output).  
The goal is to learn the fundamentals of C, shell scripting, and algorithmic thinking while keeping a clean, public record of progress.

---

## Repository Structure
```
1337_Pool/
├── C00/      # Basics: write, loops, conditionals, recursion
├── C01/      # Functions, pointers, basic algorithms
├── C02/      # String manipulation
├── C03/      # String ops: strcat, strncat, strlcat, strcmp, strncmp, strstr
├── C04/      # atoi, putnbr, putstr, strlen
├── C05/      # Recursion & math: factorial, power, fibonacci, prime, sqrt
├── rush/     # Rush00 – group project (ex00‑ex04 + rv2)
├── exam00/   # First rush exam – individual exercises
└── ...
```
*Each module contains `.c` source files, subject PDF, no `main()` in library files (for Moulinette).*

---

## Progress Overview
| Module | Status | Description |
|--------|--------|-------------|
| **C00** | ✅ Completed | Basic C: `write`, loops, conditionals, recursion, ASCII |
| **C01** | ✅ Completed | Functions, pointers, algorithms: `swap`, `strlen`, `putstr`, `div/mod`, array sort |
| **C02** | ✅ Completed | String manipulation: `strcpy`, `strncpy`, `strupcase`, `strlowcase`, `strcapitalize`, `str_is_*` |
| **C03** | ✅ Completed | String ops: `strcat`, `strncat`, `strlcat`, `strcmp`, `strncmp`, `strstr` |
| **C04** | ✅ Completed | `atoi`, `putnbr`, `putstr`, `strlen` |
| **C05** | ✅ Completed | Recursion & math: factorial, power, fibonacci, prime, sqrt |
| **Rush00** | ✅ Completed | Group project – collaborative problem solving (ex00‑ex04) |
| **Exam00** | ✅ Completed | First rush exam – `ft_putstr`, `ft_strlen`, `ft_print_numbers`, etc. |
| **C06+** | ⏳ Planned | Future modules |

---

## Quick Compile Reference

### Standard Exercises (C00, C01, C02, C03, C04, C05)
```bash
# Compile single exercise (links ft_putchar.c when needed)
cc -Wall -Wextra -Werror \
    C00/ft_putchar.c \
    C00/ft_print_alphabet.c \
    -o ft_print_alphabet

./ft_print_alphabet  # → abcdefghijklmnopqrstuvwxyz
```

### Rush Exercises (3 files each)
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
1. **Compile** – each `.c` → `.o` object file
2. **Link** – `cc` calls `ld` to combine `.o` files, resolving symbols (e.g., `ft_putchar` calls matched to definition)
3. Missing symbol = "undefined reference" error

> **Tip:** Keep test `main.c` separate; remove before Moulinette submission.

---

## Norminette
```bash
norminette C00/*.c C01/*.c C02/*.c C03/*.c C04/*.c C05/*.c rush/*/*.c exam00/*/*.c
```
*(Install via official 42 repo or package manager.)*

---

## License
This project is released under the **MIT License** – see [LICENSE](LICENSE).

---

## Closing Thought
> “Code is like humor. When you have to explain it, it’s bad.” – Cory House  

Keep compiling, keep learning, and let the output speak for itself. Happy coding!