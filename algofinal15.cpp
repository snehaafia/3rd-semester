#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int graph[10][10];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> graph[i][j];

    int start;
    cin >> start;

    int visited[10] = {0};

    int stack[10];
    int top = -1;

    stack[++top] = start;

    cout << "DFS Traversal: ";

    while(top != -1)
    {
        int node = stack[top--];

        if(visited[node] == 0)
        {
            cout << node << " ";
            visited[node] = 1;
        }

        for(int i=n-1;i>=0;i--)
        {
            if(graph[node][i] == 1 && visited[i] == 0)
            {
                stack[++top] = i;
            }
        }
    }

    return 0;
}
