// manual and therefore very inefficient calculation of phi

#include <iostream>
#include <vector>
using namespace std;
int phi(int n) {
    vector<int> factors;
    vector<int> toCount;
    int phiValue = n-1;
    int i, o;
    // getting factors
    for (i=2; i<n; i++) {
        if (n % i == 0)
            factors.push_back(i);
    }
    // create the list of nums less than n
    for (i=1; i<n; i++) {
        toCount.push_back(i);
    }
    // deletes multiples of factors (to get coprimes of n)
    for (i=0; i<toCount.size(); i++) { // for each number less than n
        for (o=0; o<factors.size(); o++) { // for each factor of n
            if (toCount[i] % factors[o] == 0) // if the number is a multiple of the factor
            {
                phiValue--;
            }
        }
    }
    return phiValue;
}

int main() {
    cout << phi(6);
    return 0;
}