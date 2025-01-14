#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n) {
    bool prime[n+1];
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }

    prime[0] = prime[1] = false; 

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the limit to find prime numbers: ");
    scanf("%d", &n);

    sieveOfEratosthenes(n);

    return 0;
}
