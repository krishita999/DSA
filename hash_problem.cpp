// Task : Finding count of the number in the array 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for (int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"No of array value :";
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the no:";
        cin>>number;
        //fetch
        cout <<"the count is"<< hash[number] << endl;

    }

    return 0;
}
