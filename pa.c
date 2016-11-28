#include<stdio.h>
#include<stdlib.h>
#define N 10

int i=0, j=0;
void ingresar(char *c);
//void ordenar();

void main(){
char *c, ch;
c = (char*)malloc(N*sizeof(char));
	ingresar(c);
	printf("%d\n",i);
	printf("%s\n",c);
	c = (char*) realloc(c,(i+1)*sizeof(char));



}
void ingresar(char *c){

	char ch;
	printf("ingrese numeros naturales:\n");
	while((ch=getchar())!='-'){
	if(j>9){
		//c = (char *)realloc(c,(N+i)*sizeof(char)); 
		j=0;
	}
	*(c+i) = ch;
	i++;   
	j++;
	}	
}

//void ordenar(){	
	//k=0;
	//while(k<i){
		
	
