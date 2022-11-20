/*
Cycle 2
Program 3 : Swapping
Done by : Atharv J
Reg No : 20220028
Date: 30/11/2021
*/

#include<iostream>
using namespace std;
class var
{
public:
  int a;
  void input ()
  {
    cout << "Enter a value : ";
    cin >> a;
  }
};
void
swap_cv (var c1, var c2)
{
  cout << "Call by value.\n";
  int temp;
  temp = c1.a;
  c1.a = c2.a;
  c2.a = temp;
  cout << "Inside function swap_cv\n";
  cout << "Value of a after swapping = " << c1.a << endl;
  cout << "Value of b after swapping = " << c2.a << endl;
}

void
swap_cr (var & c1, var & c2)
{
  cout << "Call by reference.\n";
  int temp;
  temp = c1.a;
  c1.a = c2.a;
  c2.a = temp;
  cout << "Inside function swap_cr\n";
  cout << "Value of a after swapping = " << c1.a << endl;
  cout << "Value of b after swapping = " << c2.a << endl;
}

void
swap_ca (var * c1, var * c2)
{
  cout << "Call by address.\n";
  int temp;
  temp = c1->a;
  c1->a = c2->a;
  c2->a = temp;
  cout << "Inside function swap_ca\n";
  cout << "Value of a after swapping = " << c1->a << endl;
  cout << "Value of b after swapping = " << c2->a << endl;
}

int
main ()
{
  var ob1, ob2;
  int ch;
  ob1.input ();
  ob2.input ();
  cout << "1.Call by value\n2.Call by reference.\n3.Call by address.\n";
  cout << "Enter a Choice :";
  cin >> ch;
  cout << "Value of a before swapping = " << ob1.a << endl;
  cout << "Value of b before swapping = " << ob2.a << endl;
  switch (ch)
    {
    case 1:
      swap_cv (ob1, ob2);
      cout << "Inside main function\n";
      cout << "Value of a after swapping = " << ob1.a << endl;
      cout << "Value of b after swapping = " << ob2.a << endl;
      break;
    case 2:
      swap_cr (ob1, ob2);
      cout << "Inside main function\n";
      cout << "Value of a after swapping = " << ob1.a << endl;
      cout << "Value of b after swapping = " << ob2.a << endl;
      break;
    case 3:
      swap_ca (&ob1, &ob2);
      cout << "Inside main function\n";
      cout << "Value of a after swapping = " << ob1.a << endl;
      cout << "Value of b after swapping = " << ob2.a << endl;
      break;
    default:
      cout << "invalid choice";
    }
  return 0;
}

/*
SAMPLE INPUT : 
Enter a value : 2
Enter a value : 3
1.Call by value
2.Call by reference.
3.Call by address.
Enter a Choice :2

SAMPLE OUTPUT :
Value of a before swapping = 2
Value of b before swapping = 3
Call by reference.
Inside function swap_cr
Value of a after swapping = 3
Value of b after swapping = 2
Inside main function
Value of a after swapping = 3
Value of b after swapping = 2
*/
