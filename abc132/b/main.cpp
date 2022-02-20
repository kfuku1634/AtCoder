#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    unsigned long n;
    unsigned long j;
    cin >> n;
    vector<unsigned long> p;
    while (cin >> j) {
        p.push_back(j);
    }
    unsigned long cnt=0;
    for(size_t i= 1; i < p.size()-1; i++){
        if(p[i-1] < p[i] && p[i] <= p[i+1]) cnt++;
        else if(p[i-1] >= p[i] && p[i] > p[i+1]) cnt++;
    }
    cout << cnt << endl;
}
