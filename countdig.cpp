#include<iostream>
using namespace std;
int main(){
int num= 4987790;
int count=0;
int n;
for (int i=0; num>0; i++){
    num=num/10;
    count++;
}
cout<<count;
    return 0;
}