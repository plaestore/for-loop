//a program using the for loop to calculate the interest rate in a stock market using the for loop//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a;
    float p = 1000;
    float r = .01;

    for(int day = 1; day <= 20; day++){
        a = p * pow(1 +r, day);
        cout << day << "-------"<<a <<endl;
    }


    return 0;
}
