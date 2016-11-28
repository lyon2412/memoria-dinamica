#define N 10 
#include <stdio.h>
#include <stdlib.h>  
void main(){ 
char c, *cambiante; 
int i; 
i=0; 
cambiante = NULL; 
printf("\nIntroduce una frase. Terminada en [ENTER]\n"); 
while ((c=getchar()) != '\n') { 
  if (i % N == 0){ 
   printf("\nLlego a %d posiciones y pido hasta %d", i, i+N); 
   cambiante=(char *)realloc((char *)cambiante,(i+N)*sizeof(char)); 
   if (cambiante == NULL) exit(-1); 
  } 
  /* Ya existe suficiente memoria para el siguiente carácter*/ 
  cambiante[i++] = c; 
} 
/* Antes de poner el terminador nulo hay que asegurarse de que haya 
suficiente memoria */ 
if ((i % N == 0) && (i != 0)){ 
      printf("\nLlego a %d posiciones y pido hasta %d", i, i+N); 
      cambiante=realloc((char *) cambiante, (i+N)*sizeof(char)); 
        if (cambiante == NULL) exit(-1); 
  } 
*(cambiante+i)='\0'; 
printf ("\nHe leido %s\n", cambiante); 
} 
