#include<iostream>
#include<cstring>
using namespace std;

void mightGowrong()
{
	bool error = false;
	bool error1= true;
	if(error)
	{
		throw "something wrong";
	}
	if(error1)
	{
		throw string("something else wrong");
	}
}

int main()
{
	try
	{
		mightGowrong();
	}
	catch(int e)
	{
		cout << "error code "<< e<<endl;
	}
	catch(char const* e)
	{
		cout << "error message "<< e<<endl;
	}
	catch(string e)
	{
		cout << "error message "<< e<<endl;
	}
	cout<<"still running"<<endl;
	return 0;
}
