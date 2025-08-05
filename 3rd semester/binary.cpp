#include <iostream>
#include <fstream> // for file
using namespace std;

int binary(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    ofstream outputFile("search_result.txt"); // create or open file

    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number you want to search: ";
    cin >> target;

    int index = binary(arr, size, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
        outputFile << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
        outputFile << "Element not found in the array." << endl;
    }

    outputFile.close(); // close file
    return 0;
}
