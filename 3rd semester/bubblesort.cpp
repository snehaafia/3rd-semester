#include<iostream>
using namespace std;
void bubble (int a[],int n)
{
    int pass,j,flag;
    for(pass=1;pass<n;pass++)
    {
        flag =0;
        for(j=0;j<(n-pass);j++)
        {
            if(a[j]>a[j+1])
            {
                swap (a[j+1],a[j]);
                flag=1;
            }
        }
        if(flag==0)break;
    }
}
