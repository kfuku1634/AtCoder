#include<iostream>
#include<string>

int main(){
    unsigned int a,b;
    std::string s_a, s_b;

    std::cin >> s_a >> s_b;

    a = std::stoul(s_a);
    b = std::stoul(s_b);

    if(a*b%2 == 0){
        std::cout << "Even" << std::endl;
    }
    else{
        std::cout << "Odd" << std::endl;
    }
}
