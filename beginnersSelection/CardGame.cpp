#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string N_s;
    unsigned int N;
    int i;

    std::cin >> N_s;
    N = std::stoi(N_s);

    unsigned int a[N];
    std::string a_i;
    for(i=0; i<N; i++){
        std::cin >> a_i;
        a[i] = std::stoi(a_i);
    }

    std::sort(a, a+N);

    unsigned int sum_A=0;
    unsigned int sum_B=0;
    unsigned int cnt=0;

    for(i=N-1; i>=0; i--){
        if( cnt % 2 == 0 ){
            sum_A += a[i];
        }
        else{
            sum_B += a[i];
        }
        cnt +=1;
    }

    unsigned int res;
    res = sum_A - sum_B;
    std::cout << res << std::endl;
}
