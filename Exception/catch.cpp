#include<iostream>
#include<cstring>
#include<exception>
using namespace std;

void Gowrong()
{
	bool error1 = false;
	bool error2 = true;

	if(error1)
	{
		throw bad_alloc();
	}
	if(error2)
	{
		throw exception();
	}
}

int main()
{
	try{
		Gowrong();
	}
	catch(bad_alloc &e){
		cout<<e.what()<<endl;
	}
	catch(exception &e){
		cout<<e.what()<<endl;
	}
	cout<<"still running"<<endl;
	return 0;
}

