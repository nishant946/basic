#include <iostream>
using namespace std;
int main(){
            int n , constant = 0;
            cin>>n;
            for(int i=2;i<n;i++){
                if(n%i ==0){
                    constant+= 1;
                }
            }
            if(constant>=1){
                cout<<n<<" is not prime"<<endl;
            }
            else{
                cout<<n<<" is prime"<<endl;
            }
            return 0 ;
}