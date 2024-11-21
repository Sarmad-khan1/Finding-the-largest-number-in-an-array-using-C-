#include <iostream>
using namespace std;
int main()
{
	int numbers[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter the number "<<i+1<<endl;
		cin>>numbers[i];
	}
	int largest=numbers[0];
	for(int i=0; i<5; i++)
	{
		if(numbers[i] > largest )
		{
			largest=numbers[i];
		}
	}
	cout<<"The largest value in array is: "<<largest<<endl;
}