#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int flag=0;
string str1;
cin>>str1;
int size = str1.length();
int half = size/2;
for( int i=1;i<half;i++){
    if(str1[i] != str1[size-half+i]){
        flag = 1;
    }
}
if(flag){
    cout<<"string is not lapindrome"<<endl;
}
else{
    cout<<"string is palindrome"<<endl;
}
return 0;
}