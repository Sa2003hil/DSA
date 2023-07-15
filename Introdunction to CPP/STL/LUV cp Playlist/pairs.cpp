// A pair in C++ is described as a container that combines two elements of the same or different data types in C++. Pair in C++ consists of two elements, first and second, and they are accessed using the dot (.) operator and the keyword first or second.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    p = make_pair(2, "abc");
    // p = {3,"abc"}  ----> another way to make pair

    pair<int, string> &p1 = p; // By doing this we can directly copy the elements of p to p1 but if i change any element in p1 that cannot show in b we have to use &(derefrence operator)for doing this.
    p1.first = 4;
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second;
    }
}