#include <iostream>
using namespace std;
#include<string.h> 
int main() {
	int bear = 0, bigbro = 0, i = 0;
	cin >> bear >> bigbro;
	for (int x = 0; x != 1; i++) {
		bigbro = bigbro + bigbro;
		bear = bear + bear + bear;
		if (bear > bigbro) {
			x = 1;
		}
	}
	cout << i << endl; return 0;
}