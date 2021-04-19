#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {   int i,q,sub;
        int max=0,input=0;
        int solution=0
        int arr[9]={0};
        scanf("%d", &sub);

        for(i=0; i<sub ;i++){
            scanf("%d %d", &q, &input);

        if(q <= 8)
        {

            if( arr[q]< input)
            arr[q] = input;

        }

        else
        arr[q]=0;
    }
    for(i=0; i<9; i++)
    {
        solution += arr[i];
    }
    printf("%d\n",solution);

 }
}
