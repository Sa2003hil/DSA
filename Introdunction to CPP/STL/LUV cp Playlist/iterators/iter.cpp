/*
Iterator are used to point at the memory addresses of STL containers.

Operations of iterators :-

1. begin() :- represents beginning position of the container.

2. end() :-  represents  after end position of the container.

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); ++i)
    {
        /* code */
        cout << v[i] << " ";
    }
    cout << endl;

    // intialization of an iterator

    vector<int>::iterator it = v.begin(); // here v.begin() repersents the first element of the array
    cout << "using * operator value at index->" << (*(it + 1)) << endl;

    // how to iterates through containers ... they are mainly used to iterate through containers where there is no indexing

    vector<int>::iterator itt = v.begin();

    for (itt = v.begin(); itt != v.end(); ++itt)
    {
        cout << (*itt) << endl;
    }

    // vector of pair using iterator
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};

    vector<pair<int, int>>::iterator ite;

    for (ite = v_p.begin(); ite != v_p.end(); ++ite)
    {
        cout << (*ite).first << " " << (*ite).second << endl;
    } // .first() point 1st value of the pair and .second() points second value of the pair

    // Another method :- use arrow operator (->)
    for (ite = v_p.begin(); ite != v_p.end(); ++ite)
    {
        cout << (ite->first) << " " << (ite->second) << endl;
    }

    // (*ite).first <=> (it->first)

    return 0;
}
