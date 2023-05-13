#include<bits/stdc++.h>

using namespace std;

#define MAX 1000

int V , E;
bool visited[MAX];
int path[MAX];
vector<int> graph[MAX];

void BFS(int s){
    for(int i = 0 ; i < V; i++){
        visited[i] = false;
        path[i] = -1;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0 ; i < graph[u].size(); i++){
            int v = graph[u][i];
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                path[v] = u;
            }
        }
    }
}

void printPath(int s, int f){
    int b[MAX];
    int m = 0;
    if( s == f){
        cout << s;
        return;
    }
    if(path[f] == -1){
        cout << "No path" << endl;
        return;
    }
    while(true){
        b[m++] = f;
        f = path[f];
        if(s == f){
            b[m++] = s;
            break;
        }
    }
    for(int i = m - 1; i >= 0 ; i --){
        cout << b[i] << " ";
    }
}

void printPathRecursion(int s, int f){
    if( s == f){
        cout << s;
        return;
    }
    else{
        if(path[f] == -1){
            cout << "No path" << endl;
            return;
        }
        else{
            printPathRecursion(s , path[f]);
            cout << f << " ";
        }
    }
}

int main(){
    int u, v;
    cin >> V >> E;
    for(int i = 0; i < E; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int s = 0, f = 5;
    BFS(s);
    printPath(s , f);
}
