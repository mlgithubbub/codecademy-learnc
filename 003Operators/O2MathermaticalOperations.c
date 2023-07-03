#include <stdio.h>

int main() {
  
  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here
  //You sold 200 more books:
  booksSold = booksSold + 200;
  //Calculate the totalSalesValue:
  totalSalesValue = booksSold * bookCost;
  //Calculate totalSalesValue after publisher takes half:
  totalSalesValue = totalSalesValue/2;


  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
}