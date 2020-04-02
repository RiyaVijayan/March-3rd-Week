/*making a set*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> set1;					//created a set
	
	set<int>::iterator pt1;				//created a pointer pointing to set

	set1.insert(20);
	set1.insert(202);
	set1.insert(230);				//inserting elements to set
	set1.insert(240);
	set1.insert(250);

							//printing element after insertion
	cout << "Elements after insertion = ";
	for (pt1 = set1.begin(); pt1 != set1.end(); ++pt1)
		cout << *pt1 << " ";

							//deleting the elements first 2
	set1.erase(20);
	set1.erase(202);

							// printing set elements after deletion
	cout << "\nElement after deletion : ";
	for (pt1 = set1.begin(); pt1 != set1.end(); ++pt1)
		cout << *pt1 << " ";

	cout<<endl;
}
