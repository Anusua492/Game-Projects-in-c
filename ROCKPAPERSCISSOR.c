#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int you ,computer,score_you,score_computer;
int menu()
{
    int ch;
    printf("\n1.Select Rock.");
    printf("\n2.Select Paper.");
    printf("\n3.Select Scissor.");
    printf("\n4.Exit.");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    return(ch);
}

void setup()
{
    label1:
    computer=rand()%4;
    if(computer==0)
    goto label1;
    you=menu();
}

void game()
{
    switch (you)
    {
       case 1:
            if(computer==1)
            {
                printf("\nGame Draw.");
                printf("\nYou=Rock.\nComputer=Rock.");
            }
            else if(computer==2)
            {
                printf("\nYou Loose.");
                printf("\nYou=Rock.\nComputer=Paper.");
                score_computer+=10;
            }
            else
            {
               if(computer==3)
               {
                printf("\nYou Win.");
                printf("\nYou=Rock.\nComputer=Scissor");
                score_you+=10;
               }
            }
            break;
       case 2:
            if(computer==1)
            {
                printf("\nYou Win.");
                printf("\nYou=Paper.\nComputer=Rock.");
                score_you+=10;
            }
            else if(computer==2)
            {
                printf("\nGame Draw.");
                printf("\nYou=Paper.\nComputer=Paper.");
            }
            else
            {
               if(computer==3)
               {
                printf("\nYou Loose.");
                printf("\nYou=Paper.\nComputer=Scissor");
                score_computer+=10;
               }
            }
            break;
       case 3:
            if(computer==1)
            {
                printf("\nYou Loose.");
                printf("\nYou=Scissor.\nComputer=Rock.");
                score_computer+=10;
            }
            else if(computer==2)
            {
                printf("\nYou Win.");
                printf("\nYou=Scissor.\nComputer=Paper.");
                score_you+=10;
            }
            else
            {
               if(computer==3)
               {
                printf("\nGame Draw.");
                printf("\nYou=Scissor.\nComputer=Scissor");
               }
            }
            break;
       case 4:
       exit(0);
    
    default:
    printf("\nINVALID CHOICE!!!");
        break;
    }
    printf("\nScore of You=%d",score_you);
    printf("\nScore of Computer=%d",score_computer);
}

int main()
{
    int ch;
    label2:
        //system("cls");
        setup();
        game();
        getch();
    
    printf("\n\nDo you want to continue this game? If yes then press y and if no press n= ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    goto label2;
    else if (ch=='n'||ch=='N')
    {
        exit(0);
    }
    else
    {
        printf("\nINVALID CHOICE.");
    }
    
    
    
    return 0;
}