#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool undirected)
    {
        adj[u].push_back(v);
        if (undirected)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    bool bfsCycleDetection(int start)
    {
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        queue<int> q;

        visited[start] = true;
        parent[start] = -1;
        q.push(start);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto neighbor : adj[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    parent[neighbor] = node;
                    q.push(neighbor);
                }
                else if (parent[node] != neighbor)
                {
                    // If an adjacent node is visited and not parent of current node, there is a cycle
                    return true;
                }
            }
        }
        return false;
    }

    bool isCyclic()
    {
        unordered_map<int, bool> visited;
        // Check for cycle in different components of the graph
        for (auto i : adj)
        {
            if (!visited[i.first])
            {
                if (bfsCycleDetection(i.first))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, true); // Assuming undirected graph
    }

    // Print the adjacency list (optional)
    g.printAdjList();

    // Check for cycle in the graph
    if (g.isCyclic())
    {
        cout << "Graph contains cycle" << endl;
    }
    else
    {
        cout << "Graph does not contain cycle" << endl;
    }

    return 0;
}
