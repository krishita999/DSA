#include<iostream>
#include<climits>
using namespace std;
int main(){
int i;
int arr[]={3,4,2,9,7};
int size=5;
int smallest= INT_MAX ;
for(i=0;i<5;i++){
    if(smallest>arr[i]){
        smallest=arr[i];
    }
}
cout<<smallest;
    return 0;
}