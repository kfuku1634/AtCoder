#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    long N,L;
    cin >> N >> L;
    
    long S=0;
    for( int i=0; i < N ; i++)
    {
        S+=(L+i);
    }

    if( L+N-1 < 0 ){
        S -= (L+N-1);
    }
    else{
        if( L > 0)
        {
            S -= L;
        }
    }
    cout << S << endl;

}
