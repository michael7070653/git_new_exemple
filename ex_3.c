#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int pivot = l + r / 2;
 
        // Check if x is present at mid
        if (arr[pivot] == x)
            return pivot;
 
        // If x greater, ignore left half
        if (arr[pivot] < x)
            l = pivot + 1;
 
        // If x is smaller, ignore right half
        else
            r = pivot - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}
 
// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40,10 };
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int x = 4;
    int result = binarySearch(arr, 0, n , x);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result);
    return 0;
}



