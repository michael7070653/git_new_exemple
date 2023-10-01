#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int sum = 0;

    for(i = 0 ; i < 5; ++i)
    {
        printf("please enter anumber:\n");
        scanf("%d",&arr[i]);
    }
    
    for(i--; i>= 0; i--)
    {
        sum += arr[i];
        printf("the number in index %d is %d\n",i,arr[i]);
    }
    printf("the sum of th area is %d\n", sum);

    return 0;



    


        
}