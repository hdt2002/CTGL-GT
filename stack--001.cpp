#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_valid(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.empty()) return false;
            if (s[i] == ')' && st.top() != '(') return false;
            if (s[i] == '}' && st.top() != '{') return false;
            if (s[i] == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (is_valid(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
