#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <array>
#include <stdio.h>
#include <vector>
#include <map>  
using namespace std;

int main() {
	int n;
	cin >> n;
	ofstream output("BL1.OUT");
	if (output.is_open())
	{
		output << n << "\n";
		int loops = pow(10, (n - 1)) /10 * 9 + 1;
		cout << loops;
		if (2 <= n <= 10) {
			for (int i = 1; i < loops; i++) {
				
				output << i*11 << " ";
			}
		}
		
		output.close();
	}
	return 0;
}