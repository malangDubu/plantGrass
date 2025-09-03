#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N; cin >> N; //총 사람 수
    int k; cin >> k; //k번째 사람이 제거

    list<int> people;
    for (int i=1; i<=N; i++) {
        people.push_back(i);
    }

    vector<int> ans;

    auto cursor = people.begin();
    while (!people.empty()) {
        for (int i=1; i<k; i++) {
            cursor ++;
            if (cursor == people.end()) cursor = people.begin();
        }

        ans.push_back(*cursor);
        cursor = people.erase(cursor);
        if (cursor == people.end() && !people.empty()) cursor = people.begin();
    }

    cout << "<";
    for (int i=0; i<N-1; i++) {
        cout << ans[i] << ", ";
    }
    cout << ans[N-1] <<">";
    return 0;
}
