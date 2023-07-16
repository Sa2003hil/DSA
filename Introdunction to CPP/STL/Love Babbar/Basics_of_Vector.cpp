// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* Initialization of Vector*/
    vector<int> v;
    cout << "Capacity --> " << v.capacity() << endl;

    // to add elements ---> v.pushback(element)
    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "size-->" << v.size() << endl; // to find the size of the vector

    // How to access elements -----> v.at(index number)

    cout << "Element at 1st index is : " << v.at(1) << endl;

    // How to get first and last element directly

    cout << "Front" << v.front() << endl;
    cout << "Back" << v.back() << endl;

    // Pop last elements

    cout << "Before Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // By doing this the last element pop out from the array

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // To clear the array -->  v.clear()

    cout
        << "Before Clear" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear();

    cout << "After Clear" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    // Copy elements into new array

    vector<int> a{1, 3}; // created new array a 

    vector<int> last(a);

    for (int i : last)
    {
        cout << i << " ";
    }

    return 0;
}
