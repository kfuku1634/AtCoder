#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string N_s;
    int         N;

    std::cin >> N_s;
    N = std::stoi(N_s);

    int         d[N];
    std::string d_s;

    for(unsigned int i=0; i<N; i++){
        std::cin >> d_s;
        d[i] = std::stoi(d_s);
    }

    std::sort(d, d+N, std::greater<int>());

    unsigned int cnt=1;
    unsigned int current_Mochi = d[0];
    for(unsigned int i=1; i<N; i++){
        if( d[i] < current_Mochi ){
            cnt +=1;
            current_Mochi = d[i];
        }
    }

    std::cout << cnt << std::endl;
}
