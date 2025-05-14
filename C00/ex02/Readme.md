# C00 -> ex02: `ft_print_reverse_alphabet`

![Exercise Screenshot](./ex02.png)

---

## Objective

Create a function that displays the lowercase English alphabet in **reverse order**, all on a single line, starting from `'z'` to `'a'`.

---

## Allowed Function

- Only `write()` from `<unistd.h>`

---

## Function Prototype

```c
void ft_print_reverse_alphabet(void);
````

---

## Task Requirements

* Print the alphabet from `z` to `a`, followed by a newline.
* Do **not** use functions like `printf()`, loops like `for`, or any standard C libraries beyond `write()`.
* Return type must be `void`.

---

## Understanding the Concept

### ASCII Table Basics

* `'a'` = `97`
* `'z'` = `122`

You can loop from `'z'` to `'a'` using:

```c
char i = 'z';
while (i >= 'a') {
    write(1, &i, 1);
    i--;
}
```

---

## Final Working Code

```c
#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    char i = 'z';
    while (i >= 'a') {
        write(1, &i, 1);
        i--;
    }
    write(1, "\n", 1);  // Optional newline
}
```

---

## Optional: Test with `main()`

```c
int main(void) {
    ft_print_reverse_alphabet();
    return 0;
}
```

---

## Other Answer Variations (For Learning)

### Using a Hardcoded String

```c
void ft_print_reverse_alphabet(void) {
    write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
}
```

---

### Using Integer ASCII Values

```c
void ft_print_reverse_alphabet(void) {
    int i = 122;
    while (i >= 97) {
        write(1, &i, 1);
        i--;
    }
    write(1, "\n", 1);
}
```

---

## Summary

* Use only `write()` from `<unistd.h>`
* Start from `'z'` (ASCII 122) and decrement to `'a'` (ASCII 97)
* Don't forget to add a newline character (`\n`) at the end for clean output
