#include <stdio.h>

void printArray(int a[], int size)
{
    printf("\n{ ");
    for(int i=0; i<size; i++)
        (i==size-1) ? printf("%d ", a[i]) : printf("%d, ", a[i]);
    printf("}\n");
}

int binarySearch(int a[], int size, int element )
{
    int low = 0, high = size, mid;
    while(low<high)
    {
        mid = (low+high)/2;
        if(element == a[mid]) return mid;
        else if(element < a[mid]) high = mid-1;
        else if(element > a[mid]) low = mid+1;
    }
    return -1;
}

void main()
{
    int a[] = {12, 23, 34, 45, 56, 67, 89, 90};
    int size = sizeof(a)/sizeof(int);
    printArray(a, size);
    
    printf("\n Binary search result for %d is %d", 34, binarySearch(a, size, 34));
    printf("\n Binary search result for %d is %d", 56, binarySearch(a, size, 56));
    printf("\n Binary search result for %d is %d", 89, binarySearch(a, size, 89));
    printf("\n Binary search result for %d is %d", 1, binarySearch(a, size, 1));
}