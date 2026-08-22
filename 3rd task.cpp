#include <iostream>
using namespace std;
int main()
{
    float H ,T ,sumH=0 ,sumT=0,avgT=0,avgH=0;
    for(int i=1; i<=5; i++)
    {
        cout<<i;
        cout<<"  Humidity :";
        cin>>H;
        cout<<"  Temperature :";
        cin>>T;
        sumH=sumH+H;
        sumT=sumT+T;
    }
    cout<<"sum Temperature"<<sumT<<endl;
    cout<<"sum Humidity"<<sumH<<endl;
    avgT=sumT/5;
    avgH=sumH/5;
    cout<<"Averge of Humidity :"<<avgH<<endl;
    cout<<"Averge of Temperature :"<<avgT<<endl;
    return 0;


}

