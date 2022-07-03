#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Number of rows # ";
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cout << "i-" << i << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << "j-" << j << " ";
            int ans = factorial(i) / (factorial(j) * factorial(i - j));
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}