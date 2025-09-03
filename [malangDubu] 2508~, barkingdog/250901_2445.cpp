#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    for (int i=1; i<=2*(T-1)+1; i++) {

        int space = (i<T ? (T-i)*2 : (i-T)*2);  //별 사이 공백 수
        int star = T*2 -space;
        int halfStar = star/2;

        for (int j=0; j<halfStar; j++) {
            cout << "*";
        }
        for (int j=0; j< space; j++) {
            cout << " ";
        }
        for (int j=0; j<halfStar; j++) {
            cout << "*";
        }
        cout << "\n";

    }
}
