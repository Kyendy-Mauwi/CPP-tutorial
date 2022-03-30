/*this allows input of data from the user*/

#include <iostream>
using namespace std;

int main() {
  int x, y; //```int``` is a fundamental variable type built into the compiler and used to define numeric variables.
  int sum; //```array sum``` is the sum of all the elements of te array
  cout << "Type a number: "; //```cout``` is an object of class outstream that reps. the standard output stream.
  cin >> x; //```cin``` is used for taking any kind of data from the user.
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
  return 0; // return 0 shows successful
}

/* ```#include <iostream>``` is a header file library that lets us work with input and output objects, such as cout.
*/
