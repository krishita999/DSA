#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, i, j, arr[10], max;
    cout << "Enter the size of the array : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array are : ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    for (i = 0; i < size - 2; i++)
    {
        max = i;
        for (j = i + 1; j < size - 1; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        if (max != i)
        {
            swap(arr[i], arr[max]);
        }
    }

    cout << "\n The sorted array are :";
    
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
