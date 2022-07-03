#include <iostream>
using namespace std;

void zigzagpattern()
{
    cout << "Zig-Zag Pattern\n";
    cout << "Enter number of rows --# ";
    int i, j, n;
    cin >> n;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)))
                cout << "* ";
            else
                cout << " ";
            cout << endl;
        }
    }
}

int main()
{
    zigzagpattern();
    return 0;
}