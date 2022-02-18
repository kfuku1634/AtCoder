#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    unsigned long A,B,C,D;
    cin >> A >> B >> C >> D;

    unsigned long BA_N = B - A + 1;
    unsigned long BA_per_C = ( B / C ) - ( (A-1) / C );
    unsigned long BA_per_D = ( B / D ) - ( (A-1) / D );
    unsigned long lcmCD = lcm( C , D );
    unsigned long BA_per_lcmCD = ( B / lcmCD ) - ( (A-1) / lcmCD );
    cout << BA_N - BA_per_C - BA_per_D + BA_per_lcmCD << endl;
}
