#include <iostream>
#include <time.h>
using namespace std;

int main(){
srand(time(NULL));
int H=4;
int m[H][H];
int sum=0;
for (int i = 0; i < H; i++){  //создание и заполнение матрицы 1 и -1
	for (int j = 0; j < H ; j++){
		m[i][j] = rand() % 3 + (-1);
while (m[i][j] == 0) {
	m[i][j] = rand() % 3 + (-1);
}
}
}	
for (int i = 0; i < H; i++){  
	for (int j = 0; j < H ; j++){
		cout<<m[i][j];
//while (m[i][j] == 0) {
	//m[i][j] = rand() % 3 + (-1);
//}
}
cout<<endl;
}
for (int i=0; i<H; i++){        //пошла проверка условий
	for (int j=0; j<H; j++){
		if (i==H-1 && j!=H-1){
			sum += m[i][j]*m[i][j+1]+m[i][j]*m[0][j];  //нижние 3 элемента
		}
		else if(i!=H-1 && j==H-1){
			sum += m[i][j]*m[i][0]+m[i][j]*m[i+1][j];  //боковые 3 элемента
		}
		else if(i==H-1 && j==H-1){
			sum += m[i][j]*m[i][0]+m[i][j]*m[0][j];    //элемент в уголочке
		}
		else{
			sum += m[i][j]*m[i+1][j]+m[i][j]*m[i][j+1];//квадратик по центру
		}	
	}
}
cout<<"\n";
cout<<sum;
return 0;
}