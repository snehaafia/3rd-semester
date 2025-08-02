#include <iostream>
using namespace std;

void OddNumbers(int arr[], int size) {
    cout << "Odd numbers are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[10]; // মোট ১০টা সংখ্যা রাখবো
    int predefined[5] = {2, 5, 8, 11, 14}; // আগের থেকে দেয়া ৫টা সংখ্যা

    // Step 1: আগে থেকে দেয়া ৫টা কপি করলাম
    for (int i = 0; i < 5; i++) {
        arr[i] = predefined[i];
    }

    // Step 2: ইউজার থেকে ৫টা ইনপুট নিই
    cout << "Enter 5 numbers: ";
    for (int i = 5; i < 10; i++) {
        cin >> arr[i];
    }

    // Step 3: সবগুলা সংখ্যার মধ্যে Odd বের করি
    OddNumbers(arr, 10);

    return 0;
}

