#include <bits/stdc++.h>
using namespace std;

class Graph
{
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
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

            // iterate
            for (auto neighbour : adj[node])
            {
                if (!visited[neighbour])
                {
                    visited[neighbour] = true;
                    parent[neighbour] = node;
                    q.push(neighbour);
                }
                else if (parent[node] != neighbour)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
