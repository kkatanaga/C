#include <stdio.h>
#include <string.h>

int main(void)
{
    char direction[9];
    int level = 0;
    int zAxis = 0;
    int yAxis = 0;
    int aim = 0;

    do {
        scanf("%s", direction);
        scanf("%d", &level);

        if (strcmp(direction,"forward") == 0) {
            zAxis += level;
            yAxis += (aim * level);
        }
        else if (strcmp(direction,"down") == 0)
            aim += level;
        else if (strcmp(direction,"up") == 0)
            aim -= level;
        else
            puts("Test");

    } while (strcmp(direction,"exit") != 0);

    printf("Result: %d\n", zAxis * yAxis);
    printf("Forward: %d\n", zAxis);
    printf("Depth: %d\n", yAxis);
}