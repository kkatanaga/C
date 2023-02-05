#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void)
{
    int n;
    int temp = 0;
    char cont = 'Y';

    do {
        puts("Enter a number:");
        while ( !scanf("%d", &n) || n < 1 || n > 1000)
            puts("Please enter a number between 1 and 1000");

        int random[n];
        srand (time(NULL));

        for (int i = 0; i < n; i++) {
            random[i] = rand() % 1000 + 1;
        }

        for (int x = 1; x < n; x++) {
            for (int y = 1; y <= n-x; y++) {
                if (random[y-1] < random[y]) {
                    temp = random[y-1];
                    random[y-1] = random[y];
                    random[y] = temp;
                }
            }
        }

        for (int z = 0; z < n; z++)
            printf("Index %d: %d\n", z, random[z]);
        
        puts("Do you wish to continue? (Y/N)");
        while ( !scanf(" %c", &cont) || ( (cont = toupper(cont)) != 'Y' && cont != 'N' ) )
            puts("Please choose between Yes (Y) or No (N):");

    } while (cont != 'N');
}
