#include<stdio.h>
#include<math.h>
int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("HCF of %d and %d is: %d\n", n1, n2, hcf(n1, n2));
    printf("LCM of %d and %d is: %d\n", n1, n2, lcm(n1, n2));
    return 0;
}
int hcf(int a,intb){
  if(b==0)
    return a;
return hcf(b,a % b);
