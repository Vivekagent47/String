#include<stdio.h>
int main()
{
  int N1,N2,flag=0;
  scanf("%d",&N1);
  int a[N1];
  for(int i=0;i<N1;i++)
    scanf("%d",&a[i]);
  scanf("%d",&N2);
  int b[N2];
  for(int i=0;i<N2;i++)
    scanf("%d",&b[i]);
  
  int temp=a[0];
  
  for(int i=0;i<N1;i++){
    if(a[i]<temp){
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  for(int i=0;i<N1;i++){
    int count=0;
    for(int j=0;j<N2;j++){
      if(a[i] == b[j])
        count++;
    }
    if(count == 0){
      printf("%d",a[i]);
      flag++;
      break;
    }
  }
  if(flag == 0)
    printf("NO");
  return 0;
}
