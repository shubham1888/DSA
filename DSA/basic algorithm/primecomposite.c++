#include <iostream>
using namespace std;

// $ gcc test.cpp -lstdc++ //for c++ file linking

void primecomposit()
{
    int n;
    cout << "Prime Composite Algorithm\n";
    cout << "Enter your number --# ";
    cin >> n;
    int count = 0;
    if (n > 0)
    {
        if (n > 3 && n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                int remainder = n % i;
                if (remainder == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                cout << n << "  is a prime number";
            }
            else
            {
                cout << n << " is a composit number";
            }
        }
        else
        {
            cout << n << " is a prime number";
        }
    }
    else
    {
        cout << "Please enter a valid number!";
    }
}

int main()
{
    primecomposit();
    return 0;
}