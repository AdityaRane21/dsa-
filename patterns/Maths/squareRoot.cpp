#include <iostream>
using namespace std;

double squareRoot(double n) {
    double low = 0, high = n;
    double mid;

    // precision limit
    double eps = 1e-6; // eps = 0.000001;

    while (high - low > eps) {
        mid = (low + high) / 2;

        if (mid * mid > n)
            high = mid;
        else
            low = mid;
    }

    return (low + high) / 2;
}
