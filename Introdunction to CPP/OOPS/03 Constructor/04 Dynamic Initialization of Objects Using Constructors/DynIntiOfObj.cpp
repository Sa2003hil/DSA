#include <bits/stdc++.h>
using namespace std;

class BankDeposit
{
    //  Private Data Memebers
    int principle;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (interestRate + 1);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principle amount was " << principle << " Return value after " << years << " years is " << returnValue << endl;
}

int main(int argc, char const *argv[])
{
    //  Object creation
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
