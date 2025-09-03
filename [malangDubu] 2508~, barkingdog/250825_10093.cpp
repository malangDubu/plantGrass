#include <iostream>

using namespace std;

int main()
{
    long long A, B; cin >> A >> B;
    if (A>B) {
        long long diff = A-B-1;
        cout << diff << '\n';

        for (int i=1; i<=diff; i++) {
            cout << B+i << ' ';
        }
    }
    else if (B>A) {
        long long diff = B-A-1;
        cout << diff << '\n';

        for (int i=1; i<=diff; i++) {
            cout << A+i << ' ';
        }
    }
    else { // B==A
        cout << 0 << '\n';
    }
    return 0;
}
