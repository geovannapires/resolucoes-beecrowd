#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char name[100];
    double salary, sold, bonus;

    cin >> name;
    cin >> salary;
    cin >> sold;

    bonus = (0.15*sold)+salary;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << bonus << endl;
}
