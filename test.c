#include <stdio.h>
int main() {
    int n, reversed_n = 0, remainder, original_n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original_n = n;
    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignalN and reversedN are equal
    if (original_n == reversed_n)
        printf("%d is a palindrome.", original_n);
    else
        printf("%d is not a palindrome.", original_n);
    return 0;
}
