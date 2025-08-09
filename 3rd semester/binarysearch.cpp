#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2; // মাঝের ইনডেক্স বের করা

        if (arr[mid] == target) {
            return mid; // পেলে ইনডেক্স রিটার্ন করো
        }
        else if (arr[mid] < target) {
            low = mid + 1; // ডান দিকে খোঁজা
        }
        else {
            high = mid - 1; // বাম দিকে খোঁজা
        }
    }
    return -1; // না পেলে -1 রিটার্ন
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int target = 50;

    int result = binarySearch(numbers, n, target);

    if (result != -1) {
        cout << target << " পাওয়া গেছে ইনডেক্স " << result << " এ" << endl;
    } else {
        cout << target << " পাওয়া যায়নি" << endl;
    }

    return 0;
}
