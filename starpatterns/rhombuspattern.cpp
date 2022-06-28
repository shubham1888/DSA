#include <iostream>
using namespace std;

void rhombuspattern()
{
    int n;
    cout << "Rhombus Pattern\n";
    cout << "Enter number of rows --# ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    rhombuspattern();
    return 0;
}