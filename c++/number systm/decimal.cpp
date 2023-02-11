#include <iostream>
using namespace std;
int main (){
int power=1 , n ;
int ans=0;
int num;

cin>>n;
while(n>0){
num = n%2;
ans+= (num*power);
power*= 10;
n=n/2;
}
cout<<ans;
 return 0;
}