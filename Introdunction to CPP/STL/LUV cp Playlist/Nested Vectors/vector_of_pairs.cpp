// Vector of pairs (Nested Vector)  vedio link:- https://youtu.be/ytyOI1RkZ24

#include <bits/stdc++.h>
using namespace std;

void printvector(vector<pair<int, int>> &p)
{
    cout << "size: " << p.size() << endl;
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
}

int main()
{
    vector<pair<int, int>> p = {{1, 2}, {2, 3}, {3, 4}};
    printvector(p);
    return 0;
}