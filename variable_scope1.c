/* Every variable must be declared before using   */
/* Varibles declared inside any functions are not valid unless they are declred as  */

#include <stdio.h>
    int main(void) {
      
      for (int i = 0; i < 5; ++i) {
         printf("C programming");
      }
      
     // Error: i is not declared at this point
      printf("%d", i);  
      return 0;
    }
