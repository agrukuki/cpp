#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <array>
#include <stdio.h>
/*
vi a b k la z+
nen a<=x^2<=b => sqrt(a)<=x<=sqrt(b)
a<=y^3<=b => sqrt(a,3)<=y<=sqrt(b.3)
x chay tu sqrt a -> sqrt b
y chay tu sqrt a -> sqrt b
thua man dk cuoi cung 
x^2-y^3 < k




*/
using namespace std;
int main() {
	string line;
	int count=0;
	ifstream input("CAU1.INP");
	ofstream output("CAU1.OUT");
	long k = 0;	
	long a = 0;
	long b = 0;
	
	if (input.is_open()) {
		getline(input, line);
		sscanf_s(line.c_str(), "%d %d %d", &a,&b, &k);
		
		for (int x = sqrt(a); x <= sqrt(b); x++)
		{
			for (int y = cbrt(a); y <= cbrt(b); y++)
			{
				if (abs(x*x - y * y*y) <= k )
				{
					cout << x<< " " << y << endl;
					count++;
				}
			}
		}
		if (output.is_open())
		{
			output << count;
			output.close();
		}
		input.close();
	}
	
	

	else cout << "Unable to open file";

	return 0;
}
