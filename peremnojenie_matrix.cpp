#include <iostream>
using namespace std;

main(){
    int H1;
    int W1;
    int H2;
    int W2;
	cin>>H1>>W1>>"\n";
    cin>>H2>>W2>>"\n";
	int i,j,k;
    int A[H1][W1];
    int B[H2][W2];
    int C[H1][W2];

cout<<"Matrix A:\n";
for(int i=0; i < H1; i++)
 for(int j=0; j < W1; j++)
 cin >> A[i][j];

cout << "Matrix B:\n";
for(int i=0; i < H2; i++)
 for(int j=0; j < W2; j++)
 cin>>B[i][j];

if (W1=H2){
    cout << "Matrix C=AB:\n";
    for(int i=0; i < H1; i++){
        for(int j=0; j < W2; j++){
            for(int k=0; k < H1 ; k++){
                for(int k=0; k < W2 ; k++){
                    C[i][j]=0;
                    C[i][j]+=A[i][k]*B[k][j];
                    cout << C[i][j] << " ";
                }
            }
        }
     cout << endl;
    }
}
return 0;
}