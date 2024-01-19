#include <stdio.h>
int main() {
  float subtotal;
  float tax = .09;
  printf("What is you subtotal?");
  scanf("%f", &subtotal);
  printf("What is you tax rate?");
  scanf("%F" , &tax);
  printf("The tax rate is: %.2f\n", tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
