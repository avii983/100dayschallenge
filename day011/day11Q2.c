#include <stdio.h>
/*Q22: Write a program to find profit or loss percentage given cost price and selling price.*/

int main(){ int sp , cp , profit , loss;
            float profitper , lossper;
            printf("enter the value of sp\n");
            printf("enter the value of cp\n");
            scanf("%d %d" , &sp , &cp);
            if (sp>cp)
              { profit = sp - cp;
               profitper = ((float)profit/cp);
               profitper = profitper*100;
               printf("your profit is %f%%\n" , profitper);}
            else if (cp>sp)
              { loss = cp - sp;
               lossper = ((float)loss/cp);
               lossper = lossper*100;
               printf("your loss is %f%%\n" , lossper);}
            else 
               printf("no profit no loss");
            return 0;
        }

