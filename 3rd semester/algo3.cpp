#include <iostream>
using namespace std;
int main()
{
    int n,key,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"Enter the element to search :";
    cin>>key;
    for(int i=0;i<n; i++)
    {
        if (a[i]==key)
        {
            cout<<"Elemet found a location : "<<i+1;
            flag=1;
            break;
        }
    }
        if (flag ==0){
            cout<<"Element not fount !!";
        }
        return 0;
}

