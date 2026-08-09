#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int matrix[100][100];
    int maxVal=0;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
            if(j==0 && matrix[i][0] > maxVal)
                maxVal = matrix[i][0];
        }
    }


    int count[1000] = {0};
    for(int i=0;i<n;i++)
        count[matrix[i][0]]++;

    int output[100][100];
    int index=0;

    for(int i=0;i<=maxVal;i++){
        while(count[i]>0){
            for(int j=0;j<n;j++){
                if(matrix[j][0]==i){
                    for(int k=0;k<n;k++)
                        output[index][k] = matrix[j][k];
                    index++;
                    matrix[j][0]=-1;
                    break;
                }
            }
            count[i]--;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << output[i][j] << " ";
        cout << endl;
    }
    return 0;
}
