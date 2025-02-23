#include <stdio.h>

int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int fact_while(int n) {
    int result = 1;
    int i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

int puissance(int n, int p) {
    int result = 1;
    for (int i = 1; i <= p; i++) {
        result *= n;
    }
    return result;
}

int binome(int n, int p) {
    return fact(n) / (fact(n - p) * fact(p));
}

double exp_series(int n, double x) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result += puissance(x, i) / fact(i);
    }
    return result;
}

int main() {
    int n, p, m;
    double x;

    printf("Enter an integer n to calculate factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d: %d\n", n, fact(n));

    printf("Enter an integer n to calculate factorial using while loop: ");
    scanf("%d", &n);
    printf("Factorial of %d: %d\n", n, fact_while(n));

    printf("Enter integers n and p to calculate n^p: ");
    scanf("%d %d", &n, &p);
    printf("%d^%d: %d\n", n, p, puissance(n, p));

    printf("Enter integers n and m to calculate binomial coefficient C(n, m): ");
    scanf("%d %d", &n, &m);
    printf("C(%d, %d): %d\n", n, m, binome(n, m));

    printf("Enter an integer n and a double x to calculate exp(x) using series expansion: ");
    scanf("%d %lf", &n, &x);
    printf("exp(%lf) approximation: %lf\n", x, exp_series(n, x));

    return 0;
}