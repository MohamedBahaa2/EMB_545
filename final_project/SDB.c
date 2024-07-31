#include "STD.h"
#include "SDB.h"
#include <stdlib.h>

student *data_base = (student*)calloc(10,sizeof(student));

Bool isFull(){
    if(data_base[10] == 0){
        return f;
    }else return t;
}

u8 get_used_size(){   
    student* ptr = data_base;
    u8 counter = 0;
    u32 index = (ptr-data_base)/sizeof(student);
    while(t){
        if((ptr->Student_ID || (ptr+1)->Student_ID) && index <= 10){
            counter++;
            ptr++;
        }
        else break;
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
    student* ptr = data_base;
    Bool found = f;
    
    for (u32 i = 0; i < get_used_size(); i++){
        if(ptr -> Student_ID == id){
            found = t;
            break;
        }
        ptr++;
    }

    u32 index;
    if(found){
        index = (ptr - data_base)/sizeof(student);
        for (u32 i = index; i < get_used_size()-1; i++){
            data_base[i] = data_base[i+1];
        }

    }else{
        printf("\nNo student with ID: %dwas found!",id);
    }
}

Bool readEntry(u32 id){
    student* ptr= data_base;
    for (u32 i= 0;i<get_used_size();i++){
        if (ptr ->Student_ID == id){
            printf("\nID: %d",ptr-> Student_ID);
            printf("\nThe year: %d",ptr-> Student_year);

            printf("\nCourse_1 ID: %d",ptr-> Course1_ID);
            printf("\nCourse_1 Grade: %d",ptr-> Course1_grade);

            printf("\nCourse_2 ID: %d",ptr-> Course2_ID);
            printf("\nCourse_2 Grade: %d",ptr-> Course2_grade);

            printf("\nCourse_3 ID: %d",ptr-> Course3_ID);
            printf("\nCourse_3 Grade: %d",ptr-> Course3_grade);

            return t;
        }
        
        ptr++;
    }
    printf("\nNo student with ID: %d was found!",id);
    return f;
}

void getList(u8* count, u32* list){
    if (count > get_used_size()){
        printf("\nInsufficient IDs, try reducing the count!");
    }
    else{
        student* ptr = data_base;
        for (u8 i = 0; i < count; i++){
            list[i] = ptr->Student_ID;
            ptr++;
        }
    }
}

Bool idExists(u32 id){
    student* ptr = data_base;
    for (u32 i = 0; i<get_used_size();i++){
        if(ptr->Student_ID == id){
            return t;
            ptr++;
        }
    }
    else return f;
}


