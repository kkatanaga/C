#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* input;
    int count = 1;

    do {
        input = malloc( (count * 13) * sizeof(int) );
    } while ( scanf("%12s", input[count++]) && isdigit(input[0]) );

}