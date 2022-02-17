#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    unsigned long W,H,x,y;
    cin >> W >> H >> x >> y;

    double ans1 = W*H/2.0;
    int ans2 = (x*2 == W && y*2 == H)  ? 1 : 0;

    printf("%f %d\n",ans1, ans2);
}
