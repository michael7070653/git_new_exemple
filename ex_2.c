#include <stdio.h>


int main(){

    int arr[5],max_index, max_num,i;
    int sum = 0;

     for(i = 0 ; i < 5; ++i)
    {
        printf("please enter anumber:\n");
        scanf("%d",&arr[i]);
    }
    max_num = arr[0];
    max_index = 0;
    for (i--; i>=0 ; i--)
    {
        if (max_num < arr[i])
        {
            max_num = arr[i];
            max_index = i ;
        }

    }

    printf("the max num in the arr is %d . \n in the index %d \n", max_num, max_index);
    return max_num;

    
}