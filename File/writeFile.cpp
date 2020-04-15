#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	//ofstream Out;
	fstream Out;
	string OutFileName = "text.txt";
	//Out.open(OutFileName);
	Out.open(OutFileName,ios::out);
	if(Out.is_open()){
		Out << "hello here"<<endl;
		Out << 123<<endl;
		Out.close();
	}
	else{
		cout<<"can't open file" << OutFileName <<endl;
	}
	return 0;
}
