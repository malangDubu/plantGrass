#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N; cin >> N; //명령의 수
    queue<int> q;
    while (N--) {
        string command; cin >> command;
        if (command == "push") {
            int i; cin >> i;
            q.push(i);
        }
        else if (command == "front") {
            if (q.empty() == true) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
            }
        }
        else if (command == "back") {
            if (q.empty() == true) cout << -1 << "\n";
            else {
                cout << q.back() << "\n";
            }
        }
        else if (command == "size") {
            cout << q.size() << "\n";
        }
        else if (command == "empty") {
            if (q.empty() == true) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (command == "pop") {
            if (q.empty() == true) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else {

        }

    }
    return 0;
}
