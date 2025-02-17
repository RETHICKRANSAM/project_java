#include<stdio.h>
int main(){
int arr[5]={9,6,5,8,3};
int i,j,temp,minindex;
for(i=0;i<5;i++){
minindex=i;

for(j=i+1;j<5;j++){
if(arr[j]<arr[minindex]){
minindex=j;
}
}
temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
printf("After Sorting:");
for(i=0;i<5;i++){
printf("\t%d",arr[i]);

}
return 0;
}
