#include<iostream>
using namespace std;
int main( )
{
    int a ,b ;
    char o;
    cout<<"enter two number:";
    cin>>a>>b;
    cout<<"enter oprator:";
    cin>>o;
    if(o=='+')
    {
        cout<<  a+b ;
    }
    else  if(o=='-')
    {
        cout<<a-b;
    }
    else if(o=='*')
    {
        cout<<a*b<<endl;

    }
    else{
        cout<<a/b<<endl;
    }

    return 0;
}