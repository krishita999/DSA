#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int i;
    int j = 4;
    int flag;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == arr[j])
        {
            j--;
            flag=1;
        }
        else
        {
        flag=0;
        break;
        }
    }
    if(flag==1)
    cout<<"palindrome";
    else
    cout<<"it is not palindrome";
    return 0;
}