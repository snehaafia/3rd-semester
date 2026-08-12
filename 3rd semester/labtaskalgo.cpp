#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    char arr[100];
    cin >> arr;
    for(int i=1;i<n;i++)
    {
        char key=arr[i];
        int j=i-1;

        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;


    char target;
    cin>>target;

    int low=0,high=n-1;
    int found =-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==target)
        {
            found=mid;
            break;
        }
        else if(arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }

    if(found!=-1)
        cout<<"Found index"<<found;
    else
        cout<<"Not found";

    return 0;
}
