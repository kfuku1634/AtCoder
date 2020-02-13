#include<iostream>
#include<string>

unsigned int digit_sum( unsigned int number ){
    unsigned int res=0, remainder;
    while( number != 0 ){
        remainder = number % 10;
        res += remainder;
        number = number / 10;
    }
    return res;
}

int main(){

    std::string N_s, A_s, B_s;
    unsigned int N, A, B;

    std::cin >> N_s;
    std::cin >> A_s;
    std::cin >> B_s;

    N = std::stoi(N_s);
    A = std::stoi(A_s);
    B = std::stoi(B_s);

    unsigned int sum=0, digit_res;

    for(unsigned int number=1; number<=N; number++){
        digit_res = digit_sum(number);
        if( A <= digit_res && digit_res <= B ){
            sum += number;
        }
    }
    std::cout << sum << std::endl;
}
