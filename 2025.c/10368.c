#include<stdio.h>

struct date{
  int num;
  char name[20];
  char unit[5];
  float price;
  float quantity;
    
};

int main(){
    
    int n = 0;
    printf("Input the number of orders:");
    scanf("%d",&n);
    printf("Input %d order information(num name unit price quantity):\n",n);
    
    struct date order[n];
    
    int i = 0;
    float amount[20];
    float sum = 0;
    for(i=0;i<n;i++){
        
        scanf("%d %s %s %f %f",&order[i].num,order[i].name,order[i].unit,&order[i].price,&order[i].quantity);
        
        amount[i]=(order[i].price)*(order[i].quantity);
        sum+=amount[i];
    }
    
    
    printf("-------------------------\n");
    printf("num\tname\tamount\n");
    for(i=0;i<n;i++){
        
        printf("%d\t%s\t%.2f\n",order[i].num,order[i].name,amount[i]);
 
    }
    printf("-------------------------\n");
    printf("Average amount:%.2f",sum/n);
    return 0;
}