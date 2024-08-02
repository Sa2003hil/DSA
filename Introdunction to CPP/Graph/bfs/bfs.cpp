#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;

    void addedge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printadj()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
    void bfs(int start)
    {
        unordered_map<int, bool> visited;
        queue<int> q;
        visited[start] = true;
        q.push(start);
        cout << start;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (auto i : adj[node])
            {
                if (!visited[i])
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        cout << endl;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 0);
    }
    g.bfs(0);
    return 0;
}