#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {
            // Step 1: If opening bracket, push
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            // Step 2: If closing bracket
            else {
                // If stack empty → no matching opening
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                // Step 3: Check matching
                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Step 4: Stack should be empty
        return st.empty();
    }
};