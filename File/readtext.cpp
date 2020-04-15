#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	ifstream InFile;
	string InFileName = "text.txt";
	InFile.open(InFileName);

	if(InFile.is_open())
	{
		string line;
		//Infile >> line;
		while(!InFile.eof())
		{
			getline(InFile, line);
			cout << line << endl;
		}
		InFile.close();
	}
	else{
		cout<<"can't open file" << InFileName <<endl;
	}

	return 0;
}
