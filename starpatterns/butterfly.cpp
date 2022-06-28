#include <iostream>
using namespace std;

// $ gcc test.cpp -lstdc++ //for c++ file linking

void butterflypattern()
{
    int n;
    cout << "Butterfly Pattern\n";
    cout << "Enter number of rows --# ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < (2 * n) - (2 * i); k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < (2 * n) - (2 * i); k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    butterflypattern();
    return 0;
}