#include<stdio.h>
int main()
{
    char op;
    int item,qty;
    float price,gst,total,final_bill;
    printf("\n<-------------WELCOME TO MY DHABA------------->\n");
    printf("select what you want->\n");
    printf("1.starter\n2. main course\n3. desert\n4. exit\n");
    scanf("%c",&op);

    switch(op)
    {
        case '1':
            printf("\nyou have chosen starter\n");
            printf("1.chicken 65  -Rs 150\n");
            printf("2.dragon chicken  -Rs 100\n");
            printf("3.paneer tikka  -Rs 200\n");
            printf("enter items:");
            scanf("%d",&item);
            printf("enter quantity:");
            scanf("%d",&qty);

            switch(item)
            {
                case 1:price=150;break;
                case 2:price=100;break;
                case 3:price=200;break;
                default:
                printf("invalid item");
                return 0;
            }
                break;
        case '2' :
            printf("\nyou have chosen Main source\n ");
            printf("1.biriyani  -Rs 200\n");
            printf("2.butter naan  -Rs 40\n");
            printf("3.paneer cury  -Rs 160\n");
            printf("enter the item:");
            scanf("%d",&item);
            printf("enter the quantity:");
            scanf("%d",&qty);

            switch(item)
            {
                case 1:price=200;break;
                case 2:price=40;break;
                case 3:price=160;break;
                default:
                printf("invalid item");
                return 0;
            }
            break;
        case '3':
            printf("\nyou have chosen desert\n");
            printf("1.ice cream  -Rs 60\n");
            printf("2.gulab jamun  -Rs 50\n");
            printf("3.cake  -Rs 90\n");
            printf("enter the item:");
            scanf("%d",&item);
            printf("enter the quantity:");
            scanf("%d",&qty);

            switch(item)
            {
                case 1:price=60;break;
                case 2:price=50;break;
                case 3:price=90;break;
                default:
                printf("invalid item");
                return 0;
            }
            break;
        case '4':
            printf("Thank you visit again");
            return 0;
            default:
            printf("invalid choice");
            return 0;
    }
    total=price*qty;
    gst=total*0.05;
    final_bill=total+gst;

    printf("\n<----------BILL------------>\n");
    printf("price: Rs%2f\n",price);
    printf("quantity: Rs%d\n",qty);
    printf("subtotal: Rs%2f\n",total);
    printf("gst: Rs%2f\n",gst);
    printf("final_bill: Rs%2f",final_bill);
    printf("\n<----------------------------\n");

    printf("Thank You for visiting\n");
    return 0;
}