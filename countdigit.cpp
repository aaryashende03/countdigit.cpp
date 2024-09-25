#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number ="<<endl;
	cin>>num;
	int count = 0;
	
	while(num > 0)
	{
		num = num/10; //Remove
		count++;
	}
	
	cout<<"Number of digits  ="<<count<<endl;
	return 0;
}