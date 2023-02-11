#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
     char oprator ;
     cin>>oprator;
     int sum = a+b;
    switch(oprator){
        case'+':
         cout<<(sum)<<endl;
          break;
        case '-' :
         cout<<a-b<<endl;
         break;
        case '*' :
         cout<<a*b<<endl;
         break;
        case '/' :
         cout<<a/b<<endl;
         break;
        default:
         cout<<"nahi pata hai";

    }
    return 0;
}