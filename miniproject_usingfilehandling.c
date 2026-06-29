#include<stdio.h>
#include<string.h>

struct Product {
    int ID;
    char Name[20];
    int Quantity;
    float MRP;
    float Discount;
};

int main() {
    struct Product inventory[10] = {
        {225, "Laptop",  12, 99000.0,  35.0},
        {578, "Mobile",  25, 59000.0,  45.0},
        {388, "Tablet",  19, 40000.0,  48.0},
        {496, "SmartTV", 14, 65000.0,  39.0},
        {265, "Watch",   6,  7000.0,   40.0},
        {549, "Camera",  10, 75000.0,  39.0},
        {369, "Earbuds", 15, 22000.0,  35.0},
        {568, "Speaker", 24, 10000.0,  38.0},
        {999, "Monitor", 17, 35000.0,  37.0},
        {336, "Router",  36, 2500.0,   50.0}
    };

    FILE *file;
    int choice, i;

    file = fopen("stock.dat", "rb");
    if(file != NULL) {
        fread(inventory, sizeof(struct Product), 10, file);
        fclose(file);
    }

    do {
        printf("\n====WELCOME TO CHROMA====\n");
        printf("      ======MENU======\n");
        printf("1:View Inventory Stock\n");
        printf("2:Purchase Items\n");
        printf("3:Checkout & Exit\n");
        
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        
        while(choice < 1 || choice > 3) {
            printf("\nInvalid Choice please try again\n");
            printf("Enter Your Choice: ");
            scanf("%d", &choice);
        }
        
        if(choice == 1) {
            printf("\nID\tName\t\tQty\tMRP\t\tDiscount(%%)\n");
            for(i = 0; i < 10; i++) {
                printf("%d\t%-10s\t%d\t%.2f\t\t%.2f%%\n", 
                       inventory[i].ID, inventory[i].Name, inventory[i].Quantity, 
                       inventory[i].MRP, inventory[i].Discount);
            }
        }
        else if(choice == 2) {
            int PI, quantity, found_index = -1;
            
            printf("\nEnter the product ID: ");
            scanf("%d", &PI);
            
            for(i = 0; i < 10; i++) {
                if(PI == inventory[i].ID) {
                    found_index = i;
                    break;
                }
            }
            
            if(found_index != -1) {
                printf("\n--- Product Details ---\n");
                printf("Name: %s\n", inventory[found_index].Name);
                printf("MRP: Rs. %.2f\n", inventory[found_index].MRP);
                printf("Discount Available: %.2f%%\n", inventory[found_index].Discount);
                printf("Available Stock: %d\n", inventory[found_index].Quantity);

                printf("Enter the Quantity to purchase: ");
                scanf("%d", &quantity);
                
                if(quantity > 0 && quantity <= inventory[found_index].Quantity) {
                    printf("\nQuantity is Available!\n");
                    
                    float total_mrp = quantity * inventory[found_index].MRP;
                    float discount_amt = (total_mrp * inventory[found_index].Discount) / 100.0;
                    float final_price = total_mrp - discount_amt;
                    
                    printf("\n====YOUR BILL====\n");
                    printf("Total MRP (%d items): Rs. %.2f\n", quantity, total_mrp);
                    printf("Discount Applied   : Rs. %.2f\n", discount_amt);
                    printf("Final Amount to Pay: Rs. %.2f\n", final_price);

                    inventory[found_index].Quantity = inventory[found_index].Quantity - quantity;
                    printf("\nRemaining stock for %s: %d\n", inventory[found_index].Name, inventory[found_index].Quantity);
                    
                    file = fopen("stock.dat", "wb");
                    if(file != NULL) {
                        fwrite(inventory, sizeof(struct Product), 10, file);
                        fclose(file);
                    }
                }
                else {
                    printf("Quantity is not available or invalid!\n");
                }
            }
            else {
                printf("Enter a valid product ID (Product Not Found)\n");
            }
        }
        else if(choice == 3) {
            printf("\nThank you for shopping at CHROMA Have a nice day!\n");
        }

    } while(choice != 3);

    return 0;
}