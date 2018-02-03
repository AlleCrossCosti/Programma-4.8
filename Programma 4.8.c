#include <stdio.h>

int main () {
   
   int scelta;
   
   printf("Scegli un'opzione\n");
   printf("------------------\n");
   printf("1 - case 1 \n");
   printf("2 - case 2 \n\n");
   printf("Scelta: ");
   
   scnaf("%d", &scelta);
   
   switch(scelta)
   {
   case 1:
         printf("Hai scelto il case 1");
         break;
         
  case 2:
        printf("Hai scelto il case 2");
        break;
        
  default:
       printf("Non hai scelto!");
       break;
       
   }
   return 0;
   
   }
