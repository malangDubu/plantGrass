#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string input; cin >> input;
    list<char> str;

    for (char c : input) { //list에 input을 넣음
        str.push_back(c);
    }

    auto cursor = str.end(); //현재 커서

    int n; cin >> n;
    while (n--) {
        char op; cin >> op;

        if (op == 'L') {
            if (cursor == str.begin()) {
                continue;
            }
            else {
                //cursor를 왼쪽으로 한 칸 옮김
                cursor --;
            }
        }
        else if (op == 'D') {
            if (cursor == str.end()) {
                continue;
            }
            else {
                //cursor를 오른쪽으로 한 칸 옮김
                cursor ++;
            }
        }
        else if (op == 'B') {
            if (cursor == str.begin()) {
                continue;
            }
            else {
                //cursor 왼쪽에 있는 문자를 삭제
                cursor --;
                cursor = str.erase(cursor); 
            }
        }
        else if (op == 'P') {
            char addString; cin >> addString;
            //addString을 현재 커서 왼쪽에 추가
            str.insert(cursor, addString);
        }
        else {
            cout << "wrong op" << "\n";
        }
    }

    //list str에 저장된 모든 원소를 출력
    for (char c : str) cout << c;
    return 0;
}
