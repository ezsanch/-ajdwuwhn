#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char palabra[30];
	int vocal_a=0;
	cout<<"pone la palabra que quieras"<<endl;
	cin.getline(palabra,30,'\n');
	for(int i=0;i<30;i++){
		switch(palabra[i]){
			case 'a': vocal_a++; break;
		}
	}
	cout<<"este es el total de veces que uso la A en la palabra:"<<vocal_a<<endl;
	getch();
}
