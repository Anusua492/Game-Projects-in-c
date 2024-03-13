#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void check(char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
    printf("\n\n\t\t\t\t---:TIC TAC TOE GAME:---\n");
}

void Show()
{
   printf("\n\n\n\t\t\t\t\t----|----|----\n");
   printf("\t\t\t\t\t  %c |  %c |  %c \n",a[0],a[1],a[2]);
   printf("\t\t\t\t\t----|----|----\n");
   printf("\t\t\t\t\t  %c |  %c |  %c \n",a[3],a[4],a[5]);
   printf("\t\t\t\t\t----|----|----\n");
   printf("\t\t\t\t\t  %c |  %c |  %c \n",a[6],a[7],a[8]);
   printf("\t\t\t\t\t----|----|----\n\n");
}

void inputsymbol()
{
    printf("\nPlayer 1 Symbol :x:");
    printf("\nPlayer 2 Symbol :0:\n\n");
}

int k=0;
int count=0;

void check(char P)
{
    int i;
    if(P=='1'||P=='2'||P=='3'||P=='4'||P=='5'||P=='6'||P=='7'||P=='8'||P=='9')
   {
    if(k==0)
    {
        
    for(i=0;i<=8;i++)
    {
        
        if(a[i]==P)
        {
            a[i]='x';
            k=1;
            break;
        }
        }
        }
        
    
    else{
    for(i=0;i<=8;i++)
    {
        if(a[i]==P)
        {
            a[i]='0';
            k=0;
            break;
        }
    }
    }
   }
else
    {
    printf("\nINVALID CHOICE.PLEASE TRY AGAIN");
    }
    
}
void play()
{
    char p;
    printf("\nEnter the position :");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    count++;
  
    check(p);
   
   
    /*fflush(stdin);
    scanf("%c",&s);
    count++;
    if((p<=9)&&(s=='x'||s=='0'))
    {
    check(p,s);
    }
    else
    {
    printf("\nINVALID CHOICE.PLEASE TRY AGAIN");
    }*/
}

int end()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]=='x'&&a[6]=='x') || (a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
    return(100);
    else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0') || (a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
    return(200);
    else if((a[1]=='x'&&a[4]=='x'&&a[7]=='x'))
    return(100);
    else if((a[1]=='0'&&a[4]=='0'&&a[7]=='0'))
    return(200);
    else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x') || ((a[2]=='x'&&a[4]=='x'&&a[6]=='x')))
    return(100);
    else if((a[2]=='0'&&a[5]=='0'&&a[8]=='0') || ((a[2]=='0'&&a[4]=='0'&&a[6]=='0')))
    return(200);
    else if((a[3]=='x'&&a[4]=='x'&&a[5]=='x'))
    return(100);
    else if((a[3]=='0'&&a[4]=='0'&&a[5]=='0'))
    return(200);
    else if((a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
    return(100);
    else if((a[6]=='0'&&a[7]=='0'&&a[8]=='0'))
    return(200);
    return(300);
    

}

void main()
{
    int ch;
    int k;
    labell:
    gamename();
    Show();
    inputsymbol();
    play();

    label:
    Show();
    play();
    k=end();
    Show();
    if(count<9)
    {
    if(k==100)
    {
    printf("\nPlayer 1 Wins.");
    count=0;
    }
    else if(k==200)
    {
    printf("\nPlayer 2 Wins.");
    count=0;
    }
    else
    goto label;
    }
    else{
        printf("\nGame Draw.");
        count=0;
    }
    printf("\nDo you want to continue the game: Enter y for yes and n for no=");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        goto labell;
    }
    printf("\n\nTHANK YOU FOR PLAYING.");
    printf("\nPress any to exit.");
    getch();

    
}