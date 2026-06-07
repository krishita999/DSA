#include<iostream>
using namespace std;
int main(){
int arr[]={67,45,90,34,42,89,24,101};
int max1=arr[0];
int max2=arr[1];
for (int i=2; i<8;i++){
    if (arr[i]>max1){
        max2=max1;
        max1=arr[i];
    }
    else if(arr[i]>max2){
        max2=arr[i];
    }
}
cout<<max1<<endl<<max2<<endl;
cout<<"the second largest number from the array is "<<max2;

    return 0;
}