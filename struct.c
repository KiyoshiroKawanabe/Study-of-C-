#include <stdio.h>

struct human{
  int age;
  double height;
  char team[10];
};

int main(){
  
  struct human human[] = {
  {20, 173.5, "citbrains"}
  };
  
  printf("年齢\t%d\n身長\t%lf\n所属\t%8s\n", human[0].age, human[0].height, human[0].team);

  return 0;
}

