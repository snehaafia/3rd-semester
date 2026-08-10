#include <iostream>
using namespace std;

void printParenthesis(int i, int j, int s[100][100])
{
    if(i==j)
    {
        cout<<"A"<<i;
        return;
    }

    cout<<"(";
    printParenthesis(i, s[i][j], s);
    printParenthesis(s[i][j]+1, j, s);
    cout<<")";
}

int main()
{
    int n;
    cout<<"Enter number of matrices: ";
    cin>>n;

    int p[100];
    cout<<"Enter dimensions: ";
    for(int i=0;i<=n;i++)
        cin>>p[i];

    int m[100][100], s[100][100];

    for(int i=1;i<=n;i++)
        m[i][i]=0;

    for(int L=2;L<=n;L++)
    {
        for(int i=1;i<=n-L+1;i++)
        {
            int j=i+L-1;
            m[i][j]=99999;

            for(int k=i;k<j;k++)
            {
                int cost = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];

                if(cost<m[i][j])
                {
                    m[i][j]=cost;
                    s[i][j]=k;
                }
            }
        }
    }

    cout<<"\nM Matrix:\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<i)
                cout<<"0 ";
            else
                cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nS Matrix:\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
                cout<<"0 ";
            else
                cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nOptimal Parenthesization: ";
    printParenthesis(1, n, s);

    return 0;
}
