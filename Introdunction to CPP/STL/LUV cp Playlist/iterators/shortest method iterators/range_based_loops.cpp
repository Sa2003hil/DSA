// range based loops helps to shorten the syntax of for loops

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v = {2, 3, 4, 5, 6, 7};

    // Syntax Range Based loop

    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    /*
    Imp:-
    yhaan par jo bhi vector ki values aa rhi hai vo copies hai na ki acctual values ....Example

    */
    for (int value : v)
    {
        value++;
    }
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl; // answer : 2 3 4 5 6 7 (no change in the values of the vector)

    // If you want to change the values then you have to use c++ refrence operator ('&')

    for (int &value : v)
    {
        value++;
    }
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    // uisng Range based loops in vector of pairs

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};

    vector<pair<int, int>>::iterator ite;

    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}
