#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int partition_element = partition(arr, low, high);
        quicksort(arr, low, partition_element - 1);
        quicksort(arr, partition_element + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the element for position: %d\n", i);
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("The sorted array is\t");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
