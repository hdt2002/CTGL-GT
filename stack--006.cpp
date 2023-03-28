#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Hàm kiểm tra xem một ký tự có phải là phép toán hay không
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Hàm chuyển đổi biểu thức tiền tố sang trung tố
string postfixToInfix(string postfix) {
    stack<string> s;

    // Duyệt từng ký tự trong biểu thức
    for (char c : postfix) {
        // Nếu là toán hạng, đưa vào stack
        if (!isOperator(c)) {
            s.push(string(1, c));
        } else {
            // Nếu là phép toán, lấy ra hai toán hạng và đưa vào biểu thức trung tố
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            string infix = "(" + op1 + c + op2 + ")";

            // Đưa biểu thức trung tố vào stack
            s.push(infix);
        }
    }

    // Biểu thức trung tố nằm trên đỉnh stack
    return s.top();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string postfix;
        cin >> postfix;
        string infix = postfixToInfix(postfix);
        cout << infix << endl;
    }
    return 0;
}
