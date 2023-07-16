#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // pop element from the back
    // d.pop_back();

    // pop element from the front
    // d.pop_front();

    for (int i : d)
    {
        cout << i << " "; // output - 2 1
    }
    cout << endl;

    // check element on the bases of index
    cout << "element at first index " << d.at(0) << endl;
    cout << "element at second index " << d.at(1) << endl;

    // check element at first and last index

    cout << "front " << d.front() << endl;
    cout << "end " << d.back() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // in erase we have to specify the bond from where to where we have to erase the element-----> Time complexity O(n);
    cout << "after erase " << d.size();

    return 0;
}
