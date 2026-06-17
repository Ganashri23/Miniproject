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
        printf("1.chicken 65\n2.dragon chicken\n3.panner\n");
        break;

        case'2':
        printf("you have chossed main course\n");
        printf("1.milk\n2.curd\n3.lemon\n");
        break;

        case'3':
        printf("you have chossed desert\n");
        printf("1.milk\n2.curd\n3.lemon\n");
        break;

        case '4':
        printf("thank you")


    }
}