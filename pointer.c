#include <stdio.h>
void revise(int* ptr_1,int* ptr_2){
  *ptr_1 = *ptr_1 * 2;
  *ptr_2 = *ptr_2 * 2;
}

int main(){
  int a = 765, b = 876;
  int* a_ptr = &a;
  int* b_ptr = &b;
  revise(a_ptr,b_ptr);
  printf("%d %d\n", *a_ptr, *b_ptr);
}
