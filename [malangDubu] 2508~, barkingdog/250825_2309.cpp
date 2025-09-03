#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int arr[9];
    for (int i=0; i<9; i++) {
        cin >> arr[i];
    }

    sort(arr, arr +9); //arr에는 정렬된 아홉 난쟁이의 키
    int nineSum = accumulate(arr, arr+9, 0);
    int diff = nineSum - 100; //거짓된 두 난쟁이의 키 합

    int victimIdx1, victimIdx2; //거짓 난쟁이의 인덱스
    for (int i=0; i<9; i++) { //i번째 난쟁이가 거짓이라 가정
        for (int j=i+1; j<9; j++) { //i의 이후 난쟁이들을 확인
            if (arr[i] + arr[j] == diff) {
                victimIdx1 = i;
                victimIdx2 = j;
                break;
            }
            else {
                continue;
            }
        }
    }

    for (int i=0; i<9; i++) {
        if (i != victimIdx1 && i != victimIdx2) {
            cout << arr[i] << '\n';
        }
    }

    return 0;
}
