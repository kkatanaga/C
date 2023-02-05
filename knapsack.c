#include <stdio.h>

int knapsack(int count, int cap, int val[], int w[]) 
{
    int max = 0;

    for (int i = 0; i < count; i++) {
        if (w[i] <= cap && max < val[i])
        {
            max = val[i];
            if (w[i] < cap) 
            {
                for (int j = i + 1; j < count; j++) {
                    if (w[i] + w[j] <= cap && max < val[i] + val[j])
                        max = val[i] + val[j];
                }
                for (int j = count - 1; j > i; j--) {
                    if (w[i] + w[j] <= cap && max < val[i] + val[j])
                        max = val[i] + val[j];
                }
            }
        }
    }

    return max;
}

int main(void) 
{
    int items = 3;
    int capacity = 3;
    int values[] = {1, 2, 3};
    int weight[] = {4, 5, 6};

    int max_val = knapsack(items, capacity, values, weight);
    printf("The max value is: %d\n", max_val);
}