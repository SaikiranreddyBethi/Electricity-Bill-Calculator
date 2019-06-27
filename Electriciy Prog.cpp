#include<stdio.h>
#include<conio.h>
void add_customer();
static int units[10],j=5,f,h,l,m,q,w,e,k,x,i,mobile[10],t,id;
static int *ptr,*s;
static char name[10],street[50],z[15],u;
struct customer_details
{
        char name[10];
        char street[50];
        int id;
        unsigned long int mobile[10];        
};

struct customer_details c1;
main()
{
        printf("\t***********************************************************************************************\n\t\t************************************************************************************\n\n\n");
printf("\t\t\t\t\tELECTRICITY BILL CALCULATOR\n\n\n");
        printf("enter your name:");
        scanf("%s",&z);
        printf("\npassword:");
        scanf("%s",&u);
        if(u=='s')
        {
       printf("\n\t\t***********WELCOME***********\n");
           for(i=1;i<100;i++)
       {
                printf("\n1. ADD NEW CUSTOMER AND THEIR ELECTRICITY BILL\n\n2.ELECTRICITY BILL PAYMENT DETAILS(only if details are given)\n\n3)EXIT\n");
                scanf("%d",&t);
                switch(t)
                {
                        case 1:
                        {
                           add_customer();
                           break;        
                        }           
            case 2:
                   {
                    printf("ENTER THE ID NO:");
                    scanf("%d",&k);
                            if(e==k)
                            {
                             printf("\n\tDETAILS\nNAME:%s\nSTREET:%s\nID NO:%d\nBILL :%d",c1.name,c1.street,c1.id,h);
                        }
                        else
                        {
                                printf("no BILL exists");
                        }
                       
                                break;
    
                   }
           case 3:
                   {
                           return(0);
                   }
                   
                   }
       }
       }
       else 
       {
       printf("\t SORRY wrong password plz try again      :(  ");
   }
           getch();
}
void add_customer()
{
                    printf("\n Your Name:");
                            scanf("%s",&c1.name);
                    printf("\n Your Street:");
                            scanf("%s",&c1.street);
                            printf("\nYour id no:");
                            scanf("%d",&c1.id);
                            printf("\nYour mobile number:");
                            scanf("%lu",&c1.mobile);
                            printf("\n Units you have used:");
                            scanf("%d",&units);
                            ptr=units;
                            f=*ptr;
                            printf ("\n\tthe rupees for one unit is 5 rs\n" );
                                printf("\n\nThe Amount you have to pay is: %d\n",f*j);
                            h=f*j;
                            e=c1.id;
        
                             FILE *file;
                                        file=fopen("UNIQ.txt","a+");
                        if(file==NULL)
                        {
                                printf("error in saving customer data ");
                        }
                        fprintf(file,"\t\t*********DETAILS***********\n\t*ID NO  :%d\nNAME  :%s\nSTREET  :%s\nID NO IS  :%d\nELECTRICITY BILL IS  :%d\n",c1.id,c1.name,c1.street,c1.id,h);
                    fclose(file);  
                            
}

