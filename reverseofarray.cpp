#include <iostream>
using namespace std;
void reverseofarray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void displayarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<< endl;
}

int main()
{
    int arr[]= {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    cout << "before reversing"<<endl;
    displayarray(arr, size);
    reverseofarray(arr, size);
    cout << "after reversing"<<endl;
    displayarray(arr, size);

    return 0;
}