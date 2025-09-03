#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int alphabet[26] = {0};

    string word; cin >> word;

    for (char c : word) {
       alphabet[c - 'a'] ++;
    }

    for (int i=0; i<26; i++) {
        cout << alphabet[i] << " ";
    }
    return 0;
}
 