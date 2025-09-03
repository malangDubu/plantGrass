#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    string roomNum = to_string(N);
    int number[10] = {0};

    for (int i=0; i<roomNum.length(); i++) { //6을 9로 전부 전환
        if (roomNum[i] == '6') {
            roomNum[i] = '9';
        }
    }

    for (char c : roomNum) { //number 배열에는 필요한 숫자의 개수가 저장
        number[c-'0'] ++;
    }

    number[9] = (number[9]+1) /2; //한 세트당 9가 2개 들어있는 셈이므로

    int largest = number[0]; //제일 많이 필요로 하는 숫자의 개수
    for (int i=1; i<10; i++) {
        if (largest < number[i]) largest = number[i];
    }

    cout << largest;

}
