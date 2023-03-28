#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            if (st.empty()) {
                return true;
            }
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

        if (check(s)) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}

