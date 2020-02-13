#include<iostream>
#include<string>

int main(){
    std::string s;

    std::cin >> s;

    unsigned int cnt;

    cnt =0;
    for(auto&&si : s){
        if( si == '1' ){
            cnt +=1;
        }
    }

    std::cout << cnt << std::endl;

}
