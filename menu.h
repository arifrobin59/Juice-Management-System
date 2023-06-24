

#include<stdio.h>

struct Juice {
    int id;
    char name[100];
    float price;
};

void display_juice_list(struct Juice *juices, int count) {
    printf("\t\t\t~~~~~ Juice List ~~~~~\n\n\n");
    printf("  %-10s %-20s %-10s\n", "ID", "Name", "Price");
    printf("----------------------------------------\n");

    for (int i = 0; i < count; i++) {
        struct Juice juice = juices[i];
        printf("  %-10d %-20s %-10.2f\n", juice.id, juice.name, juice.price);
        printf("-----------------------------------------\n");
    }
}


void menu (void)
{
    printf("==> 1. Juice List & Order\n");
    printf("==> 2. Show All Invoice\n");
    printf("==> 3. Delet Invoice\n");
    printf("==> 4. Exit\n");
}



void exit_program(void)
 {
     system("cls");
    printf("                ...Thank You For Using Our System...\n");
    sleep(1);
    exit(0); // Terminate the program with a status code of 0
 }

