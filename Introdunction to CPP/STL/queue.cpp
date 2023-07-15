// QUEUE:-  remember when you have to stand in queue front of ATM for taking out the cash, then first person near to ATM has the first chance to take out the money from ATM. So, queue is the FIFO (First In First Out) type working

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> q;

    q.push("Sahil");
    q.push("love");
    q.push("Babbar");

    cout << "First element : " << q.front() << endl;

    q.pop();

    cout << "First element : " << q.front() << endl;
    return 0;
}
