#include<stdio.h>
int main(){
int array[5];
int search,found =0,i;
for(i=0;i<5;i++){
scanf("%d",&array[i]);
}
printf("enter the element u want to search");
scanf ("%d",&search);
for(i=0;i<5;i++){
if (search==array[i]){
found = 1;
printf ("%d is found at index %d",array[i],i);
}
}
if(found==0){
print("element not formed");
}
return 0 ;
}
