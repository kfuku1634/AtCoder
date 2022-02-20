#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#define ul (unsigned long)

using namespace std;

int main() {
    unsigned long N;
    cin >> N;

    unsigned long j;
    vector<unsigned long> d;
    while (cin >> j) {
        d.push_back(j);
    }

    sort(d.begin(),d.end());
    auto abc_end = d[N/2-1];
    auto arc_ini = d[N/2];

    if(abc_end == arc_ini){
        cout << 0 << endl;
    }
    else {
        cout << arc_ini - abc_end << endl;
    }

}
