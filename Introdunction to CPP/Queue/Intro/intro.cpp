#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Create a queue

    queue<int> q;
    q.push(1);

    q.push(12);

    q.push(13);

    cout << "size of the queue is :" << q.size() << endl;

    q.pop();
    cout << "size of the queue is :" << q.size() << endl;
    // q.pop();
    // q.pop();

    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    cout << "front element" << q.front();
    cout << "Back element" << q.back();

    return 0;
}
