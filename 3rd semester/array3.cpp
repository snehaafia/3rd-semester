#include<iostream>
using namespace std;
void input(int arr[],int n){
cout<<"Enter "<<n<<" element of the array\n";
int i=0;
do{
    cin>>arr[i];
    i++;
}
while(i<n);
}
void output(int arr[], int n) {
    cout << "You have entered array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

int siz,i,n;

cout<<"enter the size of array";
cin>>siz;
int  arr[siz];
input(arr,siz);//fuction call
output (arr,siz);

cout<<"You have entered;";
for(i=0;i<siz;i++)

{
    cout<<arr[i]<<" ";
}
cout<<arr[siz]<<" ";
}
