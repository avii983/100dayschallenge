#include <stdio.h>
/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

 int main(){ int k , h , total;
             char oper;
             float div;
             printf("entert the value of k and h\n");
             printf("enter the value of operator\n");
             scanf("%d %d %c" , &k , &h , &oper);
             switch (oper){
                            case '+':
                              total = k + h;
                              printf("the value of your output is %d\n" , total);
                              break;
                            case '-':
                              total = k - h;
                              printf("the value of your outptu is %d\n" , total);
                              break;
                            case '*':
                              total = k * h;
                              printf("the value of your output is %d\n" , total);
                              break;
                            case '/':
                              if (h==0)
                               printf("undefinied");
                              else 
                               printf("the value of your output is %f\n" , div = (double)k/h);
                              break;
                            case '%':
                              if (h==0)
                               printf("undefinied");
                              else 
                               printf("the value of your output is %d\n" , total = k%h);
                              break;}
                            return 0;
             }


                            
                                
        











             











 
