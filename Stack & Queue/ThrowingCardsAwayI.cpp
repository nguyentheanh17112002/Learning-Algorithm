#include<bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n;
        cin >> n ;
        if(n == 0){
            break;
        }
        if(n == 1){
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: 1" << endl;
        }
        else{
            cout << "Discarded cards: ";
            queue<int> q;
            for(int i = 1 ; i <= n ;i++){
                q.push(i);
            }
            while(q.size() > 1){
                cout << q.front() ;
                q.pop();
                if(q.size() > 1){
                    cout << ", ";
                }
                int temp = q.front();
                q.pop();
                q.push(temp);
            }
            cout << endl;
            cout << "Remaining card: " << q.front() << endl;
            q.pop();
        }
    }
    return 0;
}
