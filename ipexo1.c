#include <stdio.h>
#include  <math.h>
#include "ipexo1.h"
#include "ipexo1fonction.c"
int main(){
	printf("\tProgramme permettant de savoir l'adresse réseau,le broadcast le le nombre de hotes pour chaque sous réseau d'un adresse IP:\n");
	char ip[100];
	int a=0, b=0, c=0, d=0;
    valider(ip,a,b,c,d);
return 0;
}
