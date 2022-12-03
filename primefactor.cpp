// T.C:O(N)
//#include<iostream>
// 
//#include<vector>
// using namespace std;
// int main(){
// vector<int> v;
// int n;
// cin>>n;
// for (int i = 2; i <= n; i++)
// {
//    while(n%i==0){
//     v.push_back(i);
//     n/=i;
//    }
// }
// for(int ans:v){
// cout<<ans<<" ";
// }
// cout<<endl;

// return 0;
// }


//T.C :O(N 1/2)
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
int n;
cin>>n;
for (int i = 2; i*i <= n; i++)
{
   while(n%i==0){
    v.push_back(i);
    n/=i;
   }
}
if(n>1){
 v.push_back(n);   
}
for(int ans:v){
cout<<ans<<" ";
}
cout<<endl;

return 0;
}