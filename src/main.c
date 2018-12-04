//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{

	 char prenom[20];
	 char nom[20];
	 int annee_de_naissance;
	 int age;  
	 
	scanf("%s",prenom);
	scanf("%s",nom);
	scanf("%d",&annee_de_naissance);
	
	 
	
	age = 2018- annee_de_naissance;
	
	printf("je m'appelle  %s %s et j'ai %d ans" ,prenom,nom,age);
	
    
    return 0;
}
