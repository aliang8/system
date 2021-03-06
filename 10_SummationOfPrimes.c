#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.*/

int isPrime(int number){
  if (number == 2){
    return 1;
  }
  for(int i = 2; i <= sqrt(number); i++){
    if(fmod(number,i) == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  double sum = 0;
  for(int i = 2; i < 2000000; i++){
    if(isPrime(i)){
      //printf("%i\n",i);
      sum += i;
    }
  }
  printf("%f\n",sum);
  return 0;
}

