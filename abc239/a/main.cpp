#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    double H;
    cin >> H;
    printf("%.9f\n",sqrt(H*(12800000+H)));
}
