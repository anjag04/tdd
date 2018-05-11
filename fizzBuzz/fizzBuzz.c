/*
  Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz “.

  Sample output:

  1
  2
  Fizz
  4
  Buzz
  Fizz
  7
  8
  Fizz
  Buzz
  11
  Fizz
  13
  14
  FizzBuzz
  16
  17
  Fizz
  19
  Buzz
  ... etc up to 100
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

void test (int expected, int actual, const char * testName)
{
  if (expected == actual)
  {
    printf ("\n%s PASSED!", testName);
  }
  else 
  {
    printf ("\n%s FAILED expected: %d actual: %d", testName, expected, actual);
  }
}

int main (int argc, char * argv[])
{
  printf ("Compile Successful!\n");
  // test(TRUE, isPermutationOf ("a", "a"), "a");
  return 0;
}