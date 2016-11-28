	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#define dim 100

char cad[dim], mm[dim];
char ch;

void xd(char m[dim]){

	int i,j;
	int n;
	n=strlen(m);
	i=0;
	j=0;
	while(i<n){
		if(m[i]==' '){
			i++;	
		}
		else{
			mm[j]=m[i];
			i++;
			j++;
		}
	}
}
	
int main(){
	int i,op;
	printf("Ingrese : ");
	ch = getchar();
	i = 0;
	while (ch != '\n'){
		cad[i++] = ch;
		ch = getchar();
	}
	cad[i] = '\0';
	printf("%s\n",cad);
	xd(cad);
	printf("%s\n",mm);
	

}
