#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

struct Food
{
    char name[100];
    double price;
    double tax;
    int f_code;
};

struct Food input_foods(int i)
{
    printf("For Food %d\n",i+1);
    struct Food one_food;
    printf("Enter Food Name: ");
    fflush(stdin);
    gets(one_food.name);
    printf("Enter Food Code: ");
    scanf("%d",&one_food.f_code);
    printf("Enter Food Price: ");
    scanf("%lf",&one_food.price);
    one_food.tax = one_food.price*.05;
    return one_food;
};

void display_food(struct Food f[],int len)
{
    for(int i=0; i<len; i++)
    {
        printf("\n-----------------------------\n");
        printf("\nInformation for Food %d\n",i+1);
        printf("Food Code : %d\n",f[i].f_code);
        printf("Food name : %s\n",f[i].name);
        printf("Food Price: %.3lf\n",f[i].price);
        printf("Food Tax  : %.3lf\n",f[i].tax);
        printf("Total     : %.3lf\n",(f[i].price+f[i].tax));
        printf("\n-----------------------------\n");
    }
    printf("\n-----------------------------\n");
}

bool check_food_code(struct Food f[],int n,int code)
{
    bool check = false;
    for(int i=0; i<n; i++)
    {
        if(f[i].f_code == code)
        {
            check=true;
            break;
        }
    }
    return check;
}

void display_ordered_foods(struct Food f[],int n, int o_f[],int order_size)
{

    double total_price = 0;
    for(int i=0;i<order_size;i++)
    {
        //printf("Ordered Food Code:%d\n",o_f[i]);
        int food_code = o_f[i];

        struct Food food;

        for(int k=0;k<n;k++)
        {
            if(f[k].f_code == food_code)
            {
                food = f[k];
            }
        }
        printf("Food Name:%s  Food Price: %.2lf\n",food.name,food.price);
        total_price+=food.price;
    }
    printf("___________________\n");
    printf("Total Price: %.2lf\n",total_price);
}

int main()
{
    printf("How many Food you want to take input: \n");
    int n;
    scanf("%d",&n);

    struct Food food_items[n];

    for(int i=0; i<n; i++)
    {
        food_items[i] = input_foods(i);
    }

    display_food(food_items,n);

    int ordered_food[100];
    int indx = 0;

    printf("Order your food by enter food_code or enter zero(0) for exit: \n");

    int food_code;
    while(scanf("%d",&food_code))
    {
        if(food_code == 0)
            break;

        display_food(food_items,n);

        while(check_food_code(food_items,n,food_code)==false)
        {
            printf("Invalid Food Code, Please try again.\n");
            printf("Order your food by entering food_code or enter 0 to exit: ");
            scanf("%d",&food_code);
            if(food_code == 0)
                break;
        }
        if(food_code == 0)
            break;

        if(check_food_code(food_items,n,food_code)==true)
        {
            ordered_food[indx]=food_code;
            indx++;
        }
        printf("Order your food by enter food code or enter zero(0) for exit: ");
    }

    display_ordered_foods(food_items,n,ordered_food,indx);

}
