//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>

int main(void)

{
	unsigned int a,b,c;
	int R;
	
	R = ( 10 * a + b) * pow(10,c );
	
	printf("Indiquer la valeur du premier anneau : ") ;
	scanf("%u",&a);
	
	printf("Indiquer la valeur du du second anneau : ") ;
	scanf("%u",&b);
	
	printf("Indiquer la valeur du troisieme anneau : ") ;
	scanf("%u",&c);
	
	if (c > 6)
		R = -1 ;
	
	else
			R = ( 10 * a + b) * pow(10,c );
	
	printf("La valeur de la resistance est de %d",R);
		

	return 0 ;
}
