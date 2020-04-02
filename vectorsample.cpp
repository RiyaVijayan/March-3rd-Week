/* making a vector */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1;				//created a vector
	
	v1.assign(5,50);			//assign 5 elements with 50
	cout<<"Vector is :";
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";		//printing the vector ele

	cout<<endl;

	

	v1.push_back(30);			//pushing  an element 
	int n= v1.size();			//finding size of vector
	cout<<"After adding element, vector is :";
	for(int i=0;i<n;i++)
		cout<<v1[i]<<" ";

	cout<<endl<<"size of vector :"<<n<<endl;

	/*******************************/

	v1.pop_back();				//removing an element
	n=v1.size();
	cout<<"After removing element, vector is :";

	for(int i=0;i<n;i++)
		cout<<v1[i]<<" ";

	cout<<endl<<"size of vector :"<<n<<endl;

	/*******************************/

	v1.insert(v1.begin(),70);		//inserting an element at begin
	n=v1.size();
	cout<<"After inserting element at begining, vector is :";

	for(int i=0;i<n;i++)
		cout<<v1[i]<<" ";

	cout<<endl<<"size of vector :"<<n<<endl;
	/********************************/

	n=v1.size();
	swap(v1[0],v1[n-1]);			//swaping first and last ele of vector
	cout<<"After swaping elements at first and last, vector is :";

	for(int i=0;i<n;i++)
		cout<<v1[i]<<" ";

	cout<<endl<<"size of vector :"<<n<<endl;
	/********************************/

	v1.erase(v1.begin());			//erasing the first ele in vector
	n=v1.size();
	cout<<"After removing element at begining, vector is :";

	for(int i=0;i<n;i++)
		cout<<v1[i]<<" ";

	cout<<endl<<"size of vector :"<<n<<endl;
	/********************************/

	v1.clear();				//clearing the entire vector
	n=v1.size();
	cout<<"After clearing the size of vector is: ";
	for(int i=0;i<n;i++)
		cout<<v1[i]<<" ";

	cout<<endl<<"size of vector :"<<n<<endl;
	

}

