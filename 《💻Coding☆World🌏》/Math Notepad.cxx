#include <stdio.h>

int main() {

    double A, B, C;
    int Z;

    printf("Input 3 numbers : ");
    scanf("%lf %lf %lf", &A, &B, &C);

    printf("\n===== Engineering Calculator =====\n");

    printf("A + B + C = %.2lf\n", A + B + C);
    printf("A - B - C = %.2lf\n", A - B - C);
    printf("A * B * C = %.2lf\n", A * B * C);

    printf("\n===== Comparison Operators =====\n");

    Z = (A > B);
    printf("A > B  = %d\n", Z);

    Z = (A < B);
    printf("A < B  = %d\n", Z);

    Z = (A >= B);
    printf("A >= B = %d\n", Z);

    Z = (A <= B);
    printf("A <= B = %d\n", Z);

    Z = (A == B);
    printf("A == B = %d\n", Z);

    Z = (A != B);
    printf("A != B = %d\n", Z);

    printf("\n===== Square =====\n");

    printf("A^2 = %.2lf\n", A * A);
    printf("B^2 = %.2lf\n", B * B);
    printf("C^2 = %.2lf\n", C * C);

    printf("\n===== Cube =====\n");

    printf("A^3 = %.2lf\n", A * A * A);
    printf("B^3 = %.2lf\n", B * B * B);
    printf("C^3 = %.2lf\n", C * C * C);

    printf("\n===== Increment / Decrement =====\n");

    int N = 10;

    printf("N = %d\n", N);

    N++;
    printf("N++ = %d\n", N);

    N++;
    printf("N++ = %d\n", N);

    N--;
    printf("N-- = %d\n", N);

    return 0;
}