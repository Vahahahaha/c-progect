#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
/* 0 rock
 1 paper
 2 scissors */
int a;
int quit ='5';
int computer;
srand(time(NULL));
while (quit!='q') {
cout<<"your choose: "<<endl;
cin>> a;
computer=rand()%3;
cout<<"computer"<<endl;
if ((a==0 && computer==0) ||(a==1 && computer==1)||(a==2 && computer==2)) {
cout<<"draw"<<endl;
}
else if ((a==0 && computer==1) ||(a==1 && computer==2)||(a==2 && computer==0)) {
cout<<"U lose"<<endl;
}
else if ((a==0 && computer==2) ||(a==1 && computer==0)||(a==2 && computer==1)) {
cout<<"U win"<<endl;
}
cout<<"for quit input q ";
cin>>quit;
}
return 0;
}