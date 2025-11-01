
#include <stdio.h>
int factorial_iterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
    fact *= i;
    }
    return fact;
}
int factorial_recursive(int n) {
    if (n == 0 || n == 1)
    return 1;
    else
    return n * factorial_recursive(n - 1);
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

printf("\nFactorial using iteration: %d", factorial_iterative(num));
printf("\nFactorial using recursion: %d", factorial_recursive(num));

 return 0;
}
