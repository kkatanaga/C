#include <stdio.h>

int main(void)
{
    int input[30];
    int result = 1;
    for (int x = 0; x < 30; x++) {
        input[x] = 0;
    }

    puts("My Name Is: Keigo Katanaga");
    puts("**************************");
    puts("Please enter 10 integer numbers separated by comma, press \"Enter\" after that:");
    for (int i = 0; i < 10; i++) {
        scanf("%d,", &input[i]);
        if (i % 2 != 0 && input[i] % 2 == 0 && input[i] != 0)
            result *= input[i];
    }
    puts("**************************");
    printf("Result: %d\n", result);
    puts("**************************");
}