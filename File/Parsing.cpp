#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	ifstream input;
	string FileName = "stat.txt";
	input.open(FileName);

	if(!input.is_open())
	{
		return 1;
	}

	while(input)
	{
		string line ;
		getline(input,line,':');
		int population;
		input >> population;
		//input.get();
		input>>ws;//ws-white space
		if(!input)
			break;
		cout<<"'"<<line<<"'"<<"--"<<population<<"'"<<endl;
	}
	input.close();
	return 0;
}
