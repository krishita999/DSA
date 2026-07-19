#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, min, arr[10], i, j;
    cout << "Enter the size of the array : ";
    cin >> s;

    for (i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    cout << "The array is : ";
    for (i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }

    for (i = 0; i <= s - 2; i++)
    {
        min = i;
        for (j = i + 1; j <= s - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
    cout << "\n The sorted array are :";
    for (i = 0; i < s; i++)
    {
        cout << arr[i];
    }

    return 0;
}
