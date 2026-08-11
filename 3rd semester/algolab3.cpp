#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int matrix[100][100];


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> matrix[i][j];


    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(matrix[j][j] < matrix[minIndex][minIndex])
                minIndex = j;
        }

        if(minIndex!=i){
            int temp = matrix[i][i];
            matrix[i][i] = matrix[minIndex][minIndex];
            matrix[minIndex][minIndex] = temp;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
