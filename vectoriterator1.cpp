/*Vector using iterator*/
#include <iostream> 
#include <vector> 
#include<map>
#include<iterator>
using namespace std; 
int main() 
{ 


	vector<int> v1;				//creating vector
	int n,x;
	cout<<"Enter the size of the vector: ";
	cin>>n;
	cout<<"Enter vector values:\n";
	for (int j=0;j<n;j++)
	{
		cin>>x;
		v1.push_back(x);		//pushing vector elements from user
	} 

	cout<<"Output all elements: ";
	vector<int>::iterator i; 
	for (i =v1.begin(); i!=v1.end();++i) 	//printing vector using iterator
		cout<<*i<<" "; 
}
