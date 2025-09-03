#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int number[10] = {0};

    int A, B, C; cin >> A >> B >> C;
    int mul = A*B*C;
    string stringMul = to_string(mul);

    for (char c : stringMul) {
        number[c - '0'] ++;
    }

    for (int i=0; i<10; i++) {
        cout << number[i] << "\n";
    }
    return 0;

}
