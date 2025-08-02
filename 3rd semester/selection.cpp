#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int startindex, currentindex, minimumindex;
    for(startindex = 0; startindex < n - 1; startindex++) {
        minimumindex = startindex;
        for(currentindex = startindex + 1; currentindex < n; currentindex++) {
            if(arr[currentindex] < arr[minimumindex]) {
                minimumindex = currentindex;
            }
        }
        if(minimumindex != startindex) {
            swap(arr[minimumindex], arr[startindex]);
        }
    }
}
void linearSearch (int arr[],int value,int n){
int i,flag=0,index;
for(i=0;i<n;i++){
    if (arr[i]==value)
    {
        flag=1;
        index=i;
        break;

    }
}
if(flag==1)
{
    cout<<value <<"is found at index"<< index<<endl;}
    else
    {
        cout<<"not found!!\n";
    }
}

void showArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
int n;

    cout << "Before shorted array: ";
    showArray(arr, 5);
    cout<<"enter a number of sreaching :";
    cin>>n;
    linearSearch(arr,n,5);

    selectionSort(arr, 5);

    cout << "After Sorted array: ";
    showArray(arr, 5);

    return 0;
}
