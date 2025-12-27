*This project has been created as part of the 42 curriculum by mseghrou.*

# Push_swap — 42 Project

---

## Description

`push_swap` is a sorting algorithm project developed in C. The goal is to sort a stack of integers in ascending order using **two stacks (A and B)** and a limited set of operations, while minimizing the **number of instructions**.

The project emphasizes:

* Implementing fundamental data structures (stacks and nodes)
* Designing efficient sorting strategies for small and large datasets
* Handling memory and input safely
* Writing modular, maintainable C code

Allowed operations include:

* `sa` / `sb` : swap the first two elements of stack A/B
* `ss` : swap both stacks simultaneously
* `pa` / `pb` : push the top element from one stack to the other
* `ra` / `rb` : rotate stack up
* `rr` : rotate both stacks
* `rra` / `rrb` : reverse rotate stack
* `rrr` : reverse rotate both stacks

---

## Instructions

### Compilation

To compile the project:

```bash
make
```

### Usage

Run the executable with a list of integers:

```bash
./push_swap 3 2 5 1 4
```

The program outputs a sequence of operations to sort the stack.

**Notes:**

* All inputs must be valid integers
* Duplicate numbers are not allowed
* Negative numbers are supported

---

## Project Structure

```
push_swap/
│
├── lib_utlis/
│   ├── ft_atoi.c
│   ├── ft_split.c
│   ├── ft_strdup.c
│   ├── ft_strlen.c
│   └── ft_substr.c
│
├── operations/
│   ├── push.c
│   ├── swap.c
│   ├── rotate.c
│   └── reverse_rotate.c
│
├── sorts/
│   ├── sort_2.c
│   ├── sort_3.c
│   ├── sort_4.c
│   └── sort_5.c
│
├── free_split.c
├── indexing.c
├── main.c
├── errors_free.c
├── parsing.c
├── push_swap.c
└── stack_utils.c
```

---

## Algorithm Strategy

* For **small stacks (2-5 elements)**, use a minimal series of operations (`sort_2.c`, `sort_3.c`, etc.)
* For **larger stacks**, index elements and push subsets to stack B, then reintegrate in sorted order
* Aim to **minimize the total number of moves**

---

## Technical Choices

* **Stacks as linked lists** for dynamic size management
* **Indexing system** to simplify comparisons
* **Separation of operations** into individual functions for clarity (`push.c`, `swap.c`, `rotate.c`, etc.)
* **Memory management** with careful allocation and freeing to avoid leaks

---

## Resources

* [The least amount of moves with two stacks](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
* [The project that will make you sort numbers](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap)
* [Sorting Algorithms](https://medium.com/@abdelhadi-salah/push-swap-42-e0abfe0e0fef)

**AI Usage:**

Artificial intelligence was used exclusively to explain the project and improve the clarity of the documentation. The author performed all programming logic, implementation, and algorithm design work manually.

---

## Example

```bash
$ ./push_swap 3 2 1
sa
ra
```

This sequence sorts the stack `[3,2,1]` into ascending order.

