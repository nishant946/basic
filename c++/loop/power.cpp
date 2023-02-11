#include <iostream>
using namespace std;
int main(){
    int n , p;
    cin>>n>>p;
    int power = 1;
    for(int i = 1;i<=p;i++){
         power= (power*n) ;
        
    }cout<<power<<endl;
   
    return 0;
}