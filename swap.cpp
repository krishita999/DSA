#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr []= {1,2,3,4,5};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i,j,sm,lr;
    for (i=0;i<5;i++){
        if(arr[i]<smallest) {
        smallest = arr[i];
        sm=i;
        }
    }
        for(j=0;j<5;j++){
        if(arr[j] > largest)  {
        largest = arr[j];
        lr=j;
        }
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    swap(arr[sm],arr[lr]);
    for(i=0;i<5;i++){
        cout<<arr[i];
    } 

    return 0;
}