#include<bits/stdc++.h>

using namespace std;

int main(){
    int p, c;
    int cases = 0;
    while(true){
        char status;
        cin >> p >> c;
        if( p == 0 && c == 0){
            break;
        }
        cases++;
        cout << "Case " << cases << ":" << endl;
        int q_size = min(p , c);
        queue<int> q;
        for(int i = 1; i <= q_size ; i++){
            q.push(i);
        }
        for(int i = 0; i < c ; i++){
            cin >> status;
            if(status == 'N'){
                int out = q.front();
                cout << out << endl;
                q.pop();
                q.push(out);
            }
            else{
                int urgent, q_front, check = 0;
                cin >> urgent;
                q.push(urgent);
                if(urgent > q_size){
                    while(q.front() != urgent){
                        q_front = q.front();
                        q.pop();
                        q.push(q_front);
                    }
                }
                else{
                    while(q.front() != urgent || check == 0){
                        if(q.front() == urgent){
                            check++;
                            q.pop();
                        }
                        q_front = q.front();
                        q.pop();
                        q.push(q_front);
                    }
                }
            }
        }

    }
    return 0;
}
/**
#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

int main() {
    int P, C, x, temp, tc = 1;
    char cmd;
    queue<int> q;

    while (true) {
        cin >> P >> C;
        if (P == 0 && C == 0) {
            break;
        }

        for (int i = 1; i <= min(P, C); i++) {
            q.push(i);
        }

        cout << "Case " << tc++ << ":" << endl;

        for (int i = 0; i < C; i++) {
            cin >> cmd;

            if (cmd == 'N') {
                temp = q.front();
                cout << temp << endl;
                q.pop();
                q.push(temp);
            }
            else {
                cin >> x;
                int n = q.size();
                q.push(x);

                for (int j = 0; j < n; j++) {
                    temp = q.front();
                    q.pop();
                    if (temp != x) {
                        q.push(temp);
                    }
                }
            }
        }

        while (!q.empty()) {
            q.pop();
        }
    }
    return 0;
}
**/
