#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> nums;
    int K; cin >> K;
    while (K--) {
        int in; cin >> in;
        if (in == 0) nums.pop();
        else nums.push(in);
    }

    int sum = 0;
    if (nums.size() == 0) cout << sum << "\n";
    else {
        int numsSize = nums.size();
        while (numsSize--) {
            sum += nums.top();
            nums.pop();
        }
        cout << sum << "\n";
    }
    return 0;
}
