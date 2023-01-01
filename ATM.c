//ATM BANK PROJECT BY MANSI MOKASHI IN C LANGUAGE LINKCODE
#include<stdio.h>
#include<windows.h>
#include<time.h>
int main(){
    system("color 4F");
    int pin=1234,option,enteredpin,count=0,amount=1;
    float balance=5000;
    int continueTransaction=1;

    time_t now;                  //for time and date display
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t%s",ctime(&now));
    printf("\t\t\t================*WELCOME TO MAHARASHTRA BANK*================");

    while (pin!=enteredpin){
        printf("\nplease enter your pin: ");        //pin check
        scanf("%d",&enteredpin);
        if(enteredpin!=pin){
            Beep(610,500);
            printf("*INVALID PIN*");
        }
        count ++;
        if(count==3 && pin!=enteredpin){
            exit(0);
        }
    }

     while(continueTransaction!=0){                  //while loop starts  
     printf("\n\t\t\t======================*AVAILABLE TRANSACTION*======================");
     printf("\n\n\t\t1.WITHDRAWL");
     printf("\n\t\t2.DEPOSIT");
     printf("\n\t\t3.CHECK BALANCE");
     printf("\n\n\tPlease select the option : ");
     scanf("%d",&option);

     switch(option){
         case 1:
         while(amount % 500 !=0){
             printf("\n\t\tENTER THE AMOUNT..");                              //for withdrawl code
             scanf("%d",&amount);
             if(amount % 500!=0)
             printf("\n\t The Amount Should Be Multiple Of 500");
         }
         if(balance<amount){
             printf("\n\tYou Have Insufficient Balance!!!");
             amount=1;
             break;
         }
         else{
             balance-=amount;
             printf("\n\t\tYou Have Withdrawn RS.%d. Your new balance is %.2f",amount,balance);
             amount=1;
             break;
         }

         case 2:
         printf("\n\t\t Please enter the amount: ");
         scanf("%d",&amount);                                   //deposite amount code
         balance +=amount; 
         printf("\n\t\tYou Have Deposited RS.%d. Your new balance is %.2f",amount,balance);
         printf("\n\t\t\t=====================THANK YOU FOR BANKING WITH US=====================");
         amount=1;
        break;
     
        case 3:
        printf("\n\t\tYour balance is Rs.%.2f",balance);             //check balance code
        break;

        default: 
        Beep(610,500);                                          //beap sound 
        printf("\n\t\tINVALID OPTION!!!");                

     }

     printf("\n\t\tDo you want to perform another transaction??? press 1[yes], 0[no]");  //for continueation of loop
     scanf("%d",&continueTransaction);
     }          //while loop ends                     
          }     //main func ends

                    