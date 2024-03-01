#include <iostream>
#include <cstdio>
#include "menu.h"
#include "phoneSearch.h"
#include "phoneList.h"
#include "phoneAdd.h"

using namespace std;


typedef struct 
{
    char name[20];
    char lastname[20];
    char phone[11];
}Record;

void menu();
int phoneAdd();
int phoneList();
int phoneSearch(char*);