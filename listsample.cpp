/*making a list*/

#include<iostream>
#include<vector>
#include<iterator>
#include<list>
using namespace std;
void show_list(list<int> l)			//printing list function using iterator
{
	list<int>::iterator it;		
	for(it=l.begin();it!=l.end();it++)
	{
		cout <<  *it << " ";		
	}
	cout << "\n";
}
int main()
{

	list<int>list1,list2;				//creating integer list
	int i;
							// inserting at the back
	for(i=1;i<11;i++)
		list1.push_back(i);

							//inserting at the front
	for(i=1;i<11;i++)
		list2.push_front(i);

	cout << "Content of List A: ";
	show_list(list1);
	cout << "Content of list B: ";
	show_list(list2);

							// sorting the second list
	list2.sort();
	cout << "Sorted List B : ";
	show_list(list2);

	cout<<"Removing five elements from front in list A."<<endl;
	int times = 5;
	while(times--)
	{
		list1.pop_front();			//removing 5 elements from front
	}
	cout << "Content of List A: " ;
	show_list(list1);
	cout<<"Removing five elements from the back in list B."<<endl;
	times=5;
	while(times--)
	{
		list2.pop_back();			//removing 5 elements from back
	}
	cout << "Content of List B: ";
	show_list(list2);

							//first and last element of list A
	cout << list1.front() << " is now at the front in list A\n";
	cout << list1.back() << " is now the last element in list A\n";
							// first and last element in list B
	cout << list2.front() << " is now at the front in list B\n";
	cout << list2.back() << " is now the last element in list B\n";

							//Inserting elements in list A.
	list1.insert(list1.begin(),5,10);
	cout << "After Insertion list A: ";
	show_list(list1);

							//remove all the elements with value 10.
	list1.remove(10);
	cout << "After Removal list A: ";
	show_list(list1);

							//Reversing the content of list B
	list2.reverse();
	cout << "Reversed list B: ";
	show_list(list2);

							//erasing first element of list B
	list2.erase(list2.begin());
	cout << "After erasing first ele from list B: ";
	show_list(list2);

	//Removing all elements from list A.
	list1.clear();
	//empty() function
	if(list1.empty()) cout << "List A is now empty\n";
	else cout << "Not Empty\n";

	//assign function
	list1.assign(5,2); // 2 2 2 2 2
	cout << "List A: ";
	show_list(list1);



}

