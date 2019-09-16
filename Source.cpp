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

int rvs(int i) {
	int reverse = 0, rem;
	while (i > 0)
	{
		rem = i % 10;
		reverse = reverse * 10 + rem;
		i = i / 10;
		
	}
	return reverse;
}
int UCLN(int a, int b) {
	if (b == 0) return a;
	return UCLN(b, a % b);
}
int main() {
	int a,b,cnt,ri;
	string line;
	ifstream input("bl1.INP");
	ofstream output("bl1.OUT");
	getline(input, line);
	sscanf_s(line.c_str(), "%d %d", &a, &b);
	
	if (input.is_open())
	{
		cout << a << ' ' << b << endl;
		cnt = 0;
		for (int i = a; i <= b; i++) {
			ri = rvs(i);
			cout << ri << endl;
			if (UCLN(i,ri) == 1) {
				cnt++;
			}
			
		}
		cout << cnt << endl;
		if (output.is_open())
		{
			output<<cnt;
			output.close();
		}
		input.close();
	}
	else cout<<"Unable to open file";
	return 0;

}