/*making map*/

#include <iostream>
#include <iterator> 
#include <map>
using namespace std;
int main() {
	map<int, char> map1;			//map with integer and character
	map<int, char>::iterator it;
						//iterator pointing to map
	map1[1]='a';				
						//adding elements to map
	map1[2]='b';

	cout <<"KEY\tELEMENT"<<endl; 
	for(it = map1.begin();it!=map1.end(); ++it)
	{ 
		cout<<it->first;		//printing map using iterator
		cout<< '\t'<<it->second<<endl; 
	}

	map1.insert({3, 'c'});			//inserting new elements

	cout << "Updated Container" << endl;
	cout << "KEY\tELEMENT" << endl;
	for (it = map1.begin();it!= map1.end();++it)
	{
		cout << it->first;		//printing map
		cout << '\t' << it->second<< endl;
	}

	map1.clear();				//clearing entire map

	cout << "Updated Container" << endl;
	cout << "KEY\tELEMENT" << endl;
	for (it = map1.begin();it!= map1.end();++it)
	{
		cout << it->first;		//printing map
		cout << '\t' << it->second<< endl;
	}


}
