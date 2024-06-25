#include <iostream>

using namespace std;
int main() {
    int x = 10;
    int y = 20;
    int z = x + y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;;

    cout << x + y << endl;
    cout << z << endl;
    double sales = 95000;
    const double stateTaxRate = .04;
    const double countyTaxRate = .02;
    const double totalStateTax = stateTaxRate * sales;
    const double totalCountyTax = countyTaxRate * sales;
    cout << "State Tax is :$" << totalStateTax << endl;
    cout << "County Tax is :$" << totalCountyTax << endl;
    cout << "Total Tax is :$" << totalStateTax + totalCountyTax << endl;
    return 0;
}