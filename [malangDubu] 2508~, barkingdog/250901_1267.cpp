#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    int totalY = 0; int totalM = 0;
    while (T--) {
        int time; cin >> time;
        totalY += ((time/30) +1) * 10;
        totalM += ((time/60) +1) * 15;
    }

    if (totalY > totalM) {
        cout << "M " << totalM;
    }
    else if (totalY < totalM) {
        cout << "Y " << totalY;
    }
    else {
        cout << "Y M " << totalY;
    }
}
