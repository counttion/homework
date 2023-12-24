#include<iostream>

int main(){
    int fenzi = 2;
    int fenmu = 1;
    int n;
    std::cin >> n;
    double sum = 0;
    for(int i=0;i<n;i++){
        sum += double(fenzi)/fenmu;
        int tmp = fenmu;
        fenmu = fenzi;
        fenzi += tmp;
    }
    std::cout<<sum;
    return 0;
}