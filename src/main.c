//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
	unsigned char win[6] { 1,2,9,45,65,78 } ;
	unsigned char joueur[6] {2,6,4,56,89,65} ;
	int i,W,points;


    for (i=0;i<6;i++)
     {
         for (W=0;W<6;W++)
        {
            if(win[i] == joueur[W])
            {
                points++;
                
            }
        }
        
     }
		
	
	
	
	
	
	
	
	
    return 0;
}
