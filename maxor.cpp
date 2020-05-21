#include <iostream>
using namespace std;
bool builtin_popcount(int n){
 int count=0;
    while(n){
      count+=n&1;
        if(count>1){
         return false;
      }
     n=n>>1;
   }
   return true;
 }
int maxor(int a,int b){
 int x=b;
  while(x>a){
  if(builtin_popcount(x)){
     return x^(x-1);
  }
  x--;
}
return maxor(0,a^b);
}
int main(){
int a;
int b;
cin>>a>>b;
cout<<maxor(a,b);
cout<<endl;
return 0;
}
