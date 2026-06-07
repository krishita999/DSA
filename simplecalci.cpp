#include<iostream>
using namespace std;
int main(){
int a,b,ans;
char o;
cout<<"which operation you want to perform, (+, -, /, * ): ";
cin>>o;
switch(o){
    case '+':
        cout<<"Enter two numbers :";
         cin>>a>>b;
         cout<<a+b;
    break;

    case '-':
          cout<<"Enter two numbers :";
          cin>>a>>b;
          cout<<a-b;
        break;

    case '*':
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout<<a*b;
        break;

    case '/':
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout<<a/b;
        break;

    default:
        cout<<"wrong input!!!";
}

    return 0;
}