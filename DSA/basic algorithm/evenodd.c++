#include <iostream>
using namespace std;

// $ gcc test.cpp -lstdc++ //for c++ file linking

void evenodd()
{
    int n;
    cout << "Even Odd Algorithm\n";
    cout << "Enter your number --# ";
    cin >> n;
    int count_even = 0;
    int count_odd = 0;
    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            int remainder = n % i;
            if (remainder == 0)
            {
                cout << i << " is a even number" << endl;
                count_even++;
            }
            else
            {
                cout << i << " is a odd number" << endl;
                count_odd++;
            }
        }
        cout << "Total odd number : " << count_odd << endl;
        cout << "Total even number : " << count_even << endl;
    }
    else
    {
        cout << "Please enter a valid number!";
    }
}

int main()
{
    evenodd();
    return 0;
}