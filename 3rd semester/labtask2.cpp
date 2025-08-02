#include <iostream>
using namespace std;


void selectionSort(int arr[],int n) {
    for(int start = 0;start < n-1; start++) {
        int minIndex =start;
        for(int current =start+1; current<n;current++) {
            if(arr[current]<arr[minIndex]) {
                minIndex = current;
            }
        }
        if(minIndex!=start) {
            swap(arr[minIndex],arr[start]);
        }
    }
}


void binarySearch(int arr[],int n,int key) {
    int low=0,high=n-1;
    while(low<=high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            cout <<key<< "is found at index " <<mid<<endl;
            return;
        }
        else if(key >arr[mid]) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }

    cout<<key<<"not found!" <<endl;
}


void deleteAtPosition(int arr[],int &n,int pos) {
    if(pos < 0 || pos >= n) {
        cout<<"Invalid position!"<<endl;
        return;
    }
    for(int i=pos;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    n--;
}


void showArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}


int main() {
    int arr[ ]={64, 25, 12, 22, 11};
    int n = 5;

    cout << "Before sorting: ";
    showArray(arr, n);

    selectionSort(arr, n);

    cout << "After sorting: ";
    showArray(arr, n);


    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    deleteAtPosition(arr, n, pos);

    cout << "After deletion: ";
    showArray(arr, n);


    int value;
    cout << "Enter a number to search: ";
    cin >> value;
    binarySearch(arr, n, value);

    return 0;
}

