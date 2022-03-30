/* C Mini Project (1st Semester)
   Snack/Beverage Vending Machine */

#include <stdio.h>
#include <stdlib.h>

/* function declarations */
void billing(int);
void menu();
int order();

/* start of main function */
int main(){
    printf("\n\t\tHey There! Welcome \n\n");

    while(1){
        printf("\n\t1. VIEW MENU \n\t2. ORDER \n\t3. EXIT\n\n");

        int in;
        printf("\n\nWhat do you you wish to do? \n(Enter a number from above) :- "); /* prompt */
        scanf("%d",&in); /* gets user option */

        switch(in){

            case 1 : {
                menu(); // calls menu function

                printf("\n\nHave a look at the MENU and then ORDER what you wish!\n\n");
                break;
            }

            case 2 : {
                order(); // calls order function

                break;
            }

            case 3 : {
                return 0; // exits the program

                break;
            }

            default : {
                printf("\nInvalid Option Input!\n\n");  // user input validation
                main();
            }
        }

    }
}

/* displays the list of items available in the machine */
void menu() {
    printf("\n\n\t\t\tOn The Menu Today");

    printf("\n\n\tSNACKS ");

    printf("\n\nItem Code          Item              Quantity           Price(₹)\n");
    printf("[501]           Snickers Bar         22g                20 \n");
    printf("[503]           Doritos              75g                35 \n");
    printf("[505]           Pop Tarts            15g                60 \n");
    printf("[507]           Peanut Buttercups    51g(x4)            130 \n");
    printf("[509]           Granola Bar          16g(x6)            70 \n");
    printf("[511]           Pretzels             75g                65 \n");

    printf("\n\n\tBEVERAGES ");

    printf("\n\nItem Code          Item              Quantity            Price(₹)\n");
    printf("[301]           Water Bottle         500ml               10 \n");
    printf("[303]           Gatorade             250ml               20 \n");
    printf("[305]           Coke                 750ml               40 \n");
    printf("[307]           Sprite               500ml               25 \n");
    printf("[309]           Cold Coffee          Regular             50 \n");
    printf("[311]           Iced Tea             Regular             20 \n");

}

/* accepts the user's orders */
int order() {

    int item_code;

    printf("\n\nEnter the Item Code of the Product you want : "); /* prompt */
    scanf("%d",&item_code); /* gets item code of the product that user wants */

    int x,amt;
    char ch;

    switch(item_code){

        case 501 : {

            snick:
            printf("\n\n\tSnickers Bar (22g) ");
            printf("\nHow many do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto snick;

            x=x*20;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 503 : {

            dori:
            printf("\n\n\tDoritos (75g) ");
            printf("\nHow many packets do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto dori;

            x=x*35;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 505 : {

            pops:
            printf("\n\n\tPop Tarts (15g) ");
            printf("\nHow many do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto pops;

            x=x*60;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 507 : {

            pea:
            printf("\n\n\tPeanut Buttercups (51g, Pack of 4) ");
            printf("\nHow many do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto pea;

            x=x*130;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 509 : {

            granola:
            printf("\n\n\tGranola Bar (16g, Pack of 6) ");
            printf("\nHow many do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto granola;

            x=x*70;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 511 : {

            pret:
            printf("\n\n\tPretzels (75g) ");
            printf("\nHow many packets do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto pret;

            x=x*65;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 301 : {

            wat:
            printf("\n\n\tWater Bottle (500ml) ");
            printf("\nHow many bottle(s) do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto wat;

            x=x*10;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 303 : {

            gat:
            printf("\n\n\tGatorade (250ml) ");
            printf("\nHow many bottle(s) do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto gat;

            x=x*20;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 305 : {

            cok:
            printf("\n\n\tCoke (750ml) ");
            printf("\nHow many bottle(s) do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto cok;

            x=x*40;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 307 : {

            spr:
            printf("\n\n\tSprite (500ml) ");
            printf("\nHow many bottle(s) do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto spr;

            x=x*25;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 309 : {

            cof:
            printf("\n\n\tCold Coffee (Regular) ");
            printf("\nHow many do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto cof;

            x=x*50;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        case 311 : {

            ice:
            printf("\n\n\tIced Tea (Regular) ");
            printf("\nHow many do you need ? "); /* prompt */
            scanf("%d",&x);

            printf("\nConfirm Your Order (Y/N) :- "); /* prompt for order confirmation */
            scanf(" %c",&ch);

            if(ch=='N'||ch=='n')
             goto ice;

            x=x*20;
            printf("\nYou have to PAY Rs.%d ",x);

            billing(x);
            break;
        }

        default : {
            printf("\nInvalid Item Code!\n\n");

            order(); // calls order function again
        }
    }
}

void billing(int x) {

    int amt;
    char cha;

    printf("\n\nInsert the AMOUNT(₹) you have to PAY for your Order : "); /* prompt */
    scanf("%d",&amt); /* gets money from user for items bought */

    if(amt < x ) {
        printf("\n\nInsufficient Amount! \nPlease Check and Insert the right Amount."); /* in case user inserts less amount */

        billing(x);
    }

    else {

       printf("\n\tYour Change : ₹%d", amt - x);
       printf("\nPlease Collect Your Change...");
       printf("\n\nHope you've recieved your SNACK/BEVERAGE ! Enjoy it..");
    }

    printf("\n\nDo You Wish to BUY any more (Y/N) ? "); /* prompt to buy any more items */
    scanf(" %c",&cha); /* gets user's wish */

    if(cha == 'Y'|| cha == 'y')
        menu(); /* calls menu function again in case user wants */

    else{
    printf("\n\n\t\tTHANK YOU FOR USING OUR VENDING MACHINE! \n\n\t\t\t\tCome Again..\n\n\n") ;

    exit(0); /* successful termination of program */
    }

}





