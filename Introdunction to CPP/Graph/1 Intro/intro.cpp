#include <bits/stdc++.h>
using namespace std;

// Adjacency list
class graph
{
public:
    unordered_map<int, list<int>> adj;

    // Function to add an edge to the graph
    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // step 1: create an edge from u to v
        adj[u].push_back(v);

        // this is possible only in undirected graph condition
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    // Function to print the adjacency list
    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    // Function to perform BFS traversal from a given source node
    void bfs(int start)
    {
        unordered_map<int, bool> visited;
        queue<int> q;

        // Start with the given node
        visited[start] = true;
        q.push(start);

        cout << "BFS starting from node " << start << ": ";

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            // Iterate over all the adjacent nodes
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
    int n;
    // cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    // cout << "Enter the number of edges: ";
    cin >> m;

    graph g;

    // cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // For undirected graph, use direction = 0
    }

    // Print the graph
    // g.printAdjList();

    // Perform BFS traversal from the root node (node 0)
    g.bfs(0);

    return 0;
}
