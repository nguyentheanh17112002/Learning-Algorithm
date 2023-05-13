#include<bits/stdc++.h>

using namespace std;

string solve_problem(string s){
    string res = "";
    stack<char> operators;
    int l = s.length();
    for(int i = 0 ; i < l; i++){
        if(s[i] == '('){
            continue;
        }
        else if(s[i] == ')'){
            char c = operators.top();
            res.push_back(c);
            operators.pop();
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            operators.push(s[i]);
        }
        else{
            res.push_back(s[i]);
        }
    }
    return res;
}


int main(){
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        string s;
        cin >> s;
        cout << solve_problem(s) << endl;
    }
}
