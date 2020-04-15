#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
#pragma pack(push,1)

struct Person{
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)

int main()
{
	string fileName = "test.bin";
	ofstream output;
	Person someone = {"Fro",220, 0.8};
	output.open(fileName, ios::binary);
	if(output.is_open()){

		output.write(reinterpret_cast<char *>(&someone),sizeof(Person));

		output.close();
	}
	else{
		cout <<"can't open"<<fileName<<endl;
	}
	//read
	Person someoneelse = {};
	ifstream input;
	input.open(fileName, ios::binary);
	if(input.is_open()){

		input.read(reinterpret_cast<char *>(&someoneelse),sizeof(Person));

		input.close();
	}
	else{
		cout <<"can't open"<<fileName<<endl;
	}

	cout<<someoneelse.name<<","<<someoneelse.age<<","<<someoneelse.weight<<endl;
	return 0;
}


