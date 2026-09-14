#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A <= 0 || B <= 0 || C <= 0 || A + B <= C || A + C <= B || B + C <= A) {
        printf("Not a Triangle");
    } else if (A == B && B == C) {
        printf("Equilateral Triangle");
    } else if (A == B || B == C || A == C) {
        printf("Isosceles Triangle");
    } else {
        printf("Scalene Triangle");
    }

    return 0;
}