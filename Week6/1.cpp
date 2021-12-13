#include<bits/stdc++.h>
using namespace std;
bool findpath(int src, int dest, vector<vector<int>> &graph)
{
    if (src == dest)
        return true;
    int n = graph.size();
    vector<bool> visited(n, false);
    visited[src] = true;
    // DFS method
    stack<int> s;
    s.push(src);
    while (!s.empty())
    {
        int a = s.top();
        s.pop();
        for (int x : graph[a])
        {
            if (x == dest)
                return true;
            if (!visited[x])
            {
                visited[x] = true;
                s.push(x);
            }
        }
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source, dest;
    cin >> source >> dest;
    if (findpath(source, dest, graph))
    {
        cout << "Yes Path Exists";
    }
    else
    {
        cout << "No Such Path Exists";
    }
    return 0;
}