#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    long long X;
    cin >> X;
    long long ans;
    if( X < 0){
        if ( X % 10 == 0){
            ans = (X/10);
        }
        else{
            ans = (X/10)-1;
        }
    }
    else{
        ans = (X/10);
    }
    cout << ans << endl;
}

