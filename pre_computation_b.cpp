/**------------------------------Method : 1 --------------------------------**/

#include<iostream>
using namespace std;
const int N=1e5+10;
int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
    }
int q;
cin>>q;
while(q--){
    int x,ct=0;
    cin>>x;
    for (int i = 1; i <= n; i++){
        if(arr[i]==x){
            ct++;
        }       
    }
    cout<<ct<<endl;
}
return 0;
}

        /*   
          <<----------------Shot Notes---------------->>
           T.C: O(N)+O(Q)=O(N*N)   
        */

/**-------------------------------Method : 2 ---------------------------------**/


#include<iostream>
using namespace std;
const int N=1e5+10;
int hsh[N];
int main(){ 
    int n,ct=0;
    cin>>n;
    int arr[n];    
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
int q;
cin>>q;
while(q--){
    int x;
    cin>>x;
    cout<<hsh[x]<<endl;
}
return 0;
}      
            

        /*   
        <<----------------Shot NOtes ---------------->>
             T.C: O(N)   
        */