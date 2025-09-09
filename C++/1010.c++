#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int cod1, cod2, unit1, unit2;
    double p1, p2, total;

    cin >> cod1 >> unit1 >> p1;
    cin >> cod2 >> unit2 >> p2;

    total = (unit1*p1) + (unit2*p2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

}
