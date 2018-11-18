#include "TP_lib.h"

int main(void)
{

    unsigned int points=0,resultat,perdu=0;
    
    while(perdu!=1)
    {
        resultat=LancerDe();
        
        if(resultat==1)
        
                perdu=1;
        
        else if(resultat%2==0)
            
                points=points+resultat;
        
        else if(resultat==3)
            
                points=points*2;
        
        else if(resultat==5)
            
                points=points-2;
    }
  return 0;  
}
