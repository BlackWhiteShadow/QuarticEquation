/* 
QuarticEquation.cpp : Create a function that returns the number of (real) solutions of ax^4+bx^2+c=0. 
                        The function will take three arguments: a as the coefficient of x^4, b as the coefficient of x^2, and c as the constant term.
*/

#include <iostream>
#include <math.h>

using namespace std;

int quarticEquation(int a, int b, int c) 
{
    int x1 = 0, x2 = 0;

    if ((pow(b, 2) - 4 * a * c) >= 0)
    {
        x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        if (x1 > 0 && x2 > 0)
            return 4;
        else if ((x1 < 0 && x2 > 0) || (x2 < 0 && x1 > 0))
            return 2;
        else if ((x1 == 0 && x2 > 0) || (x2 == 0 && x1 > 0))
            return 3;
        else if ((x1 == 0 && x2 < 0) || (x1 < 0 && x2 == 0))
            return 1;
        else
            return 0;
    }
    else
        return 0;

}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << quarticEquation(a, b, c);
}

