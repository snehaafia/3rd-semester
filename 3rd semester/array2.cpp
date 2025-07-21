#include<iostream>
using namespace std;
int main()
{


    int i, user[10];
    cout <<"Enter 10 values. "<<endl;
for (i=0;i<10;i++)
    {
        cout<<"Arr["<<i<<"]:";
        cin>>user[i];
    }
    cout<<endl;
    cout<<"_-_-_-_-_-_-_-_-_-_-"<<endl;
    cout<<endl;
    for (i=0;i<10;i++)
    {
        cout<<"Value"<<i+1<<":"<<user[i]<<endl;
    }
    return 11;
}

