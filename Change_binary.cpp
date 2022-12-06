#include<iostream>
using namespace std;
void print_binary(int num){
    for (int i = 5; i >=0; --i){
      cout<<((num>>i)&1);
    }
    cout<<endl;
    }
int main(){   
 for (int i = 0; i < 5; i++){
       print_binary(4);
}
return 0;
}