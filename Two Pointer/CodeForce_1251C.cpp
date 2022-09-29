#include<bits/stdc++.h>

using namespace std;

string solve_problem(string str){
    vector<int> even , odd;
    int n = str.length();
    string res = "";
    for(int i = 0 ; i < n ; i++ ){
        int a = int(str[i]);
        if(a % 2 == 0){
            even.push_back(a);
        }
        else{
            odd.push_back(a);
        }
    }
    int even_size = even.size(), odd_size = odd.size();
    int even_index = 0, odd_index = 0;
    while((even_index < even_size) || (odd_index < odd_size)){
        if(even_index >= even_size){
            char c = char(odd[odd_index]);
            res.push_back(c);
            odd_index++;
        }
        else if(odd_index >= odd_size){
            char c = char(even[even_index]);
            res.push_back(c);
            even_index++;
        }
        else{
            int e = even[even_index];
            int o = odd[odd_index];
            if(e > o){
                char c = char(o);
                res.push_back(c);
                odd_index++;
            }
            else{
                char c = char(e);
                res.push_back(c);
                even_index++;
            }
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        string s;
        cin >> s;
        cout << solve_problem(s) << endl;
    }
}
