#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    int N; cin >> N; //카드의 수
    for (int i=1; i<=N; i++) q.push(i);

    while (q.size() !=1) {
        q.pop();
        int temp = q.front();
        q.pop();
        q.push(temp);
    }

    cout << q.front();
    return 0;
}
