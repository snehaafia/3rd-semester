#include <iostream>
using namespace std;


void bubbleSort(int a[], int n) {
    int pass, j, flag;

    for(pass = 1; pass < n; pass++) {
        flag = 0;
        for(j = 0; j < n - pass; j++) {
            if(a[j] > a[j + 1]) {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}


void showArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {50, 10, 40, 30, 20};


    cout << "Before shorted: ";
    showArray(a, 5);

    bubbleSort(a, 5);

    cout << "Sorted Array: ";
    showArray(a, 5);

    return 0;
}
