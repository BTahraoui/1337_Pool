# 1337 Pool — 42 School Cursus Reimplementation

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## Table of Contents
- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Progress Overview](#progress-overview)
- [How to Build & Test Locally](#how-to-build--test-locally)
  - [Compiling a Single Exercise](#compiling-a-single-exercise)
  - [Linking Multiple Files for Rush](#linking-multiple-files-for-rush)
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
├── C00/                 # Piscine C00 – Basics of C (write, loops, conditionals, recursion)
│   ├── ft_putchar.c
│   ├── ft_print_alphabet.c
│   ├── ft_print_reverse_alphabet.c
│   ├── ft_print_numbers.c
│   ├── ft_is_negative.c
│   ├── ft_print_comb.c
│   ├── ft_print_comb2.c
│   ├── ft_putnbr.c
│   └── c00.pdf          # Subject PDF
├── C01/                 # Piscine C01 – Functions, pointers, basic algorithms
│   ├── ft_swap.c
│   ├── ft_ultimate_div_mod.c
│   ├── ft_putstr.c
│   ├── ft_strlen.c
│   ├── ft_ft.c
│   ├── ft_div_mod.c
│   ├── ft_ultimate_ft.c
│   ├── ft_rev_int_tab.c
│   ├── ft_sort_int_tab.c
│   └── c01.pdf          # Subject PDF
├── rush/                # Rush00 – First group project (ex00‑ex04)
│   ├── ex00/
│   │   ├── main.c
│   │   ├── rush00.c
│   │   └── ft_putchar.c
│   ├── ex01/
│   │   ├── main.c
│   │   ├── rush01.c
│   │   └── ft_putchar.c
│   ├── ex02/
│   │   ├── main.c
│   │   ├── rush02.c
│   │   └── ft_putchar.c
│   ├── ex03/
│   │   ├── main.c
│   │   ├── rush03.c
│   │   └── ft_putchar.c
│   ├── ex04/
│   │   ├── main.c
│   │   ├── rush04.c
│   │   └── ft_putchar.c
│   └── rv2/             # Optional variant / bonus
│       ├── main.c
│       ├── rushv2.c
│       └── ft_putchar.c
├── C02/                 # (to be added) – Pointers, arrays, strings
├── ...                  # Further modules as I progress
├── LICENSE
└── README.md
```

*Each module directory contains:*
- **Source files (`*.c`)** – the actual implementations.
- **Subject PDF (`cXX.pdf`)** – the original exercise statement for reference.
- **No `main()`** in library files – they are meant to be compiled with the Moulinette or a personal test harness.  
  (Any `main` present is solely for local testing and should be removed before submission.)

---

## Progress Overview
| Module | Status | Description |
|--------|--------|-------------|
| **C00** | ✅ Completed | Basic C: `write`, loops, conditionals, recursion, ASCII manipulation |
| **C01** | ✅ Completed | Functions, pointers, basic algorithms: `swap`, `strlen`, `putstr`, `div/mod`, address manipulation, integer array sorting/reversing |
| **Rush00** | ✅ Completed | First group project – collaborative problem solving, file I/O, and advanced logic (ex00‑ex04) |
| **C02** | ⏳ Planned | Pointers, arrays, strings |
| **…** | ⏳ Planned | Future modules as the journey continues |

*Feel free to check the commit history for detailed progress.*

---

## How to Build & Test Locally
Although the official evaluation uses the Moulinette (the automated 42 grader grader), you can compile and test everything on your own machine with a standard C compiler.

### Prerequisites
- A C compiler that supports the `-Wall -Wextra -Werror` flags (e.g., `gcc` or `clang`).
- `make` is optional; you can compile manually as shown below.

### Compiling a Single Exercise
For most exercises in **C00** and **C01**, the source file is self‑contained (aside from `ft_putchar.c` which is often reused).  
A typical compile command looks like:

```bash
# Example: compiling ft_print_alphabet.c
cc -Wall -Wextra -Werror \
    C00/ft_putchar.c \
    C00/ft_print_alphabet.c \
    -o ft_print_alphabet
./ft_print_alphabet   # should output: abcdefghijklmnopqrstuvwxyz
```

Replace the source files as needed for each exercise.

### Linking Multiple Files for Rush
The Rush exercises are structured like a mini‑project: each exercise directory contains a `main.c`, a specific implementation (e.g., `rush00.c`), and a shared `ft_putchar.c`.  
To build an exercise, you **link all three `.c` files** together so that the linker can resolve external references (e.g., `ft_putchar` used inside `rush00.c`).

#### Step‑by‑step example for `rush/ex00`:
```bash
cd rush/ex00
# Compile and link all three source files
cc -Wall -Wextra -Werror \
    ft_putchar.c \
    rush00.c \
    main.c \
    -o rush00
# Run the resulting binary
./rush00
```

#### What happens during linking?
1. **Compilation** – Each `.c` file is turned into an object file (`.o`).  
   - `ft_putchar.c` → `ft_putchar.o` (contains the definition of `ft_putchar`)  
   - `rush00.c` → `rush00.o` (contains your rush logic, calls `ft_putchar`)  
   - `main.c` → `main.o` (contains `int main(void)`)
2. **Linking** – The linker (`ld` invoked via `cc`) combines the object files into a single executable.  
   - It resolves symbols: calls to `ft_putchar` in `rush00.o` and `main.o` are matched with the definition in `ft_putchar.o`.  
   - If any symbol is missing (e.g., you forgot to include `ft_putchar.c`), the linker will throw an “undefined reference” error.  
   - The final executable (`rush00`) contains machine code from all three object files, ready to be run.

> **Tip:** Keep a separate `main.c` for testing; remove it before submitting to the Moulinette, which provides its own `main`.

---

## Norminette
All source files aim to comply with the **Norme** (the 42 School coding standard).  
You can verify locally with:

```bash
norminette C00/*.c C01/*.c rush/*/*.c
```

*(Install `norminette` via the official 42 repository or your package manager.)*  
Any deviation will be flagged – fix them to keep the code clean and submission‑ready.

---

## Contributing
This is a personal learning repository. However, if you notice a bug, have a suggestion, or want to discuss an alternative approach, feel free to open an issue or submit a pull request.  
Please keep discussions respectful and focused on learning.

---

## License
This project is released under the **MIT License** – see the [LICENSE](LICENSE) file for details.

---

## Closing Thought
> *“Code is like humor. When you have to explain it, it’s bad.”* – Cory House  

Keep compiling, keep learning, and let the output speak for itself. Happy coding!