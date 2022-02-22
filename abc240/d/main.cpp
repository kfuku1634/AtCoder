#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

enum ID {val, cnt};

int main() {
    unsigned long N;
    cin >> N;
    vector<vector<unsigned long>> A;
    vector<unsigned long>el_A,tmp;
    unsigned long a;
    cin >> a;
    el_A.push_back(a);
    el_A.push_back(1);
    A.push_back(el_A);
    unsigned long cnt=1;
    cout << 1 << endl;
    while (cin >> a) {
        if (A.empty() == true ){
            tmp.push_back(a);
            tmp.push_back(1);
            A.push_back(tmp);
            cnt++;
        }
        else{
            el_A = A.back();
            if ( el_A[ID::val] == a ){
                A.pop_back();
                tmp.push_back(el_A[ID::val]);
                tmp.push_back(++el_A[ID::cnt]);
                A.push_back(tmp);
                cnt++;
                if( el_A[ID::cnt] == a ){
                    A.pop_back();
                    cnt -= a;
                }
            }
            else{
                tmp.push_back(a);
                tmp.push_back(1);
                A.push_back(tmp);
                cnt++;
            }
        }
        tmp.clear();
        cout << cnt << endl;
    }
}
