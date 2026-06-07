#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,3,4,5,3,4};
    int i, j;
    for (i=0;i<6;i++)
    {
        for (j=i+1;j<6;j++)
        {
            if (arr[i] == arr[j])
            {
                cout<<arr[i]<<endl;
            }
        }
        
    } 
   cout<<"hello"<<endl;
    return 0;
}    