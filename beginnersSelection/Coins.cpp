#include<iostream>
#include<string>

int main(){
    unsigned int A,B,C,X;
    std::string  s_A, s_B, s_C, s_X;

    std::cin >> s_A;
    std::cin >> s_B;
    std::cin >> s_C;
    std::cin >> s_X;

    A = std::stoi(s_A);
    B = std::stoi(s_B);
    C = std::stoi(s_C);
    X = std::stoi(s_X);

    unsigned int cnt=0; 

    for( auto a=0; a<=A; a++){
        for( auto b=0; b<=B; b++){
            for( auto c=0; c<=C; c++){
                if( 500*a + 100*b + 50*c == X ){
                    cnt += 1;
                }
            }

        }
    }
    std::cout << cnt << std::endl;

}
