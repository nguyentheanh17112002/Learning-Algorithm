#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack<int> Molecule;
    int res = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '('){
            Molecule.push(-1);
        }
        else if(s[i] == 'C'){
            Molecule.push(12);
        }
        else if(s[i] == 'H'){
            Molecule.push(1);
        }
        else if(s[i] == 'O'){
            Molecule.push(16);
        }
        else if(s[i] == ')'){
            int temp = 0;
            while(Molecule.top() != -1){
                temp += Molecule.top();
                Molecule.pop();
            }
            Molecule.pop();
            Molecule.push(temp);
        }
        else{
            int w = s[i] - '0';
            int temp = Molecule.top()*w;
            Molecule.pop();
            Molecule.push(temp);
        }
    }
    while(!Molecule.empty()){
        res += Molecule.top();
        Molecule.pop();
    }
    cout << res;
    return 0;
}
