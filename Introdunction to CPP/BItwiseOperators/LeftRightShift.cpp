#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Right shift  " << (7 << 1) << endl;
    /*   In most cases we multiply with power of 2 like in this case 7 * 2^1 = 14
    but in some cases,like for big numbers it gives negative number... this dosn't works   */

    cout << "Left Shift  " << (15 >> 1) << endl;
    /* In this case we divide nth times the number with 2 like in this case we divide 15/2 = 7 */

    return 0;
}
