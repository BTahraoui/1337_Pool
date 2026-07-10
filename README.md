# 🧪 1337 Pool — C00

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

My solutions to the **C00** module of the [1337](https://1337.ma) / 42 School cursus — the very first dive into C programming at the pool. These exercises build core procedural foundations: system calls, loops, conditionals, and recursion, all while getting comfortable with `write(2)` as the only allowed output function.

---

## 📁 Exercises

| # | Exercise | Description | Key Concepts |
|---|----------|-------------|--------------|
| 00 | [`ft_putchar`](C00/ft_putchar.c) | Write a single character to stdout | `write(2)`, basic syscall |
| 01 | [`ft_print_alphabet`](C00/ft_print_alphabet.c) | Print `a` to `z` in order | `while` loop, `char` increment |
| 02 | [`ft_print_reverse_alphabet`](C00/ft_print_reverse_alphabet.c) | Print `z` to `a` backwards | Decrement loop, reverse iteration |
| 03 | [`ft_print_numbers`](C00/ft_print_numbers.c) | Print `0` to `9` | Numeric → ASCII mapping |
| 04 | [`ft_is_negative`](C00/ft_is_negative.c) | Print `N` if negative, `P` otherwise | `if/else`, conditionals |
| 05 | [`ft_print_comb`](C00/ft_print_comb.c) | Print all ascending 3-digit combos (`012, 013, … 789`) | Nested loops, comma-separated output |
| 06 | [`ft_print_comb2`](C00/ft_print_comb2.c) | Print all ascending 2-number combos (`00 01, 00 02, … 98 99`) | Two-digit formatting, `div`/`mod` |
| 07 | [`ft_putnbr`](C00/ft_putnbr.c) | Print any integer (handles `-2147483648`) | Recursion, `INT_MIN` edge case |

---

## 🧠 What I learned

- How to use the **`write`** system call (`unistd.h`) — the only output function permitted in the 42 pool.
- **ASCII arithmetic**: `'0'` + `n` = digit character; `'a'` + `n` = letter.
- **Loop design** — `while` loops with `char` or `int` counters, and the discipline of resetting inner counters.
- **Nested loops** — `ft_print_comb` uses three levels of `while` to enforce `a < b < c` ordering.
- **Two-digit formatting** — extracting tens and ones via `/ 10` and `% 10` in `ft_print_comb2`.
- **Recursion** — `ft_putnbr` calls itself to print multi-digit numbers.
- **Edge-case thinking** — the `INT_MIN` special case in `ft_putnbr` (since `-INT_MIN` overflows on two's complement).

---

## 🔧 Build & Test

At 42/1337 you don't use `main()` in the submission files — exercises are verified by the **Moulinette** (automated grader). But you can test locally with a quick wrapper:

```c
// main.c — local test harness
int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    ft_print_numbers();
    write(1, "\n", 1);
    ft_is_negative(-5);
    write(1, "\n", 1);
    ft_print_comb();
    write(1, "\n", 1);
    ft_print_comb2();
    write(1, "\n", 1);
    ft_putnbr(42);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c C00/ft_putchar.c C00/ft_print_alphabet.c
./a.out
```

---

## 📜 License

This project is for learning purposes. Licensed under the [MIT License](LICENSE) — feel free to use, learn from, and adapt.

---

> **Badr Tahraoui** — 1337 Benguerir
> [GitHub](https://github.com/UzalSahn)
