#include <iostream>
#include <cmath>
using namespace std;
int len(int c){
	int n = 0;
	while (c >= 1){
		c /= 10;
		n ++;
	}
	return n;
}

bool what(int m, int l){
	return m == l;
}

int main(){
	int x, y, s = 0;
	cin >> x;
	y = x;
	
	for(x; x >0; x /= 10){
			int i = len(x);
			s += (x % 10) * pow(10, i -1); 
		}
	cout << s << " ";
	cout << "polindrom " << what(s, y);
	return 0;
}