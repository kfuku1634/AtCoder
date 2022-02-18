#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;
    string old="";
    string ans="Good";
    if( S[0] == S[1] || S[1] == S[2] || S[2] == S[3] ){
        ans = "Bad";
    }
    cout << ans << endl;
}
