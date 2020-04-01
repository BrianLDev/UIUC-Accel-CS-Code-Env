#include <iostream>

using std::cout;
using std::endl;

int main() {
  int  i =  2,  j =  4,  k =  8;
  int *p = &i, *q = &j, *r = &k;

  k = i;
  cout << i << j << k << *p << *q << *r << endl;
  // BL predicted outcome:
  // 242242

  p = q;
  cout << i << j << k << *p << *q << *r << endl;
  // BL predicted outcome:
  // 242442

  *q = *r;
  cout << i << j << k << *p << *q << *r << endl;
  // BL predicted outcome:
  // 222222

  return 0;
}
