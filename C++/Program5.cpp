#include <iostream>
using namespace std;

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
    cout<<"Enter the size of the array\n";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array\n";
    for (int i = 0; i < n; i++) {
        cout<<"Enter the element for position: "<<i<<"\n";
        cin>>arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout<<"The sorted array is\t";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
