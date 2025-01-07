#include <stdio.h>

/* Function Prototypes*/
static void     add(float, float);
static void     sub(float, float);
static void     mul(float, float);
static void     div(float, float);


int main (void) {

    char cont; // Variable to store user's decision to continue or exit

    do{

        int choice;

        while(1){ // Infinite Loop; Breaks when user enters a valid choice
        printf("Choose any one option : \n");
        printf("1. Add\t 2. Subtract\t 3. Multiply\t 4.Division\n");
        scanf("%d", &choice);

        if ( choice >= 1  && choice <=4)
        {
            break;
        }
            
            printf("Invalid Choice!\t Please enter a valid choice(1-4)\n");
            
        }
        
            /* Getting Input from User */
            float a,b;
            printf("Enter any two numbers :\n");
            scanf("%f %f", &a, &b);

            /* Switch Case */
            switch (choice)
            {
                case 1 :
                    add(a,b);
                    break;


                case 2 :
                    sub(a,b);
                    break;


                case 3 :
                    mul(a,b);
                    break;


                case 4 :
                    div(a,b);
                    break;


                default :
                    printf("Please enter a valid choice(1-4)!\n");
                    break;
            }

            /* Condition to check whether the user wants to do another calculation or not*/

            printf("Do you want to perform another calculation? (y/n)\n");
            scanf(" %c", &cont);
        
     } while(cont == 'y' || cont == 'Y');
    
    return 0;
}

/* Addition */
static void add(float a, float b)
{
    printf("The addition of %.2f and %.2f is %.2f\n",a ,b, a+b);
}

/* Subtraction */
static void sub(float a, float b)
{
    printf("The subtraction of %.2f by %.2f is %.2f\n",a ,b, a-b);
}

/* Multiplication */
static void mul(float a, float b)
{
    printf("The multiplication of %.2f and %.2f is %.2f\n",a ,b, a*b);
}

/* Division */
static void div(float a, float b)
{
    if(b!=0)
    {
        printf("The division of %.2f by %.2f is %.2f\n",a ,b, a/b);
    }
    else
    {
    printf(" Error : Cannot divide by 0\n");
    }
}


