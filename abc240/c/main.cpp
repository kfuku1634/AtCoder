#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    unsigned long N,X;
    cin >> N >> X;
    bool dp[N+1][X+1];
    unsigned long a,b;
    size_t i=0, j=0;
    for( i=0; i <= N ; i++ ){
        for( j=0; j <= X; j++ ) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for( i=1; i <= N ; i++ ){
        cin >> a >> b;
        for( j=0; j <= X; j++ ) {
            if( dp[i-1][j] == true){
                if( j+a <= X){
                    dp[i][j+a] = true;
                }
                if( j+b <= X){
                    dp[i][j+b] = true;
                }
            }
        }
    }
    if( dp[N][X] == true ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}
