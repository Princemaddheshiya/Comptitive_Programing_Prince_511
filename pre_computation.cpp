/*
pre computation use karne se hamare code ki T.C kam ho jata
is liye pre computation use karte hai
1.isme jo index hai osi index value ka factorial hai
*/
#include<iostream>
using namespace std;
const int N=1e5+10;
int main(){
    long long fact[N];
    fact[0]=fact[1]=1;
    for (int i = 2; i < N; i++){
        fact[i]=fact[i-1]*i;
    }
int q;
cin>>q;
while(q--){
    int n;
    cin>>n;
    cout<<fact[n]<<endl;
}
return 0;
}

 /*   
          <<----------------Shot Notes---------------->>
           T.C: O(N)=O(N) 
        */



/*---------------------------iterative method-------------------------------*/


#include<iostream>
using namespace std;
const int N=1e5+10;
const int M=1e9+7;
int main(){   
int q;
cin>>q;
while(q--){
    int n,fact=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        fact=(fact*i)%M;
    }
    cout<<fact[n]<<endl;
}
return 0;
}

 /*   
          <<----------------Shot Notes---------------->>
           T.C: O(N)+O(Q)=O(Q*N)   
        */