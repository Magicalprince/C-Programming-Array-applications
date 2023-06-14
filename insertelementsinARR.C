#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, numElements;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of elements to insert: ");
    scanf("%d", &numElements);

    printf("Enter the elements to insert:\n");
    for (int i = 0; i < numElements; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[size + i]);
    }

    size += numElements;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
