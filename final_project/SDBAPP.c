#include "SDB.h"
#include "STD.h"
#include <stdlib.h>

void app(){
    while(1){
        u8 entry;
        printf("\n1. To add entry, enter 1\n2. To get used size in database, enter 2\n3. To read student data, enter 3\n4. To get the list of all student IDs, enter 4\n5. To check is ID is existed, enter 5\n6. To delete student data, enter 6\n7. To check is database is full, enter 7\n8. To exit enter 0"
        scanf("%d",&entry);
        action(entry);
    }
} 

void action(u8 input){
    switch (entry){
        case 1:
            addEntry;
            break;
        case 2:
            u8 size = get_used_size();
            printf("\nThe used size is: %d",size);
            break;
        case 3:
            printf("\nPlease enter the ID: ");
            u32 id;
            scanf("%d",&id);
            readEntry(id);
            break;
        case 4:
            printf("\nPlease enter the IDs count: ");
            u8 count;
            scanf("%d",&count);
            
            u32 *list = (u32*)malloc(count*sizeof(u32));
            getList(count,list);

            printf("\n");
            for(u8 i = 0; i< count;i++){
                printf("\n\t ID(%d): %d",i,list[i]);
            }

            break;
        
        case 5:
            u32 id;
            printf("\nPlease enter the ID: ");
            scanf("%d",&id);
            if(idExists(id)){
                printf("\nThe ID entered is valid!");

            }else{
                printf("\nThe ID entered doesn't exist or has been deleted!");
            }

            break;
        
        case 6:
            u32 id;
            printf("\nPlease enter the ID to remove: ");
            scanf("%d",&id);
            deletEntry(id);
            break;
        case 7:
            if (isFull){
                printf("\nThe database is full!");
            }else printf("\nThe database is not full");
            break;

        case 8:
            printf("\n\n\tThank you for using my application!");
            exit(0);

            
        default:
            break;
        }
}