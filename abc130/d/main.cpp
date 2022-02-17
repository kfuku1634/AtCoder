#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    unsigned long j,N,K;
    cin >> N >> K;
    vector<unsigned long> a;
    while (cin >> j) {
        a.push_back(j);
    }

    unsigned long cnt = 0;
    unsigned long S =0;
    unsigned long SKcnt =0;
    size_t ai=0;
    while( ai < N+1 )
    {
        if( S >= K )
        { 
            cnt += (N - ai + 1);
            S -= a[SKcnt];
            SKcnt++;
        }
        else
        {
            S+=a[ai];
            ai++;
        }
    }
    cout << cnt << endl;
}
