#include<stdio.h>
int main(){
int	arr[50],i,key=7,flag=0,n;
	printf("enter the no of terms:");
	scanf("%d",&n);
    printf("enter the elements:");
	for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    
	for(i=0;i<n;i++){
    	if(arr[i]==key){
    		flag=1;
    		break;
		}
	}
	if(flag==1){
		printf("element is found");
		
	}
	else{
		printf("element is not found");
	}
}
