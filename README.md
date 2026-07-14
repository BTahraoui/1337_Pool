# 1337 Pool — 42 School Cursus Reimplementation

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## Table of Contents
- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Progress Overview](#progress-overview)
- [Quick Compile Reference](#quick-compile-reference)
- [Norminette](#norminette)
- [Contributing](#contributing)
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
├── C00/          # Basics of C (write, loops, conditionals, recursion)
├── C01/          # Functions, pointers, basic algorithms
├── rush/         # Rush00 – group project (ex00‑ex04)
├── exam00/       # First rush exam – individual exercises
├── C02/          # (planned) Pointers, arrays, strings
├── LICENSE
└── README.md
```

*Each module contains `.c` source files + subject PDF. No `main()` in library files (for Moulinette). Any `main.c` present is for local testing only.*

---

## Progress Overview
| Module | Status | Description |
|--------|--------|-------------|
| **C00** | ✅ Completed | Basic C: `write`, loops, conditionals, recursion, ASCII manipulation |
| **C01** | ✅ Completed | Functions, pointers, basic algorithms: `swap`, `strlen`, `putstr`, `div/mod`, array sorting |
| **Rush00** | ✅ Completed | Group project – collaborative problem solving (ex00‑ex04) |
| **Exam00** | ✅ Completed | Individual exam exercises: `ft_putstr`, `ft_strlen`, `ft_print_numbers`, etc. |
| **C02** | ⏳ Planned | Pointers, arrays, strings |
| **…** | ⏳ Planned | Future modules |

---

## Quick Compile Reference

### Prerequisites
```bash
# Compiler with 42 flags
cc -Wall -Wextra -Werror ...
```

### Single Exercise (C00 / C01)
```bash
# From repo root
cc -Wall -Wextra -Werror \
    C00/ft_putchar.c \
    C00/ft_print_alphabet.c \
    -o ft_print_alphabet
./ft_print_alphabet
```
*Replace files for each exercise. Most need `ft_putchar.c` + the exercise file.*

### Rush Exercises (link 3 files)
```bash
cd rush/ex00
cc -Wall -Wextra -Werror \
    ft_putchar.c \
    rush00.c \
    main.c \
    -o rush00
./rush00
```
*Each rush ex has: `main.c` + `rushXX.c` + `ft_putchar.c`*

### Exam Exercises (standalone)
```bash
cc -Wall -Wextra -Werror \
    exam00/ft_putstr/ft_putstr.c \
    -o ft_putstr
./ft_putstr
```
*Each exam exercise is a single `.c` file (or with `ft_putchar.c` if needed)*

### What happens during linking?
1. **Compile** – Each `.c` → `.o` object file
2. **Link** – `ld` combines `.o` files, resolves symbols (e.g., `ft_putchar` calls matched to definition)
3. **Missing symbol?** → "undefined reference" error (forgot a `.c` file)

> **Tip:** Keep test `main.c` separate; remove before Moulinette submission.

---

## Norminette
```bash
norminette C00/*.c C01/*.c rush/*/*.c exam00/*/*.c
```
*(Install via official 42 repo or package manager)*

---

## Contributing
Personal learning repo. Issues/PRs welcome for bugs, suggestions, or alternative approaches. Keep it respectful and learning-focused.

---

## License
MIT License – see [LICENSE](LICENSE).

---

## Closing Thought
> "Code is like humor. When you have to explain it, it's bad." – Cory House  

Keep compiling, keep learning, let the output speak. Happy coding!