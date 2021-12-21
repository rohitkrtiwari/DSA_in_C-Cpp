#include <stdio.h>
void selectionSort(int arr[], int size)
{
    printf("\n\n\t Running Selection Sort...");
    int indexOfMin, temp;
    for (int i=0; i<size-1; i++)
    {
        indexOfMin = i;
        for (int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // Swap arr[i] and arr[indexOfMin]
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}
void printArray(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if(i == 0) printf("%d", arr[i]);
        else printf(", %d", arr[i]);
    }
    printf("}");    
}
void main()
{
    int arr[] = {7, 3, 8, 4, 2, 6, 9, 5};
    int size = sizeof(arr)/sizeof(int);
    printf("\n\n\t***** Welcome to Selection Sort Algorithim in C *****\n");
    printf("\n\n\t Unsorted Array: ");
    printArray(arr, size); 
    selectionSort(arr, size);
    printf("\n\n\t Sorted Array: ");
    printArray(arr, size); 
    printf("\n\n");
}