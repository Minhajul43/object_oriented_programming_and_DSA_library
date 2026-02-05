#include<stdio.h>
#include<math.h>
int main(){
  long  int n,sum=0;
  scanf("%ld",&n);
  for(int i=1;i<=n;i++){
    sum+=i*pow((-1),i);
  }
  printf("%ld",sum);
  return 0;
}