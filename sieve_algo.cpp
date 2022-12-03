#include<iostream>
#include<vector>
using namespace std;
void sieve(int n){


vector<bool> is_prime(n+1,1);
    
    
    is_prime[0]=is_prime[1]=false;
    for (int i = 2; i*i <= n; i++)
    {
        if(is_prime[i]==true){
            for (int j = 2*i; j <= n; j+=i)
            {
                is_prime[j]=false;
            }            
        }
    }   
//     int num,q;
//     cin>>q;
//     while(q--){
//         cin>>num;

// if(is_prime[num]){
//     cout<<"prime"<<endl;
// }else{
//     cout<<"not prime"<<endl;
// }
//     }

for (int i = 1; i <= n; i++)
{
    if(is_prime[i])
    cout<<i<<endl;
}
}
int main(){
int n;
cin>>n;
sieve(n);
return 0;
}
//T.C:N*log(log(N))