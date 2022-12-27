#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> m;
        m['}'] = '{';
        m[')'] = '(';
        m[']'] = '[';

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push(s[i]);
            }

            else{
                if(stack.empty()){
                    return false;
                } 
                
                char front = stack.top();

                if (front != m[s[i]]){
                    return false;
                }

                stack.pop();
            }
        }

        return stack.empty();
    }
};