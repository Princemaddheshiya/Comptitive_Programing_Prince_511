#include<iostream>
#include<vector>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
bool visit[N];
void dfs(int vertex){
    /* Take action on vertex after entering the vertex */
    cout<<vertex<<endl;
    visit[vertex]=true;
    for (int child : graph[vertex]){
        /* Take action on child before entering the child node */
        cout<<"par"<< " "<<vertex<<" " <<"child"<<" "<<child<<endl;
        if(visit[child])
            continue;
        dfs(child);
        /* Take action on child after exiting child node */
    }
    /* Take action on vertex before exiting the vertex */   
}
int main(){
int v,e;
cin>>v>>e;
for (int i = 0; i < 9; ++i){
    int v1,v2;
    cin>>v1>>v2;
graph[v1].push_back(v2);
graph[v2].push_back(v1);
}
dfs(1);
return 0;
}
/*6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
1
par 1 child 3
3
par 3 child 1
par 3 child 5
5
par 5 child 1
par 5 child 3
par 5 child 6
6
par 6 child 3
par 6 child 2
2
par 2 child 3
par 2 child 6
par 6 child 4
4
par 4 child 3
par 4 child 6
par 6 child 5
par 3 child 4
par 3 child 6
par 3 child 2
par 1 child 5
*/