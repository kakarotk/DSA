#include<iostream>
using namespace std;

int arr[20];
int n;

void disp() {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted successfully!" << endl;
}

void reverse(int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Array reversed successfully!" << endl;
}

int search(int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int i;
    int opt, val, choice;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    
    while (choice != 5) {
        cout << "********** MAIN MENU ************" << endl;
        cout << "1. Display" << endl;
        cout << "2. Search" << endl;
        cout << "3. Sort" << endl;
        cout << "4. Reverse" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                disp();
                break;

            case 2:
                cout << "Enter a value to search: ";
                cin >> val;
                i = search(val);
                if (i == -1) {
                    cout << "Value not found" << endl;
                } else {
                    cout << "Value found at location: " << i + 1 << " (" << val << ")" << endl;
                }
                break;

            case 3:
                bubblesort(n);
                break;

            case 4:
                reverse(n);
                break;

            case 5:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }
    
    return 0;
}
