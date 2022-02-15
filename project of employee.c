                                     /*EMPLOYEES MANAGEMENT SYSTEM*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main()
{
    int select,choice;
    char username[25];
    int password[25];
    char employee_name[25];
    int employee_password[25];
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t1.  OH YEAH OH YEAH Administrator\n");
    printf("\t\t\t\t\t2. Employer Details\n\n");
    printf("\t\t\t\t\tSelect your desired option : ");
    scanf("%d",&select);
    switch(select)
    {
    case 1:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tWelcome to Administration Department\n\n\n");
        printf("\t\t\t\t Login Details\n\n");
        printf("\t\t\t\tUsername : ");
        scanf("%s",&username);
        printf("\t\t\t\tPassword : ");
        scanf("%s",&password);
        if(strcmp(username,"admin")==0)
        {
            if(strcmp(password,"6732")==0)
        {
                system("cls");
                 printf("\n\n\n\n\t\t\t\t\tWelcome to Administration Portal\n\n");
                 printf("\t\t\t\t\t1. Add Employee's Records\n");
                 printf("\t\t\t\t\t2. List Employee's Records\n");
                 printf("\t\t\t\t\t3. Modify Employee's Records\n");
                 printf("\t\t\t\t\t4. Delete Employee's Records\n");
                 printf("\t\t\t\t\t5. Exit System\n");
                 printf("\n\n\t\t\t\t\tSelect your desired option : ");
                  scanf("%d",&choice);
                  switch(choice)
                   {
                     case 1:
                     /*Add Employee's Records*/
                     break;

                     case 2:
                     /*List Employee's Records*/
                     break;

                     case 3:
                     /*Modify Employee's Records*/
                     break;

                     case 4:
                     /*Delete Employee's Records*/
                     break;

                   }
                     break;


        }
        else
        {
            printf("\n\n\t\t\t\t\tInvalid Password\n");
        }

        }
        else
        {
            printf("\n\n\t\t\t\t\tInvalid Username\n");
        }
    case 2:
     system("cls");
     printf("\n\n\t\t\t\t\tLogin to your account\n\n");
     printf("\t\t\t\tEmployee name : ");
        scanf("%s",&employee_name);
        printf("\n\t\t\t\tPassword : ");
        scanf("%s",&employee_password);
        if(strcmp(employee_name,"iftakhar")==0)
        {
            if(strcmp(employee_password,"7890")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }

       else if(strcmp(employee_name,"parveen")==0)
        {
            if(strcmp(employee_password,"7891")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"asfandyaar")==0)
        {
            if(strcmp(employee_password,"7892")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"farkhanda")==0)
        {
            if(strcmp(employee_password,"7893")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"Parvez")==0)
        {
            if(strcmp(employee_password,"7894")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"shumaila")==0)
        {
            if(strcmp(employee_password,"7895")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"fahad")==0)
        {
            if(strcmp(employee_password,"7896")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"shazia")==0)
        {
            if(strcmp(employee_password,"7897")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"zaman")==0)
        {
            if(strcmp(employee_password,"7898")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }
         else if(strcmp(employee_name,"naveed")==0)
        {
            if(strcmp(employee_password,"7899")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }
         else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }

         else if(strcmp(employee_name,"arslan")==0)
        {
            if(strcmp(employee_password,"7900")==0)
        {
             printf("\n\n\t\t\t\t\t\tWelcome");
        }

        else
        {
             printf("\n\n\t\t\t\t\tInvalid Password\n");
        }
        }


        else
        {
            printf("\n\n\t\t\t\t\tInvalid Name\n");
        }






    }


    getch();
    return 0;
}
