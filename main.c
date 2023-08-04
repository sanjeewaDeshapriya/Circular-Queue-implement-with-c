#include <stdio.h>
#include <stdlib.h>

int r,rf;


struct{
    int arr[5];
    int front;
    int rear;
}cq;

void enqueue(int a){
    int exe=1;
    if(r>0 && cq.rear==cq.front-1 && cq.rear!=-1){
        printf("The queue is full");
        exe=0;

    }

    else if (cq.rear==4){
        r++;
        cq.rear=-1;
    }
    //cq.rear++;

    if(exe==1){
            cq.arr[++cq.rear]=a;
            printf("\nAdd %d for %d index",a,cq.rear);

    }


};

int dequeue(){
    int out;

    if((r==0 && cq.rear<cq.front)){
        printf("\nThe queue is empty");

    }
    else if(rf>0 && cq.rear+1 == cq.front){
        printf("\nThe queue is empty");
    }
    else{
        out = cq.arr[cq.front];
        cq.arr[cq.front]=0;
         printf("\nElement %d is removed",cq.front);
        if(cq.front==4){
            cq.front=0;
            rf++;
            }
        else{
            cq.front++;
            }
    }
    return out;

};


void dis(){
    for(int i=0;i<5;i++){
        printf("\t %d",cq.arr[i]);
    }
}


int main()
{
    printf("Hello world!\n");

    cq.front=0;
    cq.rear=-1;



    enqueue(1);
    enqueue(2);
     dequeue();
     enqueue(1);
    enqueue(2);
    enqueue(1);
    printf("\n %d is front and %d is rear",cq.front,cq.rear);
    enqueue(3);
    printf("\n %d is front and %d is rear",cq.front,cq.rear);
    enqueue(4);
    printf("\n %d is front and %d is rear",cq.front,cq.rear);
    enqueue(5);
   printf("\n %d is front and %d is rear",cq.front,cq.rear);
   dequeue();
   printf("\n %d is front and %d is rear",cq.front,cq.rear);
   enqueue(5);
   printf("\n %d is front and %d is rear",cq.front,cq.rear);
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   printf("\n %d is front and %d is rear",cq.front,cq.rear);
   dequeue();
   dequeue();








    dis();

    return 0;
}
