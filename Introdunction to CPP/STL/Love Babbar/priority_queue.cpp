// STL Priority Queue is the implementation of Heap Data Structure

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{

    // max-heap :-  max element show first
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "maxi sixe-> " << maxi.size() << endl;

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // min-heap :- minimum element shows first

    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout << "mini sixe-> " << mini.size() << endl;

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}
