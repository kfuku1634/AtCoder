#include<iostream>
#include<string>

int main(){
    unsigned int n,cnt;
    std::string temp;
    bool flag;


    std::cin >> n;
    unsigned long a[n],new_a[n];
    for(auto i=0; i<n; i++){
        std::cin >> temp;
        a[i] = std::stoul(temp);
    }

    cnt=0;
    flag = true;
    while(1){
        for(auto i=0; i<n; i++){
            if( a[i] % 2  != 0 ){
                flag=false;
                break;
            }
            else{
                a[i] = a[i]/2;
            }
        }
        if(flag==false){
            break;
        }
        cnt+=1;
    }
    std::cout << cnt << std::endl;
}
