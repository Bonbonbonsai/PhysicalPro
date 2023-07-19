#include<stdio.h>
int main() {
    double old_price, sale_percent, piece;
    scanf("%lf%lf%lf", &old_price, &sale_percent, &piece);
    double all_price = old_price * piece;
    double pay_price = all_price - sale_percent*0.01*all_price;
    printf("%.2lf", pay_price);
    return 0;
}
