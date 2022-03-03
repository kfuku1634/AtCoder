#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    unsigned long N ,M;
    cin >> N >> M ;
    unsigned long j;
    vector<unsigned long> A;
    unsigned long i;
    for ( i=0 ; i < N ; i++ ) {
        cin >> j;
        A.push_back(j);
    }
    unsigned long b;
    bool flag = true;
    for ( i=0; i < M ; i++) {
        cin >> b;
        auto index = find(A.begin(), A.end(), b);
        if ( index == A.end()){
            flag = false;
            break;
        }
        else{
            A.erase( index );
        }
    }

    if ( flag == true ) cout << "Yes" << endl;
    if ( flag == false ) cout << "No" << endl;
}
