#include <iostream>
using namespace std;

int main(){
	int a,g,f,c,b,i,h;
	f=10;
	c=1;
	cin>>a;
	i=1;
	while(b!=1){
		if (a>f){
			f=f*10;
			c++;
		}else {b=1;}
	}
int mat[c];

if (i!=c){
	for (int j=0; j<c; ++j){
		i++;
		mat[j]=a%10;
		a=a/10;
		cout<<mat[j];
	}
	cout<<endl;
}
f=f/10;
for (int j = 0; j < c; ++j){
	h+= mat[j]*f;
	f=f/10;
}	
return 0;
}