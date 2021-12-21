#include <stdio.h>
void insertionSort(int arr[], int size)
{
    printf("\n\n\t Running Insertion Sort...");
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
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
    printf("\n\n\t***** Welcome to Insertion Sort Algorithim in C *****\n");
    printf("\n\n\t Unsorted Array: ");
    printArray(arr, size); 
    insertionSort(arr, size);
    printf("\n\n\t Sorted Array: ");
    printArray(arr, size); 
    printf("\n\n");
}