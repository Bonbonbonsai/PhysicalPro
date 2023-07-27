#include <stdio.h>
#include <math.h>
int main() {
    double price, percent, amount;
    scanf("%lf%lf%lf", &price, &percent, &amount);

    // two get one
    double two_get_one = (price*2) * (floor(amount/3));
    double left_price = price * ((int)amount%3);
    double two_get_one_result = two_get_one + left_price;

    // percent discount
    double total_price = price*amount;
    double percent_result = total_price - (total_price*(percent/100));

    if (percent_result >= two_get_one_result) {
        printf("Buy 2 Get 1\n%.2lf", two_get_one_result);
    }
    else {
        printf("Discount %.lf%%\n%.2lf", percent, percent_result);
    }
    return 0;
}