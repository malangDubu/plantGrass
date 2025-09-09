#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> s;
    int n; cin >> n; //총 숫자의 수
    string ans;

    int pushNum =0; //현재까지 총 push 횟수
    for (int i=0; i<n; i++) {
        int in; cin >> in; //현재 뽑고 싶은 수
        if (pushNum > in) { //in은 이미 스택에 있는 수
            if (s.top() != in) {
                cout << "NO\n";
                return 0;
            }
            else {
                s.pop();
                ans+= "-\n";
            }
        }
        else { //pushNum <= in, in은 스택에 없는 수
            for (int j=pushNum; j<in; j++) {
                s.push(j+1);
                ans+= "+\n";
            }
            pushNum = in;

            s.pop();
            ans+= "-\n";
        }

    }
    cout << ans ;
    return 0;
}
