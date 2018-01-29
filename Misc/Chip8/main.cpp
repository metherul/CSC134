#include <iostream>

using namespace std;

int main()
{
	string applicationPath;
	cin >> applicationPath;

	ifstream infile(applicationPath);
	infile.seekg(0, infile.end);
	size_t length = infile.tellg();
	infile.seekg(0, infile.beg);



}
