#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int total_sales[10],price=0;
int carsales[10]={1200000,900000,340000,2000000,1100000,4000000,3200000,5400000,3000000,2200000};
int sum=0;
void saleamount()
{
    for(int k=0;k<10;k++)
    sum+=total_sales[k];
}
void viewcart()
{
    printf("Cart\n");
    printf("----------------------------------------------------------\n");
    for(int i=0;i<price;i++)
    {
        printf("Your car  %d purchase price is %d        \n",i+1,total_sales[i]);
    }
}
void buycar();
void menu()
{
    int ch;
    do
    {
	
    printf("\nWelcome\n");
    printf("Buy Car\n");
    printf("View Sales\n");
    printf("View cart\n");
    printf("Exit\n");
    printf("Press 1/2/3/4 for respective inputs");
    scanf("%d",&ch);
    
       switch(ch)
       {
           case 1:{buycar(); break;}
           case 2:{saleamount();printf("total amount in treasury is Rs: %d\n",sum);break;}
           case 4:{printf("Thank you for using\n"); 
                   exit(0);
                  }
           case 3:{viewcart(); break;}
           
       }
    } while (ch<=3);
}
void buycar()
{   
    int choice;
	int index[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        printf("%d  %d\n",index[i],carsales[i]);
    }
    printf("\n choose 11 to finish the purchase\n");
    do
    {
    printf("Choose a car which matches your price point : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:{total_sales[price]+=carsales[0]; 
                price++;
                break;
                }
        case 2:{total_sales[price]+=carsales[1]; 
                price++;
                break;
                }
        case 3:{total_sales[price]+=carsales[2]; 
                price++;
                break;
                }
        case 4:{total_sales[price]+=carsales[3]; 
                price++;
                break;
                }
        case 5:{total_sales[price]+=carsales[4]; 
                price++;
                break;
                }
        case 6:{total_sales[price]+=carsales[5]; 
                price++;
                break;
                }
        case 7:{total_sales[price]+=carsales[6]; 
                price++;
                break;
                }
        case 8:{total_sales[price]+=carsales[7]; 
                price++;
                break;
                }
        case 9:{total_sales[price]+=carsales[8]; 
                price++;
                break;
                }
        case 10:{total_sales[price]+=carsales[9]; 
                 price++;
                break;
                }
        case 11:{
                  printf("Added to cart\n");
                  menu();
                }
    }

    }while(choice<=10);
}


int main()
{
    menu();
    
    return 0;
}	