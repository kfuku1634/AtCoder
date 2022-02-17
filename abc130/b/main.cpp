#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    unsigned long N,X,j;
    cin >> N >> X;
    vector<unsigned long> L;
    while (cin >> j) {
        L.push_back(j);
    }

    unsigned long Li=0;
    for(auto v : L){
        if( Li + v < X ){
            break;
        }
        Li += v;
    }

    cout << Li << endl;
}
