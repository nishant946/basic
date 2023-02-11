#include <iostream>
using namespace std;
int main(){
    int num=o ,n;
    cin>>n;
    int power=1;
    while(n>0){
        int lastdigit = n%10;
        num+= lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<num;
    return0;
}
