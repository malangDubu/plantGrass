#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    for (int i=T-1; i>=0; i--) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int j=0; j<T-i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
