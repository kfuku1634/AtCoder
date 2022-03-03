#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    unsigned long j;
    vector<unsigned long> a;
    while (cin >> j) {
        a.push_back(j);
    }

    unsigned long k = a[0];
    k = a[k];
    k = a[k];
    cout << k << endl;
}
