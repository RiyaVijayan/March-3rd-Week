/*multi set*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
  multiset<int> set1;					//integer multiset

  set1.insert(502);			
  set1.insert(502);					//inserting elements to set
  set1.insert(506);
  set1.insert(507);
  set1.insert(555);

  multiset<int>::iterator it1;				//printing elem using iterator points to set
  cout << "\nThe multiset elements before deletion are: ";
  for (it1 = set1.begin(); it1 != set1.end(); ++it1)
  {
    cout << " " << *it1;
  }

  set1.erase(506);
  set1.erase(555); 					//deleting elements

  cout << "\nThe multiset elements after deletion are: ";
  for (it1 = set1.begin(); it1 != set1.end(); ++it1)
  {
    cout << " " << *it1;
  }
}
