#ifndef  _SDB_H_
#define _SDB_H_
#include"STD.h"

typedef struct SimpleDb
{
u32 Student_ID;
u32 Student_year;
u32 Course1_ID;
u32 Course1_grade;
u32 Course2_ID;
u32 Course2_grade;
u32 Course3_ID;
u32 Course3_grade;
} student;


Bool isFull();

u8 get_used_size();

Bool addEntry();

void deletEntry(u32);

Bool readEntry(u32);

void getList(u8*, u32*);

Bool idExists(u32);

#endif