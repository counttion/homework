#include<iostream>
#include<cmath>
#include<vector>

std::pair<std::vector<std::vector<double>>, std::vector<double>> mtx_and_b(std::vector<double> x, std::vector<double> y){
    int n=3;

    std::vector<std::vector<double>> matrix{{1,0,0},{0.6,1.8,0.3},{0,0,1}};
    double b2 = (cos(pow(0.9,2))-cos(pow(0.6,2)))/0.3
    -(cos((pow(0.6,2))) - 1)/0.6;
    std::vector<double> b{0,6 * b2,0};
    
    return {matrix, b};

}

std::pair<std::vector<std::vector<double>>, std::vector<std::vector<double>>> Thomas(){
    std::vector<std::vector<double>> L{{1,0,0},{0.6,1,0},{0,0,1}};
    std::vector<std::vector<double>> U{{1,0,0},{0,1.8,0.3},{0,0,1}};
    return {L,U};
}
int main(){
    double b2 = (cos(pow(0.9,2))-cos(pow(0.6,2)))/0.3
    -(cos((pow(0.6,2))) - 1)/0.6;
    std::cout<<6 * b2;
    std::cout<<std::endl;
    double b1 = (cos(pow(0.6,2))-1)/0.6 + 0.6*2.38163/6;
    std::cout<< b1;
    std::cout<<std::endl;
    double a2 = (cos(pow(0.9,2))-cos(pow(0.6,2)))/0.3-0.3*2.38163/6;
    std::cout<< a2;
    std::cout<<std::endl;
    double b22 = cos(pow(0.6,2)) + 2.38163*0.3*0.3/6;
    std::cout<< b22;
    std::cout<<std::endl;
    double B = -2 * sin(pow(0.9,2)) * 0.9;
    std::cout<< B;
    std::cout<<std::endl;
    double b11=6* (cos(pow(0.6,2))-1)/0.6;
    double b13 = 6*(B-(cos(pow(0.9,2))-cos(pow(0.6,2)))/0.3);
    std::cout<< b11<<" "<<b13;
    std::cout<<std::endl;
    return 0;
}
