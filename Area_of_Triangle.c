#include <stdio.h>
int main(){
  int h,b,area;
  printf("Enter the hiegh of the triangle:");
  scanf("%d",&h);
  printf("Enter the base of the triangle:");
  scanf("%d",&b);
  area = 0.5*(b*h);
  printf("Area of triangle is: %d\n",&area);
  return 0;
}
