// Program to demonstrate use of Loop invariant.
// Find a maximum element in an array of integers

#include <iostream>

//{ Precondition: len (size of A) > 0}
int findMax (int A[], int len) {
  int k = 1;
  int maxVal = a[0];

  // {loop invariant P: maxVal == Max(a[0..k-1])}
  while (k != n)  {
    if (a[k] > maxVal) 
      { maxVal = a[k]; }

    // {P(k:=k+1): maxVal == Max(a[0..k])}

    k = k+1;   // re-establishes P

  }
  // { maxVal == Max(a[0..k-1])  &  k == n }
  // Postcondition: maxVal == Max(a[0..n-1]) }

  return maxVal;
}
