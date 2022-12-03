#include<iostream>
using namespace std;
const int m=1e9+7;
int iterative_method(int a, int b){
    int ans=1;
    while(b){
  if(b&1){
    ans=(ans*a*1LL)%m;
  } 
  a=(a*a*1LL)%m;
  b>>=1; 
}
return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
cout<<iterative_method( a,  b)<<endl;
return 0;
}
//T.C:O(log(N))