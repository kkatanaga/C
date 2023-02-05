#include <stdio.h>

float diff(int input);

int main(void)
{
    int input = 0;
    float result = 0;

    printf("Please enter an integer number: ");
    while ( !scanf("%d", &input) || input <= 10)
        printf("The number is too small; enter a two-digit number: ");

    result = diff(input);
    printf("Result: %.2f\n", result);
}

float diff(int input)
{
    int prod = 1;
    float avg = 0;
    int digits = 0;

    do {
        prod *= input % 10;
        avg += input % 10;
        digits++;
    } while (input % 10 != 0 && (input /= 10) != 0);
    return prod - (avg/digits);
}