#include <iostream>
#include <ostream>
#include <stdio.h>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  string input;
  cin >> input;
  string *ptr = &input;
  string x = *ptr;
  x = "test";
  cout << x << endl << input << endl;
  // arrays
  string my_array[5];
  my_array->append("XYZ");
  cout << my_array[0] << endl;
  // hashMaps
  unordered_map<string, string> my_map;
  my_map.insert({"test", "abc"});
  return 0;
}
