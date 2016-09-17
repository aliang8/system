#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

int main(){
   int sumSquares = 0;
   int squareSums = 0;
   for (int i = 1; i <= 100; i++){
     sumSquares += pow(i,2);
     squareSums += i;
   }
   printf("%f",pow(squareSums,2) - sumSquares);
   return 0;
 }
