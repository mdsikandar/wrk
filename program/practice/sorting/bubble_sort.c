/*
 * C program for bubble sort
 * In first pass the largest will come to the last
 * Algorithm compares the first two elements and swaps
 * if required then compare next two.. till the end in
 * one pass.it is repeated till all get sorted.
 */

#include <stdio.h>
typedef enum {false, true } bool;
void swap (int *x_ptr, int *y_ptr)
{
    int temp;
    temp = *x_ptr;
    *x_ptr = *y_ptr;
    *y_ptr = temp;
}

void display ( int arr[], int size)
{
    int loop = 0;
    for (loop = 0; loop < size ; loop++) {
        printf("%d\t", arr[loop]);
    }
    printf("\n");
}

void bubble_sort (int arr[], int size)
{
    int loop1 = 0, loop2 = 0;
    bool swapped;
    for ( loop1 = 0; loop1 < size - 1; loop1++) {
        swapped = false;
        /* largest element will go at the end */
        for ( loop2 =0; loop2 < (size -loop1 -1); loop2++) {
            if (arr[loop2] > arr[loop2 + 1]) {
                swap (&arr[loop2], &arr[loop2 + 1]);
                swapped = true;
            }
        }
        /* if no two elements were swapped by inner loop, then break */
        if (swapped == false)
            break;
    }
}

int main() 
{
    int arr[] = { 5, 4, 3, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    printf("The sorted array\n");
    display(arr, size);
    return 0;
}

