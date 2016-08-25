#include <iostream>
#include <string>

using namespace std;




int main() {

	string input;
	string result;

	cout << "What would you like for me to translate into pig latin: ";
	cin >> input;

	cout << endl;

	for (unsigned i = 1; i < input.length(); ++i)
	{

		result += input[i];
	}

	result += "-";
	result += input[0];
	result += "ay";

	cout << result << endl;
}