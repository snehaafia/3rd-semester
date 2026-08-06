#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[100][100];


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> matrix[i][j];


    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n-1;j++){
            if(matrix[j][n-1] < matrix[minIndex][n-1])
                minIndex = j;
        }

        if(minIndex != i){
            for(int k=0;k<n;k++){
                int temp = matrix[i][k];
                matrix[i][k] = matrix[minIndex][k];
                matrix[minIndex][k] = temp;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}

