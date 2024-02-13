#include <cstdio>
#include <iostream>

// using std::cin;
using std::cout;
using std::endl;

enum myEnum { x, y, z };

class MyClass {
public:
  char x = 'x';
  int y = 10;
};

int main() {

  MyClass myObject;
  printf("the MyClass values are: (x=%c y=%i)\n", myObject.x, myObject.y);

  int brinjaA, brinjaB, Syprina, Perimetri;
  brinjaA = 5;
  brinjaB = 10;
  Syprina = brinjaA * brinjaB;
  Perimetri = (2 * brinjaA) + (2 * brinjaB);

  cout << "Syprina: " << Syprina << ", Perimetri: " << Perimetri;
  cout << "test" << endl;

  // enum
  myEnum testEnumValue;
  testEnumValue = y;
  cout << "values inside enum: " << testEnumValue << endl;

  // switch

  switch (testEnumValue) {
  case x:
    cout << "the Enum value is x" << endl;
  case y:
    cout << "the Enum value is y" << endl;
  default:
    break;
  }

  return 0;
}
