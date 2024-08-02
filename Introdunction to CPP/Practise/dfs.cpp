#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void dfs(int start, unordered_map<int, bool> &visited)
    {
        visited[start] = true;
        cout << start << " ";

        for (auto neighbor : adj[start])
        {
            if (!visited[neighbor])
            {
                dfs(neighbor, visited);
            }
        }
    }

    void dfsTraversal(int start)
    {
        unordered_map<int, bool> visited;
        dfs(start, visited);
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    int n, m;
    cin >> n >> m;

    Graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.dfsTraversal(0);

    return 0;
}
