#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> angka;

    int n, input;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> input;
        angka.push_back(input);
    }

    sort(angka.begin(), angka.end());

    cout << "\nData setelah diurutkan: ";
    for(int x : angka) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
