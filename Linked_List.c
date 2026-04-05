

// WAP to print today -- Wednesday and next 10 day==??? will find using linked list

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Node {
    char days[10];
    struct Node* next;
};

struct Node* createNode(char NewDay[]) {
    struct Node* newNodes = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNodes->days, NewDay);
    newNodes->next = NULL;
    return newNodes;
}

int main() {
    struct Node *sun,*mon, *tue, *wed, *thu, *fri,*sat; /// creat node 

    sun = createNode("Sunday");
    mon = createNode("Monday");
    tue = createNode("Tuesday");
    wed = createNode("Wednesday");
    thu = createNode("Thursday");
    fri = createNode("Friday");
    sat = createNode("Saturday");

    sun->next = mon;  // conect a circular link list 
    mon->next = tue;
    tue->next = wed;
    wed->next = thu;
    thu->next = fri;
    fri->next = sat;
    sat->next = sun; /// connect with lat node to fist node  agian 

    struct Node* temp = wed;

    int n = 10;

    for(int i= 0; i<n;i++) {
        temp =temp->next;
    }

    printf("Today is : %s\n", wed->days);
    printf("After %d day : %s\n", n, temp->days);

    
    return 0;
}