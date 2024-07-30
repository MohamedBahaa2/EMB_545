#include "STD.h"
#include "SDB.h"

student *data_base = (student*)calloc(10,sizeof(student));

Bool isFull(){
    if(data_base[10] -> Student_Id == 0){
        return f;
    }else return t;
}

u8 get_used_size(){   
    student* ptr;
    u8 counter = 0;

    while(ptr -> Student_ID){
        counter++;
        ptr++;
    }

    return counter;
}

Bool addEntry(){
    if(isFull()){
        printf("\nThe data base is already full, consider deleting before adding to it!");
        return f;
    }
    else{
        student* newStudent = data_base[get_used_size() - 1];
        
        printf("\nPlease enter the ID: ");
        scanf("%d",&newStudent-> Student_ID);

        printf("\nPlease enter the year: ");
        scanf("%d",&newStudent-> Student_year);

        printf("\nPlease enter course_1 ID: ");
        scanf("%d",&newStudent-> Course1_ID);

        printf("\nPlease enter the course_1 Grade: ");
        scanf("%d",&newStudent-> Course1_grade);

        printf("\nPlease enter course_2 ID: ");
        scanf("%d",&newStudent-> Course2_ID);

        printf("\nPlease enter course_2 Grade: ");
        scanf("%d",&newStudent-> Course2_grade);

        printf("\nPlease enter course_3 ID: ");
        scanf("%d",&newStudent-> Course3_ID);

        printf("\nPlease enter the course_3 Grade: ");
        scanf("%d",&newStudent-> Course3_grade);

        return t;
    }
}

void deletEntry(u32 id){
   
}