/*
 * C program to use bubble sort recursively to sort the array 
 */

#include <stdio.h>

void display(int arr[], int size) 
{
    int itr = 0;
    for (itr = 0; itr < size; itr++) {
        printf("%d\t",arr[itr]);
    }
    printf("\n");
}

void swap (int *x_ptr, int *y_ptr) 
{
    int temp;
    temp = *x_ptr;
    *x_ptr = *y_ptr;
    *y_ptr = temp;
}

void bubble_sort (int arr[], int size) 
{
    int itr = 0;
    if (size == 1)
        return;
    
    /* It will shift largest element to the list */
    for (itr = 0; itr < size - 1; itr++) {
        if (arr[itr] > arr[itr + 1] ) {
            swap(&arr[itr], &arr[itr + 1]);
        }
    }
    /* recursive calling for remaing array */
    bubble_sort(arr, size - 1);
}

int main ()
{
    int arr[] = { 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    printf("The sorted array\n");
    display(arr, size);
    return 0;
}
