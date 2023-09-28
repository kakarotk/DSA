#include <iostream>
using namespace std;

#define max 10

int a[11] = {10, 15, 18, 27, 30, 32, 36, 39, 42, 44, 0};
int b[10];

void merging(int low, int mid, int high) {
    int l1, l2, i;
    for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
        if (a[l1] <= a[l2])
            b[i] = a[l1++];
        else
            b[i] = a[l2++];
    }
    while (l1 <= mid)
        b[i++] = a[l1++];
    while (l2 <= high)
        b[i++] = a[l2++];
    for (i = low; i <= high; i++)
        a[i] = b[i];
}

void mergeSort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merging(low, mid, high);
    }
}

int main() {
    int i;
    cout << "Original Array: ";
    for (i = 0; i < max; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    mergeSort(0, max - 1);

    cout << "Sorted Array: ";
    for (i = 0; i < max; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
