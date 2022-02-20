#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    long long x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    string ans="No";
    if( pow(2-(x2-x1),2)   + pow( 1-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(2-(x2-x1),2)   + pow(-1-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(-2-(x2-x1),2)  + pow( 1-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(-2-(x2-x1),2)  + pow(-1-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(1-(x2-x1),2)   + pow( 2-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(1-(x2-x1),2)   + pow(-2-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(-1-(x2-x1),2)  + pow( 2-(y2-y1),2) == 5 ) ans = "Yes";
    if( pow(-1-(x2-x1),2)  + pow(-2-(y2-y1),2) == 5 ) ans = "Yes";
    cout << ans << endl;
}
