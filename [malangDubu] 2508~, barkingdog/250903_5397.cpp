#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    list<char> passwd;
    int T; cin >> T; //test case의 수
    while (T--) {
        string input; cin >> input;
        auto cursor = passwd.end(); //현재 커서

        for (char c : input) {
            //입력된 문자가 명령인 경우
            if (c == '<') {
                if (cursor != passwd.begin()) {
                    cursor --;
                }
            }
            else if (c == '>') {
                if (cursor != passwd.end()) {
                    cursor ++;
                }
            }
            else if (c == '-') {
                if (cursor != passwd.begin()) {
                    cursor --;
                    cursor = passwd.erase(cursor);
                }
            }
            //입력된 문자가 명령이 아닌 경우
            else {
                passwd.insert(cursor, c);
            }
        }

        for (char c : passwd) cout << c ;
        cout << "\n";
        passwd.clear();
    }

    return 0;
}
