#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else if (s[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                return true;
            }
        }
    }
    if (st.empty()) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (check(s)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
// đang lỗi chỗ (b) chưa ra kết quả đúng
