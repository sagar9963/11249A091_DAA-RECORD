#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1;
    int nextTerm;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("\n");
    return 0;
}
