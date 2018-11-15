//  Copyright (c) 2018 Antoine Tran Tan
//

#include <math.h>
#include "stdlib.h"
# define RAND_MAX 32767

int main(void)
{
    int  n = 1;
      unsigned long long int S1 = 1;
      
   int a =((rand())%10/*une boucle qui se repete tout (modulo)le 10 fois donne donc un alea entre 0 et 10*/)+1/*car on veut 1 a 10*/;
      int Som_al = 0 ;
   int S2 = 0;

   int Multiple=1;
   int b=0;
   int S4=0;

while (S1<9876)

  {
      S1 = S1 + 3 * n;
      n = n + 1;
  }

   while (Som_al<12)
   {
       S2 = S2 +a;
       Som_al=Som_al+1;
       a = ((rand())%10)+1;
   }
   while (b<20)
   {
       if (Multiple%3==0 || Multiple%7==0)
       {
           S4 = S4 + Multiple;
            Multiple=Multiple+1;
            b=b+1;
           }
       else
           Multiple=Multiple+1;
        
   }

   int debug=0;
   return 0;
} 