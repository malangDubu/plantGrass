#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> s;

    int N; cin >> N; //N은 명령의 수
    while (N--) {
        string op; cin >> op;
        if (op == "push") {
            int num; cin >> num;
            s.push(num);
        }
        else if (op == "pop") {
            if (s.size() == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (op == "size") {
            cout << s.size() << "\n";
        }
        else if (op == "empty") {
            (s.empty() == true) ? (cout << 1 << "\n") : (cout << 0 << "\n");
        }
        else if (op == "top") {
            if (s.size() == 0) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
        else {
            cout << "wrong op" << "\n";
        }
    }

    return 0;
}
