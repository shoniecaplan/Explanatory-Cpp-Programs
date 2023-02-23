// Program to visualize bit shifting on a graphing calculator
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(&cout);
  unsigned long long x_Axis_Limit = 1000;

  for ( int x=0; x <= x_Axis_Limit; x++ ) {
    signed char z = 0; // Can change to unsigned char
    z = x<<2; // Change shift amount here

    // Adding shifted bits to end of number (only for 2)
    // if ( x & (1<<6) ) {
    //   z +=1;
    // }
    // if ( x & (1<<7) ) {
    //   z +=2;
    // }

    short c,v; c=v=0;
    c = x; v = z;

    cout << "(" << c << "," << v << ")";
    if ( x < x_Axis_Limit ) {
      cout << ", ";
    }

  }
  return(0);
}
