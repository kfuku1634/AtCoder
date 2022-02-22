#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    unsigned long N;
    cin >> N;
    unsigned long j;
    vector<unsigned long> a;
    while (cin >> j) {
        if( find(a.begin(),a.end(), j) == a.end()){
            a.push_back(j);
        }
    }
    cout << a.size() << endl;
}
