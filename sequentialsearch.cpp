#include <iostream>
using namespace std;

int arraysize , val;

void disp(int size);
void search(int val, int size);
int arr[20];

int main() {
    int i, ch;
    cout << "Enter the size of array : ";
    cin >> arraysize;
    cout << "Enter "<<arraysize<< " integers\n";
    for (i = 0; i < arraysize; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n****Main Menu****\n";
        cout << "1.Display\n";
        cout << "2.Search\n";
        cout << "Enter your Choice : ";
        cin >> ch;
        switch (ch) {
            case 1:
                disp(arraysize);
                break;
            case 2:
                cout << "Enter value to be search : ";
                cin >> val;
                search(val, arraysize);
                break;
        }
    } while (ch != 2);

    return 0;
}

void search(int val, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == val) {
            cout << "Value is found at " << i << " position.";
            break;
        }
    }
    if (i == size) {
        cout << "Value is not found.";
    }
}

void disp(int size) {
    int i;
    cout << "Given Array :\n";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
