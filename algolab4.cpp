#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int matrix[100][100];
    int diag[100];
    int maxVal=0;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
            if(i==j && matrix[i][i] > maxVal)
                maxVal = matrix[i][i];
        }
    }


    for(int i=0;i<n;i++)
        diag[i] = matrix[i][i];


    int count[1000]={0};
    for(int i=0;i<n;i++)
        count[diag[i]]++;

    int index=0;
    for(int i=0;i<=maxVal;i++){
        while(count[i]>0){
            diag[index++] = i;
            count[i]--;
        }
    }


    for(int i=0;i<n;i++)
        matrix[i][i] = diag[i];


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
