#include<iostream>
using namespace std;
int main(){
int n,a,b,i,rev=0,temp;
cout<<"enter three digit number : ";
cin>>n; 
temp=n;
for(i=1;i<=3;i++){
    a=n%10;
    rev =(rev * 10)+ a;
    b=n/10;
    n=b;
}
 cout<<"reverse is :"<<rev<<endl;
if(temp==rev){
    cout<<"palindrome";
}
else
    cout<<"it is not a palindrome";
    return 0;
}