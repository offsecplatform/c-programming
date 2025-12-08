#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the term number");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {   
        
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        
    }
    return 0;
}
