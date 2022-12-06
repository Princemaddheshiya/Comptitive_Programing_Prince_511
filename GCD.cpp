//#include<iostream>
#include"stdc++.h"
using namespace std;
int gcd(int a,int b){
while(b!=0){
int c=a%b;
a=b;
b=c;
}
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    //cout<<__gcd(a,b)<<endl;
    cout<<(a*b)/gcd(a,b)<<endl;
return 0;
}