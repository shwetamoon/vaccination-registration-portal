
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

void add();
void display();
void input();
void output();

FILE *BEX; 
typedef struct
{
char f_name[25],l_name[25],address[100],phone_no[15],bloodgroup[5];
}candidate;
candidate st; 

int main()
{
    
int c=1;
char password[10];
char pass[]={"123"};
char pass1[]={"1234"};
int no;
printf("\n\n\t\tplease enter the password:> ");
gets(password);
if(strcmp(password,pass)==0) /*Password Compare*/
{
do
{
printf("\t\t====== Choose Options ======");
printf( "\n \t\t 1. Register For Vacination (For Candidate)");
printf( "\n \t\t 2. Exit \n\n\n");
target : scanf("%d",&no);
switch(no)
{
case 1:
add();
break;
case 2:
printf("\t\t THANK YOU FOR USING OUR PORTAL");
printf( "\n\n");
getch();
exit(0); "\n\n";
break;
default :
printf("\n\t\tInvalid choice--please enter the valid choice again:");
goto target;
break;

}
}while(no!=3);
} else if(strcmp(password,pass1)==0){
    do
{
system("cls");
printf("\t\t====== Choose Options ======");
printf("\n\n ");
printf( "\n\n");
printf( "\n \t\t 1. List Records (For Admin)");
printf( "\n \t\t 2. Exit \n\n\n");
target1 : scanf("%d",&no);
switch(no)
{
case 1:
display();
break;
case 2:
printf( "\n\n");
printf("\t\t THANK YOU FOR USING OUR PORTAL");
printf( "\n\n");
getch();
exit(0); "\n\n";
break;
default :
printf("\n\t\tInvalid choice--please enter the valid choice again:");
goto target1;
break;

}
}while(no!=3);
} else{
    printf("\n\t\tIncorrect password");
}

return 0;
}

void add() 
{


   int ch,no;
char ans;
printf("\n\n\n");
printf( "\n \t\t\t Add Details");
printf( "\n\n");

BEX=fopen("D:\\details.txt","ab");
if(BEX==NULL)
{
printf("error in opening details.txt file");
getch();
exit(0);
}
 
input();
fwrite(&st,sizeof(st),1,BEX);
fflush(stdin);
fclose(BEX);
 
 

}

void input() 
{

printf("\tplease enter the first name:>");
fflush(stdin);
gets(st.f_name);
printf("\tplease enter the last name:>");
fflush(stdin);
gets(st.l_name);
printf("\tplease enter the phone number:>"); 
fflush(stdin);
gets(st.phone_no);
printf("\tplease enter the address:>"); 
fflush(stdin);
gets(st.address);
printf("\tplease enter the blood group:>");
fflush(stdin);
gets(st.bloodgroup);
 
}

int dist,frist,sec,pass; 
void display() 
{
int no,ch;
char blood[5];

BEX=fopen("D:\\details.txt","rb");
if(BEX==NULL)
{
printf("\n\n\t\terror in opening details.txt file\n");
}
else
{
while(fread(&st,sizeof(st),1,BEX)==1)
{
output();
}
}
getch();
fclose(BEX);

}
void output()
{
printf("\nName=%s %s",st.f_name,st.l_name);
printf("\nBlood group=%s",st.bloodgroup);
printf("\nPhone no=%s",st.phone_no);
printf("\nAddress=%s",st.address);
}

