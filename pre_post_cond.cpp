/*
  The precondition and postcondition for the 
  function inchesToCentimeters can be specified
  as follows:
*/

double inchesToCentimeters(double inches) {
  /*
    Precondition:   The value of inches must be nonnegative.
    Postcondition:  If the value of inches is < 0, the function
    returns -1.0; otherwise, the function returns the
    equivalent length in centimeters.
  */

  if (inches < 0) {
    cerr << "The given measurement must be nonnegative." << endl;
    return -1.0;
  }
  else
    return 2.54 * inches;
}


/*
  In certain situations, you could use C++'s assert statement
  to validate the input. For example, the preceding function
  can be written as follows:
*/
#include <cassert>
double inchesToCentimeters(double inches) {
  /*
    Precondition:  The value of inches must be nonnegative.
    Postcondition: If the value of inches is < 0, the function
    terminates; otherwise, the function returns the
    equivalent length in centimeters.
  */

  assert(inches >= 0);
  return 2.54 * inches;
}
