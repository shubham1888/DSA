#include <iostream>
using namespace std;

void continuitypattern()
{
    int n;
    cout << "Number Pattern\n";
    cout << "Enter number of rows --# ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k <<  " ";
        }
        cout << endl;
    }
}

int main()
{
    continuitypattern();
    return 0;
}