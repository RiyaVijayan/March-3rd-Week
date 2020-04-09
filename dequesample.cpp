/*dequeue*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> queue1;	//integer queue
	queue<int> queue2;
	queue1.push(0);		//pusing data to queue
	queue1.push(1);
	queue1.push(2);
	queue1.push(3);
	queue1.push(4);

	queue2.push(5);		//pusing data to queue
	queue2.push(6);
	queue2.push(7);
	queue2.push(8);
	queue2.push(9);

	cout<<"Size of the queue1 is: "<<queue1.size()<<endl;		//size of queue
	cout<<"The element at the front is:"<<queue1.front()<<endl;	//element at front
	cout<<"The element at the back is:"<<queue1.back()<<endl;	//element at back

	cout<<"Size of the queue2 is: "<<queue2.size()<<endl;	
	cout<<"The element at the front is:"<<queue2.front()<<endl;
	cout<<"The element at the back is:"<<queue2.back()<<endl;	

	cout<<"swapped"<<endl;		
	queue1.swap(queue2); 						//Swapping of queue

	cout << "Elements of queue1 after swapping are:";
	while (!queue1.empty())
	{
		cout << queue1.front() << " ";			//printing elements of queue
		queue1.pop();
	}

								 //Print the second set
	cout << endl
		<< "Elements of queue2 after swapping are:";
	while (!queue2.empty())
	{
		cout << queue2.front() << " ";
		queue2.pop();
	}


}
