// Print 1 to N using backtracking (Recursion)

#include <bits/stdc++.h>
using namespace std;

void backtrackprint(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    // Here we use function call first then print so that when the base case is reached the function call stack is popped and the numbers are printed in order 1 to N 
    backtrackprint(i - 1, n);
    cout << i << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    backtrackprint(n, n);
    return 0;
}


/*
Here is the code explanation for the above code

n = 3

backtrackprint(3, 3)
    backtrackprint(2, 3)
        backtrackprint(1, 3)
            backtrackprint(0, 3) // base case and function terminates
            return
            // ab yhaan se print hona start hoga kyunki function call stack pop hoga 
        print 1
        return
    print 2
    return
print 3
return




*/ 
