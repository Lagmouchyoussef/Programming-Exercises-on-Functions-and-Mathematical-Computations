#include <stdio.h>

void display_even_numbers(int N) {
    for (int i = 2; i <= N; i += 2) {
        printf("%d\n", i);
    }
}

int is_prime(int N) {
    if (N <= 1) return 0;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) return 0;
    }
    return 1;
}

int count_primes(int N) {
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) count++;
    }
    return count;
}

int is_multiple(int n1, int n2) {
    if (n1 % n2 == 0) return 1;
    else return -1;
}

void display_multiples(int A, int B) {
    for (int i = 1; i <= A; i++) {
        if (i % B == 0) printf("%d\n", i);
    }
}

int main() {
    int N, n1, n2, A, B;

    printf("Enter an integer N: ");
    scanf("%d", &N);
    printf("Even numbers between 1 and N:\n");
    display_even_numbers(N);

    printf("Enter an integer N to check if it is prime: ");
    scanf("%d", &N);
    printf("%d\n", is_prime(N));

    printf("Enter an integer N to count primes up to N: ");
    scanf("%d", &N);
    printf("Number of primes between 1 and N: %d\n", count_primes(N));

    printf("Enter an integer n1: ");
    scanf("%d", &n1);
    printf("Enter an integer n2: ");
    scanf("%d", &n2);
    printf("%d\n", is_multiple(n1, n2));

    printf("Enter an integer A: ");
    scanf("%d", &A);
    printf("Enter an integer B: ");
    scanf("%d", &B);
    printf("Multiples of B in [1, A]:\n");
    display_multiples(A, B);

    return 0;
}