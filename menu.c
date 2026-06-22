#include<stdio.h>

int main()
{
    int category,item,qty;
    float price=0,total=0,gst,final_bill;
    char choice;

    printf("\n========== WELCOME TO MY DHABA ==========\n");

    do
    {
        printf("\nMENU CATEGORIES\n");
        printf("1. Starters\n");
        printf("2. Soups\n");
        printf("3. Main Course\n");
        printf("4. Breads\n");
        printf("5. Rice Items\n");
        printf("6. Desserts\n");
        printf("7. Cold Drinks\n");
        printf("8. Exit\n");

        printf("\nEnter Category : ");
        scanf("%d",&category);

        switch(category)
        {
            case 1:
                printf("\n------ STARTERS ------\n");
                printf("1. Chicken 65        Rs150\n");
                printf("2. Dragon Chicken    Rs180\n");
                printf("3. Paneer Tikka      Rs200\n");
                printf("4. Gobi Manchurian   Rs120\n");
                printf("5. Chilli Chicken    Rs170\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=150; break;
                    case 2: price=180; break;
                    case 3: price=200; break;
                    case 4: price=120; break;
                    case 5: price=170; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 2:
                printf("\n------ SOUPS ------\n");
                printf("1. Tomato Soup       Rs80\n");
                printf("2. Sweet Corn Soup   Rs90\n");
                printf("3. Chicken Soup      Rs120\n");
                printf("4. Hot & Sour Soup   Rs100\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=80; break;
                    case 2: price=90; break;
                    case 3: price=120; break;
                    case 4: price=100; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 3:
                printf("\n------ MAIN COURSE ------\n");
                printf("1. Chicken Biryani   Rs220\n");
                printf("2. Veg Biryani       Rs180\n");
                printf("3. Paneer Curry      Rs160\n");
                printf("4. Butter Chicken    Rs250\n");
                printf("5. Fried Rice        Rs150\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=220; break;
                    case 2: price=180; break;
                    case 3: price=160; break;
                    case 4: price=250; break;
                    case 5: price=150; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 4:
                printf("\n------ BREADS ------\n");
                printf("1. Butter Naan       Rs40\n");
                printf("2. Garlic Naan       Rs50\n");
                printf("3. Roti              Rs20\n");
                printf("4. Kulcha            Rs45\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=40; break;
                    case 2: price=50; break;
                    case 3: price=20; break;
                    case 4: price=45; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 5:
                printf("\n------ RICE ITEMS ------\n");
                printf("1. Jeera Rice        Rs120\n");
                printf("2. Ghee Rice         Rs140\n");
                printf("3. Veg Pulao         Rs150\n");
                printf("4. Curd Rice         Rs90\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=120; break;
                    case 2: price=140; break;
                    case 3: price=150; break;
                    case 4: price=90; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 6:
                printf("\n------ DESSERTS ------\n");
                printf("1. Ice Cream         Rs60\n");
                printf("2. Gulab Jamun       Rs50\n");
                printf("3. Cake              Rs90\n");
                printf("4. Brownie           Rs110\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=60; break;
                    case 2: price=50; break;
                    case 3: price=90; break;
                    case 4: price=110; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 7:
                printf("\n------ COLD DRINKS ------\n");
                printf("1. Coke              Rs40\n");
                printf("2. Pepsi             Rs40\n");
                printf("3. Sprite            Rs40\n");
                printf("4. Mango Juice       Rs60\n");

                printf("Select Item : ");
                scanf("%d",&item);

                switch(item)
                {
                    case 1: price=40; break;
                    case 2: price=40; break;
                    case 3: price=40; break;
                    case 4: price=60; break;
                    default: printf("Invalid Item\n"); continue;
                }
                break;

            case 8:
                printf("Thank You Visit Again\n");
                return 0;

            default:
                printf("Invalid Category\n");
                continue;
        }

        printf("Enter Quantity : ");
        scanf("%d",&qty);

        total = total + (price * qty);

        printf("\nAdd More Items ? (Y/N) : ");
        scanf(" %c",&choice);

    }while(choice=='Y' || choice=='y');

    gst = total * 0.05;
    final_bill = total + gst;

    printf("\n========== FINAL BILL ==========\n");
    printf("Subtotal   : Rs %.2f\n",total);
    printf("GST (5%%)   : Rs %.2f\n",gst);
    printf("Final Bill : Rs %.2f\n",final_bill);
    printf("================================\n");

    printf("\nThank You For Visiting My Dhaba\n");

    return 0;
}