#include <stdio.h>
void freq(int store[], int num, int frequency[]);
void histogram(int frequency[], int num);
int main(){
   int i,j, num;
   printf("Please type number of integers to make a histogram with: ");
   scanf("%d",&num);
   int store[num];
   for(i=0; i<num; i++){
       store[i]=(rand() % 100);
       printf("%d ",store[i]);
   }
   printf("\n");
   int frequency[10];
   freq(store,num,frequency);
   histogram(frequency, num);
   return 0;
}
void freq(int store[], int num, int frequency[]){
    int i,j;
    for (i=0; i<10; i++){
        frequency[i] = 0;}
    for (i = 0 ; i < num ; i++) {
        int index = store[i] / 10;
        frequency[index]++;}
}

void histogram(int frequency[], int num){
    int i,j,x;
    for (i=1; i<=10; i++){
        printf("%2d|", i);
        for(j=0; j<frequency[i]; j++) {
            printf("*");}
        printf("\n");}
}
