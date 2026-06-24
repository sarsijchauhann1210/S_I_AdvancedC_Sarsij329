#include<stdio.h>

int main() {
    int Product_ID[]={125,548,658,496,265,549,369,568,999,336};
    int Product_Quantity[]={2,5,9,4,6,8,2,4,5,6};
    

    char Product_Name[][20]={"Laptop","Mobile","Tablet","SmartTV","Watch","Camera","Earbuds","Speaker","Monitor","Router"};
    
    float Product_MRP[]={85000.0,35000.0,30000.0,55000.0,5000.0,750000.0,25000.0,9000.0,15000.0,1500.0};
    
    float Discount[]={10.0,5.0,8.0,15.0,0.0,10.0,5.0,0.0,10.0,0.0}; 

    int choice;
    int i;
    
    do {
        printf("\n====WELCOME TO CHROMA====\n");
        printf("      ======MENU======\n");
        printf("1:View Inventory Stock\n");
        printf("2:Purchase Items\n");
        printf("3:Checkout & Exit\n");
        
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
        
        while(choice<1||choice>3){
            printf("\nInvalid Choice please try again\n");
            printf("1:View Inventory Stock\n");
            printf("2:Purchase Items\n");
            printf("3:Checkout & Exit\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);
        }
        
        if(choice==1){
            printf("\nID\tName\t\tQty\tMRP\t\t\tDiscount(%%)\n");
          
            for(i =0;i< 10;i++){
                printf("%d\t%-10s\t%d\t%.2f\t\t\t%.2f%%\n", Product_ID[i], Product_Name[i], Product_Quantity[i], Product_MRP[i], Discount[i]);
            }
        }

        else if(choice==2){
            int PI;
            int quantity;
            int found_index=-1; 
            
            printf("\nEnter the product ID: ");
            scanf("%d",&PI);
            
            for(i = 0;i<10;i++){
                if(PI==Product_ID[i]) {
                    found_index=i; 
                    break; 
                }
            }
            
            if(found_index!=-1) {
                printf("\n--- Product Details ---\n");
                printf("Name: %s\n", Product_Name[found_index]);
                printf("MRP: Rs. %.2f\n", Product_MRP[found_index]);
                printf("Discount Available: %.2f%%\n", Discount[found_index]);
                printf("Available Stock: %d\n", Product_Quantity[found_index]);

                printf("Enter the Quantity to purchase: ");
                scanf("%d",&quantity);   
                
                if(quantity>0 && quantity<=Product_Quantity[found_index]) {
                    printf("\nQuantity is Available!\n");
                    
                   
                    float total_mrp=quantity*Product_MRP[found_index];
                    
                    float discount_amt =(total_mrp*Discount[found_index]) / 100.0;
                    
                    float final_price=total_mrp-discount_amt;
                    
                    printf("\n====YOUR BILL====\n");
                    printf("Total MRP (%d items): Rs. %.2f\n", quantity, total_mrp);
                    printf("Discount Applied   : Rs. %.2f\n", discount_amt);
                    printf("Final Amount to Pay: Rs. %.2f\n", final_price);

                    Product_Quantity[found_index] = Product_Quantity[found_index] - quantity;
                    printf("\nRemaining stock for %s: %d\n", Product_Name[found_index], Product_Quantity[found_index]);
                } 
                else {
                    printf("Quantity is not available or invalid!\n");
                }
            } 
            else {
                printf("Enter a valid product ID (Product Not Found)\n");
            }
        }
        
        else if(choice==3){
            printf("\nThank you for shopping at CHROMA. Have a nice day!\n");
        }

    } while(choice!=3);

    return 0;
}