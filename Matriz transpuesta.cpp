// Crear una matriz tranpuesta que contenga (dia/mes/año)

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[1][3];
	
	for(int i=0;i<1;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite su dia/mes/año ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"\nMatriz orginal\n";
	for(int i=0;i<1;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz transpuesta\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<1;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
