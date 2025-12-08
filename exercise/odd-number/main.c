# print odd number from 1 - 100
#include <stdio.h>

int main() {

    for (int i= 0; i < 100; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i+1);
        }
    }
    printf("\n");
    return 0;
}
