#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d %d", &m, &n);
    int pizza_type[n];
    for(i=0; i<n; i++)
    scanf("%d", &pizza_type[i]);
    return 0;
}