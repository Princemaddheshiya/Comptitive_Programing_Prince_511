/**------------------------------Question--------------------------------**/

/*Given array a of N integers. Given Q queries
 and in each query given L and R print sum of
 array elemnts from index L to R(L, R included)

 Constraints
 1 <= N <= 10^5
 1 <= a[i] <= 10^9
 1 <= 0 <= 10^5
 1 <= L, R <= N
*/
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
    int l,r,sum=0;
    cin>>l>>r;
    for (int i = l; i <= r; i++){
       sum=aum+arr[i];
    }
   cout<<sum<<endl;
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
int prefix_sum[N];
int main(){ 
    int n,ct=0;
    cin>>n;
    int arr[n];    
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
       prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    cout<<(prefix_sum[r]-prefix_sum[l-1])<<endl;
}
return 0;
}      
            

        /*   
        <<----------------Shot Notes ---------------->>
             T.C: O(N)   
        */


/**------------------------------Output--------------------------------**/

5
3 3 4 4 4
2
1 3
10
2 4
11

