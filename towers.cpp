#include <iostream>
using namespace std;

void towers(int count, char src, char dest, char spare)
{
  if (1==count)
    cout << "Move a disk from " << src << " to " << dest << endl;
  else
  {
    towers(count - 1, src, spare, dest);
    towers(1, src, dest, spare);
    towers(count - 1, spare, dest, src);
  }
}
int main(){
  cout << "Towers of Hanoi" << endl;
  cout << "Enter a number of disks to play: " << endl;
  int number;
  char A = 'A', B = 'B', C = 'C';
  cin >> number;
  cout << number << endl;
  towers(number, A, B, C);
  return 0;
}