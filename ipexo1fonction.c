void valider(char *ip, int a, int b, int c, int d){
	int valide = 0; // Variable pour contrôler la boucle
 // Boucle jusqu'à ce qu'une adresse IP valide soit saisie
    while (!valide) {
        printf("Veuillez taper votre adresse IP (format: x.x.x.x): ");
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        printf("Votre adresse IP est: %d.%d.%d.%d\n", a, b, c, d);
    if (a > 255 || b > 255 || c > 255 || d > 255) {
        printf("Adresse IP invalide");
    } else {
		valide=1;
        affichage(ip, a, b, c, d);
    }
}
}
void affichage(char *ip, int a, int b, int c, int d){
	if (a < 128) {
        printf("\tClasse A: le masque de sous-reseau(MSQR) est: 255.0.0.0");
        b=0,c=0,d=0;
        printf("\n\tL'adresse reseau correspondante est: %d.%d.%d.%d", a, b, c, d);
        b=255, c=255, d=255;
        printf("\n\tL'adresse de diffusion correspondante est: %d.%d.%d.%d", a, b, c, d);
        int resultat=(int)pow(2,24);
        int a=resultat-2;
        printf("\n\tLe nombre de machines pour chaque sous-reseau est: %d\n", a);
    } else if (a >= 128 && a < 192) {
        printf("\tClasse B: le masque de sous-reseau(MSQR) est: 255.255.0.0");
        c=0, d=0;
        printf("\n\tL'adresse reseau correspondante est: %d.%d.%d.%d", a, b, c, d);
        c=255, d=255;
        printf("\n\tL'adresse de diffusion correspondante est: %d.%d.%d.%d", a, b, c, d);
        int resultat=(int)pow(2,16);
        int a=resultat-2;
        printf("\n\tLe nombre de machines pour chaque sous-reseau est: %d\n", a);
    } else if (a >= 192 && a < 224) {
		d=0;
        printf("\tClasse C: le masque de sous-reseau(MSQR) est: 255.255.255.0");
        printf("\n\tL'adresse reseau correspondante est: %d.%d.%d.%d", a, b, c, d);
        d=255;
        printf("\n\tL'adresse de diffusion correspondante est: %d.%d.%d.%d", a, b, c, d);
        int resultat=(int)pow(2,8);
        int a=resultat-2;
        printf("\n\tLe nombre de machines pour chaque sous-reseau est: %d\n", a);
    } else if (a >= 224 && a < 240) {
        printf("Classe D");
    } else if (a >= 240 && a < 256) {
        printf("Classe E");
    }
	
}	       
