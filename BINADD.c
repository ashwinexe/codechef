#include<stdio.h>
#include<math.h>
int add(int A, int B);
int convert(int n);

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int A,B;
        int limit = pow(10,5);
        scanf("%d %d", &A, &B);
        if(A == 1 || A == 0 && B == 1 || B == 0){
        int a = convert(A);
        int b = convert(B);
        if(a + b < limit)
        printf("%d", add(a,b));
        }
    }
}

int add(int A, int B)
{
    int counter=0;
    while(B>0)
    {
       
        int U = A^B;
        int V = B&A;
        A = U;
        B = V*2;
        counter++;
    }
    return counter;
}
int convert(int n)
{
    int dec = 0, i = 0, rem;
while(n != 0){
rem = n % 10;
n /= 10;
dec += rem*pow(2,i);
++i;
 }
 return dec;
}