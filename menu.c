#include<stdio.h>
int main()
{
    char op,ch;
    printf("<-------------welcome to my daba------------->\n\n");
    printf("select what you want->\n");
    printf("1.starter\n2. main course\n3. desert\n4. exit\n");

    scanf("%c",&op);

    switch(op)
    {
        case '1':
        printf("you have choosed starter\n");
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
       

    }
}