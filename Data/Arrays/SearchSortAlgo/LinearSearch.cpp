#include <iostream>
using namespace std;

// Function prototype
int searchList(int [], int, int);
const int arrSize = 5;
void main(void)
{
 int tests[arrSize] = {87, 75, 98, 100, 82};
 int result;
 result = searchList(tests, arrSize, 100);
 if (result == -1)
 cout << "You did not earn 100 points on any test\n";
 else{
 cout << "You earned 100 points on test ";
 cout << (result + 1) << endl;
 }
}