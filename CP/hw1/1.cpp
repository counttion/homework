#include <cmath>
#include <iostream>
using namespace std;

//直接展开法求e^-x
double exp_direct(int x){
    double sum;
    double jingdu = (1e-16)/2;

    for(int n=0;;n++){
        double x_n = pow(x, n);
        double x_factorial = tgamma(n+1);
        int sign = (n%2==0)? 1 : -1 ;
        double s = sign * x_n / x_factorial;
        sum += s;
        if(abs(s/sum) < jingdu){
            break;
        }
    }
    return sum;
}
//递归法求e^-x
double exp_recursion(int x){
    double sum=1;
    double s=1;
    double jingdu = (1e-16)/2;

    for(int n=1;;n++){
        s = (-1 * s * x) / n;
        sum += s;
        if(abs(s/sum) < jingdu){
            break;
        }
    }
    return sum;
}
//递归法求e^x
double exp_recursion_pos(int x){
    double sum = 1;
    double s =1;
    double jingdu = (1e-16)/2;

    for(int n=1;;n++){
        s = (s * x) / n;
        sum += s;
        if(abs(s/sum) < jingdu){
            break;
        }
    }
    return sum;
}

int main(){
    for(int x=0;x<101;x+=10){
        cout<<exp(-1 * x)<<' ';
    }
    cout<<endl;
    for(int x=0;x<101;x+=10){
        cout<<exp_recursion(x)<<' ';
    }
    cout<<endl;
    for(int x=0;x<101;x+=10){
        cout<<1/exp_recursion_pos(x)<<' ';
    }
    cout<<endl;
    for(int x=0;x<101;x+=10){
        cout<<exp_direct(x)<<' ';
    }
    cout<<endl;
    return 0;
}