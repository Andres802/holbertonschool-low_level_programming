#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int x = 45;
    int i;
    printf("%lu \n", sizeof(x));
    int *p = malloc(4 * sizeof(x));
    for(i = 0; i < 10; i++)
    {
        printf("%d \n", p[i]);
        p++;
    }
    return 0;
}