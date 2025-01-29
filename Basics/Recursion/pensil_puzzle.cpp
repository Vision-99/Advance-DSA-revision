#include <iostream>

using namespace std;

int count(int n) { 
    if (n < 4) { 
        return n * 4; 
    } else { 
        return 16 + count(n - 3); // we used 4, but count effectivly dec by 3
        // this can be improved bc it's repeated subtraction , wchich is in fact nothing but division.
    } 
} 

int main() { 
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0; 
}

/*
Approach
The approach is based on the observation that every time 4 pencils are used, they can be recycled into 1 new pencil. This reduces the problem size by 3 (since 4 pencils are consumed, and 1 new pencil is created). The recursion handles the remaining pencils after each recycling step. The base case is when fewer than 4 pencils are left, and each can be used fully without further recycling.

Recursive Relation:

Base Case: If n < 4, the total kilometers written is 4n (each pencil writes 4 km).

Recursive Case: If n >= 4, using 4 pencils generates 16 km (4 pencils × 4 km each). This leaves n - 3 pencils (since 4 are used and 1 is created from recycling). Thus, the total kilometers are 16 + count(n - 3).
*/