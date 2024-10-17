#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char palabra[30];
	int vocal_a=0,vocal_q=0,vocal_w=0,vocal_e=0,vocal_r=0,vocal_t=0,vocal_y=0,vocal_u=0,vocal_i=0,vocal_o=0,vocal_p=0,vocal_s=0,vocal_d=0,vocal_f=0,vocal_g=0,vocal_h=0,vocal_j=0,vocal_k=0,vocal_l=0,vocal_z=0,vocal_x=0,vocal_c=0,vocal_v=0,vocal_b=0,vocal_n=0,vocal_m=0;
	cout<<"pone la palabra que quieras:";
	cin.getline(palabra,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(palabra[i]){
		case 'a': vocal_a++; break;
		case 'q': vocal_q++; break;
		case 'w': vocal_w++; break;
		case 'e': vocal_e++; break;
		case 'r': vocal_r++; break;
		case 't': vocal_t++; break;
		case 'y': vocal_y++; break;
		case 'u': vocal_u++; break;
		case 'i': vocal_i++; break;
		case 'o': vocal_o++; break;
		case 'p': vocal_p++; break;
		case 's': vocal_s++; break;
		case 'd': vocal_d++; break;
		case 'f': vocal_f++; break;
		case 'g': vocal_g++; break;
		case 'h': vocal_h++; break;
		case 'j': vocal_j++; break;
		case 'k': vocal_k++; break;																				
		case 'l': vocal_l++; break;
		case 'z': vocal_z++; break;
		case 'x': vocal_x++; break;
		case 'c': vocal_c++; break;
		case 'v': vocal_v++; break;
		case 'b': vocal_b++; break;
		case 'n': vocal_n++; break;
		case 'm': vocal_m++; break;
		
		}
		
	}
	cout<<"este es el total de veces que se uso la letra A en la palabra:"<<vocal_a <<endl;
	cout<<"este es el total de veces que se uso la letra Q en la palabra:"<<vocal_q <<endl;
	cout<<"este es el total de veces que se uso la letra W en la palabra:"<<vocal_w <<endl;
	cout<<"este es el total de veces que se uso la letra E en la palabra:"<<vocal_e <<endl;
	cout<<"este es el total de veces que se uso la letra R en la palabra:"<<vocal_r <<endl;
	cout<<"este es el total de veces que se uso la letra T en la palabra:"<<vocal_t <<endl;
	cout<<"este es el total de veces que se uso la letra Y en la palabra:"<<vocal_y <<endl;
	cout<<"este es el total de veces que se uso la letra U en la palabra:"<<vocal_u <<endl;
	cout<<"este es el total de veces que se uso la letra I en la palabra:"<<vocal_i <<endl;
	cout<<"este es el total de veces que se uso la letra O en la palabra:"<<vocal_o <<endl;
	cout<<"este es el total de veces que se uso la letra P en la palabra:"<<vocal_p <<endl;
	cout<<"este es el total de veces que se uso la letra S en la palabra:"<<vocal_s <<endl;
	cout<<"este es el total de veces que se uso la letra D en la palabra:"<<vocal_d <<endl;
	cout<<"este es el total de veces que se uso la letra F en la palabra:"<<vocal_f <<endl;
	cout<<"este es el total de veces que se uso la letra G en la palabra:"<<vocal_g <<endl;
	cout<<"este es el total de veces que se uso la letra H en la palabra:"<<vocal_h <<endl;
	cout<<"este es el total de veces que se uso la letra J en la palabra:"<<vocal_j <<endl;
	cout<<"este es el total de veces que se uso la letra K en la palabra:"<<vocal_k <<endl;
	cout<<"este es el total de veces que se uso la letra L en la palabra:"<<vocal_l <<endl;
	cout<<"este es el total de veces que se uso la letra Z en la palabra:"<<vocal_z <<endl;
	cout<<"este es el total de veces que se uso la letra X en la palabra:"<<vocal_x <<endl;
	cout<<"este es el total de veces que se uso la letra C en la palabra:"<<vocal_c <<endl;
	cout<<"este es el total de veces que se uso la letra V en la palabra:"<<vocal_v <<endl;
	cout<<"este es el total de veces que se uso la letra B en la palabra:"<<vocal_b <<endl;
	cout<<"este es el total de veces que se uso la letra N en la palabra:"<<vocal_n <<endl;
	cout<<"este es el total de veces que se uso la letra M en la palabra:"<<vocal_m <<endl;
	
	
	getch();
}	
