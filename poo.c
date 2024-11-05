int hcf(int a,intb){
  if(b==0)
    return a;
return hcf(b,a % b);
