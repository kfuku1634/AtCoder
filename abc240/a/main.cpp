#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long a,b;
    cin >> a >> b;

    if( abs(b-a) == 1){
        cout << "Yes" << endl;
    }
    else if( ( a == 10 && b == 1) || (a==1 && b==10) ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
