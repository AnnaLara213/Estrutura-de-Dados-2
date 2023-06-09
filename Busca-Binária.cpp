#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    int index = binarySearch(arr, size, key);

    if (index != -1)
        printf("Elemento %d encontrado no índice %d.\n", key, index);
    else
        printf("Elemento %d não encontrado.\n", key);

    return 0;
}

