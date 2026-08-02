#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int lcs(char X[], char Y[]) {
    int m = strlen(X);
    int n = strlen(Y);

    int dp[100][100];

    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            dp[i][j] = 0;
        }
    }


    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(X[i-1] == Y[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    char X[] = "ABCDBAB";
    char Y[] = "BDCABA";

    cout << "LCS length: " << lcs(X, Y) << endl;

    return 0;
}
