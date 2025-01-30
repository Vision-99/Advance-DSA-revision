// Efficient C++ program to find maximum
// number of chocolates
#include <iostream>
using namespace std;

int countChocolates(int money, int price, int wrap) {

    // Corner case
    if (money < price)
       return 0;

    // First find number of chocolates that
    // can be purchased with the given amount
    int choc = money / price;

    // Now just add number of chocolates with the
    // chocolates gained by wrapprices
    choc = choc + (choc - 1) / (wrap - 1);
    return choc;
}

int main() {
    int money = 15 ;
    int price = 1;
    int wrap = 3 ;
    cout << countChocolates(money, price, wrap);
    return 0;
}