#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++){
cin>>a[i];
}
int cursum=0;
int maxsum=INT_MIN;
for (int i = 0; i < n; i++){
cursum+=a[i];
if(cursum<0){
    cursum=0;
}
maxsum=max(maxsum,cursum);
}
cout<<"your max sum ="<<maxsum<<endl;
return 0;
}
//O(n) time complexsity using this algoritham
//[1, -2,-3, 4, -1, 2, 1].
//-1, 2, -2, 5, 7, -3, 1 = 12
//-2 1 -3 4 -1 2 1 -5 4