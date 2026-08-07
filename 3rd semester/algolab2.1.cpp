#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100][100];


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }


    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j][0] < arr[minIndex][0])
            {
                minIndex = j;
            }
        }


        int temp = arr[i][0];
        arr[i][0] = arr[minIndex][0];
        arr[minIndex][0] = temp;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
