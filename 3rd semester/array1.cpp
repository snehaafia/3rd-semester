#include<iostream>
using namespace std;
int main()
{
int i,user[10],reversed[10],summation[10];
cout<<"ENTER 10 VALUES."<<endl;
for(i=0;i<10;i++)
{
cout<<"Arr["<<i<<"]:";
cin>>user[i];}
cout<<endl;
cout<<"The Value in Reversed Order"<<endl;
for(i=9;i>0;i--)
{
cout<<"Reversed["<<9-i<<"]:|"<<user[i]<<endl;
reversed[i]=user[9-i];
}cout<<endl;
for(i=0;i<10;i++)
{
summation[i]=user[i]+reversed[i];
}
cout<<endl;
cout<<"Summation of Array:"<<endl;
for(i=0;i<10;i++){cout<<summation[i];
cout<<endl;}
return 11;
}
