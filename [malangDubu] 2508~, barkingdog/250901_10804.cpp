#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[20];
    for (int i=1; i<21; i++) { //초기 덱 (오름차순)
        arr[i-1] = i;
    }

    for (int i=0; i<10; i++) { //10번의 뒤집기 작업
        int a, b; cin >> a >> b;
        //int l= a-1; int r = b-1;
        int time=0;
        if (b-a == 0) { //구간이 하나라 처리할 필요 없음
            continue;
        }
        else if ((b-a)%2 == 0) { //구간 안 수가 홀수개
            time = (b-a)/2; //뒤집기를 time번 수행
            for (int j=0; j<time; j++) {
                swap(arr[a-1+j], arr[b-1-j]);
            }
        }
        else { //구간 안 수가 짝수개
            time = (b-a)/2 +1; //뒤집기를 time번 수행
            for (int j=0; j<time; j++) {
                swap(arr[a-1+j], arr[b-1-j]);
            }
        }
    }

    for (int i=0; i<20; i++) {
        cout << arr[i] << " ";
    }
}
