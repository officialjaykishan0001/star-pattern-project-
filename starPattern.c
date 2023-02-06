#include<stdio.h>

void decreasing_star();
void increasing_star();
void piramid_star();
void rectangle_star();
void hollow_rectangle_star();

void loading ()
{
    printf("\nLoading...\n");
}
void line()
{
    printf("\n________________________________________________________________________________\n");
}



int main()
{
    printf("\n__________________________PROGRAM THAT PRINT ANY PATTERN________________________\n");
    printf("                         *******************************\n\n\n");
    up_from_1:
    up_from_2: 
    up_from_3:
    up_from_4:
    up_from_5:
    printf("\n\tPATTERN \t\t\t\t\t\t OPEN\n");
    printf("\t*******\t\t\t\t\t\t \t *****\n");
    printf("\nDECREASING STAR PATTERN \t\t\t\t\t (PRESS 1)\n");
    printf("\nINCREASING STAR PATTERN \t\t\t\t\t (PRESS 2)\n");
    printf("\nPIRAMID STAR PATTERN \t\t\t\t\t\t (PRESS 3)\n");
    printf("\nRECTANGLE STAR PATTERN \t\t\t\t\t\t (PRESS 4)\n");
    printf("\nHOLLOW RECTANGLE PATTERN \t\t\t\t\t (PRESS 5)\n");
    printf("\nEXIT \t\t\t\t\t\t\t\t (PRESS 0)");
     
    choicefromdefault:
     line();
    char choice ;
    printf("PRESS HERE : ");
    scanf("%s",&choice);
    line();
    switch(choice)
    {
        case '1':
       

        gotofirst :

        decreasing_star();

        line();
        
        char ask;
        ask:
        printf("\nARE YOU WANT MORE [Y/N] : ");
        scanf("%s",&ask);

        switch(ask)
        {
            case 'y' : 
            loading();
            goto gotofirst;
            break;

            case 'n' : 
            loading();
            goto up_from_1;
            break;

            default : 
            loading ();
            printf("\n||YOU ENTERED WRONG INPUT || TRY AGAIN ..||\n");
            goto ask;
        }

        
        break;
        
        case '2':

        gotofirst_2 : 

        increasing_star();

        line();

        char ask_2;
        ask_2: 
        printf("\nARE YOU WANT TO MORE [Y/N] : ");
        scanf("%s",&ask_2);

        switch(ask_2)
        {
           case 'y' : 
            loading();
            goto gotofirst_2;
            break;

            case 'n' : 
            loading();
            goto up_from_2;
            break;

            default : 
            loading ();
            printf("\n||YOU ENTERED WRONG INPUT || TRY AGAIN ..||\n");
            goto ask_2;  
        }

        break;

        case '3' : 

        gotofirst_3:

        piramid_star();
        line();

        char ask_3;
        ask_3:
        printf("\nARE YOU WANT TO MORE [Y/N] : ");
        scanf("%s",&ask_3);

         switch(ask_3)
        {
           case 'y' : 
            loading();
            goto gotofirst_3;
            break;

            case 'n' : 
            loading();
            goto up_from_3;
            break;

            default : 
            loading ();
            printf("\n||YOU ENTERED WRONG INPUT || TRY AGAIN ..||\n");
            goto ask_3;  
        }



        break;

        case '4' :
        
        gotofirst_4:
        rectangle_star();
        line();

        char ask_4;
        ask_4:
        printf("\nARE YOU WANT TO MORE [Y/N] : ");
        scanf("%s",&ask_4);

        
         switch(ask_4)
        {
           case 'y' : 
            loading();
            goto gotofirst_4;
            break;

            case 'n' : 
            loading();
            goto up_from_4;
            break;

            default : 
            loading ();
            printf("\n||YOU ENTERED WRONG INPUT || TRY AGAIN ..||\n");
            goto ask_4;  
        }

        break;
        
        case '5':

        
        gotofirst_5:
        hollow_rectangle_star();
        line();

        char ask_5;
        ask_5:
        printf("\nARE YOU WANT TO MORE [Y/N] : ");
        scanf("%s",&ask_5);

          switch(ask_5)
        {
           case 'y' : 
            loading();
            goto gotofirst_5;
            break;

            case 'n' : 
            loading();
            goto up_from_5;
            break;

            default : 
            loading ();
            printf("\n||YOU ENTERED WRONG INPUT || TRY AGAIN ..||\n");
            goto ask_5;  
        }






        break;

        case '0':
        loading ();
        printf("\nYOU ARE EXITED..\n");
        return 0;
        break;

        default:
        loading();
        printf("\n||YOU ENTERED WRONG INPUT...||TRY AGAIN...||\n");
        goto choicefromdefault;
        
    }



return 0;
}


void decreasing_star()
{
   
        printf("\n_______________________________DECREASING STAR PATTERN___________________________\n");
        printf("                              ************************* \n\n");
 
    int row;
    printf("\n~ ENTER THE NUMBER OF ROW (only integers) : ");
    scanf("%d",&row);

    printf("\nPrinting Stars..\n\n");

    for(int i=row;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

void increasing_star()
{
     printf("\n_______________________________INCREASING STAR PATTERN___________________________\n");
 printf("                              ************************* \n\n");
    
    int row;
    printf("\n~ ENTER THE NUMBER OF ROW (only integers) : ");
    scanf("%d",&row);

    printf("\nPrinting Stars..\n\n");

    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

}

void piramid_star()
{
    printf("\n_______________________________PIRAMID STAR PATTERN___________________________\n");
    printf("                              ************************* \n\n");

    int row;
    printf("\n~ ENTER THE NUMBER OF ROW (only integers) : ");
    scanf("%d",&row);

    printf("\nPrinting Stars..\n\n");  
    
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<(row-i);k++)
        {
            printf(" ");
        }
        for(int j=0;j<(2*i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void rectangle_star()
{
    printf("\n_______________________________RECTANGLE STAR PATTERN___________________________\n");
    printf("                              ************************* \n\n");
    
    int row,colum;
    printf("\n~ ENTER THE NUMBER OF ROW (only integers) : ");
    scanf("%d",&row);
    printf("\n~ ENTER THE NUMBER OF COLUM (only integers) : ");
    scanf("%d",&colum);
   
    printf("\nPrinting Stars..\n\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            printf("*");
        }
        printf("\n");
    }   
}

void hollow_rectangle_star()
{
   printf("\n_______________________________HOLLOW RECTANGLE STAR PATTERN__________________\n");
   printf("                              ******************************* \n\n");
    
    int row,colum;
    printf("\n~ ENTER THE NUMBER OF ROW (only integers) : ");
    scanf("%d",&row);
    printf("\n~ ENTER THE NUMBER OF COLUM (only integers) : ");
    scanf("%d",&colum);

    printf("\nPrinting Stars..\n\n");

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=colum;j++)
        {
            if(i==row || j==row || i==1 || j==1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
