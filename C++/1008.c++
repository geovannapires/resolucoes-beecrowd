#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int number, hours;
    double receivedPerHour, salary;

    cin >> number;
    cin >> hours;
    cin >> receivedPerHour;

    salary = (receivedPerHour*hours);

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    
}
