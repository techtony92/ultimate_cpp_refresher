#include <iostream>


int main() {
    // Mathematical Expressions
    int x = 10;
    int y = 3;
    int z = x + y;
    std::cout << z << '\n'; // 13
    z = x / y;
    std::cout << z << '\n'; // 3
    z = x % y;
    std::cout << z << '\n'; // 1
    /*
     * In order to get fractional values, one of the values has to be a fractional number.
     * We can use the "float" or "double" data type to use as such.
     */

    double a = 10;
    int b = 3;
    int c = a + b;
    double b2 = 3;
    double c2 = a + b2;
    std::cout << c << '\n';
    c = a / b; // Attempting to divide will result in the results datatype overriding. double gets narrowed to an int.
    std::cout << c << '\n';
    // c = a % b; Operation not allowed: result and operands must have the same datatype.
    c2 = a / b2;
    std::cout << c2 << '\n';
    /*
     *  Increment, Decrement, prefix , postfix
    */
    int e = 20;
    int f = 10;
    /*
     *  postfix copies the value over to the identifier on the left hand,
     *  THEN increments(or decrements) the value;
     */
    int g = e++; // postfix increment g = 20, then e++ --> e = 21
    std::cout << "g = " << g << '\n'; // g = 20
    std::cout << "e = " << e << '\n'; // e = 21

    /*
     *  prefix increments(or decrement) the value, THEN copies the value over to the identifier on the left hand.
     */

    int h = ++f; // prefix increment first f = 11, then assign h = f --> h = 11
    std::cout << "h = " << h << '\n';
    /*
     * prefix = operate then assign
     * postfix = assign then operate
     */
    /*
     * NOTE: You can only perform postfix and prefix operations with the + and - mathematical operators.
     *
     */
    return 0;
}