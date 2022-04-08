#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char cat[4] ={'c','a','t','\0'};
	char apple[6] ="apple";
	char orange[] ="orange";
	cout<<sizeof(cat)<<'\t'<<strlen(cat)<<endl;
	for (int i=0; i<4; i++){
		cout<<cat[i];
	}
	cout<<'\n';
	cout<<strlen(apple)<<endl;
	cout<<strlen(orange)<<endl;
	cout<<sizeof(array1)<<endl;
	return 0;
} 