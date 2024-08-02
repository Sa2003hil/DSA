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

    // Function to perform DFS traversal from a given source node
    void dfs(int start, unordered_map<int, bool> &visited)
    {
        // Mark the current node as visited
        visited[start] = true;
        cout << start << " ";

        // Recur for all the vertices adjacent to this vertex
        for (auto neighbor : adj[start])
        {
            if (!visited[neighbor])
            {
                dfs(neighbor, visited);
            }
        }
    }

    // Function to initiate DFS traversal from the root node
    void dfsTraversal(int start)
    {
        unordered_map<int, bool> visited;
        cout << "DFS starting from node " << start << ": ";
        dfs(start, visited);
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    graph g;

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // For undirected graph, use direction = 0
    }

    // Print the graph
    g.printAdjList();

    // Perform DFS traversal from the root node (node 0)
    g.dfsTraversal(0);

    return 0;
}
