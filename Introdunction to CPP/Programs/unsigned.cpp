// unsigned int is used for storing positive numbers (2^32-1)
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned int a = 10;
    cout << a << endl;
    return 0;
}

// if we add negative number in unsigned int then it will give a huge value for more check out notes pdf (Basic Tpoics)
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned int a = -10;
    cout << a << endl;
    return 0;
}
