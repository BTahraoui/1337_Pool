# 1337_Pool

> **The 42 School Piscine** — C programming, shell scripting, and the exams that stand between you and the campus. Every exercise solved from scratch, by hand, the hard way.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Language](https://img.shields.io/badge/C-ANSI%20C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Standard](https://img.shields.io/badge/Style-Norminette-brightgreen.svg)](https://github.com/42School/norminette)
[![Shell](https://img.shields.io/badge/Shell-Bash-green.svg)](https://www.gnu.org/software/bash/)

---

## Table of Contents

- [Overview](#overview)
- [Progress Dashboard](#progress-dashboard)
- [C Modules (C00 – C07)](#c-modules-c00--c07)
- [Shell Modules (Shell00 – Shell01)](#shell-modules-shell00--shell01)
- [Rush00](#rush00)
- [Exams](#exams)
- [Compilation Guide](#compilation-guide)
- [Norminette](#norminette)
- [License](#license)

---

## Overview

This repository is my complete journey through the **1337 / 42 School Piscine** — the intensive 4-week bootcamp where you learn C from zero, under the strictest coding standard in the industry (the *Norme*), with no shortcuts and no unauthorized functions.

**What's inside:**

| Category | Content |
|----------|---------|
| **C00 – C07** | 8 modules, 51 exercises — from `ft_putchar` to `malloc` |
| **Shell00 – Shell01** | 16 shell exercises — files, rights, SSH, git, scripting |
| **Rush00** | The group project (5 variants, 3-file pattern) |
| **Exam 00 → Exam 02** | Individual timed exams, level by level |
| **Exam_F** | Final exam preparation — 27 classic exercises + extra drills |

Every `.c` file compiles with `-Wall -Wextra -Werror`, passes the Norminette, and uses only the functions allowed by its subject.

---

## Progress Dashboard

| Module | Type | Exercises | Status |
|:-------|:-----|:----------:|:------:|
| **C00** | C — Basics | 8 | ✅ Completed |
| **C01** | C — Pointers & Arrays | 9 | ✅ Completed |
| **C02** | C — Strings | 10 | ✅ Completed |
| **C03** | C — String Ops | 6 | ✅ Completed |
| **C04** | C — Conversions | 4 | ✅ Completed |
| **C05** | C — Recursion & Math | 8 | ✅ Completed |
| **C06** | C — argv / argc | 3 | ✅ Completed |
| **C07** | C — malloc / free | 3 | ✅ Completed |
| **Shell00** | Shell — Basics | 10 | ✅ Completed |
| **Shell01** | Shell — Scripting | 6 | ✅ Completed |
| **Rush00** | Group Project | 5 | ✅ Completed |
| **Exam 00** | Exam | 20 | ✅ Completed |
| **Exam 01** | Exam | 28 | ✅ Completed |
| **Exam 02** | Exam | 7 | ✅ Completed |
| **Exam_F** | Final Exam Prep | 44 | ✅ Completed |
| **C08** | C — Headers & Macros | — | 🔄 In Progress |

> **Legend:** ✅ Completed · 🔄 In Progress · ⏳ Planned

---

## C Modules (C00 – C07)

### C00 — The Basics of Everything
*Output, loops, conditionals — the building blocks.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_putchar.c` | Writing a single character using only `write` |
| ex01 | `ft_print_alphabet.c` | Loop over `a`–`z` |
| ex02 | `ft_print_reverse_alphabet.c` | Loop over `z`–`a` |
| ex03 | `ft_print_numbers.c` | Loop over `0`–`9` |
| ex04 | `ft_is_negative.c` | First conditional logic |
| ex05 | `ft_print_comb.c` | Nested loops + combination logic |
| ex06 | `ft_print_comb2.c` | Combinations of number pairs |
| ex07 | `ft_putnbr.c` | Printing any int — including `INT_MIN` |

### C01 — Pointers, the Real Boss
*Pointers, arrays, and pointer-to-pointer.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_ft.c` | Pointer to `int` |
| ex01 | `ft_ultimate_ft.c` | Pointer to pointer to pointer… (5 levels) |
| ex02 | `ft_swap.c` | Swap via pointers |
| ex03 | `ft_div_mod.c` | Return two results through pointers |
| ex04 | `ft_ultimate_div_mod.c` | Same, in-place |
| ex05 | `ft_putstr.c` | String output |
| ex06 | `ft_strlen.c` | String length |
| ex07 | `ft_rev_int_tab.c` | Reversing an int array |
| ex08 | `ft_sort_int_tab.c` | Sorting an int array |

### C02 — String Manipulation
*Rebuilding `<string.h>` by hand.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_strcpy.c` | Copy a string |
| ex01 | `ft_strncpy.c` | Copy `n` bytes |
| ex02 | `ft_str_is_alpha.c` | Alpha validation |
| ex03 | `ft_str_is_numeric.c` | Digit validation |
| ex04 | `ft_str_is_lowercase.c` | Lowercase validation |
| ex05 | `ft_str_is_uppercase.c` | Uppercase validation |
| ex06 | `ft_str_is_printable.c` | Printable validation |
| ex07 | `ft_strupcase.c` | To uppercase |
| ex08 | `ft_strlowcase.c` | To lowercase |
| ex09 | `ft_strcapitalize.c` | Capitalize each word |

### C03 — Advanced String Operations
*Comparison, concatenation, searching.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_strcmp.c` | Lexicographic comparison |
| ex01 | `ft_strncmp.c` | Comparison with `n` limit |
| ex02 | `ft_strcat.c` | Concatenation |
| ex03 | `ft_strncat.c` | Concatenation with `n` limit |
| ex04 | `ft_strstr.c` | Substring search |
| ex05 | `ft_strlcat.c` | Safe concatenation (BSD style) |

### C04 — Numbers ↔ Strings
*Converting between `int` and `char *`.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_strlen.c` | Length (revisited) |
| ex01 | `ft_putstr.c` | Output (revisited) |
| ex02 | `ft_putnbr.c` | `int` → screen |
| ex03 | `ft_atoi.c` | String → `int`, with sign handling |

### C05 — Recursion & Mathematics
*Where loops end and recursion begins.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_iterative_factorial.c` | Factorial, iterative |
| ex01 | `ft_recursive_factorial.c` | Factorial, recursive |
| ex02 | `ft_iterative_power.c` | Power, iterative |
| ex03 | `ft_recursive_power.c` | Power, recursive |
| ex04 | `ft_sqrt.c` | Integer square root |
| ex05 | `ft_is_prime.c` | Primality test |
| ex06 | `ft_find_next_prime.c` | Next prime ≥ `nb` |
| ex07 | `ft_fibonacci.c` | Fibonacci, recursive |

### C06 — Command-line Arguments
*`argc`, `argv`, and the program itself.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_print_program_name.c` | Read `argv[0]` |
| ex01 | `ft_print_params.c` | Print all arguments |
| ex02 | `ft_rev_params.c` | Print arguments in reverse |

### C07 — Dynamic Memory
*`malloc`, `free`, and the heap.*

| Exercise | File | Concept |
|:---------|:-----|:--------|
| ex00 | `ft_strdup.c` | Duplicate a string on the heap |
| ex01 | `ft_range.c` | Allocate a range of ints |
| ex02 | `ft_ultimate_range.c` | Same, returning size through a pointer |

---

## Shell Modules (Shell00 – Shell01)

### Shell00 — Unix Basics
*Terminal, files, permissions, SSH, and git.*

| Exercise | Deliverable | Concept |
|:---------|:------------|:--------|
| ex00 | `z` | A file named `z`, containing `z` |
| ex01 | `testShell00.tar` | Archive with exact structure |
| ex02 | `exo2.tar` | Archive with specific permissions |
| ex03 | `id_rsa_pub` | SSH public key |
| ex04 | `midLS` | 30-day filter on `git log` |
| ex05 | `git_commit.sh` | Last 5 commit messages |
| ex06 | `git_ignore.sh` | Ignored-file rules |
| ex07 | `b` | Skip the MAC check |
| ex08 | `clean` | Find `.c` files containing "clean" |
| ex09 | `ft_magic` | A file with a magic number |

### Shell01 — Shell Scripting
*Variables, expansion, scripting logic.*

| Exercise | Deliverable | Concept |
|:---------|:------------|:--------|
| ex01 | `print_groups.sh` | Print user groups |
| ex02 | `find_sh.sh` | Find all `.sh` files |
| ex03 | `count_files.sh` | Count files in current tree |
| ex04 | `MAC.sh` | Show MAC address |
| ex05 | `_$_MaRViN_$_` | The file the subject asks for |
| ex06 | `skip.sh` | Skip lines according to subject |

---

## Rush00

The **only rush** in this repository — the collaborative group project of the Piscine, done solo in all 5 variants to master the pattern.

| Variant | Files | Pattern |
|:--------|:------|:--------|
| ex00 | `ft_putchar.c`, `main.c`, `rush00.c` | Top-left corner |
| ex01 | `ft_putchar.c`, `main.c`, `rush01.c` | Top-right corner |
| ex02 | `ft_putchar.c`, `main.c`, `rush02.c` | Bottom-right corner |
| ex03 | `ft_putchar.c`, `main.c`, `rush03.c` | Bottom-left corner |
| ex04 | `ft_putchar.c`, `main.c`, `rush04.c` | Full rectangle |

Each variant compiles with the classic 3-file pattern (see [Compilation Guide](#compilation-guide)).

---

## Exams

> These are the **individual timed exams** of the Piscine — from the first exam to the final one. Not rush projects: pure solo, under the clock.

### Exam 00 — First Exam ✅
*Level 0 foundations — 20 solved exercises.*

| Level | Topics |
|:------|:-------|
| Lvl 0 | `aff_a`, `aff_z`, `ft_putstr`, `ft_strlen`, `ft_swap`, `ft_atoi`, `hello` |
| Lvl 0+ | `first_word`, `ft_print_numbers`, `maff_alpha`, `only_z`, `repeat_alpha` |
| Lvl 0+ | `rev_print`, `rotone`, `search_and_replace`, `ulstr` |
| Extras | `climbing_stairs`, `sumtwo`, `ispalindrom`, `examlvl0/` (15 drills) |

### Exam 01 — Second Exam ✅
*Organized by difficulty tier — 28 solved exercises.*

| Tier | Files | Topics |
|:-----|:------|:-------|
| **Lvl 0–2** | 14 | `ft_add`, `ft_sub`, `ft_mul`, `ft_div`, `ft_inc`, `ft_dec`, `even`, `odd`, `ft_putstr`, `ft_ft`, `write_string`, `interval_spaces`, `maph_alpha`, `maph_revalpha` |
| **Lvl 3–5** | 14 | `alpha_mirror`, `fizz_buzz`, `buzz_fizz`, `count_alen`, `first_word`, `ft_strlen`, `min_two`, `occ_a`, `occ_z`, `printf_even`, `printf_interval`, `splithardcoded`, `string_palindrom`, `sumdigits` |

### Exam 02 — Third Exam ✅
*Level 5+ problems — 7 solved exercises.*

| Exercise | Concept |
|:---------|:--------|
| `cipher-c` | Caesar cipher in C |
| `ft_strcpy` | String copy (revisited under exam rules) |
| `itoa` | Integer to ASCII conversion |
| `palindrom_char` | String palindrome check |
| `palindrom_int` | Integer palindrome check |
| `search_and_replace` | Character replacement |
| `sum_degits` | Digit summing |

### Exam_F — Final Exam Preparation ✅
*44 solved exercises: the classic final-exam set (27) plus 17 extra drills.*

**The classic set** (`42-exames/`): `aff_a` · `aff_last_param` · `aff_z` · `first_word` · `ft_atoi` · `ft_countdown` · `ft_print_numbers` · `ft_putstr` · `ft_strcmp` · `ft_strcpy` · `ft_strlen` · `ft_swap` · `hello` · `inter` · `maff_alpha` · `maff_revalpha` · `max` · `only_a` · `only_z` · `print_bits` · `repeat_alpha` · `rev_print` · `rot_13` · `rotone` · `search_and_replace` · `swap_bits` · `ulstr`

**Extra drills** (root of `Exam_F/`): `char_palindrom` · `cipher` · `count_words` · `decrypt_cipher` · `fle` · `itoa` · `range` · `repeat_alpha` · `rev_inplace` · `rev_str` · `rot_13` · `rot_n` · `rrange` · `space_it` · `stars_it` · `stitch` · `sum_degits`

---

## Compilation Guide

### Standard C Modules (C00 – C07)

Exercises have no `main()` — they're graded by the Moulinette. To test locally, compile with the module's `ft_putchar.c` (or a personal `main.c` kept outside the folder):

```bash
cc -Wall -Wextra -Werror C00/ft_putchar.c C00/ft_print_alphabet.c -o test
./test   # → abcdefghijklmnopqrstuvwxyz
```

### Rush00 (3-file pattern)

```bash
cd rush/ex00
cc -Wall -Wextra -Werror ft_putchar.c rush00.c main.c -o rush00
./rush00 3 5   # → a 3×5 rectangle of 'A's and 'B's
```

### Shell Modules

No compilation — just make executable and run:

```bash
chmod +x Shell01/ex01/print_groups.sh
./Shell01/ex01/print_groups.sh
```

### What Happens During Linking

1. **Compile** — each `.c` becomes an object file (`.o`)
2. **Link** — the linker resolves every symbol: the call to `ft_putchar()` in `main.c` is bound to its definition in `ft_putchar.c`
3. **Fail case** — *"undefined reference to `ft_putchar`"* means the linker found the call but not the definition: you forgot to pass `ft_putchar.c` to `cc`

> 💡 **Tip:** `main.c` is for your eyes only. Delete it before evaluation — the Moulinette brings its own `main`.

---

## Norminette

The 42 coding standard — no function over 25 lines, 5 parameters max, one declaration per line, and 80 columns of discipline:

```bash
norminette C00 C01 C02 C03 C04 C05 C06 C07 \
           rush/ex00 rush/ex01 rush/ex02 rush/ex03 rush/ex04 \
           exam00 exam01 exam02 Exam_F
```

```bash
norminette -RCheckForbiddenSourceHeader   # deep check on a single file
```

Install: `pip3 install norminette`

---

## License

Released under the **MIT License** — see [LICENSE](LICENSE).

---

> *"Talk is cheap. Show me the code."* — Linus Torvalds

**`return (0);`** 🖥️
