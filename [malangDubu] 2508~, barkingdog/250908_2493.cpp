//현재는 수신하는 탑의 높이를 출력 -> 위치를 출력하게 바꿔야 함
//stack에 저장하는 값을 pair로 수정
#include <iostream>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N; cin >> N; //N은 탑의 총 갯수
    stack<pair<int,int>> towers; //탑의 높이, 탑의 번호(1-based)
    vector<int> ans(N);
    for (int i=0; i<N; i++) {
        int tower; cin >> tower; //현재 입력탑의 높이는 tower, 번호는 i+1
        if (towers.size() == 0) ans[i] = 0; //tower가 없으면 무조건 수신 불가 (0)
        else {
            if (towers.top().first > tower) {
                ans[i] = towers.top().second;
            }
            else { //towers.top() <= tower
                while (towers.size() != 0) {
                    towers.pop();
                    if (towers.size()!=0 && towers.top().first > tower) {
                        ans[i] = towers.top().second;
                        break;
                    }
                }
                if (towers.size() == 0) ans[i] = 0;
            }

        }
        towers.push(make_pair(tower, i+1));
    }

    for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    return 0;
}
