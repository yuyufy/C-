#include<iostream>
#include<cstring>
using namespace std;

class MyException : public exception {
	public : virtual const char* what() const throw() {
		return "something wrong";
	}
};

class Test {
	public :
		void Gowrong()
		{
			throw MyException();
		}
};


int main()
{
	Test test;
	try{
		test.Gowrong();
	}
	catch(MyException &e){
		cout<<e.what()<<endl;
	}
	cout<<"still running"<<endl;
	return 0;
}
