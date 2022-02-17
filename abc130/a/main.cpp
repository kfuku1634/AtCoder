#include <atomic>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string j;
    vector<string> input;
    while (cin >> j) {
    input.push_back(j);
    }

    for(auto i: input){
        cout << i << endl;
    }
}
