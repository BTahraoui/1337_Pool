# 1337 Pool — 42 School Cursus Reimplementation

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

Personal reimplementation of the **42 School / 1337** piscine (pool) curriculum.  
This repository tracks my solutions to the piscine modules as I progress through the curriculum, written in strict compliance with the 42 School norms (Norminette).

> **Note:** This project is for educational purposes only. All code is written from scratch to learn the fundamentals of C, shell scripting, and algorithmic thinking.

---

## 📂 Repository Structure

```
1337_Pool/
├── C00/                 # Piscine C00 – Basics of C (write, loops, conditionals)
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
├── C02/                 # (to be added) – Pointers, arrays, strings
├── ...                  # Further modules as I progress
├── LICENSE
└── README.md
```

Each module directory contains:
- The source files (`*.c`) implementing the required functions.
- The original subject PDF (`cXX.pdf`) for reference.
- No `main()` functions – files are intended to be compiled with the Moulinette or a personal test harness (any `main` present is for local testing only).

---

## ✅ Progress

| Module | Status | Description |
|--------|--------|-------------|
| **C00** | ✅ Completed | Basic C: `write`, loops, conditionals, recursion, ASCII manipulation |
| **C01** | ✅ Completed | Functions, pointers, basic algorithms: `swap`, `div/mod`, `strlen`, `putstr`, address manipulation, integer array sorting/reversing |
| C02 | ⏳ Planned | Pointers, arrays, strings |
| … | ⏳ Planned | … |

*Update this table as new modules are added.*

---

## 🛠️ How to Build & Test Locally

Although the official evaluation uses the Moulinette, you can compile and test each exercise locally with a simple `main.c`:

```c
/* example test harness – include only the functions you are testing */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_swap(int *a, int *b);
int ft_strlen(char *str);
/* … add prototypes for other functions you wish to test … */

int main(void)
{
    /* Example tests – adapt as needed */
    ft_print_alphabet();
    write(1, "\n", 1);

    int a = 1, b = 2;
    ft_swap(&a, &b);
    ft_putnbr(a); write(1, " ", 1); ft_putnbr(b); write(1, "\n", 1);

    char *str = "Hello";
    ft_putnbr(ft_strlen(str)); write(1, "\n", 1);

    return (0);
}
```

Compile with the recommended 42 flags:

```bash
cc -Wall -Wextra -Werror main.c C00/*.c C01/*.c -o test   # adjust paths as needed
./test
```

> **Tip:** Keep a separate `main.c` for each exercise or group of exercises to avoid undefined‑reference errors.

---

## 📜 Norminette

All source files aim to comply with the **Norme** (42 School coding standard).  
You can verify locally with:

```bash
norminette C00/*.c C01/*.c
```

*(Install `norminette` via the official 42 repository or your package manager.)*

---

## 🤝 Contributing

This is a personal learning repository. However, if you spot a bug, have a suggestion, or want to discuss an alternative approach, feel free to open an issue or submit a pull request.

---

## 📜 License

This project is released under the **MIT License** – see the [LICENSE](LICENSE) file for details.

---

> **Badr Tahraoui** – 1337/42 Student  
> GitHub: [https://github.com/UzalSahn](https://github.com/UzalSahn)