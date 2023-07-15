// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container

#include <bits/stdc++.h>
using namespace std;

void printarr(vector<int> v)
{
    cout << "Size of the vector: " << v.size() << endl;

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    v.push_back(2);
    cout << endl;
}

// int main()
// {
//     vector<int> v; // this is how vectors are intialized
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x); // O(n) --> Time complexity of push_back
//     }

//     printarr(v);
// }

int main()
{
    vector<int> v; // this is how vectors are intialized
    v.push_back(7);
    v.push_back(8);

    vector<int> &v2 = v; //  by using '&' derefrence operator we can show the 5 in vector -> v also

    v2.push_back(5);

    printarr(v);
}