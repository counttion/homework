#include<iostream>
#include<vector>
#include <cmath>

//递归计算，用c_n数组存储Cn以避免大量重复计算
std::vector<double> c_n(20, 1);

double cn_rec(int n){
    if(n==1 || n==2 ) return 1;
    if(c_n[n-1] != 1) return c_n[n-1];
    double res = cn_rec(n-1) * std::tgamma(n);
    c_n[n-1] = res;
    return res;
}

//计算det（Hn）
double detH_n(int n){
    double cn = cn_rec(n);
    double c2n = cn_rec(2*n);
    double det = std::pow(cn,4) / c2n; 
    return det;
}

int main(){
    //n从1到10，计算det（Hn）
    for(int i =1;i<11;i++){
        std::cout << detH_n(i) << " ";
    }
}