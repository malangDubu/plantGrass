#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5];
    for (int i=0; i<5; i++) {
        cin >> arr[i];
    }

    sort(arr, arr +5);
    int avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) /5;
    cout << avg << '\n' << arr[2];
}
