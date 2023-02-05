#include <stdio.h>
#define SIZE 50000
int main(void)
{
    long input[SIZE];
    int x = 0;
    int arraySize = 0;
    long array[SIZE];
    int counter = 0;

    for (int i = 0; i < SIZE; i++) {
        input[i] = 0;
        array[i] = 0;
    }

    while (scanf("%ld", &input[x]) && input[x] != -1) {
        x++;
    }
    arraySize = x - 1;
    input[x] = 0;
    
    for (int a = 0; a < arraySize - 1; a++) {
        for (int b = a; b <= a + 2; b++) {
            
            array[a] = array[a] + input[b];
            printf("array[%d]: %ld\n", a, array[a]);
        }
    }

    for (int y = 1; y < SIZE; y++) {
        if (array[y] > array[y - 1]) {
            counter++;
        }
    }
    
    printf("# of Increase: %d\n", counter);
}