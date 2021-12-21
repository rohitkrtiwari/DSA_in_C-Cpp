#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       // Last i elements are already in place  
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {7, 3, 8, 4, 2, 6, 9, 5};
    int size = sizeof(arr)/sizeof(int);
    printf("\n\n\t***** Welcome to Bubble Sort Algorithim in C *****\n");
    printf("\n\n\t Unsorted Array: ");
    printArray(arr, size); 
    bubbleSort(arr, size);
    printf("\n\n\t Sorted Array: ");
    printArray(arr, size); 
    printf("\n\n");
    return 0;
}