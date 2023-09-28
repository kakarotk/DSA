#include <iostream>
using namespace std;

int main() {
    int c, first, last, middle, n, search, array[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (c = 0; c < n; c++)
        cin >> array[c];

    cout << "Enter value to find: ";
    cin >> search;

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            cout << search << " found at location " << middle + 1 << endl;
            break;
        } else if (array[middle] > search)
            last = middle - 1;

        middle = (first + last) / 2;
    }

    if (first > last)
        cout << "Not found! " << search << " is not present in the list." << endl;

    return 0;
}
