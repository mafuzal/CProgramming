#include <stdio.h>
#include <stdlib.h>


struct item
{
    char *itemName;
    int qty;
    float price;
    float amount;
};
void readItem(struct item *i);
void printItem(struct item *i);
int main()
{
    struct item itm;
    struct item *pItem;
    pItem = &itm;
    pItem->itemName = (char *)malloc(30*sizeof(char));
    if (pItem == NULL)
        exit(-1);
    //read item 
    readItem(pItem);
    //print Item 
    printItem(pItem);
    free(pItem->itemName);
    return 0;

}

void readItem(struct item *i)
{
    printf("Enter product name: \n");
    scanf("%s",i->itemName);
    printf("Enter price: \n");
    scanf("%f",&i->price); //price is not a pointer 
    printf("Enter quantity: \n");
    scanf("%d",&i->qty); 
    i->amount = (float)i->qty * i->price;   

}

void printItem(struct item *i)
{
    printf("Name: %s\n",i->itemName);
    printf("Price: %.2f \n",i->price);
    printf("Quantity: %d \n",i->qty);
    printf("Total Amount: %.2f \n",i->amount);
}