#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int max_prime = -1;

        for (int i = r; i >= l; i--) {
            if (is_prime(i)) {
                max_prime = i;
                break;
            }
        }

        cout << max_prime << endl;
    }

    return 0;
}