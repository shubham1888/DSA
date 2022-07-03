#include <iostream>
using namespace std;

int countSort(int arr[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
        m = max(m, arr[i]);
    int countArr[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        countArr[i] = 0;
        // cout << m << endl;
    }
    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
        // cout << m << endl;
    }
    for (int i = 1; i < m + 1; i++)
    {
        countArr[i] += countArr[i - 1];
        // cout << m << endl;
    }
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[countArr[arr[i]] - 1] = arr[i];
        countArr[arr[i]]--;
    }
    for (int i = 0; i < m + 1; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n);
    // cout << n << endl;
    return 0;
}






// // Counting sort in C++ programming

// #include <iostream>
// using namespace std;

// void countSort(int array[], int size)
// {
//     // The size of count must be at least the (max+1) but
//     // we cannot assign declare it as int count(max+1) in C++ as
//     // it does not support dynamic memory allocation.
//     // So, its size is provided statically.
//     int output[10];
//     int count[10];
//     int max = array[0];

//     // Find the largest element of the array
//     for (int i = 1; i < size; i++)
//     {
//         if (array[i] > max)
//             max = array[i];
//     }

//     // Initialize count array with all zeros.
//     for (int i = 0; i <= max; ++i)
//     {
//         count[i] = 0;
//     }

//     // Store the count of each element
//     for (int i = 0; i < size; i++)
//     {
//         count[array[i]]++;
//     }

//     // Store the cummulative count of each array
//     for (int i = 1; i <= max; i++)
//     {
//         count[i] += count[i - 1];
//     }

//     // Find the index of each element of the original array in count array, and
//     // place the elements in output array
//     for (int i = size - 1; i >= 0; i--)
//     {
//         output[count[array[i]] - 1] = array[i];
//         count[array[i]]--;
//     }

//     // Copy the sorted elements into original array
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = output[i];
//     }
// }

// // Function to print an array
// void printArray(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << array[i] << " ";
//     cout << endl;
// }

// // Driver code
// int main()
// {
//     int array[] = {4, 2, 2, 8, 3, 3, 1, 5};
//     int n = sizeof(array) / sizeof(array[0]);
//     countSort(array, n);
//     printArray(array, n);
// }