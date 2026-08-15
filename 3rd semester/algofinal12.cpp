#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int m=s1.size(), n=s2.size();
    int dp[100][100];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=(dp[i-1][j]>dp[i][j-1])?dp[i-1][j]:dp[i][j-1];
        }
    }

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<dp[m][n]<<endl;

    string lcs="";
    int i=m,j=n;

    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            lcs=s1[i-1]+lcs;
            i--; j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }

    cout<<lcs;

    return 0;
}
