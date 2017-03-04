#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int* arr, int size)
{
    int min = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

<<<<<<< HEAD
    const int min = min_element(arr, 10);
||||||| merged common ancestors
    const int min = min_element(arr, 10);
=======
    const int min = min_element(arr, 10);
>>>>>>> Count array items with macro

    printf("Array: ");
    int i;
<<<<<<< HEAD
    for (i = 0; i < 10; ++i) {
||||||| merged common ancestors
    for (i = 0; i < 10; ++i) {
=======
    for (i = 0; i < 10; ++i) {
>>>>>>> Count array items with macro
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Min element: %d\n", min);

    return 0;
}
