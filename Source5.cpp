#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <array>
#include <stdio.h>
#include <vector>
#include <map> 
#include <cmath>
using namespace std;

int main() {
	int mk,tmp,sum;
	ofstream output("MK.OUT");
	string umk;
	
	vector <char> arr;
	ifstream input("MK.INP");
	if (input.is_open())
	{
		getline(input, umk);
		cout << umk << endl;
		sum = 0;

		int length = umk.length();
		
		cout << length << endl;
		for (int i = 0; i< length;i++) {
			tmp = (int)umk[i] - 48;
			cout << tmp << endl;
			sum = sum + tmp;
			
		}
		cout << sum;
		if (output.is_open())
		{
			output << sum;
			output.close();
		}
		input.close();
	}
	else cout << "Unable to open file";
	return 0;

}