/* Vector analyzing*/
#include<iostream>
#include<vector> 
using namespace std; 
int main() 
{ 

	vector<int>v1;					//creating vector
	int n,x;
	cout<<"Enter the size of the vector: ";
	cin>>n;						//user inputed vector size
	cout<<"Enter vector values:\n";
	for (int j=0;j<n;j++)
	{
		cin>>x;
		v1.push_back(x);			//pusing elements to vector
	}

	cout<<"\nReference operator v1[2]= "<<v1[2]; 	//reference opertor

	cout<<"\nValue at position 3 is: "<<v1.at(3);	//value at a position 

	cout <<"\nFirst element of the vector is: "<<v1.front(); //value in front

	cout << "\nLast element of the vector is: "<<v1.back(); //value in back

	int* i=v1.data();
	cout<<"\nAll the elements of the vector is:\n";
	for(int j=0;j<v1.size();j++)
	{
		cout<<*i++<<" ";			//printing elements using iterator
	}

} 
