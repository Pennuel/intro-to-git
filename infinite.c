#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

struct Node
{
    float marks[6];
    struct Node *link;
};

typedef struct Node *node;
node head = NULL;

int random(){
   return 50 + (rand()%50);
}

int main(){

    srand(time(0));

    printf("Enter the number of students\n");
    int n;
    scanf("%d", &n);
    while (n != 0 )
        {
        node temp = NULL, ptr = NULL;
        temp = (struct Node *)malloc(sizeof(struct Node));

        float sum = 0;
        for (int i = 0; i < 5; i++){
            temp->marks[i]=random();
            
            if(temp -> marks[i] < 0){
                goto exit;
            }
            sum += temp->marks[i];
        }
        temp->marks[5] = sum / 5;

        temp->link = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ptr = head;
            while(ptr->link != NULL){
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
        printf("%d\n",n);
        n--;
    }
    exit:
    node ptr = head;
    while(ptr != NULL){
        for (int i = 0; i < 5; i++){
        //printf("Mark: %.2f\t", ptr->marks[i]);
        }
        putchar('\n');
        ptr = ptr->link;
    }

    node temp = head;
    while(temp != NULL){
        printf("Average %.2f\n\n", temp->marks[5]);
        temp = temp->link;
    }
}

float averageGrade(node temp){
    float sum = 0;
    for (int i = 0; i < 5; i++){
        sum +=temp->marks[i];
    }
    float average = sum / 5;
    return average;
}