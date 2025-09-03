#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; //수열의 크기 n
    vector<int> sequence(n); //수열의 크기만큼의 벡터 생성
    for (int i=0; i<n; i++) {
        cin >> sequence[i];
    }
    int x; cin >> x;

    sort(sequence.begin(), sequence.end());
    int i=0; int j=n-1; int ans =0;
    while (i<j) {
        int s = sequence[i]+sequence[j];
        if (s == x) {
            ans ++;
            i ++;
            j --;
        }
        else if (s < x) {
            i ++;
        }
        else {
            j--;
        }
    }
    cout << ans;
    return 0;
}
