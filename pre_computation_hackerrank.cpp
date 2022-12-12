
/**------------------------------Question--------------------------------**/

/*
link:https://www.hackerrank.com/challenges/crush/problem
*/
/**------------------------------Method : 1 --------------------------------**/
#include<iostream>
using namespace std;
const int N=1e7+10;
long long arr[N];
int main(){
int n,q;
cin>>n>>q;
while(q--){
    int a,b,k;
    cin>>a>>b>>k;
for (int i = a; i <= b; i++){
    arr[i]+=k;

}
}
long long mx=-1;
for (int i = 1; i <= n; i++){
    if(mx<arr[i])
    mx=arr[i];
}
cout<<mx<<endl;
return 0;
}
/**-------------------------------Method : 2 ---------------------------------**/


#include<iostream>
using namespace std;
const int N=1e7+10;
long long arr[N];
int main(){
int n,q;
cin>>n>>q;
while(q--){
    int a,b,k;
    cin>>a>>b>>k;
arr[a]+=k;
arr[b+1]-=k;
}
for (int i = 1; i <= n; i++){
    arr[i]+=arr[i-1];
}
long long mx=-1;
for (int i = 1; i <= n; i++){
    if(mx<arr[i])
    mx=arr[i];
}
cout<<mx<<endl;
return 0;
}



/**------------------------------Input--------------------------------**/
5 3
1 2 100
2 5 100
3 4 100

/**------------------------------Output--------------------------------**/
200