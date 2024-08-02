#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    //  created a unordered map for storing adj list
    unordered_map<int, list<int>> adj;

    // function to add edge to the graph
    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        // check if the direction is 0
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    // function to do BFS traversal
    void bfs(int start)
    {
        // created a unorderd map for visited
        unordered_map<int, bool> visited;
        queue<int> q;

        // initially make the root element visited in the visted map
        visited[start] = true;
        q.push(start);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            // iterate over all the adjacent nodes like of 0 -> 1,2 then
            // 1 and 2 will be the adjacent nodes

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

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    int m;
    cin >> m;

    Graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.bfs(0);
    return 0;
}
