#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*
  {1, 2} 2! 2x1 2 {1, 2} {2, 1}
  {1, 2, 3} 3! 3x2x1 {1, 2, 3} {1, 3, 2} {2, 1, 3} {2, 3, 1} {3, 1, 2} {3, 2, 1}
  {1, 2, 3, 4} 4! 4x3x2 24

  {1,2,3} {3,2,1}
*/

int isPermutationOf (const char * s1, const char * s2)
{
  
  return FALSE;
}

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
  test(TRUE, isPermutationOf ("a", "a"), "a");
  test(TRUE, isPermutationOf ("abc", "abc"), "abc");
  test(TRUE, isPermutationOf ("cab", "bac"), "a");
  return 0;
}