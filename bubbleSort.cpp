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

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {             // i - number of repetitions
        for (j = 0; j < n - i - 1; j++) {   // j - go over unsorted elements
            if (arr[j] < arr[j+1]) {        // if next element is greater than current:
                swap(&arr[j], &arr[j+1]);   // swap them
            }
        }
    }
}



int main()
{
    int arr[] = {4, 7, 3, 12, 6, 8, 1, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array: ";
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
}