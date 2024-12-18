#include <stdio.h>

int main(){
  int array[]={1,2,3,4,5};
  int dodai= sizeof(array)/sizeof(array[0]);
  printf("cac phan tu\n");
  for(int i=0;i<dodai;i++){
    printf("%d\n",array[i]);
  }
  printf("do dai cua mang  la %d",dodai);
  return 0;
}