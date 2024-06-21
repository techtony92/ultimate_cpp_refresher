#include <iostream>



int main() {
    // Order of Operations
    double a = 1 + 2 * 3; // 7
    std::cout << a << '\n';
    /*
     * Follow the rules of P.E.D.M.A.S OR
     * (P)lease (E)xcuse (M)y (D)ear (A)unt (S)ally
     * Order:
     * 1) (p) Parenthesis over everything
     * 2) (E) Exponents
     * 3) (M) Multiplication
     * 4) (D) Division
     * 5) (A) Addition
     * 5) (S) Subtraction

     ***/
    // Solve for Z
    /*      x + 10
     * z = --------
     *       3Y
     *  assume x = 10
     *  assume y = 5
     */

    double x = 10;
    double y = 5;
    x = x + 10;
    double z = x / (y * 3) ;
    std::cout << z << "\n";
    return 0;
}

