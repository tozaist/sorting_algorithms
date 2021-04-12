#include <iostream>
using namespace std;

// Swap values
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Print array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Divide array
int partition(int arr[], int p, int r) {
    int pivot = arr[p];
    int i = p, j = r;

    while(true){
        while(arr[j] > pivot) j--;  // Greater than pivot
        while(arr[i] < pivot) i++;  // Lesser than pivot
        if(i < j){                  // Swap i,j if i < j
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
        else return j;              // Return division point
    }
}

void quickSort(int arr[], int p, int r) {
    int n = 12;
    int q;
    if (p < r) {                    // If not sorted:
        q = partition(arr, p, r);   // Find division point
        quickSort(arr, p, q);       // Quicksort 1st part of the array
        quickSort(arr, q + 1, r);   // Quicksort 2nd part of the array
    }
}

int main()
{
    int arr[] = {34, 56, 74, 32, 43, 2, 45, 66, 98, 203, 123, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array: ";
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    cout << "Sorted array: ";
    printArray(arr, n);
}