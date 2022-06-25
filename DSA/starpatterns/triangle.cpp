#include <iostream>
using namespace std;

// $ gcc test.cpp -lstdc++ //for c++ file linking

void trianglepattern()
{
    int n;
    cout << "Triangle Pattern\n";
    cout << "Enter number of rows --# ";
    cin >> n;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= s; k++)
        {
            cout << "*";
        }
        s = s + 2;
        cout << endl;
    }
}

int main()
{
    trianglepattern();
    return 0;
}