# push_swap

`push_swap` is a sorting algorithm project from [42 School](https://42.fr).  
The goal is to sort a stack of integers using only a restricted set of stack operations, while minimizing the number of moves.

---

## 📌 Project Overview

- You are given a list of integers as arguments.
- Two stacks (`a` and `b`) are used.
- The program must output a sequence of operations that sorts stack `a` in ascending order.
- The challenge is to **minimize the number of operations**.

---

## 🛠️ Allowed Operations

- **sa**: swap the first 2 elements at the top of stack `a`.
- **sb**: swap the first 2 elements at the top of stack `b`.
- **ss**: `sa` and `sb` at the same time.
- **pa**: push the first element of stack `b` on top of stack `a`.
- **pb**: push the first element of stack `a` on top of stack `b`.
- **ra**: rotate stack `a` (first element becomes last).
- **rb**: rotate stack `b`.
- **rr**: `ra` and `rb` at the same time.
- **rra**: reverse rotate stack `a` (last element becomes first).
- **rrb**: reverse rotate stack `b`.
- **rrr**: `rra` and `rrb` at the same time.

---

## ⚙️ Compilation

```sh
make        # builds push_swap
make clean  # removes objects
make fclean # removes binary and objects
make re     # full rebuild
