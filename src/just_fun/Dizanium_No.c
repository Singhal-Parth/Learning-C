#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a given number
int countDigits(int number) {
  int count = 0;
  while (number != 0) {
    count++;
    number /= 10;
  }
  return count;
}

// Function to check if a number is a Disarium number
int isDisarium(int number) {
  int originalNumber = number;
  int digitCount = countDigits(number);
  int sum = 0;

  while (number != 0) {
    int digit = number % 10;
    sum += pow(digit, digitCount);
    digitCount--;
    number /= 10;
  }

  return (sum == originalNumber);
}

// Driver program
int main() {
  // Replace this value with your desired number
  int inputNumber = 89;

  // Call the function to check if the number is Disarium
  if (isDisarium(inputNumber)) {
    printf("%d is a Disarium number.\n", inputNumber);
  } else {
    printf("%d is not a Disarium number.\n", inputNumber);
  }

  return 0;
}