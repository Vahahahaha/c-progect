#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int i, j, k;
	char i1,j1,k1;
	srand(time(NULL));
	string aaa;
	string vmm;
	cin >> aaa;
	for (char i = 32; i<123; i++){
		for (char j = 32; j<123; j++){
			for	(char k = 32; k<123; k++){
				vmm = i;
				vmm +=j;
				vmm +=k;
				if (aaa==vmm)
				{break;}
			}
			if (aaa==vmm)
				{break;}
		}
		if (aaa==vmm)
				{break;}
	}
	cout<<vmm<<endl;
}