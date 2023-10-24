#include<stdio.h>
int main() {
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     int low=a[0];
     int pos=0;
     for(int i=0;i<n;i++){
        if(a[i]<low){
low=a[i];
pos=i;

        }
        
     }
     printf("%d %d",low,pos+1);
return 0;
}