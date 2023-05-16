#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, *sum,c=0;
    float *average;

    sum = (int*)malloc(sizeof(int));
    *sum = 0;

    for (i = 100; i <= 200; i++) {
        *sum += i;
        c++;
    }

    printf("\n sum = %d", *sum);

    average = (float*)malloc(sizeof(float));
    *average = (*sum) / c;

    printf("\n average = %f", *average);

    free(sum);
    free(average);

    return 0;
}
