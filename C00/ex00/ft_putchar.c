#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);  // Write 1 byte from the address of 'c' to standard output (stdout)
}

// Main function to test ft_putchar
// int main(void) {
//     ft_putchar('Z');   // Prints the character 'Z'
//     ft_putchar('\n');  // Prints a newline for clean output
//     return 0;
// }
