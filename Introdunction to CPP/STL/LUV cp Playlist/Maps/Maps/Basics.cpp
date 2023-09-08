/*

Each element has a key value and a mapped value. No two mapped values can have the same key values.

Maps are in sorted order and they are in non-contigous manner so that's why we can't do it+1 we have to do it++ .... internal implementation of maps is done using Red Black Trees

but it's implemented using a  balanced binary search tree.


Time Complexity :- TC of adding value in the map is O(log(n))---> where n is
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;

    // method 1 to insert
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    // method 2 to insert
    m.insert({3, "afd"});

    // printing the{ key : value} pairs using iterator method

    map<int, string>::iterator it;

    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // using range based loops and auto method ( Shortcut )

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
