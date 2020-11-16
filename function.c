#include <stdio.h>

int add_and_print(int a,int b){
  return printf("%d\n",a+b);
}

int main(){
  int a = 3, b = 5;
  add_and_print(a,b);
}

