#include <cstddef>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    unsigned long N;
    cin >> N;

    size_t i,j,k;
    unsigned long A[N][N];
    string Si;
    bool flag = false;
    unsigned long cnt;
    vector<unsigned long> sub_vec;
    for( i=0 ; i < N ; i++){
        cin >> Si;
        cnt = 0;
        for( j=0; j < N ; j++){
            if( Si.substr(j,1) == "#" ){
                A[i][j] = 1;
            }
            else{
                A[i][j] = 0;
            }
        }
    }

    for( i=0 ; i < N ; i++){
        for( j=0; j < N - 5 ; j++){
            cnt = 0;
            for ( k=0; k < 6 ; k++ ){
                cnt += A[i][j+k];
            }
            if( cnt >= 4){
                flag = true;
                break;
            }
        }
    }
    if( flag==false ){
        for( j=0 ; j < N ; j++){
            for( i=0; i < N - 5 ; i++){
                cnt = 0;
                for ( k=0; k < 6 ; k++ ){
                    cnt += A[i+k][j];
                }
                if( cnt >= 4){
                    flag = true;
                    break;
                }
            }
        }
    }

    if( flag==false ){
        for( i=0 ; i < N - 5 ; i++){
            for( j=0; j < N - 5 ; j++){
                cnt = 0;
                for ( k=0; k < 6 ; k++ ){
                    cnt += A[i+k][j+k];
                }
                if( cnt >= 4){
                    flag = true;
                    break;
                }
            }
        }
    }

    if( flag==false ){
        for( j=0 ; j < N ; j++){
            for( i=0; i < N - 5 ; i++){
                cnt = 0;
                for ( k=0; k < 6 ; k++ ){
                    cnt += A[i+k][j];
                }
                if( cnt >= 4){
                    flag = true;
                    break;
                }
            }
        }
    }

    if( flag==false ){
        for( i=0 ; i < N - 5 ; i++){
            for( j=N-1; j > 4 ; j--){
                cnt = 0;
                for ( k=0; k < 6 ; k++ ){
                    cnt += A[i+k][j-k];
                }
                if( cnt >= 4){
                    flag = true;
                    break;
                }
            }
        }
    }

    if( flag == true ) cout << "Yes" << endl;
    if( flag == false ) cout << "No" << endl;

}
