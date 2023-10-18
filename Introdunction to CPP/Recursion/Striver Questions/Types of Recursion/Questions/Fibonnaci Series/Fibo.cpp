#include <bits/stdc++.h>
using namespace std;

int findfibo(int n)
{
    // if(n==0 || n==1){
    //     return n;
    // }
    // else{
    //     return findfibo(n-1)+findfibo(n-2);
    // }

    // this is using recursion (multiple recursion)
    if (n <= 1)
        return n;
    int last = findfibo(n - 1);
    int slast = findfibo(n - 2);
    return last + slast;
}

vector<int> generateFibonacciNumbers(int n)
{
    // Write your code here.
    vector<int> findseq;
    for (int i = 0; i < n; i++)
    {
        findseq.push_back(findfibo(i));
    }
    return findseq;
}

int main(int argc, char const *argv[])
{
}
