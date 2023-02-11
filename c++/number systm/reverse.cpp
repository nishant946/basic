#include <iostream>
using namespace std;
int main(){
    int n ,a, num=0;
    cin>>n;
    while(n>0){
     int variable =n%10;
     num*= 10;
     num+= variable;
     n/= 10;
    }
    cout<<num<<endl;
 return 0;   
}

