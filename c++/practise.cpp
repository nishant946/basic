#include <iostream>
#include <string.h>
using namespace std;
int main(){
   string str1;
   cin>>str1;
   int size = str1.length();
   int flag = 0;
   for(int i=0;i<size;i++){
    if(str1[i] != str1[size-1-i]){
        flag =1;
    }
   }
   if(flag){
    cout<<"the given string is not palindrime"<<endl;
   }
   else{
    cout<<"the given string is palindrome"<<endl;
   }




    return 0 ;
}