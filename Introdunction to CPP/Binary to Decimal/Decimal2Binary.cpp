#include <iostream>
#include <math.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  float ans = 0;
  int i = 0;
  while (n != 0)
  {
    /* Step 1;
    if n = 6 (binary -> 110)
    for the last bit of this binary (110)

    1 1 0
      & 1
    -----
        0(even) ---> Bit

    initially ans = 0 , i = 0;

    formula :-
    ans = (bit* pow(10,i)) + ans;

    ans = (0 * 10^0) + 0
    ans = 0;

    now i++ so i = 1 and right shift n by 1 (n>>1) so n is now

    0 1 1 -->  (3)
      & 1
    -----
        1(odd) ---> Bit

    formula :-
    ans = (bit*pow(10,i))+ans

    ans = (1 * 10^1) + 0
    ans = 10


    now i++ so i = 2 and right shift n by 1(n..1) so n is now

    0 0 1
      & 1
    -----
        1 (odd)


    ans = (1 * 10^2) + 10;
    ans = 100 + 10;
    ans = 110;

    */
    int bit = n & 1;

    ans = (bit * pow(10, i)) + ans;

    n = n >> 1;
    i++;
  }

  cout << "Answer is: " << ans << endl;
  return 0;
}