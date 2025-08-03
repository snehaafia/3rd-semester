#include<iostream>
using namespace std;
void input(int arr[][4],int n){
cout<<"Enter element of the array\n";
for(int i=0;i<n;i++)
{
    for(int j=0;j<4;j++){

cin>>arr[i][j];
}}}
int main(){
int r,c=4;
cout<<"Enter the row of the array :";
cin>>r;
int arr[r][c];
input(arr,4);
cout<<"YOU HAVE ENTERED :";
cin>>r;
int arrr[r][4];
input (arr,r)

}
