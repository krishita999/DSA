#include<iostream>
using namespace std;
int main(){
int i,a,n,b,temp,sum=0;
cout<<"enter three digit number :";
cin>>n;
temp=n;
for(i=1;i<=3;i++){
    a=n%10;
    sum=sum+(a*a*a);
    b=n/10;
    n=b;
}
if(temp==sum){
    cout<<"it is an armstrong number"<<endl;
}
else
    cout<<"it is not an armstrong number";
    return 0;
}