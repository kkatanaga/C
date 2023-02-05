#include <stdio.h>
#define SIZE 50

void append(char string[SIZE]);
void replace(char iniString[SIZE], int firstPos, int lastPos);

int main(void)
{
    char input[SIZE];
    char search[SIZE];
    int first = 0;
    int last = 0;
    int searchCount = 0;

    for (int i = 0; i < SIZE; i++) {
        input[i] = '\0';
        search[i] = '\0';
    }
    
    puts("Enter a string:");
    scanf("%s", input);
    puts("Enter your search keyword: ");
    scanf("%s", search);

    append(input);
    replace(input, 9, 10);

    for (int a = 0; a < SIZE; a++) {
        if (search[a] != '\0')
            searchCount++;
        else
            break;
    }
    printf("%d\n", searchCount);
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < searchCount; y++) {
            if (input[x+y] == search[y]) {
                if (y == 0)
                    first = x;
                last = x+y;
            }
            else
                break;
        }
        if (last - first == searchCount - 1)
            break;
        else {
            first = 0;
            last = 0;
        }
    }


    replace(input, first, last);
}

void append(char string[SIZE])
{
    char appString[SIZE];
    int y = 0;
    char name[6] = "Keigo";

    for (int i = 0; i < SIZE; i++) {
        if (string[i] != '\0')
            appString[i] = string[i];
        else
            appString[i] = name[y++];
    }
    printf("Append: %s\n", appString);
}

void replace(char iniString[SIZE], int firstPos, int lastPos)
{
    int nameIn = 0;
    int newIn = 0;
    char name[6] = "Keigo";
    char newString[SIZE];
    for (int i = 0; i < SIZE; i++)
        newString[i] = '\0';
    
    for (int iniIn = 0; iniIn < SIZE; iniIn++) {
        while (iniIn == firstPos && nameIn != 5)
            newString[newIn++] = name[nameIn++];

        if (iniIn < firstPos || iniIn > lastPos)
            newString[newIn++] = iniString[iniIn];
    }

    printf("Replace: %s\n", newString);
}