#include<iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    double r;
    const double pi = 3.14159;
    
    cin >> r;

    cout << "A="<< fixed << setprecision(4) << pi*r*r << endl;

    return 0;
}