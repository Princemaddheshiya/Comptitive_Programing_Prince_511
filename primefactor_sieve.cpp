#include<iostream>
#include<vector>
using namespace std;
int main(){
  const int n=1e7+9;
vector<int> lp(n,0) ,hp(n,0);
vector<bool> is_prime(n,1);
is_prime[0]=is_prime[1]=false;
for (int i = 2; i < n; i++)
{
    if(is_prime[i]==true){
        lp[i]=hp[i]=i;
        for (int j = 2*i; j <n; j+=i)
        {
            is_prime[j]=false;
            hp[j]=i;
            if(lp[j]==0){
                lp[j]=i;
            }
        }
        
    }
}
 vector<int> prime_factors;
int num;
cin>>num;


 while(num>1){
     int prime_factor=hp[num];
     while(num%prime_factor==0){
         num=num/prime_factor;
         prime_factors.push_back(prime_factor);
     }
 }
 for (int factor: prime_factors)
 {
         cout<<factor<< " ";
 }
//  for (int i = 1; i <= n; i++)
//  {
//      cout<<lp[i]<<" "<<hp[i]<<endl;
//  }
  



return 0;
}