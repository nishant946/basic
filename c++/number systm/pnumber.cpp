#include <iostream>
using namespace std;
int main(){
    int a , n , num =0;
    cin>>n;
    int number = n;
    while(n>0){
     int variable =n%10;
     num*= 10;
     num+= variable;
     n/= 10;
    }
    if(number == num){
        cout<<"n is paladrome"<<endl;
    }
    else{cout<<"n is not a paladrome"<<endl;
    }
 return 0;   
}



